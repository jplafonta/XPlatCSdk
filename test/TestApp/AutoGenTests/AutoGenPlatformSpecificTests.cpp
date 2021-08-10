#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenPlatformSpecificTests.h"
#include "XAsyncHelper.h"
#include "playfab/PFAuthentication.h"

namespace PlayFabUnit
{

void AutoGenPlatformSpecificTests::Log(std::stringstream& ss)
{
    TestApp::LogPut(ss.str().c_str());
    ss.str(std::string());
    ss.clear();
}

HRESULT AutoGenPlatformSpecificTests::LogHR(HRESULT hr)
{
    if( TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        TestApp::Log("Result: 0x%0.8x", hr);
    }

    return hr;
}

void AutoGenPlatformSpecificTests::AddTests()
{
    // Generated prerequisites

    // Generated tests 
    AddTest("TestPlatformSpecificClientAndroidDevicePushNotificationRegistration", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientAndroidDevicePushNotificationRegistration);
    AddTest("TestPlatformSpecificClientConsumeMicrosoftStoreEntitlements", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumeMicrosoftStoreEntitlements);
    AddTest("TestPlatformSpecificClientConsumePS5Entitlements", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumePS5Entitlements);
    AddTest("TestPlatformSpecificClientConsumePSNEntitlements", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumePSNEntitlements);
    AddTest("TestPlatformSpecificClientConsumeXboxEntitlements", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumeXboxEntitlements);
    AddTest("TestPlatformSpecificClientRefreshPSNAuthToken", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientRefreshPSNAuthToken);
    AddTest("TestPlatformSpecificClientRegisterForIOSPushNotification", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientRegisterForIOSPushNotification);
    AddTest("TestPlatformSpecificClientRestoreIOSPurchases", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientRestoreIOSPurchases);
    AddTest("TestPlatformSpecificClientValidateAmazonIAPReceipt", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateAmazonIAPReceipt);
    AddTest("TestPlatformSpecificClientValidateGooglePlayPurchase", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateGooglePlayPurchase);
    AddTest("TestPlatformSpecificClientValidateIOSReceipt", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateIOSReceipt);
    AddTest("TestPlatformSpecificClientValidateWindowsStoreReceipt", &AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateWindowsStoreReceipt);
    AddTest("TestPlatformSpecificServerAwardSteamAchievement", &AutoGenPlatformSpecificTests::TestPlatformSpecificServerAwardSteamAchievement);
}

void AutoGenPlatformSpecificTests::ClassSetUp()
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
                hr = PFAuthenticationClientLoginGetResult(&async, &entityHandle);
                assert(SUCCEEDED(hr) && entityHandle != nullptr);

                hr = PFEntityGetPlayerCombinedInfo(entityHandle, &playerCombinedInfo);
                assert(SUCCEEDED(hr));
            }
        }
    }
}

void AutoGenPlatformSpecificTests::ClassTearDown()
{
    PFEntityCloseHandle(entityHandle);

    XAsyncBlock async{};
    HRESULT hr = PFCleanupAsync(stateHandle, &async);
    assert(SUCCEEDED(hr));

    hr = XAsyncGetStatus(&async, true);
    assert(SUCCEEDED(hr));

    UNREFERENCED_PARAMETER(hr);
}

void AutoGenPlatformSpecificTests::SetUp(TestContext& testContext)
{
    if (!entityHandle)
    {
        testContext.Skip("Skipping test because login failed");
    }


}


