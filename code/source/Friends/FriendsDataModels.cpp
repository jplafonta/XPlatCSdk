#include "stdafx.h"
#include "FriendsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace FriendsModels
{

ClientAddFriendRequest::ClientAddFriendRequest() :
    PFFriendsClientAddFriendRequest{}
{
}

ClientAddFriendRequest::ClientAddFriendRequest(const ClientAddFriendRequest& src) :
    PFFriendsClientAddFriendRequest{ src },
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

ClientAddFriendRequest::ClientAddFriendRequest(ClientAddFriendRequest&& src) :
    PFFriendsClientAddFriendRequest{ src },
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

ClientAddFriendRequest::ClientAddFriendRequest(const PFFriendsClientAddFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientAddFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendEmail", m_friendEmail, friendEmail);
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "FriendTitleDisplayName", m_friendTitleDisplayName, friendTitleDisplayName);
    JsonUtils::ObjectGetMember(input, "FriendUsername", m_friendUsername, friendUsername);
}

JsonValue ClientAddFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsClientAddFriendRequest>(*this);
}

size_t ClientAddFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFFriendsClientAddFriendRequest) };
    serializedSize += (m_friendEmail.size() + 1);
    serializedSize += (m_friendPlayFabId.size() + 1);
    serializedSize += (m_friendTitleDisplayName.size() + 1);
    serializedSize += (m_friendUsername.size() + 1);
    return serializedSize;
}

void ClientAddFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFFriendsClientAddFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFFriendsClientAddFriendRequest);
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
    PFFriendsAddFriendResult{}
{
}


AddFriendResult::AddFriendResult(const PFFriendsAddFriendResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AddFriendResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Created", created);
}

JsonValue AddFriendResult::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsAddFriendResult>(*this);
}

size_t AddFriendResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFFriendsAddFriendResult) };
    return serializedSize;
}

void AddFriendResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFFriendsAddFriendResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFFriendsAddFriendResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

ClientGetFriendsListRequest::ClientGetFriendsListRequest() :
    PFFriendsClientGetFriendsListRequest{}
{
}

ClientGetFriendsListRequest::ClientGetFriendsListRequest(const ClientGetFriendsListRequest& src) :
    PFFriendsClientGetFriendsListRequest{ src },
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

ClientGetFriendsListRequest::ClientGetFriendsListRequest(ClientGetFriendsListRequest&& src) :
    PFFriendsClientGetFriendsListRequest{ src },
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

ClientGetFriendsListRequest::ClientGetFriendsListRequest(const PFFriendsClientGetFriendsListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetFriendsListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ClientGetFriendsListRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsClientGetFriendsListRequest>(*this);
}

FriendInfo::FriendInfo() :
    PFFriendsFriendInfo{}
{
}

FriendInfo::FriendInfo(const FriendInfo& src) :
    PFFriendsFriendInfo{ src },
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
    PFFriendsFriendInfo{ src },
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

FriendInfo::FriendInfo(const PFFriendsFriendInfo& src)
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
    return JsonUtils::ToJson<PFFriendsFriendInfo>(*this);
}

GetFriendsListResult::GetFriendsListResult() :
    PFFriendsGetFriendsListResult{}
{
}

GetFriendsListResult::GetFriendsListResult(const GetFriendsListResult& src) :
    PFFriendsGetFriendsListResult{ src },
    m_friends{ src.m_friends }
{
    friends = m_friends.Empty() ? nullptr : m_friends.Data();
}

GetFriendsListResult::GetFriendsListResult(GetFriendsListResult&& src) :
    PFFriendsGetFriendsListResult{ src },
    m_friends{ std::move(src.m_friends) }
{
    friends = m_friends.Empty() ? nullptr : m_friends.Data();
}

GetFriendsListResult::GetFriendsListResult(const PFFriendsGetFriendsListResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendsListResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Friends", m_friends, friends, friendsCount);
}

JsonValue GetFriendsListResult::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsGetFriendsListResult>(*this);
}

ClientRemoveFriendRequest::ClientRemoveFriendRequest() :
    PFFriendsClientRemoveFriendRequest{}
{
}

ClientRemoveFriendRequest::ClientRemoveFriendRequest(const ClientRemoveFriendRequest& src) :
    PFFriendsClientRemoveFriendRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
}

ClientRemoveFriendRequest::ClientRemoveFriendRequest(ClientRemoveFriendRequest&& src) :
    PFFriendsClientRemoveFriendRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
}

ClientRemoveFriendRequest::ClientRemoveFriendRequest(const PFFriendsClientRemoveFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientRemoveFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
}

JsonValue ClientRemoveFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsClientRemoveFriendRequest>(*this);
}

size_t ClientRemoveFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFFriendsClientRemoveFriendRequest) };
    serializedSize += (m_friendPlayFabId.size() + 1);
    return serializedSize;
}

void ClientRemoveFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFFriendsClientRemoveFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFFriendsClientRemoveFriendRequest);
    memcpy(stringBuffer, m_friendPlayFabId.data(), m_friendPlayFabId.size() + 1);
    serializedStruct->friendPlayFabId = stringBuffer;
    stringBuffer += m_friendPlayFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientSetFriendTagsRequest::ClientSetFriendTagsRequest() :
    PFFriendsClientSetFriendTagsRequest{}
{
}

