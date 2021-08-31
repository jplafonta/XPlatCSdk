#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenContentTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenContentTests::ContentTestData AutoGenContentTests::testData;

void AutoGenContentTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenContentTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenContentTests::AddTests()
{
    // Generated tests 
    AddTest("TestContentAdminDeleteContent", &AutoGenContentTests::TestContentAdminDeleteContent);

    AddTest("TestContentAdminGetContentList", &AutoGenContentTests::TestContentAdminGetContentList);

    AddTest("TestContentAdminGetContentUploadUrl", &AutoGenContentTests::TestContentAdminGetContentUploadUrl);

    AddTest("TestContentClientGetContentDownloadUrl", &AutoGenContentTests::TestContentClientGetContentDownloadUrl);

    AddTest("TestContentServerGetContentDownloadUrl", &AutoGenContentTests::TestContentServerGetContentDownloadUrl);
}

void AutoGenContentTests::ClassSetUp()
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

void AutoGenContentTests::ClassTearDown()
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

void AutoGenContentTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region AdminDeleteContent

void AutoGenContentTests::TestContentAdminDeleteContent(TestContext& testContext)
{
    struct AdminDeleteContentResult : public XAsyncResult
    {
        HRESULT Get(XAsyncBlock* async) override
        { 
            // No Get Result method needed
            return LogHR(XAsyncGetStatus(async, true));
        }

        HRESULT Validate()
        {
            return S_OK;
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminDeleteContentResult>>(testContext);

    PlayFab::ContentModels::DeleteContentRequest request;
    FillDeleteContentRequest( &request );
    LogDeleteContentRequest( &request, "TestContentAdminDeleteContent" );
    HRESULT hr = PFContentAdminDeleteContentAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFContentContentAdminDeleteContentAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetContentList

void AutoGenContentTests::TestContentAdminGetContentList(TestContext& testContext)
{
    struct AdminGetContentListResult : public XAsyncResult
    {
        PFContentGetContentListResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFContentAdminGetContentListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFContentGetContentListResult( result );
            return ValidatePFContentGetContentListResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetContentListResult>>(testContext);

    PlayFab::ContentModels::GetContentListRequest request;
    FillGetContentListRequest( &request );
    LogGetContentListRequest( &request, "TestContentAdminGetContentList" );
    HRESULT hr = PFContentAdminGetContentListAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFContentContentAdminGetContentListAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region AdminGetContentUploadUrl

void AutoGenContentTests::TestContentAdminGetContentUploadUrl(TestContext& testContext)
{
    struct AdminGetContentUploadUrlResult : public XAsyncResult
    {
        PFContentGetContentUploadUrlResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFContentAdminGetContentUploadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFContentAdminGetContentUploadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFContentGetContentUploadUrlResult( result );
            return ValidatePFContentGetContentUploadUrlResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<AdminGetContentUploadUrlResult>>(testContext);

    PlayFab::ContentModels::GetContentUploadUrlRequest request;
    FillGetContentUploadUrlRequest( &request );
    LogGetContentUploadUrlRequest( &request, "TestContentAdminGetContentUploadUrl" );
    HRESULT hr = PFContentAdminGetContentUploadUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFContentContentAdminGetContentUploadUrlAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetContentDownloadUrl

void AutoGenContentTests::TestContentClientGetContentDownloadUrl(TestContext& testContext)
{
    struct ClientGetContentDownloadUrlResult : public XAsyncResult
    {
        PFContentGetContentDownloadUrlResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFContentClientGetContentDownloadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFContentClientGetContentDownloadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFContentGetContentDownloadUrlResult( result );
            return ValidatePFContentGetContentDownloadUrlResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetContentDownloadUrlResult>>(testContext);

    PlayFab::ContentModels::GetContentDownloadUrlRequest request;
    FillGetContentDownloadUrlRequest( &request );
    LogGetContentDownloadUrlRequest( &request, "TestContentClientGetContentDownloadUrl" );
    HRESULT hr = PFContentClientGetContentDownloadUrlAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFContentContentClientGetContentDownloadUrlAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ServerGetContentDownloadUrl

void AutoGenContentTests::TestContentServerGetContentDownloadUrl(TestContext& testContext)
{
    struct ServerGetContentDownloadUrlResult : public XAsyncResult
    {
        PFContentGetContentDownloadUrlResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            size_t requiredBufferSize;
            RETURN_IF_FAILED(LogHR(PFContentServerGetContentDownloadUrlGetResultSize(async, &requiredBufferSize)));

            resultBuffer.resize(requiredBufferSize);
            return LogHR(PFContentServerGetContentDownloadUrlGetResult(async, resultBuffer.size(), resultBuffer.data(), &result, nullptr)); 
        }

        HRESULT Validate()
        {
            LogPFContentGetContentDownloadUrlResult( result );
            return ValidatePFContentGetContentDownloadUrlResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerGetContentDownloadUrlResult>>(testContext);

    PlayFab::ContentModels::GetContentDownloadUrlRequest request;
    FillGetContentDownloadUrlRequest( &request );
    LogGetContentDownloadUrlRequest( &request, "TestContentServerGetContentDownloadUrl" );
    HRESULT hr = PFContentServerGetContentDownloadUrlAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFContentContentServerGetContentDownloadUrlAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
