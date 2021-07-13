#include "stdafx.h"
#include "ServerDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace ServerModels
{

AdCampaignAttribution::AdCampaignAttribution() :
    PlayFabServerAdCampaignAttribution{}
{
}

AdCampaignAttribution::AdCampaignAttribution(const AdCampaignAttribution& src) :
    PlayFabServerAdCampaignAttribution{ src },
    m_campaignId{ src.m_campaignId },
    m_platform{ src.m_platform }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttribution::AdCampaignAttribution(AdCampaignAttribution&& src) :
    PlayFabServerAdCampaignAttribution{ src },
    m_campaignId{ std::move(src.m_campaignId) },
    m_platform{ std::move(src.m_platform) }
{
    campaignId = m_campaignId.empty() ? nullptr : m_campaignId.data();
    platform = m_platform.empty() ? nullptr : m_platform.data();
}

AdCampaignAttribution::AdCampaignAttribution(const PlayFabServerAdCampaignAttribution& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdCampaignAttribution::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AttributedAt", attributedAt, true);
    JsonUtils::ObjectGetMember(input, "CampaignId", m_campaignId, campaignId);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue AdCampaignAttribution::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAdCampaignAttribution>(*this);
}

size_t AdCampaignAttribution::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerAdCampaignAttribution) };
    serializedSize += (m_campaignId.size() + 1);
    serializedSize += (m_platform.size() + 1);
    return serializedSize;
}

void AdCampaignAttribution::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerAdCampaignAttribution{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerAdCampaignAttribution);
    memcpy(stringBuffer, m_campaignId.data(), m_campaignId.size() + 1);
    serializedStruct->campaignId = stringBuffer;
    stringBuffer += m_campaignId.size() + 1;
    memcpy(stringBuffer, m_platform.data(), m_platform.size() + 1);
    serializedStruct->platform = stringBuffer;
    stringBuffer += m_platform.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest() :
    PlayFabServerAddCharacterVirtualCurrencyRequest{}
{
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest(const AddCharacterVirtualCurrencyRequest& src) :
    PlayFabServerAddCharacterVirtualCurrencyRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest(AddCharacterVirtualCurrencyRequest&& src) :
    PlayFabServerAddCharacterVirtualCurrencyRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddCharacterVirtualCurrencyRequest::AddCharacterVirtualCurrencyRequest(const PlayFabServerAddCharacterVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddCharacterVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue AddCharacterVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAddCharacterVirtualCurrencyRequest>(*this);
}

AddFriendRequest::AddFriendRequest() :
    PlayFabServerAddFriendRequest{}
{
}

AddFriendRequest::AddFriendRequest(const AddFriendRequest& src) :
    PlayFabServerAddFriendRequest{ src },
    m_friendEmail{ src.m_friendEmail },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_friendTitleDisplayName{ src.m_friendTitleDisplayName },
    m_friendUsername{ src.m_friendUsername },
    m_playFabId{ src.m_playFabId }
{
    friendEmail = m_friendEmail.empty() ? nullptr : m_friendEmail.data();
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    friendTitleDisplayName = m_friendTitleDisplayName.empty() ? nullptr : m_friendTitleDisplayName.data();
    friendUsername = m_friendUsername.empty() ? nullptr : m_friendUsername.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AddFriendRequest::AddFriendRequest(AddFriendRequest&& src) :
    PlayFabServerAddFriendRequest{ src },
    m_friendEmail{ std::move(src.m_friendEmail) },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_friendTitleDisplayName{ std::move(src.m_friendTitleDisplayName) },
    m_friendUsername{ std::move(src.m_friendUsername) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    friendEmail = m_friendEmail.empty() ? nullptr : m_friendEmail.data();
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    friendTitleDisplayName = m_friendTitleDisplayName.empty() ? nullptr : m_friendTitleDisplayName.data();
    friendUsername = m_friendUsername.empty() ? nullptr : m_friendUsername.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AddFriendRequest::AddFriendRequest(const PlayFabServerAddFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendEmail", m_friendEmail, friendEmail);
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "FriendTitleDisplayName", m_friendTitleDisplayName, friendTitleDisplayName);
    JsonUtils::ObjectGetMember(input, "FriendUsername", m_friendUsername, friendUsername);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AddFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAddFriendRequest>(*this);
}

size_t AddFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerAddFriendRequest) };
    serializedSize += (m_friendEmail.size() + 1);
    serializedSize += (m_friendPlayFabId.size() + 1);
    serializedSize += (m_friendTitleDisplayName.size() + 1);
    serializedSize += (m_friendUsername.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void AddFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerAddFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerAddFriendRequest);
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
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GenericServiceId::GenericServiceId() :
    PlayFabServerGenericServiceId{}
{
}

GenericServiceId::GenericServiceId(const GenericServiceId& src) :
    PlayFabServerGenericServiceId{ src },
    m_serviceName{ src.m_serviceName },
    m_userId{ src.m_userId }
{
    serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

GenericServiceId::GenericServiceId(GenericServiceId&& src) :
    PlayFabServerGenericServiceId{ src },
    m_serviceName{ std::move(src.m_serviceName) },
    m_userId{ std::move(src.m_userId) }
{
    serviceName = m_serviceName.empty() ? nullptr : m_serviceName.data();
    userId = m_userId.empty() ? nullptr : m_userId.data();
}

GenericServiceId::GenericServiceId(const PlayFabServerGenericServiceId& src)
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
    return JsonUtils::ToJson<PlayFabServerGenericServiceId>(*this);
}

size_t GenericServiceId::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGenericServiceId) };
    serializedSize += (m_serviceName.size() + 1);
    serializedSize += (m_userId.size() + 1);
    return serializedSize;
}

void GenericServiceId::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGenericServiceId{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGenericServiceId);
    memcpy(stringBuffer, m_serviceName.data(), m_serviceName.size() + 1);
    serializedStruct->serviceName = stringBuffer;
    stringBuffer += m_serviceName.size() + 1;
    memcpy(stringBuffer, m_userId.data(), m_userId.size() + 1);
    serializedStruct->userId = stringBuffer;
    stringBuffer += m_userId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AddGenericIDRequest::AddGenericIDRequest() :
    PlayFabServerAddGenericIDRequest{}
{
}

AddGenericIDRequest::AddGenericIDRequest(const AddGenericIDRequest& src) :
    PlayFabServerAddGenericIDRequest{ src },
    m_genericId{ src.m_genericId },
    m_playFabId{ src.m_playFabId }
{
    genericId = (PlayFabServerGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AddGenericIDRequest::AddGenericIDRequest(AddGenericIDRequest&& src) :
    PlayFabServerAddGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    genericId = (PlayFabServerGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AddGenericIDRequest::AddGenericIDRequest(const PlayFabServerAddGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AddGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAddGenericIDRequest>(*this);
}

AddPlayerTagRequest::AddPlayerTagRequest() :
    PlayFabServerAddPlayerTagRequest{}
{
}

AddPlayerTagRequest::AddPlayerTagRequest(const AddPlayerTagRequest& src) :
    PlayFabServerAddPlayerTagRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_tagName{ src.m_tagName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

AddPlayerTagRequest::AddPlayerTagRequest(AddPlayerTagRequest&& src) :
    PlayFabServerAddPlayerTagRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tagName{ std::move(src.m_tagName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

AddPlayerTagRequest::AddPlayerTagRequest(const PlayFabServerAddPlayerTagRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddPlayerTagRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TagName", m_tagName, tagName);
}

JsonValue AddPlayerTagRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAddPlayerTagRequest>(*this);
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest() :
    PlayFabServerAddSharedGroupMembersRequest{}
{
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(const AddSharedGroupMembersRequest& src) :
    PlayFabServerAddSharedGroupMembersRequest{ src },
    m_playFabIds{ src.m_playFabIds },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(AddSharedGroupMembersRequest&& src) :
    PlayFabServerAddSharedGroupMembersRequest{ src },
    m_playFabIds{ std::move(src.m_playFabIds) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

AddSharedGroupMembersRequest::AddSharedGroupMembersRequest(const PlayFabServerAddSharedGroupMembersRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerAddSharedGroupMembersRequest>(*this);
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest() :
    PlayFabServerAddUserVirtualCurrencyRequest{}
{
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src) :
    PlayFabServerAddUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest&& src) :
    PlayFabServerAddUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

AddUserVirtualCurrencyRequest::AddUserVirtualCurrencyRequest(const PlayFabServerAddUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue AddUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAddUserVirtualCurrencyRequest>(*this);
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg() :
    PlayFabServerAdvancedPushPlatformMsg{}
{
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg(const AdvancedPushPlatformMsg& src) :
    PlayFabServerAdvancedPushPlatformMsg{ src },
    m_gCMDataOnly{ src.m_gCMDataOnly },
    m_json{ src.m_json }
{
    gCMDataOnly = m_gCMDataOnly ? m_gCMDataOnly.operator->() : nullptr;
    json = m_json.empty() ? nullptr : m_json.data();
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg(AdvancedPushPlatformMsg&& src) :
    PlayFabServerAdvancedPushPlatformMsg{ src },
    m_gCMDataOnly{ std::move(src.m_gCMDataOnly) },
    m_json{ std::move(src.m_json) }
{
    gCMDataOnly = m_gCMDataOnly ? m_gCMDataOnly.operator->() : nullptr;
    json = m_json.empty() ? nullptr : m_json.data();
}

AdvancedPushPlatformMsg::AdvancedPushPlatformMsg(const PlayFabServerAdvancedPushPlatformMsg& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdvancedPushPlatformMsg::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GCMDataOnly", m_gCMDataOnly, gCMDataOnly);
    JsonUtils::ObjectGetMember(input, "Json", m_json, json);
    JsonUtils::ObjectGetMember(input, "Platform", platform);
}

JsonValue AdvancedPushPlatformMsg::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAdvancedPushPlatformMsg>(*this);
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest() :
    PlayFabServerAuthenticateSessionTicketRequest{}
{
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest(const AuthenticateSessionTicketRequest& src) :
    PlayFabServerAuthenticateSessionTicketRequest{ src },
    m_sessionTicket{ src.m_sessionTicket }
{
    sessionTicket = m_sessionTicket.empty() ? nullptr : m_sessionTicket.data();
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest(AuthenticateSessionTicketRequest&& src) :
    PlayFabServerAuthenticateSessionTicketRequest{ src },
    m_sessionTicket{ std::move(src.m_sessionTicket) }
{
    sessionTicket = m_sessionTicket.empty() ? nullptr : m_sessionTicket.data();
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest(const PlayFabServerAuthenticateSessionTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AuthenticateSessionTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SessionTicket", m_sessionTicket, sessionTicket);
}

JsonValue AuthenticateSessionTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAuthenticateSessionTicketRequest>(*this);
}

size_t AuthenticateSessionTicketRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerAuthenticateSessionTicketRequest) };
    serializedSize += (m_sessionTicket.size() + 1);
    return serializedSize;
}

void AuthenticateSessionTicketRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerAuthenticateSessionTicketRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerAuthenticateSessionTicketRequest);
    memcpy(stringBuffer, m_sessionTicket.data(), m_sessionTicket.size() + 1);
    serializedStruct->sessionTicket = stringBuffer;
    stringBuffer += m_sessionTicket.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult() :
    PlayFabServerAuthenticateSessionTicketResult{}
{
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult(const AuthenticateSessionTicketResult& src) :
    PlayFabServerAuthenticateSessionTicketResult{ src },
    m_isSessionTicketExpired{ src.m_isSessionTicketExpired },
    m_userInfo{ src.m_userInfo }
{
    isSessionTicketExpired = m_isSessionTicketExpired ? m_isSessionTicketExpired.operator->() : nullptr;
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult(AuthenticateSessionTicketResult&& src) :
    PlayFabServerAuthenticateSessionTicketResult{ src },
    m_isSessionTicketExpired{ std::move(src.m_isSessionTicketExpired) },
    m_userInfo{ std::move(src.m_userInfo) }
{
    isSessionTicketExpired = m_isSessionTicketExpired ? m_isSessionTicketExpired.operator->() : nullptr;
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult(const PlayFabServerAuthenticateSessionTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AuthenticateSessionTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsSessionTicketExpired", m_isSessionTicketExpired, isSessionTicketExpired);
    JsonUtils::ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
}

JsonValue AuthenticateSessionTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAuthenticateSessionTicketResult>(*this);
}

AwardSteamAchievementItem::AwardSteamAchievementItem() :
    PlayFabServerAwardSteamAchievementItem{}
{
}

AwardSteamAchievementItem::AwardSteamAchievementItem(const AwardSteamAchievementItem& src) :
    PlayFabServerAwardSteamAchievementItem{ src },
    m_achievementName{ src.m_achievementName },
    m_playFabId{ src.m_playFabId }
{
    achievementName = m_achievementName.empty() ? nullptr : m_achievementName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AwardSteamAchievementItem::AwardSteamAchievementItem(AwardSteamAchievementItem&& src) :
    PlayFabServerAwardSteamAchievementItem{ src },
    m_achievementName{ std::move(src.m_achievementName) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    achievementName = m_achievementName.empty() ? nullptr : m_achievementName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AwardSteamAchievementItem::AwardSteamAchievementItem(const PlayFabServerAwardSteamAchievementItem& src)
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
    return JsonUtils::ToJson<PlayFabServerAwardSteamAchievementItem>(*this);
}

size_t AwardSteamAchievementItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerAwardSteamAchievementItem) };
    serializedSize += (m_achievementName.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void AwardSteamAchievementItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerAwardSteamAchievementItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerAwardSteamAchievementItem);
    memcpy(stringBuffer, m_achievementName.data(), m_achievementName.size() + 1);
    serializedStruct->achievementName = stringBuffer;
    stringBuffer += m_achievementName.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest() :
    PlayFabServerAwardSteamAchievementRequest{}
{
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest(const AwardSteamAchievementRequest& src) :
    PlayFabServerAwardSteamAchievementRequest{ src },
    m_achievements{ src.m_achievements }
{
    achievements = m_achievements.Empty() ? nullptr : m_achievements.Data();
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest(AwardSteamAchievementRequest&& src) :
    PlayFabServerAwardSteamAchievementRequest{ src },
    m_achievements{ std::move(src.m_achievements) }
{
    achievements = m_achievements.Empty() ? nullptr : m_achievements.Data();
}

AwardSteamAchievementRequest::AwardSteamAchievementRequest(const PlayFabServerAwardSteamAchievementRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AwardSteamAchievementRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Achievements", m_achievements, achievements, achievementsCount);
}

JsonValue AwardSteamAchievementRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAwardSteamAchievementRequest>(*this);
}

AwardSteamAchievementResult::AwardSteamAchievementResult() :
    PlayFabServerAwardSteamAchievementResult{}
{
}

AwardSteamAchievementResult::AwardSteamAchievementResult(const AwardSteamAchievementResult& src) :
    PlayFabServerAwardSteamAchievementResult{ src },
    m_achievementResults{ src.m_achievementResults }
{
    achievementResults = m_achievementResults.Empty() ? nullptr : m_achievementResults.Data();
}

AwardSteamAchievementResult::AwardSteamAchievementResult(AwardSteamAchievementResult&& src) :
    PlayFabServerAwardSteamAchievementResult{ src },
    m_achievementResults{ std::move(src.m_achievementResults) }
{
    achievementResults = m_achievementResults.Empty() ? nullptr : m_achievementResults.Data();
}

AwardSteamAchievementResult::AwardSteamAchievementResult(const PlayFabServerAwardSteamAchievementResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AwardSteamAchievementResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AchievementResults", m_achievementResults, achievementResults, achievementResultsCount);
}

JsonValue AwardSteamAchievementResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerAwardSteamAchievementResult>(*this);
}

BanInfo::BanInfo() :
    PlayFabServerBanInfo{}
{
}

BanInfo::BanInfo(const BanInfo& src) :
    PlayFabServerBanInfo{ src },
    m_banId{ src.m_banId },
    m_created{ src.m_created },
    m_expires{ src.m_expires },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    banId = m_banId.empty() ? nullptr : m_banId.data();
    created = m_created ? m_created.operator->() : nullptr;
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanInfo::BanInfo(BanInfo&& src) :
    PlayFabServerBanInfo{ src },
    m_banId{ std::move(src.m_banId) },
    m_created{ std::move(src.m_created) },
    m_expires{ std::move(src.m_expires) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    banId = m_banId.empty() ? nullptr : m_banId.data();
    created = m_created ? m_created.operator->() : nullptr;
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanInfo::BanInfo(const PlayFabServerBanInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", active);
    JsonUtils::ObjectGetMember(input, "BanId", m_banId, banId);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires, true);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue BanInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerBanInfo>(*this);
}

BanRequest::BanRequest() :
    PlayFabServerBanRequest{}
{
}

BanRequest::BanRequest(const BanRequest& src) :
    PlayFabServerBanRequest{ src },
    m_durationInHours{ src.m_durationInHours },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    durationInHours = m_durationInHours ? m_durationInHours.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanRequest::BanRequest(BanRequest&& src) :
    PlayFabServerBanRequest{ src },
    m_durationInHours{ std::move(src.m_durationInHours) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    durationInHours = m_durationInHours ? m_durationInHours.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

BanRequest::BanRequest(const PlayFabServerBanRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DurationInHours", m_durationInHours, durationInHours);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue BanRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerBanRequest>(*this);
}

BanUsersRequest::BanUsersRequest() :
    PlayFabServerBanUsersRequest{}
{
}

BanUsersRequest::BanUsersRequest(const BanUsersRequest& src) :
    PlayFabServerBanUsersRequest{ src },
    m_bans{ src.m_bans },
    m_customTags{ src.m_customTags }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

BanUsersRequest::BanUsersRequest(BanUsersRequest&& src) :
    PlayFabServerBanUsersRequest{ src },
    m_bans{ std::move(src.m_bans) },
    m_customTags{ std::move(src.m_customTags) }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

BanUsersRequest::BanUsersRequest(const PlayFabServerBanUsersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanUsersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue BanUsersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerBanUsersRequest>(*this);
}

BanUsersResult::BanUsersResult() :
    PlayFabServerBanUsersResult{}
{
}

BanUsersResult::BanUsersResult(const BanUsersResult& src) :
    PlayFabServerBanUsersResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

BanUsersResult::BanUsersResult(BanUsersResult&& src) :
    PlayFabServerBanUsersResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

BanUsersResult::BanUsersResult(const PlayFabServerBanUsersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BanUsersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue BanUsersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerBanUsersResult>(*this);
}

CatalogItemBundleInfo::CatalogItemBundleInfo() :
    PlayFabServerCatalogItemBundleInfo{}
{
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const CatalogItemBundleInfo& src) :
    PlayFabServerCatalogItemBundleInfo{ src },
    m_bundledItems{ src.m_bundledItems },
    m_bundledResultTables{ src.m_bundledResultTables },
    m_bundledVirtualCurrencies{ src.m_bundledVirtualCurrencies }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(CatalogItemBundleInfo&& src) :
    PlayFabServerCatalogItemBundleInfo{ src },
    m_bundledItems{ std::move(src.m_bundledItems) },
    m_bundledResultTables{ std::move(src.m_bundledResultTables) },
    m_bundledVirtualCurrencies{ std::move(src.m_bundledVirtualCurrencies) }
{
    bundledItems = m_bundledItems.Empty() ? nullptr : m_bundledItems.Data();
    bundledResultTables = m_bundledResultTables.Empty() ? nullptr : m_bundledResultTables.Data();
    bundledVirtualCurrencies = m_bundledVirtualCurrencies.Empty() ? nullptr : m_bundledVirtualCurrencies.Data();
}

CatalogItemBundleInfo::CatalogItemBundleInfo(const PlayFabServerCatalogItemBundleInfo& src)
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
    return JsonUtils::ToJson<PlayFabServerCatalogItemBundleInfo>(*this);
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo() :
    PlayFabServerCatalogItemConsumableInfo{}
{
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src) :
    PlayFabServerCatalogItemConsumableInfo{ src },
    m_usageCount{ src.m_usageCount },
    m_usagePeriod{ src.m_usagePeriod },
    m_usagePeriodGroup{ src.m_usagePeriodGroup }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src) :
    PlayFabServerCatalogItemConsumableInfo{ src },
    m_usageCount{ std::move(src.m_usageCount) },
    m_usagePeriod{ std::move(src.m_usagePeriod) },
    m_usagePeriodGroup{ std::move(src.m_usagePeriodGroup) }
{
    usageCount = m_usageCount ? m_usageCount.operator->() : nullptr;
    usagePeriod = m_usagePeriod ? m_usagePeriod.operator->() : nullptr;
    usagePeriodGroup = m_usagePeriodGroup.empty() ? nullptr : m_usagePeriodGroup.data();
}

CatalogItemConsumableInfo::CatalogItemConsumableInfo(const PlayFabServerCatalogItemConsumableInfo& src)
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
    return JsonUtils::ToJson<PlayFabServerCatalogItemConsumableInfo>(*this);
}

CatalogItemContainerInfo::CatalogItemContainerInfo() :
    PlayFabServerCatalogItemContainerInfo{}
{
}

CatalogItemContainerInfo::CatalogItemContainerInfo(const CatalogItemContainerInfo& src) :
    PlayFabServerCatalogItemContainerInfo{ src },
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
    PlayFabServerCatalogItemContainerInfo{ src },
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

CatalogItemContainerInfo::CatalogItemContainerInfo(const PlayFabServerCatalogItemContainerInfo& src)
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
    return JsonUtils::ToJson<PlayFabServerCatalogItemContainerInfo>(*this);
}

CatalogItem::CatalogItem() :
    PlayFabServerCatalogItem{}
{
}

CatalogItem::CatalogItem(const CatalogItem& src) :
    PlayFabServerCatalogItem{ src },
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
    PlayFabServerCatalogItem{ src },
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

CatalogItem::CatalogItem(const PlayFabServerCatalogItem& src)
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
    return JsonUtils::ToJson<PlayFabServerCatalogItem>(*this);
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry() :
    PlayFabServerCharacterLeaderboardEntry{}
{
}

CharacterLeaderboardEntry::CharacterLeaderboardEntry(const CharacterLeaderboardEntry& src) :
    PlayFabServerCharacterLeaderboardEntry{ src },
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
    PlayFabServerCharacterLeaderboardEntry{ src },
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

CharacterLeaderboardEntry::CharacterLeaderboardEntry(const PlayFabServerCharacterLeaderboardEntry& src)
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
    return JsonUtils::ToJson<PlayFabServerCharacterLeaderboardEntry>(*this);
}

size_t CharacterLeaderboardEntry::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerCharacterLeaderboardEntry) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterName.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    serializedSize += (m_displayName.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void CharacterLeaderboardEntry::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerCharacterLeaderboardEntry{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerCharacterLeaderboardEntry);
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

ConsumeItemRequest::ConsumeItemRequest() :
    PlayFabServerConsumeItemRequest{}
{
}

ConsumeItemRequest::ConsumeItemRequest(const ConsumeItemRequest& src) :
    PlayFabServerConsumeItemRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ConsumeItemRequest::ConsumeItemRequest(ConsumeItemRequest&& src) :
    PlayFabServerConsumeItemRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ConsumeItemRequest::ConsumeItemRequest(const PlayFabServerConsumeItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConsumeItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ConsumeCount", consumeCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ConsumeItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerConsumeItemRequest>(*this);
}

ConsumeItemResult::ConsumeItemResult() :
    PlayFabServerConsumeItemResult{}
{
}

ConsumeItemResult::ConsumeItemResult(const ConsumeItemResult& src) :
    PlayFabServerConsumeItemResult{ src },
    m_itemInstanceId{ src.m_itemInstanceId }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemResult::ConsumeItemResult(ConsumeItemResult&& src) :
    PlayFabServerConsumeItemResult{ src },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ConsumeItemResult::ConsumeItemResult(const PlayFabServerConsumeItemResult& src)
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
    return JsonUtils::ToJson<PlayFabServerConsumeItemResult>(*this);
}

size_t ConsumeItemResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerConsumeItemResult) };
    serializedSize += (m_itemInstanceId.size() + 1);
    return serializedSize;
}

void ConsumeItemResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerConsumeItemResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerConsumeItemResult);
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ContactEmailInfo::ContactEmailInfo() :
    PlayFabServerContactEmailInfo{}
{
}

ContactEmailInfo::ContactEmailInfo(const ContactEmailInfo& src) :
    PlayFabServerContactEmailInfo{ src },
    m_emailAddress{ src.m_emailAddress },
    m_name{ src.m_name },
    m_verificationStatus{ src.m_verificationStatus }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfo::ContactEmailInfo(ContactEmailInfo&& src) :
    PlayFabServerContactEmailInfo{ src },
    m_emailAddress{ std::move(src.m_emailAddress) },
    m_name{ std::move(src.m_name) },
    m_verificationStatus{ std::move(src.m_verificationStatus) }
{
    emailAddress = m_emailAddress.empty() ? nullptr : m_emailAddress.data();
    name = m_name.empty() ? nullptr : m_name.data();
    verificationStatus = m_verificationStatus ? m_verificationStatus.operator->() : nullptr;
}

ContactEmailInfo::ContactEmailInfo(const PlayFabServerContactEmailInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContactEmailInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EmailAddress", m_emailAddress, emailAddress);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "VerificationStatus", m_verificationStatus, verificationStatus);
}

JsonValue ContactEmailInfo::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerContactEmailInfo>(*this);
}

CreateSharedGroupRequest::CreateSharedGroupRequest() :
    PlayFabServerCreateSharedGroupRequest{}
{
}

CreateSharedGroupRequest::CreateSharedGroupRequest(const CreateSharedGroupRequest& src) :
    PlayFabServerCreateSharedGroupRequest{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupRequest::CreateSharedGroupRequest(CreateSharedGroupRequest&& src) :
    PlayFabServerCreateSharedGroupRequest{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupRequest::CreateSharedGroupRequest(const PlayFabServerCreateSharedGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSharedGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue CreateSharedGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerCreateSharedGroupRequest>(*this);
}

size_t CreateSharedGroupRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerCreateSharedGroupRequest) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void CreateSharedGroupRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerCreateSharedGroupRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerCreateSharedGroupRequest);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateSharedGroupResult::CreateSharedGroupResult() :
    PlayFabServerCreateSharedGroupResult{}
{
}

CreateSharedGroupResult::CreateSharedGroupResult(const CreateSharedGroupResult& src) :
    PlayFabServerCreateSharedGroupResult{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupResult::CreateSharedGroupResult(CreateSharedGroupResult&& src) :
    PlayFabServerCreateSharedGroupResult{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

CreateSharedGroupResult::CreateSharedGroupResult(const PlayFabServerCreateSharedGroupResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateSharedGroupResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue CreateSharedGroupResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerCreateSharedGroupResult>(*this);
}

size_t CreateSharedGroupResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerCreateSharedGroupResult) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void CreateSharedGroupResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerCreateSharedGroupResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerCreateSharedGroupResult);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest() :
    PlayFabServerDeleteCharacterFromUserRequest{}
{
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest(const DeleteCharacterFromUserRequest& src) :
    PlayFabServerDeleteCharacterFromUserRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest(DeleteCharacterFromUserRequest&& src) :
    PlayFabServerDeleteCharacterFromUserRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeleteCharacterFromUserRequest::DeleteCharacterFromUserRequest(const PlayFabServerDeleteCharacterFromUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteCharacterFromUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "SaveCharacterInventory", saveCharacterInventory);
}

JsonValue DeleteCharacterFromUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerDeleteCharacterFromUserRequest>(*this);
}

DeletePlayerRequest::DeletePlayerRequest() :
    PlayFabServerDeletePlayerRequest{}
{
}

DeletePlayerRequest::DeletePlayerRequest(const DeletePlayerRequest& src) :
    PlayFabServerDeletePlayerRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeletePlayerRequest::DeletePlayerRequest(DeletePlayerRequest&& src) :
    PlayFabServerDeletePlayerRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

