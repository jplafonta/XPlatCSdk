#include "stdafx.h"
#include "ClientDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace ClientModels
{

AcceptTradeRequest::AcceptTradeRequest() :
    PlayFabClientAcceptTradeRequest{}
{
}

AcceptTradeRequest::AcceptTradeRequest(const AcceptTradeRequest& src) :
    PlayFabClientAcceptTradeRequest{ src },
    m_acceptedInventoryInstanceIds{ src.m_acceptedInventoryInstanceIds },
    m_offeringPlayerId{ src.m_offeringPlayerId },
    m_tradeId{ src.m_tradeId }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

AcceptTradeRequest::AcceptTradeRequest(AcceptTradeRequest&& src) :
    PlayFabClientAcceptTradeRequest{ src },
    m_acceptedInventoryInstanceIds{ std::move(src.m_acceptedInventoryInstanceIds) },
    m_offeringPlayerId{ std::move(src.m_offeringPlayerId) },
    m_tradeId{ std::move(src.m_tradeId) }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

AcceptTradeRequest::AcceptTradeRequest(const PlayFabClientAcceptTradeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AcceptTradeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AcceptedInventoryInstanceIds", m_acceptedInventoryInstanceIds, acceptedInventoryInstanceIds, acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue AcceptTradeRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAcceptTradeRequest>(*this);
}

TradeInfo::TradeInfo() :
    PlayFabClientTradeInfo{}
{
}

TradeInfo::TradeInfo(const TradeInfo& src) :
    PlayFabClientTradeInfo{ src },
    m_acceptedInventoryInstanceIds{ src.m_acceptedInventoryInstanceIds },
    m_acceptedPlayerId{ src.m_acceptedPlayerId },
    m_allowedPlayerIds{ src.m_allowedPlayerIds },
    m_cancelledAt{ src.m_cancelledAt },
    m_filledAt{ src.m_filledAt },
    m_invalidatedAt{ src.m_invalidatedAt },
    m_offeredCatalogItemIds{ src.m_offeredCatalogItemIds },
    m_offeredInventoryInstanceIds{ src.m_offeredInventoryInstanceIds },
    m_offeringPlayerId{ src.m_offeringPlayerId },
    m_openedAt{ src.m_openedAt },
    m_requestedCatalogItemIds{ src.m_requestedCatalogItemIds },
    m_status{ src.m_status },
    m_tradeId{ src.m_tradeId }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    acceptedPlayerId = m_acceptedPlayerId.empty() ? nullptr : m_acceptedPlayerId.data();
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    cancelledAt = m_cancelledAt ? m_cancelledAt.operator->() : nullptr;
    filledAt = m_filledAt ? m_filledAt.operator->() : nullptr;
    invalidatedAt = m_invalidatedAt ? m_invalidatedAt.operator->() : nullptr;
    offeredCatalogItemIds = m_offeredCatalogItemIds.Empty() ? nullptr : m_offeredCatalogItemIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    openedAt = m_openedAt ? m_openedAt.operator->() : nullptr;
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
    status = m_status ? m_status.operator->() : nullptr;
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

TradeInfo::TradeInfo(TradeInfo&& src) :
    PlayFabClientTradeInfo{ src },
    m_acceptedInventoryInstanceIds{ std::move(src.m_acceptedInventoryInstanceIds) },
    m_acceptedPlayerId{ std::move(src.m_acceptedPlayerId) },
    m_allowedPlayerIds{ std::move(src.m_allowedPlayerIds) },
    m_cancelledAt{ std::move(src.m_cancelledAt) },
    m_filledAt{ std::move(src.m_filledAt) },
    m_invalidatedAt{ std::move(src.m_invalidatedAt) },
    m_offeredCatalogItemIds{ std::move(src.m_offeredCatalogItemIds) },
    m_offeredInventoryInstanceIds{ std::move(src.m_offeredInventoryInstanceIds) },
    m_offeringPlayerId{ std::move(src.m_offeringPlayerId) },
    m_openedAt{ std::move(src.m_openedAt) },
    m_requestedCatalogItemIds{ std::move(src.m_requestedCatalogItemIds) },
    m_status{ std::move(src.m_status) },
    m_tradeId{ std::move(src.m_tradeId) }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    acceptedPlayerId = m_acceptedPlayerId.empty() ? nullptr : m_acceptedPlayerId.data();
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    cancelledAt = m_cancelledAt ? m_cancelledAt.operator->() : nullptr;
    filledAt = m_filledAt ? m_filledAt.operator->() : nullptr;
    invalidatedAt = m_invalidatedAt ? m_invalidatedAt.operator->() : nullptr;
    offeredCatalogItemIds = m_offeredCatalogItemIds.Empty() ? nullptr : m_offeredCatalogItemIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    openedAt = m_openedAt ? m_openedAt.operator->() : nullptr;
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
    status = m_status ? m_status.operator->() : nullptr;
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

TradeInfo::TradeInfo(const PlayFabClientTradeInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TradeInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AcceptedInventoryInstanceIds", m_acceptedInventoryInstanceIds, acceptedInventoryInstanceIds, acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "AcceptedPlayerId", m_acceptedPlayerId, acceptedPlayerId);
    JsonUtils::ObjectGetMember(input, "AllowedPlayerIds", m_allowedPlayerIds, allowedPlayerIds, allowedPlayerIdsCount);
    JsonUtils::ObjectGetMember(input, "CancelledAt", m_cancelledAt, cancelledAt, true);
    JsonUtils::ObjectGetMember(input, "FilledAt", m_filledAt, filledAt, true);
    JsonUtils::ObjectGetMember(input, "InvalidatedAt", m_invalidatedAt, invalidatedAt, true);
    JsonUtils::ObjectGetMember(input, "OfferedCatalogItemIds", m_offeredCatalogItemIds, offeredCatalogItemIds, offeredCatalogItemIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferedInventoryInstanceIds", m_offeredInventoryInstanceIds, offeredInventoryInstanceIds, offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
    JsonUtils::ObjectGetMember(input, "OpenedAt", m_openedAt, openedAt, true);
    JsonUtils::ObjectGetMember(input, "RequestedCatalogItemIds", m_requestedCatalogItemIds, requestedCatalogItemIds, requestedCatalogItemIdsCount);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue TradeInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientTradeInfo>(*this);
}

AcceptTradeResponse::AcceptTradeResponse() :
    PlayFabClientAcceptTradeResponse{}
{
}

AcceptTradeResponse::AcceptTradeResponse(const AcceptTradeResponse& src) :
    PlayFabClientAcceptTradeResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

AcceptTradeResponse::AcceptTradeResponse(AcceptTradeResponse&& src) :
    PlayFabClientAcceptTradeResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

AcceptTradeResponse::AcceptTradeResponse(const PlayFabClientAcceptTradeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AcceptTradeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue AcceptTradeResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAcceptTradeResponse>(*this);
}

AddFriendRequest::AddFriendRequest() :
    PlayFabClientAddFriendRequest{}
{
}

AddFriendRequest::AddFriendRequest(const AddFriendRequest& src) :
    PlayFabClientAddFriendRequest{ src },
    m_friendEmail{ src.m_friendEmail },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_friendTitleDisplayName{ src.m_friendTitleDisplayName },
    m_friendUsername{ src.m_friendUsername }
{
    friendEmail = m_friendEmail.empty() ? nullptr : m_friendEmail.data();
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    friendTitleDisplayName = m_friendTitleDisplayName.empty() ? nullptr : m_friendTitleDisplayName.data();
    friendUsername = m_friendUsername.empty() ? nullptr : m_friendUsername.data();
}

AddFriendRequest::AddFriendRequest(AddFriendRequest&& src) :
    PlayFabClientAddFriendRequest{ src },
    m_friendEmail{ std::move(src.m_friendEmail) },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_friendTitleDisplayName{ std::move(src.m_friendTitleDisplayName) },
    m_friendUsername{ std::move(src.m_friendUsername) }
{
    friendEmail = m_friendEmail.empty() ? nullptr : m_friendEmail.data();
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    friendTitleDisplayName = m_friendTitleDisplayName.empty() ? nullptr : m_friendTitleDisplayName.data();
    friendUsername = m_friendUsername.empty() ? nullptr : m_friendUsername.data();
}

AddFriendRequest::AddFriendRequest(const PlayFabClientAddFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendEmail", m_friendEmail, friendEmail);
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "FriendTitleDisplayName", m_friendTitleDisplayName, friendTitleDisplayName);
    JsonUtils::ObjectGetMember(input, "FriendUsername", m_friendUsername, friendUsername);
}

JsonValue AddFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddFriendRequest>(*this);
}

size_t AddFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientAddFriendRequest) };
    serializedSize += (m_friendEmail.size() + 1);
    serializedSize += (m_friendPlayFabId.size() + 1);
    serializedSize += (m_friendTitleDisplayName.size() + 1);
    serializedSize += (m_friendUsername.size() + 1);
    return serializedSize;
}

void AddFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientAddFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientAddFriendRequest);
    memcpy(stringBuffer, m_friendEmail.data(), m_friendEmail.size() + 1);
    serializedStruct->friendEmail = stringBuffer;
    stringBuffer += m_friendEmail.size() + 1;
    memcpy(stringBuffer, m_friendPlayFabId.data(), m_friendPlayFabId.size() + 1);
    serializedStruct->friendPlayFabId = stringBuffer;
    stringBuffer += m_friendPlayFabId.size() + 1;
    memcpy(stringBuffer, m_friendTitleDisplayName.data(), m_friendTitleDisplayName.size() + 1);
    serializedStruct->friendTitleDisplayName = stringBuffer;
    stringBuffer += m_friendTitleDisplayName.size() + 1;
    memcpy(stringBuffer, m_friendUsername.data(), m_friendUsername.size() + 1);
    serializedStruct->friendUsername = stringBuffer;
    stringBuffer += m_friendUsername.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AddFriendResult::AddFriendResult() :
    PlayFabClientAddFriendResult{}
{
}


AddFriendResult::AddFriendResult(const PlayFabClientAddFriendResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddFriendResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Created", created);
}

JsonValue AddFriendResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddFriendResult>(*this);
}

size_t AddFriendResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientAddFriendResult) };
    return serializedSize;
}

void AddFriendResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientAddFriendResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientAddFriendResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GenericServiceId::GenericServiceId() :
    PlayFabClientGenericServiceId{}
{
}

GenericServiceId::GenericServiceId(const GenericServiceId& src) :
    PlayFabClientGenericServiceId{ src },
    m_serviceName{ src.m_serviceName },
    m_userId{ src.m_userId }
{
    serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

GenericServiceId::GenericServiceId(GenericServiceId&& src) :
    PlayFabClientGenericServiceId{ src },
    m_serviceName{ std::move(src.m_serviceName) },
    m_userId{ std::move(src.m_userId) }
{
    serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

GenericServiceId::GenericServiceId(const PlayFabClientGenericServiceId& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GenericServiceId::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ServiceName", m_serviceName, serviceName);
    JsonUtils::ObjectGetMember(input, "UserId", m_userId, userId);
}

JsonValue GenericServiceId::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGenericServiceId>(*this);
}

size_t GenericServiceId::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGenericServiceId) };
    serializedSize += (m_serviceName.size() + 1);
    serializedSize += (m_userId.size() + 1);
    return serializedSize;
}

void GenericServiceId::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGenericServiceId{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGenericServiceId);
    memcpy(stringBuffer, m_serviceName.data(), m_serviceName.size() + 1);
    serializedStruct->serviceName = stringBuffer;
    stringBuffer += m_serviceName.size() + 1;
    memcpy(stringBuffer, m_userId.data(), m_userId.size() + 1);
    serializedStruct->userId = stringBuffer;
    stringBuffer += m_userId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AddGenericIDRequest::AddGenericIDRequest() :
    PlayFabClientAddGenericIDRequest{}
{
}

AddGenericIDRequest::AddGenericIDRequest(const AddGenericIDRequest& src) :
    PlayFabClientAddGenericIDRequest{ src },
    m_genericId{ src.m_genericId }
{
    genericId = (PlayFabClientGenericServiceId const*)&m_genericId;
}

AddGenericIDRequest::AddGenericIDRequest(AddGenericIDRequest&& src) :
    PlayFabClientAddGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) }
{
    genericId = (PlayFabClientGenericServiceId const*)&m_genericId;
}

AddGenericIDRequest::AddGenericIDRequest(const PlayFabClientAddGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
}

JsonValue AddGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddGenericIDRequest>(*this);
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest() :
    PlayFabClientAddOrUpdateContactEmailRequest{}
{
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest(const AddOrUpdateContactEmailRequest& src) :
    PlayFabClientAddOrUpdateContactEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_emailAddress{ src.m_emailAddress }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest(AddOrUpdateContactEmailRequest&& src) :
    PlayFabClientAddOrUpdateContactEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_emailAddress{ std::move(src.m_emailAddress) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
}

AddOrUpdateContactEmailRequest::AddOrUpdateContactEmailRequest(const PlayFabClientAddOrUpdateContactEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddOrUpdateContactEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
}

JsonValue AddOrUpdateContactEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddOrUpdateContactEmailRequest>(*this);
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest() :
    PlayFabClientAddSharedGroupMembersRequest{}
{
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src) :
    PlayFabClientAddSharedGroupMembersRequest{ src },
    m_playFabIds{ src.m_playFabIds },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(AddSharedGroupMembersRequest&& src) :
    PlayFabClientAddSharedGroupMembersRequest{ src },
    m_playFabIds{ std::move(src.m_playFabIds) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(const PlayFabClientAddSharedGroupMembersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddSharedGroupMembersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue AddSharedGroupMembersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddSharedGroupMembersRequest>(*this);
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest() :
    PlayFabClientAddUsernamePasswordRequest{}
{
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest(const AddUsernamePasswordRequest& src) :
    PlayFabClientAddUsernamePasswordRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest(AddUsernamePasswordRequest&& src) :
    PlayFabClientAddUsernamePasswordRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordRequest::AddUsernamePasswordRequest(const PlayFabClientAddUsernamePasswordRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddUsernamePasswordRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue AddUsernamePasswordRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddUsernamePasswordRequest>(*this);
}

AddUsernamePasswordResult::AddUsernamePasswordResult() :
    PlayFabClientAddUsernamePasswordResult{}
{
}

AddUsernamePasswordResult::AddUsernamePasswordResult(const AddUsernamePasswordResult& src) :
    PlayFabClientAddUsernamePasswordResult{ src },
    m_username{ src.m_username }
{
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordResult::AddUsernamePasswordResult(AddUsernamePasswordResult&& src) :
    PlayFabClientAddUsernamePasswordResult{ src },
    m_username{ std::move(src.m_username) }
{
    username = m_username.empty() ? nullptr : m_username.data();
}

AddUsernamePasswordResult::AddUsernamePasswordResult(const PlayFabClientAddUsernamePasswordResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddUsernamePasswordResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue AddUsernamePasswordResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddUsernamePasswordResult>(*this);
}

size_t AddUsernamePasswordResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientAddUsernamePasswordResult) };
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void AddUsernamePasswordResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientAddUsernamePasswordResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientAddUsernamePasswordResult);
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest() :
    PlayFabClientAddUserVirtualCurrencyRequest{}
{
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
    PlayFabClientAddUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest&& src) :
    PlayFabClientAddUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(const PlayFabClientAddUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue AddUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAddUserVirtualCurrencyRequest>(*this);
}

AdPlacementDetails::AdPlacementDetails() :
    PlayFabClientAdPlacementDetails{}
{
}

AdPlacementDetails::AdPlacementDetails(const AdPlacementDetails& src) :
    PlayFabClientAdPlacementDetails{ src },
    m_placementId{ src.m_placementId },
    m_placementName{ src.m_placementName },
    m_placementViewsRemaining{ src.m_placementViewsRemaining },
    m_placementViewsResetMinutes{ src.m_placementViewsResetMinutes },
    m_rewardAssetUrl{ src.m_rewardAssetUrl },
    m_rewardDescription{ src.m_rewardDescription },
    m_rewardId{ src.m_rewardId },
    m_rewardName{ src.m_rewardName }
{
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardAssetUrl = m_rewardAssetUrl.empty() ? nullptr : m_rewardAssetUrl.data();
    rewardDescription = m_rewardDescription.empty() ? nullptr : m_rewardDescription.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
    rewardName = m_rewardName.empty() ? nullptr : m_rewardName.data();
}

AdPlacementDetails::AdPlacementDetails(AdPlacementDetails&& src) :
    PlayFabClientAdPlacementDetails{ src },
    m_placementId{ std::move(src.m_placementId) },
    m_placementName{ std::move(src.m_placementName) },
    m_placementViewsRemaining{ std::move(src.m_placementViewsRemaining) },
    m_placementViewsResetMinutes{ std::move(src.m_placementViewsResetMinutes) },
    m_rewardAssetUrl{ std::move(src.m_rewardAssetUrl) },
    m_rewardDescription{ std::move(src.m_rewardDescription) },
    m_rewardId{ std::move(src.m_rewardId) },
    m_rewardName{ std::move(src.m_rewardName) }
{
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardAssetUrl = m_rewardAssetUrl.empty() ? nullptr : m_rewardAssetUrl.data();
    rewardDescription = m_rewardDescription.empty() ? nullptr : m_rewardDescription.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
    rewardName = m_rewardName.empty() ? nullptr : m_rewardName.data();
}

AdPlacementDetails::AdPlacementDetails(const PlayFabClientAdPlacementDetails& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdPlacementDetails::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "PlacementName", m_placementName, placementName);
    JsonUtils::ObjectGetMember(input, "PlacementViewsRemaining", m_placementViewsRemaining, placementViewsRemaining);
    JsonUtils::ObjectGetMember(input, "PlacementViewsResetMinutes", m_placementViewsResetMinutes, placementViewsResetMinutes);
    JsonUtils::ObjectGetMember(input, "RewardAssetUrl", m_rewardAssetUrl, rewardAssetUrl);
    JsonUtils::ObjectGetMember(input, "RewardDescription", m_rewardDescription, rewardDescription);
    JsonUtils::ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
    JsonUtils::ObjectGetMember(input, "RewardName", m_rewardName, rewardName);
}

JsonValue AdPlacementDetails::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAdPlacementDetails>(*this);
}

AdRewardItemGranted::AdRewardItemGranted() :
    PlayFabClientAdRewardItemGranted{}
{
}

AdRewardItemGranted::AdRewardItemGranted(const AdRewardItemGranted& src) :
    PlayFabClientAdRewardItemGranted{ src },
    m_catalogId{ src.m_catalogId },
    m_displayName{ src.m_displayName },
    m_instanceId{ src.m_instanceId },
    m_itemId{ src.m_itemId }
{
    catalogId = m_catalogId.empty() ? nullptr : m_catalogId.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    instanceId = m_instanceId.empty() ? nullptr : m_instanceId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

AdRewardItemGranted::AdRewardItemGranted(AdRewardItemGranted&& src) :
    PlayFabClientAdRewardItemGranted{ src },
    m_catalogId{ std::move(src.m_catalogId) },
    m_displayName{ std::move(src.m_displayName) },
    m_instanceId{ std::move(src.m_instanceId) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogId = m_catalogId.empty() ? nullptr : m_catalogId.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    instanceId = m_instanceId.empty() ? nullptr : m_instanceId.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

AdRewardItemGranted::AdRewardItemGranted(const PlayFabClientAdRewardItemGranted& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdRewardItemGranted::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogId", m_catalogId, catalogId);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "InstanceId", m_instanceId, instanceId);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue AdRewardItemGranted::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAdRewardItemGranted>(*this);
}

size_t AdRewardItemGranted::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientAdRewardItemGranted) };
    serializedSize += (m_catalogId.size() + 1);
    serializedSize += (m_displayName.size() + 1);
    serializedSize += (m_instanceId.size() + 1);
    serializedSize += (m_itemId.size() + 1);
    return serializedSize;
}

void AdRewardItemGranted::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientAdRewardItemGranted{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientAdRewardItemGranted);
    memcpy(stringBuffer, m_catalogId.data(), m_catalogId.size() + 1);
    serializedStruct->catalogId = stringBuffer;
    stringBuffer += m_catalogId.size() + 1;
    memcpy(stringBuffer, m_displayName.data(), m_displayName.size() + 1);
    serializedStruct->displayName = stringBuffer;
    stringBuffer += m_displayName.size() + 1;
    memcpy(stringBuffer, m_instanceId.data(), m_instanceId.size() + 1);
    serializedStruct->instanceId = stringBuffer;
    stringBuffer += m_instanceId.size() + 1;
    memcpy(stringBuffer, m_itemId.data(), m_itemId.size() + 1);
    serializedStruct->itemId = stringBuffer;
    stringBuffer += m_itemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AdRewardResults::AdRewardResults() :
    PlayFabClientAdRewardResults{}
{
}

AdRewardResults::AdRewardResults(const AdRewardResults& src) :
    PlayFabClientAdRewardResults{ src },
    m_grantedItems{ src.m_grantedItems },
    m_grantedVirtualCurrencies{ src.m_grantedVirtualCurrencies },
    m_incrementedStatistics{ src.m_incrementedStatistics }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    grantedVirtualCurrencies = m_grantedVirtualCurrencies.Empty() ? nullptr : m_grantedVirtualCurrencies.Data();
    incrementedStatistics = m_incrementedStatistics.Empty() ? nullptr : m_incrementedStatistics.Data();
}

AdRewardResults::AdRewardResults(AdRewardResults&& src) :
    PlayFabClientAdRewardResults{ src },
    m_grantedItems{ std::move(src.m_grantedItems) },
    m_grantedVirtualCurrencies{ std::move(src.m_grantedVirtualCurrencies) },
    m_incrementedStatistics{ std::move(src.m_incrementedStatistics) }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    grantedVirtualCurrencies = m_grantedVirtualCurrencies.Empty() ? nullptr : m_grantedVirtualCurrencies.Data();
    incrementedStatistics = m_incrementedStatistics.Empty() ? nullptr : m_incrementedStatistics.Data();
}

AdRewardResults::AdRewardResults(const PlayFabClientAdRewardResults& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdRewardResults::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
    JsonUtils::ObjectGetMember(input, "GrantedVirtualCurrencies", m_grantedVirtualCurrencies, grantedVirtualCurrencies, grantedVirtualCurrenciesCount);
    JsonUtils::ObjectGetMember(input, "IncrementedStatistics", m_incrementedStatistics, incrementedStatistics, incrementedStatisticsCount);
}

JsonValue AdRewardResults::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAdRewardResults>(*this);
}

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest() :
    PlayFabClientAndroidDevicePushNotificationRegistrationRequest{}
{
}

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest(const AndroidDevicePushNotificationRegistrationRequest& src) :
    PlayFabClientAndroidDevicePushNotificationRegistrationRequest{ src },
    m_confirmationMessage{ src.m_confirmationMessage },
    m_deviceToken{ src.m_deviceToken },
    m_sendPushNotificationConfirmation{ src.m_sendPushNotificationConfirmation }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest(AndroidDevicePushNotificationRegistrationRequest&& src) :
    PlayFabClientAndroidDevicePushNotificationRegistrationRequest{ src },
    m_confirmationMessage{ std::move(src.m_confirmationMessage) },
    m_deviceToken{ std::move(src.m_deviceToken) },
    m_sendPushNotificationConfirmation{ std::move(src.m_sendPushNotificationConfirmation) }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

AndroidDevicePushNotificationRegistrationRequest::AndroidDevicePushNotificationRegistrationRequest(const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientAndroidDevicePushNotificationRegistrationRequest>(*this);
}

AttributeInstallRequest::AttributeInstallRequest() :
    PlayFabClientAttributeInstallRequest{}
{
}

AttributeInstallRequest::AttributeInstallRequest(const AttributeInstallRequest& src) :
    PlayFabClientAttributeInstallRequest{ src },
    m_adid{ src.m_adid },
    m_idfa{ src.m_idfa }
{
    adid = m_adid.empty() ? nullptr : m_adid.data();
    idfa = m_idfa.empty() ? nullptr : m_idfa.data();
}

AttributeInstallRequest::AttributeInstallRequest(AttributeInstallRequest&& src) :
    PlayFabClientAttributeInstallRequest{ src },
    m_adid{ std::move(src.m_adid) },
    m_idfa{ std::move(src.m_idfa) }
{
    adid = m_adid.empty() ? nullptr : m_adid.data();
    idfa = m_idfa.empty() ? nullptr : m_idfa.data();
}

AttributeInstallRequest::AttributeInstallRequest(const PlayFabClientAttributeInstallRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AttributeInstallRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Adid", m_adid, adid);
    JsonUtils::ObjectGetMember(input, "Idfa", m_idfa, idfa);
}

JsonValue AttributeInstallRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientAttributeInstallRequest>(*this);
}

size_t AttributeInstallRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientAttributeInstallRequest) };
    serializedSize += (m_adid.size() + 1);
    serializedSize += (m_idfa.size() + 1);
    return serializedSize;
}

void AttributeInstallRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientAttributeInstallRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientAttributeInstallRequest);
    memcpy(stringBuffer, m_adid.data(), m_adid.size() + 1);
    serializedStruct->adid = stringBuffer;
    stringBuffer += m_adid.size() + 1;
    memcpy(stringBuffer, m_idfa.data(), m_idfa.size() + 1);
    serializedStruct->idfa = stringBuffer;
    stringBuffer += m_idfa.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CancelTradeRequest::CancelTradeRequest() :
    PlayFabClientCancelTradeRequest{}
{
}

CancelTradeRequest::CancelTradeRequest(const CancelTradeRequest& src) :
    PlayFabClientCancelTradeRequest{ src },
    m_tradeId{ src.m_tradeId }
{
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

CancelTradeRequest::CancelTradeRequest(CancelTradeRequest&& src) :
    PlayFabClientCancelTradeRequest{ src },
    m_tradeId{ std::move(src.m_tradeId) }
{
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

CancelTradeRequest::CancelTradeRequest(const PlayFabClientCancelTradeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelTradeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue CancelTradeRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCancelTradeRequest>(*this);
}

size_t CancelTradeRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientCancelTradeRequest) };
    serializedSize += (m_tradeId.size() + 1);
    return serializedSize;
}

void CancelTradeRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientCancelTradeRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientCancelTradeRequest);
    memcpy(stringBuffer, m_tradeId.data(), m_tradeId.size() + 1);
    serializedStruct->tradeId = stringBuffer;
    stringBuffer += m_tradeId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CancelTradeResponse::CancelTradeResponse() :
    PlayFabClientCancelTradeResponse{}
{
}

CancelTradeResponse::CancelTradeResponse(const CancelTradeResponse& src) :
    PlayFabClientCancelTradeResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

CancelTradeResponse::CancelTradeResponse(CancelTradeResponse&& src) :
    PlayFabClientCancelTradeResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

CancelTradeResponse::CancelTradeResponse(const PlayFabClientCancelTradeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelTradeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue CancelTradeResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCancelTradeResponse>(*this);
}

CartItem::CartItem() :
    PlayFabClientCartItem{}
{
}

CartItem::CartItem(const CartItem& src) :
    PlayFabClientCartItem{ src },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_vCAmount{ src.m_vCAmount },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CartItem::CartItem(CartItem&& src) :
    PlayFabClientCartItem{ src },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_vCAmount{ std::move(src.m_vCAmount) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CartItem::CartItem(const PlayFabClientCartItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CartItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "VCAmount", m_vCAmount, vCAmount, vCAmountCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue CartItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCartItem>(*this);
}

CatalogItemBundleInfo::CatalogItemBundleInfo() :
    PlayFabClientCatalogItemBundleInfo{}
{
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
    PlayFabClientCatalogItemBundleInfo{ src },
    m_bundledItems{ src.m_bundledItems },
    m_bundledResultTables{ src.m_bundledResultTables },
    m_bundledVirtualCurrencies{ src.m_bundledVirtualCurrencies }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(CatalogItemBundleInfo&& src) :
    PlayFabClientCatalogItemBundleInfo{ src },
    m_bundledItems{ std::move(src.m_bundledItems) },
    m_bundledResultTables{ std::move(src.m_bundledResultTables) },
    m_bundledVirtualCurrencies{ std::move(src.m_bundledVirtualCurrencies) }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const PlayFabClientCatalogItemBundleInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemBundleInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BundledItems", m_bundledItems, bundledItems, bundledItemsCount);
    JsonUtils::ObjectGetMember(input, "BundledResultTables", m_bundledResultTables, bundledResultTables, bundledResultTablesCount);
    JsonUtils::ObjectGetMember(input, "BundledVirtualCurrencies", m_bundledVirtualCurrencies, bundledVirtualCurrencies, bundledVirtualCurrenciesCount);
}

JsonValue CatalogItemBundleInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCatalogItemBundleInfo>(*this);
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo() :
    PlayFabClientCatalogItemConsumableInfo{}
{
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
    PlayFabClientCatalogItemConsumableInfo{ src },
    m_usageCount{ src.m_usageCount },
    m_usagePeriod{ src.m_usagePeriod },
    m_usagePeriodGroup{ src.m_usagePeriodGroup }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src) :
    PlayFabClientCatalogItemConsumableInfo{ src },
    m_usageCount{ std::move(src.m_usageCount) },
    m_usagePeriod{ std::move(src.m_usagePeriod) },
    m_usagePeriodGroup{ std::move(src.m_usagePeriodGroup) }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const PlayFabClientCatalogItemConsumableInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemConsumableInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "UsageCount", m_usageCount, usageCount);
    JsonUtils::ObjectGetMember(input, "UsagePeriod", m_usagePeriod, usagePeriod);
    JsonUtils::ObjectGetMember(input, "UsagePeriodGroup", m_usagePeriodGroup, usagePeriodGroup);
}

JsonValue CatalogItemConsumableInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCatalogItemConsumableInfo>(*this);
}

CatalogItemContainerInfo::CatalogItemContainerInfo() :
    PlayFabClientCatalogItemContainerInfo{}
{
}

CatalogItemContainerInfo::CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
    PlayFabClientCatalogItemContainerInfo{ src },
    m_itemContents{ src.m_itemContents },
    m_keyItemId{ src.m_keyItemId },
    m_resultTableContents{ src.m_resultTableContents },
    m_virtualCurrencyContents{ src.m_virtualCurrencyContents }
{
    itemContents = m_itemContents.Empty() ? nullptr : m_itemContents.Data();
    keyItemId = m_keyItemId.empty() ? nullptr : m_keyItemId.data();
    resultTableContents = m_resultTableContents.Empty() ? nullptr : m_resultTableContents.Data();
    virtualCurrencyContents = m_virtualCurrencyContents.Empty() ? nullptr : m_virtualCurrencyContents.Data();
}

CatalogItemContainerInfo::CatalogItemContainerInfo(CatalogItemContainerInfo&& src) :
    PlayFabClientCatalogItemContainerInfo{ src },
    m_itemContents{ std::move(src.m_itemContents) },
    m_keyItemId{ std::move(src.m_keyItemId) },
    m_resultTableContents{ std::move(src.m_resultTableContents) },
    m_virtualCurrencyContents{ std::move(src.m_virtualCurrencyContents) }
{
    itemContents = m_itemContents.Empty() ? nullptr : m_itemContents.Data();
    keyItemId = m_keyItemId.empty() ? nullptr : m_keyItemId.data();
    resultTableContents = m_resultTableContents.Empty() ? nullptr : m_resultTableContents.Data();
    virtualCurrencyContents = m_virtualCurrencyContents.Empty() ? nullptr : m_virtualCurrencyContents.Data();
}

CatalogItemContainerInfo::CatalogItemContainerInfo(const PlayFabClientCatalogItemContainerInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItemContainerInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemContents", m_itemContents, itemContents, itemContentsCount);
    JsonUtils::ObjectGetMember(input, "KeyItemId", m_keyItemId, keyItemId);
    JsonUtils::ObjectGetMember(input, "ResultTableContents", m_resultTableContents, resultTableContents, resultTableContentsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyContents", m_virtualCurrencyContents, virtualCurrencyContents, virtualCurrencyContentsCount);
}

JsonValue CatalogItemContainerInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCatalogItemContainerInfo>(*this);
}

CatalogItem::CatalogItem() :
    PlayFabClientCatalogItem{}
{
}

