#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAdvertisingTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

AutoGenAdvertisingTests::AdvertisingTestData AutoGenAdvertisingTests::testData;

void AutoGenAdvertisingTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenAdvertisingTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenAdvertisingTests::AddTests()
{
    // Generated tests 
    AddTest("TestAdvertisingClientAttributeInstall", &AutoGenAdvertisingTests::TestAdvertisingClientAttributeInstall);

    AddTest("TestAdvertisingClientGetAdPlacements", &AutoGenAdvertisingTests::TestAdvertisingClientGetAdPlacements);

    AddTest("TestAdvertisingClientReportAdActivity", &AutoGenAdvertisingTests::TestAdvertisingClientReportAdActivity);

    AddTest("TestAdvertisingClientRewardAdActivity", &AutoGenAdvertisingTests::TestAdvertisingClientRewardAdActivity);
}

void AutoGenAdvertisingTests::ClassSetUp()
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

void AutoGenAdvertisingTests::ClassTearDown()
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

void AutoGenAdvertisingTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


#pragma region ClientAttributeInstall

void AutoGenAdvertisingTests::TestAdvertisingClientAttributeInstall(TestContext& testContext)
{
    struct ClientAttributeInstallResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientAttributeInstallResult>>(testContext);

    PlayFab::AdvertisingModels::AttributeInstallRequest request;
    FillAttributeInstallRequest( &request );
    LogAttributeInstallRequest( &request, "TestAdvertisingClientAttributeInstall" );
    HRESULT hr = PFAdvertisingClientAttributeInstallAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAdvertisingAdvertisingClientAttributeInstallAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientGetAdPlacements

void AutoGenAdvertisingTests::TestAdvertisingClientGetAdPlacements(TestContext& testContext)
{
    struct ClientGetAdPlacementsResult : public XAsyncResult
    {
        PFAdvertisingGetAdPlacementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAdvertisingClientGetAdPlacementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAdvertisingGetAdPlacementsResult( result );
            return ValidatePFAdvertisingGetAdPlacementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientGetAdPlacementsResult>>(testContext);

    PlayFab::AdvertisingModels::GetAdPlacementsRequest request;
    FillGetAdPlacementsRequest( &request );
    LogGetAdPlacementsRequest( &request, "TestAdvertisingClientGetAdPlacements" );
    HRESULT hr = PFAdvertisingClientGetAdPlacementsAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAdvertisingAdvertisingClientGetAdPlacementsAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientReportAdActivity

void AutoGenAdvertisingTests::TestAdvertisingClientReportAdActivity(TestContext& testContext)
{
    struct ClientReportAdActivityResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientReportAdActivityResult>>(testContext);

    PlayFab::AdvertisingModels::ReportAdActivityRequest request;
    FillReportAdActivityRequest( &request );
    LogReportAdActivityRequest( &request, "TestAdvertisingClientReportAdActivity" );
    HRESULT hr = PFAdvertisingClientReportAdActivityAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAdvertisingAdvertisingClientReportAdActivityAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion

#pragma region ClientRewardAdActivity

void AutoGenAdvertisingTests::TestAdvertisingClientRewardAdActivity(TestContext& testContext)
{
    struct ClientRewardAdActivityResult : public XAsyncResult
    {
        PFAdvertisingRewardAdActivityResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFAdvertisingClientRewardAdActivityGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFAdvertisingRewardAdActivityResult( result );
            return ValidatePFAdvertisingRewardAdActivityResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientRewardAdActivityResult>>(testContext);

    PlayFab::AdvertisingModels::RewardAdActivityRequest request;
    FillRewardAdActivityRequest( &request );
    LogRewardAdActivityRequest( &request, "TestAdvertisingClientRewardAdActivity" );
    HRESULT hr = PFAdvertisingClientRewardAdActivityAsync(titlePlayerHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFAdvertisingAdvertisingClientRewardAdActivityAsync", hr);
        return;
    }
    async.release(); 
}

#pragma endregion


}