DeletePlayerRequest::DeletePlayerRequest(const PlayFabServerDeletePlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue DeletePlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerDeletePlayerRequest>(*this);
}

size_t DeletePlayerRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerDeletePlayerRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void DeletePlayerRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerDeletePlayerRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerDeletePlayerRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest() :
    PlayFabServerDeletePushNotificationTemplateRequest{}
{
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest(const DeletePushNotificationTemplateRequest& src) :
    PlayFabServerDeletePushNotificationTemplateRequest{ src },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest(DeletePushNotificationTemplateRequest&& src) :
    PlayFabServerDeletePushNotificationTemplateRequest{ src },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

DeletePushNotificationTemplateRequest::DeletePushNotificationTemplateRequest(const PlayFabServerDeletePushNotificationTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePushNotificationTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
}

JsonValue DeletePushNotificationTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerDeletePushNotificationTemplateRequest>(*this);
}

size_t DeletePushNotificationTemplateRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerDeletePushNotificationTemplateRequest) };
    serializedSize += (m_pushNotificationTemplateId.size() + 1);
    return serializedSize;
}

void DeletePushNotificationTemplateRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerDeletePushNotificationTemplateRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerDeletePushNotificationTemplateRequest);
    memcpy(stringBuffer, m_pushNotificationTemplateId.data(), m_pushNotificationTemplateId.size() + 1);
    serializedStruct->pushNotificationTemplateId = stringBuffer;
    stringBuffer += m_pushNotificationTemplateId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest() :
    PlayFabServerDeleteSharedGroupRequest{}
{
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest(const DeleteSharedGroupRequest& src) :
    PlayFabServerDeleteSharedGroupRequest{ src },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest(DeleteSharedGroupRequest&& src) :
    PlayFabServerDeleteSharedGroupRequest{ src },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

DeleteSharedGroupRequest::DeleteSharedGroupRequest(const PlayFabServerDeleteSharedGroupRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteSharedGroupRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedGroupId", m_sharedGroupId, sharedGroupId);
}

JsonValue DeleteSharedGroupRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerDeleteSharedGroupRequest>(*this);
}

size_t DeleteSharedGroupRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerDeleteSharedGroupRequest) };
    serializedSize += (m_sharedGroupId.size() + 1);
    return serializedSize;
}

void DeleteSharedGroupRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerDeleteSharedGroupRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerDeleteSharedGroupRequest);
    memcpy(stringBuffer, m_sharedGroupId.data(), m_sharedGroupId.size() + 1);
    serializedStruct->sharedGroupId = stringBuffer;
    stringBuffer += m_sharedGroupId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeregisterGameRequest::DeregisterGameRequest() :
    PlayFabServerDeregisterGameRequest{}
{
}

DeregisterGameRequest::DeregisterGameRequest(const DeregisterGameRequest& src) :
    PlayFabServerDeregisterGameRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

DeregisterGameRequest::DeregisterGameRequest(DeregisterGameRequest&& src) :
    PlayFabServerDeregisterGameRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

DeregisterGameRequest::DeregisterGameRequest(const PlayFabServerDeregisterGameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeregisterGameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue DeregisterGameRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerDeregisterGameRequest>(*this);
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest() :
    PlayFabServerEvaluateRandomResultTableRequest{}
{
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest(const EvaluateRandomResultTableRequest& src) :
    PlayFabServerEvaluateRandomResultTableRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_tableId{ src.m_tableId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest(EvaluateRandomResultTableRequest&& src) :
    PlayFabServerEvaluateRandomResultTableRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_tableId{ std::move(src.m_tableId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

EvaluateRandomResultTableRequest::EvaluateRandomResultTableRequest(const PlayFabServerEvaluateRandomResultTableRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EvaluateRandomResultTableRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "TableId", m_tableId, tableId);
}

JsonValue EvaluateRandomResultTableRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerEvaluateRandomResultTableRequest>(*this);
}

size_t EvaluateRandomResultTableRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerEvaluateRandomResultTableRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    serializedSize += (m_tableId.size() + 1);
    return serializedSize;
}

void EvaluateRandomResultTableRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerEvaluateRandomResultTableRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerEvaluateRandomResultTableRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    memcpy(stringBuffer, m_tableId.data(), m_tableId.size() + 1);
    serializedStruct->tableId = stringBuffer;
    stringBuffer += m_tableId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult() :
    PlayFabServerEvaluateRandomResultTableResult{}
{
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult(const EvaluateRandomResultTableResult& src) :
    PlayFabServerEvaluateRandomResultTableResult{ src },
    m_resultItemId{ src.m_resultItemId }
{
    resultItemId = m_resultItemId.empty() ? nullptr : m_resultItemId.data();
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult(EvaluateRandomResultTableResult&& src) :
    PlayFabServerEvaluateRandomResultTableResult{ src },
    m_resultItemId{ std::move(src.m_resultItemId) }
{
    resultItemId = m_resultItemId.empty() ? nullptr : m_resultItemId.data();
}

EvaluateRandomResultTableResult::EvaluateRandomResultTableResult(const PlayFabServerEvaluateRandomResultTableResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EvaluateRandomResultTableResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ResultItemId", m_resultItemId, resultItemId);
}

JsonValue EvaluateRandomResultTableResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerEvaluateRandomResultTableResult>(*this);
}

size_t EvaluateRandomResultTableResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerEvaluateRandomResultTableResult) };
    serializedSize += (m_resultItemId.size() + 1);
    return serializedSize;
}

void EvaluateRandomResultTableResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerEvaluateRandomResultTableResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerEvaluateRandomResultTableResult);
    memcpy(stringBuffer, m_resultItemId.data(), m_resultItemId.size() + 1);
    serializedStruct->resultItemId = stringBuffer;
    stringBuffer += m_resultItemId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ScriptExecutionError::ScriptExecutionError() :
    PlayFabServerScriptExecutionError{}
{
}

ScriptExecutionError::ScriptExecutionError(const ScriptExecutionError& src) :
    PlayFabServerScriptExecutionError{ src },
    m_error{ src.m_error },
    m_message{ src.m_message },
    m_stackTrace{ src.m_stackTrace }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(ScriptExecutionError&& src) :
    PlayFabServerScriptExecutionError{ src },
    m_error{ std::move(src.m_error) },
    m_message{ std::move(src.m_message) },
    m_stackTrace{ std::move(src.m_stackTrace) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    message = m_message.empty() ? nullptr : m_message.data();
    stackTrace = m_stackTrace.empty() ? nullptr : m_stackTrace.data();
}

ScriptExecutionError::ScriptExecutionError(const PlayFabServerScriptExecutionError& src)
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
    return JsonUtils::ToJson<PlayFabServerScriptExecutionError>(*this);
}

size_t ScriptExecutionError::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerScriptExecutionError) };
    serializedSize += (m_error.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_stackTrace.size() + 1);
    return serializedSize;
}

void ScriptExecutionError::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerScriptExecutionError{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerScriptExecutionError);
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
    PlayFabServerLogStatement{}
{
}

LogStatement::LogStatement(const LogStatement& src) :
    PlayFabServerLogStatement{ src },
    m_data{ src.m_data },
    m_level{ src.m_level },
    m_message{ src.m_message }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(LogStatement&& src) :
    PlayFabServerLogStatement{ src },
    m_data{ std::move(src.m_data) },
    m_level{ std::move(src.m_level) },
    m_message{ std::move(src.m_message) }
{
    data.stringValue = m_data.StringValue();
    level = m_level.empty() ? nullptr : m_level.data();
    message = m_message.empty() ? nullptr : m_message.data();
}

LogStatement::LogStatement(const PlayFabServerLogStatement& src)
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
    return JsonUtils::ToJson<PlayFabServerLogStatement>(*this);
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult() :
    PlayFabServerExecuteCloudScriptResult{}
{
}

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src) :
    PlayFabServerExecuteCloudScriptResult{ src },
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
    PlayFabServerExecuteCloudScriptResult{ src },
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

ExecuteCloudScriptResult::ExecuteCloudScriptResult(const PlayFabServerExecuteCloudScriptResult& src)
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
    return JsonUtils::ToJson<PlayFabServerExecuteCloudScriptResult>(*this);
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest() :
    PlayFabServerExecuteCloudScriptServerRequest{}
{
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest(const ExecuteCloudScriptServerRequest& src) :
    PlayFabServerExecuteCloudScriptServerRequest{ src },
    m_customTags{ src.m_customTags },
    m_functionName{ src.m_functionName },
    m_functionParameter{ src.m_functionParameter },
    m_generatePlayStreamEvent{ src.m_generatePlayStreamEvent },
    m_playFabId{ src.m_playFabId },
    m_revisionSelection{ src.m_revisionSelection },
    m_specificRevision{ src.m_specificRevision }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest(ExecuteCloudScriptServerRequest&& src) :
    PlayFabServerExecuteCloudScriptServerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_functionName{ std::move(src.m_functionName) },
    m_functionParameter{ std::move(src.m_functionParameter) },
    m_generatePlayStreamEvent{ std::move(src.m_generatePlayStreamEvent) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_revisionSelection{ std::move(src.m_revisionSelection) },
    m_specificRevision{ std::move(src.m_specificRevision) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    functionName = m_functionName.empty() ? nullptr : m_functionName.data();
    functionParameter.stringValue = m_functionParameter.StringValue();
    generatePlayStreamEvent = m_generatePlayStreamEvent ? m_generatePlayStreamEvent.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    revisionSelection = m_revisionSelection ? m_revisionSelection.operator->() : nullptr;
    specificRevision = m_specificRevision ? m_specificRevision.operator->() : nullptr;
}

ExecuteCloudScriptServerRequest::ExecuteCloudScriptServerRequest(const PlayFabServerExecuteCloudScriptServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ExecuteCloudScriptServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FunctionName", m_functionName, functionName);
    JsonUtils::ObjectGetMember(input, "FunctionParameter", m_functionParameter, functionParameter);
    JsonUtils::ObjectGetMember(input, "GeneratePlayStreamEvent", m_generatePlayStreamEvent, generatePlayStreamEvent);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "RevisionSelection", m_revisionSelection, revisionSelection);
    JsonUtils::ObjectGetMember(input, "SpecificRevision", m_specificRevision, specificRevision);
}

JsonValue ExecuteCloudScriptServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerExecuteCloudScriptServerRequest>(*this);
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair() :
    PlayFabServerFacebookInstantGamesPlayFabIdPair{}
{
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(const FacebookInstantGamesPlayFabIdPair& src) :
    PlayFabServerFacebookInstantGamesPlayFabIdPair{ src },
    m_facebookInstantGamesId{ src.m_facebookInstantGamesId },
    m_playFabId{ src.m_playFabId }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(FacebookInstantGamesPlayFabIdPair&& src) :
    PlayFabServerFacebookInstantGamesPlayFabIdPair{ src },
    m_facebookInstantGamesId{ std::move(src.m_facebookInstantGamesId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    facebookInstantGamesId = m_facebookInstantGamesId.empty() ? nullptr : m_facebookInstantGamesId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookInstantGamesPlayFabIdPair::FacebookInstantGamesPlayFabIdPair(const PlayFabServerFacebookInstantGamesPlayFabIdPair& src)
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
    return JsonUtils::ToJson<PlayFabServerFacebookInstantGamesPlayFabIdPair>(*this);
}

size_t FacebookInstantGamesPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerFacebookInstantGamesPlayFabIdPair) };
    serializedSize += (m_facebookInstantGamesId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void FacebookInstantGamesPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerFacebookInstantGamesPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerFacebookInstantGamesPlayFabIdPair);
    memcpy(stringBuffer, m_facebookInstantGamesId.data(), m_facebookInstantGamesId.size() + 1);
    serializedStruct->facebookInstantGamesId = stringBuffer;
    stringBuffer += m_facebookInstantGamesId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair() :
    PlayFabServerFacebookPlayFabIdPair{}
{
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(const FacebookPlayFabIdPair& src) :
    PlayFabServerFacebookPlayFabIdPair{ src },
    m_facebookId{ src.m_facebookId },
    m_playFabId{ src.m_playFabId }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(FacebookPlayFabIdPair&& src) :
    PlayFabServerFacebookPlayFabIdPair{ src },
    m_facebookId{ std::move(src.m_facebookId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    facebookId = m_facebookId.empty() ? nullptr : m_facebookId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

FacebookPlayFabIdPair::FacebookPlayFabIdPair(const PlayFabServerFacebookPlayFabIdPair& src)
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
    return JsonUtils::ToJson<PlayFabServerFacebookPlayFabIdPair>(*this);
}

size_t FacebookPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerFacebookPlayFabIdPair) };
    serializedSize += (m_facebookId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void FacebookPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerFacebookPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerFacebookPlayFabIdPair);
    memcpy(stringBuffer, m_facebookId.data(), m_facebookId.size() + 1);
    serializedStruct->facebookId = stringBuffer;
    stringBuffer += m_facebookId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

FriendInfo::FriendInfo() :
    PlayFabServerFriendInfo{}
{
}

FriendInfo::FriendInfo(const FriendInfo& src) :
    PlayFabServerFriendInfo{ src },
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
    PlayFabServerFriendInfo{ src },
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

FriendInfo::FriendInfo(const PlayFabServerFriendInfo& src)
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
    return JsonUtils::ToJson<PlayFabServerFriendInfo>(*this);
}

GenericPlayFabIdPair::GenericPlayFabIdPair() :
    PlayFabServerGenericPlayFabIdPair{}
{
}

GenericPlayFabIdPair::GenericPlayFabIdPair(const GenericPlayFabIdPair& src) :
    PlayFabServerGenericPlayFabIdPair{ src },
    m_genericId{ src.m_genericId },
    m_playFabId{ src.m_playFabId }
{
    genericId = m_genericId ? m_genericId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GenericPlayFabIdPair::GenericPlayFabIdPair(GenericPlayFabIdPair&& src) :
    PlayFabServerGenericPlayFabIdPair{ src },
    m_genericId{ std::move(src.m_genericId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    genericId = m_genericId ? m_genericId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GenericPlayFabIdPair::GenericPlayFabIdPair(const PlayFabServerGenericPlayFabIdPair& src)
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
    return JsonUtils::ToJson<PlayFabServerGenericPlayFabIdPair>(*this);
}

GetSegmentResult::GetSegmentResult() :
    PlayFabServerGetSegmentResult{}
{
}

GetSegmentResult::GetSegmentResult(const GetSegmentResult& src) :
    PlayFabServerGetSegmentResult{ src },
    m_aBTestParent{ src.m_aBTestParent },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(GetSegmentResult&& src) :
    PlayFabServerGetSegmentResult{ src },
    m_aBTestParent{ std::move(src.m_aBTestParent) },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    aBTestParent = m_aBTestParent.empty() ? nullptr : m_aBTestParent.data();
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GetSegmentResult::GetSegmentResult(const PlayFabServerGetSegmentResult& src)
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
    return JsonUtils::ToJson<PlayFabServerGetSegmentResult>(*this);
}

size_t GetSegmentResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetSegmentResult) };
    serializedSize += (m_aBTestParent.size() + 1);
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GetSegmentResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetSegmentResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetSegmentResult);
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

GetAllSegmentsResult::GetAllSegmentsResult() :
    PlayFabServerGetAllSegmentsResult{}
{
}

GetAllSegmentsResult::GetAllSegmentsResult(const GetAllSegmentsResult& src) :
    PlayFabServerGetAllSegmentsResult{ src },
    m_segments{ src.m_segments }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetAllSegmentsResult::GetAllSegmentsResult(GetAllSegmentsResult&& src) :
    PlayFabServerGetAllSegmentsResult{ src },
    m_segments{ std::move(src.m_segments) }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetAllSegmentsResult::GetAllSegmentsResult(const PlayFabServerGetAllSegmentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAllSegmentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetAllSegmentsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetAllSegmentsResult>(*this);
}

GetCatalogItemsRequest::GetCatalogItemsRequest() :
    PlayFabServerGetCatalogItemsRequest{}
{
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const GetCatalogItemsRequest& src) :
    PlayFabServerGetCatalogItemsRequest{ src },
    m_catalogVersion{ src.m_catalogVersion }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(GetCatalogItemsRequest&& src) :
    PlayFabServerGetCatalogItemsRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
}

GetCatalogItemsRequest::GetCatalogItemsRequest(const PlayFabServerGetCatalogItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
}

JsonValue GetCatalogItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCatalogItemsRequest>(*this);
}

size_t GetCatalogItemsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetCatalogItemsRequest) };
    serializedSize += (m_catalogVersion.size() + 1);
    return serializedSize;
}

void GetCatalogItemsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetCatalogItemsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetCatalogItemsRequest);
    memcpy(stringBuffer, m_catalogVersion.data(), m_catalogVersion.size() + 1);
    serializedStruct->catalogVersion = stringBuffer;
    stringBuffer += m_catalogVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCatalogItemsResult::GetCatalogItemsResult() :
    PlayFabServerGetCatalogItemsResult{}
{
}

GetCatalogItemsResult::GetCatalogItemsResult(const GetCatalogItemsResult& src) :
    PlayFabServerGetCatalogItemsResult{ src },
    m_catalog{ src.m_catalog }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(GetCatalogItemsResult&& src) :
    PlayFabServerGetCatalogItemsResult{ src },
    m_catalog{ std::move(src.m_catalog) }
{
    catalog = m_catalog.Empty() ? nullptr : m_catalog.Data();
}

GetCatalogItemsResult::GetCatalogItemsResult(const PlayFabServerGetCatalogItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCatalogItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Catalog", m_catalog, catalog, catalogCount);
}

JsonValue GetCatalogItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCatalogItemsResult>(*this);
}

GetCharacterDataRequest::GetCharacterDataRequest() :
    PlayFabServerGetCharacterDataRequest{}
{
}

GetCharacterDataRequest::GetCharacterDataRequest(const GetCharacterDataRequest& src) :
    PlayFabServerGetCharacterDataRequest{ src },
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
    PlayFabServerGetCharacterDataRequest{ src },
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

GetCharacterDataRequest::GetCharacterDataRequest(const PlayFabServerGetCharacterDataRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetCharacterDataRequest>(*this);
}

GetCharacterDataResult::GetCharacterDataResult() :
    PlayFabServerGetCharacterDataResult{}
{
}

