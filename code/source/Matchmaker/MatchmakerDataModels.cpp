#include "stdafx.h"
#include "MatchmakerDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace MatchmakerModels
{

AuthUserRequest::AuthUserRequest() :
    PlayFabMatchmakerAuthUserRequest{}
{
}

AuthUserRequest::AuthUserRequest(const AuthUserRequest& src) :
    PlayFabMatchmakerAuthUserRequest{ src },
    m_authorizationTicket{ src.m_authorizationTicket }
{
    authorizationTicket = m_authorizationTicket.empty() ? nullptr : m_authorizationTicket.data();
}

AuthUserRequest::AuthUserRequest(AuthUserRequest&& src) :
    PlayFabMatchmakerAuthUserRequest{ src },
    m_authorizationTicket{ std::move(src.m_authorizationTicket) }
{
    authorizationTicket = m_authorizationTicket.empty() ? nullptr : m_authorizationTicket.data();
}

AuthUserRequest::AuthUserRequest(const PlayFabMatchmakerAuthUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AuthUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthorizationTicket", m_authorizationTicket, authorizationTicket);
}

JsonValue AuthUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerAuthUserRequest>(*this);
}

size_t AuthUserRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMatchmakerAuthUserRequest) };
    serializedSize += (m_authorizationTicket.size() + 1);
    return serializedSize;
}

void AuthUserRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMatchmakerAuthUserRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMatchmakerAuthUserRequest);
    memcpy(stringBuffer, m_authorizationTicket.data(), m_authorizationTicket.size() + 1);
    serializedStruct->authorizationTicket = stringBuffer;
    stringBuffer += m_authorizationTicket.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AuthUserResponse::AuthUserResponse() :
    PlayFabMatchmakerAuthUserResponse{}
{
}

AuthUserResponse::AuthUserResponse(const AuthUserResponse& src) :
    PlayFabMatchmakerAuthUserResponse{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AuthUserResponse::AuthUserResponse(AuthUserResponse&& src) :
    PlayFabMatchmakerAuthUserResponse{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AuthUserResponse::AuthUserResponse(const PlayFabMatchmakerAuthUserResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AuthUserResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Authorized", authorized);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AuthUserResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerAuthUserResponse>(*this);
}

size_t AuthUserResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMatchmakerAuthUserResponse) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void AuthUserResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMatchmakerAuthUserResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMatchmakerAuthUserResponse);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayerJoinedRequest::PlayerJoinedRequest() :
    PlayFabMatchmakerPlayerJoinedRequest{}
{
}

PlayerJoinedRequest::PlayerJoinedRequest(const PlayerJoinedRequest& src) :
    PlayFabMatchmakerPlayerJoinedRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerJoinedRequest::PlayerJoinedRequest(PlayerJoinedRequest&& src) :
    PlayFabMatchmakerPlayerJoinedRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerJoinedRequest::PlayerJoinedRequest(const PlayFabMatchmakerPlayerJoinedRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerJoinedRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue PlayerJoinedRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerPlayerJoinedRequest>(*this);
}

PlayerLeftRequest::PlayerLeftRequest() :
    PlayFabMatchmakerPlayerLeftRequest{}
{
}

PlayerLeftRequest::PlayerLeftRequest(const PlayerLeftRequest& src) :
    PlayFabMatchmakerPlayerLeftRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerLeftRequest::PlayerLeftRequest(PlayerLeftRequest&& src) :
    PlayFabMatchmakerPlayerLeftRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerLeftRequest::PlayerLeftRequest(const PlayFabMatchmakerPlayerLeftRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLeftRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue PlayerLeftRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerPlayerLeftRequest>(*this);
}

StartGameRequest::StartGameRequest() :
    PlayFabMatchmakerStartGameRequest{}
{
}

StartGameRequest::StartGameRequest(const StartGameRequest& src) :
    PlayFabMatchmakerStartGameRequest{ src },
    m_build{ src.m_build },
    m_customCommandLineData{ src.m_customCommandLineData },
    m_customTags{ src.m_customTags },
    m_externalMatchmakerEventEndpoint{ src.m_externalMatchmakerEventEndpoint },
    m_gameMode{ src.m_gameMode }
{
    build = m_build.empty() ? nullptr : m_build.data();
    customCommandLineData = m_customCommandLineData.empty() ? nullptr : m_customCommandLineData.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    externalMatchmakerEventEndpoint = m_externalMatchmakerEventEndpoint.empty() ? nullptr : m_externalMatchmakerEventEndpoint.data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
}

