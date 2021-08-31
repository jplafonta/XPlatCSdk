#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenSegmentsTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenSegmentsTests::SegmentsTestData AutoGenSegmentsTests::testData;

void AutoGenSegmentsTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenSegmentsTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenSegmentsTests::AddTests()
{
    // Generated tests 
    AddTest("TestSegmentsAdminCreateSegment", &AutoGenSegmentsTests::TestSegmentsAdminCreateSegment);

    AddTest("TestSegmentsAdminDeleteSegment", &AutoGenSegmentsTests::TestSegmentsAdminDeleteSegment);

    AddTest("TestSegmentsAdminGetSegments", &AutoGenSegmentsTests::TestSegmentsAdminGetSegments);

    AddTest("TestSegmentsAdminUpdateSegment", &AutoGenSegmentsTests::TestSegmentsAdminUpdateSegment);
}

void AutoGenSegmentsTests::ClassSetUp()
{
    HRESULT hr = PFAdminInitialize(testTitleData.titleId.data(), testTitleData.developerSecretKey.data(), nullptr, &stateHandle);
    assert(SUCCEEDED(hr));
    if (SUCCEEDED(hr))
    {
        PFAuthenticationLoginWithCustomIDRequest request{};
        request.customId = "CustomId";
        bool createAccount = true;
        request.createAccount = &createAccount;
        request.titleId = testTitleData.titleId.data();

        PFGetPlayerCombinedInfoRequestParams combinedInfoRequestParams{};
        combinedInfoRequestParams.getCharacterInventories = true;
        combinedInfoRequestParams.getCharacterList = true;
        combinedInfoRequestParams.getPlayerProfile = true;
        combinedInfoRequestParams.getPlayerStatistics = true;
        combinedInfoRequestParams.getTitleData = true;
        combinedInfoRequestParams.getUserAccountInfo = true;
        combinedInfoRequestParams.getUserData = true;
        combinedInfoRequestParams.getUserInventory = true;
        combinedInfoRequestParams.getUserReadOnlyData = true;
        combinedInfoRequestParams.getUserVirtualCurrency = true;
        request.infoRequestParameters = &combinedInfoRequestParams;

        XAsyncBlock async{};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationClientLoginGetResult(&async, &titlePlayerHandle);
                assert(SUCCEEDED(hr) && titlePlayerHandle);

                hr = PFTitlePlayerGetEntityHandle(titlePlayerHandle, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle);

                hr = PFTitlePlayerGetPlayerCombinedInfo(titlePlayerHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }

        request.customId = "CustomId2";
        async = {};
        hr = PFAuthenticationClientLoginWithCustomIDAsync(stateHandle, &request, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationClientLoginGetResult(&async, &titlePlayerHandle2);
                assert(SUCCEEDED(hr) && titlePlayerHandle2);

                hr = PFTitlePlayerGetEntityHandle(titlePlayerHandle2, &entityHandle2);
                assert(SUCCEEDED(hr) && entityHandle2);

                hr = PFTitlePlayerGetPlayerCombinedInfo(titlePlayerHandle2, &playerCombinedInfo2);
                assert(SUCCEEDED(hr));
            }
        }

        PFAuthenticationGetEntityTokenRequest titleTokenRequest{};
        async = {};
        hr = PFAuthenticationGetEntityTokenAsync(stateHandle, &titleTokenRequest, &async);
        assert(SUCCEEDED(hr));
        if (SUCCEEDED(hr))
        {
            // Synchronously what for login to complete
            hr = XAsyncGetStatus(&async, true);
            assert(SUCCEEDED(hr));
            
            if (SUCCEEDED(hr))
            {
                hr = PFAuthenticationGetEntityTokenGetResult(&async, &titleEntityHandle);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenSegmentsTests::ClassTearDown()
{
    PFTitlePlayerCloseHandle(titlePlayerHandle);
    PFEntityCloseHandle(entityHandle);
    PFEntityCloseHandle(titleEntityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFUninitializeAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenSegmentsTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminCreateSegment

void AutoGenSegmentsTests::TestSegmentsAdminCreateSegment(TestContext& testContext)
{
    struct AdminCreateSegmentResult : public XAsyncResult
    {
        PFSegmentsCreateSegmentResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFSegmentsAdminCreateSegmentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFSegmentsAdminCreateSegmentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFSegmentsCreateSegmentResponse( result );
            return ValidatePFSegmentsCreateSegmentResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminCreateSegmentResult>>(testContext);

    PlayFab::SegmentsModels::CreateSegmentRequest request;
    FillCreateSegmentRequest( &request );
    LogCreateSegmentRequest( &request, "TestSegmentsAdminCreateSegment" );
    HRESULT hr = PFSegmentsAdminCreateSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSegmentsSegmentsAdminCreateSegmentAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminDeleteSegment

void AutoGenSegmentsTests::TestSegmentsAdminDeleteSegment(TestContext& testContext)
{
    struct AdminDeleteSegmentResult : public XAsyncResult
    {
        PFSegmentsDeleteSegmentsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFSegmentsAdminDeleteSegmentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFSegmentsAdminDeleteSegmentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFSegmentsDeleteSegmentsResponse( result );
            return ValidatePFSegmentsDeleteSegmentsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminDeleteSegmentResult>>(testContext);

    PlayFab::SegmentsModels::DeleteSegmentRequest request;
    FillDeleteSegmentRequest( &request );
    LogDeleteSegmentRequest( &request, "TestSegmentsAdminDeleteSegment" );
    HRESULT hr = PFSegmentsAdminDeleteSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSegmentsSegmentsAdminDeleteSegmentAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetSegments

void AutoGenSegmentsTests::TestSegmentsAdminGetSegments(TestContext& testContext)
{
    struct AdminGetSegmentsResult : public XAsyncResult
    {
        PFSegmentsGetSegmentsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFSegmentsAdminGetSegmentsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFSegmentsGetSegmentsResponse( result );
            return ValidatePFSegmentsGetSegmentsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetSegmentsResult>>(testContext);

    PlayFab::SegmentsModels::GetSegmentsRequest request;
    FillGetSegmentsRequest( &request );
    LogGetSegmentsRequest( &request, "TestSegmentsAdminGetSegments" );
    HRESULT hr = PFSegmentsAdminGetSegmentsAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSegmentsSegmentsAdminGetSegmentsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminUpdateSegment

void AutoGenSegmentsTests::TestSegmentsAdminUpdateSegment(TestContext& testContext)
{
    struct AdminUpdateSegmentResult : public XAsyncResult
    {
        PFSegmentsUpdateSegmentResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFSegmentsAdminUpdateSegmentGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFSegmentsAdminUpdateSegmentGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFSegmentsUpdateSegmentResponse( result );
            return ValidatePFSegmentsUpdateSegmentResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminUpdateSegmentResult>>(testContext);

    PlayFab::SegmentsModels::UpdateSegmentRequest request;
    FillUpdateSegmentRequest( &request );
    LogUpdateSegmentRequest( &request, "TestSegmentsAdminUpdateSegment" );
    HRESULT hr = PFSegmentsAdminUpdateSegmentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFSegmentsSegmentsAdminUpdateSegmentAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