CatalogItem::CatalogItem(const CatalogItem& src) :
    PlayFabClientCatalogItem{ src },
    m_bundle{ src.m_bundle },
    m_catalogVersion{ src.m_catalogVersion },
    m_consumable{ src.m_consumable },
    m_container{ src.m_container },
    m_customData{ src.m_customData },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemImageUrl{ src.m_itemImageUrl },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_tags{ src.m_tags },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    bundle = m_bundle ? m_bundle.operator->() : nullptr;
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    consumable = m_consumable ? m_consumable.operator->() : nullptr;
    container = m_container ? m_container.operator->() : nullptr;
    customData = m_customData.empty() ? nullptr : m_customData.data();
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemImageUrl = m_itemImageUrl.empty() ? nullptr : m_itemImageUrl.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CatalogItem::CatalogItem(CatalogItem&& src) :
    PlayFabClientCatalogItem{ src },
    m_bundle{ std::move(src.m_bundle) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_consumable{ std::move(src.m_consumable) },
    m_container{ std::move(src.m_container) },
    m_customData{ std::move(src.m_customData) },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemImageUrl{ std::move(src.m_itemImageUrl) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_tags{ std::move(src.m_tags) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    bundle = m_bundle ? m_bundle.operator->() : nullptr;
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    consumable = m_consumable ? m_consumable.operator->() : nullptr;
    container = m_container ? m_container.operator->() : nullptr;
    customData = m_customData.empty() ? nullptr : m_customData.data();
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemImageUrl = m_itemImageUrl.empty() ? nullptr : m_itemImageUrl.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

CatalogItem::CatalogItem(const PlayFabClientCatalogItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CatalogItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bundle", m_bundle, bundle);
    JsonUtils::ObjectGetMember(input, "CanBecomeCharacter", canBecomeCharacter);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "Consumable", m_consumable, consumable);
    JsonUtils::ObjectGetMember(input, "Container", m_container, container);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "InitialLimitedEditionCount", initialLimitedEditionCount);
    JsonUtils::ObjectGetMember(input, "IsLimitedEdition", isLimitedEdition);
    JsonUtils::ObjectGetMember(input, "IsStackable", isStackable);
    JsonUtils::ObjectGetMember(input, "IsTradable", isTradable);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemImageUrl", m_itemImageUrl, itemImageUrl);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue CatalogItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCatalogItem>(*this);
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry() :
    PlayFabClientCharacterLeaderboardEntry{}
{
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src) :
    PlayFabClientCharacterLeaderboardEntry{ src },
    m_characterId{ src.m_characterId },
    m_characterName{ src.m_characterName },
    m_characterType{ src.m_characterType },
    m_displayName{ src.m_displayName },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry(CharacterLeaderboardEntry&& src) :
    PlayFabClientCharacterLeaderboardEntry{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterName{ std::move(src.m_characterName) },
    m_characterType{ std::move(src.m_characterType) },
    m_displayName{ std::move(src.m_displayName) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry(const PlayFabClientCharacterLeaderboardEntry& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CharacterLeaderboardEntry::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Position", position);
    JsonUtils::ObjectGetMember(input, "StatValue", statValue);
}

JsonValue CharacterLeaderboardEntry::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCharacterLeaderboardEntry>(*this);
}

size_t CharacterLeaderboardEntry::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientCharacterLeaderboardEntry) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterName.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    serializedSize += (m_displayName.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void CharacterLeaderboardEntry::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientCharacterLeaderboardEntry{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientCharacterLeaderboardEntry);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterName.data(), m_characterName.size() + 1);
    serializedStruct->characterName = stringBuffer;
    stringBuffer += m_characterName.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    memcpy(stringBuffer, m_displayName.data(), m_displayName.size() + 1);
    serializedStruct->displayName = stringBuffer;
    stringBuffer += m_displayName.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

Container_Dictionary_String_String::Container_Dictionary_String_String() :
    PlayFabClientContainer_Dictionary_String_String{}
{
}

Container_Dictionary_String_String::Container_Dictionary_String_String(const Container_Dictionary_String_String& src) :
    PlayFabClientContainer_Dictionary_String_String{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

Container_Dictionary_String_String::Container_Dictionary_String_String(Container_Dictionary_String_String&& src) :
    PlayFabClientContainer_Dictionary_String_String{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

Container_Dictionary_String_String::Container_Dictionary_String_String(const PlayFabClientContainer_Dictionary_String_String& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Container_Dictionary_String_String::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue Container_Dictionary_String_String::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientContainer_Dictionary_String_String>(*this);
}

CollectionFilter::CollectionFilter() :
    PlayFabClientCollectionFilter{}
{
}

CollectionFilter::CollectionFilter(const CollectionFilter& src) :
    PlayFabClientCollectionFilter{ src },
    m_excludes{ src.m_excludes },
    m_includes{ src.m_includes }
{
    excludes = m_excludes.Empty() ? nullptr : m_excludes.Data();
    includes = m_includes.Empty() ? nullptr : m_includes.Data();
}

CollectionFilter::CollectionFilter(CollectionFilter&& src) :
    PlayFabClientCollectionFilter{ src },
    m_excludes{ std::move(src.m_excludes) },
    m_includes{ std::move(src.m_includes) }
{
    excludes = m_excludes.Empty() ? nullptr : m_excludes.Data();
    includes = m_includes.Empty() ? nullptr : m_includes.Data();
}

CollectionFilter::CollectionFilter(const PlayFabClientCollectionFilter& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CollectionFilter::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Excludes", m_excludes, excludes, excludesCount);
    JsonUtils::ObjectGetMember(input, "Includes", m_includes, includes, includesCount);
}

JsonValue CollectionFilter::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCollectionFilter>(*this);
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest() :
    PlayFabClientConfirmPurchaseRequest{}
{
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest(const ConfirmPurchaseRequest& src) :
    PlayFabClientConfirmPurchaseRequest{ src },
    m_customTags{ src.m_customTags },
    m_orderId{ src.m_orderId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest(ConfirmPurchaseRequest&& src) :
    PlayFabClientConfirmPurchaseRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_orderId{ std::move(src.m_orderId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseRequest::ConfirmPurchaseRequest(const PlayFabClientConfirmPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConfirmPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
}

JsonValue ConfirmPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConfirmPurchaseRequest>(*this);
}

ConfirmPurchaseResult::ConfirmPurchaseResult() :
    PlayFabClientConfirmPurchaseResult{}
{
}

ConfirmPurchaseResult::ConfirmPurchaseResult(const ConfirmPurchaseResult& src) :
    PlayFabClientConfirmPurchaseResult{ src },
    m_items{ src.m_items },
    m_orderId{ src.m_orderId }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseResult::ConfirmPurchaseResult(ConfirmPurchaseResult&& src) :
    PlayFabClientConfirmPurchaseResult{ src },
    m_items{ std::move(src.m_items) },
    m_orderId{ std::move(src.m_orderId) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

ConfirmPurchaseResult::ConfirmPurchaseResult(const PlayFabClientConfirmPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConfirmPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", purchaseDate, true);
}

JsonValue ConfirmPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConfirmPurchaseResult>(*this);
}

ConsumeItemRequest::ConsumeItemRequest() :
    PlayFabClientConsumeItemRequest{}
{
}

ConsumeItemRequest::ConsumeItemRequest(const ConsumeItemRequest& src) :
    PlayFabClientConsumeItemRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemInstanceId{ src.m_itemInstanceId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemRequest::ConsumeItemRequest(ConsumeItemRequest&& src) :
    PlayFabClientConsumeItemRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemRequest::ConsumeItemRequest(const PlayFabClientConsumeItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ConsumeCount", consumeCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
}

JsonValue ConsumeItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConsumeItemRequest>(*this);
}

ConsumeItemResult::ConsumeItemResult() :
    PlayFabClientConsumeItemResult{}
{
}

ConsumeItemResult::ConsumeItemResult(const ConsumeItemResult& src) :
    PlayFabClientConsumeItemResult{ src },
    m_itemInstanceId{ src.m_itemInstanceId }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemResult::ConsumeItemResult(ConsumeItemResult&& src) :
    PlayFabClientConsumeItemResult{ src },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemResult::ConsumeItemResult(const PlayFabClientConsumeItemResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeItemResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "RemainingUses", remainingUses);
}

JsonValue ConsumeItemResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConsumeItemResult>(*this);
}

size_t ConsumeItemResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientConsumeItemResult) };
    serializedSize += (m_itemInstanceId.size() + 1);
    return serializedSize;
}

void ConsumeItemResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientConsumeItemResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientConsumeItemResult);
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MicrosoftStorePayload::MicrosoftStorePayload() :
    PlayFabClientMicrosoftStorePayload{}
{
}

MicrosoftStorePayload::MicrosoftStorePayload(const MicrosoftStorePayload& src) :
    PlayFabClientMicrosoftStorePayload{ src },
    m_collectionsMsIdKey{ src.m_collectionsMsIdKey },
    m_userId{ src.m_userId },
    m_xboxToken{ src.m_xboxToken }
{
    collectionsMsIdKey = m_collectionsMsIdKey.empty() ? nullptr : m_collectionsMsIdKey.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

MicrosoftStorePayload::MicrosoftStorePayload(MicrosoftStorePayload&& src) :
    PlayFabClientMicrosoftStorePayload{ src },
    m_collectionsMsIdKey{ std::move(src.m_collectionsMsIdKey) },
    m_userId{ std::move(src.m_userId) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    collectionsMsIdKey = m_collectionsMsIdKey.empty() ? nullptr : m_collectionsMsIdKey.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

MicrosoftStorePayload::MicrosoftStorePayload(const PlayFabClientMicrosoftStorePayload& src)
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
    return JsonUtils::ToJson<PlayFabClientMicrosoftStorePayload>(*this);
}

size_t MicrosoftStorePayload::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientMicrosoftStorePayload) };
    serializedSize += (m_collectionsMsIdKey.size() + 1);
    serializedSize += (m_userId.size() + 1);
    serializedSize += (m_xboxToken.size() + 1);
    return serializedSize;
}

void MicrosoftStorePayload::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientMicrosoftStorePayload{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientMicrosoftStorePayload);
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
    PlayFabClientConsumeMicrosoftStoreEntitlementsRequest{}
{
}

ConsumeMicrosoftStoreEntitlementsRequest::ConsumeMicrosoftStoreEntitlementsRequest(const ConsumeMicrosoftStoreEntitlementsRequest& src) :
    PlayFabClientConsumeMicrosoftStoreEntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_marketplaceSpecificData{ src.m_marketplaceSpecificData }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PlayFabClientMicrosoftStorePayload const*)&m_marketplaceSpecificData;
}

ConsumeMicrosoftStoreEntitlementsRequest::ConsumeMicrosoftStoreEntitlementsRequest(ConsumeMicrosoftStoreEntitlementsRequest&& src) :
    PlayFabClientConsumeMicrosoftStoreEntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_marketplaceSpecificData{ std::move(src.m_marketplaceSpecificData) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PlayFabClientMicrosoftStorePayload const*)&m_marketplaceSpecificData;
}

ConsumeMicrosoftStoreEntitlementsRequest::ConsumeMicrosoftStoreEntitlementsRequest(const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientConsumeMicrosoftStoreEntitlementsRequest>(*this);
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse() :
    PlayFabClientConsumeMicrosoftStoreEntitlementsResponse{}
{
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse(const ConsumeMicrosoftStoreEntitlementsResponse& src) :
    PlayFabClientConsumeMicrosoftStoreEntitlementsResponse{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse(ConsumeMicrosoftStoreEntitlementsResponse&& src) :
    PlayFabClientConsumeMicrosoftStoreEntitlementsResponse{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeMicrosoftStoreEntitlementsResponse::ConsumeMicrosoftStoreEntitlementsResponse(const PlayFabClientConsumeMicrosoftStoreEntitlementsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeMicrosoftStoreEntitlementsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue ConsumeMicrosoftStoreEntitlementsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConsumeMicrosoftStoreEntitlementsResponse>(*this);
}

PlayStation5Payload::PlayStation5Payload() :
    PlayFabClientPlayStation5Payload{}
{
}

PlayStation5Payload::PlayStation5Payload(const PlayStation5Payload& src) :
    PlayFabClientPlayStation5Payload{ src },
    m_ids{ src.m_ids },
    m_serviceLabel{ src.m_serviceLabel }
{
    ids = m_ids.Empty() ? nullptr : m_ids.Data();
    serviceLabel = m_serviceLabel.empty() ? nullptr : m_serviceLabel.data();
}

PlayStation5Payload::PlayStation5Payload(PlayStation5Payload&& src) :
    PlayFabClientPlayStation5Payload{ src },
    m_ids{ std::move(src.m_ids) },
    m_serviceLabel{ std::move(src.m_serviceLabel) }
{
    ids = m_ids.Empty() ? nullptr : m_ids.Data();
    serviceLabel = m_serviceLabel.empty() ? nullptr : m_serviceLabel.data();
}

PlayStation5Payload::PlayStation5Payload(const PlayFabClientPlayStation5Payload& src)
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
    return JsonUtils::ToJson<PlayFabClientPlayStation5Payload>(*this);
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest() :
    PlayFabClientConsumePS5EntitlementsRequest{}
{
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest(const ConsumePS5EntitlementsRequest& src) :
    PlayFabClientConsumePS5EntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_marketplaceSpecificData{ src.m_marketplaceSpecificData }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PlayFabClientPlayStation5Payload const*)&m_marketplaceSpecificData;
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest(ConsumePS5EntitlementsRequest&& src) :
    PlayFabClientConsumePS5EntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_marketplaceSpecificData{ std::move(src.m_marketplaceSpecificData) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    marketplaceSpecificData = (PlayFabClientPlayStation5Payload const*)&m_marketplaceSpecificData;
}

ConsumePS5EntitlementsRequest::ConsumePS5EntitlementsRequest(const PlayFabClientConsumePS5EntitlementsRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientConsumePS5EntitlementsRequest>(*this);
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult() :
    PlayFabClientConsumePS5EntitlementsResult{}
{
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult(const ConsumePS5EntitlementsResult& src) :
    PlayFabClientConsumePS5EntitlementsResult{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult(ConsumePS5EntitlementsResult&& src) :
    PlayFabClientConsumePS5EntitlementsResult{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumePS5EntitlementsResult::ConsumePS5EntitlementsResult(const PlayFabClientConsumePS5EntitlementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumePS5EntitlementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue ConsumePS5EntitlementsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConsumePS5EntitlementsResult>(*this);
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest() :
    PlayFabClientConsumePSNEntitlementsRequest{}
{
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest(const ConsumePSNEntitlementsRequest& src) :
    PlayFabClientConsumePSNEntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest(ConsumePSNEntitlementsRequest&& src) :
    PlayFabClientConsumePSNEntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest(const PlayFabClientConsumePSNEntitlementsRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientConsumePSNEntitlementsRequest>(*this);
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult() :
    PlayFabClientConsumePSNEntitlementsResult{}
{
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult(const ConsumePSNEntitlementsResult& src) :
    PlayFabClientConsumePSNEntitlementsResult{ src },
    m_itemsGranted{ src.m_itemsGranted }
{
    itemsGranted = m_itemsGranted.Empty() ? nullptr : m_itemsGranted.Data();
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult(ConsumePSNEntitlementsResult&& src) :
    PlayFabClientConsumePSNEntitlementsResult{ src },
    m_itemsGranted{ std::move(src.m_itemsGranted) }
{
    itemsGranted = m_itemsGranted.Empty() ? nullptr : m_itemsGranted.Data();
}

ConsumePSNEntitlementsResult::ConsumePSNEntitlementsResult(const PlayFabClientConsumePSNEntitlementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumePSNEntitlementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemsGranted", m_itemsGranted, itemsGranted, itemsGrantedCount);
}

JsonValue ConsumePSNEntitlementsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConsumePSNEntitlementsResult>(*this);
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest() :
    PlayFabClientConsumeXboxEntitlementsRequest{}
{
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest(const ConsumeXboxEntitlementsRequest& src) :
    PlayFabClientConsumeXboxEntitlementsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_xboxToken{ src.m_xboxToken }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest(ConsumeXboxEntitlementsRequest&& src) :
    PlayFabClientConsumeXboxEntitlementsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ConsumeXboxEntitlementsRequest::ConsumeXboxEntitlementsRequest(const PlayFabClientConsumeXboxEntitlementsRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientConsumeXboxEntitlementsRequest>(*this);
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult() :
    PlayFabClientConsumeXboxEntitlementsResult{}
{
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult(const ConsumeXboxEntitlementsResult& src) :
    PlayFabClientConsumeXboxEntitlementsResult{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult(ConsumeXboxEntitlementsResult&& src) :
    PlayFabClientConsumeXboxEntitlementsResult{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

ConsumeXboxEntitlementsResult::ConsumeXboxEntitlementsResult(const PlayFabClientConsumeXboxEntitlementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeXboxEntitlementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue ConsumeXboxEntitlementsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientConsumeXboxEntitlementsResult>(*this);
}

CreateSharedGroupRequest::CreateSharedGroupRequest() :
    PlayFabClientCreateSharedGroupRequest{}
{
}

CreateSharedGroupRequest::CreateSharedGroupRequest(const CreateSharedGroupRequest& src) :
    PlayFabClientCreateSharedGroupRequest{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupRequest::CreateSharedGroupRequest(CreateSharedGroupRequest&& src) :
    PlayFabClientCreateSharedGroupRequest{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupRequest::CreateSharedGroupRequest(const PlayFabClientCreateSharedGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSharedGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue CreateSharedGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCreateSharedGroupRequest>(*this);
}

size_t CreateSharedGroupRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientCreateSharedGroupRequest) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void CreateSharedGroupRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientCreateSharedGroupRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientCreateSharedGroupRequest);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateSharedGroupResult::CreateSharedGroupResult() :
    PlayFabClientCreateSharedGroupResult{}
{
}

CreateSharedGroupResult::CreateSharedGroupResult(const CreateSharedGroupResult& src) :
    PlayFabClientCreateSharedGroupResult{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupResult::CreateSharedGroupResult(CreateSharedGroupResult&& src) :
    PlayFabClientCreateSharedGroupResult{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupResult::CreateSharedGroupResult(const PlayFabClientCreateSharedGroupResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSharedGroupResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue CreateSharedGroupResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCreateSharedGroupResult>(*this);
}

size_t CreateSharedGroupResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientCreateSharedGroupResult) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void CreateSharedGroupResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientCreateSharedGroupResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientCreateSharedGroupResult);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CurrentGamesRequest::CurrentGamesRequest() :
    PlayFabClientCurrentGamesRequest{}
{
}

CurrentGamesRequest::CurrentGamesRequest(const CurrentGamesRequest& src) :
    PlayFabClientCurrentGamesRequest{ src },
    m_buildVersion{ src.m_buildVersion },
    m_gameMode{ src.m_gameMode },
    m_region{ src.m_region },
    m_statisticName{ src.m_statisticName },
    m_tagFilter{ src.m_tagFilter }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    region = m_region ? m_region.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
}

CurrentGamesRequest::CurrentGamesRequest(CurrentGamesRequest&& src) :
    PlayFabClientCurrentGamesRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_gameMode{ std::move(src.m_gameMode) },
    m_region{ std::move(src.m_region) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_tagFilter{ std::move(src.m_tagFilter) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    region = m_region ? m_region.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
}

CurrentGamesRequest::CurrentGamesRequest(const PlayFabClientCurrentGamesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CurrentGamesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "TagFilter", m_tagFilter, tagFilter);
}

JsonValue CurrentGamesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCurrentGamesRequest>(*this);
}

GameInfo::GameInfo() :
    PlayFabClientGameInfo{}
{
}

GameInfo::GameInfo(const GameInfo& src) :
    PlayFabClientGameInfo{ src },
    m_buildVersion{ src.m_buildVersion },
    m_gameMode{ src.m_gameMode },
    m_gameServerData{ src.m_gameServerData },
    m_gameServerStateEnum{ src.m_gameServerStateEnum },
    m_lastHeartbeat{ src.m_lastHeartbeat },
    m_lobbyID{ src.m_lobbyID },
    m_maxPlayers{ src.m_maxPlayers },
    m_playerUserIds{ src.m_playerUserIds },
    m_region{ src.m_region },
    m_serverIPV4Address{ src.m_serverIPV4Address },
    m_serverIPV6Address{ src.m_serverIPV6Address },
    m_serverPort{ src.m_serverPort },
    m_serverPublicDNSName{ src.m_serverPublicDNSName },
    m_statisticName{ src.m_statisticName },
    m_tags{ src.m_tags }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
    gameServerStateEnum = m_gameServerStateEnum ? m_gameServerStateEnum.operator->() : nullptr;
    lastHeartbeat = m_lastHeartbeat ? m_lastHeartbeat.operator->() : nullptr;
    lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
    maxPlayers = m_maxPlayers ? m_maxPlayers.operator->() : nullptr;
    playerUserIds = m_playerUserIds.Empty() ? nullptr : m_playerUserIds.Data();
    region = m_region ? m_region.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GameInfo::GameInfo(GameInfo&& src) :
    PlayFabClientGameInfo{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_gameMode{ std::move(src.m_gameMode) },
    m_gameServerData{ std::move(src.m_gameServerData) },
    m_gameServerStateEnum{ std::move(src.m_gameServerStateEnum) },
    m_lastHeartbeat{ std::move(src.m_lastHeartbeat) },
    m_lobbyID{ std::move(src.m_lobbyID) },
    m_maxPlayers{ std::move(src.m_maxPlayers) },
    m_playerUserIds{ std::move(src.m_playerUserIds) },
    m_region{ std::move(src.m_region) },
    m_serverIPV4Address{ std::move(src.m_serverIPV4Address) },
    m_serverIPV6Address{ std::move(src.m_serverIPV6Address) },
    m_serverPort{ std::move(src.m_serverPort) },
    m_serverPublicDNSName{ std::move(src.m_serverPublicDNSName) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_tags{ std::move(src.m_tags) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
    gameServerStateEnum = m_gameServerStateEnum ? m_gameServerStateEnum.operator->() : nullptr;
    lastHeartbeat = m_lastHeartbeat ? m_lastHeartbeat.operator->() : nullptr;
    lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
    maxPlayers = m_maxPlayers ? m_maxPlayers.operator->() : nullptr;
    playerUserIds = m_playerUserIds.Empty() ? nullptr : m_playerUserIds.Data();
    region = m_region ? m_region.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GameInfo::GameInfo(const PlayFabClientGameInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "GameServerData", m_gameServerData, gameServerData);
    JsonUtils::ObjectGetMember(input, "GameServerStateEnum", m_gameServerStateEnum, gameServerStateEnum);
    JsonUtils::ObjectGetMember(input, "LastHeartbeat", m_lastHeartbeat, lastHeartbeat, true);
    JsonUtils::ObjectGetMember(input, "LobbyID", m_lobbyID, lobbyID);
    JsonUtils::ObjectGetMember(input, "MaxPlayers", m_maxPlayers, maxPlayers);
    JsonUtils::ObjectGetMember(input, "PlayerUserIds", m_playerUserIds, playerUserIds, playerUserIdsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "RunTime", runTime);
    JsonUtils::ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
    JsonUtils::ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
    JsonUtils::ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
    JsonUtils::ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue GameInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGameInfo>(*this);
}

CurrentGamesResult::CurrentGamesResult() :
    PlayFabClientCurrentGamesResult{}
{
}

CurrentGamesResult::CurrentGamesResult(const CurrentGamesResult& src) :
    PlayFabClientCurrentGamesResult{ src },
    m_games{ src.m_games }
{
    games = m_games.Empty() ? nullptr : m_games.Data();
}

CurrentGamesResult::CurrentGamesResult(CurrentGamesResult&& src) :
    PlayFabClientCurrentGamesResult{ src },
    m_games{ std::move(src.m_games) }
{
    games = m_games.Empty() ? nullptr : m_games.Data();
}

CurrentGamesResult::CurrentGamesResult(const PlayFabClientCurrentGamesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CurrentGamesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameCount", gameCount);
    JsonUtils::ObjectGetMember(input, "Games", m_games, games, gamesCount);
    JsonUtils::ObjectGetMember(input, "PlayerCount", playerCount);
}

JsonValue CurrentGamesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientCurrentGamesResult>(*this);
}

DeviceInfoRequest::DeviceInfoRequest() :
    PlayFabClientDeviceInfoRequest{}
{
}

DeviceInfoRequest::DeviceInfoRequest(const DeviceInfoRequest& src) :
    PlayFabClientDeviceInfoRequest{ src },
    m_info{ src.m_info }
{
    info.stringValue = m_info.StringValue();
}

DeviceInfoRequest::DeviceInfoRequest(DeviceInfoRequest&& src) :
    PlayFabClientDeviceInfoRequest{ src },
    m_info{ std::move(src.m_info) }
{
    info.stringValue = m_info.StringValue();
}

DeviceInfoRequest::DeviceInfoRequest(const PlayFabClientDeviceInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeviceInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Info", m_info, info);
}

JsonValue DeviceInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientDeviceInfoRequest>(*this);
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest() :
    PlayFabClientExecuteCloudScriptRequest{}
{
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest(const ExecuteCloudScriptRequest& src) :
    PlayFabClientExecuteCloudScriptRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName },
    m_functionParameter{ src.m_functionParameter },
    m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
    m_revisionSelection{ src.m_revisionSelection },
    m_specificRevision{ src.m_specificRevision }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest(ExecuteCloudScriptRequest&& src) :
    PlayFabClientExecuteCloudScriptRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_generatePlayStreamEvent{ std::move(src.m_generatePlayStreamEvent) },
    m_revisionSelection{ std::move(src.m_revisionSelection) },
    m_specificRevision{ std::move(src.m_specificRevision) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptRequest::ExecuteCloudScriptRequest(const PlayFabClientExecuteCloudScriptRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
    JsonUtils::ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
    JsonUtils::ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
}

JsonValue ExecuteCloudScriptRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientExecuteCloudScriptRequest>(*this);
}

ScriptExecutionError::ScriptExecutionError() :
    PlayFabClientScriptExecutionError{}
{
}

ScriptExecutionError::ScriptExecutionError(const ScriptExecutionError& src) :
    PlayFabClientScriptExecutionError{ src },
    m_error{ src.m_error },
    m_message{ src.m_message },
    m_stackTrace{ src.m_stackTrace }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(ScriptExecutionError&& src) :
    PlayFabClientScriptExecutionError{ src },
    m_error{ std::move(src.m_error) },
    m_message{ std::move(src.m_message) },
    m_stackTrace{ std::move(src.m_stackTrace) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(const PlayFabClientScriptExecutionError& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ScriptExecutionError::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "StackTrace", m_stackTrace, stackTrace);
}

JsonValue ScriptExecutionError::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientScriptExecutionError>(*this);
}

size_t ScriptExecutionError::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientScriptExecutionError) };
    serializedSize += (m_error.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_stackTrace.size() + 1);
    return serializedSize;
}

void ScriptExecutionError::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientScriptExecutionError{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientScriptExecutionError);
    memcpy(stringBuffer, m_error.data(), m_error.size() + 1);
    serializedStruct->error = stringBuffer;
    stringBuffer += m_error.size() + 1;
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_stackTrace.data(), m_stackTrace.size() + 1);
    serializedStruct->stackTrace = stringBuffer;
    stringBuffer += m_stackTrace.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LogStatement::LogStatement() :
    PlayFabClientLogStatement{}
{
}

LogStatement::LogStatement(const LogStatement& src) :
    PlayFabClientLogStatement{ src },
    m_data{ src.m_data },
    m_level{ src.m_level },
    m_message{ src.m_message }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(LogStatement&& src) :
    PlayFabClientLogStatement{ src },
    m_data{ std::move(src.m_data) },
    m_level{ std::move(src.m_level) },
    m_message{ std::move(src.m_message) }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(const PlayFabClientLogStatement& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LogStatement::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data);
    JsonUtils::ObjectGetMember(input, "Level", m_level, level);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
}

JsonValue LogStatement::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLogStatement>(*this);
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult() :
    PlayFabClientExecuteCloudScriptResult{}
{
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
    PlayFabClientExecuteCloudScriptResult{ src },
    m_error{ src.m_error },
    m_functionName{ src.m_functionName },
    m_functionResult{ src.m_functionResult },
    m_functionResultTooLarge{ src.m_functionResultTooLarge },
    m_logs{ src.m_logs },
    m_logsTooLarge{ src.m_logsTooLarge }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
    logs = m_logs.Empty() ? nullptr : m_logs.Data();
    logsTooLarge = m_logsTooLarge ? m_logsTooLarge.operator->() : nullptr;
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src) :
    PlayFabClientExecuteCloudScriptResult{ src },
    m_error{ std::move(src.m_error) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionResult{ std::move(src.m_functionResult) },
    m_functionResultTooLarge{ std::move(src.m_functionResultTooLarge) },
    m_logs{ std::move(src.m_logs) },
    m_logsTooLarge{ std::move(src.m_logsTooLarge) }
{
    error = m_error ? m_error.operator->() : nullptr;
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionResult.stringValue = m_functionResult.StringValue();
    functionResultTooLarge = m_functionResultTooLarge ? m_functionResultTooLarge.operator->() : nullptr;
    logs = m_logs.Empty() ? nullptr : m_logs.Data();
    logsTooLarge = m_logsTooLarge ? m_logsTooLarge.operator->() : nullptr;
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const PlayFabClientExecuteCloudScriptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "APIRequestsIssued", aPIRequestsIssued);
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "ExecutionTimeSeconds", executionTimeSeconds);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionResult", m_functionResult, functionResult);
    JsonUtils::ObjectGetMember(input, "FunctionResultTooLarge", m_functionResultTooLarge, functionResultTooLarge);
    JsonUtils::ObjectGetMember(input, "HttpRequestsIssued", httpRequestsIssued);
    JsonUtils::ObjectGetMember(input, "Logs", m_logs, logs, logsCount);
    JsonUtils::ObjectGetMember(input, "LogsTooLarge", m_logsTooLarge, logsTooLarge);
    JsonUtils::ObjectGetMember(input, "MemoryConsumedBytes", memoryConsumedBytes);
    JsonUtils::ObjectGetMember(input, "ProcessorTimeSeconds", processorTimeSeconds);
    JsonUtils::ObjectGetMember(input, "Revision", revision);
}

JsonValue ExecuteCloudScriptResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientExecuteCloudScriptResult>(*this);
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair() :
    PlayFabClientFacebookInstantGamesPlayFabIdPair{}
{
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src) :
    PlayFabClientFacebookInstantGamesPlayFabIdPair{ src },
    m_facebookInstantGamesId{ src.m_facebookInstantGamesId },
    m_playFabId{ src.m_playFabId }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(FacebookInstantGamesPlayFabIdPair&& src) :
    PlayFabClientFacebookInstantGamesPlayFabIdPair{ src },
    m_facebookInstantGamesId{ std::move(src.m_facebookInstantGamesId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(const PlayFabClientFacebookInstantGamesPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FacebookInstantGamesPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue FacebookInstantGamesPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientFacebookInstantGamesPlayFabIdPair>(*this);
}

size_t FacebookInstantGamesPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientFacebookInstantGamesPlayFabIdPair) };
    serializedSize += (m_facebookInstantGamesId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void FacebookInstantGamesPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientFacebookInstantGamesPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientFacebookInstantGamesPlayFabIdPair);
    memcpy(stringBuffer, m_facebookInstantGamesId.data(), m_facebookInstantGamesId.size() + 1);
    serializedStruct->facebookInstantGamesId = stringBuffer;
    stringBuffer += m_facebookInstantGamesId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair() :
    PlayFabClientFacebookPlayFabIdPair{}
{
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src) :
    PlayFabClientFacebookPlayFabIdPair{ src },
    m_facebookId{ src.m_facebookId },
    m_playFabId{ src.m_playFabId }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(FacebookPlayFabIdPair&& src) :
    PlayFabClientFacebookPlayFabIdPair{ src },
    m_facebookId{ std::move(src.m_facebookId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(const PlayFabClientFacebookPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FacebookPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookId", m_facebookId, facebookId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue FacebookPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientFacebookPlayFabIdPair>(*this);
}

size_t FacebookPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientFacebookPlayFabIdPair) };
    serializedSize += (m_facebookId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void FacebookPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientFacebookPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientFacebookPlayFabIdPair);
    memcpy(stringBuffer, m_facebookId.data(), m_facebookId.size() + 1);
    serializedStruct->facebookId = stringBuffer;
    stringBuffer += m_facebookId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

FriendInfo::FriendInfo() :
    PlayFabClientFriendInfo{}
{
}

FriendInfo::FriendInfo(const FriendInfo& src) :
    PlayFabClientFriendInfo{ src },
    m_facebookInfo{ src.m_facebookInfo },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_gameCenterInfo{ src.m_gameCenterInfo },
    m_profile{ src.m_profile },
    m_PSNInfo{ src.m_PSNInfo },
    m_steamInfo{ src.m_steamInfo },
    m_tags{ src.m_tags },
    m_titleDisplayName{ src.m_titleDisplayName },
    m_username{ src.m_username },
    m_xboxInfo{ src.m_xboxInfo }
{
    facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
    profile = m_profile ? m_profile.operator->() : nullptr;
    PSNInfo = m_PSNInfo ? m_PSNInfo.operator->() : nullptr;
    steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
    xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
}

FriendInfo::FriendInfo(FriendInfo&& src) :
    PlayFabClientFriendInfo{ src },
    m_facebookInfo{ std::move(src.m_facebookInfo) },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_gameCenterInfo{ std::move(src.m_gameCenterInfo) },
    m_profile{ std::move(src.m_profile) },
    m_PSNInfo{ std::move(src.m_PSNInfo) },
    m_steamInfo{ std::move(src.m_steamInfo) },
    m_tags{ std::move(src.m_tags) },
    m_titleDisplayName{ std::move(src.m_titleDisplayName) },
    m_username{ std::move(src.m_username) },
    m_xboxInfo{ std::move(src.m_xboxInfo) }
{
    facebookInfo = m_facebookInfo ? m_facebookInfo.operator->() : nullptr;
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    gameCenterInfo = m_gameCenterInfo ? m_gameCenterInfo.operator->() : nullptr;
    profile = m_profile ? m_profile.operator->() : nullptr;
    PSNInfo = m_PSNInfo ? m_PSNInfo.operator->() : nullptr;
    steamInfo = m_steamInfo ? m_steamInfo.operator->() : nullptr;
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
    xboxInfo = m_xboxInfo ? m_xboxInfo.operator->() : nullptr;
}

FriendInfo::FriendInfo(const PlayFabClientFriendInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void FriendInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInfo", m_facebookInfo, facebookInfo);
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "GameCenterInfo", m_gameCenterInfo, gameCenterInfo);
    JsonUtils::ObjectGetMember(input, "Profile", m_profile, profile);
    JsonUtils::ObjectGetMember(input, "PSNInfo", m_PSNInfo, PSNInfo);
    JsonUtils::ObjectGetMember(input, "SteamInfo", m_steamInfo, steamInfo);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
    JsonUtils::ObjectGetMember(input, "XboxInfo", m_xboxInfo, xboxInfo);
}

JsonValue FriendInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientFriendInfo>(*this);
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair() :
    PlayFabClientGameCenterPlayFabIdPair{}
{
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair(const GameCenterPlayFabIdPair& src) :
    PlayFabClientGameCenterPlayFabIdPair{ src },
    m_gameCenterId{ src.m_gameCenterId },
    m_playFabId{ src.m_playFabId }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair(GameCenterPlayFabIdPair&& src) :
    PlayFabClientGameCenterPlayFabIdPair{ src },
    m_gameCenterId{ std::move(src.m_gameCenterId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GameCenterPlayFabIdPair::GameCenterPlayFabIdPair(const PlayFabClientGameCenterPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameCenterPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GameCenterPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGameCenterPlayFabIdPair>(*this);
}

size_t GameCenterPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGameCenterPlayFabIdPair) };
    serializedSize += (m_gameCenterId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GameCenterPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGameCenterPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGameCenterPlayFabIdPair);
    memcpy(stringBuffer, m_gameCenterId.data(), m_gameCenterId.size() + 1);
    serializedStruct->gameCenterId = stringBuffer;
    stringBuffer += m_gameCenterId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GameServerRegionsRequest::GameServerRegionsRequest() :
    PlayFabClientGameServerRegionsRequest{}
{
}

GameServerRegionsRequest::GameServerRegionsRequest(const GameServerRegionsRequest& src) :
    PlayFabClientGameServerRegionsRequest{ src },
    m_buildVersion{ src.m_buildVersion },
    m_titleId{ src.m_titleId }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GameServerRegionsRequest::GameServerRegionsRequest(GameServerRegionsRequest&& src) :
    PlayFabClientGameServerRegionsRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_titleId{ std::move(src.m_titleId) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GameServerRegionsRequest::GameServerRegionsRequest(const PlayFabClientGameServerRegionsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameServerRegionsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue GameServerRegionsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGameServerRegionsRequest>(*this);
}

size_t GameServerRegionsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGameServerRegionsRequest) };
    serializedSize += (m_buildVersion.size() + 1);
    serializedSize += (m_titleId.size() + 1);
    return serializedSize;
}

void GameServerRegionsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGameServerRegionsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGameServerRegionsRequest);
    memcpy(stringBuffer, m_buildVersion.data(), m_buildVersion.size() + 1);
    serializedStruct->buildVersion = stringBuffer;
    stringBuffer += m_buildVersion.size() + 1;
    memcpy(stringBuffer, m_titleId.data(), m_titleId.size() + 1);
    serializedStruct->titleId = stringBuffer;
    stringBuffer += m_titleId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RegionInfo::RegionInfo() :
    PlayFabClientRegionInfo{}
{
}

RegionInfo::RegionInfo(const RegionInfo& src) :
    PlayFabClientRegionInfo{ src },
    m_name{ src.m_name },
    m_pingUrl{ src.m_pingUrl },
    m_region{ src.m_region }
{
    name = m_name.empty() ? nullptr : m_name.data();
    pingUrl = m_pingUrl.empty() ? nullptr : m_pingUrl.data();
    region = m_region ? m_region.operator->() : nullptr;
}

RegionInfo::RegionInfo(RegionInfo&& src) :
    PlayFabClientRegionInfo{ src },
    m_name{ std::move(src.m_name) },
    m_pingUrl{ std::move(src.m_pingUrl) },
    m_region{ std::move(src.m_region) }
{
    name = m_name.empty() ? nullptr : m_name.data();
    pingUrl = m_pingUrl.empty() ? nullptr : m_pingUrl.data();
    region = m_region ? m_region.operator->() : nullptr;
}

RegionInfo::RegionInfo(const PlayFabClientRegionInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegionInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Available", available);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "PingUrl", m_pingUrl, pingUrl);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
}

JsonValue RegionInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRegionInfo>(*this);
}

GameServerRegionsResult::GameServerRegionsResult() :
    PlayFabClientGameServerRegionsResult{}
{
}

GameServerRegionsResult::GameServerRegionsResult(const GameServerRegionsResult& src) :
    PlayFabClientGameServerRegionsResult{ src },
    m_regions{ src.m_regions }
{
    regions = m_regions.Empty() ? nullptr : m_regions.Data();
}

GameServerRegionsResult::GameServerRegionsResult(GameServerRegionsResult&& src) :
    PlayFabClientGameServerRegionsResult{ src },
    m_regions{ std::move(src.m_regions) }
{
    regions = m_regions.Empty() ? nullptr : m_regions.Data();
}

GameServerRegionsResult::GameServerRegionsResult(const PlayFabClientGameServerRegionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameServerRegionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Regions", m_regions, regions, regionsCount);
}

JsonValue GameServerRegionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGameServerRegionsResult>(*this);
}

GenericPlayFabIdPair::GenericPlayFabIdPair() :
    PlayFabClientGenericPlayFabIdPair{}
{
}

GenericPlayFabIdPair::GenericPlayFabIdPair(const GenericPlayFabIdPair& src) :
    PlayFabClientGenericPlayFabIdPair{ src },
    m_genericId{ src.m_genericId },
    m_playFabId{ src.m_playFabId }
{
    genericId = m_genericId ? m_genericId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GenericPlayFabIdPair::GenericPlayFabIdPair(GenericPlayFabIdPair&& src) :
    PlayFabClientGenericPlayFabIdPair{ src },
    m_genericId{ std::move(src.m_genericId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    genericId = m_genericId ? m_genericId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GenericPlayFabIdPair::GenericPlayFabIdPair(const PlayFabClientGenericPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GenericPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GenericPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGenericPlayFabIdPair>(*this);
}

GetAccountInfoRequest::GetAccountInfoRequest() :
    PlayFabClientGetAccountInfoRequest{}
{
}

GetAccountInfoRequest::GetAccountInfoRequest(const GetAccountInfoRequest& src) :
    PlayFabClientGetAccountInfoRequest{ src },
    m_email{ src.m_email },
    m_playFabId{ src.m_playFabId },
    m_titleDisplayName{ src.m_titleDisplayName },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetAccountInfoRequest::GetAccountInfoRequest(GetAccountInfoRequest&& src) :
    PlayFabClientGetAccountInfoRequest{ src },
    m_email{ std::move(src.m_email) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_titleDisplayName{ std::move(src.m_titleDisplayName) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetAccountInfoRequest::GetAccountInfoRequest(const PlayFabClientGetAccountInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAccountInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue GetAccountInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetAccountInfoRequest>(*this);
}

size_t GetAccountInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetAccountInfoRequest) };
    serializedSize += (m_email.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_titleDisplayName.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void GetAccountInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetAccountInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetAccountInfoRequest);
    memcpy(stringBuffer, m_email.data(), m_email.size() + 1);
    serializedStruct->email = stringBuffer;
    stringBuffer += m_email.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_titleDisplayName.data(), m_titleDisplayName.size() + 1);
    serializedStruct->titleDisplayName = stringBuffer;
    stringBuffer += m_titleDisplayName.size() + 1;
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAccountInfoResult::GetAccountInfoResult() :
    PlayFabClientGetAccountInfoResult{}
{
}

GetAccountInfoResult::GetAccountInfoResult(const GetAccountInfoResult& src) :
    PlayFabClientGetAccountInfoResult{ src },
    m_accountInfo{ src.m_accountInfo }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
}

GetAccountInfoResult::GetAccountInfoResult(GetAccountInfoResult&& src) :
    PlayFabClientGetAccountInfoResult{ src },
    m_accountInfo{ std::move(src.m_accountInfo) }
{
    accountInfo = m_accountInfo ? m_accountInfo.operator->() : nullptr;
}

GetAccountInfoResult::GetAccountInfoResult(const PlayFabClientGetAccountInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAccountInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccountInfo", m_accountInfo, accountInfo);
}

JsonValue GetAccountInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetAccountInfoResult>(*this);
}

NameIdentifier::NameIdentifier() :
    PlayFabClientNameIdentifier{}
{
}

NameIdentifier::NameIdentifier(const NameIdentifier& src) :
    PlayFabClientNameIdentifier{ src },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(NameIdentifier&& src) :
    PlayFabClientNameIdentifier{ src },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

NameIdentifier::NameIdentifier(const PlayFabClientNameIdentifier& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NameIdentifier::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue NameIdentifier::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientNameIdentifier>(*this);
}

size_t NameIdentifier::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientNameIdentifier) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void NameIdentifier::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientNameIdentifier{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientNameIdentifier);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAdPlacementsRequest::GetAdPlacementsRequest() :
    PlayFabClientGetAdPlacementsRequest{}
{
}

GetAdPlacementsRequest::GetAdPlacementsRequest(const GetAdPlacementsRequest& src) :
    PlayFabClientGetAdPlacementsRequest{ src },
    m_appId{ src.m_appId },
    m_identifier{ src.m_identifier }
{
    appId = m_appId.empty() ? nullptr : m_appId.data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetAdPlacementsRequest::GetAdPlacementsRequest(GetAdPlacementsRequest&& src) :
    PlayFabClientGetAdPlacementsRequest{ src },
    m_appId{ std::move(src.m_appId) },
    m_identifier{ std::move(src.m_identifier) }
{
    appId = m_appId.empty() ? nullptr : m_appId.data();
    identifier = m_identifier ? m_identifier.operator->() : nullptr;
}

GetAdPlacementsRequest::GetAdPlacementsRequest(const PlayFabClientGetAdPlacementsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAdPlacementsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AppId", m_appId, appId);
    JsonUtils::ObjectGetMember(input, "Identifier", m_identifier, identifier);
}

JsonValue GetAdPlacementsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetAdPlacementsRequest>(*this);
}

GetAdPlacementsResult::GetAdPlacementsResult() :
    PlayFabClientGetAdPlacementsResult{}
{
}

GetAdPlacementsResult::GetAdPlacementsResult(const GetAdPlacementsResult& src) :
    PlayFabClientGetAdPlacementsResult{ src },
    m_adPlacements{ src.m_adPlacements }
{
    adPlacements = m_adPlacements.Empty() ? nullptr : m_adPlacements.Data();
}

GetAdPlacementsResult::GetAdPlacementsResult(GetAdPlacementsResult&& src) :
    PlayFabClientGetAdPlacementsResult{ src },
    m_adPlacements{ std::move(src.m_adPlacements) }
{
    adPlacements = m_adPlacements.Empty() ? nullptr : m_adPlacements.Data();
}

GetAdPlacementsResult::GetAdPlacementsResult(const PlayFabClientGetAdPlacementsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAdPlacementsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdPlacements", m_adPlacements, adPlacements, adPlacementsCount);
}

JsonValue GetAdPlacementsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetAdPlacementsResult>(*this);
}

GetCatalogItemsRequest::GetCatalogItemsRequest() :
    PlayFabClientGetCatalogItemsRequest{}
{
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
    PlayFabClientGetCatalogItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(GetCatalogItemsRequest&& src) :
    PlayFabClientGetCatalogItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const PlayFabClientGetCatalogItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
}

JsonValue GetCatalogItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCatalogItemsRequest>(*this);
}

size_t GetCatalogItemsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetCatalogItemsRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    return serializedSize;
}

void GetCatalogItemsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetCatalogItemsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetCatalogItemsRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCatalogItemsResult::GetCatalogItemsResult() :
    PlayFabClientGetCatalogItemsResult{}
{
}

GetCatalogItemsResult::GetCatalogItemsResult(const GetCatalogItemsResult& src) :
    PlayFabClientGetCatalogItemsResult{ src },
    m_catalog{ src.m_catalog }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(GetCatalogItemsResult&& src) :
    PlayFabClientGetCatalogItemsResult{ src },
    m_catalog{ std::move(src.m_catalog) }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(const PlayFabClientGetCatalogItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
}

JsonValue GetCatalogItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCatalogItemsResult>(*this);
}

