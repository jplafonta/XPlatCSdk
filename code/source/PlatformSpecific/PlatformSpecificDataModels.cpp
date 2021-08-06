#include "stdafx.h"
#include "PlatformSpecificDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace PlatformSpecificModels
{

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest() :
    PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest{}
{
}

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest(const AndroidDevicePushNotificationRegistrationRequest& src) :
    PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest{ src },
    m_confirmationMessage{ src.m_confirmationMessage },
    m_deviceToken{ src.m_deviceToken },
    m_sendPushNotificationConfirmation{ src.m_sendPushNotificationConfirmation }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest(AndroidDevicePushNotificationRegistrationRequest&& src) :
    PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest{ src },
    m_confirmationMessage{ std::move(src.m_confirmationMessage) },
    m_deviceToken{ std::move(src.m_deviceToken) },
    m_sendPushNotificationConfirmation{ std::move(src.m_sendPushNotificationConfirmation) }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest(const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AndroidDevicePushNotificationRegistrationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConfirmationMessage", m_confirmationMessage, confirmationMessage);
    JsonUtils::ObjectGetMember(input, "DeviceToken", m_deviceToken, deviceToken);
    JsonUtils::ObjectGetMember(input, "SendPushNotificationConfirmation", m_sendPushNotificationConfirmation, sendPushNotificationConfirmation);
}

JsonValue AndroidDevicePushNotificationRegistrationRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest>(*this);
}

MicrosoftStorePayload::MicrosoftStorePayload() :
    PFPlatformSpecificMicrosoftStorePayload{}
{
}

MicrosoftStorePayload::MicrosoftStorePayload(const MicrosoftStorePayload& src) :
    PFPlatformSpecificMicrosoftStorePayload{ src },
    m_collectionsMsIdKey{ src.m_collectionsMsIdKey },
    m_userId{ src.m_userId },
    m_xboxToken{ src.m_xboxToken }
{
    collectionsMsIdKey = m_collectionsMsIdKey.empty() ? nullptr : m_collectionsMsIdKey.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

MicrosoftStorePayload::MicrosoftStorePayload(MicrosoftStorePayload&& src) :
    PFPlatformSpecificMicrosoftStorePayload{ src },
    m_collectionsMsIdKey{ std::move(src.m_collectionsMsIdKey) },
    m_userId{ std::move(src.m_userId) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    collectionsMsIdKey = m_collectionsMsIdKey.empty() ? nullptr : m_collectionsMsIdKey.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

MicrosoftStorePayload::MicrosoftStorePayload(const PFPlatformSpecificMicrosoftStorePayload& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MicrosoftStorePayload::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CollectionsMsIdKey", m_collectionsMsIdKey, collectionsMsIdKey);
    JsonUtils::ObjectGetMember(input, "UserId", m_userId, userId);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue MicrosoftStorePayload::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificMicrosoftStorePayload>(*this);
}

size_t MicrosoftStorePayload::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlatformSpecificMicrosoftStorePayload) };
    serializedSize += (m_collectionsMsIdKey.size() + 1);
    serializedSize += (m_userId.size() + 1);
    serializedSize += (m_xboxToken.size() + 1);
    return serializedSize;
}

void MicrosoftStorePayload::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlatformSpecificMicrosoftStorePayload{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlatformSpecificMicrosoftStorePayload);
    memcpy(stringBuffer, m_collectionsMsIdKey.data(), m_collectionsMsIdKey.size() + 1);
    serializedStruct->collectionsMsIdKey = stringBuffer;
    stringBuffer += m_collectionsMsIdKey.size() + 1;
    memcpy(stringBuffer, m_userId.data(), m_userId.size() + 1);
    serializedStruct->userId = stringBuffer;
    stringBuffer += m_userId.size() + 1;
    memcpy(stringBuffer, m_xboxToken.data(), m_xboxToken.size() + 1);
    serializedStruct->xboxToken = stringBuffer;
    stringBuffer += m_xboxToken.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ConsumeMicrosoftStoreEntitlementsRequest::ConsumeMicrosoftStoreEntitlementsRequest() :
    PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest{}
{
}

