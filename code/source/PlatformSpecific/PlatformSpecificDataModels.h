#pragma once

#include <playfab/PFPlatformSpecificDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace PlatformSpecificModels
{

// PlatformSpecific Classes
struct AndroidDevicePushNotificationRegistrationRequest : public PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest, public BaseModel
{
    AndroidDevicePushNotificationRegistrationRequest();
    AndroidDevicePushNotificationRegistrationRequest(const AndroidDevicePushNotificationRegistrationRequest& src);
    AndroidDevicePushNotificationRegistrationRequest(AndroidDevicePushNotificationRegistrationRequest&& src);
    AndroidDevicePushNotificationRegistrationRequest(const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest& src);
    AndroidDevicePushNotificationRegistrationRequest& operator=(const AndroidDevicePushNotificationRegistrationRequest&) = delete;
    ~AndroidDevicePushNotificationRegistrationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_confirmationMessage;
    String m_deviceToken;
    StdExtra::optional<bool> m_sendPushNotificationConfirmation;
};

struct MicrosoftStorePayload : public PFPlatformSpecificMicrosoftStorePayload, public SerializableModel
{
    MicrosoftStorePayload();
    MicrosoftStorePayload(const MicrosoftStorePayload& src);
    MicrosoftStorePayload(MicrosoftStorePayload&& src);
    MicrosoftStorePayload(const PFPlatformSpecificMicrosoftStorePayload& src);
    MicrosoftStorePayload& operator=(const MicrosoftStorePayload&) = delete;
    ~MicrosoftStorePayload() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_collectionsMsIdKey;
    String m_userId;
    String m_xboxToken;
};

struct ConsumeMicrosoftStoreEntitlementsRequest : public PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest, public BaseModel
{
    ConsumeMicrosoftStoreEntitlementsRequest();
    ConsumeMicrosoftStoreEntitlementsRequest(const ConsumeMicrosoftStoreEntitlementsRequest& src);
    ConsumeMicrosoftStoreEntitlementsRequest(ConsumeMicrosoftStoreEntitlementsRequest&& src);
    ConsumeMicrosoftStoreEntitlementsRequest(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest& src);
    ConsumeMicrosoftStoreEntitlementsRequest& operator=(const ConsumeMicrosoftStoreEntitlementsRequest&) = delete;
    ~ConsumeMicrosoftStoreEntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    MicrosoftStorePayload m_marketplaceSpecificData;
};

struct ConsumeMicrosoftStoreEntitlementsResponse : public PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse, public BaseModel, public ApiResult
{
    ConsumeMicrosoftStoreEntitlementsResponse();
    ConsumeMicrosoftStoreEntitlementsResponse(const ConsumeMicrosoftStoreEntitlementsResponse& src);
    ConsumeMicrosoftStoreEntitlementsResponse(ConsumeMicrosoftStoreEntitlementsResponse&& src);
    ConsumeMicrosoftStoreEntitlementsResponse(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse& src);
    ConsumeMicrosoftStoreEntitlementsResponse& operator=(const ConsumeMicrosoftStoreEntitlementsResponse&) = delete;
    ~ConsumeMicrosoftStoreEntitlementsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_items;
};

struct PlayStation5Payload : public PFPlatformSpecificPlayStation5Payload, public BaseModel
{
    PlayStation5Payload();
    PlayStation5Payload(const PlayStation5Payload& src);
    PlayStation5Payload(PlayStation5Payload&& src);
    PlayStation5Payload(const PFPlatformSpecificPlayStation5Payload& src);
    PlayStation5Payload& operator=(const PlayStation5Payload&) = delete;
    ~PlayStation5Payload() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_ids;
    String m_serviceLabel;
};

struct ConsumePS5EntitlementsRequest : public PFPlatformSpecificConsumePS5EntitlementsRequest, public BaseModel
{
    ConsumePS5EntitlementsRequest();
    ConsumePS5EntitlementsRequest(const ConsumePS5EntitlementsRequest& src);
    ConsumePS5EntitlementsRequest(ConsumePS5EntitlementsRequest&& src);
    ConsumePS5EntitlementsRequest(const PFPlatformSpecificConsumePS5EntitlementsRequest& src);
    ConsumePS5EntitlementsRequest& operator=(const ConsumePS5EntitlementsRequest&) = delete;
    ~ConsumePS5EntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PlayStation5Payload m_marketplaceSpecificData;
};

struct ConsumePS5EntitlementsResult : public PFPlatformSpecificConsumePS5EntitlementsResult, public BaseModel, public ApiResult
{
    ConsumePS5EntitlementsResult();
    ConsumePS5EntitlementsResult(const ConsumePS5EntitlementsResult& src);
    ConsumePS5EntitlementsResult(ConsumePS5EntitlementsResult&& src);
    ConsumePS5EntitlementsResult(const PFPlatformSpecificConsumePS5EntitlementsResult& src);
    ConsumePS5EntitlementsResult& operator=(const ConsumePS5EntitlementsResult&) = delete;
    ~ConsumePS5EntitlementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_items;
};

struct ConsumePSNEntitlementsRequest : public PFPlatformSpecificConsumePSNEntitlementsRequest, public BaseModel
{
    ConsumePSNEntitlementsRequest();
    ConsumePSNEntitlementsRequest(const ConsumePSNEntitlementsRequest& src);
    ConsumePSNEntitlementsRequest(ConsumePSNEntitlementsRequest&& src);
    ConsumePSNEntitlementsRequest(const PFPlatformSpecificConsumePSNEntitlementsRequest& src);
    ConsumePSNEntitlementsRequest& operator=(const ConsumePSNEntitlementsRequest&) = delete;
    ~ConsumePSNEntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ConsumePSNEntitlementsResult : public PFPlatformSpecificConsumePSNEntitlementsResult, public BaseModel, public ApiResult
{
    ConsumePSNEntitlementsResult();
    ConsumePSNEntitlementsResult(const ConsumePSNEntitlementsResult& src);
    ConsumePSNEntitlementsResult(ConsumePSNEntitlementsResult&& src);
    ConsumePSNEntitlementsResult(const PFPlatformSpecificConsumePSNEntitlementsResult& src);
    ConsumePSNEntitlementsResult& operator=(const ConsumePSNEntitlementsResult&) = delete;
    ~ConsumePSNEntitlementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_itemsGranted;
};

struct ConsumeXboxEntitlementsRequest : public PFPlatformSpecificConsumeXboxEntitlementsRequest, public BaseModel
{
    ConsumeXboxEntitlementsRequest();
    ConsumeXboxEntitlementsRequest(const ConsumeXboxEntitlementsRequest& src);
    ConsumeXboxEntitlementsRequest(ConsumeXboxEntitlementsRequest&& src);
    ConsumeXboxEntitlementsRequest(const PFPlatformSpecificConsumeXboxEntitlementsRequest& src);
    ConsumeXboxEntitlementsRequest& operator=(const ConsumeXboxEntitlementsRequest&) = delete;
    ~ConsumeXboxEntitlementsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_xboxToken;
};

struct ConsumeXboxEntitlementsResult : public PFPlatformSpecificConsumeXboxEntitlementsResult, public BaseModel, public ApiResult
{
    ConsumeXboxEntitlementsResult();
    ConsumeXboxEntitlementsResult(const ConsumeXboxEntitlementsResult& src);
    ConsumeXboxEntitlementsResult(ConsumeXboxEntitlementsResult&& src);
    ConsumeXboxEntitlementsResult(const PFPlatformSpecificConsumeXboxEntitlementsResult& src);
    ConsumeXboxEntitlementsResult& operator=(const ConsumeXboxEntitlementsResult&) = delete;
    ~ConsumeXboxEntitlementsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_items;
};

struct RefreshPSNAuthTokenRequest : public PFPlatformSpecificRefreshPSNAuthTokenRequest, public BaseModel
{
    RefreshPSNAuthTokenRequest();
    RefreshPSNAuthTokenRequest(const RefreshPSNAuthTokenRequest& src);
    RefreshPSNAuthTokenRequest(RefreshPSNAuthTokenRequest&& src);
    RefreshPSNAuthTokenRequest(const PFPlatformSpecificRefreshPSNAuthTokenRequest& src);
    RefreshPSNAuthTokenRequest& operator=(const RefreshPSNAuthTokenRequest&) = delete;
    ~RefreshPSNAuthTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    StdExtra::optional<int32_t> m_issuerId;
    String m_redirectUri;
};

struct RegisterForIOSPushNotificationRequest : public PFPlatformSpecificRegisterForIOSPushNotificationRequest, public BaseModel
{
    RegisterForIOSPushNotificationRequest();
    RegisterForIOSPushNotificationRequest(const RegisterForIOSPushNotificationRequest& src);
    RegisterForIOSPushNotificationRequest(RegisterForIOSPushNotificationRequest&& src);
    RegisterForIOSPushNotificationRequest(const PFPlatformSpecificRegisterForIOSPushNotificationRequest& src);
    RegisterForIOSPushNotificationRequest& operator=(const RegisterForIOSPushNotificationRequest&) = delete;
    ~RegisterForIOSPushNotificationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_confirmationMessage;
    String m_deviceToken;
    StdExtra::optional<bool> m_sendPushNotificationConfirmation;
};

struct RestoreIOSPurchasesRequest : public PFPlatformSpecificRestoreIOSPurchasesRequest, public BaseModel
{
    RestoreIOSPurchasesRequest();
    RestoreIOSPurchasesRequest(const RestoreIOSPurchasesRequest& src);
    RestoreIOSPurchasesRequest(RestoreIOSPurchasesRequest&& src);
    RestoreIOSPurchasesRequest(const PFPlatformSpecificRestoreIOSPurchasesRequest& src);
    RestoreIOSPurchasesRequest& operator=(const RestoreIOSPurchasesRequest&) = delete;
    ~RestoreIOSPurchasesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_receiptData;
};

struct PurchaseReceiptFulfillment : public PFPlatformSpecificPurchaseReceiptFulfillment, public BaseModel
{
    PurchaseReceiptFulfillment();
    PurchaseReceiptFulfillment(const PurchaseReceiptFulfillment& src);
    PurchaseReceiptFulfillment(PurchaseReceiptFulfillment&& src);
    PurchaseReceiptFulfillment(const PFPlatformSpecificPurchaseReceiptFulfillment& src);
    PurchaseReceiptFulfillment& operator=(const PurchaseReceiptFulfillment&) = delete;
    ~PurchaseReceiptFulfillment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_fulfilledItems;
    String m_recordedPriceSource;
    String m_recordedTransactionCurrency;
    StdExtra::optional<uint32_t> m_recordedTransactionTotal;
};

struct RestoreIOSPurchasesResult : public PFPlatformSpecificRestoreIOSPurchasesResult, public BaseModel, public ApiResult
{
    RestoreIOSPurchasesResult();
    RestoreIOSPurchasesResult(const RestoreIOSPurchasesResult& src);
    RestoreIOSPurchasesResult(RestoreIOSPurchasesResult&& src);
    RestoreIOSPurchasesResult(const PFPlatformSpecificRestoreIOSPurchasesResult& src);
    RestoreIOSPurchasesResult& operator=(const RestoreIOSPurchasesResult&) = delete;
    ~RestoreIOSPurchasesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlatformSpecificPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct ValidateAmazonReceiptRequest : public PFPlatformSpecificValidateAmazonReceiptRequest, public BaseModel
{
    ValidateAmazonReceiptRequest();
    ValidateAmazonReceiptRequest(const ValidateAmazonReceiptRequest& src);
    ValidateAmazonReceiptRequest(ValidateAmazonReceiptRequest&& src);
    ValidateAmazonReceiptRequest(const PFPlatformSpecificValidateAmazonReceiptRequest& src);
    ValidateAmazonReceiptRequest& operator=(const ValidateAmazonReceiptRequest&) = delete;
    ~ValidateAmazonReceiptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_receiptId;
    String m_userId;
};

struct ValidateAmazonReceiptResult : public PFPlatformSpecificValidateAmazonReceiptResult, public BaseModel, public ApiResult
{
    ValidateAmazonReceiptResult();
    ValidateAmazonReceiptResult(const ValidateAmazonReceiptResult& src);
    ValidateAmazonReceiptResult(ValidateAmazonReceiptResult&& src);
    ValidateAmazonReceiptResult(const PFPlatformSpecificValidateAmazonReceiptResult& src);
    ValidateAmazonReceiptResult& operator=(const ValidateAmazonReceiptResult&) = delete;
    ~ValidateAmazonReceiptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlatformSpecificPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct ValidateGooglePlayPurchaseRequest : public PFPlatformSpecificValidateGooglePlayPurchaseRequest, public BaseModel
{
    ValidateGooglePlayPurchaseRequest();
    ValidateGooglePlayPurchaseRequest(const ValidateGooglePlayPurchaseRequest& src);
    ValidateGooglePlayPurchaseRequest(ValidateGooglePlayPurchaseRequest&& src);
    ValidateGooglePlayPurchaseRequest(const PFPlatformSpecificValidateGooglePlayPurchaseRequest& src);
    ValidateGooglePlayPurchaseRequest& operator=(const ValidateGooglePlayPurchaseRequest&) = delete;
    ~ValidateGooglePlayPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<uint32_t> m_purchasePrice;
    String m_receiptJson;
    String m_signature;
};

struct ValidateGooglePlayPurchaseResult : public PFPlatformSpecificValidateGooglePlayPurchaseResult, public BaseModel, public ApiResult
{
    ValidateGooglePlayPurchaseResult();
    ValidateGooglePlayPurchaseResult(const ValidateGooglePlayPurchaseResult& src);
    ValidateGooglePlayPurchaseResult(ValidateGooglePlayPurchaseResult&& src);
    ValidateGooglePlayPurchaseResult(const PFPlatformSpecificValidateGooglePlayPurchaseResult& src);
    ValidateGooglePlayPurchaseResult& operator=(const ValidateGooglePlayPurchaseResult&) = delete;
    ~ValidateGooglePlayPurchaseResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlatformSpecificPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct ValidateIOSReceiptRequest : public PFPlatformSpecificValidateIOSReceiptRequest, public BaseModel
{
    ValidateIOSReceiptRequest();
    ValidateIOSReceiptRequest(const ValidateIOSReceiptRequest& src);
    ValidateIOSReceiptRequest(ValidateIOSReceiptRequest&& src);
    ValidateIOSReceiptRequest(const PFPlatformSpecificValidateIOSReceiptRequest& src);
    ValidateIOSReceiptRequest& operator=(const ValidateIOSReceiptRequest&) = delete;
    ~ValidateIOSReceiptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_receiptData;
};

struct ValidateIOSReceiptResult : public PFPlatformSpecificValidateIOSReceiptResult, public BaseModel, public ApiResult
{
    ValidateIOSReceiptResult();
    ValidateIOSReceiptResult(const ValidateIOSReceiptResult& src);
    ValidateIOSReceiptResult(ValidateIOSReceiptResult&& src);
    ValidateIOSReceiptResult(const PFPlatformSpecificValidateIOSReceiptResult& src);
    ValidateIOSReceiptResult& operator=(const ValidateIOSReceiptResult&) = delete;
    ~ValidateIOSReceiptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlatformSpecificPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct ValidateWindowsReceiptRequest : public PFPlatformSpecificValidateWindowsReceiptRequest, public BaseModel
{
    ValidateWindowsReceiptRequest();
    ValidateWindowsReceiptRequest(const ValidateWindowsReceiptRequest& src);
    ValidateWindowsReceiptRequest(ValidateWindowsReceiptRequest&& src);
    ValidateWindowsReceiptRequest(const PFPlatformSpecificValidateWindowsReceiptRequest& src);
    ValidateWindowsReceiptRequest& operator=(const ValidateWindowsReceiptRequest&) = delete;
    ~ValidateWindowsReceiptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    String m_currencyCode;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_receipt;
};

struct ValidateWindowsReceiptResult : public PFPlatformSpecificValidateWindowsReceiptResult, public BaseModel, public ApiResult
{
    ValidateWindowsReceiptResult();
    ValidateWindowsReceiptResult(const ValidateWindowsReceiptResult& src);
    ValidateWindowsReceiptResult(ValidateWindowsReceiptResult&& src);
    ValidateWindowsReceiptResult(const PFPlatformSpecificValidateWindowsReceiptResult& src);
    ValidateWindowsReceiptResult& operator=(const ValidateWindowsReceiptResult&) = delete;
    ~ValidateWindowsReceiptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlatformSpecificPurchaseReceiptFulfillment, PurchaseReceiptFulfillment> m_fulfillments;
};

struct AwardSteamAchievementItem : public PFPlatformSpecificAwardSteamAchievementItem, public SerializableModel
{
    AwardSteamAchievementItem();
    AwardSteamAchievementItem(const AwardSteamAchievementItem& src);
    AwardSteamAchievementItem(AwardSteamAchievementItem&& src);
    AwardSteamAchievementItem(const PFPlatformSpecificAwardSteamAchievementItem& src);
    AwardSteamAchievementItem& operator=(const AwardSteamAchievementItem&) = delete;
    ~AwardSteamAchievementItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_achievementName;
    String m_playFabId;
};

struct AwardSteamAchievementRequest : public PFPlatformSpecificAwardSteamAchievementRequest, public BaseModel
{
    AwardSteamAchievementRequest();
    AwardSteamAchievementRequest(const AwardSteamAchievementRequest& src);
    AwardSteamAchievementRequest(AwardSteamAchievementRequest&& src);
    AwardSteamAchievementRequest(const PFPlatformSpecificAwardSteamAchievementRequest& src);
    AwardSteamAchievementRequest& operator=(const AwardSteamAchievementRequest&) = delete;
    ~AwardSteamAchievementRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlatformSpecificAwardSteamAchievementItem, AwardSteamAchievementItem> m_achievements;
};

struct AwardSteamAchievementResult : public PFPlatformSpecificAwardSteamAchievementResult, public BaseModel, public ApiResult
{
    AwardSteamAchievementResult();
    AwardSteamAchievementResult(const AwardSteamAchievementResult& src);
    AwardSteamAchievementResult(AwardSteamAchievementResult&& src);
    AwardSteamAchievementResult(const PFPlatformSpecificAwardSteamAchievementResult& src);
    AwardSteamAchievementResult& operator=(const AwardSteamAchievementResult&) = delete;
    ~AwardSteamAchievementResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlatformSpecificAwardSteamAchievementItem, AwardSteamAchievementItem> m_achievementResults;
};

} // namespace PlatformSpecificModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificMicrosoftStorePayload& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificPlayStation5Payload& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumePS5EntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumePS5EntitlementsResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumePSNEntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumePSNEntitlementsResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumeXboxEntitlementsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificConsumeXboxEntitlementsResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificRefreshPSNAuthTokenRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificRegisterForIOSPushNotificationRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificRestoreIOSPurchasesRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificPurchaseReceiptFulfillment& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificRestoreIOSPurchasesResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateAmazonReceiptRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateAmazonReceiptResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateGooglePlayPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateGooglePlayPurchaseResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateIOSReceiptRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateIOSReceiptResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateWindowsReceiptRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificValidateWindowsReceiptResult& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificAwardSteamAchievementItem& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificAwardSteamAchievementRequest& input);
template<> inline JsonValue ToJson<>(const PFPlatformSpecificAwardSteamAchievementResult& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