void AutoGenPlatformSpecificTests::TestPlatformSpecificClientAndroidDevicePushNotificationRegistration(TestContext& testContext)
{
    struct ClientAndroidDevicePushNotificationRegistrationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientAndroidDevicePushNotificationRegistrationResult>>(testContext);

    PlayFab::PlatformSpecificModels::AndroidDevicePushNotificationRegistrationRequest request;
    FillAndroidDevicePushNotificationRegistrationRequest( &request );
    LogAndroidDevicePushNotificationRegistrationRequest( &request, "TestPlatformSpecificClientAndroidDevicePushNotificationRegistration" );
    HRESULT hr = PFPlatformSpecificClientAndroidDevicePushNotificationRegistrationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientAndroidDevicePushNotificationRegistrationAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumeMicrosoftStoreEntitlements(TestContext& testContext)
{
    struct ClientConsumeMicrosoftStoreEntitlementsResult : public XAsyncResult
    {
        PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse( result );
            return ValidatePFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientConsumeMicrosoftStoreEntitlementsResult>>(testContext);

    PlayFab::PlatformSpecificModels::ConsumeMicrosoftStoreEntitlementsRequest request;
    FillConsumeMicrosoftStoreEntitlementsRequest( &request );
    LogConsumeMicrosoftStoreEntitlementsRequest( &request, "TestPlatformSpecificClientConsumeMicrosoftStoreEntitlements" );
    HRESULT hr = PFPlatformSpecificClientConsumeMicrosoftStoreEntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientConsumeMicrosoftStoreEntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumePS5Entitlements(TestContext& testContext)
{
    struct ClientConsumePS5EntitlementsResult : public XAsyncResult
    {
        PFPlatformSpecificConsumePS5EntitlementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientConsumePS5EntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificConsumePS5EntitlementsResult( result );
            return ValidatePFPlatformSpecificConsumePS5EntitlementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientConsumePS5EntitlementsResult>>(testContext);

    PlayFab::PlatformSpecificModels::ConsumePS5EntitlementsRequest request;
    FillConsumePS5EntitlementsRequest( &request );
    LogConsumePS5EntitlementsRequest( &request, "TestPlatformSpecificClientConsumePS5Entitlements" );
    HRESULT hr = PFPlatformSpecificClientConsumePS5EntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientConsumePS5EntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumePSNEntitlements(TestContext& testContext)
{
    struct ClientConsumePSNEntitlementsResult : public XAsyncResult
    {
        PFPlatformSpecificConsumePSNEntitlementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientConsumePSNEntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificConsumePSNEntitlementsResult( result );
            return ValidatePFPlatformSpecificConsumePSNEntitlementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientConsumePSNEntitlementsResult>>(testContext);

    PlayFab::PlatformSpecificModels::ConsumePSNEntitlementsRequest request;
    FillConsumePSNEntitlementsRequest( &request );
    LogConsumePSNEntitlementsRequest( &request, "TestPlatformSpecificClientConsumePSNEntitlements" );
    HRESULT hr = PFPlatformSpecificClientConsumePSNEntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientConsumePSNEntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientConsumeXboxEntitlements(TestContext& testContext)
{
    struct ClientConsumeXboxEntitlementsResult : public XAsyncResult
    {
        PFPlatformSpecificConsumeXboxEntitlementsResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientConsumeXboxEntitlementsGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificConsumeXboxEntitlementsResult( result );
            return ValidatePFPlatformSpecificConsumeXboxEntitlementsResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientConsumeXboxEntitlementsResult>>(testContext);

    PlayFab::PlatformSpecificModels::ConsumeXboxEntitlementsRequest request;
    FillConsumeXboxEntitlementsRequest( &request );
    LogConsumeXboxEntitlementsRequest( &request, "TestPlatformSpecificClientConsumeXboxEntitlements" );
    HRESULT hr = PFPlatformSpecificClientConsumeXboxEntitlementsAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientConsumeXboxEntitlementsAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientRefreshPSNAuthToken(TestContext& testContext)
{
    struct ClientRefreshPSNAuthTokenResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientRefreshPSNAuthTokenResult>>(testContext);

    PlayFab::PlatformSpecificModels::RefreshPSNAuthTokenRequest request;
    FillRefreshPSNAuthTokenRequest( &request );
    LogRefreshPSNAuthTokenRequest( &request, "TestPlatformSpecificClientRefreshPSNAuthToken" );
    HRESULT hr = PFPlatformSpecificClientRefreshPSNAuthTokenAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientRefreshPSNAuthTokenAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientRegisterForIOSPushNotification(TestContext& testContext)
{
    struct ClientRegisterForIOSPushNotificationResult : public XAsyncResult
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

    auto async = std::make_unique<XAsyncHelper<ClientRegisterForIOSPushNotificationResult>>(testContext);

    PlayFab::PlatformSpecificModels::RegisterForIOSPushNotificationRequest request;
    FillRegisterForIOSPushNotificationRequest( &request );
    LogRegisterForIOSPushNotificationRequest( &request, "TestPlatformSpecificClientRegisterForIOSPushNotification" );
    HRESULT hr = PFPlatformSpecificClientRegisterForIOSPushNotificationAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientRegisterForIOSPushNotificationAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientRestoreIOSPurchases(TestContext& testContext)
{
    struct ClientRestoreIOSPurchasesResult : public XAsyncResult
    {
        PFPlatformSpecificRestoreIOSPurchasesResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientRestoreIOSPurchasesGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificRestoreIOSPurchasesResult( result );
            return ValidatePFPlatformSpecificRestoreIOSPurchasesResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientRestoreIOSPurchasesResult>>(testContext);

    PlayFab::PlatformSpecificModels::RestoreIOSPurchasesRequest request;
    FillRestoreIOSPurchasesRequest( &request );
    LogRestoreIOSPurchasesRequest( &request, "TestPlatformSpecificClientRestoreIOSPurchases" );
    HRESULT hr = PFPlatformSpecificClientRestoreIOSPurchasesAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientRestoreIOSPurchasesAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateAmazonIAPReceipt(TestContext& testContext)
{
    struct ClientValidateAmazonIAPReceiptResult : public XAsyncResult
    {
        PFPlatformSpecificValidateAmazonReceiptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientValidateAmazonIAPReceiptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificValidateAmazonReceiptResult( result );
            return ValidatePFPlatformSpecificValidateAmazonReceiptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientValidateAmazonIAPReceiptResult>>(testContext);

    PlayFab::PlatformSpecificModels::ValidateAmazonReceiptRequest request;
    FillValidateAmazonReceiptRequest( &request );
    LogValidateAmazonReceiptRequest( &request, "TestPlatformSpecificClientValidateAmazonIAPReceipt" );
    HRESULT hr = PFPlatformSpecificClientValidateAmazonIAPReceiptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientValidateAmazonIAPReceiptAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateGooglePlayPurchase(TestContext& testContext)
{
    struct ClientValidateGooglePlayPurchaseResult : public XAsyncResult
    {
        PFPlatformSpecificValidateGooglePlayPurchaseResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientValidateGooglePlayPurchaseGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificValidateGooglePlayPurchaseResult( result );
            return ValidatePFPlatformSpecificValidateGooglePlayPurchaseResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientValidateGooglePlayPurchaseResult>>(testContext);

    PlayFab::PlatformSpecificModels::ValidateGooglePlayPurchaseRequest request;
    FillValidateGooglePlayPurchaseRequest( &request );
    LogValidateGooglePlayPurchaseRequest( &request, "TestPlatformSpecificClientValidateGooglePlayPurchase" );
    HRESULT hr = PFPlatformSpecificClientValidateGooglePlayPurchaseAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientValidateGooglePlayPurchaseAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateIOSReceipt(TestContext& testContext)
{
    struct ClientValidateIOSReceiptResult : public XAsyncResult
    {
        PFPlatformSpecificValidateIOSReceiptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientValidateIOSReceiptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificValidateIOSReceiptResult( result );
            return ValidatePFPlatformSpecificValidateIOSReceiptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientValidateIOSReceiptResult>>(testContext);

    PlayFab::PlatformSpecificModels::ValidateIOSReceiptRequest request;
    FillValidateIOSReceiptRequest( &request );
    LogValidateIOSReceiptRequest( &request, "TestPlatformSpecificClientValidateIOSReceipt" );
    HRESULT hr = PFPlatformSpecificClientValidateIOSReceiptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientValidateIOSReceiptAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificClientValidateWindowsStoreReceipt(TestContext& testContext)
{
    struct ClientValidateWindowsStoreReceiptResult : public XAsyncResult
    {
        PFPlatformSpecificValidateWindowsReceiptResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificClientValidateWindowsStoreReceiptGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificValidateWindowsReceiptResult( result );
            return ValidatePFPlatformSpecificValidateWindowsReceiptResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ClientValidateWindowsStoreReceiptResult>>(testContext);

    PlayFab::PlatformSpecificModels::ValidateWindowsReceiptRequest request;
    FillValidateWindowsReceiptRequest( &request );
    LogValidateWindowsReceiptRequest( &request, "TestPlatformSpecificClientValidateWindowsStoreReceipt" );
    HRESULT hr = PFPlatformSpecificClientValidateWindowsStoreReceiptAsync(entityHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificClientValidateWindowsStoreReceiptAsync", hr);
        return;
    }
    async.release(); 
} 
void AutoGenPlatformSpecificTests::TestPlatformSpecificServerAwardSteamAchievement(TestContext& testContext)
{
    struct ServerAwardSteamAchievementResult : public XAsyncResult
    {
        PFPlatformSpecificAwardSteamAchievementResult* result = nullptr;
        HRESULT Get(XAsyncBlock* async) override
        { 
            return LogHR(PFPlatformSpecificServerAwardSteamAchievementGetResult(async, &resultHandle, &result)); 
        }

        HRESULT Validate()
        {
            LogPFPlatformSpecificAwardSteamAchievementResult( result );
            return ValidatePFPlatformSpecificAwardSteamAchievementResult( result );
        }
    };

    auto async = std::make_unique<XAsyncHelper<ServerAwardSteamAchievementResult>>(testContext);

    PlayFab::PlatformSpecificModels::AwardSteamAchievementRequest request;
    FillAwardSteamAchievementRequest( &request );
    LogAwardSteamAchievementRequest( &request, "TestPlatformSpecificServerAwardSteamAchievement" );
    HRESULT hr = PFPlatformSpecificServerAwardSteamAchievementAsync(stateHandle, &request, &async->asyncBlock); 
    if (FAILED(hr))
    {
        testContext.Fail("PFPlatformSpecificPlatformSpecificServerAwardSteamAchievementAsync", hr);
        return;
    }
    async.release(); 
} 

}