StartGameRequest::StartGameRequest(StartGameRequest&& src) :
    PlayFabMatchmakerStartGameRequest{ src },
    m_build{ std::move(src.m_build) },
    m_customCommandLineData{ std::move(src.m_customCommandLineData) },
    m_customTags{ std::move(src.m_customTags) },
    m_externalMatchmakerEventEndpoint{ std::move(src.m_externalMatchmakerEventEndpoint) },
    m_gameMode{ std::move(src.m_gameMode) }
{
    build = m_build.empty() ? nullptr : m_build.data();
    customCommandLineData = m_customCommandLineData.empty() ? nullptr : m_customCommandLineData.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    externalMatchmakerEventEndpoint = m_externalMatchmakerEventEndpoint.empty() ? nullptr : m_externalMatchmakerEventEndpoint.data();
    gameMode = m_gameMode.empty() ? nullptr : m_gameMode.data();
}

StartGameRequest::StartGameRequest(const PlayFabMatchmakerStartGameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartGameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Build", m_build, build);
    JsonUtils::ObjectGetMember(input, "CustomCommandLineData", m_customCommandLineData, customCommandLineData);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExternalMatchmakerEventEndpoint", m_externalMatchmakerEventEndpoint, externalMatchmakerEventEndpoint);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "Region", region);
}

JsonValue StartGameRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerStartGameRequest>(*this);
}

StartGameResponse::StartGameResponse() :
    PlayFabMatchmakerStartGameResponse{}
{
}

StartGameResponse::StartGameResponse(const StartGameResponse& src) :
    PlayFabMatchmakerStartGameResponse{ src },
    m_gameID{ src.m_gameID },
    m_serverIPV4Address{ src.m_serverIPV4Address },
    m_serverIPV6Address{ src.m_serverIPV6Address },
    m_serverPublicDNSName{ src.m_serverPublicDNSName }
{
    gameID = m_gameID.empty() ? nullptr : m_gameID.data();
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
}

StartGameResponse::StartGameResponse(StartGameResponse&& src) :
    PlayFabMatchmakerStartGameResponse{ src },
    m_gameID{ std::move(src.m_gameID) },
    m_serverIPV4Address{ std::move(src.m_serverIPV4Address) },
    m_serverIPV6Address{ std::move(src.m_serverIPV6Address) },
    m_serverPublicDNSName{ std::move(src.m_serverPublicDNSName) }
{
    gameID = m_gameID.empty() ? nullptr : m_gameID.data();
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
}

StartGameResponse::StartGameResponse(const PlayFabMatchmakerStartGameResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StartGameResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameID", m_gameID, gameID);
    JsonUtils::ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
    JsonUtils::ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
    JsonUtils::ObjectGetMember(input, "ServerPort", serverPort);
    JsonUtils::ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
}

JsonValue StartGameResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerStartGameResponse>(*this);
}

size_t StartGameResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMatchmakerStartGameResponse) };
    serializedSize += (m_gameID.size() + 1);
    serializedSize += (m_serverIPV4Address.size() + 1);
    serializedSize += (m_serverIPV6Address.size() + 1);
    serializedSize += (m_serverPublicDNSName.size() + 1);
    return serializedSize;
}

void StartGameResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMatchmakerStartGameResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMatchmakerStartGameResponse);
    memcpy(stringBuffer, m_gameID.data(), m_gameID.size() + 1);
    serializedStruct->gameID = stringBuffer;
    stringBuffer += m_gameID.size() + 1;
    memcpy(stringBuffer, m_serverIPV4Address.data(), m_serverIPV4Address.size() + 1);
    serializedStruct->serverIPV4Address = stringBuffer;
    stringBuffer += m_serverIPV4Address.size() + 1;
    memcpy(stringBuffer, m_serverIPV6Address.data(), m_serverIPV6Address.size() + 1);
    serializedStruct->serverIPV6Address = stringBuffer;
    stringBuffer += m_serverIPV6Address.size() + 1;
    memcpy(stringBuffer, m_serverPublicDNSName.data(), m_serverPublicDNSName.size() + 1);
    serializedStruct->serverPublicDNSName = stringBuffer;
    stringBuffer += m_serverPublicDNSName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UserInfoRequest::UserInfoRequest() :
    PlayFabMatchmakerUserInfoRequest{}
{
}

