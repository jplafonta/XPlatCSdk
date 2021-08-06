#pragma once

#include "PlatformSpecificDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class PlatformSpecificAPI
{
public:
    PlatformSpecificAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    PlatformSpecificAPI(const PlatformSpecificAPI& source) = delete;
    PlatformSpecificAPI& operator=(const PlatformSpecificAPI& source) = delete;
    ~PlatformSpecificAPI() = default;

    // ------------ Generated API calls
    AsyncOp<void> ClientAndroidDevicePushNotificationRegistration(const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ConsumeMicrosoftStoreEntitlementsResponse> ClientConsumeMicrosoftStoreEntitlements(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ConsumePS5EntitlementsResult> ClientConsumePS5Entitlements(const PFPlatformSpecificConsumePS5EntitlementsRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ConsumePSNEntitlementsResult> ClientConsumePSNEntitlements(const PFPlatformSpecificConsumePSNEntitlementsRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ConsumeXboxEntitlementsResult> ClientConsumeXboxEntitlements(const PFPlatformSpecificConsumeXboxEntitlementsRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientRefreshPSNAuthToken(const PFPlatformSpecificRefreshPSNAuthTokenRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientRegisterForIOSPushNotification(const PFPlatformSpecificRegisterForIOSPushNotificationRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::RestoreIOSPurchasesResult> ClientRestoreIOSPurchases(const PFPlatformSpecificRestoreIOSPurchasesRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ValidateAmazonReceiptResult> ClientValidateAmazonIAPReceipt(const PFPlatformSpecificValidateAmazonReceiptRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ValidateGooglePlayPurchaseResult> ClientValidateGooglePlayPurchase(const PFPlatformSpecificValidateGooglePlayPurchaseRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ValidateIOSReceiptResult> ClientValidateIOSReceipt(const PFPlatformSpecificValidateIOSReceiptRequest& request, const TaskQueue& queue) const;
    AsyncOp<PlatformSpecificModels::ValidateWindowsReceiptResult> ClientValidateWindowsStoreReceipt(const PFPlatformSpecificValidateWindowsReceiptRequest& request, const TaskQueue& queue) const;
    static AsyncOp<PlatformSpecificModels::AwardSteamAchievementResult> ServerAwardSteamAchievement(const PFPlatformSpecificAwardSteamAchievementRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
