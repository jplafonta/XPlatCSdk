#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/PlatformSpecific/PlatformSpecificDataModels.h"

namespace PlayFabUnit
{

class AutoGenPlatformSpecificTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestPlatformSpecificClientAndroidDevicePushNotificationRegistration(TestContext& testContext);

    void TestPlatformSpecificClientConsumeMicrosoftStoreEntitlements(TestContext& testContext);

    void TestPlatformSpecificClientConsumePS5Entitlements(TestContext& testContext);

    void TestPlatformSpecificClientConsumePSNEntitlements(TestContext& testContext);

    void TestPlatformSpecificClientConsumeXboxEntitlements(TestContext& testContext);

    void TestPlatformSpecificClientRefreshPSNAuthToken(TestContext& testContext);

    void TestPlatformSpecificClientRegisterForIOSPushNotification(TestContext& testContext);

    void TestPlatformSpecificClientRestoreIOSPurchases(TestContext& testContext);

    void TestPlatformSpecificClientValidateAmazonIAPReceipt(TestContext& testContext);

    void TestPlatformSpecificClientValidateGooglePlayPurchase(TestContext& testContext);

    void TestPlatformSpecificClientValidateIOSReceipt(TestContext& testContext);

    void TestPlatformSpecificClientValidateWindowsStoreReceipt(TestContext& testContext);

    void TestPlatformSpecificServerAwardSteamAchievement(TestContext& testContext);


protected:
    void AddTests();

    static void LogAndroidDevicePushNotificationRegistrationRequest( PlayFab::PlatformSpecificModels::AndroidDevicePushNotificationRegistrationRequest* request, const char* testName );
    static void FillAndroidDevicePushNotificationRegistrationRequest( PlayFab::PlatformSpecificModels::AndroidDevicePushNotificationRegistrationRequest* request );

    static void LogConsumeMicrosoftStoreEntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumeMicrosoftStoreEntitlementsRequest* request, const char* testName );
    static void FillConsumeMicrosoftStoreEntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumeMicrosoftStoreEntitlementsRequest* request );
    static HRESULT LogPFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse( PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse* result );
    static HRESULT ValidatePFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse( PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse* result );

    static void LogConsumePS5EntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumePS5EntitlementsRequest* request, const char* testName );
    static void FillConsumePS5EntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumePS5EntitlementsRequest* request );
    static HRESULT LogPFPlatformSpecificConsumePS5EntitlementsResult( PFPlatformSpecificConsumePS5EntitlementsResult* result );
    static HRESULT ValidatePFPlatformSpecificConsumePS5EntitlementsResult( PFPlatformSpecificConsumePS5EntitlementsResult* result );

    static void LogConsumePSNEntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumePSNEntitlementsRequest* request, const char* testName );
    static void FillConsumePSNEntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumePSNEntitlementsRequest* request );
    static HRESULT LogPFPlatformSpecificConsumePSNEntitlementsResult( PFPlatformSpecificConsumePSNEntitlementsResult* result );
    static HRESULT ValidatePFPlatformSpecificConsumePSNEntitlementsResult( PFPlatformSpecificConsumePSNEntitlementsResult* result );

    static void LogConsumeXboxEntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumeXboxEntitlementsRequest* request, const char* testName );
    static void FillConsumeXboxEntitlementsRequest( PlayFab::PlatformSpecificModels::ConsumeXboxEntitlementsRequest* request );
    static HRESULT LogPFPlatformSpecificConsumeXboxEntitlementsResult( PFPlatformSpecificConsumeXboxEntitlementsResult* result );
    static HRESULT ValidatePFPlatformSpecificConsumeXboxEntitlementsResult( PFPlatformSpecificConsumeXboxEntitlementsResult* result );

    static void LogRefreshPSNAuthTokenRequest( PlayFab::PlatformSpecificModels::RefreshPSNAuthTokenRequest* request, const char* testName );
    static void FillRefreshPSNAuthTokenRequest( PlayFab::PlatformSpecificModels::RefreshPSNAuthTokenRequest* request );

    static void LogRegisterForIOSPushNotificationRequest( PlayFab::PlatformSpecificModels::RegisterForIOSPushNotificationRequest* request, const char* testName );
    static void FillRegisterForIOSPushNotificationRequest( PlayFab::PlatformSpecificModels::RegisterForIOSPushNotificationRequest* request );

    static void LogRestoreIOSPurchasesRequest( PlayFab::PlatformSpecificModels::RestoreIOSPurchasesRequest* request, const char* testName );
    static void FillRestoreIOSPurchasesRequest( PlayFab::PlatformSpecificModels::RestoreIOSPurchasesRequest* request );
    static HRESULT LogPFPlatformSpecificRestoreIOSPurchasesResult( PFPlatformSpecificRestoreIOSPurchasesResult* result );
    static HRESULT ValidatePFPlatformSpecificRestoreIOSPurchasesResult( PFPlatformSpecificRestoreIOSPurchasesResult* result );

    static void LogValidateAmazonReceiptRequest( PlayFab::PlatformSpecificModels::ValidateAmazonReceiptRequest* request, const char* testName );
    static void FillValidateAmazonReceiptRequest( PlayFab::PlatformSpecificModels::ValidateAmazonReceiptRequest* request );
    static HRESULT LogPFPlatformSpecificValidateAmazonReceiptResult( PFPlatformSpecificValidateAmazonReceiptResult* result );
    static HRESULT ValidatePFPlatformSpecificValidateAmazonReceiptResult( PFPlatformSpecificValidateAmazonReceiptResult* result );

    static void LogValidateGooglePlayPurchaseRequest( PlayFab::PlatformSpecificModels::ValidateGooglePlayPurchaseRequest* request, const char* testName );
    static void FillValidateGooglePlayPurchaseRequest( PlayFab::PlatformSpecificModels::ValidateGooglePlayPurchaseRequest* request );
    static HRESULT LogPFPlatformSpecificValidateGooglePlayPurchaseResult( PFPlatformSpecificValidateGooglePlayPurchaseResult* result );
    static HRESULT ValidatePFPlatformSpecificValidateGooglePlayPurchaseResult( PFPlatformSpecificValidateGooglePlayPurchaseResult* result );

    static void LogValidateIOSReceiptRequest( PlayFab::PlatformSpecificModels::ValidateIOSReceiptRequest* request, const char* testName );
    static void FillValidateIOSReceiptRequest( PlayFab::PlatformSpecificModels::ValidateIOSReceiptRequest* request );
    static HRESULT LogPFPlatformSpecificValidateIOSReceiptResult( PFPlatformSpecificValidateIOSReceiptResult* result );
    static HRESULT ValidatePFPlatformSpecificValidateIOSReceiptResult( PFPlatformSpecificValidateIOSReceiptResult* result );

    static void LogValidateWindowsReceiptRequest( PlayFab::PlatformSpecificModels::ValidateWindowsReceiptRequest* request, const char* testName );
    static void FillValidateWindowsReceiptRequest( PlayFab::PlatformSpecificModels::ValidateWindowsReceiptRequest* request );
    static HRESULT LogPFPlatformSpecificValidateWindowsReceiptResult( PFPlatformSpecificValidateWindowsReceiptResult* result );
    static HRESULT ValidatePFPlatformSpecificValidateWindowsReceiptResult( PFPlatformSpecificValidateWindowsReceiptResult* result );

    static void LogAwardSteamAchievementRequest( PlayFab::PlatformSpecificModels::AwardSteamAchievementRequest* request, const char* testName );
    static void FillAwardSteamAchievementRequest( PlayFab::PlatformSpecificModels::AwardSteamAchievementRequest* request );
    static HRESULT LogPFPlatformSpecificAwardSteamAchievementResult( PFPlatformSpecificAwardSteamAchievementResult* result );
    static HRESULT ValidatePFPlatformSpecificAwardSteamAchievementResult( PFPlatformSpecificAwardSteamAchievementResult* result );

    struct PlatformSpecificTestData
    {
        ~PlatformSpecificTestData()
        {

        }

    };

    static PlatformSpecificTestData testData;

public:
    PFStateHandle stateHandle{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle2{ nullptr };
    PFEntityHandle entityHandle2{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo2{ nullptr };
    PFEntityHandle titleEntityHandle{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