UserInfoRequest::UserInfoRequest(const UserInfoRequest& src) :
    PlayFabMatchmakerUserInfoRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UserInfoRequest::UserInfoRequest(UserInfoRequest&& src) :
    PlayFabMatchmakerUserInfoRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UserInfoRequest::UserInfoRequest(const PlayFabMatchmakerUserInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MinCatalogVersion", minCatalogVersion);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UserInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerUserInfoRequest>(*this);
}

UserInfoResponse::UserInfoResponse() :
    PlayFabMatchmakerUserInfoResponse{}
{
}

UserInfoResponse::UserInfoResponse(const UserInfoResponse& src) :
    PlayFabMatchmakerUserInfoResponse{ src },
    m_inventory{ src.m_inventory },
    m_playFabId{ src.m_playFabId },
    m_steamId{ src.m_steamId },
    m_titleDisplayName{ src.m_titleDisplayName },
    m_username{ src.m_username },
    m_virtualCurrency{ src.m_virtualCurrency },
    m_virtualCurrencyRechargeTimes{ src.m_virtualCurrencyRechargeTimes }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

UserInfoResponse::UserInfoResponse(UserInfoResponse&& src) :
    PlayFabMatchmakerUserInfoResponse{ src },
    m_inventory{ std::move(src.m_inventory) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_steamId{ std::move(src.m_steamId) },
    m_titleDisplayName{ std::move(src.m_titleDisplayName) },
    m_username{ std::move(src.m_username) },
    m_virtualCurrency{ std::move(src.m_virtualCurrency) },
    m_virtualCurrencyRechargeTimes{ std::move(src.m_virtualCurrencyRechargeTimes) }
{
    inventory = m_inventory.Empty() ? nullptr : m_inventory.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
    titleDisplayName = m_titleDisplayName.empty() ? nullptr : m_titleDisplayName.data();
    username = m_username.empty() ? nullptr : m_username.data();
    virtualCurrency = m_virtualCurrency.Empty() ? nullptr : m_virtualCurrency.Data();
    virtualCurrencyRechargeTimes = m_virtualCurrencyRechargeTimes.Empty() ? nullptr : m_virtualCurrencyRechargeTimes.Data();
}

UserInfoResponse::UserInfoResponse(const PlayFabMatchmakerUserInfoResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserInfoResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Inventory", m_inventory, inventory, inventoryCount);
    JsonUtils::ObjectGetMember(input, "IsDeveloper", isDeveloper);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "SteamId", m_steamId, steamId);
    JsonUtils::ObjectGetMember(input, "TitleDisplayName", m_titleDisplayName, titleDisplayName);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
    JsonUtils::ObjectGetMember(input, "VirtualCurrency", m_virtualCurrency, virtualCurrency, virtualCurrencyCount);
    JsonUtils::ObjectGetMember(input, "VirtualCurrencyRechargeTimes", m_virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimes, virtualCurrencyRechargeTimesCount);
}

JsonValue UserInfoResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMatchmakerUserInfoResponse>(*this);
}

} // namespace MatchmakerModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerAuthUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthorizationTicket", input.authorizationTicket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerAuthUserResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Authorized", input.authorized);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerPlayerJoinedRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerPlayerLeftRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerStartGameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Build", input.build);
    JsonUtils::ObjectAddMember(output, "CustomCommandLineData", input.customCommandLineData);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ExternalMatchmakerEventEndpoint", input.externalMatchmakerEventEndpoint);
    JsonUtils::ObjectAddMember(output, "GameMode", input.gameMode);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerStartGameResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameID", input.gameID);
    JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
    JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
    JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
    JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerUserInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MinCatalogVersion", input.minCatalogVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMatchmakerUserInfoResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Inventory", input.inventory, input.inventoryCount);
    JsonUtils::ObjectAddMember(output, "IsDeveloper", input.isDeveloper);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
    JsonUtils::ObjectAddMember(output, "TitleDisplayName", input.titleDisplayName);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    JsonUtils::ObjectAddMember(output, "VirtualCurrency", input.virtualCurrency, input.virtualCurrencyCount);
    JsonUtils::ObjectAddMember(output, "VirtualCurrencyRechargeTimes", input.virtualCurrencyRechargeTimes, input.virtualCurrencyRechargeTimesCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
