#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenLocalizationTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenLocalizationTests::LocalizationTestData AutoGenLocalizationTests::testData;

void AutoGenLocalizationTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenLocalizationTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenLocalizationTests::AddTests()
{
    // Generated tests 
    AddTest("TestLocalizationGetLanguageList", &AutoGenLocalizationTests::TestLocalizationGetLanguageList);
}

void AutoGenLocalizationTests::ClassSetUp()
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

void AutoGenLocalizationTests::ClassTearDown()
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

void AutoGenLocalizationTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region GetLanguageList

void AutoGenLocalizationTests::TestLocalizationGetLanguageList(TestContext& testContext)
{
    struct GetLanguageListResult : public XAsyncResult
    {
        PFLocalizationGetLanguageListResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFLocalizationGetLanguageListGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFLocalizationGetLanguageListResponse( result );
            return ValidatePFLocalizationGetLanguageListResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<GetLanguageListResult>>(testContext);

    PlayFab::LocalizationModels::GetLanguageListRequest request;
    FillGetLanguageListRequest( &request );
    LogGetLanguageListRequest( &request, "TestLocalizationGetLanguageList" );
    HRESULT hr = PFLocalizationGetLanguageListAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFLocalizationLocalizationGetLanguageListAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