GetCharacterDataRequest::GetCharacterDataRequest() :
    PlayFabClientGetCharacterDataRequest{}
{
}

GetCharacterDataRequest::GetCharacterDataRequest(const GetCharacterDataRequest& src) :
    PlayFabClientGetCharacterDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
    m_keys{ src.m_keys },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterDataRequest::GetCharacterDataRequest(GetCharacterDataRequest&& src) :
    PlayFabClientGetCharacterDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_ifChangedFromDataVersion{ std::move(src.m_ifChangedFromDataVersion) },
    m_keys{ std::move(src.m_keys) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterDataRequest::GetCharacterDataRequest(const PlayFabClientGetCharacterDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetCharacterDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterDataRequest>(*this);
}

GetCharacterDataResult::GetCharacterDataResult() :
    PlayFabClientGetCharacterDataResult{}
{
}

GetCharacterDataResult::GetCharacterDataResult(const GetCharacterDataResult& src) :
    PlayFabClientGetCharacterDataResult{ src },
    m_characterId{ src.m_characterId },
    m_data{ src.m_data }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetCharacterDataResult::GetCharacterDataResult(GetCharacterDataResult&& src) :
    PlayFabClientGetCharacterDataResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_data{ std::move(src.m_data) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetCharacterDataResult::GetCharacterDataResult(const PlayFabClientGetCharacterDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue GetCharacterDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterDataResult>(*this);
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest() :
    PlayFabClientGetCharacterInventoryRequest{}
{
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest(const GetCharacterInventoryRequest& src) :
    PlayFabClientGetCharacterInventoryRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest(GetCharacterInventoryRequest&& src) :
    PlayFabClientGetCharacterInventoryRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest(const PlayFabClientGetCharacterInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetCharacterInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterInventoryRequest>(*this);
}

GetCharacterInventoryResult::GetCharacterInventoryResult() :
    PlayFabClientGetCharacterInventoryResult{}
{
}

GetCharacterInventoryResult::GetCharacterInventoryResult(const GetCharacterInventoryResult& src) :
    PlayFabClientGetCharacterInventoryResult{ src },
    m_characterId{ src.m_characterId },
    m_inventory{ src.m_inventory },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetCharacterInventoryResult::GetCharacterInventoryResult(GetCharacterInventoryResult&& src) :
    PlayFabClientGetCharacterInventoryResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_inventory{ std::move(src.m_inventory) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetCharacterInventoryResult::GetCharacterInventoryResult(const PlayFabClientGetCharacterInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue GetCharacterInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterInventoryResult>(*this);
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest() :
    PlayFabClientGetCharacterLeaderboardRequest{}
{
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src) :
    PlayFabClientGetCharacterLeaderboardRequest{ src },
    m_characterType{ src.m_characterType },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_statisticName{ src.m_statisticName }
{
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest&& src) :
    PlayFabClientGetCharacterLeaderboardRequest{ src },
    m_characterType{ std::move(src.m_characterType) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(const PlayFabClientGetCharacterLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetCharacterLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterLeaderboardRequest>(*this);
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult() :
    PlayFabClientGetCharacterLeaderboardResult{}
{
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src) :
    PlayFabClientGetCharacterLeaderboardResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(GetCharacterLeaderboardResult&& src) :
    PlayFabClientGetCharacterLeaderboardResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(const PlayFabClientGetCharacterLeaderboardResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterLeaderboardResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetCharacterLeaderboardResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterLeaderboardResult>(*this);
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest() :
    PlayFabClientGetCharacterStatisticsRequest{}
{
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest(const GetCharacterStatisticsRequest& src) :
    PlayFabClientGetCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest(GetCharacterStatisticsRequest&& src) :
    PlayFabClientGetCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest(const PlayFabClientGetCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
}

JsonValue GetCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterStatisticsRequest>(*this);
}

size_t GetCharacterStatisticsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetCharacterStatisticsRequest) };
    serializedSize += (m_characterId.size() + 1);
    return serializedSize;
}

void GetCharacterStatisticsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetCharacterStatisticsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetCharacterStatisticsRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult() :
    PlayFabClientGetCharacterStatisticsResult{}
{
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult(const GetCharacterStatisticsResult& src) :
    PlayFabClientGetCharacterStatisticsResult{ src },
    m_characterStatistics{ src.m_characterStatistics }
{
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult(GetCharacterStatisticsResult&& src) :
    PlayFabClientGetCharacterStatisticsResult{ src },
    m_characterStatistics{ std::move(src.m_characterStatistics) }
{
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult(const PlayFabClientGetCharacterStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
}

JsonValue GetCharacterStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetCharacterStatisticsResult>(*this);
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest() :
    PlayFabClientGetContentDownloadUrlRequest{}
{
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src) :
    PlayFabClientGetContentDownloadUrlRequest{ src },
    m_httpMethod{ src.m_httpMethod },
    m_key{ src.m_key },
    m_thruCDN{ src.m_thruCDN }
{
    httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
    key = m_key.empty() ? nullptr : m_key.data();
    thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(GetContentDownloadUrlRequest&& src) :
    PlayFabClientGetContentDownloadUrlRequest{ src },
    m_httpMethod{ std::move(src.m_httpMethod) },
    m_key{ std::move(src.m_key) },
    m_thruCDN{ std::move(src.m_thruCDN) }
{
    httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
    key = m_key.empty() ? nullptr : m_key.data();
    thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(const PlayFabClientGetContentDownloadUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentDownloadUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "HttpMethod", m_httpMethod, httpMethod);
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "ThruCDN", m_thruCDN, thruCDN);
}

JsonValue GetContentDownloadUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetContentDownloadUrlRequest>(*this);
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult() :
    PlayFabClientGetContentDownloadUrlResult{}
{
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src) :
    PlayFabClientGetContentDownloadUrlResult{ src },
    m_uRL{ src.m_uRL }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(GetContentDownloadUrlResult&& src) :
    PlayFabClientGetContentDownloadUrlResult{ src },
    m_uRL{ std::move(src.m_uRL) }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(const PlayFabClientGetContentDownloadUrlResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentDownloadUrlResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "URL", m_uRL, uRL);
}

JsonValue GetContentDownloadUrlResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetContentDownloadUrlResult>(*this);
}

size_t GetContentDownloadUrlResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetContentDownloadUrlResult) };
    serializedSize += (m_uRL.size() + 1);
    return serializedSize;
}

void GetContentDownloadUrlResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetContentDownloadUrlResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetContentDownloadUrlResult);
    memcpy(stringBuffer, m_uRL.data(), m_uRL.size() + 1);
    serializedStruct->uRL = stringBuffer;
    stringBuffer += m_uRL.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayerProfileViewConstraints::PlayerProfileViewConstraints() :
    PlayFabClientPlayerProfileViewConstraints{}
{
}


PlayerProfileViewConstraints::PlayerProfileViewConstraints(const PlayFabClientPlayerProfileViewConstraints& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfileViewConstraints::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ShowAvatarUrl", showAvatarUrl);
    JsonUtils::ObjectGetMember(input, "ShowBannedUntil", showBannedUntil);
    JsonUtils::ObjectGetMember(input, "ShowCampaignAttributions", showCampaignAttributions);
    JsonUtils::ObjectGetMember(input, "ShowContactEmailAddresses", showContactEmailAddresses);
    JsonUtils::ObjectGetMember(input, "ShowCreated", showCreated);
    JsonUtils::ObjectGetMember(input, "ShowDisplayName", showDisplayName);
    JsonUtils::ObjectGetMember(input, "ShowExperimentVariants", showExperimentVariants);
    JsonUtils::ObjectGetMember(input, "ShowLastLogin", showLastLogin);
    JsonUtils::ObjectGetMember(input, "ShowLinkedAccounts", showLinkedAccounts);
    JsonUtils::ObjectGetMember(input, "ShowLocations", showLocations);
    JsonUtils::ObjectGetMember(input, "ShowMemberships", showMemberships);
    JsonUtils::ObjectGetMember(input, "ShowOrigination", showOrigination);
    JsonUtils::ObjectGetMember(input, "ShowPushNotificationRegistrations", showPushNotificationRegistrations);
    JsonUtils::ObjectGetMember(input, "ShowStatistics", showStatistics);
    JsonUtils::ObjectGetMember(input, "ShowTags", showTags);
    JsonUtils::ObjectGetMember(input, "ShowTotalValueToDateInUsd", showTotalValueToDateInUsd);
    JsonUtils::ObjectGetMember(input, "ShowValuesToDate", showValuesToDate);
}

JsonValue PlayerProfileViewConstraints::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPlayerProfileViewConstraints>(*this);
}

size_t PlayerProfileViewConstraints::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientPlayerProfileViewConstraints) };
    return serializedSize;
}

void PlayerProfileViewConstraints::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientPlayerProfileViewConstraints{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientPlayerProfileViewConstraints);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest() :
    PlayFabClientGetFriendLeaderboardAroundPlayerRequest{}
{
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest(const GetFriendLeaderboardAroundPlayerRequest& src) :
    PlayFabClientGetFriendLeaderboardAroundPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest(GetFriendLeaderboardAroundPlayerRequest&& src) :
    PlayFabClientGetFriendLeaderboardAroundPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest(const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendLeaderboardAroundPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue GetFriendLeaderboardAroundPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetFriendLeaderboardAroundPlayerRequest>(*this);
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry() :
    PlayFabClientPlayerLeaderboardEntry{}
{
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src) :
    PlayFabClientPlayerLeaderboardEntry{ src },
    m_displayName{ src.m_displayName },
    m_playFabId{ src.m_playFabId },
    m_profile{ src.m_profile }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profile = m_profile ? m_profile.operator->() : nullptr;
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(PlayerLeaderboardEntry&& src) :
    PlayFabClientPlayerLeaderboardEntry{ src },
    m_displayName{ std::move(src.m_displayName) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profile{ std::move(src.m_profile) }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profile = m_profile ? m_profile.operator->() : nullptr;
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(const PlayFabClientPlayerLeaderboardEntry& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLeaderboardEntry::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Position", position);
    JsonUtils::ObjectGetMember(input, "Profile", m_profile, profile);
    JsonUtils::ObjectGetMember(input, "StatValue", statValue);
}

JsonValue PlayerLeaderboardEntry::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPlayerLeaderboardEntry>(*this);
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult() :
    PlayFabClientGetFriendLeaderboardAroundPlayerResult{}
{
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult(const GetFriendLeaderboardAroundPlayerResult& src) :
    PlayFabClientGetFriendLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult(GetFriendLeaderboardAroundPlayerResult&& src) :
    PlayFabClientGetFriendLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult(const PlayFabClientGetFriendLeaderboardAroundPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendLeaderboardAroundPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetFriendLeaderboardAroundPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetFriendLeaderboardAroundPlayerResult>(*this);
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest() :
    PlayFabClientGetFriendLeaderboardRequest{}
{
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src) :
    PlayFabClientGetFriendLeaderboardRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest(GetFriendLeaderboardRequest&& src) :
    PlayFabClientGetFriendLeaderboardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest(const PlayFabClientGetFriendLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue GetFriendLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetFriendLeaderboardRequest>(*this);
}

GetFriendsListRequest::GetFriendsListRequest() :
    PlayFabClientGetFriendsListRequest{}
{
}

GetFriendsListRequest::GetFriendsListRequest(const GetFriendsListRequest& src) :
    PlayFabClientGetFriendsListRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_profileConstraints{ src.m_profileConstraints },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendsListRequest::GetFriendsListRequest(GetFriendsListRequest&& src) :
    PlayFabClientGetFriendsListRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendsListRequest::GetFriendsListRequest(const PlayFabClientGetFriendsListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendsListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue GetFriendsListRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetFriendsListRequest>(*this);
}

GetFriendsListResult::GetFriendsListResult() :
    PlayFabClientGetFriendsListResult{}
{
}

GetFriendsListResult::GetFriendsListResult(const GetFriendsListResult& src) :
    PlayFabClientGetFriendsListResult{ src },
    m_friends{ src.m_friends }
{
    friends = m_friends.Empty() ? nullptr : m_friends.Data();
}

GetFriendsListResult::GetFriendsListResult(GetFriendsListResult&& src) :
    PlayFabClientGetFriendsListResult{ src },
    m_friends{ std::move(src.m_friends) }
{
    friends = m_friends.Empty() ? nullptr : m_friends.Data();
}

GetFriendsListResult::GetFriendsListResult(const PlayFabClientGetFriendsListResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendsListResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Friends", m_friends, friends, friendsCount);
}

JsonValue GetFriendsListResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetFriendsListResult>(*this);
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest() :
    PlayFabClientGetLeaderboardAroundCharacterRequest{}
{
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src) :
    PlayFabClientGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterType{ src.m_characterType },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_statisticName{ src.m_statisticName }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest(GetLeaderboardAroundCharacterRequest&& src) :
    PlayFabClientGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterType{ std::move(src.m_characterType) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest(const PlayFabClientGetLeaderboardAroundCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetLeaderboardAroundCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundCharacterRequest>(*this);
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult() :
    PlayFabClientGetLeaderboardAroundCharacterResult{}
{
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src) :
    PlayFabClientGetLeaderboardAroundCharacterResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(GetLeaderboardAroundCharacterResult&& src) :
    PlayFabClientGetLeaderboardAroundCharacterResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(const PlayFabClientGetLeaderboardAroundCharacterResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundCharacterResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetLeaderboardAroundCharacterResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundCharacterResult>(*this);
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest() :
    PlayFabClientGetLeaderboardAroundPlayerRequest{}
{
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest(const GetLeaderboardAroundPlayerRequest& src) :
    PlayFabClientGetLeaderboardAroundPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest(GetLeaderboardAroundPlayerRequest&& src) :
    PlayFabClientGetLeaderboardAroundPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest(const PlayFabClientGetLeaderboardAroundPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetLeaderboardAroundPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundPlayerRequest>(*this);
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult() :
    PlayFabClientGetLeaderboardAroundPlayerResult{}
{
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult(const GetLeaderboardAroundPlayerResult& src) :
    PlayFabClientGetLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult(GetLeaderboardAroundPlayerResult&& src) :
    PlayFabClientGetLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult(const PlayFabClientGetLeaderboardAroundPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetLeaderboardAroundPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardAroundPlayerResult>(*this);
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest() :
    PlayFabClientGetLeaderboardForUsersCharactersRequest{}
{
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src) :
    PlayFabClientGetLeaderboardForUsersCharactersRequest{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest(GetLeaderboardForUsersCharactersRequest&& src) :
    PlayFabClientGetLeaderboardForUsersCharactersRequest{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest(const PlayFabClientGetLeaderboardForUsersCharactersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardForUsersCharactersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetLeaderboardForUsersCharactersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardForUsersCharactersRequest>(*this);
}

size_t GetLeaderboardForUsersCharactersRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetLeaderboardForUsersCharactersRequest) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void GetLeaderboardForUsersCharactersRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetLeaderboardForUsersCharactersRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetLeaderboardForUsersCharactersRequest);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult() :
    PlayFabClientGetLeaderboardForUsersCharactersResult{}
{
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src) :
    PlayFabClientGetLeaderboardForUsersCharactersResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult&& src) :
    PlayFabClientGetLeaderboardForUsersCharactersResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(const PlayFabClientGetLeaderboardForUsersCharactersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardForUsersCharactersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetLeaderboardForUsersCharactersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardForUsersCharactersResult>(*this);
}

GetLeaderboardRequest::GetLeaderboardRequest() :
    PlayFabClientGetLeaderboardRequest{}
{
}

GetLeaderboardRequest::GetLeaderboardRequest(const GetLeaderboardRequest& src) :
    PlayFabClientGetLeaderboardRequest{ src },
    m_customTags{ src.m_customTags },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardRequest::GetLeaderboardRequest(GetLeaderboardRequest&& src) :
    PlayFabClientGetLeaderboardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardRequest::GetLeaderboardRequest(const PlayFabClientGetLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardRequest>(*this);
}

GetLeaderboardResult::GetLeaderboardResult() :
    PlayFabClientGetLeaderboardResult{}
{
}

GetLeaderboardResult::GetLeaderboardResult(const GetLeaderboardResult& src) :
    PlayFabClientGetLeaderboardResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardResult::GetLeaderboardResult(GetLeaderboardResult&& src) :
    PlayFabClientGetLeaderboardResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardResult::GetLeaderboardResult(const PlayFabClientGetLeaderboardResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetLeaderboardResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetLeaderboardResult>(*this);
}

GetPaymentTokenRequest::GetPaymentTokenRequest() :
    PlayFabClientGetPaymentTokenRequest{}
{
}

GetPaymentTokenRequest::GetPaymentTokenRequest(const GetPaymentTokenRequest& src) :
    PlayFabClientGetPaymentTokenRequest{ src },
    m_tokenProvider{ src.m_tokenProvider }
{
    tokenProvider = m_tokenProvider.empty() ? nullptr : m_tokenProvider.data();
}

GetPaymentTokenRequest::GetPaymentTokenRequest(GetPaymentTokenRequest&& src) :
    PlayFabClientGetPaymentTokenRequest{ src },
    m_tokenProvider{ std::move(src.m_tokenProvider) }
{
    tokenProvider = m_tokenProvider.empty() ? nullptr : m_tokenProvider.data();
}

GetPaymentTokenRequest::GetPaymentTokenRequest(const PlayFabClientGetPaymentTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPaymentTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TokenProvider", m_tokenProvider, tokenProvider);
}

JsonValue GetPaymentTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPaymentTokenRequest>(*this);
}

size_t GetPaymentTokenRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetPaymentTokenRequest) };
    serializedSize += (m_tokenProvider.size() + 1);
    return serializedSize;
}

void GetPaymentTokenRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetPaymentTokenRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetPaymentTokenRequest);
    memcpy(stringBuffer, m_tokenProvider.data(), m_tokenProvider.size() + 1);
    serializedStruct->tokenProvider = stringBuffer;
    stringBuffer += m_tokenProvider.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPaymentTokenResult::GetPaymentTokenResult() :
    PlayFabClientGetPaymentTokenResult{}
{
}

GetPaymentTokenResult::GetPaymentTokenResult(const GetPaymentTokenResult& src) :
    PlayFabClientGetPaymentTokenResult{ src },
    m_orderId{ src.m_orderId },
    m_providerToken{ src.m_providerToken }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
}

GetPaymentTokenResult::GetPaymentTokenResult(GetPaymentTokenResult&& src) :
    PlayFabClientGetPaymentTokenResult{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_providerToken{ std::move(src.m_providerToken) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
}

GetPaymentTokenResult::GetPaymentTokenResult(const PlayFabClientGetPaymentTokenResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPaymentTokenResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "ProviderToken", m_providerToken, providerToken);
}

JsonValue GetPaymentTokenResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPaymentTokenResult>(*this);
}

size_t GetPaymentTokenResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetPaymentTokenResult) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_providerToken.size() + 1);
    return serializedSize;
}

void GetPaymentTokenResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetPaymentTokenResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetPaymentTokenResult);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_providerToken.data(), m_providerToken.size() + 1);
    serializedStruct->providerToken = stringBuffer;
    stringBuffer += m_providerToken.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest() :
    PlayFabClientGetPhotonAuthenticationTokenRequest{}
{
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest(const GetPhotonAuthenticationTokenRequest& src) :
    PlayFabClientGetPhotonAuthenticationTokenRequest{ src },
    m_photonApplicationId{ src.m_photonApplicationId }
{
    photonApplicationId = m_photonApplicationId.empty() ? nullptr : m_photonApplicationId.data();
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest(GetPhotonAuthenticationTokenRequest&& src) :
    PlayFabClientGetPhotonAuthenticationTokenRequest{ src },
    m_photonApplicationId{ std::move(src.m_photonApplicationId) }
{
    photonApplicationId = m_photonApplicationId.empty() ? nullptr : m_photonApplicationId.data();
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest(const PlayFabClientGetPhotonAuthenticationTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPhotonAuthenticationTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PhotonApplicationId", m_photonApplicationId, photonApplicationId);
}

JsonValue GetPhotonAuthenticationTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPhotonAuthenticationTokenRequest>(*this);
}

size_t GetPhotonAuthenticationTokenRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetPhotonAuthenticationTokenRequest) };
    serializedSize += (m_photonApplicationId.size() + 1);
    return serializedSize;
}

void GetPhotonAuthenticationTokenRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetPhotonAuthenticationTokenRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetPhotonAuthenticationTokenRequest);
    memcpy(stringBuffer, m_photonApplicationId.data(), m_photonApplicationId.size() + 1);
    serializedStruct->photonApplicationId = stringBuffer;
    stringBuffer += m_photonApplicationId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult() :
    PlayFabClientGetPhotonAuthenticationTokenResult{}
{
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult(const GetPhotonAuthenticationTokenResult& src) :
    PlayFabClientGetPhotonAuthenticationTokenResult{ src },
    m_photonCustomAuthenticationToken{ src.m_photonCustomAuthenticationToken }
{
    photonCustomAuthenticationToken = m_photonCustomAuthenticationToken.empty() ? nullptr : m_photonCustomAuthenticationToken.data();
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult(GetPhotonAuthenticationTokenResult&& src) :
    PlayFabClientGetPhotonAuthenticationTokenResult{ src },
    m_photonCustomAuthenticationToken{ std::move(src.m_photonCustomAuthenticationToken) }
{
    photonCustomAuthenticationToken = m_photonCustomAuthenticationToken.empty() ? nullptr : m_photonCustomAuthenticationToken.data();
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult(const PlayFabClientGetPhotonAuthenticationTokenResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPhotonAuthenticationTokenResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PhotonCustomAuthenticationToken", m_photonCustomAuthenticationToken, photonCustomAuthenticationToken);
}

JsonValue GetPhotonAuthenticationTokenResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPhotonAuthenticationTokenResult>(*this);
}

size_t GetPhotonAuthenticationTokenResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetPhotonAuthenticationTokenResult) };
    serializedSize += (m_photonCustomAuthenticationToken.size() + 1);
    return serializedSize;
}

void GetPhotonAuthenticationTokenResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetPhotonAuthenticationTokenResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetPhotonAuthenticationTokenResult);
    memcpy(stringBuffer, m_photonCustomAuthenticationToken.data(), m_photonCustomAuthenticationToken.size() + 1);
    serializedStruct->photonCustomAuthenticationToken = stringBuffer;
    stringBuffer += m_photonCustomAuthenticationToken.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams() :
    PlayFabClientGetPlayerCombinedInfoRequestParams{}
{
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src) :
    PlayFabClientGetPlayerCombinedInfoRequestParams{ src },
    m_playerStatisticNames{ src.m_playerStatisticNames },
    m_profileConstraints{ src.m_profileConstraints },
    m_titleDataKeys{ src.m_titleDataKeys },
    m_userDataKeys{ src.m_userDataKeys },
    m_userReadOnlyDataKeys{ src.m_userReadOnlyDataKeys }
{
    playerStatisticNames = m_playerStatisticNames.Empty() ? nullptr : m_playerStatisticNames.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    titleDataKeys = m_titleDataKeys.Empty() ? nullptr : m_titleDataKeys.Data();
    userDataKeys = m_userDataKeys.Empty() ? nullptr : m_userDataKeys.Data();
    userReadOnlyDataKeys = m_userReadOnlyDataKeys.Empty() ? nullptr : m_userReadOnlyDataKeys.Data();
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(GetPlayerCombinedInfoRequestParams&& src) :
    PlayFabClientGetPlayerCombinedInfoRequestParams{ src },
    m_playerStatisticNames{ std::move(src.m_playerStatisticNames) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_titleDataKeys{ std::move(src.m_titleDataKeys) },
    m_userDataKeys{ std::move(src.m_userDataKeys) },
    m_userReadOnlyDataKeys{ std::move(src.m_userReadOnlyDataKeys) }
{
    playerStatisticNames = m_playerStatisticNames.Empty() ? nullptr : m_playerStatisticNames.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    titleDataKeys = m_titleDataKeys.Empty() ? nullptr : m_titleDataKeys.Data();
    userDataKeys = m_userDataKeys.Empty() ? nullptr : m_userDataKeys.Data();
    userReadOnlyDataKeys = m_userReadOnlyDataKeys.Empty() ? nullptr : m_userReadOnlyDataKeys.Data();
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(const PlayFabClientGetPlayerCombinedInfoRequestParams& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoRequestParams::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GetCharacterInventories", getCharacterInventories);
    JsonUtils::ObjectGetMember(input, "GetCharacterList", getCharacterList);
    JsonUtils::ObjectGetMember(input, "GetPlayerProfile", getPlayerProfile);
    JsonUtils::ObjectGetMember(input, "GetPlayerStatistics", getPlayerStatistics);
    JsonUtils::ObjectGetMember(input, "GetTitleData", getTitleData);
    JsonUtils::ObjectGetMember(input, "GetUserAccountInfo", getUserAccountInfo);
    JsonUtils::ObjectGetMember(input, "GetUserData", getUserData);
    JsonUtils::ObjectGetMember(input, "GetUserInventory", getUserInventory);
    JsonUtils::ObjectGetMember(input, "GetUserReadOnlyData", getUserReadOnlyData);
    JsonUtils::ObjectGetMember(input, "GetUserVirtualCurrency", getUserVirtualCurrency);
    JsonUtils::ObjectGetMember(input, "PlayerStatisticNames", m_playerStatisticNames, playerStatisticNames, playerStatisticNamesCount);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "TitleDataKeys", m_titleDataKeys, titleDataKeys, titleDataKeysCount);
    JsonUtils::ObjectGetMember(input, "UserDataKeys", m_userDataKeys, userDataKeys, userDataKeysCount);
    JsonUtils::ObjectGetMember(input, "UserReadOnlyDataKeys", m_userReadOnlyDataKeys, userReadOnlyDataKeys, userReadOnlyDataKeysCount);
}

JsonValue GetPlayerCombinedInfoRequestParams::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerCombinedInfoRequestParams>(*this);
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest() :
    PlayFabClientGetPlayerCombinedInfoRequest{}
{
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src) :
    PlayFabClientGetPlayerCombinedInfoRequest{ src },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = (PlayFabClientGetPlayerCombinedInfoRequestParams const*)&m_infoRequestParameters;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest&& src) :
    PlayFabClientGetPlayerCombinedInfoRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = (PlayFabClientGetPlayerCombinedInfoRequestParams const*)&m_infoRequestParameters;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(const PlayFabClientGetPlayerCombinedInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerCombinedInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerCombinedInfoRequest>(*this);
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult() :
    PlayFabClientGetPlayerCombinedInfoResult{}
{
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src) :
    PlayFabClientGetPlayerCombinedInfoResult{ src },
    m_infoResultPayload{ src.m_infoResultPayload },
    m_playFabId{ src.m_playFabId }
{
    infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult&& src) :
    PlayFabClientGetPlayerCombinedInfoResult{ src },
    m_infoResultPayload{ std::move(src.m_infoResultPayload) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(const PlayFabClientGetPlayerCombinedInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerCombinedInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "InfoResultPayload", m_infoResultPayload, infoResultPayload);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerCombinedInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerCombinedInfoResult>(*this);
}

GetPlayerProfileRequest::GetPlayerProfileRequest() :
    PlayFabClientGetPlayerProfileRequest{}
{
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const GetPlayerProfileRequest& src) :
    PlayFabClientGetPlayerProfileRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(GetPlayerProfileRequest&& src) :
    PlayFabClientGetPlayerProfileRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const PlayFabClientGetPlayerProfileRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerProfileRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
}

JsonValue GetPlayerProfileRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerProfileRequest>(*this);
}