GetCharacterDataResult::GetCharacterDataResult(const GetCharacterDataResult& src) :
    PlayFabServerGetCharacterDataResult{ src },
    m_characterId{ src.m_characterId },
    m_data{ src.m_data },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterDataResult::GetCharacterDataResult(GetCharacterDataResult&& src) :
    PlayFabServerGetCharacterDataResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_data{ std::move(src.m_data) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterDataResult::GetCharacterDataResult(const PlayFabServerGetCharacterDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetCharacterDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCharacterDataResult>(*this);
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest() :
    PlayFabServerGetCharacterInventoryRequest{}
{
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest(const GetCharacterInventoryRequest& src) :
    PlayFabServerGetCharacterInventoryRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest(GetCharacterInventoryRequest&& src) :
    PlayFabServerGetCharacterInventoryRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterInventoryRequest::GetCharacterInventoryRequest(const PlayFabServerGetCharacterInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetCharacterInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCharacterInventoryRequest>(*this);
}

GetCharacterInventoryResult::GetCharacterInventoryResult() :
    PlayFabServerGetCharacterInventoryResult{}
{
}

GetCharacterInventoryResult::GetCharacterInventoryResult(const GetCharacterInventoryResult& src) :
    PlayFabServerGetCharacterInventoryResult{ src },
    m_characterId{ src.m_characterId },
    m_inventory{ src.m_inventory },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetCharacterInventoryResult::GetCharacterInventoryResult(GetCharacterInventoryResult&& src) :
    PlayFabServerGetCharacterInventoryResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_inventory{ std::move(src.m_inventory) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetCharacterInventoryResult::GetCharacterInventoryResult(const PlayFabServerGetCharacterInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue GetCharacterInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCharacterInventoryResult>(*this);
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest() :
    PlayFabServerGetCharacterLeaderboardRequest{}
{
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(const GetCharacterLeaderboardRequest& src) :
    PlayFabServerGetCharacterLeaderboardRequest{ src },
    m_characterType{ src.m_characterType },
    m_statisticName{ src.m_statisticName }
{
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest&& src) :
    PlayFabServerGetCharacterLeaderboardRequest{ src },
    m_characterType{ std::move(src.m_characterType) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetCharacterLeaderboardRequest::GetCharacterLeaderboardRequest(const PlayFabServerGetCharacterLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetCharacterLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCharacterLeaderboardRequest>(*this);
}

size_t GetCharacterLeaderboardRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetCharacterLeaderboardRequest) };
    serializedSize += (m_characterType.size() + 1);
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void GetCharacterLeaderboardRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetCharacterLeaderboardRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetCharacterLeaderboardRequest);
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult() :
    PlayFabServerGetCharacterLeaderboardResult{}
{
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(const GetCharacterLeaderboardResult& src) :
    PlayFabServerGetCharacterLeaderboardResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(GetCharacterLeaderboardResult&& src) :
    PlayFabServerGetCharacterLeaderboardResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetCharacterLeaderboardResult::GetCharacterLeaderboardResult(const PlayFabServerGetCharacterLeaderboardResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterLeaderboardResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetCharacterLeaderboardResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCharacterLeaderboardResult>(*this);
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest() :
    PlayFabServerGetCharacterStatisticsRequest{}
{
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest(const GetCharacterStatisticsRequest& src) :
    PlayFabServerGetCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest(GetCharacterStatisticsRequest&& src) :
    PlayFabServerGetCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterStatisticsRequest::GetCharacterStatisticsRequest(const PlayFabServerGetCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCharacterStatisticsRequest>(*this);
}

size_t GetCharacterStatisticsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetCharacterStatisticsRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetCharacterStatisticsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetCharacterStatisticsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetCharacterStatisticsRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult() :
    PlayFabServerGetCharacterStatisticsResult{}
{
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult(const GetCharacterStatisticsResult& src) :
    PlayFabServerGetCharacterStatisticsResult{ src },
    m_characterId{ src.m_characterId },
    m_characterStatistics{ src.m_characterStatistics },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult(GetCharacterStatisticsResult&& src) :
    PlayFabServerGetCharacterStatisticsResult{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterStatistics{ std::move(src.m_characterStatistics) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetCharacterStatisticsResult::GetCharacterStatisticsResult(const PlayFabServerGetCharacterStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetCharacterStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetCharacterStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetCharacterStatisticsResult>(*this);
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest() :
    PlayFabServerGetContentDownloadUrlRequest{}
{
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(const GetContentDownloadUrlRequest& src) :
    PlayFabServerGetContentDownloadUrlRequest{ src },
    m_httpMethod{ src.m_httpMethod },
    m_key{ src.m_key },
    m_thruCDN{ src.m_thruCDN }
{
    httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
    key = m_key.empty() ? nullptr : m_key.data();
    thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(GetContentDownloadUrlRequest&& src) :
    PlayFabServerGetContentDownloadUrlRequest{ src },
    m_httpMethod{ std::move(src.m_httpMethod) },
    m_key{ std::move(src.m_key) },
    m_thruCDN{ std::move(src.m_thruCDN) }
{
    httpMethod = m_httpMethod.empty() ? nullptr : m_httpMethod.data();
    key = m_key.empty() ? nullptr : m_key.data();
    thruCDN = m_thruCDN ? m_thruCDN.operator->() : nullptr;
}

GetContentDownloadUrlRequest::GetContentDownloadUrlRequest(const PlayFabServerGetContentDownloadUrlRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetContentDownloadUrlRequest>(*this);
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult() :
    PlayFabServerGetContentDownloadUrlResult{}
{
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(const GetContentDownloadUrlResult& src) :
    PlayFabServerGetContentDownloadUrlResult{ src },
    m_uRL{ src.m_uRL }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(GetContentDownloadUrlResult&& src) :
    PlayFabServerGetContentDownloadUrlResult{ src },
    m_uRL{ std::move(src.m_uRL) }
{
    uRL = m_uRL.empty() ? nullptr : m_uRL.data();
}

GetContentDownloadUrlResult::GetContentDownloadUrlResult(const PlayFabServerGetContentDownloadUrlResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContentDownloadUrlResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "URL", m_uRL, uRL);
}

JsonValue GetContentDownloadUrlResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetContentDownloadUrlResult>(*this);
}

size_t GetContentDownloadUrlResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetContentDownloadUrlResult) };
    serializedSize += (m_uRL.size() + 1);
    return serializedSize;
}

void GetContentDownloadUrlResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetContentDownloadUrlResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetContentDownloadUrlResult);
    memcpy(stringBuffer, m_uRL.data(), m_uRL.size() + 1);
    serializedStruct->uRL = stringBuffer;
    stringBuffer += m_uRL.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayerProfileViewConstraints::PlayerProfileViewConstraints() :
    PlayFabServerPlayerProfileViewConstraints{}
{
}


PlayerProfileViewConstraints::PlayerProfileViewConstraints(const PlayFabServerPlayerProfileViewConstraints& src)
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
    return JsonUtils::ToJson<PlayFabServerPlayerProfileViewConstraints>(*this);
}

size_t PlayerProfileViewConstraints::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerPlayerProfileViewConstraints) };
    return serializedSize;
}

void PlayerProfileViewConstraints::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerPlayerProfileViewConstraints{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerPlayerProfileViewConstraints);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest() :
    PlayFabServerGetFriendLeaderboardRequest{}
{
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest(const GetFriendLeaderboardRequest& src) :
    PlayFabServerGetFriendLeaderboardRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest(GetFriendLeaderboardRequest&& src) :
    PlayFabServerGetFriendLeaderboardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardRequest::GetFriendLeaderboardRequest(const PlayFabServerGetFriendLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue GetFriendLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetFriendLeaderboardRequest>(*this);
}

GetFriendsListRequest::GetFriendsListRequest() :
    PlayFabServerGetFriendsListRequest{}
{
}

GetFriendsListRequest::GetFriendsListRequest(const GetFriendsListRequest& src) :
    PlayFabServerGetFriendsListRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendsListRequest::GetFriendsListRequest(GetFriendsListRequest&& src) :
    PlayFabServerGetFriendsListRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendsListRequest::GetFriendsListRequest(const PlayFabServerGetFriendsListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendsListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue GetFriendsListRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetFriendsListRequest>(*this);
}

GetFriendsListResult::GetFriendsListResult() :
    PlayFabServerGetFriendsListResult{}
{
}

GetFriendsListResult::GetFriendsListResult(const GetFriendsListResult& src) :
    PlayFabServerGetFriendsListResult{ src },
    m_friends{ src.m_friends }
{
    friends = m_friends.Empty() ? nullptr : m_friends.Data();
}

GetFriendsListResult::GetFriendsListResult(GetFriendsListResult&& src) :
    PlayFabServerGetFriendsListResult{ src },
    m_friends{ std::move(src.m_friends) }
{
    friends = m_friends.Empty() ? nullptr : m_friends.Data();
}

GetFriendsListResult::GetFriendsListResult(const PlayFabServerGetFriendsListResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendsListResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Friends", m_friends, friends, friendsCount);
}

JsonValue GetFriendsListResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetFriendsListResult>(*this);
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest() :
    PlayFabServerGetLeaderboardAroundCharacterRequest{}
{
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest(const GetLeaderboardAroundCharacterRequest& src) :
    PlayFabServerGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterType{ src.m_characterType },
    m_playFabId{ src.m_playFabId },
    m_statisticName{ src.m_statisticName }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest(GetLeaderboardAroundCharacterRequest&& src) :
    PlayFabServerGetLeaderboardAroundCharacterRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterType{ std::move(src.m_characterType) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardAroundCharacterRequest::GetLeaderboardAroundCharacterRequest(const PlayFabServerGetLeaderboardAroundCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetLeaderboardAroundCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundCharacterRequest>(*this);
}

size_t GetLeaderboardAroundCharacterRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetLeaderboardAroundCharacterRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_characterType.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void GetLeaderboardAroundCharacterRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetLeaderboardAroundCharacterRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetLeaderboardAroundCharacterRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_characterType.data(), m_characterType.size() + 1);
    serializedStruct->characterType = stringBuffer;
    stringBuffer += m_characterType.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult() :
    PlayFabServerGetLeaderboardAroundCharacterResult{}
{
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(const GetLeaderboardAroundCharacterResult& src) :
    PlayFabServerGetLeaderboardAroundCharacterResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(GetLeaderboardAroundCharacterResult&& src) :
    PlayFabServerGetLeaderboardAroundCharacterResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardAroundCharacterResult::GetLeaderboardAroundCharacterResult(const PlayFabServerGetLeaderboardAroundCharacterResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundCharacterResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetLeaderboardAroundCharacterResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundCharacterResult>(*this);
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest() :
    PlayFabServerGetLeaderboardAroundUserRequest{}
{
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest(const GetLeaderboardAroundUserRequest& src) :
    PlayFabServerGetLeaderboardAroundUserRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest(GetLeaderboardAroundUserRequest&& src) :
    PlayFabServerGetLeaderboardAroundUserRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest(const PlayFabServerGetLeaderboardAroundUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetLeaderboardAroundUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundUserRequest>(*this);
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry() :
    PlayFabServerPlayerLeaderboardEntry{}
{
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src) :
    PlayFabServerPlayerLeaderboardEntry{ src },
    m_displayName{ src.m_displayName },
    m_playFabId{ src.m_playFabId },
    m_profile{ src.m_profile }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profile = m_profile ? m_profile.operator->() : nullptr;
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(PlayerLeaderboardEntry&& src) :
    PlayFabServerPlayerLeaderboardEntry{ src },
    m_displayName{ std::move(src.m_displayName) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profile{ std::move(src.m_profile) }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profile = m_profile ? m_profile.operator->() : nullptr;
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(const PlayFabServerPlayerLeaderboardEntry& src)
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
    return JsonUtils::ToJson<PlayFabServerPlayerLeaderboardEntry>(*this);
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult() :
    PlayFabServerGetLeaderboardAroundUserResult{}
{
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult(const GetLeaderboardAroundUserResult& src) :
    PlayFabServerGetLeaderboardAroundUserResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult(GetLeaderboardAroundUserResult&& src) :
    PlayFabServerGetLeaderboardAroundUserResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult(const PlayFabServerGetLeaderboardAroundUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetLeaderboardAroundUserResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardAroundUserResult>(*this);
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest() :
    PlayFabServerGetLeaderboardForUsersCharactersRequest{}
{
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest(const GetLeaderboardForUsersCharactersRequest& src) :
    PlayFabServerGetLeaderboardForUsersCharactersRequest{ src },
    m_playFabId{ src.m_playFabId },
    m_statisticName{ src.m_statisticName }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest(GetLeaderboardForUsersCharactersRequest&& src) :
    PlayFabServerGetLeaderboardForUsersCharactersRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetLeaderboardForUsersCharactersRequest::GetLeaderboardForUsersCharactersRequest(const PlayFabServerGetLeaderboardForUsersCharactersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardForUsersCharactersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetLeaderboardForUsersCharactersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardForUsersCharactersRequest>(*this);
}

size_t GetLeaderboardForUsersCharactersRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetLeaderboardForUsersCharactersRequest) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void GetLeaderboardForUsersCharactersRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetLeaderboardForUsersCharactersRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetLeaderboardForUsersCharactersRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult() :
    PlayFabServerGetLeaderboardForUsersCharactersResult{}
{
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(const GetLeaderboardForUsersCharactersResult& src) :
    PlayFabServerGetLeaderboardForUsersCharactersResult{ src },
    m_leaderboard{ src.m_leaderboard }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(GetLeaderboardForUsersCharactersResult&& src) :
    PlayFabServerGetLeaderboardForUsersCharactersResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
}

GetLeaderboardForUsersCharactersResult::GetLeaderboardForUsersCharactersResult(const PlayFabServerGetLeaderboardForUsersCharactersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardForUsersCharactersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
}

JsonValue GetLeaderboardForUsersCharactersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardForUsersCharactersResult>(*this);
}

GetLeaderboardRequest::GetLeaderboardRequest() :
    PlayFabServerGetLeaderboardRequest{}
{
}

GetLeaderboardRequest::GetLeaderboardRequest(const GetLeaderboardRequest& src) :
    PlayFabServerGetLeaderboardRequest{ src },
    m_customTags{ src.m_customTags },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardRequest::GetLeaderboardRequest(GetLeaderboardRequest&& src) :
    PlayFabServerGetLeaderboardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardRequest::GetLeaderboardRequest(const PlayFabServerGetLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardRequest>(*this);
}

GetLeaderboardResult::GetLeaderboardResult() :
    PlayFabServerGetLeaderboardResult{}
{
}

GetLeaderboardResult::GetLeaderboardResult(const GetLeaderboardResult& src) :
    PlayFabServerGetLeaderboardResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardResult::GetLeaderboardResult(GetLeaderboardResult&& src) :
    PlayFabServerGetLeaderboardResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardResult::GetLeaderboardResult(const PlayFabServerGetLeaderboardResult& src)
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
    return JsonUtils::ToJson<PlayFabServerGetLeaderboardResult>(*this);
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams() :
    PlayFabServerGetPlayerCombinedInfoRequestParams{}
{
}

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(const GetPlayerCombinedInfoRequestParams& src) :
    PlayFabServerGetPlayerCombinedInfoRequestParams{ src },
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
    PlayFabServerGetPlayerCombinedInfoRequestParams{ src },
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

GetPlayerCombinedInfoRequestParams::GetPlayerCombinedInfoRequestParams(const PlayFabServerGetPlayerCombinedInfoRequestParams& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayerCombinedInfoRequestParams>(*this);
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest() :
    PlayFabServerGetPlayerCombinedInfoRequest{}
{
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(const GetPlayerCombinedInfoRequest& src) :
    PlayFabServerGetPlayerCombinedInfoRequest{ src },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = (PlayFabServerGetPlayerCombinedInfoRequestParams const*)&m_infoRequestParameters;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest&& src) :
    PlayFabServerGetPlayerCombinedInfoRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = (PlayFabServerGetPlayerCombinedInfoRequestParams const*)&m_infoRequestParameters;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoRequest::GetPlayerCombinedInfoRequest(const PlayFabServerGetPlayerCombinedInfoRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayerCombinedInfoRequest>(*this);
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult() :
    PlayFabServerGetPlayerCombinedInfoResult{}
{
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(const GetPlayerCombinedInfoResult& src) :
    PlayFabServerGetPlayerCombinedInfoResult{ src },
    m_infoResultPayload{ src.m_infoResultPayload },
    m_playFabId{ src.m_playFabId }
{
    infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(GetPlayerCombinedInfoResult&& src) :
    PlayFabServerGetPlayerCombinedInfoResult{ src },
    m_infoResultPayload{ std::move(src.m_infoResultPayload) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    infoResultPayload = m_infoResultPayload ? m_infoResultPayload.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult(const PlayFabServerGetPlayerCombinedInfoResult& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayerCombinedInfoResult>(*this);
}

GetPlayerProfileRequest::GetPlayerProfileRequest() :
    PlayFabServerGetPlayerProfileRequest{}
{
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const GetPlayerProfileRequest& src) :
    PlayFabServerGetPlayerProfileRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(GetPlayerProfileRequest&& src) :
    PlayFabServerGetPlayerProfileRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
}

GetPlayerProfileRequest::GetPlayerProfileRequest(const PlayFabServerGetPlayerProfileRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayerProfileRequest>(*this);
}

GetPlayerProfileResult::GetPlayerProfileResult() :
    PlayFabServerGetPlayerProfileResult{}
{
}

GetPlayerProfileResult::GetPlayerProfileResult(const GetPlayerProfileResult& src) :
    PlayFabServerGetPlayerProfileResult{ src },
    m_playerProfile{ src.m_playerProfile }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(GetPlayerProfileResult&& src) :
    PlayFabServerGetPlayerProfileResult{ src },
    m_playerProfile{ std::move(src.m_playerProfile) }
{
    playerProfile = m_playerProfile ? m_playerProfile.operator->() : nullptr;
}

GetPlayerProfileResult::GetPlayerProfileResult(const PlayFabServerGetPlayerProfileResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerProfileResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerProfile", m_playerProfile, playerProfile);
}

JsonValue GetPlayerProfileResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayerProfileResult>(*this);
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult() :
    PlayFabServerGetPlayerSegmentsResult{}
{
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src) :
    PlayFabServerGetPlayerSegmentsResult{ src },
    m_segments{ src.m_segments }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src) :
    PlayFabServerGetPlayerSegmentsResult{ src },
    m_segments{ std::move(src.m_segments) }
{
    segments = m_segments.Empty() ? nullptr : m_segments.Data();
}

GetPlayerSegmentsResult::GetPlayerSegmentsResult(const PlayFabServerGetPlayerSegmentsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerSegmentsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Segments", m_segments, segments, segmentsCount);
}

JsonValue GetPlayerSegmentsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayerSegmentsResult>(*this);
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest() :
    PlayFabServerGetPlayersInSegmentRequest{}
{
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src) :
    PlayFabServerGetPlayersInSegmentRequest{ src },
    m_continuationToken{ src.m_continuationToken },
    m_customTags{ src.m_customTags },
    m_maxBatchSize{ src.m_maxBatchSize },
    m_secondsToLive{ src.m_secondsToLive },
    m_segmentId{ src.m_segmentId }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxBatchSize = m_maxBatchSize ? m_maxBatchSize.operator->() : nullptr;
    secondsToLive = m_secondsToLive ? m_secondsToLive.operator->() : nullptr;
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(GetPlayersInSegmentRequest&& src) :
    PlayFabServerGetPlayersInSegmentRequest{ src },
    m_continuationToken{ std::move(src.m_continuationToken) },
    m_customTags{ std::move(src.m_customTags) },
    m_maxBatchSize{ std::move(src.m_maxBatchSize) },
    m_secondsToLive{ std::move(src.m_secondsToLive) },
    m_segmentId{ std::move(src.m_segmentId) }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxBatchSize = m_maxBatchSize ? m_maxBatchSize.operator->() : nullptr;
    secondsToLive = m_secondsToLive ? m_secondsToLive.operator->() : nullptr;
    segmentId = m_segmentId.empty() ? nullptr : m_segmentId.data();
}

GetPlayersInSegmentRequest::GetPlayersInSegmentRequest(const PlayFabServerGetPlayersInSegmentRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersInSegmentRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxBatchSize", m_maxBatchSize, maxBatchSize);
    JsonUtils::ObjectGetMember(input, "SecondsToLive", m_secondsToLive, secondsToLive);
    JsonUtils::ObjectGetMember(input, "SegmentId", m_segmentId, segmentId);
}

JsonValue GetPlayersInSegmentRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayersInSegmentRequest>(*this);
}

PlayerLinkedAccount::PlayerLinkedAccount() :
    PlayFabServerPlayerLinkedAccount{}
{
}

PlayerLinkedAccount::PlayerLinkedAccount(const PlayerLinkedAccount& src) :
    PlayFabServerPlayerLinkedAccount{ src },
    m_email{ src.m_email },
    m_platform{ src.m_platform },
    m_platformUserId{ src.m_platformUserId },
    m_username{ src.m_username }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

PlayerLinkedAccount::PlayerLinkedAccount(PlayerLinkedAccount&& src) :
    PlayFabServerPlayerLinkedAccount{ src },
    m_email{ std::move(src.m_email) },
    m_platform{ std::move(src.m_platform) },
    m_platformUserId{ std::move(src.m_platformUserId) },
    m_username{ std::move(src.m_username) }
{
    email = m_email.empty() ? nullptr : m_email.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
    platformUserId = m_platformUserId.empty() ? nullptr : m_platformUserId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

PlayerLinkedAccount::PlayerLinkedAccount(const PlayFabServerPlayerLinkedAccount& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLinkedAccount::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
    JsonUtils::ObjectGetMember(input, "PlatformUserId", m_platformUserId, platformUserId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue PlayerLinkedAccount::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerPlayerLinkedAccount>(*this);
}

PlayerLocation::PlayerLocation() :
    PlayFabServerPlayerLocation{}
{
}

PlayerLocation::PlayerLocation(const PlayerLocation& src) :
    PlayFabServerPlayerLocation{ src },
    m_city{ src.m_city },
    m_latitude{ src.m_latitude },
    m_longitude{ src.m_longitude }
{
    city = m_city.empty() ? nullptr : m_city.data();
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

PlayerLocation::PlayerLocation(PlayerLocation&& src) :
    PlayFabServerPlayerLocation{ src },
    m_city{ std::move(src.m_city) },
    m_latitude{ std::move(src.m_latitude) },
    m_longitude{ std::move(src.m_longitude) }
{
    city = m_city.empty() ? nullptr : m_city.data();
    latitude = m_latitude ? m_latitude.operator->() : nullptr;
    longitude = m_longitude ? m_longitude.operator->() : nullptr;
}

PlayerLocation::PlayerLocation(const PlayFabServerPlayerLocation& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLocation::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "City", m_city, city);
    JsonUtils::ObjectGetMember(input, "ContinentCode", continentCode);
    JsonUtils::ObjectGetMember(input, "CountryCode", countryCode);
    JsonUtils::ObjectGetMember(input, "Latitude", m_latitude, latitude);
    JsonUtils::ObjectGetMember(input, "Longitude", m_longitude, longitude);
}

JsonValue PlayerLocation::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerPlayerLocation>(*this);
}

PlayerStatistic::PlayerStatistic() :
    PlayFabServerPlayerStatistic{}
{
}

PlayerStatistic::PlayerStatistic(const PlayerStatistic& src) :
    PlayFabServerPlayerStatistic{ src },
    m_id{ src.m_id },
    m_name{ src.m_name }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

PlayerStatistic::PlayerStatistic(PlayerStatistic&& src) :
    PlayFabServerPlayerStatistic{ src },
    m_id{ std::move(src.m_id) },
    m_name{ std::move(src.m_name) }
{
    id = m_id.empty() ? nullptr : m_id.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

PlayerStatistic::PlayerStatistic(const PlayFabServerPlayerStatistic& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatistic::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "StatisticValue", statisticValue);
    JsonUtils::ObjectGetMember(input, "StatisticVersion", statisticVersion);
}

JsonValue PlayerStatistic::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerPlayerStatistic>(*this);
}

size_t PlayerStatistic::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerPlayerStatistic) };
    serializedSize += (m_id.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void PlayerStatistic::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerPlayerStatistic{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerPlayerStatistic);
    memcpy(stringBuffer, m_id.data(), m_id.size() + 1);
    serializedStruct->id = stringBuffer;
    stringBuffer += m_id.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PushNotificationRegistration::PushNotificationRegistration() :
    PlayFabServerPushNotificationRegistration{}
{
}

PushNotificationRegistration::PushNotificationRegistration(const PushNotificationRegistration& src) :
    PlayFabServerPushNotificationRegistration{ src },
    m_notificationEndpointARN{ src.m_notificationEndpointARN },
    m_platform{ src.m_platform }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistration::PushNotificationRegistration(PushNotificationRegistration&& src) :
    PlayFabServerPushNotificationRegistration{ src },
    m_notificationEndpointARN{ std::move(src.m_notificationEndpointARN) },
    m_platform{ std::move(src.m_platform) }
{
    notificationEndpointARN = m_notificationEndpointARN.empty() ? nullptr : m_notificationEndpointARN.data();
    platform = m_platform ? m_platform.operator->() : nullptr;
}

PushNotificationRegistration::PushNotificationRegistration(const PlayFabServerPushNotificationRegistration& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationRegistration::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NotificationEndpointARN", m_notificationEndpointARN, notificationEndpointARN);
    JsonUtils::ObjectGetMember(input, "Platform", m_platform, platform);
}

JsonValue PushNotificationRegistration::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerPushNotificationRegistration>(*this);
}

PlayerProfile::PlayerProfile() :
    PlayFabServerPlayerProfile{}
{
}

PlayerProfile::PlayerProfile(const PlayerProfile& src) :
    PlayFabServerPlayerProfile{ src },
    m_adCampaignAttributions{ src.m_adCampaignAttributions },
    m_avatarUrl{ src.m_avatarUrl },
    m_bannedUntil{ src.m_bannedUntil },
    m_contactEmailAddresses{ src.m_contactEmailAddresses },
    m_created{ src.m_created },
    m_displayName{ src.m_displayName },
    m_lastLogin{ src.m_lastLogin },
    m_linkedAccounts{ src.m_linkedAccounts },
    m_locations{ src.m_locations },
    m_origination{ src.m_origination },
    m_playerExperimentVariants{ src.m_playerExperimentVariants },
    m_playerId{ src.m_playerId },
    m_playerStatistics{ src.m_playerStatistics },
    m_publisherId{ src.m_publisherId },
    m_pushNotificationRegistrations{ src.m_pushNotificationRegistrations },
    m_statistics{ src.m_statistics },
    m_tags{ src.m_tags },
    m_titleId{ src.m_titleId },
    m_totalValueToDateInUSD{ src.m_totalValueToDateInUSD },
    m_valuesToDate{ src.m_valuesToDate },
    m_virtualCurrencyBalances{ src.m_virtualCurrencyBalances }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerExperimentVariants = m_playerExperimentVariants.Empty() ? nullptr : m_playerExperimentVariants.Data();
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

PlayerProfile::PlayerProfile(PlayerProfile&& src) :
    PlayFabServerPlayerProfile{ src },
    m_adCampaignAttributions{ std::move(src.m_adCampaignAttributions) },
    m_avatarUrl{ std::move(src.m_avatarUrl) },
    m_bannedUntil{ std::move(src.m_bannedUntil) },
    m_contactEmailAddresses{ std::move(src.m_contactEmailAddresses) },
    m_created{ std::move(src.m_created) },
    m_displayName{ std::move(src.m_displayName) },
    m_lastLogin{ std::move(src.m_lastLogin) },
    m_linkedAccounts{ std::move(src.m_linkedAccounts) },
    m_locations{ std::move(src.m_locations) },
    m_origination{ std::move(src.m_origination) },
    m_playerExperimentVariants{ std::move(src.m_playerExperimentVariants) },
    m_playerId{ std::move(src.m_playerId) },
    m_playerStatistics{ std::move(src.m_playerStatistics) },
    m_publisherId{ std::move(src.m_publisherId) },
    m_pushNotificationRegistrations{ std::move(src.m_pushNotificationRegistrations) },
    m_statistics{ std::move(src.m_statistics) },
    m_tags{ std::move(src.m_tags) },
    m_titleId{ std::move(src.m_titleId) },
    m_totalValueToDateInUSD{ std::move(src.m_totalValueToDateInUSD) },
    m_valuesToDate{ std::move(src.m_valuesToDate) },
    m_virtualCurrencyBalances{ std::move(src.m_virtualCurrencyBalances) }
{
    adCampaignAttributions = m_adCampaignAttributions.Empty() ? nullptr : m_adCampaignAttributions.Data();
    avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
    bannedUntil = m_bannedUntil ? m_bannedUntil.operator->() : nullptr;
    contactEmailAddresses = m_contactEmailAddresses.Empty() ? nullptr : m_contactEmailAddresses.Data();
    created = m_created ? m_created.operator->() : nullptr;
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    lastLogin = m_lastLogin ? m_lastLogin.operator->() : nullptr;
    linkedAccounts = m_linkedAccounts.Empty() ? nullptr : m_linkedAccounts.Data();
    locations = m_locations.Empty() ? nullptr : m_locations.Data();
    origination = m_origination ? m_origination.operator->() : nullptr;
    playerExperimentVariants = m_playerExperimentVariants.Empty() ? nullptr : m_playerExperimentVariants.Data();
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerStatistics = m_playerStatistics.Empty() ? nullptr : m_playerStatistics.Data();
    publisherId = m_publisherId.empty() ? nullptr : m_publisherId.data();
    pushNotificationRegistrations = m_pushNotificationRegistrations.Empty() ? nullptr : m_pushNotificationRegistrations.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    totalValueToDateInUSD = m_totalValueToDateInUSD ? m_totalValueToDateInUSD.operator->() : nullptr;
    valuesToDate = m_valuesToDate.Empty() ? nullptr : m_valuesToDate.Data();
    virtualCurrencyBalances = m_virtualCurrencyBalances.Empty() ? nullptr : m_virtualCurrencyBalances.Data();
}

PlayerProfile::PlayerProfile(const PlayFabServerPlayerProfile& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerProfile::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdCampaignAttributions", m_adCampaignAttributions, adCampaignAttributions, adCampaignAttributionsCount);
    JsonUtils::ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
    JsonUtils::ObjectGetMember(input, "BannedUntil", m_bannedUntil, bannedUntil, true);
    JsonUtils::ObjectGetMember(input, "ContactEmailAddresses", m_contactEmailAddresses, contactEmailAddresses, contactEmailAddressesCount);
    JsonUtils::ObjectGetMember(input, "Created", m_created, created, true);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "LastLogin", m_lastLogin, lastLogin, true);
    JsonUtils::ObjectGetMember(input, "LinkedAccounts", m_linkedAccounts, linkedAccounts, linkedAccountsCount);
    JsonUtils::ObjectGetMember(input, "Locations", m_locations, locations, locationsCount);
    JsonUtils::ObjectGetMember(input, "Origination", m_origination, origination);
    JsonUtils::ObjectGetMember(input, "PlayerExperimentVariants", m_playerExperimentVariants, playerExperimentVariants, playerExperimentVariantsCount);
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
    JsonUtils::ObjectGetMember(input, "PlayerStatistics", m_playerStatistics, playerStatistics, playerStatisticsCount);
    JsonUtils::ObjectGetMember(input, "PublisherId", m_publisherId, publisherId);
    JsonUtils::ObjectGetMember(input, "PushNotificationRegistrations", m_pushNotificationRegistrations, pushNotificationRegistrations, pushNotificationRegistrationsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TotalValueToDateInUSD", m_totalValueToDateInUSD, totalValueToDateInUSD);
    JsonUtils::ObjectGetMember(input, "ValuesToDate", m_valuesToDate, valuesToDate, valuesToDateCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyBalances", m_virtualCurrencyBalances, virtualCurrencyBalances, virtualCurrencyBalancesCount);
}

JsonValue PlayerProfile::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerPlayerProfile>(*this);
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult() :
    PlayFabServerGetPlayersInSegmentResult{}
{
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src) :
    PlayFabServerGetPlayersInSegmentResult{ src },
    m_continuationToken{ src.m_continuationToken },
    m_playerProfiles{ src.m_playerProfiles }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(GetPlayersInSegmentResult&& src) :
    PlayFabServerGetPlayersInSegmentResult{ src },
    m_continuationToken{ std::move(src.m_continuationToken) },
    m_playerProfiles{ std::move(src.m_playerProfiles) }
{
    continuationToken = m_continuationToken.empty() ? nullptr : m_continuationToken.data();
    playerProfiles = m_playerProfiles.Empty() ? nullptr : m_playerProfiles.Data();
}

GetPlayersInSegmentResult::GetPlayersInSegmentResult(const PlayFabServerGetPlayersInSegmentResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersInSegmentResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ContinuationToken", m_continuationToken, continuationToken);
    JsonUtils::ObjectGetMember(input, "PlayerProfiles", m_playerProfiles, playerProfiles, playerProfilesCount);
    JsonUtils::ObjectGetMember(input, "ProfilesInSegment", profilesInSegment);
}

JsonValue GetPlayersInSegmentResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayersInSegmentResult>(*this);
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest() :
    PlayFabServerGetPlayersSegmentsRequest{}
{
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src) :
    PlayFabServerGetPlayersSegmentsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(GetPlayersSegmentsRequest&& src) :
    PlayFabServerGetPlayersSegmentsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayersSegmentsRequest::GetPlayersSegmentsRequest(const PlayFabServerGetPlayersSegmentsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayersSegmentsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetPlayersSegmentsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayersSegmentsRequest>(*this);
}

StatisticNameVersion::StatisticNameVersion() :
    PlayFabServerStatisticNameVersion{}
{
}

StatisticNameVersion::StatisticNameVersion(const StatisticNameVersion& src) :
    PlayFabServerStatisticNameVersion{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticNameVersion::StatisticNameVersion(StatisticNameVersion&& src) :
    PlayFabServerStatisticNameVersion{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticNameVersion::StatisticNameVersion(const PlayFabServerStatisticNameVersion& src)
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
    return JsonUtils::ToJson<PlayFabServerStatisticNameVersion>(*this);
}

size_t StatisticNameVersion::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerStatisticNameVersion) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void StatisticNameVersion::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerStatisticNameVersion{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerStatisticNameVersion);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest() :
    PlayFabServerGetPlayerStatisticsRequest{}
{
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest(const GetPlayerStatisticsRequest& src) :
    PlayFabServerGetPlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_statisticNames{ src.m_statisticNames },
    m_statisticNameVersions{ src.m_statisticNameVersions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest(GetPlayerStatisticsRequest&& src) :
    PlayFabServerGetPlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statisticNames{ std::move(src.m_statisticNames) },
    m_statisticNameVersions{ std::move(src.m_statisticNameVersions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

GetPlayerStatisticsRequest::GetPlayerStatisticsRequest(const PlayFabServerGetPlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StatisticNames", m_statisticNames, statisticNames, statisticNamesCount);
    JsonUtils::ObjectGetMember(input, "StatisticNameVersions", m_statisticNameVersions, statisticNameVersions, statisticNameVersionsCount);
}

JsonValue GetPlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticsRequest>(*this);
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult() :
    PlayFabServerGetPlayerStatisticsResult{}
{
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult(const GetPlayerStatisticsResult& src) :
    PlayFabServerGetPlayerStatisticsResult{ src },
    m_playFabId{ src.m_playFabId },
    m_statistics{ src.m_statistics }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult(GetPlayerStatisticsResult&& src) :
    PlayFabServerGetPlayerStatisticsResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statistics{ std::move(src.m_statistics) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticsResult::GetPlayerStatisticsResult(const PlayFabServerGetPlayerStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue GetPlayerStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticsResult>(*this);
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest() :
    PlayFabServerGetPlayerStatisticVersionsRequest{}
{
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
    PlayFabServerGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src) :
    PlayFabServerGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const PlayFabServerGetPlayerStatisticVersionsRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticVersionsRequest>(*this);
}

PlayerStatisticVersion::PlayerStatisticVersion() :
    PlayFabServerPlayerStatisticVersion{}
{
}

PlayerStatisticVersion::PlayerStatisticVersion(const PlayerStatisticVersion& src) :
    PlayFabServerPlayerStatisticVersion{ src },
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
    PlayFabServerPlayerStatisticVersion{ src },
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

PlayerStatisticVersion::PlayerStatisticVersion(const PlayFabServerPlayerStatisticVersion& src)
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
    return JsonUtils::ToJson<PlayFabServerPlayerStatisticVersion>(*this);
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult() :
    PlayFabServerGetPlayerStatisticVersionsResult{}
{
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
    PlayFabServerGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ src.m_statisticVersions }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src) :
    PlayFabServerGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ std::move(src.m_statisticVersions) }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const PlayFabServerGetPlayerStatisticVersionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticVersionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticVersions", m_statisticVersions, statisticVersions, statisticVersionsCount);
}

JsonValue GetPlayerStatisticVersionsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayerStatisticVersionsResult>(*this);
}

GetPlayerTagsRequest::GetPlayerTagsRequest() :
    PlayFabServerGetPlayerTagsRequest{}
{
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const GetPlayerTagsRequest& src) :
    PlayFabServerGetPlayerTagsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playfabNamespace{ src.m_playfabNamespace },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(GetPlayerTagsRequest&& src) :
    PlayFabServerGetPlayerTagsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playfabNamespace{ std::move(src.m_playfabNamespace) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playfabNamespace = m_playfabNamespace.empty() ? nullptr : m_playfabNamespace.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetPlayerTagsRequest::GetPlayerTagsRequest(const PlayFabServerGetPlayerTagsRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayerTagsRequest>(*this);
}

GetPlayerTagsResult::GetPlayerTagsResult() :
    PlayFabServerGetPlayerTagsResult{}
{
}

GetPlayerTagsResult::GetPlayerTagsResult(const GetPlayerTagsResult& src) :
    PlayFabServerGetPlayerTagsResult{ src },
    m_playFabId{ src.m_playFabId },
    m_tags{ src.m_tags }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(GetPlayerTagsResult&& src) :
    PlayFabServerGetPlayerTagsResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tags{ std::move(src.m_tags) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

GetPlayerTagsResult::GetPlayerTagsResult(const PlayFabServerGetPlayerTagsResult& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayerTagsResult>(*this);
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest() :
    PlayFabServerGetPlayFabIDsFromFacebookIDsRequest{}
{
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(const GetPlayFabIDsFromFacebookIDsRequest& src) :
    PlayFabServerGetPlayFabIDsFromFacebookIDsRequest{ src },
    m_facebookIDs{ src.m_facebookIDs }
{
    facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(GetPlayFabIDsFromFacebookIDsRequest&& src) :
    PlayFabServerGetPlayFabIDsFromFacebookIDsRequest{ src },
    m_facebookIDs{ std::move(src.m_facebookIDs) }
{
    facebookIDs = m_facebookIDs.Empty() ? nullptr : m_facebookIDs.Data();
}

GetPlayFabIDsFromFacebookIDsRequest::GetPlayFabIDsFromFacebookIDsRequest(const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookIDs", m_facebookIDs, facebookIDs, facebookIDsCount);
}

JsonValue GetPlayFabIDsFromFacebookIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookIDsRequest>(*this);
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult() :
    PlayFabServerGetPlayFabIDsFromFacebookIDsResult{}
{
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(const GetPlayFabIDsFromFacebookIDsResult& src) :
    PlayFabServerGetPlayFabIDsFromFacebookIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(GetPlayFabIDsFromFacebookIDsResult&& src) :
    PlayFabServerGetPlayFabIDsFromFacebookIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookIDsResult::GetPlayFabIDsFromFacebookIDsResult(const PlayFabServerGetPlayFabIDsFromFacebookIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromFacebookIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookIDsResult>(*this);
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest() :
    PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest{}
{
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const GetPlayFabIDsFromFacebookInstantGamesIdsRequest& src) :
    PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
    m_facebookInstantGamesIds{ src.m_facebookInstantGamesIds }
{
    facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(GetPlayFabIDsFromFacebookInstantGamesIdsRequest&& src) :
    PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest{ src },
    m_facebookInstantGamesIds{ std::move(src.m_facebookInstantGamesIds) }
{
    facebookInstantGamesIds = m_facebookInstantGamesIds.Empty() ? nullptr : m_facebookInstantGamesIds.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsRequest::GetPlayFabIDsFromFacebookInstantGamesIdsRequest(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookInstantGamesIdsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesIds", m_facebookInstantGamesIds, facebookInstantGamesIds, facebookInstantGamesIdsCount);
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest>(*this);
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult() :
    PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult{}
{
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(const GetPlayFabIDsFromFacebookInstantGamesIdsResult& src) :
    PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(GetPlayFabIDsFromFacebookInstantGamesIdsResult&& src) :
    PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromFacebookInstantGamesIdsResult::GetPlayFabIDsFromFacebookInstantGamesIdsResult(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromFacebookInstantGamesIdsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromFacebookInstantGamesIdsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult>(*this);
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest() :
    PlayFabServerGetPlayFabIDsFromGenericIDsRequest{}
{
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(const GetPlayFabIDsFromGenericIDsRequest& src) :
    PlayFabServerGetPlayFabIDsFromGenericIDsRequest{ src },
    m_genericIDs{ src.m_genericIDs }
{
    genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(GetPlayFabIDsFromGenericIDsRequest&& src) :
    PlayFabServerGetPlayFabIDsFromGenericIDsRequest{ src },
    m_genericIDs{ std::move(src.m_genericIDs) }
{
    genericIDs = m_genericIDs.Empty() ? nullptr : m_genericIDs.Data();
}

GetPlayFabIDsFromGenericIDsRequest::GetPlayFabIDsFromGenericIDsRequest(const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGenericIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericIDs", m_genericIDs, genericIDs, genericIDsCount);
}

JsonValue GetPlayFabIDsFromGenericIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromGenericIDsRequest>(*this);
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult() :
    PlayFabServerGetPlayFabIDsFromGenericIDsResult{}
{
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(const GetPlayFabIDsFromGenericIDsResult& src) :
    PlayFabServerGetPlayFabIDsFromGenericIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult&& src) :
    PlayFabServerGetPlayFabIDsFromGenericIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromGenericIDsResult::GetPlayFabIDsFromGenericIDsResult(const PlayFabServerGetPlayFabIDsFromGenericIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromGenericIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromGenericIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromGenericIDsResult>(*this);
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest() :
    PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{}
{
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src) :
    PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
    m_nintendoSwitchDeviceIds{ src.m_nintendoSwitchDeviceIds }
{
    nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest&& src) :
    PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ src },
    m_nintendoSwitchDeviceIds{ std::move(src.m_nintendoSwitchDeviceIds) }
{
    nintendoSwitchDeviceIds = m_nintendoSwitchDeviceIds.Empty() ? nullptr : m_nintendoSwitchDeviceIds.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceIds", m_nintendoSwitchDeviceIds, nintendoSwitchDeviceIds, nintendoSwitchDeviceIdsCount);
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest>(*this);
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair() :
    PlayFabServerNintendoSwitchPlayFabIdPair{}
{
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(const NintendoSwitchPlayFabIdPair& src) :
    PlayFabServerNintendoSwitchPlayFabIdPair{ src },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
    m_playFabId{ src.m_playFabId }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(NintendoSwitchPlayFabIdPair&& src) :
    PlayFabServerNintendoSwitchPlayFabIdPair{ src },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NintendoSwitchPlayFabIdPair::NintendoSwitchPlayFabIdPair(const PlayFabServerNintendoSwitchPlayFabIdPair& src)
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
    return JsonUtils::ToJson<PlayFabServerNintendoSwitchPlayFabIdPair>(*this);
}

size_t NintendoSwitchPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerNintendoSwitchPlayFabIdPair) };
    serializedSize += (m_nintendoSwitchDeviceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void NintendoSwitchPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerNintendoSwitchPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerNintendoSwitchPlayFabIdPair);
    memcpy(stringBuffer, m_nintendoSwitchDeviceId.data(), m_nintendoSwitchDeviceId.size() + 1);
    serializedStruct->nintendoSwitchDeviceId = stringBuffer;
    stringBuffer += m_nintendoSwitchDeviceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult() :
    PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{}
{
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const GetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src) :
    PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(GetPlayFabIDsFromNintendoSwitchDeviceIdsResult&& src) :
    PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromNintendoSwitchDeviceIdsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult>(*this);
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest() :
    PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest{}
{
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(const GetPlayFabIDsFromPSNAccountIDsRequest& src) :
    PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest{ src },
    m_issuerId{ src.m_issuerId },
    m_PSNAccountIDs{ src.m_PSNAccountIDs }
{
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    PSNAccountIDs = m_PSNAccountIDs.Empty() ? nullptr : m_PSNAccountIDs.Data();
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(GetPlayFabIDsFromPSNAccountIDsRequest&& src) :
    PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest{ src },
    m_issuerId{ std::move(src.m_issuerId) },
    m_PSNAccountIDs{ std::move(src.m_PSNAccountIDs) }
{
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    PSNAccountIDs = m_PSNAccountIDs.Empty() ? nullptr : m_PSNAccountIDs.Data();
}

GetPlayFabIDsFromPSNAccountIDsRequest::GetPlayFabIDsFromPSNAccountIDsRequest(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest>(*this);
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair() :
    PlayFabServerPSNAccountPlayFabIdPair{}
{
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(const PSNAccountPlayFabIdPair& src) :
    PlayFabServerPSNAccountPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_PSNAccountId{ src.m_PSNAccountId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    PSNAccountId = m_PSNAccountId.empty() ? nullptr : m_PSNAccountId.data();
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(PSNAccountPlayFabIdPair&& src) :
    PlayFabServerPSNAccountPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_PSNAccountId{ std::move(src.m_PSNAccountId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    PSNAccountId = m_PSNAccountId.empty() ? nullptr : m_PSNAccountId.data();
}

PSNAccountPlayFabIdPair::PSNAccountPlayFabIdPair(const PlayFabServerPSNAccountPlayFabIdPair& src)
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
    return JsonUtils::ToJson<PlayFabServerPSNAccountPlayFabIdPair>(*this);
}

size_t PSNAccountPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerPSNAccountPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_PSNAccountId.size() + 1);
    return serializedSize;
}

void PSNAccountPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerPSNAccountPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerPSNAccountPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_PSNAccountId.data(), m_PSNAccountId.size() + 1);
    serializedStruct->PSNAccountId = stringBuffer;
    stringBuffer += m_PSNAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult() :
    PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult{}
{
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(const GetPlayFabIDsFromPSNAccountIDsResult& src) :
    PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(GetPlayFabIDsFromPSNAccountIDsResult&& src) :
    PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromPSNAccountIDsResult::GetPlayFabIDsFromPSNAccountIDsResult(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromPSNAccountIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromPSNAccountIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult>(*this);
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest() :
    PlayFabServerGetPlayFabIDsFromSteamIDsRequest{}
{
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(const GetPlayFabIDsFromSteamIDsRequest& src) :
    PlayFabServerGetPlayFabIDsFromSteamIDsRequest{ src },
    m_steamStringIDs{ src.m_steamStringIDs }
{
    steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(GetPlayFabIDsFromSteamIDsRequest&& src) :
    PlayFabServerGetPlayFabIDsFromSteamIDsRequest{ src },
    m_steamStringIDs{ std::move(src.m_steamStringIDs) }
{
    steamStringIDs = m_steamStringIDs.Empty() ? nullptr : m_steamStringIDs.Data();
}

GetPlayFabIDsFromSteamIDsRequest::GetPlayFabIDsFromSteamIDsRequest(const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromSteamIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SteamStringIDs", m_steamStringIDs, steamStringIDs, steamStringIDsCount);
}

JsonValue GetPlayFabIDsFromSteamIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromSteamIDsRequest>(*this);
}

SteamPlayFabIdPair::SteamPlayFabIdPair() :
    PlayFabServerSteamPlayFabIdPair{}
{
}

SteamPlayFabIdPair::SteamPlayFabIdPair(const SteamPlayFabIdPair& src) :
    PlayFabServerSteamPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_steamStringId{ src.m_steamStringId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
}

SteamPlayFabIdPair::SteamPlayFabIdPair(SteamPlayFabIdPair&& src) :
    PlayFabServerSteamPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_steamStringId{ std::move(src.m_steamStringId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamStringId = m_steamStringId.empty() ? nullptr : m_steamStringId.data();
}

SteamPlayFabIdPair::SteamPlayFabIdPair(const PlayFabServerSteamPlayFabIdPair& src)
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
    return JsonUtils::ToJson<PlayFabServerSteamPlayFabIdPair>(*this);
}

size_t SteamPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerSteamPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_steamStringId.size() + 1);
    return serializedSize;
}

void SteamPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerSteamPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerSteamPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_steamStringId.data(), m_steamStringId.size() + 1);
    serializedStruct->steamStringId = stringBuffer;
    stringBuffer += m_steamStringId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult() :
    PlayFabServerGetPlayFabIDsFromSteamIDsResult{}
{
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(const GetPlayFabIDsFromSteamIDsResult& src) :
    PlayFabServerGetPlayFabIDsFromSteamIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult&& src) :
    PlayFabServerGetPlayFabIDsFromSteamIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromSteamIDsResult::GetPlayFabIDsFromSteamIDsResult(const PlayFabServerGetPlayFabIDsFromSteamIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromSteamIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromSteamIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromSteamIDsResult>(*this);
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest() :
    PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest{}
{
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(const GetPlayFabIDsFromXboxLiveIDsRequest& src) :
    PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest{ src },
    m_sandbox{ src.m_sandbox },
    m_xboxLiveAccountIDs{ src.m_xboxLiveAccountIDs }
{
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(GetPlayFabIDsFromXboxLiveIDsRequest&& src) :
    PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest{ src },
    m_sandbox{ std::move(src.m_sandbox) },
    m_xboxLiveAccountIDs{ std::move(src.m_xboxLiveAccountIDs) }
{
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxLiveAccountIDs = m_xboxLiveAccountIDs.Empty() ? nullptr : m_xboxLiveAccountIDs.Data();
}

GetPlayFabIDsFromXboxLiveIDsRequest::GetPlayFabIDsFromXboxLiveIDsRequest(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest>(*this);
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair() :
    PlayFabServerXboxLiveAccountPlayFabIdPair{}
{
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(const XboxLiveAccountPlayFabIdPair& src) :
    PlayFabServerXboxLiveAccountPlayFabIdPair{ src },
    m_playFabId{ src.m_playFabId },
    m_xboxLiveAccountId{ src.m_xboxLiveAccountId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(XboxLiveAccountPlayFabIdPair&& src) :
    PlayFabServerXboxLiveAccountPlayFabIdPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_xboxLiveAccountId{ std::move(src.m_xboxLiveAccountId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxLiveAccountId = m_xboxLiveAccountId.empty() ? nullptr : m_xboxLiveAccountId.data();
}

XboxLiveAccountPlayFabIdPair::XboxLiveAccountPlayFabIdPair(const PlayFabServerXboxLiveAccountPlayFabIdPair& src)
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
    return JsonUtils::ToJson<PlayFabServerXboxLiveAccountPlayFabIdPair>(*this);
}

size_t XboxLiveAccountPlayFabIdPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerXboxLiveAccountPlayFabIdPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_xboxLiveAccountId.size() + 1);
    return serializedSize;
}

void XboxLiveAccountPlayFabIdPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerXboxLiveAccountPlayFabIdPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerXboxLiveAccountPlayFabIdPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_xboxLiveAccountId.data(), m_xboxLiveAccountId.size() + 1);
    serializedStruct->xboxLiveAccountId = stringBuffer;
    stringBuffer += m_xboxLiveAccountId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult() :
    PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult{}
{
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(const GetPlayFabIDsFromXboxLiveIDsResult& src) :
    PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(GetPlayFabIDsFromXboxLiveIDsResult&& src) :
    PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPlayFabIDsFromXboxLiveIDsResult::GetPlayFabIDsFromXboxLiveIDsResult(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayFabIDsFromXboxLiveIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPlayFabIDsFromXboxLiveIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult>(*this);
}

GetPublisherDataRequest::GetPublisherDataRequest() :
    PlayFabServerGetPublisherDataRequest{}
{
}

GetPublisherDataRequest::GetPublisherDataRequest(const GetPublisherDataRequest& src) :
    PlayFabServerGetPublisherDataRequest{ src },
    m_keys{ src.m_keys }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(GetPublisherDataRequest&& src) :
    PlayFabServerGetPublisherDataRequest{ src },
    m_keys{ std::move(src.m_keys) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
}

GetPublisherDataRequest::GetPublisherDataRequest(const PlayFabServerGetPublisherDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
}

JsonValue GetPublisherDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPublisherDataRequest>(*this);
}

GetPublisherDataResult::GetPublisherDataResult() :
    PlayFabServerGetPublisherDataResult{}
{
}

GetPublisherDataResult::GetPublisherDataResult(const GetPublisherDataResult& src) :
    PlayFabServerGetPublisherDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(GetPublisherDataResult&& src) :
    PlayFabServerGetPublisherDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetPublisherDataResult::GetPublisherDataResult(const PlayFabServerGetPublisherDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPublisherDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetPublisherDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetPublisherDataResult>(*this);
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest() :
    PlayFabServerGetRandomResultTablesRequest{}
{
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src) :
    PlayFabServerGetRandomResultTablesRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_tableIDs{ src.m_tableIDs }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableIDs = m_tableIDs.Empty() ? nullptr : m_tableIDs.Data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src) :
    PlayFabServerGetRandomResultTablesRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_tableIDs{ std::move(src.m_tableIDs) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    tableIDs = m_tableIDs.Empty() ? nullptr : m_tableIDs.Data();
}

GetRandomResultTablesRequest::GetRandomResultTablesRequest(const PlayFabServerGetRandomResultTablesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRandomResultTablesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "TableIDs", m_tableIDs, tableIDs, tableIDsCount);
}

JsonValue GetRandomResultTablesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetRandomResultTablesRequest>(*this);
}

ResultTableNode::ResultTableNode() :
    PlayFabServerResultTableNode{}
{
}

ResultTableNode::ResultTableNode(const ResultTableNode& src) :
    PlayFabServerResultTableNode{ src },
    m_resultItem{ src.m_resultItem }
{
    resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
}

ResultTableNode::ResultTableNode(ResultTableNode&& src) :
    PlayFabServerResultTableNode{ src },
    m_resultItem{ std::move(src.m_resultItem) }
{
    resultItem = m_resultItem.empty() ? nullptr : m_resultItem.data();
}

ResultTableNode::ResultTableNode(const PlayFabServerResultTableNode& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResultTableNode::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ResultItem", m_resultItem, resultItem);
    JsonUtils::ObjectGetMember(input, "ResultItemType", resultItemType);
    JsonUtils::ObjectGetMember(input, "Weight", weight);
}

JsonValue ResultTableNode::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerResultTableNode>(*this);
}

size_t ResultTableNode::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerResultTableNode) };
    serializedSize += (m_resultItem.size() + 1);
    return serializedSize;
}

void ResultTableNode::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerResultTableNode{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerResultTableNode);
    memcpy(stringBuffer, m_resultItem.data(), m_resultItem.size() + 1);
    serializedStruct->resultItem = stringBuffer;
    stringBuffer += m_resultItem.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RandomResultTableListing::RandomResultTableListing() :
    PlayFabServerRandomResultTableListing{}
{
}

RandomResultTableListing::RandomResultTableListing(const RandomResultTableListing& src) :
    PlayFabServerRandomResultTableListing{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_nodes{ src.m_nodes },
    m_tableId{ src.m_tableId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTableListing::RandomResultTableListing(RandomResultTableListing&& src) :
    PlayFabServerRandomResultTableListing{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_nodes{ std::move(src.m_nodes) },
    m_tableId{ std::move(src.m_tableId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    nodes = m_nodes.Empty() ? nullptr : m_nodes.Data();
    tableId = m_tableId.empty() ? nullptr : m_tableId.data();
}

RandomResultTableListing::RandomResultTableListing(const PlayFabServerRandomResultTableListing& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RandomResultTableListing::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "Nodes", m_nodes, nodes, nodesCount);
    JsonUtils::ObjectGetMember(input, "TableId", m_tableId, tableId);
}

JsonValue RandomResultTableListing::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRandomResultTableListing>(*this);
}

GetRandomResultTablesResult::GetRandomResultTablesResult() :
    PlayFabServerGetRandomResultTablesResult{}
{
}

GetRandomResultTablesResult::GetRandomResultTablesResult(const GetRandomResultTablesResult& src) :
    PlayFabServerGetRandomResultTablesResult{ src },
    m_tables{ src.m_tables }
{
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

GetRandomResultTablesResult::GetRandomResultTablesResult(GetRandomResultTablesResult&& src) :
    PlayFabServerGetRandomResultTablesResult{ src },
    m_tables{ std::move(src.m_tables) }
{
    tables = m_tables.Empty() ? nullptr : m_tables.Data();
}

GetRandomResultTablesResult::GetRandomResultTablesResult(const PlayFabServerGetRandomResultTablesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRandomResultTablesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Tables", m_tables, tables, tablesCount);
}

JsonValue GetRandomResultTablesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetRandomResultTablesResult>(*this);
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest() :
    PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest{}
{
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest(const GetServerCustomIDsFromPlayFabIDsRequest& src) :
    PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest{ src },
    m_playFabIDs{ src.m_playFabIDs }
{
    playFabIDs = m_playFabIDs.Empty() ? nullptr : m_playFabIDs.Data();
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest(GetServerCustomIDsFromPlayFabIDsRequest&& src) :
    PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest{ src },
    m_playFabIDs{ std::move(src.m_playFabIDs) }
{
    playFabIDs = m_playFabIDs.Empty() ? nullptr : m_playFabIDs.Data();
}

GetServerCustomIDsFromPlayFabIDsRequest::GetServerCustomIDsFromPlayFabIDsRequest(const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerCustomIDsFromPlayFabIDsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabIDs", m_playFabIDs, playFabIDs, playFabIDsCount);
}

JsonValue GetServerCustomIDsFromPlayFabIDsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest>(*this);
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair() :
    PlayFabServerServerCustomIDPlayFabIDPair{}
{
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair(const ServerCustomIDPlayFabIDPair& src) :
    PlayFabServerServerCustomIDPlayFabIDPair{ src },
    m_playFabId{ src.m_playFabId },
    m_serverCustomId{ src.m_serverCustomId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair(ServerCustomIDPlayFabIDPair&& src) :
    PlayFabServerServerCustomIDPlayFabIDPair{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

ServerCustomIDPlayFabIDPair::ServerCustomIDPlayFabIDPair(const PlayFabServerServerCustomIDPlayFabIDPair& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerCustomIDPlayFabIDPair::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue ServerCustomIDPlayFabIDPair::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerServerCustomIDPlayFabIDPair>(*this);
}

size_t ServerCustomIDPlayFabIDPair::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerServerCustomIDPlayFabIDPair) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_serverCustomId.size() + 1);
    return serializedSize;
}

void ServerCustomIDPlayFabIDPair::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerServerCustomIDPlayFabIDPair{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerServerCustomIDPlayFabIDPair);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_serverCustomId.data(), m_serverCustomId.size() + 1);
    serializedStruct->serverCustomId = stringBuffer;
    stringBuffer += m_serverCustomId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult() :
    PlayFabServerGetServerCustomIDsFromPlayFabIDsResult{}
{
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult(const GetServerCustomIDsFromPlayFabIDsResult& src) :
    PlayFabServerGetServerCustomIDsFromPlayFabIDsResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult(GetServerCustomIDsFromPlayFabIDsResult&& src) :
    PlayFabServerGetServerCustomIDsFromPlayFabIDsResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetServerCustomIDsFromPlayFabIDsResult::GetServerCustomIDsFromPlayFabIDsResult(const PlayFabServerGetServerCustomIDsFromPlayFabIDsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerCustomIDsFromPlayFabIDsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetServerCustomIDsFromPlayFabIDsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetServerCustomIDsFromPlayFabIDsResult>(*this);
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest() :
    PlayFabServerGetSharedGroupDataRequest{}
{
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(const GetSharedGroupDataRequest& src) :
    PlayFabServerGetSharedGroupDataRequest{ src },
    m_getMembers{ src.m_getMembers },
    m_keys{ src.m_keys },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(GetSharedGroupDataRequest&& src) :
    PlayFabServerGetSharedGroupDataRequest{ src },
    m_getMembers{ std::move(src.m_getMembers) },
    m_keys{ std::move(src.m_keys) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    getMembers = m_getMembers ? m_getMembers.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

GetSharedGroupDataRequest::GetSharedGroupDataRequest(const PlayFabServerGetSharedGroupDataRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetSharedGroupDataRequest>(*this);
}

SharedGroupDataRecord::SharedGroupDataRecord() :
    PlayFabServerSharedGroupDataRecord{}
{
}

SharedGroupDataRecord::SharedGroupDataRecord(const SharedGroupDataRecord& src) :
    PlayFabServerSharedGroupDataRecord{ src },
    m_lastUpdatedBy{ src.m_lastUpdatedBy },
    m_permission{ src.m_permission },
    m_value{ src.m_value }
{
    lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

SharedGroupDataRecord::SharedGroupDataRecord(SharedGroupDataRecord&& src) :
    PlayFabServerSharedGroupDataRecord{ src },
    m_lastUpdatedBy{ std::move(src.m_lastUpdatedBy) },
    m_permission{ std::move(src.m_permission) },
    m_value{ std::move(src.m_value) }
{
    lastUpdatedBy = m_lastUpdatedBy.empty() ? nullptr : m_lastUpdatedBy.data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    value = m_value.empty() ? nullptr : m_value.data();
}

SharedGroupDataRecord::SharedGroupDataRecord(const PlayFabServerSharedGroupDataRecord& src)
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
    return JsonUtils::ToJson<PlayFabServerSharedGroupDataRecord>(*this);
}

GetSharedGroupDataResult::GetSharedGroupDataResult() :
    PlayFabServerGetSharedGroupDataResult{}
{
}

GetSharedGroupDataResult::GetSharedGroupDataResult(const GetSharedGroupDataResult& src) :
    PlayFabServerGetSharedGroupDataResult{ src },
    m_data{ src.m_data },
    m_members{ src.m_members }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
}

GetSharedGroupDataResult::GetSharedGroupDataResult(GetSharedGroupDataResult&& src) :
    PlayFabServerGetSharedGroupDataResult{ src },
    m_data{ std::move(src.m_data) },
    m_members{ std::move(src.m_members) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
}

GetSharedGroupDataResult::GetSharedGroupDataResult(const PlayFabServerGetSharedGroupDataResult& src)
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
    return JsonUtils::ToJson<PlayFabServerGetSharedGroupDataResult>(*this);
}

StoreMarketingModel::StoreMarketingModel() :
    PlayFabServerStoreMarketingModel{}
{
}

StoreMarketingModel::StoreMarketingModel(const StoreMarketingModel& src) :
    PlayFabServerStoreMarketingModel{ src },
    m_description{ src.m_description },
    m_displayName{ src.m_displayName },
    m_metadata{ src.m_metadata }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(StoreMarketingModel&& src) :
    PlayFabServerStoreMarketingModel{ src },
    m_description{ std::move(src.m_description) },
    m_displayName{ std::move(src.m_displayName) },
    m_metadata{ std::move(src.m_metadata) }
{
    description = m_description.empty() ? nullptr : m_description.data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    metadata.stringValue = m_metadata.StringValue();
}

StoreMarketingModel::StoreMarketingModel(const PlayFabServerStoreMarketingModel& src)
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
    return JsonUtils::ToJson<PlayFabServerStoreMarketingModel>(*this);
}

StoreItem::StoreItem() :
    PlayFabServerStoreItem{}
{
}

StoreItem::StoreItem(const StoreItem& src) :
    PlayFabServerStoreItem{ src },
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
    PlayFabServerStoreItem{ src },
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

StoreItem::StoreItem(const PlayFabServerStoreItem& src)
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
    return JsonUtils::ToJson<PlayFabServerStoreItem>(*this);
}

GetStoreItemsResult::GetStoreItemsResult() :
    PlayFabServerGetStoreItemsResult{}
{
}

GetStoreItemsResult::GetStoreItemsResult(const GetStoreItemsResult& src) :
    PlayFabServerGetStoreItemsResult{ src },
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
    PlayFabServerGetStoreItemsResult{ src },
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

GetStoreItemsResult::GetStoreItemsResult(const PlayFabServerGetStoreItemsResult& src)
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
    return JsonUtils::ToJson<PlayFabServerGetStoreItemsResult>(*this);
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest() :
    PlayFabServerGetStoreItemsServerRequest{}
{
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest(const GetStoreItemsServerRequest& src) :
    PlayFabServerGetStoreItemsServerRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_storeId{ src.m_storeId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest(GetStoreItemsServerRequest&& src) :
    PlayFabServerGetStoreItemsServerRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_storeId{ std::move(src.m_storeId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    storeId = m_storeId.empty() ? nullptr : m_storeId.data();
}

GetStoreItemsServerRequest::GetStoreItemsServerRequest(const PlayFabServerGetStoreItemsServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetStoreItemsServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StoreId", m_storeId, storeId);
}

JsonValue GetStoreItemsServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetStoreItemsServerRequest>(*this);
}

GetTimeResult::GetTimeResult() :
    PlayFabServerGetTimeResult{}
{
}


GetTimeResult::GetTimeResult(const PlayFabServerGetTimeResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTimeResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Time", time, true);
}

JsonValue GetTimeResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetTimeResult>(*this);
}

size_t GetTimeResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetTimeResult) };
    return serializedSize;
}

void GetTimeResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetTimeResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetTimeResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetTitleDataRequest::GetTitleDataRequest() :
    PlayFabServerGetTitleDataRequest{}
{
}

GetTitleDataRequest::GetTitleDataRequest(const GetTitleDataRequest& src) :
    PlayFabServerGetTitleDataRequest{ src },
    m_keys{ src.m_keys },
    m_overrideLabel{ src.m_overrideLabel }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(GetTitleDataRequest&& src) :
    PlayFabServerGetTitleDataRequest{ src },
    m_keys{ std::move(src.m_keys) },
    m_overrideLabel{ std::move(src.m_overrideLabel) }
{
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    overrideLabel = m_overrideLabel.empty() ? nullptr : m_overrideLabel.data();
}

GetTitleDataRequest::GetTitleDataRequest(const PlayFabServerGetTitleDataRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetTitleDataRequest>(*this);
}

GetTitleDataResult::GetTitleDataResult() :
    PlayFabServerGetTitleDataResult{}
{
}

GetTitleDataResult::GetTitleDataResult(const GetTitleDataResult& src) :
    PlayFabServerGetTitleDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(GetTitleDataResult&& src) :
    PlayFabServerGetTitleDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

GetTitleDataResult::GetTitleDataResult(const PlayFabServerGetTitleDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue GetTitleDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetTitleDataResult>(*this);
}

GetTitleNewsRequest::GetTitleNewsRequest() :
    PlayFabServerGetTitleNewsRequest{}
{
}

GetTitleNewsRequest::GetTitleNewsRequest(const GetTitleNewsRequest& src) :
    PlayFabServerGetTitleNewsRequest{ src },
    m_count{ src.m_count }
{
    count = m_count ? m_count.operator->() : nullptr;
}

GetTitleNewsRequest::GetTitleNewsRequest(GetTitleNewsRequest&& src) :
    PlayFabServerGetTitleNewsRequest{ src },
    m_count{ std::move(src.m_count) }
{
    count = m_count ? m_count.operator->() : nullptr;
}

GetTitleNewsRequest::GetTitleNewsRequest(const PlayFabServerGetTitleNewsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleNewsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Count", m_count, count);
}

JsonValue GetTitleNewsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetTitleNewsRequest>(*this);
}

TitleNewsItem::TitleNewsItem() :
    PlayFabServerTitleNewsItem{}
{
}

TitleNewsItem::TitleNewsItem(const TitleNewsItem& src) :
    PlayFabServerTitleNewsItem{ src },
    m_body{ src.m_body },
    m_newsId{ src.m_newsId },
    m_title{ src.m_title }
{
    body = m_body.empty() ? nullptr : m_body.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

TitleNewsItem::TitleNewsItem(TitleNewsItem&& src) :
    PlayFabServerTitleNewsItem{ src },
    m_body{ std::move(src.m_body) },
    m_newsId{ std::move(src.m_newsId) },
    m_title{ std::move(src.m_title) }
{
    body = m_body.empty() ? nullptr : m_body.data();
    newsId = m_newsId.empty() ? nullptr : m_newsId.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

TitleNewsItem::TitleNewsItem(const PlayFabServerTitleNewsItem& src)
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
    return JsonUtils::ToJson<PlayFabServerTitleNewsItem>(*this);
}

size_t TitleNewsItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerTitleNewsItem) };
    serializedSize += (m_body.size() + 1);
    serializedSize += (m_newsId.size() + 1);
    serializedSize += (m_title.size() + 1);
    return serializedSize;
}

void TitleNewsItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerTitleNewsItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerTitleNewsItem);
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
    PlayFabServerGetTitleNewsResult{}
{
}

GetTitleNewsResult::GetTitleNewsResult(const GetTitleNewsResult& src) :
    PlayFabServerGetTitleNewsResult{ src },
    m_news{ src.m_news }
{
    news = m_news.Empty() ? nullptr : m_news.Data();
}

GetTitleNewsResult::GetTitleNewsResult(GetTitleNewsResult&& src) :
    PlayFabServerGetTitleNewsResult{ src },
    m_news{ std::move(src.m_news) }
{
    news = m_news.Empty() ? nullptr : m_news.Data();
}

GetTitleNewsResult::GetTitleNewsResult(const PlayFabServerGetTitleNewsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleNewsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "News", m_news, news, newsCount);
}

JsonValue GetTitleNewsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetTitleNewsResult>(*this);
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest() :
    PlayFabServerGetUserAccountInfoRequest{}
{
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest(const GetUserAccountInfoRequest& src) :
    PlayFabServerGetUserAccountInfoRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest(GetUserAccountInfoRequest&& src) :
    PlayFabServerGetUserAccountInfoRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserAccountInfoRequest::GetUserAccountInfoRequest(const PlayFabServerGetUserAccountInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserAccountInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserAccountInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetUserAccountInfoRequest>(*this);
}

size_t GetUserAccountInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetUserAccountInfoRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetUserAccountInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetUserAccountInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetUserAccountInfoRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetUserAccountInfoResult::GetUserAccountInfoResult() :
    PlayFabServerGetUserAccountInfoResult{}
{
}

GetUserAccountInfoResult::GetUserAccountInfoResult(const GetUserAccountInfoResult& src) :
    PlayFabServerGetUserAccountInfoResult{ src },
    m_userInfo{ src.m_userInfo }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

GetUserAccountInfoResult::GetUserAccountInfoResult(GetUserAccountInfoResult&& src) :
    PlayFabServerGetUserAccountInfoResult{ src },
    m_userInfo{ std::move(src.m_userInfo) }
{
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

GetUserAccountInfoResult::GetUserAccountInfoResult(const PlayFabServerGetUserAccountInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserAccountInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
}

JsonValue GetUserAccountInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetUserAccountInfoResult>(*this);
}

GetUserBansRequest::GetUserBansRequest() :
    PlayFabServerGetUserBansRequest{}
{
}

GetUserBansRequest::GetUserBansRequest(const GetUserBansRequest& src) :
    PlayFabServerGetUserBansRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserBansRequest::GetUserBansRequest(GetUserBansRequest&& src) :
    PlayFabServerGetUserBansRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserBansRequest::GetUserBansRequest(const PlayFabServerGetUserBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetUserBansRequest>(*this);
}

size_t GetUserBansRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGetUserBansRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void GetUserBansRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGetUserBansRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGetUserBansRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetUserBansResult::GetUserBansResult() :
    PlayFabServerGetUserBansResult{}
{
}

GetUserBansResult::GetUserBansResult(const GetUserBansResult& src) :
    PlayFabServerGetUserBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

GetUserBansResult::GetUserBansResult(GetUserBansResult&& src) :
    PlayFabServerGetUserBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

GetUserBansResult::GetUserBansResult(const PlayFabServerGetUserBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue GetUserBansResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetUserBansResult>(*this);
}

GetUserDataRequest::GetUserDataRequest() :
    PlayFabServerGetUserDataRequest{}
{
}

GetUserDataRequest::GetUserDataRequest(const GetUserDataRequest& src) :
    PlayFabServerGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
    m_keys{ src.m_keys },
    m_playFabId{ src.m_playFabId }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(GetUserDataRequest&& src) :
    PlayFabServerGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ std::move(src.m_ifChangedFromDataVersion) },
    m_keys{ std::move(src.m_keys) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(const PlayFabServerGetUserDataRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerGetUserDataRequest>(*this);
}

GetUserDataResult::GetUserDataResult() :
    PlayFabServerGetUserDataResult{}
{
}

GetUserDataResult::GetUserDataResult(const GetUserDataResult& src) :
    PlayFabServerGetUserDataResult{ src },
    m_data{ src.m_data },
    m_playFabId{ src.m_playFabId }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataResult::GetUserDataResult(GetUserDataResult&& src) :
    PlayFabServerGetUserDataResult{ src },
    m_data{ std::move(src.m_data) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataResult::GetUserDataResult(const PlayFabServerGetUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetUserDataResult>(*this);
}

GetUserInventoryRequest::GetUserInventoryRequest() :
    PlayFabServerGetUserInventoryRequest{}
{
}

GetUserInventoryRequest::GetUserInventoryRequest(const GetUserInventoryRequest& src) :
    PlayFabServerGetUserInventoryRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserInventoryRequest::GetUserInventoryRequest(GetUserInventoryRequest&& src) :
    PlayFabServerGetUserInventoryRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserInventoryRequest::GetUserInventoryRequest(const PlayFabServerGetUserInventoryRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserInventoryRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserInventoryRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetUserInventoryRequest>(*this);
}

GetUserInventoryResult::GetUserInventoryResult() :
    PlayFabServerGetUserInventoryResult{}
{
}

GetUserInventoryResult::GetUserInventoryResult(const GetUserInventoryResult& src) :
    PlayFabServerGetUserInventoryResult{ src },
    m_inventory{ src.m_inventory },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetUserInventoryResult::GetUserInventoryResult(GetUserInventoryResult&& src) :
    PlayFabServerGetUserInventoryResult{ src },
    m_inventory{ std::move(src.m_inventory) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

GetUserInventoryResult::GetUserInventoryResult(const PlayFabServerGetUserInventoryResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserInventoryResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue GetUserInventoryResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGetUserInventoryResult>(*this);
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest() :
    PlayFabServerGrantCharacterToUserRequest{}
{
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest(const GrantCharacterToUserRequest& src) :
    PlayFabServerGrantCharacterToUserRequest{ src },
    m_characterName{ src.m_characterName },
    m_characterType{ src.m_characterType },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest(GrantCharacterToUserRequest&& src) :
    PlayFabServerGrantCharacterToUserRequest{ src },
    m_characterName{ std::move(src.m_characterName) },
    m_characterType{ std::move(src.m_characterType) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterName = m_characterName.empty() ? nullptr : m_characterName.data();
    characterType = m_characterType.empty() ? nullptr : m_characterType.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantCharacterToUserRequest::GrantCharacterToUserRequest(const PlayFabServerGrantCharacterToUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantCharacterToUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterName", m_characterName, characterName);
    JsonUtils::ObjectGetMember(input, "CharacterType", m_characterType, characterType);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GrantCharacterToUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantCharacterToUserRequest>(*this);
}

GrantCharacterToUserResult::GrantCharacterToUserResult() :
    PlayFabServerGrantCharacterToUserResult{}
{
}

GrantCharacterToUserResult::GrantCharacterToUserResult(const GrantCharacterToUserResult& src) :
    PlayFabServerGrantCharacterToUserResult{ src },
    m_characterId{ src.m_characterId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

GrantCharacterToUserResult::GrantCharacterToUserResult(GrantCharacterToUserResult&& src) :
    PlayFabServerGrantCharacterToUserResult{ src },
    m_characterId{ std::move(src.m_characterId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
}

GrantCharacterToUserResult::GrantCharacterToUserResult(const PlayFabServerGrantCharacterToUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantCharacterToUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
}

JsonValue GrantCharacterToUserResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantCharacterToUserResult>(*this);
}

size_t GrantCharacterToUserResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerGrantCharacterToUserResult) };
    serializedSize += (m_characterId.size() + 1);
    return serializedSize;
}

void GrantCharacterToUserResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerGrantCharacterToUserResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerGrantCharacterToUserResult);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GrantedItemInstance::GrantedItemInstance() :
    PlayFabServerGrantedItemInstance{}
{
}

GrantedItemInstance::GrantedItemInstance(const GrantedItemInstance& src) :
    PlayFabServerGrantedItemInstance{ src },
    m_annotation{ src.m_annotation },
    m_bundleContents{ src.m_bundleContents },
    m_bundleParent{ src.m_bundleParent },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customData{ src.m_customData },
    m_displayName{ src.m_displayName },
    m_expiration{ src.m_expiration },
    m_itemClass{ src.m_itemClass },
    m_itemId{ src.m_itemId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId },
    m_purchaseDate{ src.m_purchaseDate },
    m_remainingUses{ src.m_remainingUses },
    m_unitCurrency{ src.m_unitCurrency },
    m_usesIncrementedBy{ src.m_usesIncrementedBy }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

GrantedItemInstance::GrantedItemInstance(GrantedItemInstance&& src) :
    PlayFabServerGrantedItemInstance{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_bundleContents{ std::move(src.m_bundleContents) },
    m_bundleParent{ std::move(src.m_bundleParent) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customData{ std::move(src.m_customData) },
    m_displayName{ std::move(src.m_displayName) },
    m_expiration{ std::move(src.m_expiration) },
    m_itemClass{ std::move(src.m_itemClass) },
    m_itemId{ std::move(src.m_itemId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_purchaseDate{ std::move(src.m_purchaseDate) },
    m_remainingUses{ std::move(src.m_remainingUses) },
    m_unitCurrency{ std::move(src.m_unitCurrency) },
    m_usesIncrementedBy{ std::move(src.m_usesIncrementedBy) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    bundleContents = m_bundleContents.Empty() ? nullptr : m_bundleContents.Data();
    bundleParent = m_bundleParent.empty() ? nullptr : m_bundleParent.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customData = m_customData.Empty() ? nullptr : m_customData.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    expiration = m_expiration ? m_expiration.operator->() : nullptr;
    itemClass = m_itemClass.empty() ? nullptr : m_itemClass.data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    purchaseDate = m_purchaseDate ? m_purchaseDate.operator->() : nullptr;
    remainingUses = m_remainingUses ? m_remainingUses.operator->() : nullptr;
    unitCurrency = m_unitCurrency.empty() ? nullptr : m_unitCurrency.data();
    usesIncrementedBy = m_usesIncrementedBy ? m_usesIncrementedBy.operator->() : nullptr;
}

GrantedItemInstance::GrantedItemInstance(const PlayFabServerGrantedItemInstance& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantedItemInstance::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "BundleContents", m_bundleContents, bundleContents, bundleContentsCount);
    JsonUtils::ObjectGetMember(input, "BundleParent", m_bundleParent, bundleParent);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData, customDataCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Expiration", m_expiration, expiration, true);
    JsonUtils::ObjectGetMember(input, "ItemClass", m_itemClass, itemClass);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "PurchaseDate", m_purchaseDate, purchaseDate, true);
    JsonUtils::ObjectGetMember(input, "RemainingUses", m_remainingUses, remainingUses);
    JsonUtils::ObjectGetMember(input, "Result", result);
    JsonUtils::ObjectGetMember(input, "UnitCurrency", m_unitCurrency, unitCurrency);
    JsonUtils::ObjectGetMember(input, "UnitPrice", unitPrice);
    JsonUtils::ObjectGetMember(input, "UsesIncrementedBy", m_usesIncrementedBy, usesIncrementedBy);
}

JsonValue GrantedItemInstance::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantedItemInstance>(*this);
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest() :
    PlayFabServerGrantItemsToCharacterRequest{}
{
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest(const GrantItemsToCharacterRequest& src) :
    PlayFabServerGrantItemsToCharacterRequest{ src },
    m_annotation{ src.m_annotation },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_itemIds{ src.m_itemIds },
    m_playFabId{ src.m_playFabId }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest(GrantItemsToCharacterRequest&& src) :
    PlayFabServerGrantItemsToCharacterRequest{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemIds{ std::move(src.m_itemIds) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToCharacterRequest::GrantItemsToCharacterRequest(const PlayFabServerGrantItemsToCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemIds", m_itemIds, itemIds, itemIdsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GrantItemsToCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantItemsToCharacterRequest>(*this);
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult() :
    PlayFabServerGrantItemsToCharacterResult{}
{
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult(const GrantItemsToCharacterResult& src) :
    PlayFabServerGrantItemsToCharacterResult{ src },
    m_itemGrantResults{ src.m_itemGrantResults }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult(GrantItemsToCharacterResult&& src) :
    PlayFabServerGrantItemsToCharacterResult{ src },
    m_itemGrantResults{ std::move(src.m_itemGrantResults) }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToCharacterResult::GrantItemsToCharacterResult(const PlayFabServerGrantItemsToCharacterResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToCharacterResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
}

JsonValue GrantItemsToCharacterResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantItemsToCharacterResult>(*this);
}

GrantItemsToUserRequest::GrantItemsToUserRequest() :
    PlayFabServerGrantItemsToUserRequest{}
{
}

GrantItemsToUserRequest::GrantItemsToUserRequest(const GrantItemsToUserRequest& src) :
    PlayFabServerGrantItemsToUserRequest{ src },
    m_annotation{ src.m_annotation },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_itemIds{ src.m_itemIds },
    m_playFabId{ src.m_playFabId }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToUserRequest::GrantItemsToUserRequest(GrantItemsToUserRequest&& src) :
    PlayFabServerGrantItemsToUserRequest{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemIds{ std::move(src.m_itemIds) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemIds = m_itemIds.Empty() ? nullptr : m_itemIds.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GrantItemsToUserRequest::GrantItemsToUserRequest(const PlayFabServerGrantItemsToUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemIds", m_itemIds, itemIds, itemIdsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GrantItemsToUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantItemsToUserRequest>(*this);
}

GrantItemsToUserResult::GrantItemsToUserResult() :
    PlayFabServerGrantItemsToUserResult{}
{
}

GrantItemsToUserResult::GrantItemsToUserResult(const GrantItemsToUserResult& src) :
    PlayFabServerGrantItemsToUserResult{ src },
    m_itemGrantResults{ src.m_itemGrantResults }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUserResult::GrantItemsToUserResult(GrantItemsToUserResult&& src) :
    PlayFabServerGrantItemsToUserResult{ src },
    m_itemGrantResults{ std::move(src.m_itemGrantResults) }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUserResult::GrantItemsToUserResult(const PlayFabServerGrantItemsToUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
}

JsonValue GrantItemsToUserResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantItemsToUserResult>(*this);
}

ItemGrant::ItemGrant() :
    PlayFabServerItemGrant{}
{
}

ItemGrant::ItemGrant(const ItemGrant& src) :
    PlayFabServerItemGrant{ src },
    m_annotation{ src.m_annotation },
    m_characterId{ src.m_characterId },
    m_data{ src.m_data },
    m_itemId{ src.m_itemId },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ItemGrant::ItemGrant(ItemGrant&& src) :
    PlayFabServerItemGrant{ src },
    m_annotation{ std::move(src.m_annotation) },
    m_characterId{ std::move(src.m_characterId) },
    m_data{ std::move(src.m_data) },
    m_itemId{ std::move(src.m_itemId) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    annotation = m_annotation.empty() ? nullptr : m_annotation.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemId = m_itemId.empty() ? nullptr : m_itemId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ItemGrant::ItemGrant(const PlayFabServerItemGrant& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ItemGrant::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Annotation", m_annotation, annotation);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "ItemId", m_itemId, itemId);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ItemGrant::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerItemGrant>(*this);
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest() :
    PlayFabServerGrantItemsToUsersRequest{}
{
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src) :
    PlayFabServerGrantItemsToUsersRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_customTags{ src.m_customTags },
    m_itemGrants{ src.m_itemGrants }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(GrantItemsToUsersRequest&& src) :
    PlayFabServerGrantItemsToUsersRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_customTags{ std::move(src.m_customTags) },
    m_itemGrants{ std::move(src.m_itemGrants) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemGrants = m_itemGrants.Empty() ? nullptr : m_itemGrants.Data();
}

GrantItemsToUsersRequest::GrantItemsToUsersRequest(const PlayFabServerGrantItemsToUsersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUsersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemGrants", m_itemGrants, itemGrants, itemGrantsCount);
}

JsonValue GrantItemsToUsersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantItemsToUsersRequest>(*this);
}

GrantItemsToUsersResult::GrantItemsToUsersResult() :
    PlayFabServerGrantItemsToUsersResult{}
{
}

GrantItemsToUsersResult::GrantItemsToUsersResult(const GrantItemsToUsersResult& src) :
    PlayFabServerGrantItemsToUsersResult{ src },
    m_itemGrantResults{ src.m_itemGrantResults }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUsersResult::GrantItemsToUsersResult(GrantItemsToUsersResult&& src) :
    PlayFabServerGrantItemsToUsersResult{ src },
    m_itemGrantResults{ std::move(src.m_itemGrantResults) }
{
    itemGrantResults = m_itemGrantResults.Empty() ? nullptr : m_itemGrantResults.Data();
}

GrantItemsToUsersResult::GrantItemsToUsersResult(const PlayFabServerGrantItemsToUsersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GrantItemsToUsersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemGrantResults", m_itemGrantResults, itemGrantResults, itemGrantResultsCount);
}

JsonValue GrantItemsToUsersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerGrantItemsToUsersResult>(*this);
}

LinkPSNAccountRequest::LinkPSNAccountRequest() :
    PlayFabServerLinkPSNAccountRequest{}
{
}

LinkPSNAccountRequest::LinkPSNAccountRequest(const LinkPSNAccountRequest& src) :
    PlayFabServerLinkPSNAccountRequest{ src },
    m_authCode{ src.m_authCode },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_issuerId{ src.m_issuerId },
    m_playFabId{ src.m_playFabId },
    m_redirectUri{ src.m_redirectUri }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

LinkPSNAccountRequest::LinkPSNAccountRequest(LinkPSNAccountRequest&& src) :
    PlayFabServerLinkPSNAccountRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_redirectUri{ std::move(src.m_redirectUri) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
}

LinkPSNAccountRequest::LinkPSNAccountRequest(const PlayFabServerLinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthCode", m_authCode, authCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
}

JsonValue LinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLinkPSNAccountRequest>(*this);
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest() :
    PlayFabServerLinkServerCustomIdRequest{}
{
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest(const LinkServerCustomIdRequest& src) :
    PlayFabServerLinkServerCustomIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_playFabId{ src.m_playFabId },
    m_serverCustomId{ src.m_serverCustomId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest(LinkServerCustomIdRequest&& src) :
    PlayFabServerLinkServerCustomIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LinkServerCustomIdRequest::LinkServerCustomIdRequest(const PlayFabServerLinkServerCustomIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkServerCustomIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue LinkServerCustomIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLinkServerCustomIdRequest>(*this);
}

LinkXboxAccountRequest::LinkXboxAccountRequest() :
    PlayFabServerLinkXboxAccountRequest{}
{
}

LinkXboxAccountRequest::LinkXboxAccountRequest(const LinkXboxAccountRequest& src) :
    PlayFabServerLinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceLink{ src.m_forceLink },
    m_playFabId{ src.m_playFabId },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LinkXboxAccountRequest::LinkXboxAccountRequest(LinkXboxAccountRequest&& src) :
    PlayFabServerLinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceLink{ std::move(src.m_forceLink) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceLink = m_forceLink ? m_forceLink.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LinkXboxAccountRequest::LinkXboxAccountRequest(const PlayFabServerLinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceLink", m_forceLink, forceLink);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue LinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLinkXboxAccountRequest>(*this);
}

ListUsersCharactersRequest::ListUsersCharactersRequest() :
    PlayFabServerListUsersCharactersRequest{}
{
}

ListUsersCharactersRequest::ListUsersCharactersRequest(const ListUsersCharactersRequest& src) :
    PlayFabServerListUsersCharactersRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ListUsersCharactersRequest::ListUsersCharactersRequest(ListUsersCharactersRequest&& src) :
    PlayFabServerListUsersCharactersRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ListUsersCharactersRequest::ListUsersCharactersRequest(const PlayFabServerListUsersCharactersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListUsersCharactersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ListUsersCharactersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerListUsersCharactersRequest>(*this);
}

size_t ListUsersCharactersRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerListUsersCharactersRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ListUsersCharactersRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerListUsersCharactersRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerListUsersCharactersRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListUsersCharactersResult::ListUsersCharactersResult() :
    PlayFabServerListUsersCharactersResult{}
{
}

ListUsersCharactersResult::ListUsersCharactersResult(const ListUsersCharactersResult& src) :
    PlayFabServerListUsersCharactersResult{ src },
    m_characters{ src.m_characters }
{
    characters = m_characters.Empty() ? nullptr : m_characters.Data();
}

ListUsersCharactersResult::ListUsersCharactersResult(ListUsersCharactersResult&& src) :
    PlayFabServerListUsersCharactersResult{ src },
    m_characters{ std::move(src.m_characters) }
{
    characters = m_characters.Empty() ? nullptr : m_characters.Data();
}

ListUsersCharactersResult::ListUsersCharactersResult(const PlayFabServerListUsersCharactersResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListUsersCharactersResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Characters", m_characters, characters, charactersCount);
}

JsonValue ListUsersCharactersResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerListUsersCharactersResult>(*this);
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties() :
    PlayFabServerLocalizedPushNotificationProperties{}
{
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties(const LocalizedPushNotificationProperties& src) :
    PlayFabServerLocalizedPushNotificationProperties{ src },
    m_message{ src.m_message },
    m_subject{ src.m_subject }
{
    message = m_message.empty() ? nullptr : m_message.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties(LocalizedPushNotificationProperties&& src) :
    PlayFabServerLocalizedPushNotificationProperties{ src },
    m_message{ std::move(src.m_message) },
    m_subject{ std::move(src.m_subject) }
{
    message = m_message.empty() ? nullptr : m_message.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
}

LocalizedPushNotificationProperties::LocalizedPushNotificationProperties(const PlayFabServerLocalizedPushNotificationProperties& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LocalizedPushNotificationProperties::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "Subject", m_subject, subject);
}

JsonValue LocalizedPushNotificationProperties::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLocalizedPushNotificationProperties>(*this);
}

size_t LocalizedPushNotificationProperties::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerLocalizedPushNotificationProperties) };
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_subject.size() + 1);
    return serializedSize;
}

void LocalizedPushNotificationProperties::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerLocalizedPushNotificationProperties{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerLocalizedPushNotificationProperties);
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_subject.data(), m_subject.size() + 1);
    serializedStruct->subject = stringBuffer;
    stringBuffer += m_subject.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest() :
    PlayFabServerLoginWithServerCustomIdRequest{}
{
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest(const LoginWithServerCustomIdRequest& src) :
    PlayFabServerLoginWithServerCustomIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_serverCustomId{ src.m_serverCustomId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest(LoginWithServerCustomIdRequest&& src) :
    PlayFabServerLoginWithServerCustomIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest(const PlayFabServerLoginWithServerCustomIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithServerCustomIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue LoginWithServerCustomIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLoginWithServerCustomIdRequest>(*this);
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest() :
    PlayFabServerLoginWithSteamIdRequest{}
{
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest(const LoginWithSteamIdRequest& src) :
    PlayFabServerLoginWithSteamIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_steamId{ src.m_steamId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest(LoginWithSteamIdRequest&& src) :
    PlayFabServerLoginWithSteamIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_steamId{ std::move(src.m_steamId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest(const PlayFabServerLoginWithSteamIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithSteamIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "SteamId", m_steamId, steamId);
}

JsonValue LoginWithSteamIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLoginWithSteamIdRequest>(*this);
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest() :
    PlayFabServerLoginWithXboxIdRequest{}
{
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest(const LoginWithXboxIdRequest& src) :
    PlayFabServerLoginWithXboxIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_sandbox{ src.m_sandbox },
    m_xboxId{ src.m_xboxId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxId = m_xboxId.empty() ? nullptr : m_xboxId.data();
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest(LoginWithXboxIdRequest&& src) :
    PlayFabServerLoginWithXboxIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_sandbox{ std::move(src.m_sandbox) },
    m_xboxId{ std::move(src.m_xboxId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxId = m_xboxId.empty() ? nullptr : m_xboxId.data();
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest(const PlayFabServerLoginWithXboxIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithXboxIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Sandbox", m_sandbox, sandbox);
    JsonUtils::ObjectGetMember(input, "XboxId", m_xboxId, xboxId);
}

JsonValue LoginWithXboxIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLoginWithXboxIdRequest>(*this);
}

LoginWithXboxRequest::LoginWithXboxRequest() :
    PlayFabServerLoginWithXboxRequest{}
{
}

LoginWithXboxRequest::LoginWithXboxRequest(const LoginWithXboxRequest& src) :
    PlayFabServerLoginWithXboxRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_xboxToken{ src.m_xboxToken }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LoginWithXboxRequest::LoginWithXboxRequest(LoginWithXboxRequest&& src) :
    PlayFabServerLoginWithXboxRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

LoginWithXboxRequest::LoginWithXboxRequest(const PlayFabServerLoginWithXboxRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithXboxRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue LoginWithXboxRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerLoginWithXboxRequest>(*this);
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult() :
    PlayFabServerModifyCharacterVirtualCurrencyResult{}
{
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult(const ModifyCharacterVirtualCurrencyResult& src) :
    PlayFabServerModifyCharacterVirtualCurrencyResult{ src },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult(ModifyCharacterVirtualCurrencyResult&& src) :
    PlayFabServerModifyCharacterVirtualCurrencyResult{ src },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyCharacterVirtualCurrencyResult::ModifyCharacterVirtualCurrencyResult(const PlayFabServerModifyCharacterVirtualCurrencyResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyCharacterVirtualCurrencyResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Balance", balance);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue ModifyCharacterVirtualCurrencyResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerModifyCharacterVirtualCurrencyResult>(*this);
}

size_t ModifyCharacterVirtualCurrencyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerModifyCharacterVirtualCurrencyResult) };
    serializedSize += (m_virtualCurrency.size() + 1);
    return serializedSize;
}

void ModifyCharacterVirtualCurrencyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerModifyCharacterVirtualCurrencyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerModifyCharacterVirtualCurrencyResult);
    memcpy(stringBuffer, m_virtualCurrency.data(), m_virtualCurrency.size() + 1);
    serializedStruct->virtualCurrency = stringBuffer;
    stringBuffer += m_virtualCurrency.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ModifyItemUsesRequest::ModifyItemUsesRequest() :
    PlayFabServerModifyItemUsesRequest{}
{
}

ModifyItemUsesRequest::ModifyItemUsesRequest(const ModifyItemUsesRequest& src) :
    PlayFabServerModifyItemUsesRequest{ src },
    m_customTags{ src.m_customTags },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ModifyItemUsesRequest::ModifyItemUsesRequest(ModifyItemUsesRequest&& src) :
    PlayFabServerModifyItemUsesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ModifyItemUsesRequest::ModifyItemUsesRequest(const PlayFabServerModifyItemUsesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyItemUsesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "UsesToAdd", usesToAdd);
}

JsonValue ModifyItemUsesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerModifyItemUsesRequest>(*this);
}

ModifyItemUsesResult::ModifyItemUsesResult() :
    PlayFabServerModifyItemUsesResult{}
{
}

ModifyItemUsesResult::ModifyItemUsesResult(const ModifyItemUsesResult& src) :
    PlayFabServerModifyItemUsesResult{ src },
    m_itemInstanceId{ src.m_itemInstanceId }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ModifyItemUsesResult::ModifyItemUsesResult(ModifyItemUsesResult&& src) :
    PlayFabServerModifyItemUsesResult{ src },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) }
{
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
}

ModifyItemUsesResult::ModifyItemUsesResult(const PlayFabServerModifyItemUsesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyItemUsesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "RemainingUses", remainingUses);
}

JsonValue ModifyItemUsesResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerModifyItemUsesResult>(*this);
}

size_t ModifyItemUsesResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerModifyItemUsesResult) };
    serializedSize += (m_itemInstanceId.size() + 1);
    return serializedSize;
}

void ModifyItemUsesResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerModifyItemUsesResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerModifyItemUsesResult);
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult() :
    PlayFabServerModifyUserVirtualCurrencyResult{}
{
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src) :
    PlayFabServerModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src) :
    PlayFabServerModifyUserVirtualCurrencyResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

ModifyUserVirtualCurrencyResult::ModifyUserVirtualCurrencyResult(const PlayFabServerModifyUserVirtualCurrencyResult& src)
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
    return JsonUtils::ToJson<PlayFabServerModifyUserVirtualCurrencyResult>(*this);
}

size_t ModifyUserVirtualCurrencyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerModifyUserVirtualCurrencyResult) };
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_virtualCurrency.size() + 1);
    return serializedSize;
}

void ModifyUserVirtualCurrencyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerModifyUserVirtualCurrencyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerModifyUserVirtualCurrencyResult);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_virtualCurrency.data(), m_virtualCurrency.size() + 1);
    serializedStruct->virtualCurrency = stringBuffer;
    stringBuffer += m_virtualCurrency.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest() :
    PlayFabServerMoveItemToCharacterFromCharacterRequest{}
{
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest(const MoveItemToCharacterFromCharacterRequest& src) :
    PlayFabServerMoveItemToCharacterFromCharacterRequest{ src },
    m_givingCharacterId{ src.m_givingCharacterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId },
    m_receivingCharacterId{ src.m_receivingCharacterId }
{
    givingCharacterId = m_givingCharacterId.empty() ? nullptr : m_givingCharacterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    receivingCharacterId = m_receivingCharacterId.empty() ? nullptr : m_receivingCharacterId.data();
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest(MoveItemToCharacterFromCharacterRequest&& src) :
    PlayFabServerMoveItemToCharacterFromCharacterRequest{ src },
    m_givingCharacterId{ std::move(src.m_givingCharacterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_receivingCharacterId{ std::move(src.m_receivingCharacterId) }
{
    givingCharacterId = m_givingCharacterId.empty() ? nullptr : m_givingCharacterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    receivingCharacterId = m_receivingCharacterId.empty() ? nullptr : m_receivingCharacterId.data();
}

MoveItemToCharacterFromCharacterRequest::MoveItemToCharacterFromCharacterRequest(const PlayFabServerMoveItemToCharacterFromCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MoveItemToCharacterFromCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GivingCharacterId", m_givingCharacterId, givingCharacterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ReceivingCharacterId", m_receivingCharacterId, receivingCharacterId);
}

JsonValue MoveItemToCharacterFromCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerMoveItemToCharacterFromCharacterRequest>(*this);
}

size_t MoveItemToCharacterFromCharacterRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerMoveItemToCharacterFromCharacterRequest) };
    serializedSize += (m_givingCharacterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_receivingCharacterId.size() + 1);
    return serializedSize;
}

void MoveItemToCharacterFromCharacterRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerMoveItemToCharacterFromCharacterRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerMoveItemToCharacterFromCharacterRequest);
    memcpy(stringBuffer, m_givingCharacterId.data(), m_givingCharacterId.size() + 1);
    serializedStruct->givingCharacterId = stringBuffer;
    stringBuffer += m_givingCharacterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_receivingCharacterId.data(), m_receivingCharacterId.size() + 1);
    serializedStruct->receivingCharacterId = stringBuffer;
    stringBuffer += m_receivingCharacterId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest() :
    PlayFabServerMoveItemToCharacterFromUserRequest{}
{
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest(const MoveItemToCharacterFromUserRequest& src) :
    PlayFabServerMoveItemToCharacterFromUserRequest{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest(MoveItemToCharacterFromUserRequest&& src) :
    PlayFabServerMoveItemToCharacterFromUserRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToCharacterFromUserRequest::MoveItemToCharacterFromUserRequest(const PlayFabServerMoveItemToCharacterFromUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MoveItemToCharacterFromUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue MoveItemToCharacterFromUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerMoveItemToCharacterFromUserRequest>(*this);
}

size_t MoveItemToCharacterFromUserRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerMoveItemToCharacterFromUserRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void MoveItemToCharacterFromUserRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerMoveItemToCharacterFromUserRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerMoveItemToCharacterFromUserRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest() :
    PlayFabServerMoveItemToUserFromCharacterRequest{}
{
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest(const MoveItemToUserFromCharacterRequest& src) :
    PlayFabServerMoveItemToUserFromCharacterRequest{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest(MoveItemToUserFromCharacterRequest&& src) :
    PlayFabServerMoveItemToUserFromCharacterRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

MoveItemToUserFromCharacterRequest::MoveItemToUserFromCharacterRequest(const PlayFabServerMoveItemToUserFromCharacterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MoveItemToUserFromCharacterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue MoveItemToUserFromCharacterRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerMoveItemToUserFromCharacterRequest>(*this);
}

size_t MoveItemToUserFromCharacterRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerMoveItemToUserFromCharacterRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void MoveItemToUserFromCharacterRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerMoveItemToUserFromCharacterRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerMoveItemToUserFromCharacterRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest() :
    PlayFabServerNotifyMatchmakerPlayerLeftRequest{}
{
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest(const NotifyMatchmakerPlayerLeftRequest& src) :
    PlayFabServerNotifyMatchmakerPlayerLeftRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest(NotifyMatchmakerPlayerLeftRequest&& src) :
    PlayFabServerNotifyMatchmakerPlayerLeftRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest(const PlayFabServerNotifyMatchmakerPlayerLeftRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NotifyMatchmakerPlayerLeftRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue NotifyMatchmakerPlayerLeftRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerNotifyMatchmakerPlayerLeftRequest>(*this);
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult() :
    PlayFabServerNotifyMatchmakerPlayerLeftResult{}
{
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult(const NotifyMatchmakerPlayerLeftResult& src) :
    PlayFabServerNotifyMatchmakerPlayerLeftResult{ src },
    m_playerState{ src.m_playerState }
{
    playerState = m_playerState ? m_playerState.operator->() : nullptr;
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult(NotifyMatchmakerPlayerLeftResult&& src) :
    PlayFabServerNotifyMatchmakerPlayerLeftResult{ src },
    m_playerState{ std::move(src.m_playerState) }
{
    playerState = m_playerState ? m_playerState.operator->() : nullptr;
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult(const PlayFabServerNotifyMatchmakerPlayerLeftResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NotifyMatchmakerPlayerLeftResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerState", m_playerState, playerState);
}

JsonValue NotifyMatchmakerPlayerLeftResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerNotifyMatchmakerPlayerLeftResult>(*this);
}

PushNotificationPackage::PushNotificationPackage() :
    PlayFabServerPushNotificationPackage{}
{
}

PushNotificationPackage::PushNotificationPackage(const PushNotificationPackage& src) :
    PlayFabServerPushNotificationPackage{ src },
    m_customData{ src.m_customData },
    m_icon{ src.m_icon },
    m_message{ src.m_message },
    m_sound{ src.m_sound },
    m_title{ src.m_title }
{
    customData = m_customData.empty() ? nullptr : m_customData.data();
    icon = m_icon.empty() ? nullptr : m_icon.data();
    message = m_message.empty() ? nullptr : m_message.data();
    sound = m_sound.empty() ? nullptr : m_sound.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

PushNotificationPackage::PushNotificationPackage(PushNotificationPackage&& src) :
    PlayFabServerPushNotificationPackage{ src },
    m_customData{ std::move(src.m_customData) },
    m_icon{ std::move(src.m_icon) },
    m_message{ std::move(src.m_message) },
    m_sound{ std::move(src.m_sound) },
    m_title{ std::move(src.m_title) }
{
    customData = m_customData.empty() ? nullptr : m_customData.data();
    icon = m_icon.empty() ? nullptr : m_icon.data();
    message = m_message.empty() ? nullptr : m_message.data();
    sound = m_sound.empty() ? nullptr : m_sound.data();
    title = m_title.empty() ? nullptr : m_title.data();
}

PushNotificationPackage::PushNotificationPackage(const PlayFabServerPushNotificationPackage& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PushNotificationPackage::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Badge", badge);
    JsonUtils::ObjectGetMember(input, "CustomData", m_customData, customData);
    JsonUtils::ObjectGetMember(input, "Icon", m_icon, icon);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "Sound", m_sound, sound);
    JsonUtils::ObjectGetMember(input, "Title", m_title, title);
}

JsonValue PushNotificationPackage::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerPushNotificationPackage>(*this);
}

size_t PushNotificationPackage::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerPushNotificationPackage) };
    serializedSize += (m_customData.size() + 1);
    serializedSize += (m_icon.size() + 1);
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_sound.size() + 1);
    serializedSize += (m_title.size() + 1);
    return serializedSize;
}

void PushNotificationPackage::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerPushNotificationPackage{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerPushNotificationPackage);
    memcpy(stringBuffer, m_customData.data(), m_customData.size() + 1);
    serializedStruct->customData = stringBuffer;
    stringBuffer += m_customData.size() + 1;
    memcpy(stringBuffer, m_icon.data(), m_icon.size() + 1);
    serializedStruct->icon = stringBuffer;
    stringBuffer += m_icon.size() + 1;
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_sound.data(), m_sound.size() + 1);
    serializedStruct->sound = stringBuffer;
    stringBuffer += m_sound.size() + 1;
    memcpy(stringBuffer, m_title.data(), m_title.size() + 1);
    serializedStruct->title = stringBuffer;
    stringBuffer += m_title.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RedeemCouponRequest::RedeemCouponRequest() :
    PlayFabServerRedeemCouponRequest{}
{
}

RedeemCouponRequest::RedeemCouponRequest(const RedeemCouponRequest& src) :
    PlayFabServerRedeemCouponRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_couponCode{ src.m_couponCode },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RedeemCouponRequest::RedeemCouponRequest(RedeemCouponRequest&& src) :
    PlayFabServerRedeemCouponRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_couponCode{ std::move(src.m_couponCode) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    couponCode = m_couponCode.empty() ? nullptr : m_couponCode.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RedeemCouponRequest::RedeemCouponRequest(const PlayFabServerRedeemCouponRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RedeemCouponRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CouponCode", m_couponCode, couponCode);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RedeemCouponRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRedeemCouponRequest>(*this);
}

RedeemCouponResult::RedeemCouponResult() :
    PlayFabServerRedeemCouponResult{}
{
}

RedeemCouponResult::RedeemCouponResult(const RedeemCouponResult& src) :
    PlayFabServerRedeemCouponResult{ src },
    m_grantedItems{ src.m_grantedItems }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
}

RedeemCouponResult::RedeemCouponResult(RedeemCouponResult&& src) :
    PlayFabServerRedeemCouponResult{ src },
    m_grantedItems{ std::move(src.m_grantedItems) }
{
    grantedItems = m_grantedItems.Empty() ? nullptr : m_grantedItems.Data();
}

RedeemCouponResult::RedeemCouponResult(const PlayFabServerRedeemCouponResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RedeemCouponResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GrantedItems", m_grantedItems, grantedItems, grantedItemsCount);
}

JsonValue RedeemCouponResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRedeemCouponResult>(*this);
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest() :
    PlayFabServerRedeemMatchmakerTicketRequest{}
{
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest(const RedeemMatchmakerTicketRequest& src) :
    PlayFabServerRedeemMatchmakerTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_ticket{ src.m_ticket }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest(RedeemMatchmakerTicketRequest&& src) :
    PlayFabServerRedeemMatchmakerTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_ticket{ std::move(src.m_ticket) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest(const PlayFabServerRedeemMatchmakerTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RedeemMatchmakerTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "Ticket", m_ticket, ticket);
}

JsonValue RedeemMatchmakerTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRedeemMatchmakerTicketRequest>(*this);
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult() :
    PlayFabServerRedeemMatchmakerTicketResult{}
{
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult(const RedeemMatchmakerTicketResult& src) :
    PlayFabServerRedeemMatchmakerTicketResult{ src },
    m_error{ src.m_error },
    m_userInfo{ src.m_userInfo }
{
    error = m_error.empty() ? nullptr : m_error.data();
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult(RedeemMatchmakerTicketResult&& src) :
    PlayFabServerRedeemMatchmakerTicketResult{ src },
    m_error{ std::move(src.m_error) },
    m_userInfo{ std::move(src.m_userInfo) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult(const PlayFabServerRedeemMatchmakerTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RedeemMatchmakerTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "TicketIsValid", ticketIsValid);
    JsonUtils::ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
}

JsonValue RedeemMatchmakerTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRedeemMatchmakerTicketResult>(*this);
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest() :
    PlayFabServerRefreshGameServerInstanceHeartbeatRequest{}
{
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest(const RefreshGameServerInstanceHeartbeatRequest& src) :
    PlayFabServerRefreshGameServerInstanceHeartbeatRequest{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest(RefreshGameServerInstanceHeartbeatRequest&& src) :
    PlayFabServerRefreshGameServerInstanceHeartbeatRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest(const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RefreshGameServerInstanceHeartbeatRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue RefreshGameServerInstanceHeartbeatRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRefreshGameServerInstanceHeartbeatRequest>(*this);
}

size_t RefreshGameServerInstanceHeartbeatRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerRefreshGameServerInstanceHeartbeatRequest) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void RefreshGameServerInstanceHeartbeatRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerRefreshGameServerInstanceHeartbeatRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerRefreshGameServerInstanceHeartbeatRequest);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RegisterGameRequest::RegisterGameRequest() :
    PlayFabServerRegisterGameRequest{}
{
}

RegisterGameRequest::RegisterGameRequest(const RegisterGameRequest& src) :
    PlayFabServerRegisterGameRequest{ src },
    m_build{ src.m_build },
    m_customTags{ src.m_customTags },
    m_gameMode{ src.m_gameMode },
    m_lobbyId{ src.m_lobbyId },
    m_serverIPV4Address{ src.m_serverIPV4Address },
    m_serverIPV6Address{ src.m_serverIPV6Address },
    m_serverPort{ src.m_serverPort },
    m_serverPublicDNSName{ src.m_serverPublicDNSName },
    m_tags{ src.m_tags }
{
    build = m_build.empty() ? nullptr : m_build.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort.empty() ? nullptr : m_serverPort.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

RegisterGameRequest::RegisterGameRequest(RegisterGameRequest&& src) :
    PlayFabServerRegisterGameRequest{ src },
    m_build{ std::move(src.m_build) },
    m_customTags{ std::move(src.m_customTags) },
    m_gameMode{ std::move(src.m_gameMode) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_serverIPV4Address{ std::move(src.m_serverIPV4Address) },
    m_serverIPV6Address{ std::move(src.m_serverIPV6Address) },
    m_serverPort{ std::move(src.m_serverPort) },
    m_serverPublicDNSName{ std::move(src.m_serverPublicDNSName) },
    m_tags{ std::move(src.m_tags) }
{
    build = m_build.empty() ? nullptr : m_build.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPort = m_serverPort.empty() ? nullptr : m_serverPort.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

RegisterGameRequest::RegisterGameRequest(const PlayFabServerRegisterGameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterGameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Build", m_build, build);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "Region", region);
    JsonUtils::ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
    JsonUtils::ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
    JsonUtils::ObjectGetMember(input, "ServerPort", m_serverPort, serverPort);
    JsonUtils::ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue RegisterGameRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRegisterGameRequest>(*this);
}

RegisterGameResponse::RegisterGameResponse() :
    PlayFabServerRegisterGameResponse{}
{
}

RegisterGameResponse::RegisterGameResponse(const RegisterGameResponse& src) :
    PlayFabServerRegisterGameResponse{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RegisterGameResponse::RegisterGameResponse(RegisterGameResponse&& src) :
    PlayFabServerRegisterGameResponse{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RegisterGameResponse::RegisterGameResponse(const PlayFabServerRegisterGameResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterGameResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue RegisterGameResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRegisterGameResponse>(*this);
}

size_t RegisterGameResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerRegisterGameResponse) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void RegisterGameResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerRegisterGameResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerRegisterGameResponse);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RemoveFriendRequest::RemoveFriendRequest() :
    PlayFabServerRemoveFriendRequest{}
{
}

RemoveFriendRequest::RemoveFriendRequest(const RemoveFriendRequest& src) :
    PlayFabServerRemoveFriendRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_playFabId{ src.m_playFabId }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RemoveFriendRequest::RemoveFriendRequest(RemoveFriendRequest&& src) :
    PlayFabServerRemoveFriendRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RemoveFriendRequest::RemoveFriendRequest(const PlayFabServerRemoveFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RemoveFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRemoveFriendRequest>(*this);
}

size_t RemoveFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerRemoveFriendRequest) };
    serializedSize += (m_friendPlayFabId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RemoveFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerRemoveFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerRemoveFriendRequest);
    memcpy(stringBuffer, m_friendPlayFabId.data(), m_friendPlayFabId.size() + 1);
    serializedStruct->friendPlayFabId = stringBuffer;
    stringBuffer += m_friendPlayFabId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RemoveGenericIDRequest::RemoveGenericIDRequest() :
    PlayFabServerRemoveGenericIDRequest{}
{
}

RemoveGenericIDRequest::RemoveGenericIDRequest(const RemoveGenericIDRequest& src) :
    PlayFabServerRemoveGenericIDRequest{ src },
    m_genericId{ src.m_genericId },
    m_playFabId{ src.m_playFabId }
{
    genericId = (PlayFabServerGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RemoveGenericIDRequest::RemoveGenericIDRequest(RemoveGenericIDRequest&& src) :
    PlayFabServerRemoveGenericIDRequest{ src },
    m_genericId{ std::move(src.m_genericId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    genericId = (PlayFabServerGenericServiceId const*)&m_genericId;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RemoveGenericIDRequest::RemoveGenericIDRequest(const PlayFabServerRemoveGenericIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemoveGenericIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GenericId", m_genericId, genericId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RemoveGenericIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRemoveGenericIDRequest>(*this);
}

RemovePlayerTagRequest::RemovePlayerTagRequest() :
    PlayFabServerRemovePlayerTagRequest{}
{
}

RemovePlayerTagRequest::RemovePlayerTagRequest(const RemovePlayerTagRequest& src) :
    PlayFabServerRemovePlayerTagRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_tagName{ src.m_tagName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

RemovePlayerTagRequest::RemovePlayerTagRequest(RemovePlayerTagRequest&& src) :
    PlayFabServerRemovePlayerTagRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tagName{ std::move(src.m_tagName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tagName = m_tagName.empty() ? nullptr : m_tagName.data();
}

RemovePlayerTagRequest::RemovePlayerTagRequest(const PlayFabServerRemovePlayerTagRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RemovePlayerTagRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "TagName", m_tagName, tagName);
}

JsonValue RemovePlayerTagRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRemovePlayerTagRequest>(*this);
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest() :
    PlayFabServerRemoveSharedGroupMembersRequest{}
{
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(const RemoveSharedGroupMembersRequest& src) :
    PlayFabServerRemoveSharedGroupMembersRequest{ src },
    m_playFabIds{ src.m_playFabIds },
    m_sharedGroupId{ src.m_sharedGroupId }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(RemoveSharedGroupMembersRequest&& src) :
    PlayFabServerRemoveSharedGroupMembersRequest{ src },
    m_playFabIds{ std::move(src.m_playFabIds) },
    m_sharedGroupId{ std::move(src.m_sharedGroupId) }
{
    playFabIds = m_playFabIds.Empty() ? nullptr : m_playFabIds.Data();
    sharedGroupId = m_sharedGroupId.empty() ? nullptr : m_sharedGroupId.data();
}

RemoveSharedGroupMembersRequest::RemoveSharedGroupMembersRequest(const PlayFabServerRemoveSharedGroupMembersRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerRemoveSharedGroupMembersRequest>(*this);
}

ReportPlayerServerRequest::ReportPlayerServerRequest() :
    PlayFabServerReportPlayerServerRequest{}
{
}

ReportPlayerServerRequest::ReportPlayerServerRequest(const ReportPlayerServerRequest& src) :
    PlayFabServerReportPlayerServerRequest{ src },
    m_comment{ src.m_comment },
    m_customTags{ src.m_customTags },
    m_reporteeId{ src.m_reporteeId },
    m_reporterId{ src.m_reporterId }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
    reporterId = m_reporterId.empty() ? nullptr : m_reporterId.data();
}

ReportPlayerServerRequest::ReportPlayerServerRequest(ReportPlayerServerRequest&& src) :
    PlayFabServerReportPlayerServerRequest{ src },
    m_comment{ std::move(src.m_comment) },
    m_customTags{ std::move(src.m_customTags) },
    m_reporteeId{ std::move(src.m_reporteeId) },
    m_reporterId{ std::move(src.m_reporterId) }
{
    comment = m_comment.empty() ? nullptr : m_comment.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    reporteeId = m_reporteeId.empty() ? nullptr : m_reporteeId.data();
    reporterId = m_reporterId.empty() ? nullptr : m_reporterId.data();
}

ReportPlayerServerRequest::ReportPlayerServerRequest(const PlayFabServerReportPlayerServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ReporteeId", m_reporteeId, reporteeId);
    JsonUtils::ObjectGetMember(input, "ReporterId", m_reporterId, reporterId);
}

JsonValue ReportPlayerServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerReportPlayerServerRequest>(*this);
}

ReportPlayerServerResult::ReportPlayerServerResult() :
    PlayFabServerReportPlayerServerResult{}
{
}


ReportPlayerServerResult::ReportPlayerServerResult(const PlayFabServerReportPlayerServerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ReportPlayerServerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SubmissionsRemaining", submissionsRemaining);
}

JsonValue ReportPlayerServerResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerReportPlayerServerResult>(*this);
}

size_t ReportPlayerServerResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerReportPlayerServerResult) };
    return serializedSize;
}

void ReportPlayerServerResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerReportPlayerServerResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerReportPlayerServerResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest() :
    PlayFabServerRevokeAllBansForUserRequest{}
{
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src) :
    PlayFabServerRevokeAllBansForUserRequest{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(RevokeAllBansForUserRequest&& src) :
    PlayFabServerRevokeAllBansForUserRequest{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeAllBansForUserRequest::RevokeAllBansForUserRequest(const PlayFabServerRevokeAllBansForUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeAllBansForUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeAllBansForUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeAllBansForUserRequest>(*this);
}

size_t RevokeAllBansForUserRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerRevokeAllBansForUserRequest) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeAllBansForUserRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerRevokeAllBansForUserRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerRevokeAllBansForUserRequest);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult() :
    PlayFabServerRevokeAllBansForUserResult{}
{
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src) :
    PlayFabServerRevokeAllBansForUserResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(RevokeAllBansForUserResult&& src) :
    PlayFabServerRevokeAllBansForUserResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeAllBansForUserResult::RevokeAllBansForUserResult(const PlayFabServerRevokeAllBansForUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeAllBansForUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue RevokeAllBansForUserResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeAllBansForUserResult>(*this);
}

RevokeBansRequest::RevokeBansRequest() :
    PlayFabServerRevokeBansRequest{}
{
}

RevokeBansRequest::RevokeBansRequest(const RevokeBansRequest& src) :
    PlayFabServerRevokeBansRequest{ src },
    m_banIds{ src.m_banIds }
{
    banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
}

RevokeBansRequest::RevokeBansRequest(RevokeBansRequest&& src) :
    PlayFabServerRevokeBansRequest{ src },
    m_banIds{ std::move(src.m_banIds) }
{
    banIds = m_banIds.Empty() ? nullptr : m_banIds.Data();
}

RevokeBansRequest::RevokeBansRequest(const PlayFabServerRevokeBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanIds", m_banIds, banIds, banIdsCount);
}

JsonValue RevokeBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeBansRequest>(*this);
}

RevokeBansResult::RevokeBansResult() :
    PlayFabServerRevokeBansResult{}
{
}

RevokeBansResult::RevokeBansResult(const RevokeBansResult& src) :
    PlayFabServerRevokeBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeBansResult::RevokeBansResult(RevokeBansResult&& src) :
    PlayFabServerRevokeBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

RevokeBansResult::RevokeBansResult(const PlayFabServerRevokeBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue RevokeBansResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeBansResult>(*this);
}

RevokeInventoryItem::RevokeInventoryItem() :
    PlayFabServerRevokeInventoryItem{}
{
}

RevokeInventoryItem::RevokeInventoryItem(const RevokeInventoryItem& src) :
    PlayFabServerRevokeInventoryItem{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItem::RevokeInventoryItem(RevokeInventoryItem&& src) :
    PlayFabServerRevokeInventoryItem{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItem::RevokeInventoryItem(const PlayFabServerRevokeInventoryItem& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItem::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeInventoryItem::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeInventoryItem>(*this);
}

size_t RevokeInventoryItem::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerRevokeInventoryItem) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeInventoryItem::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerRevokeInventoryItem{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerRevokeInventoryItem);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest() :
    PlayFabServerRevokeInventoryItemRequest{}
{
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src) :
    PlayFabServerRevokeInventoryItemRequest{ src },
    m_characterId{ src.m_characterId },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(RevokeInventoryItemRequest&& src) :
    PlayFabServerRevokeInventoryItemRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

RevokeInventoryItemRequest::RevokeInventoryItemRequest(const PlayFabServerRevokeInventoryItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue RevokeInventoryItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeInventoryItemRequest>(*this);
}

size_t RevokeInventoryItemRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerRevokeInventoryItemRequest) };
    serializedSize += (m_characterId.size() + 1);
    serializedSize += (m_itemInstanceId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void RevokeInventoryItemRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerRevokeInventoryItemRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerRevokeInventoryItemRequest);
    memcpy(stringBuffer, m_characterId.data(), m_characterId.size() + 1);
    serializedStruct->characterId = stringBuffer;
    stringBuffer += m_characterId.size() + 1;
    memcpy(stringBuffer, m_itemInstanceId.data(), m_itemInstanceId.size() + 1);
    serializedStruct->itemInstanceId = stringBuffer;
    stringBuffer += m_itemInstanceId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest() :
    PlayFabServerRevokeInventoryItemsRequest{}
{
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src) :
    PlayFabServerRevokeInventoryItemsRequest{ src },
    m_items{ src.m_items }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(RevokeInventoryItemsRequest&& src) :
    PlayFabServerRevokeInventoryItemsRequest{ src },
    m_items{ std::move(src.m_items) }
{
    items = m_items.Empty() ? nullptr : m_items.Data();
}

RevokeInventoryItemsRequest::RevokeInventoryItemsRequest(const PlayFabServerRevokeInventoryItemsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Items", m_items, items, itemsCount);
}

JsonValue RevokeInventoryItemsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeInventoryItemsRequest>(*this);
}

RevokeItemError::RevokeItemError() :
    PlayFabServerRevokeItemError{}
{
}

RevokeItemError::RevokeItemError(const RevokeItemError& src) :
    PlayFabServerRevokeItemError{ src },
    m_error{ src.m_error },
    m_item{ src.m_item }
{
    error = m_error ? m_error.operator->() : nullptr;
    item = m_item ? m_item.operator->() : nullptr;
}

RevokeItemError::RevokeItemError(RevokeItemError&& src) :
    PlayFabServerRevokeItemError{ src },
    m_error{ std::move(src.m_error) },
    m_item{ std::move(src.m_item) }
{
    error = m_error ? m_error.operator->() : nullptr;
    item = m_item ? m_item.operator->() : nullptr;
}

RevokeItemError::RevokeItemError(const PlayFabServerRevokeItemError& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeItemError::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Error", m_error, error);
    JsonUtils::ObjectGetMember(input, "Item", m_item, item);
}

JsonValue RevokeItemError::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeItemError>(*this);
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult() :
    PlayFabServerRevokeInventoryItemsResult{}
{
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src) :
    PlayFabServerRevokeInventoryItemsResult{ src },
    m_errors{ src.m_errors }
{
    errors = m_errors.Empty() ? nullptr : m_errors.Data();
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(RevokeInventoryItemsResult&& src) :
    PlayFabServerRevokeInventoryItemsResult{ src },
    m_errors{ std::move(src.m_errors) }
{
    errors = m_errors.Empty() ? nullptr : m_errors.Data();
}

RevokeInventoryItemsResult::RevokeInventoryItemsResult(const PlayFabServerRevokeInventoryItemsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RevokeInventoryItemsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Errors", m_errors, errors, errorsCount);
}

JsonValue RevokeInventoryItemsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerRevokeInventoryItemsResult>(*this);
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest() :
    PlayFabServerSavePushNotificationTemplateRequest{}
{
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest(const SavePushNotificationTemplateRequest& src) :
    PlayFabServerSavePushNotificationTemplateRequest{ src },
    m_androidPayload{ src.m_androidPayload },
    m_id{ src.m_id },
    m_iOSPayload{ src.m_iOSPayload },
    m_localizedPushNotificationTemplates{ src.m_localizedPushNotificationTemplates },
    m_name{ src.m_name }
{
    androidPayload = m_androidPayload.empty() ? nullptr : m_androidPayload.data();
    id = m_id.empty() ? nullptr : m_id.data();
    iOSPayload = m_iOSPayload.empty() ? nullptr : m_iOSPayload.data();
    localizedPushNotificationTemplates = m_localizedPushNotificationTemplates.Empty() ? nullptr : m_localizedPushNotificationTemplates.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest(SavePushNotificationTemplateRequest&& src) :
    PlayFabServerSavePushNotificationTemplateRequest{ src },
    m_androidPayload{ std::move(src.m_androidPayload) },
    m_id{ std::move(src.m_id) },
    m_iOSPayload{ std::move(src.m_iOSPayload) },
    m_localizedPushNotificationTemplates{ std::move(src.m_localizedPushNotificationTemplates) },
    m_name{ std::move(src.m_name) }
{
    androidPayload = m_androidPayload.empty() ? nullptr : m_androidPayload.data();
    id = m_id.empty() ? nullptr : m_id.data();
    iOSPayload = m_iOSPayload.empty() ? nullptr : m_iOSPayload.data();
    localizedPushNotificationTemplates = m_localizedPushNotificationTemplates.Empty() ? nullptr : m_localizedPushNotificationTemplates.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

SavePushNotificationTemplateRequest::SavePushNotificationTemplateRequest(const PlayFabServerSavePushNotificationTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SavePushNotificationTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidPayload", m_androidPayload, androidPayload);
    JsonUtils::ObjectGetMember(input, "Id", m_id, id);
    JsonUtils::ObjectGetMember(input, "IOSPayload", m_iOSPayload, iOSPayload);
    JsonUtils::ObjectGetMember(input, "LocalizedPushNotificationTemplates", m_localizedPushNotificationTemplates, localizedPushNotificationTemplates, localizedPushNotificationTemplatesCount);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue SavePushNotificationTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSavePushNotificationTemplateRequest>(*this);
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult() :
    PlayFabServerSavePushNotificationTemplateResult{}
{
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult(const SavePushNotificationTemplateResult& src) :
    PlayFabServerSavePushNotificationTemplateResult{ src },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult(SavePushNotificationTemplateResult&& src) :
    PlayFabServerSavePushNotificationTemplateResult{ src },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) }
{
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
}

SavePushNotificationTemplateResult::SavePushNotificationTemplateResult(const PlayFabServerSavePushNotificationTemplateResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SavePushNotificationTemplateResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
}

JsonValue SavePushNotificationTemplateResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSavePushNotificationTemplateResult>(*this);
}

size_t SavePushNotificationTemplateResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerSavePushNotificationTemplateResult) };
    serializedSize += (m_pushNotificationTemplateId.size() + 1);
    return serializedSize;
}

void SavePushNotificationTemplateResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerSavePushNotificationTemplateResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerSavePushNotificationTemplateResult);
    memcpy(stringBuffer, m_pushNotificationTemplateId.data(), m_pushNotificationTemplateId.size() + 1);
    serializedStruct->pushNotificationTemplateId = stringBuffer;
    stringBuffer += m_pushNotificationTemplateId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest() :
    PlayFabServerSendCustomAccountRecoveryEmailRequest{}
{
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest(const SendCustomAccountRecoveryEmailRequest& src) :
    PlayFabServerSendCustomAccountRecoveryEmailRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest(SendCustomAccountRecoveryEmailRequest&& src) :
    PlayFabServerSendCustomAccountRecoveryEmailRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

SendCustomAccountRecoveryEmailRequest::SendCustomAccountRecoveryEmailRequest(const PlayFabServerSendCustomAccountRecoveryEmailRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendCustomAccountRecoveryEmailRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue SendCustomAccountRecoveryEmailRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSendCustomAccountRecoveryEmailRequest>(*this);
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest() :
    PlayFabServerSendEmailFromTemplateRequest{}
{
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest(const SendEmailFromTemplateRequest& src) :
    PlayFabServerSendEmailFromTemplateRequest{ src },
    m_customTags{ src.m_customTags },
    m_emailTemplateId{ src.m_emailTemplateId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest(SendEmailFromTemplateRequest&& src) :
    PlayFabServerSendEmailFromTemplateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_emailTemplateId{ std::move(src.m_emailTemplateId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    emailTemplateId = m_emailTemplateId.empty() ? nullptr : m_emailTemplateId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SendEmailFromTemplateRequest::SendEmailFromTemplateRequest(const PlayFabServerSendEmailFromTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendEmailFromTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EmailTemplateId", m_emailTemplateId, emailTemplateId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue SendEmailFromTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSendEmailFromTemplateRequest>(*this);
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest() :
    PlayFabServerSendPushNotificationFromTemplateRequest{}
{
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest(const SendPushNotificationFromTemplateRequest& src) :
    PlayFabServerSendPushNotificationFromTemplateRequest{ src },
    m_customTags{ src.m_customTags },
    m_pushNotificationTemplateId{ src.m_pushNotificationTemplateId },
    m_recipient{ src.m_recipient }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest(SendPushNotificationFromTemplateRequest&& src) :
    PlayFabServerSendPushNotificationFromTemplateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pushNotificationTemplateId{ std::move(src.m_pushNotificationTemplateId) },
    m_recipient{ std::move(src.m_recipient) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pushNotificationTemplateId = m_pushNotificationTemplateId.empty() ? nullptr : m_pushNotificationTemplateId.data();
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
}

SendPushNotificationFromTemplateRequest::SendPushNotificationFromTemplateRequest(const PlayFabServerSendPushNotificationFromTemplateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendPushNotificationFromTemplateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PushNotificationTemplateId", m_pushNotificationTemplateId, pushNotificationTemplateId);
    JsonUtils::ObjectGetMember(input, "Recipient", m_recipient, recipient);
}

JsonValue SendPushNotificationFromTemplateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSendPushNotificationFromTemplateRequest>(*this);
}

SendPushNotificationRequest::SendPushNotificationRequest() :
    PlayFabServerSendPushNotificationRequest{}
{
}

SendPushNotificationRequest::SendPushNotificationRequest(const SendPushNotificationRequest& src) :
    PlayFabServerSendPushNotificationRequest{ src },
    m_advancedPlatformDelivery{ src.m_advancedPlatformDelivery },
    m_customTags{ src.m_customTags },
    m_message{ src.m_message },
    m_package{ src.m_package },
    m_recipient{ src.m_recipient },
    m_subject{ src.m_subject },
    m_targetPlatforms{ src.m_targetPlatforms }
{
    advancedPlatformDelivery = m_advancedPlatformDelivery.Empty() ? nullptr : m_advancedPlatformDelivery.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    message = m_message.empty() ? nullptr : m_message.data();
    package = m_package ? m_package.operator->() : nullptr;
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
    targetPlatforms = m_targetPlatforms.empty() ? nullptr : m_targetPlatforms.data();
}

SendPushNotificationRequest::SendPushNotificationRequest(SendPushNotificationRequest&& src) :
    PlayFabServerSendPushNotificationRequest{ src },
    m_advancedPlatformDelivery{ std::move(src.m_advancedPlatformDelivery) },
    m_customTags{ std::move(src.m_customTags) },
    m_message{ std::move(src.m_message) },
    m_package{ std::move(src.m_package) },
    m_recipient{ std::move(src.m_recipient) },
    m_subject{ std::move(src.m_subject) },
    m_targetPlatforms{ std::move(src.m_targetPlatforms) }
{
    advancedPlatformDelivery = m_advancedPlatformDelivery.Empty() ? nullptr : m_advancedPlatformDelivery.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    message = m_message.empty() ? nullptr : m_message.data();
    package = m_package ? m_package.operator->() : nullptr;
    recipient = m_recipient.empty() ? nullptr : m_recipient.data();
    subject = m_subject.empty() ? nullptr : m_subject.data();
    targetPlatforms = m_targetPlatforms.empty() ? nullptr : m_targetPlatforms.data();
}

SendPushNotificationRequest::SendPushNotificationRequest(const PlayFabServerSendPushNotificationRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SendPushNotificationRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AdvancedPlatformDelivery", m_advancedPlatformDelivery, advancedPlatformDelivery, advancedPlatformDeliveryCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "Package", m_package, package);
    JsonUtils::ObjectGetMember(input, "Recipient", m_recipient, recipient);
    JsonUtils::ObjectGetMember(input, "Subject", m_subject, subject);
    JsonUtils::ObjectGetMember(input, "TargetPlatforms", m_targetPlatforms, targetPlatforms, targetPlatformsCount);
}

JsonValue SendPushNotificationRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSendPushNotificationRequest>(*this);
}

SetFriendTagsRequest::SetFriendTagsRequest() :
    PlayFabServerSetFriendTagsRequest{}
{
}

SetFriendTagsRequest::SetFriendTagsRequest(const SetFriendTagsRequest& src) :
    PlayFabServerSetFriendTagsRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_playFabId{ src.m_playFabId },
    m_tags{ src.m_tags }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetFriendTagsRequest::SetFriendTagsRequest(SetFriendTagsRequest&& src) :
    PlayFabServerSetFriendTagsRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tags{ std::move(src.m_tags) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetFriendTagsRequest::SetFriendTagsRequest(const PlayFabServerSetFriendTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetFriendTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue SetFriendTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSetFriendTagsRequest>(*this);
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest() :
    PlayFabServerSetGameServerInstanceDataRequest{}
{
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest(const SetGameServerInstanceDataRequest& src) :
    PlayFabServerSetGameServerInstanceDataRequest{ src },
    m_gameServerData{ src.m_gameServerData },
    m_lobbyId{ src.m_lobbyId }
{
    gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest(SetGameServerInstanceDataRequest&& src) :
    PlayFabServerSetGameServerInstanceDataRequest{ src },
    m_gameServerData{ std::move(src.m_gameServerData) },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest(const PlayFabServerSetGameServerInstanceDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetGameServerInstanceDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameServerData", m_gameServerData, gameServerData);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue SetGameServerInstanceDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSetGameServerInstanceDataRequest>(*this);
}

size_t SetGameServerInstanceDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerSetGameServerInstanceDataRequest) };
    serializedSize += (m_gameServerData.size() + 1);
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void SetGameServerInstanceDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerSetGameServerInstanceDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerSetGameServerInstanceDataRequest);
    memcpy(stringBuffer, m_gameServerData.data(), m_gameServerData.size() + 1);
    serializedStruct->gameServerData = stringBuffer;
    stringBuffer += m_gameServerData.size() + 1;
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest() :
    PlayFabServerSetGameServerInstanceStateRequest{}
{
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest(const SetGameServerInstanceStateRequest& src) :
    PlayFabServerSetGameServerInstanceStateRequest{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest(SetGameServerInstanceStateRequest&& src) :
    PlayFabServerSetGameServerInstanceStateRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest(const PlayFabServerSetGameServerInstanceStateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetGameServerInstanceStateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "State", state);
}

JsonValue SetGameServerInstanceStateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSetGameServerInstanceStateRequest>(*this);
}

size_t SetGameServerInstanceStateRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerSetGameServerInstanceStateRequest) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void SetGameServerInstanceStateRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerSetGameServerInstanceStateRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerSetGameServerInstanceStateRequest);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest() :
    PlayFabServerSetGameServerInstanceTagsRequest{}
{
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest(const SetGameServerInstanceTagsRequest& src) :
    PlayFabServerSetGameServerInstanceTagsRequest{ src },
    m_lobbyId{ src.m_lobbyId },
    m_tags{ src.m_tags }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest(SetGameServerInstanceTagsRequest&& src) :
    PlayFabServerSetGameServerInstanceTagsRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_tags{ std::move(src.m_tags) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest(const PlayFabServerSetGameServerInstanceTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetGameServerInstanceTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue SetGameServerInstanceTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSetGameServerInstanceTagsRequest>(*this);
}

SetPlayerSecretRequest::SetPlayerSecretRequest() :
    PlayFabServerSetPlayerSecretRequest{}
{
}

SetPlayerSecretRequest::SetPlayerSecretRequest(const SetPlayerSecretRequest& src) :
    PlayFabServerSetPlayerSecretRequest{ src },
    m_playerSecret{ src.m_playerSecret },
    m_playFabId{ src.m_playFabId }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SetPlayerSecretRequest::SetPlayerSecretRequest(SetPlayerSecretRequest&& src) :
    PlayFabServerSetPlayerSecretRequest{ src },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

SetPlayerSecretRequest::SetPlayerSecretRequest(const PlayFabServerSetPlayerSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetPlayerSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue SetPlayerSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSetPlayerSecretRequest>(*this);
}

size_t SetPlayerSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerSetPlayerSecretRequest) };
    serializedSize += (m_playerSecret.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void SetPlayerSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerSetPlayerSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerSetPlayerSecretRequest);
    memcpy(stringBuffer, m_playerSecret.data(), m_playerSecret.size() + 1);
    serializedStruct->playerSecret = stringBuffer;
    stringBuffer += m_playerSecret.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetPublisherDataRequest::SetPublisherDataRequest() :
    PlayFabServerSetPublisherDataRequest{}
{
}

SetPublisherDataRequest::SetPublisherDataRequest(const SetPublisherDataRequest& src) :
    PlayFabServerSetPublisherDataRequest{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetPublisherDataRequest::SetPublisherDataRequest(SetPublisherDataRequest&& src) :
    PlayFabServerSetPublisherDataRequest{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetPublisherDataRequest::SetPublisherDataRequest(const PlayFabServerSetPublisherDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetPublisherDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SetPublisherDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSetPublisherDataRequest>(*this);
}

size_t SetPublisherDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerSetPublisherDataRequest) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void SetPublisherDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerSetPublisherDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerSetPublisherDataRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetTitleDataRequest::SetTitleDataRequest() :
    PlayFabServerSetTitleDataRequest{}
{
}

SetTitleDataRequest::SetTitleDataRequest(const SetTitleDataRequest& src) :
    PlayFabServerSetTitleDataRequest{ src },
    m_key{ src.m_key },
    m_value{ src.m_value }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetTitleDataRequest::SetTitleDataRequest(SetTitleDataRequest&& src) :
    PlayFabServerSetTitleDataRequest{ src },
    m_key{ std::move(src.m_key) },
    m_value{ std::move(src.m_value) }
{
    key = m_key.empty() ? nullptr : m_key.data();
    value = m_value.empty() ? nullptr : m_value.data();
}

SetTitleDataRequest::SetTitleDataRequest(const PlayFabServerSetTitleDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SetTitleDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Key", m_key, key);
    JsonUtils::ObjectGetMember(input, "Value", m_value, value);
}

JsonValue SetTitleDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSetTitleDataRequest>(*this);
}

size_t SetTitleDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerSetTitleDataRequest) };
    serializedSize += (m_key.size() + 1);
    serializedSize += (m_value.size() + 1);
    return serializedSize;
}

void SetTitleDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerSetTitleDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerSetTitleDataRequest);
    memcpy(stringBuffer, m_key.data(), m_key.size() + 1);
    serializedStruct->key = stringBuffer;
    stringBuffer += m_key.size() + 1;
    memcpy(stringBuffer, m_value.data(), m_value.size() + 1);
    serializedStruct->value = stringBuffer;
    stringBuffer += m_value.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

StatisticUpdate::StatisticUpdate() :
    PlayFabServerStatisticUpdate{}
{
}

StatisticUpdate::StatisticUpdate(const StatisticUpdate& src) :
    PlayFabServerStatisticUpdate{ src },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticUpdate::StatisticUpdate(StatisticUpdate&& src) :
    PlayFabServerStatisticUpdate{ src },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticUpdate::StatisticUpdate(const PlayFabServerStatisticUpdate& src)
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
    return JsonUtils::ToJson<PlayFabServerStatisticUpdate>(*this);
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest() :
    PlayFabServerSubtractCharacterVirtualCurrencyRequest{}
{
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest(const SubtractCharacterVirtualCurrencyRequest& src) :
    PlayFabServerSubtractCharacterVirtualCurrencyRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest(SubtractCharacterVirtualCurrencyRequest&& src) :
    PlayFabServerSubtractCharacterVirtualCurrencyRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractCharacterVirtualCurrencyRequest::SubtractCharacterVirtualCurrencyRequest(const PlayFabServerSubtractCharacterVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SubtractCharacterVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue SubtractCharacterVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSubtractCharacterVirtualCurrencyRequest>(*this);
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest() :
    PlayFabServerSubtractUserVirtualCurrencyRequest{}
{
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src) :
    PlayFabServerSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_virtualCurrency{ src.m_virtualCurrency }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(SubtractUserVirtualCurrencyRequest&& src) :
    PlayFabServerSubtractUserVirtualCurrencyRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    virtualCurrency = m_virtualCurrency.empty() ? nullptr : m_virtualCurrency.data();
}

SubtractUserVirtualCurrencyRequest::SubtractUserVirtualCurrencyRequest(const PlayFabServerSubtractUserVirtualCurrencyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SubtractUserVirtualCurrencyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Amount", amount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency);
}

JsonValue SubtractUserVirtualCurrencyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerSubtractUserVirtualCurrencyRequest>(*this);
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest() :
    PlayFabServerUnlinkPSNAccountRequest{}
{
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest(const UnlinkPSNAccountRequest& src) :
    PlayFabServerUnlinkPSNAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest(UnlinkPSNAccountRequest&& src) :
    PlayFabServerUnlinkPSNAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlinkPSNAccountRequest::UnlinkPSNAccountRequest(const PlayFabServerUnlinkPSNAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkPSNAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UnlinkPSNAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUnlinkPSNAccountRequest>(*this);
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest() :
    PlayFabServerUnlinkServerCustomIdRequest{}
{
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest(const UnlinkServerCustomIdRequest& src) :
    PlayFabServerUnlinkServerCustomIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_serverCustomId{ src.m_serverCustomId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest(UnlinkServerCustomIdRequest&& src) :
    PlayFabServerUnlinkServerCustomIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

UnlinkServerCustomIdRequest::UnlinkServerCustomIdRequest(const PlayFabServerUnlinkServerCustomIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkServerCustomIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue UnlinkServerCustomIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUnlinkServerCustomIdRequest>(*this);
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest() :
    PlayFabServerUnlinkXboxAccountRequest{}
{
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest(const UnlinkXboxAccountRequest& src) :
    PlayFabServerUnlinkXboxAccountRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest(UnlinkXboxAccountRequest&& src) :
    PlayFabServerUnlinkXboxAccountRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlinkXboxAccountRequest::UnlinkXboxAccountRequest(const PlayFabServerUnlinkXboxAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlinkXboxAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UnlinkXboxAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUnlinkXboxAccountRequest>(*this);
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest() :
    PlayFabServerUnlockContainerInstanceRequest{}
{
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest(const UnlockContainerInstanceRequest& src) :
    PlayFabServerUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemInstanceId{ src.m_containerItemInstanceId },
    m_customTags{ src.m_customTags },
    m_keyItemInstanceId{ src.m_keyItemInstanceId },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest(UnlockContainerInstanceRequest&& src) :
    PlayFabServerUnlockContainerInstanceRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemInstanceId{ std::move(src.m_containerItemInstanceId) },
    m_customTags{ std::move(src.m_customTags) },
    m_keyItemInstanceId{ std::move(src.m_keyItemInstanceId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemInstanceId = m_containerItemInstanceId.empty() ? nullptr : m_containerItemInstanceId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    keyItemInstanceId = m_keyItemInstanceId.empty() ? nullptr : m_keyItemInstanceId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlockContainerInstanceRequest::UnlockContainerInstanceRequest(const PlayFabServerUnlockContainerInstanceRequest& src)
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
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UnlockContainerInstanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUnlockContainerInstanceRequest>(*this);
}

UnlockContainerItemRequest::UnlockContainerItemRequest() :
    PlayFabServerUnlockContainerItemRequest{}
{
}

UnlockContainerItemRequest::UnlockContainerItemRequest(const UnlockContainerItemRequest& src) :
    PlayFabServerUnlockContainerItemRequest{ src },
    m_catalogVersion{ src.m_catalogVersion },
    m_characterId{ src.m_characterId },
    m_containerItemId{ src.m_containerItemId },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlockContainerItemRequest::UnlockContainerItemRequest(UnlockContainerItemRequest&& src) :
    PlayFabServerUnlockContainerItemRequest{ src },
    m_catalogVersion{ std::move(src.m_catalogVersion) },
    m_characterId{ std::move(src.m_characterId) },
    m_containerItemId{ std::move(src.m_containerItemId) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    catalogVersion = m_catalogVersion.empty() ? nullptr : m_catalogVersion.data();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    containerItemId = m_containerItemId.empty() ? nullptr : m_containerItemId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UnlockContainerItemRequest::UnlockContainerItemRequest(const PlayFabServerUnlockContainerItemRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UnlockContainerItemRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CatalogVersion", m_catalogVersion, catalogVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "ContainerItemId", m_containerItemId, containerItemId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UnlockContainerItemRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUnlockContainerItemRequest>(*this);
}

UnlockContainerItemResult::UnlockContainerItemResult() :
    PlayFabServerUnlockContainerItemResult{}
{
}

UnlockContainerItemResult::UnlockContainerItemResult(const UnlockContainerItemResult& src) :
    PlayFabServerUnlockContainerItemResult{ src },
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
    PlayFabServerUnlockContainerItemResult{ src },
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

UnlockContainerItemResult::UnlockContainerItemResult(const PlayFabServerUnlockContainerItemResult& src)
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
    return JsonUtils::ToJson<PlayFabServerUnlockContainerItemResult>(*this);
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest() :
    PlayFabServerUpdateAvatarUrlRequest{}
{
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest(const UpdateAvatarUrlRequest& src) :
    PlayFabServerUpdateAvatarUrlRequest{ src },
    m_imageUrl{ src.m_imageUrl },
    m_playFabId{ src.m_playFabId }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest(UpdateAvatarUrlRequest&& src) :
    PlayFabServerUpdateAvatarUrlRequest{ src },
    m_imageUrl{ std::move(src.m_imageUrl) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    imageUrl = m_imageUrl.empty() ? nullptr : m_imageUrl.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateAvatarUrlRequest::UpdateAvatarUrlRequest(const PlayFabServerUpdateAvatarUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateAvatarUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ImageUrl", m_imageUrl, imageUrl);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateAvatarUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateAvatarUrlRequest>(*this);
}

size_t UpdateAvatarUrlRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerUpdateAvatarUrlRequest) };
    serializedSize += (m_imageUrl.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void UpdateAvatarUrlRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerUpdateAvatarUrlRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerUpdateAvatarUrlRequest);
    memcpy(stringBuffer, m_imageUrl.data(), m_imageUrl.size() + 1);
    serializedStruct->imageUrl = stringBuffer;
    stringBuffer += m_imageUrl.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdateBanRequest::UpdateBanRequest() :
    PlayFabServerUpdateBanRequest{}
{
}

UpdateBanRequest::UpdateBanRequest(const UpdateBanRequest& src) :
    PlayFabServerUpdateBanRequest{ src },
    m_active{ src.m_active },
    m_banId{ src.m_banId },
    m_expires{ src.m_expires },
    m_IPAddress{ src.m_IPAddress },
    m_MACAddress{ src.m_MACAddress },
    m_permanent{ src.m_permanent },
    m_reason{ src.m_reason }
{
    active = m_active ? m_active.operator->() : nullptr;
    banId = m_banId.empty() ? nullptr : m_banId.data();
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    permanent = m_permanent ? m_permanent.operator->() : nullptr;
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

UpdateBanRequest::UpdateBanRequest(UpdateBanRequest&& src) :
    PlayFabServerUpdateBanRequest{ src },
    m_active{ std::move(src.m_active) },
    m_banId{ std::move(src.m_banId) },
    m_expires{ std::move(src.m_expires) },
    m_IPAddress{ std::move(src.m_IPAddress) },
    m_MACAddress{ std::move(src.m_MACAddress) },
    m_permanent{ std::move(src.m_permanent) },
    m_reason{ std::move(src.m_reason) }
{
    active = m_active ? m_active.operator->() : nullptr;
    banId = m_banId.empty() ? nullptr : m_banId.data();
    expires = m_expires ? m_expires.operator->() : nullptr;
    IPAddress = m_IPAddress.empty() ? nullptr : m_IPAddress.data();
    MACAddress = m_MACAddress.empty() ? nullptr : m_MACAddress.data();
    permanent = m_permanent ? m_permanent.operator->() : nullptr;
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

UpdateBanRequest::UpdateBanRequest(const PlayFabServerUpdateBanRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBanRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", m_active, active);
    JsonUtils::ObjectGetMember(input, "BanId", m_banId, banId);
    JsonUtils::ObjectGetMember(input, "Expires", m_expires, expires, true);
    JsonUtils::ObjectGetMember(input, "IPAddress", m_IPAddress, IPAddress);
    JsonUtils::ObjectGetMember(input, "MACAddress", m_MACAddress, MACAddress);
    JsonUtils::ObjectGetMember(input, "Permanent", m_permanent, permanent);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue UpdateBanRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateBanRequest>(*this);
}

UpdateBansRequest::UpdateBansRequest() :
    PlayFabServerUpdateBansRequest{}
{
}

UpdateBansRequest::UpdateBansRequest(const UpdateBansRequest& src) :
    PlayFabServerUpdateBansRequest{ src },
    m_bans{ src.m_bans }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
}

UpdateBansRequest::UpdateBansRequest(UpdateBansRequest&& src) :
    PlayFabServerUpdateBansRequest{ src },
    m_bans{ std::move(src.m_bans) }
{
    bans = m_bans.Empty() ? nullptr : m_bans.Data();
}

UpdateBansRequest::UpdateBansRequest(const PlayFabServerUpdateBansRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBansRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Bans", m_bans, bans, bansCount);
}

JsonValue UpdateBansRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateBansRequest>(*this);
}

UpdateBansResult::UpdateBansResult() :
    PlayFabServerUpdateBansResult{}
{
}

UpdateBansResult::UpdateBansResult(const UpdateBansResult& src) :
    PlayFabServerUpdateBansResult{ src },
    m_banData{ src.m_banData }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

UpdateBansResult::UpdateBansResult(UpdateBansResult&& src) :
    PlayFabServerUpdateBansResult{ src },
    m_banData{ std::move(src.m_banData) }
{
    banData = m_banData.Empty() ? nullptr : m_banData.Data();
}

UpdateBansResult::UpdateBansResult(const PlayFabServerUpdateBansResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBansResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BanData", m_banData, banData, banDataCount);
}

JsonValue UpdateBansResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateBansResult>(*this);
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest() :
    PlayFabServerUpdateCharacterDataRequest{}
{
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest(const UpdateCharacterDataRequest& src) :
    PlayFabServerUpdateCharacterDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest(UpdateCharacterDataRequest&& src) :
    PlayFabServerUpdateCharacterDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateCharacterDataRequest::UpdateCharacterDataRequest(const PlayFabServerUpdateCharacterDataRequest& src)
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
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateCharacterDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateCharacterDataRequest>(*this);
}

UpdateCharacterDataResult::UpdateCharacterDataResult() :
    PlayFabServerUpdateCharacterDataResult{}
{
}


UpdateCharacterDataResult::UpdateCharacterDataResult(const PlayFabServerUpdateCharacterDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCharacterDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue UpdateCharacterDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateCharacterDataResult>(*this);
}

size_t UpdateCharacterDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerUpdateCharacterDataResult) };
    return serializedSize;
}

void UpdateCharacterDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerUpdateCharacterDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerUpdateCharacterDataResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest() :
    PlayFabServerUpdateCharacterStatisticsRequest{}
{
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest(const UpdateCharacterStatisticsRequest& src) :
    PlayFabServerUpdateCharacterStatisticsRequest{ src },
    m_characterId{ src.m_characterId },
    m_characterStatistics{ src.m_characterStatistics },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest(UpdateCharacterStatisticsRequest&& src) :
    PlayFabServerUpdateCharacterStatisticsRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_characterStatistics{ std::move(src.m_characterStatistics) },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    characterStatistics = m_characterStatistics.Empty() ? nullptr : m_characterStatistics.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateCharacterStatisticsRequest::UpdateCharacterStatisticsRequest(const PlayFabServerUpdateCharacterStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateCharacterStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CharacterStatistics", m_characterStatistics, characterStatistics, characterStatisticsCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateCharacterStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateCharacterStatisticsRequest>(*this);
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest() :
    PlayFabServerUpdatePlayerStatisticsRequest{}
{
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest(const UpdatePlayerStatisticsRequest& src) :
    PlayFabServerUpdatePlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceUpdate{ src.m_forceUpdate },
    m_playFabId{ src.m_playFabId },
    m_statistics{ src.m_statistics }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceUpdate = m_forceUpdate ? m_forceUpdate.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest(UpdatePlayerStatisticsRequest&& src) :
    PlayFabServerUpdatePlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceUpdate{ std::move(src.m_forceUpdate) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statistics{ std::move(src.m_statistics) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceUpdate = m_forceUpdate ? m_forceUpdate.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

UpdatePlayerStatisticsRequest::UpdatePlayerStatisticsRequest(const PlayFabServerUpdatePlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceUpdate", m_forceUpdate, forceUpdate);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue UpdatePlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdatePlayerStatisticsRequest>(*this);
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest() :
    PlayFabServerUpdateSharedGroupDataRequest{}
{
}

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(const UpdateSharedGroupDataRequest& src) :
    PlayFabServerUpdateSharedGroupDataRequest{ src },
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
    PlayFabServerUpdateSharedGroupDataRequest{ src },
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

UpdateSharedGroupDataRequest::UpdateSharedGroupDataRequest(const PlayFabServerUpdateSharedGroupDataRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerUpdateSharedGroupDataRequest>(*this);
}

UpdateUserDataRequest::UpdateUserDataRequest() :
    PlayFabServerUpdateUserDataRequest{}
{
}

UpdateUserDataRequest::UpdateUserDataRequest(const UpdateUserDataRequest& src) :
    PlayFabServerUpdateUserDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserDataRequest::UpdateUserDataRequest(UpdateUserDataRequest&& src) :
    PlayFabServerUpdateUserDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserDataRequest::UpdateUserDataRequest(const PlayFabServerUpdateUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateUserDataRequest>(*this);
}

UpdateUserDataResult::UpdateUserDataResult() :
    PlayFabServerUpdateUserDataResult{}
{
}


UpdateUserDataResult::UpdateUserDataResult(const PlayFabServerUpdateUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue UpdateUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateUserDataResult>(*this);
}

size_t UpdateUserDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerUpdateUserDataResult) };
    return serializedSize;
}

void UpdateUserDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerUpdateUserDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerUpdateUserDataResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest() :
    PlayFabServerUpdateUserInternalDataRequest{}
{
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src) :
    PlayFabServerUpdateUserInternalDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(UpdateUserInternalDataRequest&& src) :
    PlayFabServerUpdateUserInternalDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(const PlayFabServerUpdateUserInternalDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserInternalDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserInternalDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateUserInternalDataRequest>(*this);
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest() :
    PlayFabServerUpdateUserInventoryItemDataRequest{}
{
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest(const UpdateUserInventoryItemDataRequest& src) :
    PlayFabServerUpdateUserInventoryItemDataRequest{ src },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_itemInstanceId{ src.m_itemInstanceId },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest(UpdateUserInventoryItemDataRequest&& src) :
    PlayFabServerUpdateUserInventoryItemDataRequest{ src },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_itemInstanceId{ std::move(src.m_itemInstanceId) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    itemInstanceId = m_itemInstanceId.empty() ? nullptr : m_itemInstanceId.data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInventoryItemDataRequest::UpdateUserInventoryItemDataRequest(const PlayFabServerUpdateUserInventoryItemDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserInventoryItemDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "ItemInstanceId", m_itemInstanceId, itemInstanceId);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserInventoryItemDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerUpdateUserInventoryItemDataRequest>(*this);
}

WriteEventResponse::WriteEventResponse() :
    PlayFabServerWriteEventResponse{}
{
}

WriteEventResponse::WriteEventResponse(const WriteEventResponse& src) :
    PlayFabServerWriteEventResponse{ src },
    m_eventId{ src.m_eventId }
{
    eventId = m_eventId.empty() ? nullptr : m_eventId.data();
}

WriteEventResponse::WriteEventResponse(WriteEventResponse&& src) :
    PlayFabServerWriteEventResponse{ src },
    m_eventId{ std::move(src.m_eventId) }
{
    eventId = m_eventId.empty() ? nullptr : m_eventId.data();
}

WriteEventResponse::WriteEventResponse(const PlayFabServerWriteEventResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteEventResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EventId", m_eventId, eventId);
}

JsonValue WriteEventResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerWriteEventResponse>(*this);
}

size_t WriteEventResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabServerWriteEventResponse) };
    serializedSize += (m_eventId.size() + 1);
    return serializedSize;
}

void WriteEventResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabServerWriteEventResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabServerWriteEventResponse);
    memcpy(stringBuffer, m_eventId.data(), m_eventId.size() + 1);
    serializedStruct->eventId = stringBuffer;
    stringBuffer += m_eventId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest() :
    PlayFabServerWriteServerCharacterEventRequest{}
{
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest(const WriteServerCharacterEventRequest& src) :
    PlayFabServerWriteServerCharacterEventRequest{ src },
    m_body{ src.m_body },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_playFabId{ src.m_playFabId },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest(WriteServerCharacterEventRequest&& src) :
    PlayFabServerWriteServerCharacterEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest(const PlayFabServerWriteServerCharacterEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteServerCharacterEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteServerCharacterEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerWriteServerCharacterEventRequest>(*this);
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest() :
    PlayFabServerWriteServerPlayerEventRequest{}
{
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest(const WriteServerPlayerEventRequest& src) :
    PlayFabServerWriteServerPlayerEventRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_playFabId{ src.m_playFabId },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest(WriteServerPlayerEventRequest&& src) :
    PlayFabServerWriteServerPlayerEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest(const PlayFabServerWriteServerPlayerEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteServerPlayerEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteServerPlayerEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabServerWriteServerPlayerEventRequest>(*this);
}

WriteTitleEventRequest::WriteTitleEventRequest() :
    PlayFabServerWriteTitleEventRequest{}
{
}

WriteTitleEventRequest::WriteTitleEventRequest(const WriteTitleEventRequest& src) :
    PlayFabServerWriteTitleEventRequest{ src },
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
    PlayFabServerWriteTitleEventRequest{ src },
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

WriteTitleEventRequest::WriteTitleEventRequest(const PlayFabServerWriteTitleEventRequest& src)
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
    return JsonUtils::ToJson<PlayFabServerWriteTitleEventRequest>(*this);
}

} // namespace ServerModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabServerAdCampaignAttribution& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AttributedAt", input.attributedAt, true);
    JsonUtils::ObjectAddMember(output, "CampaignId", input.campaignId);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAddCharacterVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAddFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendEmail", input.friendEmail);
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "FriendTitleDisplayName", input.friendTitleDisplayName);
    JsonUtils::ObjectAddMember(output, "FriendUsername", input.friendUsername);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGenericServiceId& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ServiceName", input.serviceName);
    JsonUtils::ObjectAddMember(output, "UserId", input.userId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAddGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAddPlayerTagRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAddSharedGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAddUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAdvancedPushPlatformMsg& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GCMDataOnly", input.gCMDataOnly);
    JsonUtils::ObjectAddMember(output, "Json", input.json);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAuthenticateSessionTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SessionTicket", input.sessionTicket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAuthenticateSessionTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsSessionTicketExpired", input.isSessionTicketExpired);
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AchievementName", input.achievementName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Achievements", input.achievements, input.achievementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerAwardSteamAchievementResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AchievementResults", input.achievementResults, input.achievementResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerBanInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "BanId", input.banId);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DurationInHours", input.durationInHours);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerBanUsersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerBanUsersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerCatalogItemBundleInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BundledItems", input.bundledItems, input.bundledItemsCount);
    JsonUtils::ObjectAddMember(output, "BundledResultTables", input.bundledResultTables, input.bundledResultTablesCount);
    JsonUtils::ObjectAddMember(output, "BundledVirtualCurrencies", input.bundledVirtualCurrencies, input.bundledVirtualCurrenciesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerCatalogItemConsumableInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UsageCount", input.usageCount);
    JsonUtils::ObjectAddMember(output, "UsagePeriod", input.usagePeriod);
    JsonUtils::ObjectAddMember(output, "UsagePeriodGroup", input.usagePeriodGroup);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerCatalogItemContainerInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemContents", input.itemContents, input.itemContentsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemId", input.keyItemId);
    JsonUtils::ObjectAddMember(output, "ResultTableContents", input.resultTableContents, input.resultTableContentsCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyContents", input.virtualCurrencyContents, input.virtualCurrencyContentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerCatalogItem& input)
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
inline JsonValue ToJson<>(const PlayFabServerCharacterLeaderboardEntry& input)
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
inline JsonValue ToJson<>(const PlayFabServerConsumeItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ConsumeCount", input.consumeCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerConsumeItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerContactEmailInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EmailAddress", input.emailAddress);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "VerificationStatus", input.verificationStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerCreateSharedGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerCreateSharedGroupResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerDeleteCharacterFromUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "SaveCharacterInventory", input.saveCharacterInventory);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerDeletePlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerDeletePushNotificationTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerDeleteSharedGroupRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerDeregisterGameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerEvaluateRandomResultTableRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerEvaluateRandomResultTableResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ResultItemId", input.resultItemId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerScriptExecutionError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "StackTrace", input.stackTrace);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLogStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data);
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerExecuteCloudScriptResult& input)
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
inline JsonValue ToJson<>(const PlayFabServerExecuteCloudScriptServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FunctionName", input.functionName);
    JsonUtils::ObjectAddMember(output, "FunctionParameter", input.functionParameter);
    JsonUtils::ObjectAddMember(output, "GeneratePlayStreamEvent", input.generatePlayStreamEvent);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "RevisionSelection", input.revisionSelection);
    JsonUtils::ObjectAddMember(output, "SpecificRevision", input.specificRevision);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerFacebookInstantGamesPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesId", input.facebookInstantGamesId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerFacebookPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookId", input.facebookId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerFriendInfo& input)
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
inline JsonValue ToJson<>(const PlayFabServerGenericPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetSegmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ABTestParent", input.aBTestParent);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetAllSegmentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCatalogItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCatalogItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Catalog", input.catalog, input.catalogCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterLeaderboardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetCharacterStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetContentDownloadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "HttpMethod", input.httpMethod);
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "ThruCDN", input.thruCDN);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetContentDownloadUrlResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "URL", input.uRL);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPlayerProfileViewConstraints& input)
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
inline JsonValue ToJson<>(const PlayFabServerGetFriendLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetFriendsListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetFriendsListResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Friends", input.friends, input.friendsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundCharacterResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundUserRequest& input)
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
inline JsonValue ToJson<>(const PlayFabServerPlayerLeaderboardEntry& input)
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
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardAroundUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardForUsersCharactersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardForUsersCharactersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardRequest& input)
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
inline JsonValue ToJson<>(const PlayFabServerGetLeaderboardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoRequestParams& input)
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
inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerCombinedInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "InfoResultPayload", input.infoResultPayload);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerProfileRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerProfileResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerProfile", input.playerProfile);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerSegmentsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Segments", input.segments, input.segmentsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayersInSegmentRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxBatchSize", input.maxBatchSize);
    JsonUtils::ObjectAddMember(output, "SecondsToLive", input.secondsToLive);
    JsonUtils::ObjectAddMember(output, "SegmentId", input.segmentId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPlayerLinkedAccount& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    JsonUtils::ObjectAddMember(output, "PlatformUserId", input.platformUserId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPlayerLocation& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "City", input.city);
    JsonUtils::ObjectAddMember(output, "ContinentCode", input.continentCode);
    JsonUtils::ObjectAddMember(output, "CountryCode", input.countryCode);
    JsonUtils::ObjectAddMember(output, "Latitude", input.latitude);
    JsonUtils::ObjectAddMember(output, "Longitude", input.longitude);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPlayerStatistic& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "StatisticValue", input.statisticValue);
    JsonUtils::ObjectAddMember(output, "StatisticVersion", input.statisticVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPushNotificationRegistration& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NotificationEndpointARN", input.notificationEndpointARN);
    JsonUtils::ObjectAddMember(output, "Platform", input.platform);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPlayerProfile& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdCampaignAttributions", input.adCampaignAttributions, input.adCampaignAttributionsCount);
    JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
    JsonUtils::ObjectAddMember(output, "BannedUntil", input.bannedUntil, true);
    JsonUtils::ObjectAddMember(output, "ContactEmailAddresses", input.contactEmailAddresses, input.contactEmailAddressesCount);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "LastLogin", input.lastLogin, true);
    JsonUtils::ObjectAddMember(output, "LinkedAccounts", input.linkedAccounts, input.linkedAccountsCount);
    JsonUtils::ObjectAddMember(output, "Locations", input.locations, input.locationsCount);
    JsonUtils::ObjectAddMember(output, "Origination", input.origination);
    JsonUtils::ObjectAddMember(output, "PlayerExperimentVariants", input.playerExperimentVariants, input.playerExperimentVariantsCount);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PlayerStatistics", input.playerStatistics, input.playerStatisticsCount);
    JsonUtils::ObjectAddMember(output, "PublisherId", input.publisherId);
    JsonUtils::ObjectAddMember(output, "PushNotificationRegistrations", input.pushNotificationRegistrations, input.pushNotificationRegistrationsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TotalValueToDateInUSD", input.totalValueToDateInUSD);
    JsonUtils::ObjectAddMember(output, "ValuesToDate", input.valuesToDate, input.valuesToDateCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyBalances", input.virtualCurrencyBalances, input.virtualCurrencyBalancesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayersInSegmentResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ContinuationToken", input.continuationToken);
    JsonUtils::ObjectAddMember(output, "PlayerProfiles", input.playerProfiles, input.playerProfilesCount);
    JsonUtils::ObjectAddMember(output, "ProfilesInSegment", input.profilesInSegment);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayersSegmentsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerStatisticNameVersion& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StatisticNames", input.statisticNames, input.statisticNamesCount);
    JsonUtils::ObjectAddMember(output, "StatisticNameVersions", input.statisticNameVersions, input.statisticNameVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticVersionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPlayerStatisticVersion& input)
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
inline JsonValue ToJson<>(const PlayFabServerGetPlayerStatisticVersionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticVersions", input.statisticVersions, input.statisticVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Namespace", input.playfabNamespace);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayerTagsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookIDs", input.facebookIDs, input.facebookIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesIds", input.facebookInstantGamesIds, input.facebookInstantGamesIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromGenericIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericIDs", input.genericIDs, input.genericIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromGenericIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceIds", input.nintendoSwitchDeviceIds, input.nintendoSwitchDeviceIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerNintendoSwitchPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PSNAccountIDs", input.PSNAccountIDs, input.PSNAccountIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPSNAccountPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PSNAccountId", input.PSNAccountId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromSteamIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SteamStringIDs", input.steamStringIDs, input.steamStringIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSteamPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "SteamStringId", input.steamStringId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromSteamIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
    JsonUtils::ObjectAddMember(output, "XboxLiveAccountIDs", input.xboxLiveAccountIDs, input.xboxLiveAccountIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerXboxLiveAccountPlayFabIdPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "XboxLiveAccountId", input.xboxLiveAccountId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetPublisherDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetRandomResultTablesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "TableIDs", input.tableIDs, input.tableIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerResultTableNode& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ResultItem", input.resultItem);
    JsonUtils::ObjectAddMember(output, "ResultItemType", input.resultItemType);
    JsonUtils::ObjectAddMember(output, "Weight", input.weight);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRandomResultTableListing& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "Nodes", input.nodes, input.nodesCount);
    JsonUtils::ObjectAddMember(output, "TableId", input.tableId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetRandomResultTablesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Tables", input.tables, input.tablesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIDs", input.playFabIDs, input.playFabIDsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerServerCustomIDPlayFabIDPair& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetServerCustomIDsFromPlayFabIDsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetSharedGroupDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GetMembers", input.getMembers);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSharedGroupDataRecord& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LastUpdated", input.lastUpdated, true);
    JsonUtils::ObjectAddMember(output, "LastUpdatedBy", input.lastUpdatedBy);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetSharedGroupDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerStoreMarketingModel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Description", input.description);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerStoreItem& input)
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
inline JsonValue ToJson<>(const PlayFabServerGetStoreItemsResult& input)
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
inline JsonValue ToJson<>(const PlayFabServerGetStoreItemsServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StoreId", input.storeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetTimeResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Time", input.time, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetTitleDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "OverrideLabel", input.overrideLabel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetTitleDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetTitleNewsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Count", input.count);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerTitleNewsItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "NewsId", input.newsId);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetTitleNewsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "News", input.news, input.newsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserAccountInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserAccountInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserInventoryRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGetUserInventoryResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantCharacterToUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterName", input.characterName);
    JsonUtils::ObjectAddMember(output, "CharacterType", input.characterType);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantCharacterToUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantedItemInstance& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "BundleContents", input.bundleContents, input.bundleContentsCount);
    JsonUtils::ObjectAddMember(output, "BundleParent", input.bundleParent);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData, input.customDataCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Expiration", input.expiration, true);
    JsonUtils::ObjectAddMember(output, "ItemClass", input.itemClass);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "PurchaseDate", input.purchaseDate, true);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    JsonUtils::ObjectAddMember(output, "Result", input.result);
    JsonUtils::ObjectAddMember(output, "UnitCurrency", input.unitCurrency);
    JsonUtils::ObjectAddMember(output, "UnitPrice", input.unitPrice);
    JsonUtils::ObjectAddMember(output, "UsesIncrementedBy", input.usesIncrementedBy);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantItemsToCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemIds", input.itemIds, input.itemIdsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantItemsToCharacterResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemIds", input.itemIds, input.itemIdsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerItemGrant& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Annotation", input.annotation);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "ItemId", input.itemId);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUsersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemGrants", input.itemGrants, input.itemGrantsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerGrantItemsToUsersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemGrantResults", input.itemGrantResults, input.itemGrantResultsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLinkServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceLink", input.forceLink);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerListUsersCharactersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerListUsersCharactersResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Characters", input.characters, input.charactersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLocalizedPushNotificationProperties& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLoginWithServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLoginWithSteamIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLoginWithXboxIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
    JsonUtils::ObjectAddMember(output, "XboxId", input.xboxId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerLoginWithXboxRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerModifyCharacterVirtualCurrencyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Balance", input.balance);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerModifyItemUsesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "UsesToAdd", input.usesToAdd);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerModifyItemUsesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "RemainingUses", input.remainingUses);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerModifyUserVirtualCurrencyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Balance", input.balance);
    JsonUtils::ObjectAddMember(output, "BalanceChange", input.balanceChange);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerMoveItemToCharacterFromCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GivingCharacterId", input.givingCharacterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ReceivingCharacterId", input.receivingCharacterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerMoveItemToCharacterFromUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerMoveItemToUserFromCharacterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerNotifyMatchmakerPlayerLeftRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerNotifyMatchmakerPlayerLeftResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerState", input.playerState);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerPushNotificationPackage& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Badge", input.badge);
    JsonUtils::ObjectAddMember(output, "CustomData", input.customData);
    JsonUtils::ObjectAddMember(output, "Icon", input.icon);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Sound", input.sound);
    JsonUtils::ObjectAddMember(output, "Title", input.title);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRedeemCouponRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CouponCode", input.couponCode);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRedeemCouponResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRedeemMatchmakerTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Ticket", input.ticket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRedeemMatchmakerTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "TicketIsValid", input.ticketIsValid);
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRefreshGameServerInstanceHeartbeatRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRegisterGameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Build", input.build);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
    JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
    JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
    JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRegisterGameResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRemoveFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRemoveGenericIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GenericId", input.genericId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRemovePlayerTagRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "TagName", input.tagName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRemoveSharedGroupMembersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabIds", input.playFabIds, input.playFabIdsCount);
    JsonUtils::ObjectAddMember(output, "SharedGroupId", input.sharedGroupId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerReportPlayerServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ReporteeId", input.reporteeId);
    JsonUtils::ObjectAddMember(output, "ReporterId", input.reporterId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerReportPlayerServerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SubmissionsRemaining", input.submissionsRemaining);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeAllBansForUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeAllBansForUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanIds", input.banIds, input.banIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItem& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Items", input.items, input.itemsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeItemError& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "Item", input.item);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerRevokeInventoryItemsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Errors", input.errors, input.errorsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSavePushNotificationTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidPayload", input.androidPayload);
    JsonUtils::ObjectAddMember(output, "Id", input.id);
    JsonUtils::ObjectAddMember(output, "IOSPayload", input.iOSPayload);
    JsonUtils::ObjectAddMember(output, "LocalizedPushNotificationTemplates", input.localizedPushNotificationTemplates, input.localizedPushNotificationTemplatesCount);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSavePushNotificationTemplateResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSendCustomAccountRecoveryEmailRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSendEmailFromTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EmailTemplateId", input.emailTemplateId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSendPushNotificationFromTemplateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PushNotificationTemplateId", input.pushNotificationTemplateId);
    JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSendPushNotificationRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AdvancedPlatformDelivery", input.advancedPlatformDelivery, input.advancedPlatformDeliveryCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "Package", input.package);
    JsonUtils::ObjectAddMember(output, "Recipient", input.recipient);
    JsonUtils::ObjectAddMember(output, "Subject", input.subject);
    JsonUtils::ObjectAddMember(output, "TargetPlatforms", input.targetPlatforms, input.targetPlatformsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSetFriendTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameServerData", input.gameServerData);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceStateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "State", input.state);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSetGameServerInstanceTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSetPlayerSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSetPublisherDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSetTitleDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Key", input.key);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerStatisticUpdate& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSubtractCharacterVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerSubtractUserVirtualCurrencyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Amount", input.amount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUnlinkPSNAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUnlinkServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUnlinkXboxAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUnlockContainerInstanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemInstanceId", input.containerItemInstanceId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "KeyItemInstanceId", input.keyItemInstanceId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUnlockContainerItemRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CatalogVersion", input.catalogVersion);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "ContainerItemId", input.containerItemId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUnlockContainerItemResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GrantedItems", input.grantedItems, input.grantedItemsCount);
    JsonUtils::ObjectAddMember(output, "UnlockedItemInstanceId", input.unlockedItemInstanceId);
    JsonUtils::ObjectAddMember(output, "UnlockedWithItemInstanceId", input.unlockedWithItemInstanceId);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateAvatarUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ImageUrl", input.imageUrl);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateBanRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "BanId", input.banId);
    JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
    JsonUtils::ObjectAddMember(output, "IPAddress", input.IPAddress);
    JsonUtils::ObjectAddMember(output, "MACAddress", input.MACAddress);
    JsonUtils::ObjectAddMember(output, "Permanent", input.permanent);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateBansRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Bans", input.bans, input.bansCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateBansResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BanData", input.banData, input.banDataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateCharacterStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CharacterStatistics", input.characterStatistics, input.characterStatisticsCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdatePlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceUpdate", input.forceUpdate);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateSharedGroupDataRequest& input)
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
inline JsonValue ToJson<>(const PlayFabServerUpdateUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateUserInternalDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerUpdateUserInventoryItemDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "ItemInstanceId", input.itemInstanceId);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerWriteEventResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EventId", input.eventId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerWriteServerCharacterEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerWriteServerPlayerEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabServerWriteTitleEventRequest& input)
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