ClientSetFriendTagsRequest::ClientSetFriendTagsRequest(const ClientSetFriendTagsRequest& src) :
    PFFriendsClientSetFriendTagsRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_tags{ src.m_tags }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ClientSetFriendTagsRequest::ClientSetFriendTagsRequest(ClientSetFriendTagsRequest&& src) :
    PFFriendsClientSetFriendTagsRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_tags{ std::move(src.m_tags) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ClientSetFriendTagsRequest::ClientSetFriendTagsRequest(const PFFriendsClientSetFriendTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientSetFriendTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue ClientSetFriendTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsClientSetFriendTagsRequest>(*this);
}

ServerAddFriendRequest::ServerAddFriendRequest() :
    PFFriendsServerAddFriendRequest{}
{
}

ServerAddFriendRequest::ServerAddFriendRequest(const ServerAddFriendRequest& src) :
    PFFriendsServerAddFriendRequest{ src },
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

ServerAddFriendRequest::ServerAddFriendRequest(ServerAddFriendRequest&& src) :
    PFFriendsServerAddFriendRequest{ src },
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

ServerAddFriendRequest::ServerAddFriendRequest(const PFFriendsServerAddFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerAddFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendEmail", m_friendEmail, friendEmail);
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "FriendTitleDisplayName", m_friendTitleDisplayName, friendTitleDisplayName);
    JsonUtils::ObjectGetMember(input, "FriendUsername", m_friendUsername, friendUsername);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerAddFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsServerAddFriendRequest>(*this);
}

size_t ServerAddFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFFriendsServerAddFriendRequest) };
    serializedSize += (m_friendEmail.size() + 1);
    serializedSize += (m_friendPlayFabId.size() + 1);
    serializedSize += (m_friendTitleDisplayName.size() + 1);
    serializedSize += (m_friendUsername.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ServerAddFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFFriendsServerAddFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFFriendsServerAddFriendRequest);
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

ServerGetFriendsListRequest::ServerGetFriendsListRequest() :
    PFFriendsServerGetFriendsListRequest{}
{
}

ServerGetFriendsListRequest::ServerGetFriendsListRequest(const ServerGetFriendsListRequest& src) :
    PFFriendsServerGetFriendsListRequest{ src },
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

ServerGetFriendsListRequest::ServerGetFriendsListRequest(ServerGetFriendsListRequest&& src) :
    PFFriendsServerGetFriendsListRequest{ src },
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

ServerGetFriendsListRequest::ServerGetFriendsListRequest(const PFFriendsServerGetFriendsListRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetFriendsListRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ServerGetFriendsListRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsServerGetFriendsListRequest>(*this);
}

ServerRemoveFriendRequest::ServerRemoveFriendRequest() :
    PFFriendsServerRemoveFriendRequest{}
{
}

ServerRemoveFriendRequest::ServerRemoveFriendRequest(const ServerRemoveFriendRequest& src) :
    PFFriendsServerRemoveFriendRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_playFabId{ src.m_playFabId }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerRemoveFriendRequest::ServerRemoveFriendRequest(ServerRemoveFriendRequest&& src) :
    PFFriendsServerRemoveFriendRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerRemoveFriendRequest::ServerRemoveFriendRequest(const PFFriendsServerRemoveFriendRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerRemoveFriendRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerRemoveFriendRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsServerRemoveFriendRequest>(*this);
}

size_t ServerRemoveFriendRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFFriendsServerRemoveFriendRequest) };
    serializedSize += (m_friendPlayFabId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ServerRemoveFriendRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFFriendsServerRemoveFriendRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFFriendsServerRemoveFriendRequest);
    memcpy(stringBuffer, m_friendPlayFabId.data(), m_friendPlayFabId.size() + 1);
    serializedStruct->friendPlayFabId = stringBuffer;
    stringBuffer += m_friendPlayFabId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ServerSetFriendTagsRequest::ServerSetFriendTagsRequest() :
    PFFriendsServerSetFriendTagsRequest{}
{
}

ServerSetFriendTagsRequest::ServerSetFriendTagsRequest(const ServerSetFriendTagsRequest& src) :
    PFFriendsServerSetFriendTagsRequest{ src },
    m_friendPlayFabId{ src.m_friendPlayFabId },
    m_playFabId{ src.m_playFabId },
    m_tags{ src.m_tags }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ServerSetFriendTagsRequest::ServerSetFriendTagsRequest(ServerSetFriendTagsRequest&& src) :
    PFFriendsServerSetFriendTagsRequest{ src },
    m_friendPlayFabId{ std::move(src.m_friendPlayFabId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_tags{ std::move(src.m_tags) }
{
    friendPlayFabId = m_friendPlayFabId.empty() ? nullptr : m_friendPlayFabId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ServerSetFriendTagsRequest::ServerSetFriendTagsRequest(const PFFriendsServerSetFriendTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerSetFriendTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", m_friendPlayFabId, friendPlayFabId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue ServerSetFriendTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFFriendsServerSetFriendTagsRequest>(*this);
}

} // namespace FriendsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFFriendsClientAddFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendEmail", input.friendEmail);
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "FriendTitleDisplayName", input.friendTitleDisplayName);
    JsonUtils::ObjectAddMember(output, "FriendUsername", input.friendUsername);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFFriendsAddFriendResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Created", input.created);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFFriendsClientGetFriendsListRequest& input)
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
inline JsonValue ToJson<>(const PFFriendsFriendInfo& input)
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
inline JsonValue ToJson<>(const PFFriendsGetFriendsListResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Friends", input.friends, input.friendsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFFriendsClientRemoveFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFFriendsClientSetFriendTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFFriendsServerAddFriendRequest& input)
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
inline JsonValue ToJson<>(const PFFriendsServerGetFriendsListRequest& input)
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
inline JsonValue ToJson<>(const PFFriendsServerRemoveFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFFriendsServerSetFriendTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