GetPlayerProfileResult::GetPlayerProfileResult() :
    PlayFabClientGetPlayerProfileResult{}
{
}

GetPlayerProfileResult::GetPlayerProfileResult(const GetPlayerProfileResult& src) :
    PlayFabClientGetPlayerProfileResult{ src },
    m_playerProfile{ src.m_playerProfile }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(GetPlayerProfileResult&& src) :
    PlayFabClientGetPlayerProfileResult{ src },
    m_playerProfile{ std::move(src.m_playerProfile) }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(const PlayFabClientGetPlayerProfileResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerProfileResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
}

JsonValue GetPlayerProfileResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerProfileResult>(*this);
}

GetSegmentResult::GetSegmentResult() :
    PlayFabClientGetSegmentResult{}
{
}

GetSegmentResult::GetSegmentResult(const GetSegmentResult& src) :
    PlayFabClientGetSegmentResult{ src },
    m_aBTestParent{ src.m_aBTestParent },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(GetSegmentResult&& src) :
    PlayFabClientGetSegmentResult{ src },
    m_aBTestParent{ std::move(src.m_aBTestParent) },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(const PlayFabClientGetSegmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSegmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ABTestParent", m_aBTestParent, aBTestParent);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue GetSegmentResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetSegmentResult>(*this);
}

size_t GetSegmentResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetSegmentResult) };
    serializedSize += (m_aBTestParent.size() + 1);
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GetSegmentResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetSegmentResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetSegmentResult);
    memcpy(stringBuffer, m_aBTestParent.data(), m_aBTestParent.size() + 1);
    serializedStruct->aBTestParent = stringBuffer;
    stringBuffer += m_aBTestParent.size() + 1;
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult() :
    PlayFabClientGetPlayerSegmentsResult{}
{
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
    PlayFabClientGetPlayerSegmentsResult{ src },
    m_segments{ src.m_segments }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src) :
    PlayFabClientGetPlayerSegmentsResult{ src },
    m_segments{ std::move(src.m_segments) }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const PlayFabClientGetPlayerSegmentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerSegmentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetPlayerSegmentsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerSegmentsResult>(*this);
}

StatisticNameVersion::StatisticNameVersion() :
    PlayFabClientStatisticNameVersion{}
{
}

