#pragma once

#include "PlatformSpecificDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class PlatformSpecificAPI
{
public:
    PlatformSpecificAPI() = delete;
    PlatformSpecificAPI(const PlatformSpecificAPI& source) = delete;
    PlatformSpecificAPI& operator=(const PlatformSpecificAPI& source) = delete;
    ~PlatformSpecificAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> ClientAndroidDevicePushNotificationRegistration(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ConsumeMicrosoftStoreEntitlementsResponse> ClientConsumeMicrosoftStoreEntitlements(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ConsumePS5EntitlementsResult> ClientConsumePS5Entitlements(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificConsumePS5EntitlementsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ConsumePSNEntitlementsResult> ClientConsumePSNEntitlements(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificConsumePSNEntitlementsRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ConsumeXboxEntitlementsResult> ClientConsumeXboxEntitlements(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificConsumeXboxEntitlementsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientRefreshPSNAuthToken(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificRefreshPSNAuthTokenRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientRegisterForIOSPushNotification(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificRegisterForIOSPushNotificationRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::RestoreIOSPurchasesResult> ClientRestoreIOSPurchases(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificRestoreIOSPurchasesRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ValidateAmazonReceiptResult> ClientValidateAmazonIAPReceipt(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificValidateAmazonReceiptRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ValidateGooglePlayPurchaseResult> ClientValidateGooglePlayPurchase(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificValidateGooglePlayPurchaseRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ValidateIOSReceiptResult> ClientValidateIOSReceipt(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificValidateIOSReceiptRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::ValidateWindowsReceiptResult> ClientValidateWindowsStoreReceipt(SharedPtr<TitlePlayer> entity, const PFPlatformSpecificValidateWindowsReceiptRequest& request, const TaskQueue& queue);
    static AsyncOp<PlatformSpecificModels::AwardSteamAchievementResult> ServerAwardSteamAchievement(SharedPtr<GlobalState const> state, const PFPlatformSpecificAwardSteamAchievementRequest& request, const TaskQueue& queue);
};

}