ConsumeMicrosoftStoreEntitlementsRequest::ConsumeMicrosoftStoreEntitlementsRequest(const ConsumeMicrosoftStoreEntitlementsRequest& src) :
    PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_marketplaceSpecificData{ src.m_marketplaceSpecificData }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PFPlatformSpecificMicrosoftStorePayload const*)&m_marketplaceSpecificData;
}

ConsumeMicrosoftStoreEntitlementsRequest::ConsumeMicrosoftStoreEntitlementsRequest(ConsumeMicrosoftStoreEntitlementsRequest&& src) :
    PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_marketplaceSpecificData{ std::move(src.m_marketplaceSpecificData) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PFPlatformSpecificMicrosoftStorePayload const*)&m_marketplaceSpecificData;
}

ConsumeMicrosoftStoreEntitlementsRequest::ConsumeMicrosoftStoreEntitlementsRequest(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeMicrosoftStoreEntitlementsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MarketplaceSpecificData", m_marketplaceSpecificData, marketplaceSpecificData);
}

JsonValue ConsumeMicrosoftStoreEntitlementsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest>(*this);
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse() :
    PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse{}
{
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse(const ConsumeMicrosoftStoreEntitlementsResponse& src) :
    PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse(ConsumeMicrosoftStoreEntitlementsResponse&& src) :
    PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeMicrosoftStoreEntitlementsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue ConsumeMicrosoftStoreEntitlementsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse>(*this);
}

PlayStation5Payload::PlayStation5Payload() :
    PFPlatformSpecificPlayStation5Payload{}
{
}

PlayStation5Payload::PlayStation5Payload(const PlayStation5Payload& src) :
    PFPlatformSpecificPlayStation5Payload{ src },
    m_ids{ src.m_ids },
    m_serviceLabel{ src.m_serviceLabel }
{
    ids = m_ids.Empty() ? nullptr : m_ids.Data();
    serviceLabel = m_serviceLabel.empty() ? nullptr : m_serviceLabel.data();
}

PlayStation5Payload::PlayStation5Payload(PlayStation5Payload&& src) :
    PFPlatformSpecificPlayStation5Payload{ src },
    m_ids{ std::move(src.m_ids) },
    m_serviceLabel{ std::move(src.m_serviceLabel) }
{
    ids = m_ids.Empty() ? nullptr : m_ids.Data();
    serviceLabel = m_serviceLabel.empty() ? nullptr : m_serviceLabel.data();
}

PlayStation5Payload::PlayStation5Payload(const PFPlatformSpecificPlayStation5Payload& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayStation5Payload::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Ids", m_ids, ids, idsCount);
    JsonUtils::ObjectGetMember(input, "ServiceLabel", m_serviceLabel, serviceLabel);
}

JsonValue PlayStation5Payload::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificPlayStation5Payload>(*this);
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest() :
    PFPlatformSpecificConsumePS5EntitlementsRequest{}
{
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest(const ConsumePS5EntitlementsRequest& src) :
    PFPlatformSpecificConsumePS5EntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_marketplaceSpecificData{ src.m_marketplaceSpecificData }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PFPlatformSpecificPlayStation5Payload const*)&m_marketplaceSpecificData;
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest(ConsumePS5EntitlementsRequest&& src) :
    PFPlatformSpecificConsumePS5EntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_marketplaceSpecificData{ std::move(src.m_marketplaceSpecificData) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PFPlatformSpecificPlayStation5Payload const*)&m_marketplaceSpecificData;
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest(const PFPlatformSpecificConsumePS5EntitlementsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumePS5EntitlementsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MarketplaceSpecificData", m_marketplaceSpecificData, marketplaceSpecificData);
}