StatisticNameVersion::StatisticNameVersion(const StatisticNameVersion& src) :
    PlayFabClientStatisticNameVersion{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticNameVersion::StatisticNameVersion(StatisticNameVersion&& src) :
    PlayFabClientStatisticNameVersion{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticNameVersion::StatisticNameVersion(const PlayFabClientStatisticNameVersion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticNameVersion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue StatisticNameVersion::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStatisticNameVersion>(*this);
}

size_t StatisticNameVersion::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientStatisticNameVersion) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void StatisticNameVersion::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientStatisticNameVersion{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientStatisticNameVersion);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest() :
    PlayFabClientGetPlayerStatisticsRequest{}
{
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest(const GetPlayerStatisticsRequest& src) :
    PlayFabClientGetPlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticNames{ src.m_statisticNames },
    m_statisticNameVersions{ src.m_statisticNameVersions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest(GetPlayerStatisticsRequest&& src) :
    PlayFabClientGetPlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticNames{ std::move(src.m_statisticNames) },
    m_statisticNameVersions{ std::move(src.m_statisticNameVersions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest(const PlayFabClientGetPlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticNames", m_statisticNames, statisticNames, statisticNamesCount);
    JsonUtils::ObjectGetMember(input, "StatisticNameVersions", m_statisticNameVersions, statisticNameVersions, statisticNameVersionsCount);
}

JsonValue GetPlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticsRequest>(*this);
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult() :
    PlayFabClientGetPlayerStatisticsResult{}
{
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult(const GetPlayerStatisticsResult& src) :
    PlayFabClientGetPlayerStatisticsResult{ src },
    m_statistics{ src.m_statistics }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult(GetPlayerStatisticsResult&& src) :
    PlayFabClientGetPlayerStatisticsResult{ src },
    m_statistics{ std::move(src.m_statistics) }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult(const PlayFabClientGetPlayerStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue GetPlayerStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticsResult>(*this);
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest() :
    PlayFabClientGetPlayerStatisticVersionsRequest{}
{
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
    PlayFabClientGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src) :
    PlayFabClientGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const PlayFabClientGetPlayerStatisticVersionsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticVersionsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetPlayerStatisticVersionsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticVersionsRequest>(*this);
}

PlayerStatisticVersion::PlayerStatisticVersion() :
    PlayFabClientPlayerStatisticVersion{}
{
}

PlayerStatisticVersion::PlayerStatisticVersion(const PlayerStatisticVersion& src) :
    PlayFabClientPlayerStatisticVersion{ src },
    m_deactivationTime{ src.m_deactivationTime },
    m_scheduledActivationTime{ src.m_scheduledActivationTime },
    m_scheduledDeactivationTime{ src.m_scheduledDeactivationTime },
    m_statisticName{ src.m_statisticName }
{
    deactivationTime = m_deactivationTime ? m_deactivationTime.operator->() : nullptr;
    scheduledActivationTime = m_scheduledActivationTime ? m_scheduledActivationTime.operator->() : nullptr;
    scheduledDeactivationTime = m_scheduledDeactivationTime ? m_scheduledDeactivationTime.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

PlayerStatisticVersion::PlayerStatisticVersion(PlayerStatisticVersion&& src) :
    PlayFabClientPlayerStatisticVersion{ src },
    m_deactivationTime{ std::move(src.m_deactivationTime) },
    m_scheduledActivationTime{ std::move(src.m_scheduledActivationTime) },
    m_scheduledDeactivationTime{ std::move(src.m_scheduledDeactivationTime) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    deactivationTime = m_deactivationTime ? m_deactivationTime.operator->() : nullptr;
    scheduledActivationTime = m_scheduledActivationTime ? m_scheduledActivationTime.operator->() : nullptr;
    scheduledDeactivationTime = m_scheduledDeactivationTime ? m_scheduledDeactivationTime.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

PlayerStatisticVersion::PlayerStatisticVersion(const PlayFabClientPlayerStatisticVersion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatisticVersion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActivationTime", activationTime, true);
    JsonUtils::ObjectGetMember(input, "DeactivationTime", m_deactivationTime, deactivationTime, true);
    JsonUtils::ObjectGetMember(input, "ScheduledActivationTime", m_scheduledActivationTime, scheduledActivationTime, true);
    JsonUtils::ObjectGetMember(input, "ScheduledDeactivationTime", m_scheduledDeactivationTime, scheduledDeactivationTime, true);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue PlayerStatisticVersion::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPlayerStatisticVersion>(*this);
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult() :
    PlayFabClientGetPlayerStatisticVersionsResult{}
{
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
    PlayFabClientGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ src.m_statisticVersions }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src) :
    PlayFabClientGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ std::move(src.m_statisticVersions) }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const PlayFabClientGetPlayerStatisticVersionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticVersionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticVersions", m_statisticVersions, statisticVersions, statisticVersionsCount);
}

JsonValue GetPlayerStatisticVersionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerStatisticVersionsResult>(*this);
}

GetPlayerTagsRequest::GetPlayerTagsRequest() :
    PlayFabClientGetPlayerTagsRequest{}
{
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
    PlayFabClientGetPlayerTagsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playfabNamespace{ src.m_playfabNamespace },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(GetPlayerTagsRequest&& src) :
    PlayFabClientGetPlayerTagsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playfabNamespace{ std::move(src.m_playfabNamespace) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const PlayFabClientGetPlayerTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Namespace", m_playfabNamespace, playfabNamespace);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayerTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerTagsRequest>(*this);
}

GetPlayerTagsResult::GetPlayerTagsResult() :
    PlayFabClientGetPlayerTagsResult{}
{
}

GetPlayerTagsResult::GetPlayerTagsResult(const GetPlayerTagsResult& src) :
    PlayFabClientGetPlayerTagsResult{ src },
    m_playFabId{ src.m_playFabId },
    m_tags{ src.m_tags }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(GetPlayerTagsResult&& src) :
    PlayFabClientGetPlayerTagsResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tags{ std::move(src.m_tags) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(const PlayFabClientGetPlayerTagsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTagsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue GetPlayerTagsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerTagsResult>(*this);
}

GetPlayerTradesRequest::GetPlayerTradesRequest() :
    PlayFabClientGetPlayerTradesRequest{}
{
}

GetPlayerTradesRequest::GetPlayerTradesRequest(const GetPlayerTradesRequest& src) :
    PlayFabClientGetPlayerTradesRequest{ src },
    m_statusFilter{ src.m_statusFilter }
{
    statusFilter = m_statusFilter ? m_statusFilter.operator->() : nullptr;
}

GetPlayerTradesRequest::GetPlayerTradesRequest(GetPlayerTradesRequest&& src) :
    PlayFabClientGetPlayerTradesRequest{ src },
    m_statusFilter{ std::move(src.m_statusFilter) }
{
    statusFilter = m_statusFilter ? m_statusFilter.operator->() : nullptr;
}

GetPlayerTradesRequest::GetPlayerTradesRequest(const PlayFabClientGetPlayerTradesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTradesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatusFilter", m_statusFilter, statusFilter);
}

JsonValue GetPlayerTradesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerTradesRequest>(*this);
}

GetPlayerTradesResponse::GetPlayerTradesResponse() :
    PlayFabClientGetPlayerTradesResponse{}
{
}

GetPlayerTradesResponse::GetPlayerTradesResponse(const GetPlayerTradesResponse& src) :
    PlayFabClientGetPlayerTradesResponse{ src },
    m_acceptedTrades{ src.m_acceptedTrades },
    m_openedTrades{ src.m_openedTrades }
{
    acceptedTrades = m_acceptedTrades.Empty() ? nullptr : m_acceptedTrades.Data();
    openedTrades = m_openedTrades.Empty() ? nullptr : m_openedTrades.Data();
}

GetPlayerTradesResponse::GetPlayerTradesResponse(GetPlayerTradesResponse&& src) :
    PlayFabClientGetPlayerTradesResponse{ src },
    m_acceptedTrades{ std::move(src.m_acceptedTrades) },
    m_openedTrades{ std::move(src.m_openedTrades) }
{
    acceptedTrades = m_acceptedTrades.Empty() ? nullptr : m_acceptedTrades.Data();
    openedTrades = m_openedTrades.Empty() ? nullptr : m_openedTrades.Data();
}

GetPlayerTradesResponse::GetPlayerTradesResponse(const PlayFabClientGetPlayerTradesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTradesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AcceptedTrades", m_acceptedTrades, acceptedTrades, acceptedTradesCount);
    JsonUtils::ObjectGetMember(input, "OpenedTrades", m_openedTrades, openedTrades, openedTradesCount);
}

JsonValue GetPlayerTradesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayerTradesResponse>(*this);
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest() :
    PlayFabClientGetPlayFabIDsFromFacebookIDsRequest{}
{
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromFacebookIDsRequest{ src },
    m_facebookIDs{ src.m_facebookIDs }
{
    facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromFacebookIDsRequest{ src },
    m_facebookIDs{ std::move(src.m_facebookIDs) }
{
    facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookIDs", m_facebookIDs, facebookIDs, facebookIDsCount);
}

JsonValue GetPlayFabIDsFromFacebookIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookIDsRequest>(*this);
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult() :
    PlayFabClientGetPlayFabIDsFromFacebookIDsResult{}
{
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromFacebookIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(GetPlayFabIDsFromFacebookIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromFacebookIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(const PlayFabClientGetPlayFabIDsFromFacebookIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromFacebookIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookIDsResult>(*this);
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest() :
    PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest{}
{
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src) :
    PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
    m_facebookInstantGamesIds{ src.m_facebookInstantGamesIds }
{
    facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
    m_facebookInstantGamesIds{ std::move(src.m_facebookInstantGamesIds) }
{
    facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookInstantGamesIdsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesIds", m_facebookInstantGamesIds, facebookInstantGamesIds, facebookInstantGamesIdsCount);
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest>(*this);
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult() :
    PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult{}
{
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src) :
    PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(GetPlayFabIDsFromFacebookInstantGamesIdsResult&& src) :
    PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookInstantGamesIdsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult>(*this);
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest() :
    PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest{}
{
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest(const GetPlayFabIDsFromGameCenterIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest{ src },
    m_gameCenterIDs{ src.m_gameCenterIDs }
{
    gameCenterIDs = m_gameCenterIDs.Empty() ? nullptr : m_gameCenterIDs.Data();
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest(GetPlayFabIDsFromGameCenterIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest{ src },
    m_gameCenterIDs{ std::move(src.m_gameCenterIDs) }
{
    gameCenterIDs = m_gameCenterIDs.Empty() ? nullptr : m_gameCenterIDs.Data();
}

GetPlayFabIDsFromGameCenterIDsRequest::GetPlayFabIDsFromGameCenterIDsRequest(const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGameCenterIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameCenterIDs", m_gameCenterIDs, gameCenterIDs, gameCenterIDsCount);
}

JsonValue GetPlayFabIDsFromGameCenterIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest>(*this);
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult() :
    PlayFabClientGetPlayFabIDsFromGameCenterIDsResult{}
{
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult(const GetPlayFabIDsFromGameCenterIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromGameCenterIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult(GetPlayFabIDsFromGameCenterIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromGameCenterIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGameCenterIDsResult::GetPlayFabIDsFromGameCenterIDsResult(const PlayFabClientGetPlayFabIDsFromGameCenterIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGameCenterIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromGameCenterIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGameCenterIDsResult>(*this);
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest() :
    PlayFabClientGetPlayFabIDsFromGenericIDsRequest{}
{
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromGenericIDsRequest{ src },
    m_genericIDs{ src.m_genericIDs }
{
    genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromGenericIDsRequest{ src },
    m_genericIDs{ std::move(src.m_genericIDs) }
{
    genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGenericIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericIDs", m_genericIDs, genericIDs, genericIDsCount);
}

JsonValue GetPlayFabIDsFromGenericIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGenericIDsRequest>(*this);
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult() :
    PlayFabClientGetPlayFabIDsFromGenericIDsResult{}
{
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromGenericIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromGenericIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(const PlayFabClientGetPlayFabIDsFromGenericIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGenericIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromGenericIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGenericIDsResult>(*this);
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest() :
    PlayFabClientGetPlayFabIDsFromGoogleIDsRequest{}
{
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest(const GetPlayFabIDsFromGoogleIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromGoogleIDsRequest{ src },
    m_googleIDs{ src.m_googleIDs }
{
    googleIDs = m_googleIDs.Empty() ? nullptr : m_googleIDs.Data();
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest(GetPlayFabIDsFromGoogleIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromGoogleIDsRequest{ src },
    m_googleIDs{ std::move(src.m_googleIDs) }
{
    googleIDs = m_googleIDs.Empty() ? nullptr : m_googleIDs.Data();
}

GetPlayFabIDsFromGoogleIDsRequest::GetPlayFabIDsFromGoogleIDsRequest(const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGoogleIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GoogleIDs", m_googleIDs, googleIDs, googleIDsCount);
}

JsonValue GetPlayFabIDsFromGoogleIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGoogleIDsRequest>(*this);
}

GooglePlayFabIdPair::GooglePlayFabIdPair() :
    PlayFabClientGooglePlayFabIdPair{}
{
}

GooglePlayFabIdPair::GooglePlayFabIdPair(const GooglePlayFabIdPair& src) :
    PlayFabClientGooglePlayFabIdPair{ src },
    m_googleId{ src.m_googleId },
    m_playFabId{ src.m_playFabId }
{
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GooglePlayFabIdPair::GooglePlayFabIdPair(GooglePlayFabIdPair&& src) :
    PlayFabClientGooglePlayFabIdPair{ src },
    m_googleId{ std::move(src.m_googleId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    googleId = m_googleId.empty() ? nullptr : m_googleId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GooglePlayFabIdPair::GooglePlayFabIdPair(const PlayFabClientGooglePlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GooglePlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GoogleId", m_googleId, googleId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GooglePlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGooglePlayFabIdPair>(*this);
}

size_t GooglePlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGooglePlayFabIdPair) };
    serializedSize += (m_googleId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GooglePlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGooglePlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGooglePlayFabIdPair);
    memcpy(stringBuffer, m_googleId.data(), m_googleId.size() + 1);
    serializedStruct->googleId = stringBuffer;
    stringBuffer += m_googleId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult() :
    PlayFabClientGetPlayFabIDsFromGoogleIDsResult{}
{
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult(const GetPlayFabIDsFromGoogleIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromGoogleIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult(GetPlayFabIDsFromGoogleIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromGoogleIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGoogleIDsResult::GetPlayFabIDsFromGoogleIDsResult(const PlayFabClientGetPlayFabIDsFromGoogleIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGoogleIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromGoogleIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromGoogleIDsResult>(*this);
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest() :
    PlayFabClientGetPlayFabIDsFromKongregateIDsRequest{}
{
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest(const GetPlayFabIDsFromKongregateIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromKongregateIDsRequest{ src },
    m_kongregateIDs{ src.m_kongregateIDs }
{
    kongregateIDs = m_kongregateIDs.Empty() ? nullptr : m_kongregateIDs.Data();
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest(GetPlayFabIDsFromKongregateIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromKongregateIDsRequest{ src },
    m_kongregateIDs{ std::move(src.m_kongregateIDs) }
{
    kongregateIDs = m_kongregateIDs.Empty() ? nullptr : m_kongregateIDs.Data();
}

GetPlayFabIDsFromKongregateIDsRequest::GetPlayFabIDsFromKongregateIDsRequest(const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromKongregateIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KongregateIDs", m_kongregateIDs, kongregateIDs, kongregateIDsCount);
}

JsonValue GetPlayFabIDsFromKongregateIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromKongregateIDsRequest>(*this);
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair() :
    PlayFabClientKongregatePlayFabIdPair{}
{
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair(const KongregatePlayFabIdPair& src) :
    PlayFabClientKongregatePlayFabIdPair{ src },
    m_kongregateId{ src.m_kongregateId },
    m_playFabId{ src.m_playFabId }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair(KongregatePlayFabIdPair&& src) :
    PlayFabClientKongregatePlayFabIdPair{ src },
    m_kongregateId{ std::move(src.m_kongregateId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

KongregatePlayFabIdPair::KongregatePlayFabIdPair(const PlayFabClientKongregatePlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void KongregatePlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue KongregatePlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientKongregatePlayFabIdPair>(*this);
}

size_t KongregatePlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientKongregatePlayFabIdPair) };
    serializedSize += (m_kongregateId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void KongregatePlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientKongregatePlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientKongregatePlayFabIdPair);
    memcpy(stringBuffer, m_kongregateId.data(), m_kongregateId.size() + 1);
    serializedStruct->kongregateId = stringBuffer;
    stringBuffer += m_kongregateId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult() :
    PlayFabClientGetPlayFabIDsFromKongregateIDsResult{}
{
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult(const GetPlayFabIDsFromKongregateIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromKongregateIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult(GetPlayFabIDsFromKongregateIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromKongregateIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromKongregateIDsResult::GetPlayFabIDsFromKongregateIDsResult(const PlayFabClientGetPlayFabIDsFromKongregateIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromKongregateIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromKongregateIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromKongregateIDsResult>(*this);
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() :
    PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{}
{
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src) :
    PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
    m_nintendoSwitchDeviceIds{ src.m_nintendoSwitchDeviceIds }
{
    nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
    m_nintendoSwitchDeviceIds{ std::move(src.m_nintendoSwitchDeviceIds) }
{
    nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceIds", m_nintendoSwitchDeviceIds, nintendoSwitchDeviceIds, nintendoSwitchDeviceIdsCount);
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(*this);
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair() :
    PlayFabClientNintendoSwitchPlayFabIdPair{}
{
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src) :
    PlayFabClientNintendoSwitchPlayFabIdPair{ src },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
    m_playFabId{ src.m_playFabId }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair&& src) :
    PlayFabClientNintendoSwitchPlayFabIdPair{ src },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(const PlayFabClientNintendoSwitchPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NintendoSwitchPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue NintendoSwitchPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientNintendoSwitchPlayFabIdPair>(*this);
}

size_t NintendoSwitchPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientNintendoSwitchPlayFabIdPair) };
    serializedSize += (m_nintendoSwitchDeviceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void NintendoSwitchPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientNintendoSwitchPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientNintendoSwitchPlayFabIdPair);
    memcpy(stringBuffer, m_nintendoSwitchDeviceId.data(), m_nintendoSwitchDeviceId.size() + 1);
    serializedStruct->nintendoSwitchDeviceId = stringBuffer;
    stringBuffer += m_nintendoSwitchDeviceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() :
    PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{}
{
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src) :
    PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&& src) :
    PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>(*this);
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest() :
    PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest{}
{
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest{ src },
    m_issuerId{ src.m_issuerId },
    m_PSNAccountIDs{ src.m_PSNAccountIDs }
{
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    PSNAccountIDs = m_PSNAccountIDs.Empty() ? nullptr : m_PSNAccountIDs.Data();
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest{ src },
    m_issuerId{ std::move(src.m_issuerId) },
    m_PSNAccountIDs{ std::move(src.m_PSNAccountIDs) }
{
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    PSNAccountIDs = m_PSNAccountIDs.Empty() ? nullptr : m_PSNAccountIDs.Data();
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromPSNAccountIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "PSNAccountIDs", m_PSNAccountIDs, PSNAccountIDs, PSNAccountIDsCount);
}

JsonValue GetPlayFabIDsFromPSNAccountIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest>(*this);
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair() :
    PlayFabClientPSNAccountPlayFabIdPair{}
{
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src) :
    PlayFabClientPSNAccountPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_PSNAccountId{ src.m_PSNAccountId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    PSNAccountId = m_PSNAccountId.empty() ? nullptr : m_PSNAccountId.data();
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair&& src) :
    PlayFabClientPSNAccountPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_PSNAccountId{ std::move(src.m_PSNAccountId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    PSNAccountId = m_PSNAccountId.empty() ? nullptr : m_PSNAccountId.data();
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(const PlayFabClientPSNAccountPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PSNAccountPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "PSNAccountId", m_PSNAccountId, PSNAccountId);
}

JsonValue PSNAccountPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPSNAccountPlayFabIdPair>(*this);
}

size_t PSNAccountPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientPSNAccountPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_PSNAccountId.size() + 1);
    return serializedSize;
}

void PSNAccountPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientPSNAccountPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientPSNAccountPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_PSNAccountId.data(), m_PSNAccountId.size() + 1);
    serializedStruct->PSNAccountId = stringBuffer;
    stringBuffer += m_PSNAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult() :
    PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult{}
{
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(GetPlayFabIDsFromPSNAccountIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromPSNAccountIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromPSNAccountIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult>(*this);
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest() :
    PlayFabClientGetPlayFabIDsFromSteamIDsRequest{}
{
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromSteamIDsRequest{ src },
    m_steamStringIDs{ src.m_steamStringIDs }
{
    steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromSteamIDsRequest{ src },
    m_steamStringIDs{ std::move(src.m_steamStringIDs) }
{
    steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromSteamIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SteamStringIDs", m_steamStringIDs, steamStringIDs, steamStringIDsCount);
}

JsonValue GetPlayFabIDsFromSteamIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromSteamIDsRequest>(*this);
}

SteamPlayFabIdPair::SteamPlayFabIdPair() :
    PlayFabClientSteamPlayFabIdPair{}
{
}

SteamPlayFabIdPair::SteamPlayFabIdPair(const SteamPlayFabIdPair& src) :
    PlayFabClientSteamPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_steamStringId{ src.m_steamStringId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
}

SteamPlayFabIdPair::SteamPlayFabIdPair(SteamPlayFabIdPair&& src) :
    PlayFabClientSteamPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_steamStringId{ std::move(src.m_steamStringId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
}

SteamPlayFabIdPair::SteamPlayFabIdPair(const PlayFabClientSteamPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SteamPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "SteamStringId", m_steamStringId, steamStringId);
}

JsonValue SteamPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientSteamPlayFabIdPair>(*this);
}

size_t SteamPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientSteamPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_steamStringId.size() + 1);
    return serializedSize;
}

void SteamPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientSteamPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientSteamPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_steamStringId.data(), m_steamStringId.size() + 1);
    serializedStruct->steamStringId = stringBuffer;
    stringBuffer += m_steamStringId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult() :
    PlayFabClientGetPlayFabIDsFromSteamIDsResult{}
{
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromSteamIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromSteamIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(const PlayFabClientGetPlayFabIDsFromSteamIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromSteamIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromSteamIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromSteamIDsResult>(*this);
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest() :
    PlayFabClientGetPlayFabIDsFromTwitchIDsRequest{}
{
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest(const GetPlayFabIDsFromTwitchIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromTwitchIDsRequest{ src },
    m_twitchIds{ src.m_twitchIds }
{
    twitchIds = m_twitchIds.Empty() ? nullptr : m_twitchIds.Data();
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest(GetPlayFabIDsFromTwitchIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromTwitchIDsRequest{ src },
    m_twitchIds{ std::move(src.m_twitchIds) }
{
    twitchIds = m_twitchIds.Empty() ? nullptr : m_twitchIds.Data();
}

GetPlayFabIDsFromTwitchIDsRequest::GetPlayFabIDsFromTwitchIDsRequest(const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromTwitchIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TwitchIds", m_twitchIds, twitchIds, twitchIdsCount);
}

JsonValue GetPlayFabIDsFromTwitchIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromTwitchIDsRequest>(*this);
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair() :
    PlayFabClientTwitchPlayFabIdPair{}
{
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair(const TwitchPlayFabIdPair& src) :
    PlayFabClientTwitchPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_twitchId{ src.m_twitchId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair(TwitchPlayFabIdPair&& src) :
    PlayFabClientTwitchPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_twitchId{ std::move(src.m_twitchId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    twitchId = m_twitchId.empty() ? nullptr : m_twitchId.data();
}

TwitchPlayFabIdPair::TwitchPlayFabIdPair(const PlayFabClientTwitchPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TwitchPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TwitchId", m_twitchId, twitchId);
}

JsonValue TwitchPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientTwitchPlayFabIdPair>(*this);
}

size_t TwitchPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientTwitchPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_twitchId.size() + 1);
    return serializedSize;
}

void TwitchPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientTwitchPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientTwitchPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_twitchId.data(), m_twitchId.size() + 1);
    serializedStruct->twitchId = stringBuffer;
    stringBuffer += m_twitchId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult() :
    PlayFabClientGetPlayFabIDsFromTwitchIDsResult{}
{
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult(const GetPlayFabIDsFromTwitchIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromTwitchIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult(GetPlayFabIDsFromTwitchIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromTwitchIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromTwitchIDsResult::GetPlayFabIDsFromTwitchIDsResult(const PlayFabClientGetPlayFabIDsFromTwitchIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromTwitchIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromTwitchIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromTwitchIDsResult>(*this);
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest() :
    PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest{}
{
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src) :
    PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest{ src },
    m_sandbox{ src.m_sandbox },
    m_xboxLiveAccountIDs{ src.m_xboxLiveAccountIDs }
{
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest&& src) :
    PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest{ src },
    m_sandbox{ std::move(src.m_sandbox) },
    m_xboxLiveAccountIDs{ std::move(src.m_xboxLiveAccountIDs) }
{
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromXboxLiveIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Sandbox", m_sandbox, sandbox);
    JsonUtils::ObjectGetMember(input, "XboxLiveAccountIDs", m_xboxLiveAccountIDs, xboxLiveAccountIDs, xboxLiveAccountIDsCount);
}

JsonValue GetPlayFabIDsFromXboxLiveIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest>(*this);
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair() :
    PlayFabClientXboxLiveAccountPlayFabIdPair{}
{
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src) :
    PlayFabClientXboxLiveAccountPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_xboxLiveAccountId{ src.m_xboxLiveAccountId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair&& src) :
    PlayFabClientXboxLiveAccountPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_xboxLiveAccountId{ std::move(src.m_xboxLiveAccountId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(const PlayFabClientXboxLiveAccountPlayFabIdPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void XboxLiveAccountPlayFabIdPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "XboxLiveAccountId", m_xboxLiveAccountId, xboxLiveAccountId);
}

JsonValue XboxLiveAccountPlayFabIdPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientXboxLiveAccountPlayFabIdPair>(*this);
}

size_t XboxLiveAccountPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientXboxLiveAccountPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_xboxLiveAccountId.size() + 1);
    return serializedSize;
}

void XboxLiveAccountPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientXboxLiveAccountPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientXboxLiveAccountPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_xboxLiveAccountId.data(), m_xboxLiveAccountId.size() + 1);
    serializedStruct->xboxLiveAccountId = stringBuffer;
    stringBuffer += m_xboxLiveAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult() :
    PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult{}
{
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src) :
    PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(GetPlayFabIDsFromXboxLiveIDsResult&& src) :
    PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromXboxLiveIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromXboxLiveIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult>(*this);
}

GetPublisherDataRequest::GetPublisherDataRequest() :
    PlayFabClientGetPublisherDataRequest{}
{
}

GetPublisherDataRequest::GetPublisherDataRequest(const GetPublisherDataRequest& src) :
    PlayFabClientGetPublisherDataRequest{ src },
    m_keys{ src.m_keys }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(GetPublisherDataRequest&& src) :
    PlayFabClientGetPublisherDataRequest{ src },
    m_keys{ std::move(src.m_keys) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(const PlayFabClientGetPublisherDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
}

JsonValue GetPublisherDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPublisherDataRequest>(*this);
}

GetPublisherDataResult::GetPublisherDataResult() :
    PlayFabClientGetPublisherDataResult{}
{
}

GetPublisherDataResult::GetPublisherDataResult(const GetPublisherDataResult& src) :
    PlayFabClientGetPublisherDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(GetPublisherDataResult&& src) :
    PlayFabClientGetPublisherDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(const PlayFabClientGetPublisherDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPublisherDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPublisherDataResult>(*this);
}

GetPurchaseRequest::GetPurchaseRequest() :
    PlayFabClientGetPurchaseRequest{}
{
}

GetPurchaseRequest::GetPurchaseRequest(const GetPurchaseRequest& src) :
    PlayFabClientGetPurchaseRequest{ src },
    m_orderId{ src.m_orderId }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

GetPurchaseRequest::GetPurchaseRequest(GetPurchaseRequest&& src) :
    PlayFabClientGetPurchaseRequest{ src },
    m_orderId{ std::move(src.m_orderId) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
}

GetPurchaseRequest::GetPurchaseRequest(const PlayFabClientGetPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
}

JsonValue GetPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPurchaseRequest>(*this);
}

size_t GetPurchaseRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetPurchaseRequest) };
    serializedSize += (m_orderId.size() + 1);
    return serializedSize;
}

void GetPurchaseRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetPurchaseRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetPurchaseRequest);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPurchaseResult::GetPurchaseResult() :
    PlayFabClientGetPurchaseResult{}
{
}

GetPurchaseResult::GetPurchaseResult(const GetPurchaseResult& src) :
    PlayFabClientGetPurchaseResult{ src },
    m_orderId{ src.m_orderId },
    m_paymentProvider{ src.m_paymentProvider },
    m_transactionId{ src.m_transactionId },
    m_transactionStatus{ src.m_transactionStatus }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentProvider = m_paymentProvider.empty() ? nullptr : m_paymentProvider.data();
    transactionId = m_transactionId.empty() ? nullptr : m_transactionId.data();
    transactionStatus = m_transactionStatus.empty() ? nullptr : m_transactionStatus.data();
}

GetPurchaseResult::GetPurchaseResult(GetPurchaseResult&& src) :
    PlayFabClientGetPurchaseResult{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_paymentProvider{ std::move(src.m_paymentProvider) },
    m_transactionId{ std::move(src.m_transactionId) },
    m_transactionStatus{ std::move(src.m_transactionStatus) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentProvider = m_paymentProvider.empty() ? nullptr : m_paymentProvider.data();
    transactionId = m_transactionId.empty() ? nullptr : m_transactionId.data();
    transactionStatus = m_transactionStatus.empty() ? nullptr : m_transactionStatus.data();
}

GetPurchaseResult::GetPurchaseResult(const PlayFabClientGetPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PaymentProvider", m_paymentProvider, paymentProvider);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", purchaseDate, true);
    JsonUtils::ObjectGetMember(input, "TransactionId", m_transactionId, transactionId);
    JsonUtils::ObjectGetMember(input, "TransactionStatus", m_transactionStatus, transactionStatus);
}

JsonValue GetPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetPurchaseResult>(*this);
}

size_t GetPurchaseResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetPurchaseResult) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_paymentProvider.size() + 1);
    serializedSize += (m_transactionId.size() + 1);
    serializedSize += (m_transactionStatus.size() + 1);
    return serializedSize;
}

void GetPurchaseResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetPurchaseResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetPurchaseResult);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_paymentProvider.data(), m_paymentProvider.size() + 1);
    serializedStruct->paymentProvider = stringBuffer;
    stringBuffer += m_paymentProvider.size() + 1;
    memcpy(stringBuffer, m_transactionId.data(), m_transactionId.size() + 1);
    serializedStruct->transactionId = stringBuffer;
    stringBuffer += m_transactionId.size() + 1;
    memcpy(stringBuffer, m_transactionStatus.data(), m_transactionStatus.size() + 1);
    serializedStruct->transactionStatus = stringBuffer;
    stringBuffer += m_transactionStatus.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest() :
    PlayFabClientGetSharedGroupDataRequest{}
{
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src) :
    PlayFabClientGetSharedGroupDataRequest{ src },
    m_getMembers{ src.m_getMembers },
    m_keys{ src.m_keys },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(GetSharedGroupDataRequest&& src) :
    PlayFabClientGetSharedGroupDataRequest{ src },
    m_getMembers{ std::move(src.m_getMembers) },
    m_keys{ std::move(src.m_keys) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(const PlayFabClientGetSharedGroupDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSharedGroupDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GetMembers", m_getMembers, getMembers);
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue GetSharedGroupDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetSharedGroupDataRequest>(*this);
}

SharedGroupDataRecord::SharedGroupDataRecord() :
    PlayFabClientSharedGroupDataRecord{}
{
}

SharedGroupDataRecord::SharedGroupDataRecord(const SharedGroupDataRecord& src) :
    PlayFabClientSharedGroupDataRecord{ src },
    m_lastUpdatedBy{ src.m_lastUpdatedBy },
    m_permission{ src.m_permission },
    m_value{ src.m_value }
{
    lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

SharedGroupDataRecord::SharedGroupDataRecord(SharedGroupDataRecord&& src) :
    PlayFabClientSharedGroupDataRecord{ src },
    m_lastUpdatedBy{ std::move(src.m_lastUpdatedBy) },
    m_permission{ std::move(src.m_permission) },
    m_value{ std::move(src.m_value) }
{
    lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

SharedGroupDataRecord::SharedGroupDataRecord(const PlayFabClientSharedGroupDataRecord& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SharedGroupDataRecord::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LastUpdated", lastUpdated, true);
    JsonUtils::ObjectGetMember(input, "LastUpdatedBy", m_lastUpdatedBy, lastUpdatedBy);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SharedGroupDataRecord::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientSharedGroupDataRecord>(*this);
}

GetSharedGroupDataResult::GetSharedGroupDataResult() :
    PlayFabClientGetSharedGroupDataResult{}
{
}

GetSharedGroupDataResult::GetSharedGroupDataResult(const GetSharedGroupDataResult& src) :
    PlayFabClientGetSharedGroupDataResult{ src },
    m_data{ src.m_data },
    m_members{ src.m_members }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
}

GetSharedGroupDataResult::GetSharedGroupDataResult(GetSharedGroupDataResult&& src) :
    PlayFabClientGetSharedGroupDataResult{ src },
    m_data{ std::move(src.m_data) },
    m_members{ std::move(src.m_members) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
}

GetSharedGroupDataResult::GetSharedGroupDataResult(const PlayFabClientGetSharedGroupDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetSharedGroupDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
}

JsonValue GetSharedGroupDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetSharedGroupDataResult>(*this);
}

GetStoreItemsRequest::GetStoreItemsRequest() :
    PlayFabClientGetStoreItemsRequest{}
{
}

GetStoreItemsRequest::GetStoreItemsRequest(const GetStoreItemsRequest& src) :
    PlayFabClientGetStoreItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsRequest::GetStoreItemsRequest(GetStoreItemsRequest&& src) :
    PlayFabClientGetStoreItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsRequest::GetStoreItemsRequest(const PlayFabClientGetStoreItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetStoreItemsRequest>(*this);
}

size_t GetStoreItemsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetStoreItemsRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    serializedSize += (m_storeId.size() + 1);
    return serializedSize;
}

void GetStoreItemsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetStoreItemsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetStoreItemsRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    memcpy(stringBuffer, m_storeId.data(), m_storeId.size() + 1);
    serializedStruct->storeId = stringBuffer;
    stringBuffer += m_storeId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

StoreMarketingModel::StoreMarketingModel() :
    PlayFabClientStoreMarketingModel{}
{
}

StoreMarketingModel::StoreMarketingModel(const StoreMarketingModel& src) :
    PlayFabClientStoreMarketingModel{ src },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_metadata{ src.m_metadata }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(StoreMarketingModel&& src) :
    PlayFabClientStoreMarketingModel{ src },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_metadata{ std::move(src.m_metadata) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(const PlayFabClientStoreMarketingModel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StoreMarketingModel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata);
}

JsonValue StoreMarketingModel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStoreMarketingModel>(*this);
}

StoreItem::StoreItem() :
    PlayFabClientStoreItem{}
{
}

StoreItem::StoreItem(const StoreItem& src) :
    PlayFabClientStoreItem{ src },
    m_customData{ src.m_customData },
    m_displayPosition{ src.m_displayPosition },
    m_itemId{ src.m_itemId },
    m_realCurrencyPrices{ src.m_realCurrencyPrices },
    m_virtualCurrencyPrices{ src.m_virtualCurrencyPrices }
{
    customData.stringValue = m_customData.StringValue();
    displayPosition = m_displayPosition ? m_displayPosition.operator->() : nullptr;
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

StoreItem::StoreItem(StoreItem&& src) :
    PlayFabClientStoreItem{ src },
    m_customData{ std::move(src.m_customData) },
    m_displayPosition{ std::move(src.m_displayPosition) },
    m_itemId{ std::move(src.m_itemId) },
    m_realCurrencyPrices{ std::move(src.m_realCurrencyPrices) },
    m_virtualCurrencyPrices{ std::move(src.m_virtualCurrencyPrices) }
{
    customData.stringValue = m_customData.StringValue();
    displayPosition = m_displayPosition ? m_displayPosition.operator->() : nullptr;
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    realCurrencyPrices = m_realCurrencyPrices.Empty() ? nullptr : m_realCurrencyPrices.Data();
    virtualCurrencyPrices = m_virtualCurrencyPrices.Empty() ? nullptr : m_virtualCurrencyPrices.Data();
}

StoreItem::StoreItem(const PlayFabClientStoreItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StoreItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "DisplayPosition", m_displayPosition, displayPosition);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "RealCurrencyPrices", m_realCurrencyPrices, realCurrencyPrices, realCurrencyPricesCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyPrices", m_virtualCurrencyPrices, virtualCurrencyPrices, virtualCurrencyPricesCount);
}

JsonValue StoreItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStoreItem>(*this);
}

GetStoreItemsResult::GetStoreItemsResult() :
    PlayFabClientGetStoreItemsResult{}
{
}

GetStoreItemsResult::GetStoreItemsResult(const GetStoreItemsResult& src) :
    PlayFabClientGetStoreItemsResult{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_marketingData{ src.m_marketingData },
    m_source{ src.m_source },
    m_store{ src.m_store },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    source = m_source ? m_source.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsResult::GetStoreItemsResult(GetStoreItemsResult&& src) :
    PlayFabClientGetStoreItemsResult{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_marketingData{ std::move(src.m_marketingData) },
    m_source{ std::move(src.m_source) },
    m_store{ std::move(src.m_store) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    marketingData = m_marketingData ? m_marketingData.operator->() : nullptr;
    source = m_source ? m_source.operator->() : nullptr;
    store = m_store.Empty() ? nullptr : m_store.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsResult::GetStoreItemsResult(const PlayFabClientGetStoreItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "MarketingData", m_marketingData, marketingData);
    JsonUtils::ObjectGetMember(input, "Source", m_source, source);
    JsonUtils::ObjectGetMember(input, "Store", m_store, store, storeCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetStoreItemsResult>(*this);
}

GetTimeResult::GetTimeResult() :
    PlayFabClientGetTimeResult{}
{
}


GetTimeResult::GetTimeResult(const PlayFabClientGetTimeResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTimeResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Time", time, true);
}

JsonValue GetTimeResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTimeResult>(*this);
}

size_t GetTimeResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetTimeResult) };
    return serializedSize;
}

void GetTimeResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetTimeResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetTimeResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetTitleDataRequest::GetTitleDataRequest() :
    PlayFabClientGetTitleDataRequest{}
{
}

GetTitleDataRequest::GetTitleDataRequest(const GetTitleDataRequest& src) :
    PlayFabClientGetTitleDataRequest{ src },
    m_keys{ src.m_keys },
    m_overrideLabel{ src.m_overrideLabel }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(GetTitleDataRequest&& src) :
    PlayFabClientGetTitleDataRequest{ src },
    m_keys{ std::move(src.m_keys) },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(const PlayFabClientGetTitleDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "OverrideLabel", m_overrideLabel, overrideLabel);
}

JsonValue GetTitleDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTitleDataRequest>(*this);
}

GetTitleDataResult::GetTitleDataResult() :
    PlayFabClientGetTitleDataResult{}
{
}

GetTitleDataResult::GetTitleDataResult(const GetTitleDataResult& src) :
    PlayFabClientGetTitleDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(GetTitleDataResult&& src) :
    PlayFabClientGetTitleDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(const PlayFabClientGetTitleDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetTitleDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTitleDataResult>(*this);
}

GetTitleNewsRequest::GetTitleNewsRequest() :
    PlayFabClientGetTitleNewsRequest{}
{
}

GetTitleNewsRequest::GetTitleNewsRequest(const GetTitleNewsRequest& src) :
    PlayFabClientGetTitleNewsRequest{ src },
    m_count{ src.m_count }
{
    count = m_count ? m_count.operator->() : nullptr;
}

GetTitleNewsRequest::GetTitleNewsRequest(GetTitleNewsRequest&& src) :
    PlayFabClientGetTitleNewsRequest{ src },
    m_count{ std::move(src.m_count) }
{
    count = m_count ? m_count.operator->() : nullptr;
}

GetTitleNewsRequest::GetTitleNewsRequest(const PlayFabClientGetTitleNewsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleNewsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Count", m_count, count);
}

JsonValue GetTitleNewsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTitleNewsRequest>(*this);
}

TitleNewsItem::TitleNewsItem() :
    PlayFabClientTitleNewsItem{}
{
}

TitleNewsItem::TitleNewsItem(const TitleNewsItem& src) :
    PlayFabClientTitleNewsItem{ src },
    m_body{ src.m_body },
    m_newsId{ src.m_newsId },
    m_title{ src.m_title }
{
    body = m_body.empty() ? nullptr : m_body.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

TitleNewsItem::TitleNewsItem(TitleNewsItem&& src) :
    PlayFabClientTitleNewsItem{ src },
    m_body{ std::move(src.m_body) },
    m_newsId{ std::move(src.m_newsId) },
    m_title{ std::move(src.m_title) }
{
    body = m_body.empty() ? nullptr : m_body.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

TitleNewsItem::TitleNewsItem(const PlayFabClientTitleNewsItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TitleNewsItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "NewsId", m_newsId, newsId);
    JsonUtils::ObjectGetMember(input, "Timestamp", timestamp, true);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue TitleNewsItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientTitleNewsItem>(*this);
}

size_t TitleNewsItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientTitleNewsItem) };
    serializedSize += (m_body.size() + 1);
    serializedSize += (m_newsId.size() + 1);
    serializedSize += (m_title.size() + 1);
    return serializedSize;
}

void TitleNewsItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientTitleNewsItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientTitleNewsItem);
    memcpy(stringBuffer, m_body.data(), m_body.size() + 1);
    serializedStruct->body = stringBuffer;
    stringBuffer += m_body.size() + 1;
    memcpy(stringBuffer, m_newsId.data(), m_newsId.size() + 1);
    serializedStruct->newsId = stringBuffer;
    stringBuffer += m_newsId.size() + 1;
    memcpy(stringBuffer, m_title.data(), m_title.size() + 1);
    serializedStruct->title = stringBuffer;
    stringBuffer += m_title.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTitleNewsResult::GetTitleNewsResult() :
    PlayFabClientGetTitleNewsResult{}
{
}

GetTitleNewsResult::GetTitleNewsResult(const GetTitleNewsResult& src) :
    PlayFabClientGetTitleNewsResult{ src },
    m_news{ src.m_news }
{
    news = m_news.Empty() ? nullptr : m_news.Data();
}

GetTitleNewsResult::GetTitleNewsResult(GetTitleNewsResult&& src) :
    PlayFabClientGetTitleNewsResult{ src },
    m_news{ std::move(src.m_news) }
{
    news = m_news.Empty() ? nullptr : m_news.Data();
}

GetTitleNewsResult::GetTitleNewsResult(const PlayFabClientGetTitleNewsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleNewsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "News", m_news, news, newsCount);
}

JsonValue GetTitleNewsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTitleNewsResult>(*this);
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest() :
    PlayFabClientGetTitlePublicKeyRequest{}
{
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest(const GetTitlePublicKeyRequest& src) :
    PlayFabClientGetTitlePublicKeyRequest{ src },
    m_titleId{ src.m_titleId },
    m_titleSharedSecret{ src.m_titleSharedSecret }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titleSharedSecret = m_titleSharedSecret.empty() ? nullptr : m_titleSharedSecret.data();
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest(GetTitlePublicKeyRequest&& src) :
    PlayFabClientGetTitlePublicKeyRequest{ src },
    m_titleId{ std::move(src.m_titleId) },
    m_titleSharedSecret{ std::move(src.m_titleSharedSecret) }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titleSharedSecret = m_titleSharedSecret.empty() ? nullptr : m_titleSharedSecret.data();
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest(const PlayFabClientGetTitlePublicKeyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitlePublicKeyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TitleSharedSecret", m_titleSharedSecret, titleSharedSecret);
}

JsonValue GetTitlePublicKeyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTitlePublicKeyRequest>(*this);
}

size_t GetTitlePublicKeyRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetTitlePublicKeyRequest) };
    serializedSize += (m_titleId.size() + 1);
    serializedSize += (m_titleSharedSecret.size() + 1);
    return serializedSize;
}

void GetTitlePublicKeyRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetTitlePublicKeyRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetTitlePublicKeyRequest);
    memcpy(stringBuffer, m_titleId.data(), m_titleId.size() + 1);
    serializedStruct->titleId = stringBuffer;
    stringBuffer += m_titleId.size() + 1;
    memcpy(stringBuffer, m_titleSharedSecret.data(), m_titleSharedSecret.size() + 1);
    serializedStruct->titleSharedSecret = stringBuffer;
    stringBuffer += m_titleSharedSecret.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult() :
    PlayFabClientGetTitlePublicKeyResult{}
{
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult(const GetTitlePublicKeyResult& src) :
    PlayFabClientGetTitlePublicKeyResult{ src },
    m_rSAPublicKey{ src.m_rSAPublicKey }
{
    rSAPublicKey = m_rSAPublicKey.empty() ? nullptr : m_rSAPublicKey.data();
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult(GetTitlePublicKeyResult&& src) :
    PlayFabClientGetTitlePublicKeyResult{ src },
    m_rSAPublicKey{ std::move(src.m_rSAPublicKey) }
{
    rSAPublicKey = m_rSAPublicKey.empty() ? nullptr : m_rSAPublicKey.data();
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult(const PlayFabClientGetTitlePublicKeyResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitlePublicKeyResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "RSAPublicKey", m_rSAPublicKey, rSAPublicKey);
}

JsonValue GetTitlePublicKeyResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTitlePublicKeyResult>(*this);
}

size_t GetTitlePublicKeyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetTitlePublicKeyResult) };
    serializedSize += (m_rSAPublicKey.size() + 1);
    return serializedSize;
}

void GetTitlePublicKeyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetTitlePublicKeyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetTitlePublicKeyResult);
    memcpy(stringBuffer, m_rSAPublicKey.data(), m_rSAPublicKey.size() + 1);
    serializedStruct->rSAPublicKey = stringBuffer;
    stringBuffer += m_rSAPublicKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTradeStatusRequest::GetTradeStatusRequest() :
    PlayFabClientGetTradeStatusRequest{}
{
}

GetTradeStatusRequest::GetTradeStatusRequest(const GetTradeStatusRequest& src) :
    PlayFabClientGetTradeStatusRequest{ src },
    m_offeringPlayerId{ src.m_offeringPlayerId },
    m_tradeId{ src.m_tradeId }
{
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

GetTradeStatusRequest::GetTradeStatusRequest(GetTradeStatusRequest&& src) :
    PlayFabClientGetTradeStatusRequest{ src },
    m_offeringPlayerId{ std::move(src.m_offeringPlayerId) },
    m_tradeId{ std::move(src.m_tradeId) }
{
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

GetTradeStatusRequest::GetTradeStatusRequest(const PlayFabClientGetTradeStatusRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTradeStatusRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue GetTradeStatusRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTradeStatusRequest>(*this);
}

size_t GetTradeStatusRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGetTradeStatusRequest) };
    serializedSize += (m_offeringPlayerId.size() + 1);
    serializedSize += (m_tradeId.size() + 1);
    return serializedSize;
}

void GetTradeStatusRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGetTradeStatusRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGetTradeStatusRequest);
    memcpy(stringBuffer, m_offeringPlayerId.data(), m_offeringPlayerId.size() + 1);
    serializedStruct->offeringPlayerId = stringBuffer;
    stringBuffer += m_offeringPlayerId.size() + 1;
    memcpy(stringBuffer, m_tradeId.data(), m_tradeId.size() + 1);
    serializedStruct->tradeId = stringBuffer;
    stringBuffer += m_tradeId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTradeStatusResponse::GetTradeStatusResponse() :
    PlayFabClientGetTradeStatusResponse{}
{
}

GetTradeStatusResponse::GetTradeStatusResponse(const GetTradeStatusResponse& src) :
    PlayFabClientGetTradeStatusResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

GetTradeStatusResponse::GetTradeStatusResponse(GetTradeStatusResponse&& src) :
    PlayFabClientGetTradeStatusResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

GetTradeStatusResponse::GetTradeStatusResponse(const PlayFabClientGetTradeStatusResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTradeStatusResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue GetTradeStatusResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetTradeStatusResponse>(*this);
}

GetUserDataRequest::GetUserDataRequest() :
    PlayFabClientGetUserDataRequest{}
{
}

GetUserDataRequest::GetUserDataRequest(const GetUserDataRequest& src) :
    PlayFabClientGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
    m_keys{ src.m_keys },
    m_playFabId{ src.m_playFabId }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(GetUserDataRequest&& src) :
    PlayFabClientGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ std::move(src.m_ifChangedFromDataVersion) },
    m_keys{ std::move(src.m_keys) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(const PlayFabClientGetUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetUserDataRequest>(*this);
}

GetUserDataResult::GetUserDataResult() :
    PlayFabClientGetUserDataResult{}
{
}

GetUserDataResult::GetUserDataResult(const GetUserDataResult& src) :
    PlayFabClientGetUserDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetUserDataResult::GetUserDataResult(GetUserDataResult&& src) :
    PlayFabClientGetUserDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetUserDataResult::GetUserDataResult(const PlayFabClientGetUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue GetUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetUserDataResult>(*this);
}

GetUserInventoryRequest::GetUserInventoryRequest() :
    PlayFabClientGetUserInventoryRequest{}
{
}

GetUserInventoryRequest::GetUserInventoryRequest(const GetUserInventoryRequest& src) :
    PlayFabClientGetUserInventoryRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetUserInventoryRequest::GetUserInventoryRequest(GetUserInventoryRequest&& src) :
    PlayFabClientGetUserInventoryRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetUserInventoryRequest::GetUserInventoryRequest(const PlayFabClientGetUserInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetUserInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetUserInventoryRequest>(*this);
}

GetUserInventoryResult::GetUserInventoryResult() :
    PlayFabClientGetUserInventoryResult{}
{
}

GetUserInventoryResult::GetUserInventoryResult(const GetUserInventoryResult& src) :
    PlayFabClientGetUserInventoryResult{ src },
    m_inventory{ src.m_inventory },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetUserInventoryResult::GetUserInventoryResult(GetUserInventoryResult&& src) :
    PlayFabClientGetUserInventoryResult{ src },
    m_inventory{ std::move(src.m_inventory) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetUserInventoryResult::GetUserInventoryResult(const PlayFabClientGetUserInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue GetUserInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGetUserInventoryResult>(*this);
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest() :
    PlayFabClientGrantCharacterToUserRequest{}
{
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src) :
    PlayFabClientGrantCharacterToUserRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterName{ src.m_characterName },
    m_customTags{ src.m_customTags },
    m_itemId{ src.m_itemId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest(GrantCharacterToUserRequest&& src) :
    PlayFabClientGrantCharacterToUserRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterName{ std::move(src.m_characterName) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemId{ std::move(src.m_itemId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest(const PlayFabClientGrantCharacterToUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantCharacterToUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
}

JsonValue GrantCharacterToUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGrantCharacterToUserRequest>(*this);
}

GrantCharacterToUserResult::GrantCharacterToUserResult() :
    PlayFabClientGrantCharacterToUserResult{}
{
}

GrantCharacterToUserResult::GrantCharacterToUserResult(const GrantCharacterToUserResult& src) :
    PlayFabClientGrantCharacterToUserResult{ src },
    m_characterId{ src.m_characterId },
    m_characterType{ src.m_characterType }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

GrantCharacterToUserResult::GrantCharacterToUserResult(GrantCharacterToUserResult&& src) :
    PlayFabClientGrantCharacterToUserResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterType{ std::move(src.m_characterType) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
}

GrantCharacterToUserResult::GrantCharacterToUserResult(const PlayFabClientGrantCharacterToUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantCharacterToUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "Result", result);
}

JsonValue GrantCharacterToUserResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientGrantCharacterToUserResult>(*this);
}

size_t GrantCharacterToUserResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientGrantCharacterToUserResult) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    return serializedSize;
}

void GrantCharacterToUserResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientGrantCharacterToUserResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientGrantCharacterToUserResult);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ItemPurchaseRequest::ItemPurchaseRequest() :
    PlayFabClientItemPurchaseRequest{}
{
}

ItemPurchaseRequest::ItemPurchaseRequest(const ItemPurchaseRequest& src) :
    PlayFabClientItemPurchaseRequest{ src },
    m_annotation{ src.m_annotation },
    m_itemId{ src.m_itemId },
    m_upgradeFromItems{ src.m_upgradeFromItems }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    upgradeFromItems = m_upgradeFromItems.Empty() ? nullptr : m_upgradeFromItems.Data();
}

ItemPurchaseRequest::ItemPurchaseRequest(ItemPurchaseRequest&& src) :
    PlayFabClientItemPurchaseRequest{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_itemId{ std::move(src.m_itemId) },
    m_upgradeFromItems{ std::move(src.m_upgradeFromItems) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    upgradeFromItems = m_upgradeFromItems.Empty() ? nullptr : m_upgradeFromItems.Data();
}

ItemPurchaseRequest::ItemPurchaseRequest(const PlayFabClientItemPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ItemPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "Quantity", quantity);
    JsonUtils::ObjectGetMember(input, "UpgradeFromItems", m_upgradeFromItems, upgradeFromItems, upgradeFromItemsCount);
}

JsonValue ItemPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientItemPurchaseRequest>(*this);
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest() :
    PlayFabClientLinkAndroidDeviceIDRequest{}
{
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest(const LinkAndroidDeviceIDRequest& src) :
    PlayFabClientLinkAndroidDeviceIDRequest{ src },
    m_androidDevice{ src.m_androidDevice },
    m_androidDeviceId{ src.m_androidDeviceId },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_OS{ src.m_OS }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest(LinkAndroidDeviceIDRequest&& src) :
    PlayFabClientLinkAndroidDeviceIDRequest{ src },
    m_androidDevice{ std::move(src.m_androidDevice) },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_OS{ std::move(src.m_OS) }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest(const PlayFabClientLinkAndroidDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkAndroidDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDevice", m_androidDevice, androidDevice);
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
}

JsonValue LinkAndroidDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkAndroidDeviceIDRequest>(*this);
}

LinkAppleRequest::LinkAppleRequest() :
    PlayFabClientLinkAppleRequest{}
{
}

LinkAppleRequest::LinkAppleRequest(const LinkAppleRequest& src) :
    PlayFabClientLinkAppleRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_identityToken{ src.m_identityToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkAppleRequest::LinkAppleRequest(LinkAppleRequest&& src) :
    PlayFabClientLinkAppleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_identityToken{ std::move(src.m_identityToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkAppleRequest::LinkAppleRequest(const PlayFabClientLinkAppleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkAppleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
}

JsonValue LinkAppleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkAppleRequest>(*this);
}

LinkCustomIDRequest::LinkCustomIDRequest() :
    PlayFabClientLinkCustomIDRequest{}
{
}

LinkCustomIDRequest::LinkCustomIDRequest(const LinkCustomIDRequest& src) :
    PlayFabClientLinkCustomIDRequest{ src },
    m_customId{ src.m_customId },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkCustomIDRequest::LinkCustomIDRequest(LinkCustomIDRequest&& src) :
    PlayFabClientLinkCustomIDRequest{ src },
    m_customId{ std::move(src.m_customId) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkCustomIDRequest::LinkCustomIDRequest(const PlayFabClientLinkCustomIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkCustomIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkCustomIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkCustomIDRequest>(*this);
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest() :
    PlayFabClientLinkFacebookAccountRequest{}
{
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest(const LinkFacebookAccountRequest& src) :
    PlayFabClientLinkFacebookAccountRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest(LinkFacebookAccountRequest&& src) :
    PlayFabClientLinkFacebookAccountRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookAccountRequest::LinkFacebookAccountRequest(const PlayFabClientLinkFacebookAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkFacebookAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkFacebookAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkFacebookAccountRequest>(*this);
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest() :
    PlayFabClientLinkFacebookInstantGamesIdRequest{}
{
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest(const LinkFacebookInstantGamesIdRequest& src) :
    PlayFabClientLinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_facebookInstantGamesSignature{ src.m_facebookInstantGamesSignature },
    m_forceLink{ src.m_forceLink }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest(LinkFacebookInstantGamesIdRequest&& src) :
    PlayFabClientLinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_facebookInstantGamesSignature{ std::move(src.m_facebookInstantGamesSignature) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkFacebookInstantGamesIdRequest::LinkFacebookInstantGamesIdRequest(const PlayFabClientLinkFacebookInstantGamesIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkFacebookInstantGamesIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesSignature", m_facebookInstantGamesSignature, facebookInstantGamesSignature);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkFacebookInstantGamesIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkFacebookInstantGamesIdRequest>(*this);
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest() :
    PlayFabClientLinkGameCenterAccountRequest{}
{
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest(const LinkGameCenterAccountRequest& src) :
    PlayFabClientLinkGameCenterAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_gameCenterId{ src.m_gameCenterId },
    m_publicKeyUrl{ src.m_publicKeyUrl },
    m_salt{ src.m_salt },
    m_signature{ src.m_signature },
    m_timestamp{ src.m_timestamp }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest(LinkGameCenterAccountRequest&& src) :
    PlayFabClientLinkGameCenterAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_gameCenterId{ std::move(src.m_gameCenterId) },
    m_publicKeyUrl{ std::move(src.m_publicKeyUrl) },
    m_salt{ std::move(src.m_salt) },
    m_signature{ std::move(src.m_signature) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    gameCenterId = m_gameCenterId.empty() ? nullptr : m_gameCenterId.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
}

LinkGameCenterAccountRequest::LinkGameCenterAccountRequest(const PlayFabClientLinkGameCenterAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkGameCenterAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "GameCenterId", m_gameCenterId, gameCenterId);
    JsonUtils::ObjectGetMember(input, "PublicKeyUrl", m_publicKeyUrl, publicKeyUrl);
    JsonUtils::ObjectGetMember(input, "Salt", m_salt, salt);
    JsonUtils::ObjectGetMember(input, "Signature", m_signature, signature);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp);
}

JsonValue LinkGameCenterAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkGameCenterAccountRequest>(*this);
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest() :
    PlayFabClientLinkGoogleAccountRequest{}
{
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest(const LinkGoogleAccountRequest& src) :
    PlayFabClientLinkGoogleAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_serverAuthCode{ src.m_serverAuthCode }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest(LinkGoogleAccountRequest&& src) :
    PlayFabClientLinkGoogleAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_serverAuthCode{ std::move(src.m_serverAuthCode) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
}

LinkGoogleAccountRequest::LinkGoogleAccountRequest(const PlayFabClientLinkGoogleAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkGoogleAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "ServerAuthCode", m_serverAuthCode, serverAuthCode);
}

JsonValue LinkGoogleAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkGoogleAccountRequest>(*this);
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest() :
    PlayFabClientLinkIOSDeviceIDRequest{}
{
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest(const LinkIOSDeviceIDRequest& src) :
    PlayFabClientLinkIOSDeviceIDRequest{ src },
    m_customTags{ src.m_customTags },
    m_deviceId{ src.m_deviceId },
    m_deviceModel{ src.m_deviceModel },
    m_forceLink{ src.m_forceLink },
    m_OS{ src.m_OS }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest(LinkIOSDeviceIDRequest&& src) :
    PlayFabClientLinkIOSDeviceIDRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_deviceId{ std::move(src.m_deviceId) },
    m_deviceModel{ std::move(src.m_deviceModel) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_OS{ std::move(src.m_OS) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
}

LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest(const PlayFabClientLinkIOSDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkIOSDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
    JsonUtils::ObjectGetMember(input, "DeviceModel", m_deviceModel, deviceModel);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
}

JsonValue LinkIOSDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkIOSDeviceIDRequest>(*this);
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest() :
    PlayFabClientLinkKongregateAccountRequest{}
{
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest(const LinkKongregateAccountRequest& src) :
    PlayFabClientLinkKongregateAccountRequest{ src },
    m_authTicket{ src.m_authTicket },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_kongregateId{ src.m_kongregateId }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest(LinkKongregateAccountRequest&& src) :
    PlayFabClientLinkKongregateAccountRequest{ src },
    m_authTicket{ std::move(src.m_authTicket) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_kongregateId{ std::move(src.m_kongregateId) }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
}

LinkKongregateAccountRequest::LinkKongregateAccountRequest(const PlayFabClientLinkKongregateAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkKongregateAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthTicket", m_authTicket, authTicket);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
}

JsonValue LinkKongregateAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkKongregateAccountRequest>(*this);
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest() :
    PlayFabClientLinkNintendoServiceAccountRequest{}
{
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest(const LinkNintendoServiceAccountRequest& src) :
    PlayFabClientLinkNintendoServiceAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_identityToken{ src.m_identityToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest(LinkNintendoServiceAccountRequest&& src) :
    PlayFabClientLinkNintendoServiceAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_identityToken{ std::move(src.m_identityToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
}

LinkNintendoServiceAccountRequest::LinkNintendoServiceAccountRequest(const PlayFabClientLinkNintendoServiceAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkNintendoServiceAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
}

JsonValue LinkNintendoServiceAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkNintendoServiceAccountRequest>(*this);
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest() :
    PlayFabClientLinkNintendoSwitchDeviceIdRequest{}
{
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest(const LinkNintendoSwitchDeviceIdRequest& src) :
    PlayFabClientLinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest(LinkNintendoSwitchDeviceIdRequest&& src) :
    PlayFabClientLinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

LinkNintendoSwitchDeviceIdRequest::LinkNintendoSwitchDeviceIdRequest(const PlayFabClientLinkNintendoSwitchDeviceIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkNintendoSwitchDeviceIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
}

JsonValue LinkNintendoSwitchDeviceIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkNintendoSwitchDeviceIdRequest>(*this);
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest() :
    PlayFabClientLinkOpenIdConnectRequest{}
{
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest(const LinkOpenIdConnectRequest& src) :
    PlayFabClientLinkOpenIdConnectRequest{ src },
    m_connectionId{ src.m_connectionId },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_idToken{ src.m_idToken }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest(LinkOpenIdConnectRequest&& src) :
    PlayFabClientLinkOpenIdConnectRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_idToken{ std::move(src.m_idToken) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
}

LinkOpenIdConnectRequest::LinkOpenIdConnectRequest(const PlayFabClientLinkOpenIdConnectRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkOpenIdConnectRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IdToken", m_idToken, idToken);
}

JsonValue LinkOpenIdConnectRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkOpenIdConnectRequest>(*this);
}

LinkPSNAccountRequest::LinkPSNAccountRequest() :
    PlayFabClientLinkPSNAccountRequest{}
{
}

LinkPSNAccountRequest::LinkPSNAccountRequest(const LinkPSNAccountRequest& src) :
    PlayFabClientLinkPSNAccountRequest{ src },
    m_authCode{ src.m_authCode },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_issuerId{ src.m_issuerId },
    m_redirectUri{ src.m_redirectUri }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

LinkPSNAccountRequest::LinkPSNAccountRequest(LinkPSNAccountRequest&& src) :
    PlayFabClientLinkPSNAccountRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_redirectUri{ std::move(src.m_redirectUri) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

LinkPSNAccountRequest::LinkPSNAccountRequest(const PlayFabClientLinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthCode", m_authCode, authCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
}

JsonValue LinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkPSNAccountRequest>(*this);
}

LinkSteamAccountRequest::LinkSteamAccountRequest() :
    PlayFabClientLinkSteamAccountRequest{}
{
}

LinkSteamAccountRequest::LinkSteamAccountRequest(const LinkSteamAccountRequest& src) :
    PlayFabClientLinkSteamAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_steamTicket{ src.m_steamTicket }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
}

LinkSteamAccountRequest::LinkSteamAccountRequest(LinkSteamAccountRequest&& src) :
    PlayFabClientLinkSteamAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_steamTicket{ std::move(src.m_steamTicket) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
}

LinkSteamAccountRequest::LinkSteamAccountRequest(const PlayFabClientLinkSteamAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkSteamAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "SteamTicket", m_steamTicket, steamTicket);
}

JsonValue LinkSteamAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkSteamAccountRequest>(*this);
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest() :
    PlayFabClientLinkTwitchAccountRequest{}
{
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest(const LinkTwitchAccountRequest& src) :
    PlayFabClientLinkTwitchAccountRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest(LinkTwitchAccountRequest&& src) :
    PlayFabClientLinkTwitchAccountRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
}

LinkTwitchAccountRequest::LinkTwitchAccountRequest(const PlayFabClientLinkTwitchAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkTwitchAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
}

JsonValue LinkTwitchAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkTwitchAccountRequest>(*this);
}

LinkXboxAccountRequest::LinkXboxAccountRequest() :
    PlayFabClientLinkXboxAccountRequest{}
{
}

LinkXboxAccountRequest::LinkXboxAccountRequest(const LinkXboxAccountRequest& src) :
    PlayFabClientLinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LinkXboxAccountRequest::LinkXboxAccountRequest(LinkXboxAccountRequest&& src) :
    PlayFabClientLinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LinkXboxAccountRequest::LinkXboxAccountRequest(const PlayFabClientLinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue LinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLinkXboxAccountRequest>(*this);
}

ListUsersCharactersRequest::ListUsersCharactersRequest() :
    PlayFabClientListUsersCharactersRequest{}
{
}

ListUsersCharactersRequest::ListUsersCharactersRequest(const ListUsersCharactersRequest& src) :
    PlayFabClientListUsersCharactersRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ListUsersCharactersRequest::ListUsersCharactersRequest(ListUsersCharactersRequest&& src) :
    PlayFabClientListUsersCharactersRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ListUsersCharactersRequest::ListUsersCharactersRequest(const PlayFabClientListUsersCharactersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListUsersCharactersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ListUsersCharactersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientListUsersCharactersRequest>(*this);
}

size_t ListUsersCharactersRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientListUsersCharactersRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ListUsersCharactersRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientListUsersCharactersRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientListUsersCharactersRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListUsersCharactersResult::ListUsersCharactersResult() :
    PlayFabClientListUsersCharactersResult{}
{
}

ListUsersCharactersResult::ListUsersCharactersResult(const ListUsersCharactersResult& src) :
    PlayFabClientListUsersCharactersResult{ src },
    m_characters{ src.m_characters }
{
    characters = m_characters.Empty() ? nullptr : m_characters.Data();
}

ListUsersCharactersResult::ListUsersCharactersResult(ListUsersCharactersResult&& src) :
    PlayFabClientListUsersCharactersResult{ src },
    m_characters{ std::move(src.m_characters) }
{
    characters = m_characters.Empty() ? nullptr : m_characters.Data();
}

ListUsersCharactersResult::ListUsersCharactersResult(const PlayFabClientListUsersCharactersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListUsersCharactersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Characters", m_characters, characters, charactersCount);
}

JsonValue ListUsersCharactersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientListUsersCharactersResult>(*this);
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest() :
    PlayFabClientLoginWithAndroidDeviceIDRequest{}
{
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest(const LoginWithAndroidDeviceIDRequest& src) :
    PlayFabClientLoginWithAndroidDeviceIDRequest{ src },
    m_androidDevice{ src.m_androidDevice },
    m_androidDeviceId{ src.m_androidDeviceId },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_OS{ src.m_OS },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest(LoginWithAndroidDeviceIDRequest&& src) :
    PlayFabClientLoginWithAndroidDeviceIDRequest{ src },
    m_androidDevice{ std::move(src.m_androidDevice) },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_OS{ std::move(src.m_OS) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest(const PlayFabClientLoginWithAndroidDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithAndroidDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDevice", m_androidDevice, androidDevice);
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithAndroidDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithAndroidDeviceIDRequest>(*this);
}

LoginWithAppleRequest::LoginWithAppleRequest() :
    PlayFabClientLoginWithAppleRequest{}
{
}

LoginWithAppleRequest::LoginWithAppleRequest(const LoginWithAppleRequest& src) :
    PlayFabClientLoginWithAppleRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_identityToken{ src.m_identityToken },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAppleRequest::LoginWithAppleRequest(LoginWithAppleRequest&& src) :
    PlayFabClientLoginWithAppleRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_identityToken{ std::move(src.m_identityToken) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAppleRequest::LoginWithAppleRequest(const PlayFabClientLoginWithAppleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithAppleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithAppleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithAppleRequest>(*this);
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest() :
    PlayFabClientLoginWithCustomIDRequest{}
{
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest(const LoginWithCustomIDRequest& src) :
    PlayFabClientLoginWithCustomIDRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customId{ src.m_customId },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest(LoginWithCustomIDRequest&& src) :
    PlayFabClientLoginWithCustomIDRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customId{ std::move(src.m_customId) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest(const PlayFabClientLoginWithCustomIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithCustomIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithCustomIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithCustomIDRequest>(*this);
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest() :
    PlayFabClientLoginWithEmailAddressRequest{}
{
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest(const LoginWithEmailAddressRequest& src) :
    PlayFabClientLoginWithEmailAddressRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_password{ src.m_password },
    m_titleId{ src.m_titleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest(LoginWithEmailAddressRequest&& src) :
    PlayFabClientLoginWithEmailAddressRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_password{ std::move(src.m_password) },
    m_titleId{ std::move(src.m_titleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest(const PlayFabClientLoginWithEmailAddressRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithEmailAddressRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithEmailAddressRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithEmailAddressRequest>(*this);
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest() :
    PlayFabClientLoginWithFacebookInstantGamesIdRequest{}
{
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest(const LoginWithFacebookInstantGamesIdRequest& src) :
    PlayFabClientLoginWithFacebookInstantGamesIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_facebookInstantGamesSignature{ src.m_facebookInstantGamesSignature },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest(LoginWithFacebookInstantGamesIdRequest&& src) :
    PlayFabClientLoginWithFacebookInstantGamesIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_facebookInstantGamesSignature{ std::move(src.m_facebookInstantGamesSignature) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithFacebookInstantGamesIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesSignature", m_facebookInstantGamesSignature, facebookInstantGamesSignature);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithFacebookInstantGamesIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithFacebookInstantGamesIdRequest>(*this);
}

LoginWithFacebookRequest::LoginWithFacebookRequest() :
    PlayFabClientLoginWithFacebookRequest{}
{
}

LoginWithFacebookRequest::LoginWithFacebookRequest(const LoginWithFacebookRequest& src) :
    PlayFabClientLoginWithFacebookRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookRequest::LoginWithFacebookRequest(LoginWithFacebookRequest&& src) :
    PlayFabClientLoginWithFacebookRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookRequest::LoginWithFacebookRequest(const PlayFabClientLoginWithFacebookRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithFacebookRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithFacebookRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithFacebookRequest>(*this);
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest() :
    PlayFabClientLoginWithGameCenterRequest{}
{
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest(const LoginWithGameCenterRequest& src) :
    PlayFabClientLoginWithGameCenterRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerId{ src.m_playerId },
    m_playerSecret{ src.m_playerSecret },
    m_publicKeyUrl{ src.m_publicKeyUrl },
    m_salt{ src.m_salt },
    m_signature{ src.m_signature },
    m_timestamp{ src.m_timestamp },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest(LoginWithGameCenterRequest&& src) :
    PlayFabClientLoginWithGameCenterRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerId{ std::move(src.m_playerId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_publicKeyUrl{ std::move(src.m_publicKeyUrl) },
    m_salt{ std::move(src.m_salt) },
    m_signature{ std::move(src.m_signature) },
    m_timestamp{ std::move(src.m_timestamp) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest(const PlayFabClientLoginWithGameCenterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithGameCenterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "PublicKeyUrl", m_publicKeyUrl, publicKeyUrl);
    JsonUtils::ObjectGetMember(input, "Salt", m_salt, salt);
    JsonUtils::ObjectGetMember(input, "Signature", m_signature, signature);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithGameCenterRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithGameCenterRequest>(*this);
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest() :
    PlayFabClientLoginWithGoogleAccountRequest{}
{
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest(const LoginWithGoogleAccountRequest& src) :
    PlayFabClientLoginWithGoogleAccountRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_serverAuthCode{ src.m_serverAuthCode },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest(LoginWithGoogleAccountRequest&& src) :
    PlayFabClientLoginWithGoogleAccountRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_serverAuthCode{ std::move(src.m_serverAuthCode) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest(const PlayFabClientLoginWithGoogleAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithGoogleAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "ServerAuthCode", m_serverAuthCode, serverAuthCode);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithGoogleAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithGoogleAccountRequest>(*this);
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest() :
    PlayFabClientLoginWithIOSDeviceIDRequest{}
{
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest(const LoginWithIOSDeviceIDRequest& src) :
    PlayFabClientLoginWithIOSDeviceIDRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_deviceId{ src.m_deviceId },
    m_deviceModel{ src.m_deviceModel },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_OS{ src.m_OS },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest(LoginWithIOSDeviceIDRequest&& src) :
    PlayFabClientLoginWithIOSDeviceIDRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_deviceId{ std::move(src.m_deviceId) },
    m_deviceModel{ std::move(src.m_deviceModel) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_OS{ std::move(src.m_OS) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest(const PlayFabClientLoginWithIOSDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithIOSDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
    JsonUtils::ObjectGetMember(input, "DeviceModel", m_deviceModel, deviceModel);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithIOSDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithIOSDeviceIDRequest>(*this);
}

LoginWithKongregateRequest::LoginWithKongregateRequest() :
    PlayFabClientLoginWithKongregateRequest{}
{
}

LoginWithKongregateRequest::LoginWithKongregateRequest(const LoginWithKongregateRequest& src) :
    PlayFabClientLoginWithKongregateRequest{ src },
    m_authTicket{ src.m_authTicket },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_kongregateId{ src.m_kongregateId },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithKongregateRequest::LoginWithKongregateRequest(LoginWithKongregateRequest&& src) :
    PlayFabClientLoginWithKongregateRequest{ src },
    m_authTicket{ std::move(src.m_authTicket) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_kongregateId{ std::move(src.m_kongregateId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithKongregateRequest::LoginWithKongregateRequest(const PlayFabClientLoginWithKongregateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithKongregateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthTicket", m_authTicket, authTicket);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithKongregateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithKongregateRequest>(*this);
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest() :
    PlayFabClientLoginWithNintendoServiceAccountRequest{}
{
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest(const LoginWithNintendoServiceAccountRequest& src) :
    PlayFabClientLoginWithNintendoServiceAccountRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_identityToken{ src.m_identityToken },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest(LoginWithNintendoServiceAccountRequest&& src) :
    PlayFabClientLoginWithNintendoServiceAccountRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_identityToken{ std::move(src.m_identityToken) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest(const PlayFabClientLoginWithNintendoServiceAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithNintendoServiceAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithNintendoServiceAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithNintendoServiceAccountRequest>(*this);
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest() :
    PlayFabClientLoginWithNintendoSwitchDeviceIdRequest{}
{
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest(const LoginWithNintendoSwitchDeviceIdRequest& src) :
    PlayFabClientLoginWithNintendoSwitchDeviceIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest(LoginWithNintendoSwitchDeviceIdRequest&& src) :
    PlayFabClientLoginWithNintendoSwitchDeviceIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithNintendoSwitchDeviceIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithNintendoSwitchDeviceIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithNintendoSwitchDeviceIdRequest>(*this);
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest() :
    PlayFabClientLoginWithOpenIdConnectRequest{}
{
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest(const LoginWithOpenIdConnectRequest& src) :
    PlayFabClientLoginWithOpenIdConnectRequest{ src },
    m_connectionId{ src.m_connectionId },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_idToken{ src.m_idToken },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest(LoginWithOpenIdConnectRequest&& src) :
    PlayFabClientLoginWithOpenIdConnectRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_idToken{ std::move(src.m_idToken) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest(const PlayFabClientLoginWithOpenIdConnectRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithOpenIdConnectRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "IdToken", m_idToken, idToken);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithOpenIdConnectRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithOpenIdConnectRequest>(*this);
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest() :
    PlayFabClientLoginWithPlayFabRequest{}
{
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest(const LoginWithPlayFabRequest& src) :
    PlayFabClientLoginWithPlayFabRequest{ src },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_password{ src.m_password },
    m_titleId{ src.m_titleId },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest(LoginWithPlayFabRequest&& src) :
    PlayFabClientLoginWithPlayFabRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_password{ std::move(src.m_password) },
    m_titleId{ std::move(src.m_titleId) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest(const PlayFabClientLoginWithPlayFabRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithPlayFabRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue LoginWithPlayFabRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithPlayFabRequest>(*this);
}

LoginWithPSNRequest::LoginWithPSNRequest() :
    PlayFabClientLoginWithPSNRequest{}
{
}

LoginWithPSNRequest::LoginWithPSNRequest(const LoginWithPSNRequest& src) :
    PlayFabClientLoginWithPSNRequest{ src },
    m_authCode{ src.m_authCode },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_issuerId{ src.m_issuerId },
    m_playerSecret{ src.m_playerSecret },
    m_redirectUri{ src.m_redirectUri },
    m_titleId{ src.m_titleId }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithPSNRequest::LoginWithPSNRequest(LoginWithPSNRequest&& src) :
    PlayFabClientLoginWithPSNRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_redirectUri{ std::move(src.m_redirectUri) },
    m_titleId{ std::move(src.m_titleId) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithPSNRequest::LoginWithPSNRequest(const PlayFabClientLoginWithPSNRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithPSNRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthCode", m_authCode, authCode);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithPSNRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithPSNRequest>(*this);
}

LoginWithSteamRequest::LoginWithSteamRequest() :
    PlayFabClientLoginWithSteamRequest{}
{
}

LoginWithSteamRequest::LoginWithSteamRequest(const LoginWithSteamRequest& src) :
    PlayFabClientLoginWithSteamRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_steamTicket{ src.m_steamTicket },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithSteamRequest::LoginWithSteamRequest(LoginWithSteamRequest&& src) :
    PlayFabClientLoginWithSteamRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_steamTicket{ std::move(src.m_steamTicket) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithSteamRequest::LoginWithSteamRequest(const PlayFabClientLoginWithSteamRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithSteamRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "SteamTicket", m_steamTicket, steamTicket);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithSteamRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithSteamRequest>(*this);
}

LoginWithTwitchRequest::LoginWithTwitchRequest() :
    PlayFabClientLoginWithTwitchRequest{}
{
}

LoginWithTwitchRequest::LoginWithTwitchRequest(const LoginWithTwitchRequest& src) :
    PlayFabClientLoginWithTwitchRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithTwitchRequest::LoginWithTwitchRequest(LoginWithTwitchRequest&& src) :
    PlayFabClientLoginWithTwitchRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithTwitchRequest::LoginWithTwitchRequest(const PlayFabClientLoginWithTwitchRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithTwitchRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithTwitchRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithTwitchRequest>(*this);
}

LoginWithXboxRequest::LoginWithXboxRequest() :
    PlayFabClientLoginWithXboxRequest{}
{
}

LoginWithXboxRequest::LoginWithXboxRequest(const LoginWithXboxRequest& src) :
    PlayFabClientLoginWithXboxRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId },
    m_xboxToken{ src.m_xboxToken }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LoginWithXboxRequest::LoginWithXboxRequest(LoginWithXboxRequest&& src) :
    PlayFabClientLoginWithXboxRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LoginWithXboxRequest::LoginWithXboxRequest(const PlayFabClientLoginWithXboxRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithXboxRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue LoginWithXboxRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientLoginWithXboxRequest>(*this);
}

MatchmakeRequest::MatchmakeRequest() :
    PlayFabClientMatchmakeRequest{}
{
}

MatchmakeRequest::MatchmakeRequest(const MatchmakeRequest& src) :
    PlayFabClientMatchmakeRequest{ src },
    m_buildVersion{ src.m_buildVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_gameMode{ src.m_gameMode },
    m_lobbyId{ src.m_lobbyId },
    m_region{ src.m_region },
    m_startNewIfNoneFound{ src.m_startNewIfNoneFound },
    m_statisticName{ src.m_statisticName },
    m_tagFilter{ src.m_tagFilter }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    region = m_region ? m_region.operator->() : nullptr;
    startNewIfNoneFound = m_startNewIfNoneFound ? m_startNewIfNoneFound.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
}

MatchmakeRequest::MatchmakeRequest(MatchmakeRequest&& src) :
    PlayFabClientMatchmakeRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_gameMode{ std::move(src.m_gameMode) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_region{ std::move(src.m_region) },
    m_startNewIfNoneFound{ std::move(src.m_startNewIfNoneFound) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_tagFilter{ std::move(src.m_tagFilter) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    region = m_region ? m_region.operator->() : nullptr;
    startNewIfNoneFound = m_startNewIfNoneFound ? m_startNewIfNoneFound.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    tagFilter = m_tagFilter ? m_tagFilter.operator->() : nullptr;
}

MatchmakeRequest::MatchmakeRequest(const PlayFabClientMatchmakeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "StartNewIfNoneFound", m_startNewIfNoneFound, startNewIfNoneFound);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "TagFilter", m_tagFilter, tagFilter);
}

JsonValue MatchmakeRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientMatchmakeRequest>(*this);
}

MatchmakeResult::MatchmakeResult() :
    PlayFabClientMatchmakeResult{}
{
}

MatchmakeResult::MatchmakeResult(const MatchmakeResult& src) :
    PlayFabClientMatchmakeResult{ src },
    m_expires{ src.m_expires },
    m_lobbyID{ src.m_lobbyID },
    m_pollWaitTimeMS{ src.m_pollWaitTimeMS },
    m_serverIPV4Address{ src.m_serverIPV4Address },
    m_serverIPV6Address{ src.m_serverIPV6Address },
    m_serverPort{ src.m_serverPort },
    m_serverPublicDNSName{ src.m_serverPublicDNSName },
    m_status{ src.m_status },
    m_ticket{ src.m_ticket }
{
    expires = m_expires.empty() ? nullptr : m_expires.data();
    lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
    pollWaitTimeMS = m_pollWaitTimeMS ? m_pollWaitTimeMS.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    status = m_status ? m_status.operator->() : nullptr;
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

MatchmakeResult::MatchmakeResult(MatchmakeResult&& src) :
    PlayFabClientMatchmakeResult{ src },
    m_expires{ std::move(src.m_expires) },
    m_lobbyID{ std::move(src.m_lobbyID) },
    m_pollWaitTimeMS{ std::move(src.m_pollWaitTimeMS) },
    m_serverIPV4Address{ std::move(src.m_serverIPV4Address) },
    m_serverIPV6Address{ std::move(src.m_serverIPV6Address) },
    m_serverPort{ std::move(src.m_serverPort) },
    m_serverPublicDNSName{ std::move(src.m_serverPublicDNSName) },
    m_status{ std::move(src.m_status) },
    m_ticket{ std::move(src.m_ticket) }
{
    expires = m_expires.empty() ? nullptr : m_expires.data();
    lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
    pollWaitTimeMS = m_pollWaitTimeMS ? m_pollWaitTimeMS.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    status = m_status ? m_status.operator->() : nullptr;
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

MatchmakeResult::MatchmakeResult(const PlayFabClientMatchmakeResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakeResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires);
    JsonUtils::ObjectGetMember(input, "LobbyID", m_lobbyID, lobbyID);
    JsonUtils::ObjectGetMember(input, "PollWaitTimeMS", m_pollWaitTimeMS, pollWaitTimeMS);
    JsonUtils::ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
    JsonUtils::ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
    JsonUtils::ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
    JsonUtils::ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "Ticket", m_ticket, ticket);
}

JsonValue MatchmakeResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientMatchmakeResult>(*this);
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult() :
    PlayFabClientModifyUserVirtualCurrencyResult{}
{
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
    PlayFabClientModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src) :
    PlayFabClientModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const PlayFabClientModifyUserVirtualCurrencyResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyUserVirtualCurrencyResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Balance", balance);
    JsonUtils::ObjectGetMember(input, "BalanceChange", balanceChange);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ModifyUserVirtualCurrencyResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientModifyUserVirtualCurrencyResult>(*this);
}

size_t ModifyUserVirtualCurrencyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientModifyUserVirtualCurrencyResult) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_virtualCurrency.size() + 1);
    return serializedSize;
}

void ModifyUserVirtualCurrencyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientModifyUserVirtualCurrencyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientModifyUserVirtualCurrencyResult);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_virtualCurrency.data(), m_virtualCurrency.size() + 1);
    serializedStruct->virtualCurrency = stringBuffer;
    stringBuffer += m_virtualCurrency.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

OpenTradeRequest::OpenTradeRequest() :
    PlayFabClientOpenTradeRequest{}
{
}

OpenTradeRequest::OpenTradeRequest(const OpenTradeRequest& src) :
    PlayFabClientOpenTradeRequest{ src },
    m_allowedPlayerIds{ src.m_allowedPlayerIds },
    m_offeredInventoryInstanceIds{ src.m_offeredInventoryInstanceIds },
    m_requestedCatalogItemIds{ src.m_requestedCatalogItemIds }
{
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
}

OpenTradeRequest::OpenTradeRequest(OpenTradeRequest&& src) :
    PlayFabClientOpenTradeRequest{ src },
    m_allowedPlayerIds{ std::move(src.m_allowedPlayerIds) },
    m_offeredInventoryInstanceIds{ std::move(src.m_offeredInventoryInstanceIds) },
    m_requestedCatalogItemIds{ std::move(src.m_requestedCatalogItemIds) }
{
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
}

OpenTradeRequest::OpenTradeRequest(const PlayFabClientOpenTradeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenTradeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AllowedPlayerIds", m_allowedPlayerIds, allowedPlayerIds, allowedPlayerIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferedInventoryInstanceIds", m_offeredInventoryInstanceIds, offeredInventoryInstanceIds, offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "RequestedCatalogItemIds", m_requestedCatalogItemIds, requestedCatalogItemIds, requestedCatalogItemIdsCount);
}

JsonValue OpenTradeRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientOpenTradeRequest>(*this);
}

OpenTradeResponse::OpenTradeResponse() :
    PlayFabClientOpenTradeResponse{}
{
}

OpenTradeResponse::OpenTradeResponse(const OpenTradeResponse& src) :
    PlayFabClientOpenTradeResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

OpenTradeResponse::OpenTradeResponse(OpenTradeResponse&& src) :
    PlayFabClientOpenTradeResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

OpenTradeResponse::OpenTradeResponse(const PlayFabClientOpenTradeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenTradeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue OpenTradeResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientOpenTradeResponse>(*this);
}

PayForPurchaseRequest::PayForPurchaseRequest() :
    PlayFabClientPayForPurchaseRequest{}
{
}

PayForPurchaseRequest::PayForPurchaseRequest(const PayForPurchaseRequest& src) :
    PlayFabClientPayForPurchaseRequest{ src },
    m_currency{ src.m_currency },
    m_customTags{ src.m_customTags },
    m_orderId{ src.m_orderId },
    m_providerName{ src.m_providerName },
    m_providerTransactionId{ src.m_providerTransactionId }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
    providerTransactionId = m_providerTransactionId.empty() ? nullptr : m_providerTransactionId.data();
}

PayForPurchaseRequest::PayForPurchaseRequest(PayForPurchaseRequest&& src) :
    PlayFabClientPayForPurchaseRequest{ src },
    m_currency{ std::move(src.m_currency) },
    m_customTags{ std::move(src.m_customTags) },
    m_orderId{ std::move(src.m_orderId) },
    m_providerName{ std::move(src.m_providerName) },
    m_providerTransactionId{ std::move(src.m_providerTransactionId) }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
    providerTransactionId = m_providerTransactionId.empty() ? nullptr : m_providerTransactionId.data();
}

PayForPurchaseRequest::PayForPurchaseRequest(const PlayFabClientPayForPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PayForPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "ProviderName", m_providerName, providerName);
    JsonUtils::ObjectGetMember(input, "ProviderTransactionId", m_providerTransactionId, providerTransactionId);
}

JsonValue PayForPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPayForPurchaseRequest>(*this);
}

PayForPurchaseResult::PayForPurchaseResult() :
    PlayFabClientPayForPurchaseResult{}
{
}

PayForPurchaseResult::PayForPurchaseResult(const PayForPurchaseResult& src) :
    PlayFabClientPayForPurchaseResult{ src },
    m_orderId{ src.m_orderId },
    m_providerData{ src.m_providerData },
    m_providerToken{ src.m_providerToken },
    m_purchaseConfirmationPageURL{ src.m_purchaseConfirmationPageURL },
    m_purchaseCurrency{ src.m_purchaseCurrency },
    m_status{ src.m_status },
    m_vCAmount{ src.m_vCAmount },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerData = m_providerData.empty() ? nullptr : m_providerData.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
    purchaseConfirmationPageURL = m_purchaseConfirmationPageURL.empty() ? nullptr : m_purchaseConfirmationPageURL.data();
    purchaseCurrency = m_purchaseCurrency.empty() ? nullptr : m_purchaseCurrency.data();
    status = m_status ? m_status.operator->() : nullptr;
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

PayForPurchaseResult::PayForPurchaseResult(PayForPurchaseResult&& src) :
    PlayFabClientPayForPurchaseResult{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_providerData{ std::move(src.m_providerData) },
    m_providerToken{ std::move(src.m_providerToken) },
    m_purchaseConfirmationPageURL{ std::move(src.m_purchaseConfirmationPageURL) },
    m_purchaseCurrency{ std::move(src.m_purchaseCurrency) },
    m_status{ std::move(src.m_status) },
    m_vCAmount{ std::move(src.m_vCAmount) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    providerData = m_providerData.empty() ? nullptr : m_providerData.data();
    providerToken = m_providerToken.empty() ? nullptr : m_providerToken.data();
    purchaseConfirmationPageURL = m_purchaseConfirmationPageURL.empty() ? nullptr : m_purchaseConfirmationPageURL.data();
    purchaseCurrency = m_purchaseCurrency.empty() ? nullptr : m_purchaseCurrency.data();
    status = m_status ? m_status.operator->() : nullptr;
    vCAmount = m_vCAmount.Empty() ? nullptr : m_vCAmount.Data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

PayForPurchaseResult::PayForPurchaseResult(const PlayFabClientPayForPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PayForPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreditApplied", creditApplied);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "ProviderData", m_providerData, providerData);
    JsonUtils::ObjectGetMember(input, "ProviderToken", m_providerToken, providerToken);
    JsonUtils::ObjectGetMember(input, "PurchaseConfirmationPageURL", m_purchaseConfirmationPageURL, purchaseConfirmationPageURL);
    JsonUtils::ObjectGetMember(input, "PurchaseCurrency", m_purchaseCurrency, purchaseCurrency);
    JsonUtils::ObjectGetMember(input, "PurchasePrice", purchasePrice);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "VCAmount", m_vCAmount, vCAmount, vCAmountCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
}

JsonValue PayForPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPayForPurchaseResult>(*this);
}

PaymentOption::PaymentOption() :
    PlayFabClientPaymentOption{}
{
}

PaymentOption::PaymentOption(const PaymentOption& src) :
    PlayFabClientPaymentOption{ src },
    m_currency{ src.m_currency },
    m_providerName{ src.m_providerName }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
}

PaymentOption::PaymentOption(PaymentOption&& src) :
    PlayFabClientPaymentOption{ src },
    m_currency{ std::move(src.m_currency) },
    m_providerName{ std::move(src.m_providerName) }
{
    currency = m_currency.empty() ? nullptr : m_currency.data();
    providerName = m_providerName.empty() ? nullptr : m_providerName.data();
}

PaymentOption::PaymentOption(const PlayFabClientPaymentOption& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PaymentOption::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Currency", m_currency, currency);
    JsonUtils::ObjectGetMember(input, "Price", price);
    JsonUtils::ObjectGetMember(input, "ProviderName", m_providerName, providerName);
    JsonUtils::ObjectGetMember(input, "StoreCredit", storeCredit);
}

JsonValue PaymentOption::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPaymentOption>(*this);
}

size_t PaymentOption::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientPaymentOption) };
    serializedSize += (m_currency.size() + 1);
    serializedSize += (m_providerName.size() + 1);
    return serializedSize;
}

void PaymentOption::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientPaymentOption{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientPaymentOption);
    memcpy(stringBuffer, m_currency.data(), m_currency.size() + 1);
    serializedStruct->currency = stringBuffer;
    stringBuffer += m_currency.size() + 1;
    memcpy(stringBuffer, m_providerName.data(), m_providerName.size() + 1);
    serializedStruct->providerName = stringBuffer;
    stringBuffer += m_providerName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PurchaseItemRequest::PurchaseItemRequest() :
    PlayFabClientPurchaseItemRequest{}
{
}

PurchaseItemRequest::PurchaseItemRequest(const PurchaseItemRequest& src) :
    PlayFabClientPurchaseItemRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemId{ src.m_itemId },
    m_storeId{ src.m_storeId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

PurchaseItemRequest::PurchaseItemRequest(PurchaseItemRequest&& src) :
    PlayFabClientPurchaseItemRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemId{ std::move(src.m_itemId) },
    m_storeId{ std::move(src.m_storeId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

PurchaseItemRequest::PurchaseItemRequest(const PlayFabClientPurchaseItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PurchaseItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "Price", price);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue PurchaseItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPurchaseItemRequest>(*this);
}

PurchaseItemResult::PurchaseItemResult() :
    PlayFabClientPurchaseItemResult{}
{
}

PurchaseItemResult::PurchaseItemResult(const PurchaseItemResult& src) :
    PlayFabClientPurchaseItemResult{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

PurchaseItemResult::PurchaseItemResult(PurchaseItemResult&& src) :
    PlayFabClientPurchaseItemResult{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

PurchaseItemResult::PurchaseItemResult(const PlayFabClientPurchaseItemResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PurchaseItemResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue PurchaseItemResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientPurchaseItemResult>(*this);
}

PurchaseReceiptFulfillment::PurchaseReceiptFulfillment() :
    PlayFabClientPurchaseReceiptFulfillment{}
{
}

PurchaseReceiptFulfillment::PurchaseReceiptFulfillment(const PurchaseReceiptFulfillment& src) :
    PlayFabClientPurchaseReceiptFulfillment{ src },
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
    PlayFabClientPurchaseReceiptFulfillment{ src },
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

PurchaseReceiptFulfillment::PurchaseReceiptFulfillment(const PlayFabClientPurchaseReceiptFulfillment& src)
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
    return JsonUtils::ToJson<PlayFabClientPurchaseReceiptFulfillment>(*this);
}

RedeemCouponRequest::RedeemCouponRequest() :
    PlayFabClientRedeemCouponRequest{}
{
}

RedeemCouponRequest::RedeemCouponRequest(const RedeemCouponRequest& src) :
    PlayFabClientRedeemCouponRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_couponCode{ src.m_couponCode },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RedeemCouponRequest::RedeemCouponRequest(RedeemCouponRequest&& src) :
    PlayFabClientRedeemCouponRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_couponCode{ std::move(src.m_couponCode) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RedeemCouponRequest::RedeemCouponRequest(const PlayFabClientRedeemCouponRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RedeemCouponRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CouponCode", m_couponCode, couponCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue RedeemCouponRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRedeemCouponRequest>(*this);
}

RedeemCouponResult::RedeemCouponResult() :
    PlayFabClientRedeemCouponResult{}
{
}

RedeemCouponResult::RedeemCouponResult(const RedeemCouponResult& src) :
    PlayFabClientRedeemCouponResult{ src },
    m_grantedItems{ src.m_grantedItems }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
}

RedeemCouponResult::RedeemCouponResult(RedeemCouponResult&& src) :
    PlayFabClientRedeemCouponResult{ src },
    m_grantedItems{ std::move(src.m_grantedItems) }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
}

RedeemCouponResult::RedeemCouponResult(const PlayFabClientRedeemCouponResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RedeemCouponResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
}

JsonValue RedeemCouponResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRedeemCouponResult>(*this);
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest() :
    PlayFabClientRefreshPSNAuthTokenRequest{}
{
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest(const RefreshPSNAuthTokenRequest& src) :
    PlayFabClientRefreshPSNAuthTokenRequest{ src },
    m_authCode{ src.m_authCode },
    m_issuerId{ src.m_issuerId },
    m_redirectUri{ src.m_redirectUri }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest(RefreshPSNAuthTokenRequest&& src) :
    PlayFabClientRefreshPSNAuthTokenRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_redirectUri{ std::move(src.m_redirectUri) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

RefreshPSNAuthTokenRequest::RefreshPSNAuthTokenRequest(const PlayFabClientRefreshPSNAuthTokenRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientRefreshPSNAuthTokenRequest>(*this);
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest() :
    PlayFabClientRegisterForIOSPushNotificationRequest{}
{
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest(const RegisterForIOSPushNotificationRequest& src) :
    PlayFabClientRegisterForIOSPushNotificationRequest{ src },
    m_confirmationMessage{ src.m_confirmationMessage },
    m_deviceToken{ src.m_deviceToken },
    m_sendPushNotificationConfirmation{ src.m_sendPushNotificationConfirmation }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest(RegisterForIOSPushNotificationRequest&& src) :
    PlayFabClientRegisterForIOSPushNotificationRequest{ src },
    m_confirmationMessage{ std::move(src.m_confirmationMessage) },
    m_deviceToken{ std::move(src.m_deviceToken) },
    m_sendPushNotificationConfirmation{ std::move(src.m_sendPushNotificationConfirmation) }
{
    confirmationMessage = m_confirmationMessage.empty() ? nullptr : m_confirmationMessage.data();
    deviceToken = m_deviceToken.empty() ? nullptr : m_deviceToken.data();
    sendPushNotificationConfirmation = m_sendPushNotificationConfirmation ? m_sendPushNotificationConfirmation.operator->() : nullptr;
}

RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest(const PlayFabClientRegisterForIOSPushNotificationRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientRegisterForIOSPushNotificationRequest>(*this);
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest() :
    PlayFabClientRegisterPlayFabUserRequest{}
{
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest(const RegisterPlayFabUserRequest& src) :
    PlayFabClientRegisterPlayFabUserRequest{ src },
    m_customTags{ src.m_customTags },
    m_displayName{ src.m_displayName },
    m_email{ src.m_email },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_password{ src.m_password },
    m_playerSecret{ src.m_playerSecret },
    m_requireBothUsernameAndEmail{ src.m_requireBothUsernameAndEmail },
    m_titleId{ src.m_titleId },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    email = m_email.empty() ? nullptr : m_email.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    requireBothUsernameAndEmail = m_requireBothUsernameAndEmail ? m_requireBothUsernameAndEmail.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest(RegisterPlayFabUserRequest&& src) :
    PlayFabClientRegisterPlayFabUserRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_displayName{ std::move(src.m_displayName) },
    m_email{ std::move(src.m_email) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_password{ std::move(src.m_password) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_requireBothUsernameAndEmail{ std::move(src.m_requireBothUsernameAndEmail) },
    m_titleId{ std::move(src.m_titleId) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    email = m_email.empty() ? nullptr : m_email.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    requireBothUsernameAndEmail = m_requireBothUsernameAndEmail ? m_requireBothUsernameAndEmail.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest(const PlayFabClientRegisterPlayFabUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterPlayFabUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "RequireBothUsernameAndEmail", m_requireBothUsernameAndEmail, requireBothUsernameAndEmail);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue RegisterPlayFabUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRegisterPlayFabUserRequest>(*this);
}

RegisterPlayFabUserResult::RegisterPlayFabUserResult()
{
}

RegisterPlayFabUserResult::RegisterPlayFabUserResult(const RegisterPlayFabUserResult& src) :
    entityToken{ src.entityToken },
    playFabId{ src.playFabId },
    sessionTicket{ src.sessionTicket },
    settingsForUser{ src.settingsForUser },
    username{ src.username }
{
}

RegisterPlayFabUserResult::RegisterPlayFabUserResult(RegisterPlayFabUserResult&& src) :
    entityToken{ std::move(src.entityToken) },
    playFabId{ std::move(src.playFabId) },
    sessionTicket{ std::move(src.sessionTicket) },
    settingsForUser{ std::move(src.settingsForUser) },
    username{ std::move(src.username) }
{
}

void RegisterPlayFabUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EntityToken", entityToken);
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    JsonUtils::ObjectGetMember(input, "SessionTicket", sessionTicket);
    JsonUtils::ObjectGetMember(input, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectGetMember(input, "Username", username);
}

JsonValue RegisterPlayFabUserResult::ToJson() const
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EntityToken", entityToken);
    JsonUtils::ObjectAddMember(output, "PlayFabId", playFabId);
    JsonUtils::ObjectAddMember(output, "SessionTicket", sessionTicket);
    JsonUtils::ObjectAddMember(output, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectAddMember(output, "Username", username);
    return output;
}

RemoveContactEmailRequest::RemoveContactEmailRequest() :
    PlayFabClientRemoveContactEmailRequest{}
{
}

RemoveContactEmailRequest::RemoveContactEmailRequest(const RemoveContactEmailRequest& src) :
    PlayFabClientRemoveContactEmailRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RemoveContactEmailRequest::RemoveContactEmailRequest(RemoveContactEmailRequest&& src) :
    PlayFabClientRemoveContactEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RemoveContactEmailRequest::RemoveContactEmailRequest(const PlayFabClientRemoveContactEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveContactEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue RemoveContactEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRemoveContactEmailRequest>(*this);
}

RemoveFriendRequest::RemoveFriendRequest() :
    PlayFabClientRemoveFriendRequest{}
{
}

RemoveFriendRequest::RemoveFriendRequest(const RemoveFriendRequest& src) :
    PlayFabClientRemoveFriendRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
}

RemoveFriendRequest::RemoveFriendRequest(RemoveFriendRequest&& src) :
    PlayFabClientRemoveFriendRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
}

RemoveFriendRequest::RemoveFriendRequest(const PlayFabClientRemoveFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
}

JsonValue RemoveFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRemoveFriendRequest>(*this);
}

size_t RemoveFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientRemoveFriendRequest) };
    serializedSize += (m_friendPlayFabId.size() + 1);
    return serializedSize;
}

void RemoveFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientRemoveFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientRemoveFriendRequest);
    memcpy(stringBuffer, m_friendPlayFabId.data(), m_friendPlayFabId.size() + 1);
    serializedStruct->friendPlayFabId = stringBuffer;
    stringBuffer += m_friendPlayFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RemoveGenericIDRequest::RemoveGenericIDRequest() :
    PlayFabClientRemoveGenericIDRequest{}
{
}

RemoveGenericIDRequest::RemoveGenericIDRequest(const RemoveGenericIDRequest& src) :
    PlayFabClientRemoveGenericIDRequest{ src },
    m_genericId{ src.m_genericId }
{
    genericId = (PlayFabClientGenericServiceId const*)&m_genericId;
}

RemoveGenericIDRequest::RemoveGenericIDRequest(RemoveGenericIDRequest&& src) :
    PlayFabClientRemoveGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) }
{
    genericId = (PlayFabClientGenericServiceId const*)&m_genericId;
}

RemoveGenericIDRequest::RemoveGenericIDRequest(const PlayFabClientRemoveGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
}

JsonValue RemoveGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRemoveGenericIDRequest>(*this);
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest() :
    PlayFabClientRemoveSharedGroupMembersRequest{}
{
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src) :
    PlayFabClientRemoveSharedGroupMembersRequest{ src },
    m_playFabIds{ src.m_playFabIds },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest&& src) :
    PlayFabClientRemoveSharedGroupMembersRequest{ src },
    m_playFabIds{ std::move(src.m_playFabIds) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(const PlayFabClientRemoveSharedGroupMembersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveSharedGroupMembersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabIds", m_playFabIds, playFabIds, playFabIdsCount);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue RemoveSharedGroupMembersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRemoveSharedGroupMembersRequest>(*this);
}

ReportAdActivityRequest::ReportAdActivityRequest() :
    PlayFabClientReportAdActivityRequest{}
{
}

ReportAdActivityRequest::ReportAdActivityRequest(const ReportAdActivityRequest& src) :
    PlayFabClientReportAdActivityRequest{ src },
    m_customTags{ src.m_customTags },
    m_placementId{ src.m_placementId },
    m_rewardId{ src.m_rewardId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

ReportAdActivityRequest::ReportAdActivityRequest(ReportAdActivityRequest&& src) :
    PlayFabClientReportAdActivityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_placementId{ std::move(src.m_placementId) },
    m_rewardId{ std::move(src.m_rewardId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

ReportAdActivityRequest::ReportAdActivityRequest(const PlayFabClientReportAdActivityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportAdActivityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Activity", activity);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
}

JsonValue ReportAdActivityRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientReportAdActivityRequest>(*this);
}

ReportPlayerClientRequest::ReportPlayerClientRequest() :
    PlayFabClientReportPlayerClientRequest{}
{
}

ReportPlayerClientRequest::ReportPlayerClientRequest(const ReportPlayerClientRequest& src) :
    PlayFabClientReportPlayerClientRequest{ src },
    m_comment{ src.m_comment },
    m_customTags{ src.m_customTags },
    m_reporteeId{ src.m_reporteeId }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
}

ReportPlayerClientRequest::ReportPlayerClientRequest(ReportPlayerClientRequest&& src) :
    PlayFabClientReportPlayerClientRequest{ src },
    m_comment{ std::move(src.m_comment) },
    m_customTags{ std::move(src.m_customTags) },
    m_reporteeId{ std::move(src.m_reporteeId) }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
}

ReportPlayerClientRequest::ReportPlayerClientRequest(const PlayFabClientReportPlayerClientRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerClientRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ReporteeId", m_reporteeId, reporteeId);
}

JsonValue ReportPlayerClientRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientReportPlayerClientRequest>(*this);
}

ReportPlayerClientResult::ReportPlayerClientResult() :
    PlayFabClientReportPlayerClientResult{}
{
}


ReportPlayerClientResult::ReportPlayerClientResult(const PlayFabClientReportPlayerClientResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerClientResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SubmissionsRemaining", submissionsRemaining);
}

JsonValue ReportPlayerClientResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientReportPlayerClientResult>(*this);
}

size_t ReportPlayerClientResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientReportPlayerClientResult) };
    return serializedSize;
}

void ReportPlayerClientResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientReportPlayerClientResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientReportPlayerClientResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest() :
    PlayFabClientRestoreIOSPurchasesRequest{}
{
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest(const RestoreIOSPurchasesRequest& src) :
    PlayFabClientRestoreIOSPurchasesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_receiptData{ src.m_receiptData }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest(RestoreIOSPurchasesRequest&& src) :
    PlayFabClientRestoreIOSPurchasesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_receiptData{ std::move(src.m_receiptData) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    receiptData = m_receiptData.empty() ? nullptr : m_receiptData.data();
}

RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest(const PlayFabClientRestoreIOSPurchasesRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientRestoreIOSPurchasesRequest>(*this);
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult() :
    PlayFabClientRestoreIOSPurchasesResult{}
{
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult(const RestoreIOSPurchasesResult& src) :
    PlayFabClientRestoreIOSPurchasesResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult(RestoreIOSPurchasesResult&& src) :
    PlayFabClientRestoreIOSPurchasesResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

RestoreIOSPurchasesResult::RestoreIOSPurchasesResult(const PlayFabClientRestoreIOSPurchasesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RestoreIOSPurchasesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue RestoreIOSPurchasesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRestoreIOSPurchasesResult>(*this);
}

RewardAdActivityRequest::RewardAdActivityRequest() :
    PlayFabClientRewardAdActivityRequest{}
{
}

RewardAdActivityRequest::RewardAdActivityRequest(const RewardAdActivityRequest& src) :
    PlayFabClientRewardAdActivityRequest{ src },
    m_customTags{ src.m_customTags },
    m_placementId{ src.m_placementId },
    m_rewardId{ src.m_rewardId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

RewardAdActivityRequest::RewardAdActivityRequest(RewardAdActivityRequest&& src) :
    PlayFabClientRewardAdActivityRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_placementId{ std::move(src.m_placementId) },
    m_rewardId{ std::move(src.m_rewardId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    rewardId = m_rewardId.empty() ? nullptr : m_rewardId.data();
}

RewardAdActivityRequest::RewardAdActivityRequest(const PlayFabClientRewardAdActivityRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RewardAdActivityRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "RewardId", m_rewardId, rewardId);
}

JsonValue RewardAdActivityRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRewardAdActivityRequest>(*this);
}

RewardAdActivityResult::RewardAdActivityResult() :
    PlayFabClientRewardAdActivityResult{}
{
}

RewardAdActivityResult::RewardAdActivityResult(const RewardAdActivityResult& src) :
    PlayFabClientRewardAdActivityResult{ src },
    m_adActivityEventId{ src.m_adActivityEventId },
    m_debugResults{ src.m_debugResults },
    m_placementId{ src.m_placementId },
    m_placementName{ src.m_placementName },
    m_placementViewsRemaining{ src.m_placementViewsRemaining },
    m_placementViewsResetMinutes{ src.m_placementViewsResetMinutes },
    m_rewardResults{ src.m_rewardResults }
{
    adActivityEventId = m_adActivityEventId.empty() ? nullptr : m_adActivityEventId.data();
    debugResults = m_debugResults.Empty() ? nullptr : m_debugResults.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardResults = m_rewardResults ? m_rewardResults.operator->() : nullptr;
}

RewardAdActivityResult::RewardAdActivityResult(RewardAdActivityResult&& src) :
    PlayFabClientRewardAdActivityResult{ src },
    m_adActivityEventId{ std::move(src.m_adActivityEventId) },
    m_debugResults{ std::move(src.m_debugResults) },
    m_placementId{ std::move(src.m_placementId) },
    m_placementName{ std::move(src.m_placementName) },
    m_placementViewsRemaining{ std::move(src.m_placementViewsRemaining) },
    m_placementViewsResetMinutes{ std::move(src.m_placementViewsResetMinutes) },
    m_rewardResults{ std::move(src.m_rewardResults) }
{
    adActivityEventId = m_adActivityEventId.empty() ? nullptr : m_adActivityEventId.data();
    debugResults = m_debugResults.Empty() ? nullptr : m_debugResults.Data();
    placementId = m_placementId.empty() ? nullptr : m_placementId.data();
    placementName = m_placementName.empty() ? nullptr : m_placementName.data();
    placementViewsRemaining = m_placementViewsRemaining ? m_placementViewsRemaining.operator->() : nullptr;
    placementViewsResetMinutes = m_placementViewsResetMinutes ? m_placementViewsResetMinutes.operator->() : nullptr;
    rewardResults = m_rewardResults ? m_rewardResults.operator->() : nullptr;
}

RewardAdActivityResult::RewardAdActivityResult(const PlayFabClientRewardAdActivityResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RewardAdActivityResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdActivityEventId", m_adActivityEventId, adActivityEventId);
    JsonUtils::ObjectGetMember(input, "DebugResults", m_debugResults, debugResults, debugResultsCount);
    JsonUtils::ObjectGetMember(input, "PlacementId", m_placementId, placementId);
    JsonUtils::ObjectGetMember(input, "PlacementName", m_placementName, placementName);
    JsonUtils::ObjectGetMember(input, "PlacementViewsRemaining", m_placementViewsRemaining, placementViewsRemaining);
    JsonUtils::ObjectGetMember(input, "PlacementViewsResetMinutes", m_placementViewsResetMinutes, placementViewsResetMinutes);
    JsonUtils::ObjectGetMember(input, "RewardResults", m_rewardResults, rewardResults);
}

JsonValue RewardAdActivityResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientRewardAdActivityResult>(*this);
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest() :
    PlayFabClientSendAccountRecoveryEmailRequest{}
{
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src) :
    PlayFabClientSendAccountRecoveryEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_titleId{ src.m_titleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest(SendAccountRecoveryEmailRequest&& src) :
    PlayFabClientSendAccountRecoveryEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_titleId{ std::move(src.m_titleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

SendAccountRecoveryEmailRequest::SendAccountRecoveryEmailRequest(const PlayFabClientSendAccountRecoveryEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendAccountRecoveryEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue SendAccountRecoveryEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientSendAccountRecoveryEmailRequest>(*this);
}

SetFriendTagsRequest::SetFriendTagsRequest() :
    PlayFabClientSetFriendTagsRequest{}
{
}

SetFriendTagsRequest::SetFriendTagsRequest(const SetFriendTagsRequest& src) :
    PlayFabClientSetFriendTagsRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_tags{ src.m_tags }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetFriendTagsRequest::SetFriendTagsRequest(SetFriendTagsRequest&& src) :
    PlayFabClientSetFriendTagsRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_tags{ std::move(src.m_tags) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetFriendTagsRequest::SetFriendTagsRequest(const PlayFabClientSetFriendTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetFriendTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue SetFriendTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientSetFriendTagsRequest>(*this);
}

SetPlayerSecretRequest::SetPlayerSecretRequest() :
    PlayFabClientSetPlayerSecretRequest{}
{
}

SetPlayerSecretRequest::SetPlayerSecretRequest(const SetPlayerSecretRequest& src) :
    PlayFabClientSetPlayerSecretRequest{ src },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_playerSecret{ src.m_playerSecret }
{
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
}

SetPlayerSecretRequest::SetPlayerSecretRequest(SetPlayerSecretRequest&& src) :
    PlayFabClientSetPlayerSecretRequest{ src },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_playerSecret{ std::move(src.m_playerSecret) }
{
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
}

SetPlayerSecretRequest::SetPlayerSecretRequest(const PlayFabClientSetPlayerSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetPlayerSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
}

JsonValue SetPlayerSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientSetPlayerSecretRequest>(*this);
}

size_t SetPlayerSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientSetPlayerSecretRequest) };
    serializedSize += (m_encryptedRequest.size() + 1);
    serializedSize += (m_playerSecret.size() + 1);
    return serializedSize;
}

void SetPlayerSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientSetPlayerSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientSetPlayerSecretRequest);
    memcpy(stringBuffer, m_encryptedRequest.data(), m_encryptedRequest.size() + 1);
    serializedStruct->encryptedRequest = stringBuffer;
    stringBuffer += m_encryptedRequest.size() + 1;
    memcpy(stringBuffer, m_playerSecret.data(), m_playerSecret.size() + 1);
    serializedStruct->playerSecret = stringBuffer;
    stringBuffer += m_playerSecret.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

StartGameRequest::StartGameRequest() :
    PlayFabClientStartGameRequest{}
{
}

StartGameRequest::StartGameRequest(const StartGameRequest& src) :
    PlayFabClientStartGameRequest{ src },
    m_buildVersion{ src.m_buildVersion },
    m_characterId{ src.m_characterId },
    m_customCommandLineData{ src.m_customCommandLineData },
    m_customTags{ src.m_customTags },
    m_gameMode{ src.m_gameMode },
    m_statisticName{ src.m_statisticName }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customCommandLineData = m_customCommandLineData.empty() ? nullptr : m_customCommandLineData.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StartGameRequest::StartGameRequest(StartGameRequest&& src) :
    PlayFabClientStartGameRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customCommandLineData{ std::move(src.m_customCommandLineData) },
    m_customTags{ std::move(src.m_customTags) },
    m_gameMode{ std::move(src.m_gameMode) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customCommandLineData = m_customCommandLineData.empty() ? nullptr : m_customCommandLineData.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StartGameRequest::StartGameRequest(const PlayFabClientStartGameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartGameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomCommandLineData", m_customCommandLineData, customCommandLineData);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "Region", region);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue StartGameRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStartGameRequest>(*this);
}

StartGameResult::StartGameResult() :
    PlayFabClientStartGameResult{}
{
}

StartGameResult::StartGameResult(const StartGameResult& src) :
    PlayFabClientStartGameResult{ src },
    m_expires{ src.m_expires },
    m_lobbyID{ src.m_lobbyID },
    m_password{ src.m_password },
    m_serverIPV4Address{ src.m_serverIPV4Address },
    m_serverIPV6Address{ src.m_serverIPV6Address },
    m_serverPort{ src.m_serverPort },
    m_serverPublicDNSName{ src.m_serverPublicDNSName },
    m_ticket{ src.m_ticket }
{
    expires = m_expires.empty() ? nullptr : m_expires.data();
    lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
    password = m_password.empty() ? nullptr : m_password.data();
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

StartGameResult::StartGameResult(StartGameResult&& src) :
    PlayFabClientStartGameResult{ src },
    m_expires{ std::move(src.m_expires) },
    m_lobbyID{ std::move(src.m_lobbyID) },
    m_password{ std::move(src.m_password) },
    m_serverIPV4Address{ std::move(src.m_serverIPV4Address) },
    m_serverIPV6Address{ std::move(src.m_serverIPV6Address) },
    m_serverPort{ std::move(src.m_serverPort) },
    m_serverPublicDNSName{ std::move(src.m_serverPublicDNSName) },
    m_ticket{ std::move(src.m_ticket) }
{
    expires = m_expires.empty() ? nullptr : m_expires.data();
    lobbyID = m_lobbyID.empty() ? nullptr : m_lobbyID.data();
    password = m_password.empty() ? nullptr : m_password.data();
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort ? m_serverPort.operator->() : nullptr;
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

StartGameResult::StartGameResult(const PlayFabClientStartGameResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartGameResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires);
    JsonUtils::ObjectGetMember(input, "LobbyID", m_lobbyID, lobbyID);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
    JsonUtils::ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
    JsonUtils::ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
    JsonUtils::ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
    JsonUtils::ObjectGetMember(input, "Ticket", m_ticket, ticket);
}

JsonValue StartGameResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStartGameResult>(*this);
}

StartPurchaseRequest::StartPurchaseRequest() :
    PlayFabClientStartPurchaseRequest{}
{
}

StartPurchaseRequest::StartPurchaseRequest(const StartPurchaseRequest& src) :
    PlayFabClientStartPurchaseRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_items{ src.m_items },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    items = m_items.Empty() ? nullptr : m_items.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

StartPurchaseRequest::StartPurchaseRequest(StartPurchaseRequest&& src) :
    PlayFabClientStartPurchaseRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_items{ std::move(src.m_items) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    items = m_items.Empty() ? nullptr : m_items.Data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

StartPurchaseRequest::StartPurchaseRequest(const PlayFabClientStartPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue StartPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStartPurchaseRequest>(*this);
}

StartPurchaseResult::StartPurchaseResult() :
    PlayFabClientStartPurchaseResult{}
{
}

StartPurchaseResult::StartPurchaseResult(const StartPurchaseResult& src) :
    PlayFabClientStartPurchaseResult{ src },
    m_contents{ src.m_contents },
    m_orderId{ src.m_orderId },
    m_paymentOptions{ src.m_paymentOptions },
    m_virtualCurrencyBalances{ src.m_virtualCurrencyBalances }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentOptions = m_paymentOptions.Empty() ? nullptr : m_paymentOptions.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

StartPurchaseResult::StartPurchaseResult(StartPurchaseResult&& src) :
    PlayFabClientStartPurchaseResult{ src },
    m_contents{ std::move(src.m_contents) },
    m_orderId{ std::move(src.m_orderId) },
    m_paymentOptions{ std::move(src.m_paymentOptions) },
    m_virtualCurrencyBalances{ std::move(src.m_virtualCurrencyBalances) }
{
    contents = m_contents.Empty() ? nullptr : m_contents.Data();
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    paymentOptions = m_paymentOptions.Empty() ? nullptr : m_paymentOptions.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

StartPurchaseResult::StartPurchaseResult(const PlayFabClientStartPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Contents", m_contents, contents, contentsCount);
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PaymentOptions", m_paymentOptions, paymentOptions, paymentOptionsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyBalances", m_virtualCurrencyBalances, virtualCurrencyBalances, virtualCurrencyBalancesCount);
}

JsonValue StartPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStartPurchaseResult>(*this);
}

StatisticUpdate::StatisticUpdate() :
    PlayFabClientStatisticUpdate{}
{
}

StatisticUpdate::StatisticUpdate(const StatisticUpdate& src) :
    PlayFabClientStatisticUpdate{ src },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticUpdate::StatisticUpdate(StatisticUpdate&& src) :
    PlayFabClientStatisticUpdate{ src },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticUpdate::StatisticUpdate(const PlayFabClientStatisticUpdate& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticUpdate::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Value", value);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue StatisticUpdate::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientStatisticUpdate>(*this);
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest() :
    PlayFabClientSubtractUserVirtualCurrencyRequest{}
{
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
    PlayFabClientSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(SubtractUserVirtualCurrencyRequest&& src) :
    PlayFabClientSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(const PlayFabClientSubtractUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SubtractUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue SubtractUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientSubtractUserVirtualCurrencyRequest>(*this);
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest() :
    PlayFabClientUnlinkAndroidDeviceIDRequest{}
{
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest(const UnlinkAndroidDeviceIDRequest& src) :
    PlayFabClientUnlinkAndroidDeviceIDRequest{ src },
    m_androidDeviceId{ src.m_androidDeviceId },
    m_customTags{ src.m_customTags }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest(UnlinkAndroidDeviceIDRequest&& src) :
    PlayFabClientUnlinkAndroidDeviceIDRequest{ src },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) },
    m_customTags{ std::move(src.m_customTags) }
{
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest(const PlayFabClientUnlinkAndroidDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkAndroidDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkAndroidDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkAndroidDeviceIDRequest>(*this);
}

UnlinkAppleRequest::UnlinkAppleRequest() :
    PlayFabClientUnlinkAppleRequest{}
{
}

UnlinkAppleRequest::UnlinkAppleRequest(const UnlinkAppleRequest& src) :
    PlayFabClientUnlinkAppleRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAppleRequest::UnlinkAppleRequest(UnlinkAppleRequest&& src) :
    PlayFabClientUnlinkAppleRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkAppleRequest::UnlinkAppleRequest(const PlayFabClientUnlinkAppleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkAppleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkAppleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkAppleRequest>(*this);
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest() :
    PlayFabClientUnlinkCustomIDRequest{}
{
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest(const UnlinkCustomIDRequest& src) :
    PlayFabClientUnlinkCustomIDRequest{ src },
    m_customId{ src.m_customId },
    m_customTags{ src.m_customTags }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest(UnlinkCustomIDRequest&& src) :
    PlayFabClientUnlinkCustomIDRequest{ src },
    m_customId{ std::move(src.m_customId) },
    m_customTags{ std::move(src.m_customTags) }
{
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkCustomIDRequest::UnlinkCustomIDRequest(const PlayFabClientUnlinkCustomIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkCustomIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkCustomIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkCustomIDRequest>(*this);
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest() :
    PlayFabClientUnlinkFacebookAccountRequest{}
{
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest(const UnlinkFacebookAccountRequest& src) :
    PlayFabClientUnlinkFacebookAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest(UnlinkFacebookAccountRequest&& src) :
    PlayFabClientUnlinkFacebookAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkFacebookAccountRequest::UnlinkFacebookAccountRequest(const PlayFabClientUnlinkFacebookAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkFacebookAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkFacebookAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkFacebookAccountRequest>(*this);
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest() :
    PlayFabClientUnlinkFacebookInstantGamesIdRequest{}
{
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest(const UnlinkFacebookInstantGamesIdRequest& src) :
    PlayFabClientUnlinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_facebookInstantGamesId{ src.m_facebookInstantGamesId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest(UnlinkFacebookInstantGamesIdRequest&& src) :
    PlayFabClientUnlinkFacebookInstantGamesIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_facebookInstantGamesId{ std::move(src.m_facebookInstantGamesId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
}

UnlinkFacebookInstantGamesIdRequest::UnlinkFacebookInstantGamesIdRequest(const PlayFabClientUnlinkFacebookInstantGamesIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkFacebookInstantGamesIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesId", m_facebookInstantGamesId, facebookInstantGamesId);
}

JsonValue UnlinkFacebookInstantGamesIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkFacebookInstantGamesIdRequest>(*this);
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest() :
    PlayFabClientUnlinkGameCenterAccountRequest{}
{
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest(const UnlinkGameCenterAccountRequest& src) :
    PlayFabClientUnlinkGameCenterAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest(UnlinkGameCenterAccountRequest&& src) :
    PlayFabClientUnlinkGameCenterAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGameCenterAccountRequest::UnlinkGameCenterAccountRequest(const PlayFabClientUnlinkGameCenterAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkGameCenterAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkGameCenterAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkGameCenterAccountRequest>(*this);
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest() :
    PlayFabClientUnlinkGoogleAccountRequest{}
{
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest(const UnlinkGoogleAccountRequest& src) :
    PlayFabClientUnlinkGoogleAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest(UnlinkGoogleAccountRequest&& src) :
    PlayFabClientUnlinkGoogleAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkGoogleAccountRequest::UnlinkGoogleAccountRequest(const PlayFabClientUnlinkGoogleAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkGoogleAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkGoogleAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkGoogleAccountRequest>(*this);
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest() :
    PlayFabClientUnlinkIOSDeviceIDRequest{}
{
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest(const UnlinkIOSDeviceIDRequest& src) :
    PlayFabClientUnlinkIOSDeviceIDRequest{ src },
    m_customTags{ src.m_customTags },
    m_deviceId{ src.m_deviceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest(UnlinkIOSDeviceIDRequest&& src) :
    PlayFabClientUnlinkIOSDeviceIDRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_deviceId{ std::move(src.m_deviceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
}

UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest(const PlayFabClientUnlinkIOSDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkIOSDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
}

JsonValue UnlinkIOSDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkIOSDeviceIDRequest>(*this);
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest() :
    PlayFabClientUnlinkKongregateAccountRequest{}
{
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest(const UnlinkKongregateAccountRequest& src) :
    PlayFabClientUnlinkKongregateAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest(UnlinkKongregateAccountRequest&& src) :
    PlayFabClientUnlinkKongregateAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkKongregateAccountRequest::UnlinkKongregateAccountRequest(const PlayFabClientUnlinkKongregateAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkKongregateAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkKongregateAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkKongregateAccountRequest>(*this);
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest() :
    PlayFabClientUnlinkNintendoServiceAccountRequest{}
{
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest(const UnlinkNintendoServiceAccountRequest& src) :
    PlayFabClientUnlinkNintendoServiceAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest(UnlinkNintendoServiceAccountRequest&& src) :
    PlayFabClientUnlinkNintendoServiceAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkNintendoServiceAccountRequest::UnlinkNintendoServiceAccountRequest(const PlayFabClientUnlinkNintendoServiceAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkNintendoServiceAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkNintendoServiceAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkNintendoServiceAccountRequest>(*this);
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest() :
    PlayFabClientUnlinkNintendoSwitchDeviceIdRequest{}
{
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest(const UnlinkNintendoSwitchDeviceIdRequest& src) :
    PlayFabClientUnlinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest(UnlinkNintendoSwitchDeviceIdRequest&& src) :
    PlayFabClientUnlinkNintendoSwitchDeviceIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
}

UnlinkNintendoSwitchDeviceIdRequest::UnlinkNintendoSwitchDeviceIdRequest(const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkNintendoSwitchDeviceIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
}

JsonValue UnlinkNintendoSwitchDeviceIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkNintendoSwitchDeviceIdRequest>(*this);
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest() :
    PlayFabClientUnlinkOpenIdConnectRequest{}
{
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest(const UnlinkOpenIdConnectRequest& src) :
    PlayFabClientUnlinkOpenIdConnectRequest{ src },
    m_connectionId{ src.m_connectionId },
    m_customTags{ src.m_customTags }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest(UnlinkOpenIdConnectRequest&& src) :
    PlayFabClientUnlinkOpenIdConnectRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_customTags{ std::move(src.m_customTags) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkOpenIdConnectRequest::UnlinkOpenIdConnectRequest(const PlayFabClientUnlinkOpenIdConnectRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkOpenIdConnectRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkOpenIdConnectRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkOpenIdConnectRequest>(*this);
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest() :
    PlayFabClientUnlinkPSNAccountRequest{}
{
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest(const UnlinkPSNAccountRequest& src) :
    PlayFabClientUnlinkPSNAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest(UnlinkPSNAccountRequest&& src) :
    PlayFabClientUnlinkPSNAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest(const PlayFabClientUnlinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkPSNAccountRequest>(*this);
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest() :
    PlayFabClientUnlinkSteamAccountRequest{}
{
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest(const UnlinkSteamAccountRequest& src) :
    PlayFabClientUnlinkSteamAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest(UnlinkSteamAccountRequest&& src) :
    PlayFabClientUnlinkSteamAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkSteamAccountRequest::UnlinkSteamAccountRequest(const PlayFabClientUnlinkSteamAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkSteamAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkSteamAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkSteamAccountRequest>(*this);
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest() :
    PlayFabClientUnlinkTwitchAccountRequest{}
{
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest(const UnlinkTwitchAccountRequest& src) :
    PlayFabClientUnlinkTwitchAccountRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_customTags{ src.m_customTags }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest(UnlinkTwitchAccountRequest&& src) :
    PlayFabClientUnlinkTwitchAccountRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_customTags{ std::move(src.m_customTags) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkTwitchAccountRequest::UnlinkTwitchAccountRequest(const PlayFabClientUnlinkTwitchAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkTwitchAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkTwitchAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkTwitchAccountRequest>(*this);
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest() :
    PlayFabClientUnlinkXboxAccountRequest{}
{
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest(const UnlinkXboxAccountRequest& src) :
    PlayFabClientUnlinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest(UnlinkXboxAccountRequest&& src) :
    PlayFabClientUnlinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest(const PlayFabClientUnlinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlinkXboxAccountRequest>(*this);
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest() :
    PlayFabClientUnlockContainerInstanceRequest{}
{
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest(const UnlockContainerInstanceRequest& src) :
    PlayFabClientUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemInstanceId{ src.m_containerItemInstanceId },
    m_customTags{ src.m_customTags },
    m_keyItemInstanceId{ src.m_keyItemInstanceId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest(UnlockContainerInstanceRequest&& src) :
    PlayFabClientUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemInstanceId{ std::move(src.m_containerItemInstanceId) },
    m_customTags{ std::move(src.m_customTags) },
    m_keyItemInstanceId{ std::move(src.m_keyItemInstanceId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest(const PlayFabClientUnlockContainerInstanceRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlockContainerInstanceRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ContainerItemInstanceId", m_containerItemInstanceId, containerItemInstanceId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "KeyItemInstanceId", m_keyItemInstanceId, keyItemInstanceId);
}

JsonValue UnlockContainerInstanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlockContainerInstanceRequest>(*this);
}

UnlockContainerItemRequest::UnlockContainerItemRequest() :
    PlayFabClientUnlockContainerItemRequest{}
{
}

UnlockContainerItemRequest::UnlockContainerItemRequest(const UnlockContainerItemRequest& src) :
    PlayFabClientUnlockContainerItemRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemId{ src.m_containerItemId },
    m_customTags{ src.m_customTags }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlockContainerItemRequest::UnlockContainerItemRequest(UnlockContainerItemRequest&& src) :
    PlayFabClientUnlockContainerItemRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemId{ std::move(src.m_containerItemId) },
    m_customTags{ std::move(src.m_customTags) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UnlockContainerItemRequest::UnlockContainerItemRequest(const PlayFabClientUnlockContainerItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlockContainerItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ContainerItemId", m_containerItemId, containerItemId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UnlockContainerItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlockContainerItemRequest>(*this);
}

UnlockContainerItemResult::UnlockContainerItemResult() :
    PlayFabClientUnlockContainerItemResult{}
{
}

UnlockContainerItemResult::UnlockContainerItemResult(const UnlockContainerItemResult& src) :
    PlayFabClientUnlockContainerItemResult{ src },
    m_grantedItems{ src.m_grantedItems },
    m_unlockedItemInstanceId{ src.m_unlockedItemInstanceId },
    m_unlockedWithItemInstanceId{ src.m_unlockedWithItemInstanceId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    unlockedItemInstanceId = m_unlockedItemInstanceId.empty() ? nullptr : m_unlockedItemInstanceId.data();
    unlockedWithItemInstanceId = m_unlockedWithItemInstanceId.empty() ? nullptr : m_unlockedWithItemInstanceId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

UnlockContainerItemResult::UnlockContainerItemResult(UnlockContainerItemResult&& src) :
    PlayFabClientUnlockContainerItemResult{ src },
    m_grantedItems{ std::move(src.m_grantedItems) },
    m_unlockedItemInstanceId{ std::move(src.m_unlockedItemInstanceId) },
    m_unlockedWithItemInstanceId{ std::move(src.m_unlockedWithItemInstanceId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
    unlockedItemInstanceId = m_unlockedItemInstanceId.empty() ? nullptr : m_unlockedItemInstanceId.data();
    unlockedWithItemInstanceId = m_unlockedWithItemInstanceId.empty() ? nullptr : m_unlockedWithItemInstanceId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
}

UnlockContainerItemResult::UnlockContainerItemResult(const PlayFabClientUnlockContainerItemResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlockContainerItemResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
    JsonUtils::ObjectGetMember(input, "UnlockedItemInstanceId", m_unlockedItemInstanceId, unlockedItemInstanceId);
    JsonUtils::ObjectGetMember(input, "UnlockedWithItemInstanceId", m_unlockedWithItemInstanceId, unlockedWithItemInstanceId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
}

JsonValue UnlockContainerItemResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUnlockContainerItemResult>(*this);
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest() :
    PlayFabClientUpdateAvatarUrlRequest{}
{
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest(const UpdateAvatarUrlRequest& src) :
    PlayFabClientUpdateAvatarUrlRequest{ src },
    m_imageUrl{ src.m_imageUrl }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest(UpdateAvatarUrlRequest&& src) :
    PlayFabClientUpdateAvatarUrlRequest{ src },
    m_imageUrl{ std::move(src.m_imageUrl) }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest(const PlayFabClientUpdateAvatarUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateAvatarUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ImageUrl", m_imageUrl, imageUrl);
}

JsonValue UpdateAvatarUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateAvatarUrlRequest>(*this);
}

size_t UpdateAvatarUrlRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientUpdateAvatarUrlRequest) };
    serializedSize += (m_imageUrl.size() + 1);
    return serializedSize;
}

void UpdateAvatarUrlRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientUpdateAvatarUrlRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientUpdateAvatarUrlRequest);
    memcpy(stringBuffer, m_imageUrl.data(), m_imageUrl.size() + 1);
    serializedStruct->imageUrl = stringBuffer;
    stringBuffer += m_imageUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest() :
    PlayFabClientUpdateCharacterDataRequest{}
{
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src) :
    PlayFabClientUpdateCharacterDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest(UpdateCharacterDataRequest&& src) :
    PlayFabClientUpdateCharacterDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest(const PlayFabClientUpdateCharacterDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCharacterDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
}

JsonValue UpdateCharacterDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateCharacterDataRequest>(*this);
}

UpdateCharacterDataResult::UpdateCharacterDataResult() :
    PlayFabClientUpdateCharacterDataResult{}
{
}


UpdateCharacterDataResult::UpdateCharacterDataResult(const PlayFabClientUpdateCharacterDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCharacterDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue UpdateCharacterDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateCharacterDataResult>(*this);
}

size_t UpdateCharacterDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientUpdateCharacterDataResult) };
    return serializedSize;
}

void UpdateCharacterDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientUpdateCharacterDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientUpdateCharacterDataResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest() :
    PlayFabClientUpdateCharacterStatisticsRequest{}
{
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest(const UpdateCharacterStatisticsRequest& src) :
    PlayFabClientUpdateCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterStatistics{ src.m_characterStatistics },
    m_customTags{ src.m_customTags }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest(UpdateCharacterStatisticsRequest&& src) :
    PlayFabClientUpdateCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterStatistics{ std::move(src.m_characterStatistics) },
    m_customTags{ std::move(src.m_customTags) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest(const PlayFabClientUpdateCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UpdateCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateCharacterStatisticsRequest>(*this);
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest() :
    PlayFabClientUpdatePlayerStatisticsRequest{}
{
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest(const UpdatePlayerStatisticsRequest& src) :
    PlayFabClientUpdatePlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statistics{ src.m_statistics }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest(UpdatePlayerStatisticsRequest&& src) :
    PlayFabClientUpdatePlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statistics{ std::move(src.m_statistics) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest(const PlayFabClientUpdatePlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue UpdatePlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdatePlayerStatisticsRequest>(*this);
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest() :
    PlayFabClientUpdateSharedGroupDataRequest{}
{
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src) :
    PlayFabClientUpdateSharedGroupDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(UpdateSharedGroupDataRequest&& src) :
    PlayFabClientUpdateSharedGroupDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(const PlayFabClientUpdateSharedGroupDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateSharedGroupDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue UpdateSharedGroupDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateSharedGroupDataRequest>(*this);
}

UpdateUserDataRequest::UpdateUserDataRequest() :
    PlayFabClientUpdateUserDataRequest{}
{
}

UpdateUserDataRequest::UpdateUserDataRequest(const UpdateUserDataRequest& src) :
    PlayFabClientUpdateUserDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

UpdateUserDataRequest::UpdateUserDataRequest(UpdateUserDataRequest&& src) :
    PlayFabClientUpdateUserDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

UpdateUserDataRequest::UpdateUserDataRequest(const PlayFabClientUpdateUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
}

JsonValue UpdateUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateUserDataRequest>(*this);
}

UpdateUserDataResult::UpdateUserDataResult() :
    PlayFabClientUpdateUserDataResult{}
{
}


UpdateUserDataResult::UpdateUserDataResult(const PlayFabClientUpdateUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue UpdateUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateUserDataResult>(*this);
}

size_t UpdateUserDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientUpdateUserDataResult) };
    return serializedSize;
}

void UpdateUserDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientUpdateUserDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientUpdateUserDataResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest() :
    PlayFabClientUpdateUserTitleDisplayNameRequest{}
{
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src) :
    PlayFabClientUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ src.m_customTags },
    m_displayName{ src.m_displayName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest(UpdateUserTitleDisplayNameRequest&& src) :
    PlayFabClientUpdateUserTitleDisplayNameRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_displayName{ std::move(src.m_displayName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameRequest::UpdateUserTitleDisplayNameRequest(const PlayFabClientUpdateUserTitleDisplayNameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserTitleDisplayNameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
}

JsonValue UpdateUserTitleDisplayNameRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateUserTitleDisplayNameRequest>(*this);
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult() :
    PlayFabClientUpdateUserTitleDisplayNameResult{}
{
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src) :
    PlayFabClientUpdateUserTitleDisplayNameResult{ src },
    m_displayName{ src.m_displayName }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult&& src) :
    PlayFabClientUpdateUserTitleDisplayNameResult{ src },
    m_displayName{ std::move(src.m_displayName) }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
}

UpdateUserTitleDisplayNameResult::UpdateUserTitleDisplayNameResult(const PlayFabClientUpdateUserTitleDisplayNameResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserTitleDisplayNameResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
}

JsonValue UpdateUserTitleDisplayNameResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientUpdateUserTitleDisplayNameResult>(*this);
}

size_t UpdateUserTitleDisplayNameResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientUpdateUserTitleDisplayNameResult) };
    serializedSize += (m_displayName.size() + 1);
    return serializedSize;
}

void UpdateUserTitleDisplayNameResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientUpdateUserTitleDisplayNameResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientUpdateUserTitleDisplayNameResult);
    memcpy(stringBuffer, m_displayName.data(), m_displayName.size() + 1);
    serializedStruct->displayName = stringBuffer;
    stringBuffer += m_displayName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest() :
    PlayFabClientValidateAmazonReceiptRequest{}
{
}

ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest(const ValidateAmazonReceiptRequest& src) :
    PlayFabClientValidateAmazonReceiptRequest{ src },
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
    PlayFabClientValidateAmazonReceiptRequest{ src },
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

ValidateAmazonReceiptRequest::ValidateAmazonReceiptRequest(const PlayFabClientValidateAmazonReceiptRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientValidateAmazonReceiptRequest>(*this);
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult() :
    PlayFabClientValidateAmazonReceiptResult{}
{
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult(const ValidateAmazonReceiptResult& src) :
    PlayFabClientValidateAmazonReceiptResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult(ValidateAmazonReceiptResult&& src) :
    PlayFabClientValidateAmazonReceiptResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateAmazonReceiptResult::ValidateAmazonReceiptResult(const PlayFabClientValidateAmazonReceiptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateAmazonReceiptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateAmazonReceiptResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientValidateAmazonReceiptResult>(*this);
}

ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest() :
    PlayFabClientValidateGooglePlayPurchaseRequest{}
{
}

ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest(const ValidateGooglePlayPurchaseRequest& src) :
    PlayFabClientValidateGooglePlayPurchaseRequest{ src },
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
    PlayFabClientValidateGooglePlayPurchaseRequest{ src },
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

ValidateGooglePlayPurchaseRequest::ValidateGooglePlayPurchaseRequest(const PlayFabClientValidateGooglePlayPurchaseRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientValidateGooglePlayPurchaseRequest>(*this);
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult() :
    PlayFabClientValidateGooglePlayPurchaseResult{}
{
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult(const ValidateGooglePlayPurchaseResult& src) :
    PlayFabClientValidateGooglePlayPurchaseResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult(ValidateGooglePlayPurchaseResult&& src) :
    PlayFabClientValidateGooglePlayPurchaseResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateGooglePlayPurchaseResult::ValidateGooglePlayPurchaseResult(const PlayFabClientValidateGooglePlayPurchaseResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateGooglePlayPurchaseResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateGooglePlayPurchaseResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientValidateGooglePlayPurchaseResult>(*this);
}

ValidateIOSReceiptRequest::ValidateIOSReceiptRequest() :
    PlayFabClientValidateIOSReceiptRequest{}
{
}

ValidateIOSReceiptRequest::ValidateIOSReceiptRequest(const ValidateIOSReceiptRequest& src) :
    PlayFabClientValidateIOSReceiptRequest{ src },
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
    PlayFabClientValidateIOSReceiptRequest{ src },
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

ValidateIOSReceiptRequest::ValidateIOSReceiptRequest(const PlayFabClientValidateIOSReceiptRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientValidateIOSReceiptRequest>(*this);
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult() :
    PlayFabClientValidateIOSReceiptResult{}
{
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult(const ValidateIOSReceiptResult& src) :
    PlayFabClientValidateIOSReceiptResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult(ValidateIOSReceiptResult&& src) :
    PlayFabClientValidateIOSReceiptResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateIOSReceiptResult::ValidateIOSReceiptResult(const PlayFabClientValidateIOSReceiptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateIOSReceiptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateIOSReceiptResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientValidateIOSReceiptResult>(*this);
}

ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest() :
    PlayFabClientValidateWindowsReceiptRequest{}
{
}

ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest(const ValidateWindowsReceiptRequest& src) :
    PlayFabClientValidateWindowsReceiptRequest{ src },
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
    PlayFabClientValidateWindowsReceiptRequest{ src },
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

ValidateWindowsReceiptRequest::ValidateWindowsReceiptRequest(const PlayFabClientValidateWindowsReceiptRequest& src)
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
    return JsonUtils::ToJson<PlayFabClientValidateWindowsReceiptRequest>(*this);
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult() :
    PlayFabClientValidateWindowsReceiptResult{}
{
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult(const ValidateWindowsReceiptResult& src) :
    PlayFabClientValidateWindowsReceiptResult{ src },
    m_fulfillments{ src.m_fulfillments }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult(ValidateWindowsReceiptResult&& src) :
    PlayFabClientValidateWindowsReceiptResult{ src },
    m_fulfillments{ std::move(src.m_fulfillments) }
{
    fulfillments = m_fulfillments.Empty() ? nullptr : m_fulfillments.Data();
}

ValidateWindowsReceiptResult::ValidateWindowsReceiptResult(const PlayFabClientValidateWindowsReceiptResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateWindowsReceiptResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fulfillments", m_fulfillments, fulfillments, fulfillmentsCount);
}

JsonValue ValidateWindowsReceiptResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientValidateWindowsReceiptResult>(*this);
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest() :
    PlayFabClientWriteClientCharacterEventRequest{}
{
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest(const WriteClientCharacterEventRequest& src) :
    PlayFabClientWriteClientCharacterEventRequest{ src },
    m_body{ src.m_body },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest(WriteClientCharacterEventRequest&& src) :
    PlayFabClientWriteClientCharacterEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest(const PlayFabClientWriteClientCharacterEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteClientCharacterEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteClientCharacterEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientWriteClientCharacterEventRequest>(*this);
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest() :
    PlayFabClientWriteClientPlayerEventRequest{}
{
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest(const WriteClientPlayerEventRequest& src) :
    PlayFabClientWriteClientPlayerEventRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest(WriteClientPlayerEventRequest&& src) :
    PlayFabClientWriteClientPlayerEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest(const PlayFabClientWriteClientPlayerEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteClientPlayerEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteClientPlayerEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientWriteClientPlayerEventRequest>(*this);
}

WriteEventResponse::WriteEventResponse() :
    PlayFabClientWriteEventResponse{}
{
}

WriteEventResponse::WriteEventResponse(const WriteEventResponse& src) :
    PlayFabClientWriteEventResponse{ src },
    m_eventId{ src.m_eventId }
{
    eventId = m_eventId.empty() ? nullptr : m_eventId.data();
}

WriteEventResponse::WriteEventResponse(WriteEventResponse&& src) :
    PlayFabClientWriteEventResponse{ src },
    m_eventId{ std::move(src.m_eventId) }
{
    eventId = m_eventId.empty() ? nullptr : m_eventId.data();
}

WriteEventResponse::WriteEventResponse(const PlayFabClientWriteEventResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteEventResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EventId", m_eventId, eventId);
}

JsonValue WriteEventResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientWriteEventResponse>(*this);
}

size_t WriteEventResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabClientWriteEventResponse) };
    serializedSize += (m_eventId.size() + 1);
    return serializedSize;
}

void WriteEventResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabClientWriteEventResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabClientWriteEventResponse);
    memcpy(stringBuffer, m_eventId.data(), m_eventId.size() + 1);
    serializedStruct->eventId = stringBuffer;
    stringBuffer += m_eventId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

WriteTitleEventRequest::WriteTitleEventRequest() :
    PlayFabClientWriteTitleEventRequest{}
{
}

WriteTitleEventRequest::WriteTitleEventRequest(const WriteTitleEventRequest& src) :
    PlayFabClientWriteTitleEventRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteTitleEventRequest::WriteTitleEventRequest(WriteTitleEventRequest&& src) :
    PlayFabClientWriteTitleEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteTitleEventRequest::WriteTitleEventRequest(const PlayFabClientWriteTitleEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteTitleEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteTitleEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabClientWriteTitleEventRequest>(*this);
}

} // namespace ClientModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabClientAcceptTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AcceptedInventoryInstanceIds", input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientTradeInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AcceptedInventoryInstanceIds", input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "AcceptedPlayerId", input.acceptedPlayerId);
    JsonUtils::ObjectAddMember(output, "AllowedPlayerIds", input.allowedPlayerIds, input.allowedPlayerIdsCount);
    JsonUtils::ObjectAddMember(output, "CancelledAt", input.cancelledAt, true);
    JsonUtils::ObjectAddMember(output, "FilledAt", input.filledAt, true);
    JsonUtils::ObjectAddMember(output, "InvalidatedAt", input.invalidatedAt, true);
    JsonUtils::ObjectAddMember(output, "OfferedCatalogItemIds", input.offeredCatalogItemIds, input.offeredCatalogItemIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferedInventoryInstanceIds", input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "OpenedAt", input.openedAt, true);
    JsonUtils::ObjectAddMember(output, "RequestedCatalogItemIds", input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAcceptTradeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendEmail", input.friendEmail);
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "FriendTitleDisplayName", input.friendTitleDisplayName);
    JsonUtils::ObjectAddMember(output, "FriendUsername", input.friendUsername);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddFriendResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Created", input.created);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGenericServiceId& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ServiceName", input.serviceName);
    JsonUtils::ObjectAddMember(output, "UserId", input.userId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddOrUpdateContactEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddSharedGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddUsernamePasswordRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddUsernamePasswordResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAddUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAdPlacementDetails& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "PlacementName", input.placementName);
    JsonUtils::ObjectAddMember(output, "PlacementViewsRemaining", input.placementViewsRemaining);
    JsonUtils::ObjectAddMember(output, "PlacementViewsResetMinutes", input.placementViewsResetMinutes);
    JsonUtils::ObjectAddMember(output, "RewardAssetUrl", input.rewardAssetUrl);
    JsonUtils::ObjectAddMember(output, "RewardDescription", input.rewardDescription);
    JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
    JsonUtils::ObjectAddMember(output, "RewardName", input.rewardName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAdRewardItemGranted& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogId", input.catalogId);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "InstanceId", input.instanceId);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAdRewardResults& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    JsonUtils::ObjectAddMember(output, "GrantedVirtualCurrencies", input.grantedVirtualCurrencies, input.grantedVirtualCurrenciesCount);
    JsonUtils::ObjectAddMember(output, "IncrementedStatistics", input.incrementedStatistics, input.incrementedStatisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConfirmationMessage", input.confirmationMessage);
    JsonUtils::ObjectAddMember(output, "DeviceToken", input.deviceToken);
    JsonUtils::ObjectAddMember(output, "SendPushNotificationConfirmation", input.sendPushNotificationConfirmation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientAttributeInstallRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Adid", input.adid);
    JsonUtils::ObjectAddMember(output, "Idfa", input.idfa);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCancelTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCancelTradeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCartItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "VCAmount", input.vCAmount, input.vCAmountCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCatalogItemBundleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BundledItems", input.bundledItems, input.bundledItemsCount);
    JsonUtils::ObjectAddMember(output, "BundledResultTables", input.bundledResultTables, input.bundledResultTablesCount);
    JsonUtils::ObjectAddMember(output, "BundledVirtualCurrencies", input.bundledVirtualCurrencies, input.bundledVirtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCatalogItemConsumableInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UsageCount", input.usageCount);
    JsonUtils::ObjectAddMember(output, "UsagePeriod", input.usagePeriod);
    JsonUtils::ObjectAddMember(output, "UsagePeriodGroup", input.usagePeriodGroup);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCatalogItemContainerInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemContents", input.itemContents, input.itemContentsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemId", input.keyItemId);
    JsonUtils::ObjectAddMember(output, "ResultTableContents", input.resultTableContents, input.resultTableContentsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyContents", input.virtualCurrencyContents, input.virtualCurrencyContentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCatalogItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bundle", input.bundle);
    JsonUtils::ObjectAddMember(output, "CanBecomeCharacter", input.canBecomeCharacter);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "Consumable", input.consumable);
    JsonUtils::ObjectAddMember(output, "Container", input.container);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "InitialLimitedEditionCount", input.initialLimitedEditionCount);
    JsonUtils::ObjectAddMember(output, "IsLimitedEdition", input.isLimitedEdition);
    JsonUtils::ObjectAddMember(output, "IsStackable", input.isStackable);
    JsonUtils::ObjectAddMember(output, "IsTradable", input.isTradable);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemImageUrl", input.itemImageUrl);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCharacterLeaderboardEntry& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Position", input.position);
    JsonUtils::ObjectAddMember(output, "StatValue", input.statValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientContainer_Dictionary_String_String& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCollectionFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Excludes", input.excludes, input.excludesCount);
    JsonUtils::ObjectAddMember(output, "Includes", input.includes, input.includesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConfirmPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConfirmPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumeItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ConsumeCount", input.consumeCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumeItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientMicrosoftStorePayload& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CollectionsMsIdKey", input.collectionsMsIdKey);
    JsonUtils::ObjectAddMember(output, "UserId", input.userId);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MarketplaceSpecificData", input.marketplaceSpecificData);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumeMicrosoftStoreEntitlementsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPlayStation5Payload& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Ids", input.ids, input.idsCount);
    JsonUtils::ObjectAddMember(output, "ServiceLabel", input.serviceLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumePS5EntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MarketplaceSpecificData", input.marketplaceSpecificData);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumePS5EntitlementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumePSNEntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ServiceLabel", input.serviceLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumePSNEntitlementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemsGranted", input.itemsGranted, input.itemsGrantedCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumeXboxEntitlementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientConsumeXboxEntitlementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCreateSharedGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCreateSharedGroupResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCurrentGamesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "TagFilter", input.tagFilter);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGameInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
    JsonUtils::ObjectAddMember(output, "GameServerData", input.gameServerData);
    JsonUtils::ObjectAddMember(output, "GameServerStateEnum", input.gameServerStateEnum);
    JsonUtils::ObjectAddMember(output, "LastHeartbeat", input.lastHeartbeat, true);
    JsonUtils::ObjectAddMember(output, "LobbyID", input.lobbyID);
    JsonUtils::ObjectAddMember(output, "MaxPlayers", input.maxPlayers);
    JsonUtils::ObjectAddMember(output, "PlayerUserIds", input.playerUserIds, input.playerUserIdsCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "RunTime", input.runTime);
    JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
    JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
    JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
    JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientCurrentGamesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCount", input.gameCount);
    JsonUtils::ObjectAddMember(output, "Games", input.games, input.gamesCount);
    JsonUtils::ObjectAddMember(output, "PlayerCount", input.playerCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientDeviceInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Info", input.info);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientExecuteCloudScriptRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientScriptExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLogStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data);
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientExecuteCloudScriptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "APIRequestsIssued", input.aPIRequestsIssued);
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "ExecutionTimeSeconds", input.executionTimeSeconds);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionResult", input.functionResult);
    JsonUtils::ObjectAddMember(output, "FunctionResultTooLarge", input.functionResultTooLarge);
    JsonUtils::ObjectAddMember(output, "HttpRequestsIssued", input.httpRequestsIssued);
    JsonUtils::ObjectAddMember(output, "Logs", input.logs, input.logsCount);
    JsonUtils::ObjectAddMember(output, "LogsTooLarge", input.logsTooLarge);
    JsonUtils::ObjectAddMember(output, "MemoryConsumedBytes", input.memoryConsumedBytes);
    JsonUtils::ObjectAddMember(output, "ProcessorTimeSeconds", input.processorTimeSeconds);
    JsonUtils::ObjectAddMember(output, "Revision", input.revision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientFacebookInstantGamesPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientFacebookPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientFriendInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInfo", input.facebookInfo);
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "GameCenterInfo", input.gameCenterInfo);
    JsonUtils::ObjectAddMember(output, "Profile", input.profile);
    JsonUtils::ObjectAddMember(output, "PSNInfo", input.PSNInfo);
    JsonUtils::ObjectAddMember(output, "SteamInfo", input.steamInfo);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    JsonUtils::ObjectAddMember(output, "XboxInfo", input.xboxInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGameCenterPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGameServerRegionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRegionInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Available", input.available);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "PingUrl", input.pingUrl);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGameServerRegionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Regions", input.regions, input.regionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGenericPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetAccountInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccountInfo", input.accountInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientNameIdentifier& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetAdPlacementsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AppId", input.appId);
    JsonUtils::ObjectAddMember(output, "Identifier", input.identifier);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetAdPlacementsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdPlacements", input.adPlacements, input.adPlacementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCatalogItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCatalogItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterLeaderboardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetCharacterStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetContentDownloadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "HttpMethod", input.httpMethod);
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "ThruCDN", input.thruCDN);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetContentDownloadUrlResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "URL", input.uRL);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPlayerProfileViewConstraints& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ShowAvatarUrl", input.showAvatarUrl);
    JsonUtils::ObjectAddMember(output, "ShowBannedUntil", input.showBannedUntil);
    JsonUtils::ObjectAddMember(output, "ShowCampaignAttributions", input.showCampaignAttributions);
    JsonUtils::ObjectAddMember(output, "ShowContactEmailAddresses", input.showContactEmailAddresses);
    JsonUtils::ObjectAddMember(output, "ShowCreated", input.showCreated);
    JsonUtils::ObjectAddMember(output, "ShowDisplayName", input.showDisplayName);
    JsonUtils::ObjectAddMember(output, "ShowExperimentVariants", input.showExperimentVariants);
    JsonUtils::ObjectAddMember(output, "ShowLastLogin", input.showLastLogin);
    JsonUtils::ObjectAddMember(output, "ShowLinkedAccounts", input.showLinkedAccounts);
    JsonUtils::ObjectAddMember(output, "ShowLocations", input.showLocations);
    JsonUtils::ObjectAddMember(output, "ShowMemberships", input.showMemberships);
    JsonUtils::ObjectAddMember(output, "ShowOrigination", input.showOrigination);
    JsonUtils::ObjectAddMember(output, "ShowPushNotificationRegistrations", input.showPushNotificationRegistrations);
    JsonUtils::ObjectAddMember(output, "ShowStatistics", input.showStatistics);
    JsonUtils::ObjectAddMember(output, "ShowTags", input.showTags);
    JsonUtils::ObjectAddMember(output, "ShowTotalValueToDateInUsd", input.showTotalValueToDateInUsd);
    JsonUtils::ObjectAddMember(output, "ShowValuesToDate", input.showValuesToDate);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPlayerLeaderboardEntry& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Position", input.position);
    JsonUtils::ObjectAddMember(output, "Profile", input.profile);
    JsonUtils::ObjectAddMember(output, "StatValue", input.statValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardAroundPlayerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetFriendLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetFriendsListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetFriendsListResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Friends", input.friends, input.friendsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundCharacterResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardAroundPlayerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardForUsersCharactersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardForUsersCharactersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetLeaderboardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPaymentTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TokenProvider", input.tokenProvider);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPaymentTokenResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "ProviderToken", input.providerToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPhotonAuthenticationTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PhotonApplicationId", input.photonApplicationId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPhotonAuthenticationTokenResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PhotonCustomAuthenticationToken", input.photonCustomAuthenticationToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoRequestParams& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GetCharacterInventories", input.getCharacterInventories);
    JsonUtils::ObjectAddMember(output, "GetCharacterList", input.getCharacterList);
    JsonUtils::ObjectAddMember(output, "GetPlayerProfile", input.getPlayerProfile);
    JsonUtils::ObjectAddMember(output, "GetPlayerStatistics", input.getPlayerStatistics);
    JsonUtils::ObjectAddMember(output, "GetTitleData", input.getTitleData);
    JsonUtils::ObjectAddMember(output, "GetUserAccountInfo", input.getUserAccountInfo);
    JsonUtils::ObjectAddMember(output, "GetUserData", input.getUserData);
    JsonUtils::ObjectAddMember(output, "GetUserInventory", input.getUserInventory);
    JsonUtils::ObjectAddMember(output, "GetUserReadOnlyData", input.getUserReadOnlyData);
    JsonUtils::ObjectAddMember(output, "GetUserVirtualCurrency", input.getUserVirtualCurrency);
    JsonUtils::ObjectAddMember(output, "PlayerStatisticNames", input.playerStatisticNames, input.playerStatisticNamesCount);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "TitleDataKeys", input.titleDataKeys, input.titleDataKeysCount);
    JsonUtils::ObjectAddMember(output, "UserDataKeys", input.userDataKeys, input.userDataKeysCount);
    JsonUtils::ObjectAddMember(output, "UserReadOnlyDataKeys", input.userReadOnlyDataKeys, input.userReadOnlyDataKeysCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerCombinedInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "InfoResultPayload", input.infoResultPayload);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerProfileResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetSegmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ABTestParent", input.aBTestParent);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerSegmentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStatisticNameVersion& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticNames", input.statisticNames, input.statisticNamesCount);
    JsonUtils::ObjectAddMember(output, "StatisticNameVersions", input.statisticNameVersions, input.statisticNameVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticVersionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPlayerStatisticVersion& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActivationTime", input.activationTime, true);
    JsonUtils::ObjectAddMember(output, "DeactivationTime", input.deactivationTime, true);
    JsonUtils::ObjectAddMember(output, "ScheduledActivationTime", input.scheduledActivationTime, true);
    JsonUtils::ObjectAddMember(output, "ScheduledDeactivationTime", input.scheduledDeactivationTime, true);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerStatisticVersionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticVersions", input.statisticVersions, input.statisticVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Namespace", input.playfabNamespace);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerTagsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerTradesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatusFilter", input.statusFilter);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayerTradesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AcceptedTrades", input.acceptedTrades, input.acceptedTradesCount);
    JsonUtils::ObjectAddMember(output, "OpenedTrades", input.openedTrades, input.openedTradesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookIDs", input.facebookIDs, input.facebookIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIds", input.facebookInstantGamesIds, input.facebookInstantGamesIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCenterIDs", input.gameCenterIDs, input.gameCenterIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGameCenterIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericIDs", input.genericIDs, input.genericIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGenericIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GoogleIDs", input.googleIDs, input.googleIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGooglePlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GoogleId", input.googleId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromGoogleIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KongregateIDs", input.kongregateIDs, input.kongregateIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientKongregatePlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromKongregateIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIds", input.nintendoSwitchDeviceIds, input.nintendoSwitchDeviceIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientNintendoSwitchPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PSNAccountIDs", input.PSNAccountIDs, input.PSNAccountIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPSNAccountPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PSNAccountId", input.PSNAccountId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SteamStringIDs", input.steamStringIDs, input.steamStringIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientSteamPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "SteamStringId", input.steamStringId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromSteamIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TwitchIds", input.twitchIds, input.twitchIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientTwitchPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TwitchId", input.twitchId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromTwitchIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
    JsonUtils::ObjectAddMember(output, "XboxLiveAccountIDs", input.xboxLiveAccountIDs, input.xboxLiveAccountIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientXboxLiveAccountPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "XboxLiveAccountId", input.xboxLiveAccountId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPublisherDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PaymentProvider", input.paymentProvider);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    JsonUtils::ObjectAddMember(output, "TransactionId", input.transactionId);
    JsonUtils::ObjectAddMember(output, "TransactionStatus", input.transactionStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetSharedGroupDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GetMembers", input.getMembers);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientSharedGroupDataRecord& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
    JsonUtils::ObjectAddMember(output, "LastUpdatedBy", input.lastUpdatedBy);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetSharedGroupDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetStoreItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStoreMarketingModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStoreItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "DisplayPosition", input.displayPosition);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "RealCurrencyPrices", input.realCurrencyPrices, input.realCurrencyPricesCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyPrices", input.virtualCurrencyPrices, input.virtualCurrencyPricesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetStoreItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "MarketingData", input.marketingData);
    JsonUtils::ObjectAddMember(output, "Source", input.source);
    JsonUtils::ObjectAddMember(output, "Store", input.store, input.storeCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTimeResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Time", input.time, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTitleDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTitleDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTitleNewsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Count", input.count);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientTitleNewsItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTitleNewsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "News", input.news, input.newsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTitlePublicKeyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TitleSharedSecret", input.titleSharedSecret);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTitlePublicKeyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "RSAPublicKey", input.rSAPublicKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTradeStatusRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetTradeStatusResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetUserInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGetUserInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGrantCharacterToUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientGrantCharacterToUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientItemPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "Quantity", input.quantity);
    JsonUtils::ObjectAddMember(output, "UpgradeFromItems", input.upgradeFromItems, input.upgradeFromItemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDevice", input.androidDevice);
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkFacebookAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesSignature", input.facebookInstantGamesSignature);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkGameCenterAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "GameCenterId", input.gameCenterId);
    JsonUtils::ObjectAddMember(output, "PublicKeyUrl", input.publicKeyUrl);
    JsonUtils::ObjectAddMember(output, "Salt", input.salt);
    JsonUtils::ObjectAddMember(output, "Signature", input.signature);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "ServerAuthCode", input.serverAuthCode);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    JsonUtils::ObjectAddMember(output, "DeviceModel", input.deviceModel);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkKongregateAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthTicket", input.authTicket);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IdToken", input.idToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkSteamAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "SteamTicket", input.steamTicket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkTwitchAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientListUsersCharactersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientListUsersCharactersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Characters", input.characters, input.charactersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDevice", input.androidDevice);
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithEmailAddressRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesSignature", input.facebookInstantGamesSignature);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithFacebookRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithGameCenterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "PublicKeyUrl", input.publicKeyUrl);
    JsonUtils::ObjectAddMember(output, "Salt", input.salt);
    JsonUtils::ObjectAddMember(output, "Signature", input.signature);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "ServerAuthCode", input.serverAuthCode);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    JsonUtils::ObjectAddMember(output, "DeviceModel", input.deviceModel);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithKongregateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthTicket", input.authTicket);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "IdToken", input.idToken);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithPlayFabRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithPSNRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithSteamRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "SteamTicket", input.steamTicket);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithTwitchRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientLoginWithXboxRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientMatchmakeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "StartNewIfNoneFound", input.startNewIfNoneFound);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "TagFilter", input.tagFilter);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientMatchmakeResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Expires", input.expires);
    JsonUtils::ObjectAddMember(output, "LobbyID", input.lobbyID);
    JsonUtils::ObjectAddMember(output, "PollWaitTimeMS", input.pollWaitTimeMS);
    JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
    JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
    JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
    JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "Ticket", input.ticket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientModifyUserVirtualCurrencyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Balance", input.balance);
    JsonUtils::ObjectAddMember(output, "BalanceChange", input.balanceChange);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientOpenTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AllowedPlayerIds", input.allowedPlayerIds, input.allowedPlayerIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferedInventoryInstanceIds", input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "RequestedCatalogItemIds", input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientOpenTradeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPayForPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "ProviderName", input.providerName);
    JsonUtils::ObjectAddMember(output, "ProviderTransactionId", input.providerTransactionId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPayForPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreditApplied", input.creditApplied);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "ProviderData", input.providerData);
    JsonUtils::ObjectAddMember(output, "ProviderToken", input.providerToken);
    JsonUtils::ObjectAddMember(output, "PurchaseConfirmationPageURL", input.purchaseConfirmationPageURL);
    JsonUtils::ObjectAddMember(output, "PurchaseCurrency", input.purchaseCurrency);
    JsonUtils::ObjectAddMember(output, "PurchasePrice", input.purchasePrice);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "VCAmount", input.vCAmount, input.vCAmountCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPaymentOption& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Currency", input.currency);
    JsonUtils::ObjectAddMember(output, "Price", input.price);
    JsonUtils::ObjectAddMember(output, "ProviderName", input.providerName);
    JsonUtils::ObjectAddMember(output, "StoreCredit", input.storeCredit);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPurchaseItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "Price", input.price);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPurchaseItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientPurchaseReceiptFulfillment& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FulfilledItems", input.fulfilledItems, input.fulfilledItemsCount);
    JsonUtils::ObjectAddMember(output, "RecordedPriceSource", input.recordedPriceSource);
    JsonUtils::ObjectAddMember(output, "RecordedTransactionCurrency", input.recordedTransactionCurrency);
    JsonUtils::ObjectAddMember(output, "RecordedTransactionTotal", input.recordedTransactionTotal);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRedeemCouponRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CouponCode", input.couponCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRedeemCouponResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRefreshPSNAuthTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRegisterForIOSPushNotificationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConfirmationMessage", input.confirmationMessage);
    JsonUtils::ObjectAddMember(output, "DeviceToken", input.deviceToken);
    JsonUtils::ObjectAddMember(output, "SendPushNotificationConfirmation", input.sendPushNotificationConfirmation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRegisterPlayFabUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "RequireBothUsernameAndEmail", input.requireBothUsernameAndEmail);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRemoveContactEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRemoveFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRemoveGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRemoveSharedGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientReportAdActivityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Activity", input.activity);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientReportPlayerClientRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ReporteeId", input.reporteeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientReportPlayerClientResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SubmissionsRemaining", input.submissionsRemaining);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRestoreIOSPurchasesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ReceiptData", input.receiptData);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRestoreIOSPurchasesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRewardAdActivityRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "RewardId", input.rewardId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientRewardAdActivityResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdActivityEventId", input.adActivityEventId);
    JsonUtils::ObjectAddMember(output, "DebugResults", input.debugResults, input.debugResultsCount);
    JsonUtils::ObjectAddMember(output, "PlacementId", input.placementId);
    JsonUtils::ObjectAddMember(output, "PlacementName", input.placementName);
    JsonUtils::ObjectAddMember(output, "PlacementViewsRemaining", input.placementViewsRemaining);
    JsonUtils::ObjectAddMember(output, "PlacementViewsResetMinutes", input.placementViewsResetMinutes);
    JsonUtils::ObjectAddMember(output, "RewardResults", input.rewardResults);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientSendAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientSetFriendTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientSetPlayerSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStartGameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomCommandLineData", input.customCommandLineData);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStartGameResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Expires", input.expires);
    JsonUtils::ObjectAddMember(output, "LobbyID", input.lobbyID);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
    JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
    JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
    JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
    JsonUtils::ObjectAddMember(output, "Ticket", input.ticket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStartPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStartPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Contents", input.contents, input.contentsCount);
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PaymentOptions", input.paymentOptions, input.paymentOptionsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalances", input.virtualCurrencyBalances, input.virtualCurrencyBalancesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientStatisticUpdate& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientSubtractUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkGameCenterAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkKongregateAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkSteamAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkTwitchAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlockContainerInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemInstanceId", input.containerItemInstanceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemInstanceId", input.keyItemInstanceId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlockContainerItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemId", input.containerItemId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUnlockContainerItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    JsonUtils::ObjectAddMember(output, "UnlockedItemInstanceId", input.unlockedItemInstanceId);
    JsonUtils::ObjectAddMember(output, "UnlockedWithItemInstanceId", input.unlockedWithItemInstanceId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateAvatarUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdatePlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateSharedGroupDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateUserTitleDisplayNameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientUpdateUserTitleDisplayNameResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientValidateAmazonReceiptRequest& input)
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
inline JsonValue ToJson<>(const PlayFabClientValidateAmazonReceiptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientValidateGooglePlayPurchaseRequest& input)
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
inline JsonValue ToJson<>(const PlayFabClientValidateGooglePlayPurchaseResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientValidateIOSReceiptRequest& input)
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
inline JsonValue ToJson<>(const PlayFabClientValidateIOSReceiptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientValidateWindowsReceiptRequest& input)
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
inline JsonValue ToJson<>(const PlayFabClientValidateWindowsReceiptResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fulfillments", input.fulfillments, input.fulfillmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientWriteClientCharacterEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientWriteClientPlayerEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientWriteEventResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EventId", input.eventId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabClientWriteTitleEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