JsonValue ConsumePS5EntitlementsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumePS5EntitlementsRequest>(*this);
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult() :
    PFPlatformSpecificConsumePS5EntitlementsResult{}
{
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult(const ConsumePS5EntitlementsResult& src) :
    PFPlatformSpecificConsumePS5EntitlementsResult{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult(ConsumePS5EntitlementsResult&& src) :
    PFPlatformSpecificConsumePS5EntitlementsResult{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult(const PFPlatformSpecificConsumePS5EntitlementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumePS5EntitlementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue ConsumePS5EntitlementsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumePS5EntitlementsResult>(*this);
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest() :
    PFPlatformSpecificConsumePSNEntitlementsRequest{}
{
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest(const ConsumePSNEntitlementsRequest& src) :
    PFPlatformSpecificConsumePSNEntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest(ConsumePSNEntitlementsRequest&& src) :
    PFPlatformSpecificConsumePSNEntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest(const PFPlatformSpecificConsumePSNEntitlementsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumePSNEntitlementsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ServiceLabel", serviceLabel);
}

JsonValue ConsumePSNEntitlementsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumePSNEntitlementsRequest>(*this);
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult() :
    PFPlatformSpecificConsumePSNEntitlementsResult{}
{
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult(const ConsumePSNEntitlementsResult& src) :
    PFPlatformSpecificConsumePSNEntitlementsResult{ src },
    m_itemsGranted{ src.m_itemsGranted }
{
    itemsGranted = m_itemsGranted.Empty() ? nullptr : m_itemsGranted.Data();
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult(ConsumePSNEntitlementsResult&& src) :
    PFPlatformSpecificConsumePSNEntitlementsResult{ src },
    m_itemsGranted{ std::move(src.m_itemsGranted) }
{
    itemsGranted = m_itemsGranted.Empty() ? nullptr : m_itemsGranted.Data();
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult(const PFPlatformSpecificConsumePSNEntitlementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumePSNEntitlementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemsGranted", m_itemsGranted, itemsGranted, itemsGrantedCount);
}

JsonValue ConsumePSNEntitlementsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumePSNEntitlementsResult>(*this);
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest() :
    PFPlatformSpecificConsumeXboxEntitlementsRequest{}
{
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest(const ConsumeXboxEntitlementsRequest& src) :
    PFPlatformSpecificConsumeXboxEntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_xboxToken{ src.m_xboxToken }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest(ConsumeXboxEntitlementsRequest&& src) :
    PFPlatformSpecificConsumeXboxEntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest(const PFPlatformSpecificConsumeXboxEntitlementsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeXboxEntitlementsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ConsumeXboxEntitlementsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumeXboxEntitlementsRequest>(*this);
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult() :
    PFPlatformSpecificConsumeXboxEntitlementsResult{}
{
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult(const ConsumeXboxEntitlementsResult& src) :
    PFPlatformSpecificConsumeXboxEntitlementsResult{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult(ConsumeXboxEntitlementsResult&& src) :
    PFPlatformSpecificConsumeXboxEntitlementsResult{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult(const PFPlatformSpecificConsumeXboxEntitlementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeXboxEntitlementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue ConsumeXboxEntitlementsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificConsumeXboxEntitlementsResult>(*this);
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest() :
    PFPlatformSpecificRefreshPSNAuthTokenRequest{}
{
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest(const RefreshPSNAuthTokenRequest& src) :
    PFPlatformSpecificRefreshPSNAuthTokenRequest{ src },
    m_authCode{ src.m_authCode },
    m_issuerId{ src.m_issuerId },
    m_redirectUri{ src.m_redirectUri }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest(RefreshPSNAuthTokenRequest&& src) :
    PFPlatformSpecificRefreshPSNAuthTokenRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_redirectUri{ std::move(src.m_redirectUri) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest(const PFPlatformSpecificRefreshPSNAuthTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RefreshPSNAuthTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthCode", m_authCode, authCode);
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
}

JsonValue RefreshPSNAuthTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificRefreshPSNAuthTokenRequest>(*this);
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest() :
    PFPlatformSpecificRegisterForIOSPushNotificationRequest{}
{
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest(const RegisterForIOSPushNotificationRequest& src) :
    PFPlatformSpecificRegisterForIOSPushNotificationRequest{ src },
    m_confirmationMessage{ src.m_confirmationMessage },
    m_deviceToken{ src.m_deviceToken },
    m_sendPushNotificationConfirmation{ src.m_sendPushNotificationConfirmation }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest(RegisterForIOSPushNotificationRequest&& src) :
    PFPlatformSpecificRegisterForIOSPushNotificationRequest{ src },
    m_confirmationMessage{ std::move(src.m_confirmationMessage) },
    m_deviceToken{ std::move(src.m_deviceToken) },
    m_sendPushNotificationConfirmation{ std::move(src.m_sendPushNotificationConfirmation) }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest(const PFPlatformSpecificRegisterForIOSPushNotificationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterForIOSPushNotificationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConfirmationMessage", m_confirmationMessage, confirmationMessage);
    JsonUtils::ObjectGetMember(input, "DeviceToken", m_deviceToken, deviceToken);
    JsonUtils::ObjectGetMember(input, "SendPushNotificationConfirmation", m_sendPushNotificationConfirmation, sendPushNotificationConfirmation);
}

JsonValue RegisterForIOSPushNotificationRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificRegisterForIOSPushNotificationRequest>(*this);
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest() :
    PFPlatformSpecificRestoreIOSPurchasesRequest{}
{
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest(const RestoreIOSPurchasesRequest& src) :
    PFPlatformSpecificRestoreIOSPurchasesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_receiptData{ src.m_receiptData }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest(RestoreIOSPurchasesRequest&& src) :
    PFPlatformSpecificRestoreIOSPurchasesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_receiptData{ std::move(src.m_receiptData) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest(const PFPlatformSpecificRestoreIOSPurchasesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RestoreIOSPurchasesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ReceiptData", m_receiptData, receiptData);
}

JsonValue RestoreIOSPurchasesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificRestoreIOSPurchasesRequest>(*this);
}

PurchaseReceiptFulfillment::PurchaseReceiptFulfillment() :
    PFPlatformSpecificPurchaseReceiptFulfillment{}
{
}

PurchaseReceiptFulfillment::PurchaseReceiptFulfillment(const PurchaseReceiptFulfillment& src) :
    PFPlatformSpecificPurchaseReceiptFulfillment{ src },
    m_fulfilledItems{ src.m_fulfilledItems },
    m_recordedPriceSource{ src.m_recordedPriceSource },
    m_recordedTransactionCurrency{ src.m_recordedTransactionCurrency },
    m_recordedTransactionTotal{ src.m_recordedTransactionTotal }
{
    fulfilledItems = m_fulfilledItems.Empty() ? nullptr : m_fulfilledItems.Data();
    recordedPriceSource = m_recordedPriceSource.empty() ? nullptr : m_recordedPriceSource.data();
    recordedTransactionCurrency = m_recordedTransactionCurrency.empty() ? nullptr : m_recordedTransactionCurrency.data();
    recordedTransactionTotal = m_recordedTransactionTotal ? m_recordedTransactionTotal.operator->() : nullptr;
}

PurchaseReceiptFulfillment::PurchaseReceiptFulfillment(PurchaseReceiptFulfillment&& src) :
    PFPlatformSpecificPurchaseReceiptFulfillment{ src },
    m_fulfilledItems{ std::move(src.m_fulfilledItems) },
    m_recordedPriceSource{ std::move(src.m_recordedPriceSource) },
    m_recordedTransactionCurrency{ std::move(src.m_recordedTransactionCurrency) },
    m_recordedTransactionTotal{ std::move(src.m_recordedTransactionTotal) }
{
    fulfilledItems = m_fulfilledItems.Empty() ? nullptr : m_fulfilledItems.Data();
    recordedPriceSource = m_recordedPriceSource.empty() ? nullptr : m_recordedPriceSource.data();
    recordedTransactionCurrency = m_recordedTransactionCurrency.empty() ? nullptr : m_recordedTransactionCurrency.data();
    recordedTransactionTotal = m_recordedTransactionTotal ? m_recordedTransactionTotal.operator->() : nullptr;
}

PurchaseReceiptFulfillment::PurchaseReceiptFulfillment(const PFPlatformSpecificPurchaseReceiptFulfillment& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PurchaseReceiptFulfillment::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FulfilledItems", m_fulfilledItems, fulfilledItems, fulfilledItemsCount);
    JsonUtils::ObjectGetMember(input, "RecordedPriceSource", m_recordedPriceSource, recordedPriceSource);
    JsonUtils::ObjectGetMember(input, "RecordedTransactionCurrency", m_recordedTransactionCurrency, recordedTransactionCurrency);
    JsonUtils::ObjectGetMember(input, "RecordedTransactionTotal", m_recordedTransactionTotal, recordedTransactionTotal);
}

JsonValue PurchaseReceiptFulfillment::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificPurchaseReceiptFulfillment>(*this);
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult() :
    PFPlatformSpecificRestoreIOSPurchasesResult{}
{
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult(const RestoreIOSPurchasesResult& src) :
    PFPlatformSpecificRestoreIOSPurchasesResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult(RestoreIOSPurchasesResult&& src) :
    PFPlatformSpecificRestoreIOSPurchasesResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult(const PFPlatformSpecificRestoreIOSPurchasesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RestoreIOSPurchasesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue RestoreIOSPurchasesResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificRestoreIOSPurchasesResult>(*this);
}

ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest() :
    PFPlatformSpecificValidateAmazonReceiptRequest{}
{
}

ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest(const ValidateAmazonReceiptRequest& src) :
    PFPlatformSpecificValidateAmazonReceiptRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_currencyCode{ src.m_currencyCode },
    m_customTags{ src.m_customTags },
    m_receiptId{ src.m_receiptId },
    m_userId{ src.m_userId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptId = m_receiptId.empty() ? nullptr : m_receiptId.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest(ValidateAmazonReceiptRequest&& src) :
    PFPlatformSpecificValidateAmazonReceiptRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_currencyCode{ std::move(src.m_currencyCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_receiptId{ std::move(src.m_receiptId) },
    m_userId{ std::move(src.m_userId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptId = m_receiptId.empty() ? nullptr : m_receiptId.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest(const PFPlatformSpecificValidateAmazonReceiptRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateAmazonReceiptRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PurchasePrice", purchasePrice);
    JsonUtils::ObjectGetMember(input, "ReceiptId", m_receiptId, receiptId);
    JsonUtils::ObjectGetMember(input, "UserId", m_userId, userId);
}

JsonValue ValidateAmazonReceiptRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateAmazonReceiptRequest>(*this);
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult() :
    PFPlatformSpecificValidateAmazonReceiptResult{}
{
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult(const ValidateAmazonReceiptResult& src) :
    PFPlatformSpecificValidateAmazonReceiptResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult(ValidateAmazonReceiptResult&& src) :
    PFPlatformSpecificValidateAmazonReceiptResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult(const PFPlatformSpecificValidateAmazonReceiptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateAmazonReceiptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateAmazonReceiptResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateAmazonReceiptResult>(*this);
}

ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest() :
    PFPlatformSpecificValidateGooglePlayPurchaseRequest{}
{
}

ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest(const ValidateGooglePlayPurchaseRequest& src) :
    PFPlatformSpecificValidateGooglePlayPurchaseRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_currencyCode{ src.m_currencyCode },
    m_customTags{ src.m_customTags },
    m_purchasePrice{ src.m_purchasePrice },
    m_receiptJson{ src.m_receiptJson },
    m_signature{ src.m_signature }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    purchasePrice = m_purchasePrice ? m_purchasePrice.operator->() : nullptr;
    receiptJson = m_receiptJson.empty() ? nullptr : m_receiptJson.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
}

ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest(ValidateGooglePlayPurchaseRequest&& src) :
    PFPlatformSpecificValidateGooglePlayPurchaseRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_currencyCode{ std::move(src.m_currencyCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_purchasePrice{ std::move(src.m_purchasePrice) },
    m_receiptJson{ std::move(src.m_receiptJson) },
    m_signature{ std::move(src.m_signature) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    purchasePrice = m_purchasePrice ? m_purchasePrice.operator->() : nullptr;
    receiptJson = m_receiptJson.empty() ? nullptr : m_receiptJson.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
}

ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest(const PFPlatformSpecificValidateGooglePlayPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateGooglePlayPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PurchasePrice", m_purchasePrice, purchasePrice);
    JsonUtils::ObjectGetMember(input, "ReceiptJson", m_receiptJson, receiptJson);
    JsonUtils::ObjectGetMember(input, "Signature", m_signature, signature);
}

JsonValue ValidateGooglePlayPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateGooglePlayPurchaseRequest>(*this);
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult() :
    PFPlatformSpecificValidateGooglePlayPurchaseResult{}
{
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult(const ValidateGooglePlayPurchaseResult& src) :
    PFPlatformSpecificValidateGooglePlayPurchaseResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult(ValidateGooglePlayPurchaseResult&& src) :
    PFPlatformSpecificValidateGooglePlayPurchaseResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult(const PFPlatformSpecificValidateGooglePlayPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateGooglePlayPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateGooglePlayPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateGooglePlayPurchaseResult>(*this);
}

ValidateIOSReceiptRequest::ValidateIOSReceiptRequest() :
    PFPlatformSpecificValidateIOSReceiptRequest{}
{
}

ValidateIOSReceiptRequest::ValidateIOSReceiptRequest(const ValidateIOSReceiptRequest& src) :
    PFPlatformSpecificValidateIOSReceiptRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_currencyCode{ src.m_currencyCode },
    m_customTags{ src.m_customTags },
    m_receiptData{ src.m_receiptData }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
}

ValidateIOSReceiptRequest::ValidateIOSReceiptRequest(ValidateIOSReceiptRequest&& src) :
    PFPlatformSpecificValidateIOSReceiptRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_currencyCode{ std::move(src.m_currencyCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_receiptData{ std::move(src.m_receiptData) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
}

ValidateIOSReceiptRequest::ValidateIOSReceiptRequest(const PFPlatformSpecificValidateIOSReceiptRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateIOSReceiptRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PurchasePrice", purchasePrice);
    JsonUtils::ObjectGetMember(input, "ReceiptData", m_receiptData, receiptData);
}

JsonValue ValidateIOSReceiptRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateIOSReceiptRequest>(*this);
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult() :
    PFPlatformSpecificValidateIOSReceiptResult{}
{
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult(const ValidateIOSReceiptResult& src) :
    PFPlatformSpecificValidateIOSReceiptResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult(ValidateIOSReceiptResult&& src) :
    PFPlatformSpecificValidateIOSReceiptResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult(const PFPlatformSpecificValidateIOSReceiptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateIOSReceiptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateIOSReceiptResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateIOSReceiptResult>(*this);
}

ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest() :
    PFPlatformSpecificValidateWindowsReceiptRequest{}
{
}

ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest(const ValidateWindowsReceiptRequest& src) :
    PFPlatformSpecificValidateWindowsReceiptRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_currencyCode{ src.m_currencyCode },
    m_customTags{ src.m_customTags },
    m_receipt{ src.m_receipt }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receipt = m_receipt.empty() ? nullptr : m_receipt.data();
}

ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest(ValidateWindowsReceiptRequest&& src) :
    PFPlatformSpecificValidateWindowsReceiptRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_currencyCode{ std::move(src.m_currencyCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_receipt{ std::move(src.m_receipt) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    currencyCode = m_currencyCode.empty() ? nullptr : m_currencyCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receipt = m_receipt.empty() ? nullptr : m_receipt.data();
}

ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest(const PFPlatformSpecificValidateWindowsReceiptRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateWindowsReceiptRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CurrencyCode", m_currencyCode, currencyCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PurchasePrice", purchasePrice);
    JsonUtils::ObjectGetMember(input, "Receipt", m_receipt, receipt);
}

JsonValue ValidateWindowsReceiptRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateWindowsReceiptRequest>(*this);
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult() :
    PFPlatformSpecificValidateWindowsReceiptResult{}
{
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult(const ValidateWindowsReceiptResult& src) :
    PFPlatformSpecificValidateWindowsReceiptResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult(ValidateWindowsReceiptResult&& src) :
    PFPlatformSpecificValidateWindowsReceiptResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult(const PFPlatformSpecificValidateWindowsReceiptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateWindowsReceiptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateWindowsReceiptResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificValidateWindowsReceiptResult>(*this);
}

AwardSteamAchievementItem::AwardSteamAchievementItem() :
    PFPlatformSpecificAwardSteamAchievementItem{}
{
}

AwardSteamAchievementItem::AwardSteamAchievementItem(const AwardSteamAchievementItem& src) :
    PFPlatformSpecificAwardSteamAchievementItem{ src },
    m_achievementName{ src.m_achievementName },
    m_playFabId{ src.m_playFabId }
{
    achievementName = m_achievementName.empty() ? nullptr : m_achievementName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AwardSteamAchievementItem::AwardSteamAchievementItem(AwardSteamAchievementItem&& src) :
    PFPlatformSpecificAwardSteamAchievementItem{ src },
    m_achievementName{ std::move(src.m_achievementName) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    achievementName = m_achievementName.empty() ? nullptr : m_achievementName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AwardSteamAchievementItem::AwardSteamAchievementItem(const PFPlatformSpecificAwardSteamAchievementItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AwardSteamAchievementItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AchievementName", m_achievementName, achievementName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Result", result);
}

JsonValue AwardSteamAchievementItem::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificAwardSteamAchievementItem>(*this);
}

size_t AwardSteamAchievementItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlatformSpecificAwardSteamAchievementItem) };
    serializedSize += (m_achievementName.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void AwardSteamAchievementItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlatformSpecificAwardSteamAchievementItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlatformSpecificAwardSteamAchievementItem);
    memcpy(stringBuffer, m_achievementName.data(), m_achievementName.size() + 1);
    serializedStruct->achievementName = stringBuffer;
    stringBuffer += m_achievementName.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest() :
    PFPlatformSpecificAwardSteamAchievementRequest{}
{
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest(const AwardSteamAchievementRequest& src) :
    PFPlatformSpecificAwardSteamAchievementRequest{ src },
    m_achievements{ src.m_achievements }
{
    achievements = m_achievements.Empty() ? nullptr : m_achievements.Data();
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest(AwardSteamAchievementRequest&& src) :
    PFPlatformSpecificAwardSteamAchievementRequest{ src },
    m_achievements{ std::move(src.m_achievements) }
{
    achievements = m_achievements.Empty() ? nullptr : m_achievements.Data();
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest(const PFPlatformSpecificAwardSteamAchievementRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AwardSteamAchievementRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Achievements", m_achievements, achievements, achievementsCount);
}

JsonValue AwardSteamAchievementRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificAwardSteamAchievementRequest>(*this);
}

AwardSteamAchievementResult::AwardSteamAchievementResult() :
    PFPlatformSpecificAwardSteamAchievementResult{}
{
}

AwardSteamAchievementResult::AwardSteamAchievementResult(const AwardSteamAchievementResult& src) :
    PFPlatformSpecificAwardSteamAchievementResult{ src },
    m_achievementResults{ src.m_achievementResults }
{
    achievementResults = m_achievementResults.Empty() ? nullptr : m_achievementResults.Data();
}

AwardSteamAchievementResult::AwardSteamAchievementResult(AwardSteamAchievementResult&& src) :
    PFPlatformSpecificAwardSteamAchievementResult{ src },
    m_achievementResults{ std::move(src.m_achievementResults) }
{
    achievementResults = m_achievementResults.Empty() ? nullptr : m_achievementResults.Data();
}

AwardSteamAchievementResult::AwardSteamAchievementResult(const PFPlatformSpecificAwardSteamAchievementResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AwardSteamAchievementResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AchievementResults", m_achievementResults, achievementResults, achievementResultsCount);
}

JsonValue AwardSteamAchievementResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlatformSpecificAwardSteamAchievementResult>(*this);
}

} // namespace PlatformSpecificModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificAndroidDevicePushNotificationRegistrationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConfirmationMessage", input.confirmationMessage);
    JsonUtils::ObjectAddMember(output, "DeviceToken", input.deviceToken);
    JsonUtils::ObjectAddMember(output, "SendPushNotificationConfirmation", input.sendPushNotificationConfirmation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificMicrosoftStorePayload& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CollectionsMsIdKey", input.collectionsMsIdKey);
    JsonUtils::ObjectAddMember(output, "UserId", input.userId);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MarketplaceSpecificData", input.marketplaceSpecificData);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumeMicrosoftStoreEntitlementsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificPlayStation5Payload& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Ids", input.ids, input.idsCount);
    JsonUtils::ObjectAddMember(output, "ServiceLabel", input.serviceLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumePS5EntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MarketplaceSpecificData", input.marketplaceSpecificData);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumePS5EntitlementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumePSNEntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ServiceLabel", input.serviceLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumePSNEntitlementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemsGranted", input.itemsGranted, input.itemsGrantedCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumeXboxEntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificConsumeXboxEntitlementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificRefreshPSNAuthTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificRegisterForIOSPushNotificationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConfirmationMessage", input.confirmationMessage);
    JsonUtils::ObjectAddMember(output, "DeviceToken", input.deviceToken);
    JsonUtils::ObjectAddMember(output, "SendPushNotificationConfirmation", input.sendPushNotificationConfirmation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificRestoreIOSPurchasesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ReceiptData", input.receiptData);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificPurchaseReceiptFulfillment& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FulfilledItems", input.fulfilledItems, input.fulfilledItemsCount);
    JsonUtils::ObjectAddMember(output, "RecordedPriceSource", input.recordedPriceSource);
    JsonUtils::ObjectAddMember(output, "RecordedTransactionCurrency", input.recordedTransactionCurrency);
    JsonUtils::ObjectAddMember(output, "RecordedTransactionTotal", input.recordedTransactionTotal);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificRestoreIOSPurchasesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateAmazonReceiptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
    JsonUtils::ObjectAddMember(output, "ReceiptId", input.receiptId);
    JsonUtils::ObjectAddMember(output, "UserId", input.userId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateAmazonReceiptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateGooglePlayPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
    JsonUtils::ObjectAddMember(output, "ReceiptJson", input.receiptJson);
    JsonUtils::ObjectAddMember(output, "Signature", input.signature);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateGooglePlayPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateIOSReceiptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
    JsonUtils::ObjectAddMember(output, "ReceiptData", input.receiptData);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateIOSReceiptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateWindowsReceiptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CurrencyCode", input.currencyCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
    JsonUtils::ObjectAddMember(output, "Receipt", input.receipt);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificValidateWindowsReceiptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificAwardSteamAchievementItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AchievementName", input.achievementName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificAwardSteamAchievementRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Achievements", input.achievements, input.achievementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlatformSpecificAwardSteamAchievementResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AchievementResults", input.achievementResults, input.achievementResultsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
