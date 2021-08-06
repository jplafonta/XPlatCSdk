#include "stdafx.h"
#include "MatchmakingDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace MatchmakingModels
{

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest() :
    PFMatchmakingGetMatchmakerGameInfoRequest{}
{
}

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src) :
    PFMatchmakingGetMatchmakerGameInfoRequest{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest(GetMatchmakerGameInfoRequest&& src) :
    PFMatchmakingGetMatchmakerGameInfoRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

GetMatchmakerGameInfoRequest::GetMatchmakerGameInfoRequest(const PFMatchmakingGetMatchmakerGameInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue GetMatchmakerGameInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchmakerGameInfoRequest>(*this);
}

size_t GetMatchmakerGameInfoRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingGetMatchmakerGameInfoRequest) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void GetMatchmakerGameInfoRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingGetMatchmakerGameInfoRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingGetMatchmakerGameInfoRequest);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult() :
    PFMatchmakingGetMatchmakerGameInfoResult{}
{
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src) :
    PFMatchmakingGetMatchmakerGameInfoResult{ src },
    m_buildVersion{ src.m_buildVersion },
    m_endTime{ src.m_endTime },
    m_lobbyId{ src.m_lobbyId },
    m_mode{ src.m_mode },
    m_players{ src.m_players },
    m_region{ src.m_region },
    m_serverIPV4Address{ src.m_serverIPV4Address },
    m_serverIPV6Address{ src.m_serverIPV6Address },
    m_serverPublicDNSName{ src.m_serverPublicDNSName },
    m_titleId{ src.m_titleId }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    endTime = m_endTime ? m_endTime.operator->() : nullptr;
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    mode = m_mode.empty() ? nullptr : m_mode.data();
    players = m_players.Empty() ? nullptr : m_players.Data();
    region = m_region ? m_region.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult(GetMatchmakerGameInfoResult&& src) :
    PFMatchmakingGetMatchmakerGameInfoResult{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_endTime{ std::move(src.m_endTime) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_mode{ std::move(src.m_mode) },
    m_players{ std::move(src.m_players) },
    m_region{ std::move(src.m_region) },
    m_serverIPV4Address{ std::move(src.m_serverIPV4Address) },
    m_serverIPV6Address{ std::move(src.m_serverIPV6Address) },
    m_serverPublicDNSName{ std::move(src.m_serverPublicDNSName) },
    m_titleId{ std::move(src.m_titleId) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    endTime = m_endTime ? m_endTime.operator->() : nullptr;
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    mode = m_mode.empty() ? nullptr : m_mode.data();
    players = m_players.Empty() ? nullptr : m_players.Data();
    region = m_region ? m_region.operator->() : nullptr;
    serverIPV4Address = m_serverIPV4Address.empty() ? nullptr : m_serverIPV4Address.data();
    serverIPV6Address = m_serverIPV6Address.empty() ? nullptr : m_serverIPV6Address.data();
    serverPublicDNSName = m_serverPublicDNSName.empty() ? nullptr : m_serverPublicDNSName.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GetMatchmakerGameInfoResult::GetMatchmakerGameInfoResult(const PFMatchmakingGetMatchmakerGameInfoResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameInfoResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "EndTime", m_endTime, endTime, true);
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
    JsonUtils::ObjectGetMember(input, "Mode", m_mode, mode);
    JsonUtils::ObjectGetMember(input, "Players", m_players, players, playersCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ServerIPV4Address", m_serverIPV4Address, serverIPV4Address);
    JsonUtils::ObjectGetMember(input, "ServerIPV6Address", m_serverIPV6Address, serverIPV6Address);
    JsonUtils::ObjectGetMember(input, "ServerPort", serverPort);
    JsonUtils::ObjectGetMember(input, "ServerPublicDNSName", m_serverPublicDNSName, serverPublicDNSName);
    JsonUtils::ObjectGetMember(input, "StartTime", startTime, true);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue GetMatchmakerGameInfoResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchmakerGameInfoResult>(*this);
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest() :
    PFMatchmakingGetMatchmakerGameModesRequest{}
{
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src) :
    PFMatchmakingGetMatchmakerGameModesRequest{ src },
    m_buildVersion{ src.m_buildVersion }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest(GetMatchmakerGameModesRequest&& src) :
    PFMatchmakingGetMatchmakerGameModesRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
}

GetMatchmakerGameModesRequest::GetMatchmakerGameModesRequest(const PFMatchmakingGetMatchmakerGameModesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameModesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
}

JsonValue GetMatchmakerGameModesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchmakerGameModesRequest>(*this);
}

size_t GetMatchmakerGameModesRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingGetMatchmakerGameModesRequest) };
    serializedSize += (m_buildVersion.size() + 1);
    return serializedSize;
}

void GetMatchmakerGameModesRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingGetMatchmakerGameModesRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingGetMatchmakerGameModesRequest);
    memcpy(stringBuffer, m_buildVersion.data(), m_buildVersion.size() + 1);
    serializedStruct->buildVersion = stringBuffer;
    stringBuffer += m_buildVersion.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GameModeInfo::GameModeInfo() :
    PFMatchmakingGameModeInfo{}
{
}

GameModeInfo::GameModeInfo(const GameModeInfo& src) :
    PFMatchmakingGameModeInfo{ src },
    m_gamemode{ src.m_gamemode },
    m_startOpen{ src.m_startOpen }
{
    gamemode = m_gamemode.empty() ? nullptr : m_gamemode.data();
    startOpen = m_startOpen ? m_startOpen.operator->() : nullptr;
}

GameModeInfo::GameModeInfo(GameModeInfo&& src) :
    PFMatchmakingGameModeInfo{ src },
    m_gamemode{ std::move(src.m_gamemode) },
    m_startOpen{ std::move(src.m_startOpen) }
{
    gamemode = m_gamemode.empty() ? nullptr : m_gamemode.data();
    startOpen = m_startOpen ? m_startOpen.operator->() : nullptr;
}

GameModeInfo::GameModeInfo(const PFMatchmakingGameModeInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameModeInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Gamemode", m_gamemode, gamemode);
    JsonUtils::ObjectGetMember(input, "MaxPlayerCount", maxPlayerCount);
    JsonUtils::ObjectGetMember(input, "MinPlayerCount", minPlayerCount);
    JsonUtils::ObjectGetMember(input, "StartOpen", m_startOpen, startOpen);
}

JsonValue GameModeInfo::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGameModeInfo>(*this);
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult() :
    PFMatchmakingGetMatchmakerGameModesResult{}
{
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src) :
    PFMatchmakingGetMatchmakerGameModesResult{ src },
    m_gameModes{ src.m_gameModes }
{
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult(GetMatchmakerGameModesResult&& src) :
    PFMatchmakingGetMatchmakerGameModesResult{ src },
    m_gameModes{ std::move(src.m_gameModes) }
{
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

GetMatchmakerGameModesResult::GetMatchmakerGameModesResult(const PFMatchmakingGetMatchmakerGameModesResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakerGameModesResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GameModes", m_gameModes, gameModes, gameModesCount);
}

JsonValue GetMatchmakerGameModesResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchmakerGameModesResult>(*this);
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest() :
    PFMatchmakingModifyMatchmakerGameModesRequest{}
{
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src) :
    PFMatchmakingModifyMatchmakerGameModesRequest{ src },
    m_buildVersion{ src.m_buildVersion },
    m_gameModes{ src.m_gameModes }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest(ModifyMatchmakerGameModesRequest&& src) :
    PFMatchmakingModifyMatchmakerGameModesRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_gameModes{ std::move(src.m_gameModes) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    gameModes = m_gameModes.Empty() ? nullptr : m_gameModes.Data();
}

ModifyMatchmakerGameModesRequest::ModifyMatchmakerGameModesRequest(const PFMatchmakingModifyMatchmakerGameModesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ModifyMatchmakerGameModesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "GameModes", m_gameModes, gameModes, gameModesCount);
}

JsonValue ModifyMatchmakerGameModesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingModifyMatchmakerGameModesRequest>(*this);
}

Container_Dictionary_String_String::Container_Dictionary_String_String() :
    PFMatchmakingContainer_Dictionary_String_String{}
{
}

Container_Dictionary_String_String::Container_Dictionary_String_String(const Container_Dictionary_String_String& src) :
    PFMatchmakingContainer_Dictionary_String_String{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

Container_Dictionary_String_String::Container_Dictionary_String_String(Container_Dictionary_String_String&& src) :
    PFMatchmakingContainer_Dictionary_String_String{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

Container_Dictionary_String_String::Container_Dictionary_String_String(const PFMatchmakingContainer_Dictionary_String_String& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Container_Dictionary_String_String::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
}

JsonValue Container_Dictionary_String_String::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingContainer_Dictionary_String_String>(*this);
}

CollectionFilter::CollectionFilter() :
    PFMatchmakingCollectionFilter{}
{
}

CollectionFilter::CollectionFilter(const CollectionFilter& src) :
    PFMatchmakingCollectionFilter{ src },
    m_excludes{ src.m_excludes },
    m_includes{ src.m_includes }
{
    excludes = m_excludes.Empty() ? nullptr : m_excludes.Data();
    includes = m_includes.Empty() ? nullptr : m_includes.Data();
}

CollectionFilter::CollectionFilter(CollectionFilter&& src) :
    PFMatchmakingCollectionFilter{ src },
    m_excludes{ std::move(src.m_excludes) },
    m_includes{ std::move(src.m_includes) }
{
    excludes = m_excludes.Empty() ? nullptr : m_excludes.Data();
    includes = m_includes.Empty() ? nullptr : m_includes.Data();
}

CollectionFilter::CollectionFilter(const PFMatchmakingCollectionFilter& src)
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
    return JsonUtils::ToJson<PFMatchmakingCollectionFilter>(*this);
}

CurrentGamesRequest::CurrentGamesRequest() :
    PFMatchmakingCurrentGamesRequest{}
{
}

CurrentGamesRequest::CurrentGamesRequest(const CurrentGamesRequest& src) :
    PFMatchmakingCurrentGamesRequest{ src },
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
    PFMatchmakingCurrentGamesRequest{ src },
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

CurrentGamesRequest::CurrentGamesRequest(const PFMatchmakingCurrentGamesRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingCurrentGamesRequest>(*this);
}

GameInfo::GameInfo() :
    PFMatchmakingGameInfo{}
{
}

GameInfo::GameInfo(const GameInfo& src) :
    PFMatchmakingGameInfo{ src },
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
    PFMatchmakingGameInfo{ src },
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

GameInfo::GameInfo(const PFMatchmakingGameInfo& src)
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
    return JsonUtils::ToJson<PFMatchmakingGameInfo>(*this);
}

CurrentGamesResult::CurrentGamesResult() :
    PFMatchmakingCurrentGamesResult{}
{
}

CurrentGamesResult::CurrentGamesResult(const CurrentGamesResult& src) :
    PFMatchmakingCurrentGamesResult{ src },
    m_games{ src.m_games }
{
    games = m_games.Empty() ? nullptr : m_games.Data();
}

CurrentGamesResult::CurrentGamesResult(CurrentGamesResult&& src) :
    PFMatchmakingCurrentGamesResult{ src },
    m_games{ std::move(src.m_games) }
{
    games = m_games.Empty() ? nullptr : m_games.Data();
}

CurrentGamesResult::CurrentGamesResult(const PFMatchmakingCurrentGamesResult& src)
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
    return JsonUtils::ToJson<PFMatchmakingCurrentGamesResult>(*this);
}

GameServerRegionsRequest::GameServerRegionsRequest() :
    PFMatchmakingGameServerRegionsRequest{}
{
}

GameServerRegionsRequest::GameServerRegionsRequest(const GameServerRegionsRequest& src) :
    PFMatchmakingGameServerRegionsRequest{ src },
    m_buildVersion{ src.m_buildVersion },
    m_titleId{ src.m_titleId }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GameServerRegionsRequest::GameServerRegionsRequest(GameServerRegionsRequest&& src) :
    PFMatchmakingGameServerRegionsRequest{ src },
    m_buildVersion{ std::move(src.m_buildVersion) },
    m_titleId{ std::move(src.m_titleId) }
{
    buildVersion = m_buildVersion.empty() ? nullptr : m_buildVersion.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

GameServerRegionsRequest::GameServerRegionsRequest(const PFMatchmakingGameServerRegionsRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingGameServerRegionsRequest>(*this);
}

size_t GameServerRegionsRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingGameServerRegionsRequest) };
    serializedSize += (m_buildVersion.size() + 1);
    serializedSize += (m_titleId.size() + 1);
    return serializedSize;
}

void GameServerRegionsRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingGameServerRegionsRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingGameServerRegionsRequest);
    memcpy(stringBuffer, m_buildVersion.data(), m_buildVersion.size() + 1);
    serializedStruct->buildVersion = stringBuffer;
    stringBuffer += m_buildVersion.size() + 1;
    memcpy(stringBuffer, m_titleId.data(), m_titleId.size() + 1);
    serializedStruct->titleId = stringBuffer;
    stringBuffer += m_titleId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RegionInfo::RegionInfo() :
    PFMatchmakingRegionInfo{}
{
}

RegionInfo::RegionInfo(const RegionInfo& src) :
    PFMatchmakingRegionInfo{ src },
    m_name{ src.m_name },
    m_pingUrl{ src.m_pingUrl },
    m_region{ src.m_region }
{
    name = m_name.empty() ? nullptr : m_name.data();
    pingUrl = m_pingUrl.empty() ? nullptr : m_pingUrl.data();
    region = m_region ? m_region.operator->() : nullptr;
}

RegionInfo::RegionInfo(RegionInfo&& src) :
    PFMatchmakingRegionInfo{ src },
    m_name{ std::move(src.m_name) },
    m_pingUrl{ std::move(src.m_pingUrl) },
    m_region{ std::move(src.m_region) }
{
    name = m_name.empty() ? nullptr : m_name.data();
    pingUrl = m_pingUrl.empty() ? nullptr : m_pingUrl.data();
    region = m_region ? m_region.operator->() : nullptr;
}

RegionInfo::RegionInfo(const PFMatchmakingRegionInfo& src)
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
    return JsonUtils::ToJson<PFMatchmakingRegionInfo>(*this);
}

GameServerRegionsResult::GameServerRegionsResult() :
    PFMatchmakingGameServerRegionsResult{}
{
}

GameServerRegionsResult::GameServerRegionsResult(const GameServerRegionsResult& src) :
    PFMatchmakingGameServerRegionsResult{ src },
    m_regions{ src.m_regions }
{
    regions = m_regions.Empty() ? nullptr : m_regions.Data();
}

GameServerRegionsResult::GameServerRegionsResult(GameServerRegionsResult&& src) :
    PFMatchmakingGameServerRegionsResult{ src },
    m_regions{ std::move(src.m_regions) }
{
    regions = m_regions.Empty() ? nullptr : m_regions.Data();
}

GameServerRegionsResult::GameServerRegionsResult(const PFMatchmakingGameServerRegionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameServerRegionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Regions", m_regions, regions, regionsCount);
}

JsonValue GameServerRegionsResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGameServerRegionsResult>(*this);
}

MatchmakeRequest::MatchmakeRequest() :
    PFMatchmakingMatchmakeRequest{}
{
}

MatchmakeRequest::MatchmakeRequest(const MatchmakeRequest& src) :
    PFMatchmakingMatchmakeRequest{ src },
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
    PFMatchmakingMatchmakeRequest{ src },
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

MatchmakeRequest::MatchmakeRequest(const PFMatchmakingMatchmakeRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingMatchmakeRequest>(*this);
}

MatchmakeResult::MatchmakeResult() :
    PFMatchmakingMatchmakeResult{}
{
}

MatchmakeResult::MatchmakeResult(const MatchmakeResult& src) :
    PFMatchmakingMatchmakeResult{ src },
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
    PFMatchmakingMatchmakeResult{ src },
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

MatchmakeResult::MatchmakeResult(const PFMatchmakingMatchmakeResult& src)
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
    return JsonUtils::ToJson<PFMatchmakingMatchmakeResult>(*this);
}

ClientStartGameRequest::ClientStartGameRequest() :
    PFMatchmakingClientStartGameRequest{}
{
}

ClientStartGameRequest::ClientStartGameRequest(const ClientStartGameRequest& src) :
    PFMatchmakingClientStartGameRequest{ src },
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

ClientStartGameRequest::ClientStartGameRequest(ClientStartGameRequest&& src) :
    PFMatchmakingClientStartGameRequest{ src },
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

ClientStartGameRequest::ClientStartGameRequest(const PFMatchmakingClientStartGameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientStartGameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildVersion", m_buildVersion, buildVersion);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomCommandLineData", m_customCommandLineData, customCommandLineData);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "Region", region);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue ClientStartGameRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingClientStartGameRequest>(*this);
}

StartGameResult::StartGameResult() :
    PFMatchmakingStartGameResult{}
{
}

StartGameResult::StartGameResult(const StartGameResult& src) :
    PFMatchmakingStartGameResult{ src },
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
    PFMatchmakingStartGameResult{ src },
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

StartGameResult::StartGameResult(const PFMatchmakingStartGameResult& src)
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
    return JsonUtils::ToJson<PFMatchmakingStartGameResult>(*this);
}

AuthUserRequest::AuthUserRequest() :
    PFMatchmakingAuthUserRequest{}
{
}

AuthUserRequest::AuthUserRequest(const AuthUserRequest& src) :
    PFMatchmakingAuthUserRequest{ src },
    m_authorizationTicket{ src.m_authorizationTicket }
{
    authorizationTicket = m_authorizationTicket.empty() ? nullptr : m_authorizationTicket.data();
}

AuthUserRequest::AuthUserRequest(AuthUserRequest&& src) :
    PFMatchmakingAuthUserRequest{ src },
    m_authorizationTicket{ std::move(src.m_authorizationTicket) }
{
    authorizationTicket = m_authorizationTicket.empty() ? nullptr : m_authorizationTicket.data();
}

AuthUserRequest::AuthUserRequest(const PFMatchmakingAuthUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AuthUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthorizationTicket", m_authorizationTicket, authorizationTicket);
}

JsonValue AuthUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingAuthUserRequest>(*this);
}

size_t AuthUserRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingAuthUserRequest) };
    serializedSize += (m_authorizationTicket.size() + 1);
    return serializedSize;
}

void AuthUserRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingAuthUserRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingAuthUserRequest);
    memcpy(stringBuffer, m_authorizationTicket.data(), m_authorizationTicket.size() + 1);
    serializedStruct->authorizationTicket = stringBuffer;
    stringBuffer += m_authorizationTicket.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AuthUserResponse::AuthUserResponse() :
    PFMatchmakingAuthUserResponse{}
{
}

AuthUserResponse::AuthUserResponse(const AuthUserResponse& src) :
    PFMatchmakingAuthUserResponse{ src },
    m_playFabId{ src.m_playFabId }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AuthUserResponse::AuthUserResponse(AuthUserResponse&& src) :
    PFMatchmakingAuthUserResponse{ src },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AuthUserResponse::AuthUserResponse(const PFMatchmakingAuthUserResponse& src)
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
    return JsonUtils::ToJson<PFMatchmakingAuthUserResponse>(*this);
}

size_t AuthUserResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingAuthUserResponse) };
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void AuthUserResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingAuthUserResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingAuthUserResponse);
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

PlayerJoinedRequest::PlayerJoinedRequest() :
    PFMatchmakingPlayerJoinedRequest{}
{
}

PlayerJoinedRequest::PlayerJoinedRequest(const PlayerJoinedRequest& src) :
    PFMatchmakingPlayerJoinedRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerJoinedRequest::PlayerJoinedRequest(PlayerJoinedRequest&& src) :
    PFMatchmakingPlayerJoinedRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerJoinedRequest::PlayerJoinedRequest(const PFMatchmakingPlayerJoinedRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingPlayerJoinedRequest>(*this);
}

PlayerLeftRequest::PlayerLeftRequest() :
    PFMatchmakingPlayerLeftRequest{}
{
}

PlayerLeftRequest::PlayerLeftRequest(const PlayerLeftRequest& src) :
    PFMatchmakingPlayerLeftRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerLeftRequest::PlayerLeftRequest(PlayerLeftRequest&& src) :
    PFMatchmakingPlayerLeftRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

PlayerLeftRequest::PlayerLeftRequest(const PFMatchmakingPlayerLeftRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingPlayerLeftRequest>(*this);
}

MatchmakerStartGameRequest::MatchmakerStartGameRequest() :
    PFMatchmakingMatchmakerStartGameRequest{}
{
}

MatchmakerStartGameRequest::MatchmakerStartGameRequest(const MatchmakerStartGameRequest& src) :
    PFMatchmakingMatchmakerStartGameRequest{ src },
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

MatchmakerStartGameRequest::MatchmakerStartGameRequest(MatchmakerStartGameRequest&& src) :
    PFMatchmakingMatchmakerStartGameRequest{ src },
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

MatchmakerStartGameRequest::MatchmakerStartGameRequest(const PFMatchmakingMatchmakerStartGameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakerStartGameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Build", m_build, build);
    JsonUtils::ObjectGetMember(input, "CustomCommandLineData", m_customCommandLineData, customCommandLineData);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExternalMatchmakerEventEndpoint", m_externalMatchmakerEventEndpoint, externalMatchmakerEventEndpoint);
    JsonUtils::ObjectGetMember(input, "GameMode", m_gameMode, gameMode);
    JsonUtils::ObjectGetMember(input, "Region", region);
}

JsonValue MatchmakerStartGameRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingMatchmakerStartGameRequest>(*this);
}

StartGameResponse::StartGameResponse() :
    PFMatchmakingStartGameResponse{}
{
}

StartGameResponse::StartGameResponse(const StartGameResponse& src) :
    PFMatchmakingStartGameResponse{ src },
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
    PFMatchmakingStartGameResponse{ src },
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

StartGameResponse::StartGameResponse(const PFMatchmakingStartGameResponse& src)
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
    return JsonUtils::ToJson<PFMatchmakingStartGameResponse>(*this);
}

size_t StartGameResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingStartGameResponse) };
    serializedSize += (m_gameID.size() + 1);
    serializedSize += (m_serverIPV4Address.size() + 1);
    serializedSize += (m_serverIPV6Address.size() + 1);
    serializedSize += (m_serverPublicDNSName.size() + 1);
    return serializedSize;
}

void StartGameResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingStartGameResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingStartGameResponse);
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
    PFMatchmakingUserInfoRequest{}
{
}

UserInfoRequest::UserInfoRequest(const UserInfoRequest& src) :
    PFMatchmakingUserInfoRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UserInfoRequest::UserInfoRequest(UserInfoRequest&& src) :
    PFMatchmakingUserInfoRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UserInfoRequest::UserInfoRequest(const PFMatchmakingUserInfoRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingUserInfoRequest>(*this);
}

UserInfoResponse::UserInfoResponse() :
    PFMatchmakingUserInfoResponse{}
{
}

UserInfoResponse::UserInfoResponse(const UserInfoResponse& src) :
    PFMatchmakingUserInfoResponse{ src },
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
    PFMatchmakingUserInfoResponse{ src },
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

UserInfoResponse::UserInfoResponse(const PFMatchmakingUserInfoResponse& src)
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
    return JsonUtils::ToJson<PFMatchmakingUserInfoResponse>(*this);
}

DeregisterGameRequest::DeregisterGameRequest() :
    PFMatchmakingDeregisterGameRequest{}
{
}

DeregisterGameRequest::DeregisterGameRequest(const DeregisterGameRequest& src) :
    PFMatchmakingDeregisterGameRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

DeregisterGameRequest::DeregisterGameRequest(DeregisterGameRequest&& src) :
    PFMatchmakingDeregisterGameRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

DeregisterGameRequest::DeregisterGameRequest(const PFMatchmakingDeregisterGameRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingDeregisterGameRequest>(*this);
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest() :
    PFMatchmakingNotifyMatchmakerPlayerLeftRequest{}
{
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest(const NotifyMatchmakerPlayerLeftRequest& src) :
    PFMatchmakingNotifyMatchmakerPlayerLeftRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest(NotifyMatchmakerPlayerLeftRequest&& src) :
    PFMatchmakingNotifyMatchmakerPlayerLeftRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

NotifyMatchmakerPlayerLeftRequest::NotifyMatchmakerPlayerLeftRequest(const PFMatchmakingNotifyMatchmakerPlayerLeftRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingNotifyMatchmakerPlayerLeftRequest>(*this);
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult() :
    PFMatchmakingNotifyMatchmakerPlayerLeftResult{}
{
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult(const NotifyMatchmakerPlayerLeftResult& src) :
    PFMatchmakingNotifyMatchmakerPlayerLeftResult{ src },
    m_playerState{ src.m_playerState }
{
    playerState = m_playerState ? m_playerState.operator->() : nullptr;
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult(NotifyMatchmakerPlayerLeftResult&& src) :
    PFMatchmakingNotifyMatchmakerPlayerLeftResult{ src },
    m_playerState{ std::move(src.m_playerState) }
{
    playerState = m_playerState ? m_playerState.operator->() : nullptr;
}

NotifyMatchmakerPlayerLeftResult::NotifyMatchmakerPlayerLeftResult(const PFMatchmakingNotifyMatchmakerPlayerLeftResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void NotifyMatchmakerPlayerLeftResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerState", m_playerState, playerState);
}

JsonValue NotifyMatchmakerPlayerLeftResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingNotifyMatchmakerPlayerLeftResult>(*this);
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest() :
    PFMatchmakingRedeemMatchmakerTicketRequest{}
{
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest(const RedeemMatchmakerTicketRequest& src) :
    PFMatchmakingRedeemMatchmakerTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_lobbyId{ src.m_lobbyId },
    m_ticket{ src.m_ticket }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest(RedeemMatchmakerTicketRequest&& src) :
    PFMatchmakingRedeemMatchmakerTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_ticket{ std::move(src.m_ticket) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    ticket = m_ticket.empty() ? nullptr : m_ticket.data();
}

RedeemMatchmakerTicketRequest::RedeemMatchmakerTicketRequest(const PFMatchmakingRedeemMatchmakerTicketRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingRedeemMatchmakerTicketRequest>(*this);
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult() :
    PFMatchmakingRedeemMatchmakerTicketResult{}
{
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult(const RedeemMatchmakerTicketResult& src) :
    PFMatchmakingRedeemMatchmakerTicketResult{ src },
    m_error{ src.m_error },
    m_userInfo{ src.m_userInfo }
{
    error = m_error.empty() ? nullptr : m_error.data();
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult(RedeemMatchmakerTicketResult&& src) :
    PFMatchmakingRedeemMatchmakerTicketResult{ src },
    m_error{ std::move(src.m_error) },
    m_userInfo{ std::move(src.m_userInfo) }
{
    error = m_error.empty() ? nullptr : m_error.data();
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

RedeemMatchmakerTicketResult::RedeemMatchmakerTicketResult(const PFMatchmakingRedeemMatchmakerTicketResult& src)
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
    return JsonUtils::ToJson<PFMatchmakingRedeemMatchmakerTicketResult>(*this);
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest() :
    PFMatchmakingRefreshGameServerInstanceHeartbeatRequest{}
{
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest(const RefreshGameServerInstanceHeartbeatRequest& src) :
    PFMatchmakingRefreshGameServerInstanceHeartbeatRequest{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest(RefreshGameServerInstanceHeartbeatRequest&& src) :
    PFMatchmakingRefreshGameServerInstanceHeartbeatRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RefreshGameServerInstanceHeartbeatRequest::RefreshGameServerInstanceHeartbeatRequest(const PFMatchmakingRefreshGameServerInstanceHeartbeatRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RefreshGameServerInstanceHeartbeatRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue RefreshGameServerInstanceHeartbeatRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingRefreshGameServerInstanceHeartbeatRequest>(*this);
}

size_t RefreshGameServerInstanceHeartbeatRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingRefreshGameServerInstanceHeartbeatRequest) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void RefreshGameServerInstanceHeartbeatRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingRefreshGameServerInstanceHeartbeatRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingRefreshGameServerInstanceHeartbeatRequest);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RegisterGameRequest::RegisterGameRequest() :
    PFMatchmakingRegisterGameRequest{}
{
}

RegisterGameRequest::RegisterGameRequest(const RegisterGameRequest& src) :
    PFMatchmakingRegisterGameRequest{ src },
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
    PFMatchmakingRegisterGameRequest{ src },
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

RegisterGameRequest::RegisterGameRequest(const PFMatchmakingRegisterGameRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingRegisterGameRequest>(*this);
}

RegisterGameResponse::RegisterGameResponse() :
    PFMatchmakingRegisterGameResponse{}
{
}

RegisterGameResponse::RegisterGameResponse(const RegisterGameResponse& src) :
    PFMatchmakingRegisterGameResponse{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RegisterGameResponse::RegisterGameResponse(RegisterGameResponse&& src) :
    PFMatchmakingRegisterGameResponse{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

RegisterGameResponse::RegisterGameResponse(const PFMatchmakingRegisterGameResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterGameResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LobbyId", m_lobbyId, lobbyId);
}

JsonValue RegisterGameResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingRegisterGameResponse>(*this);
}

size_t RegisterGameResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingRegisterGameResponse) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void RegisterGameResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingRegisterGameResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingRegisterGameResponse);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest() :
    PFMatchmakingSetGameServerInstanceDataRequest{}
{
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest(const SetGameServerInstanceDataRequest& src) :
    PFMatchmakingSetGameServerInstanceDataRequest{ src },
    m_gameServerData{ src.m_gameServerData },
    m_lobbyId{ src.m_lobbyId }
{
    gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest(SetGameServerInstanceDataRequest&& src) :
    PFMatchmakingSetGameServerInstanceDataRequest{ src },
    m_gameServerData{ std::move(src.m_gameServerData) },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    gameServerData = m_gameServerData.empty() ? nullptr : m_gameServerData.data();
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceDataRequest::SetGameServerInstanceDataRequest(const PFMatchmakingSetGameServerInstanceDataRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingSetGameServerInstanceDataRequest>(*this);
}

size_t SetGameServerInstanceDataRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingSetGameServerInstanceDataRequest) };
    serializedSize += (m_gameServerData.size() + 1);
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void SetGameServerInstanceDataRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingSetGameServerInstanceDataRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingSetGameServerInstanceDataRequest);
    memcpy(stringBuffer, m_gameServerData.data(), m_gameServerData.size() + 1);
    serializedStruct->gameServerData = stringBuffer;
    stringBuffer += m_gameServerData.size() + 1;
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest() :
    PFMatchmakingSetGameServerInstanceStateRequest{}
{
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest(const SetGameServerInstanceStateRequest& src) :
    PFMatchmakingSetGameServerInstanceStateRequest{ src },
    m_lobbyId{ src.m_lobbyId }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest(SetGameServerInstanceStateRequest&& src) :
    PFMatchmakingSetGameServerInstanceStateRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
}

SetGameServerInstanceStateRequest::SetGameServerInstanceStateRequest(const PFMatchmakingSetGameServerInstanceStateRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingSetGameServerInstanceStateRequest>(*this);
}

size_t SetGameServerInstanceStateRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingSetGameServerInstanceStateRequest) };
    serializedSize += (m_lobbyId.size() + 1);
    return serializedSize;
}

void SetGameServerInstanceStateRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingSetGameServerInstanceStateRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingSetGameServerInstanceStateRequest);
    memcpy(stringBuffer, m_lobbyId.data(), m_lobbyId.size() + 1);
    serializedStruct->lobbyId = stringBuffer;
    stringBuffer += m_lobbyId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest() :
    PFMatchmakingSetGameServerInstanceTagsRequest{}
{
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest(const SetGameServerInstanceTagsRequest& src) :
    PFMatchmakingSetGameServerInstanceTagsRequest{ src },
    m_lobbyId{ src.m_lobbyId },
    m_tags{ src.m_tags }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest(SetGameServerInstanceTagsRequest&& src) :
    PFMatchmakingSetGameServerInstanceTagsRequest{ src },
    m_lobbyId{ std::move(src.m_lobbyId) },
    m_tags{ std::move(src.m_tags) }
{
    lobbyId = m_lobbyId.empty() ? nullptr : m_lobbyId.data();
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

SetGameServerInstanceTagsRequest::SetGameServerInstanceTagsRequest(const PFMatchmakingSetGameServerInstanceTagsRequest& src)
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
    return JsonUtils::ToJson<PFMatchmakingSetGameServerInstanceTagsRequest>(*this);
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest() :
    PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest{}
{
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest(const CancelAllMatchmakingTicketsForPlayerRequest& src) :
    PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest(CancelAllMatchmakingTicketsForPlayerRequest&& src) :
    PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest(const PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelAllMatchmakingTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CancelAllMatchmakingTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest>(*this);
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest() :
    PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest{}
{
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest(const CancelAllServerBackfillTicketsForPlayerRequest& src) :
    PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest(CancelAllServerBackfillTicketsForPlayerRequest&& src) :
    PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest(const PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelAllServerBackfillTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CancelAllServerBackfillTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest>(*this);
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest() :
    PFMatchmakingCancelMatchmakingTicketRequest{}
{
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest(const CancelMatchmakingTicketRequest& src) :
    PFMatchmakingCancelMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest(CancelMatchmakingTicketRequest&& src) :
    PFMatchmakingCancelMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest(const PFMatchmakingCancelMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CancelMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCancelMatchmakingTicketRequest>(*this);
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest() :
    PFMatchmakingCancelServerBackfillTicketRequest{}
{
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest(const CancelServerBackfillTicketRequest& src) :
    PFMatchmakingCancelServerBackfillTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest(CancelServerBackfillTicketRequest&& src) :
    PFMatchmakingCancelServerBackfillTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest(const PFMatchmakingCancelServerBackfillTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelServerBackfillTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CancelServerBackfillTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCancelServerBackfillTicketRequest>(*this);
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes() :
    PFMatchmakingMatchmakingPlayerAttributes{}
{
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes(const MatchmakingPlayerAttributes& src) :
    PFMatchmakingMatchmakingPlayerAttributes{ src },
    m_dataObject{ src.m_dataObject },
    m_escapedDataObject{ src.m_escapedDataObject }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes(MatchmakingPlayerAttributes&& src) :
    PFMatchmakingMatchmakingPlayerAttributes{ src },
    m_dataObject{ std::move(src.m_dataObject) },
    m_escapedDataObject{ std::move(src.m_escapedDataObject) }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes(const PFMatchmakingMatchmakingPlayerAttributes& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakingPlayerAttributes::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
    JsonUtils::ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
}

JsonValue MatchmakingPlayerAttributes::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingMatchmakingPlayerAttributes>(*this);
}

MatchmakingPlayer::MatchmakingPlayer() :
    PFMatchmakingMatchmakingPlayer{}
{
}

MatchmakingPlayer::MatchmakingPlayer(const MatchmakingPlayer& src) :
    PFMatchmakingMatchmakingPlayer{ src },
    m_attributes{ src.m_attributes },
    m_entity{ src.m_entity }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PFEntityKey const*)&m_entity;
}

MatchmakingPlayer::MatchmakingPlayer(MatchmakingPlayer&& src) :
    PFMatchmakingMatchmakingPlayer{ src },
    m_attributes{ std::move(src.m_attributes) },
    m_entity{ std::move(src.m_entity) }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PFEntityKey const*)&m_entity;
}

MatchmakingPlayer::MatchmakingPlayer(const PFMatchmakingMatchmakingPlayer& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakingPlayer::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Attributes", m_attributes, attributes);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue MatchmakingPlayer::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingMatchmakingPlayer>(*this);
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest() :
    PFMatchmakingCreateMatchmakingTicketRequest{}
{
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest(const CreateMatchmakingTicketRequest& src) :
    PFMatchmakingCreateMatchmakingTicketRequest{ src },
    m_creator{ src.m_creator },
    m_customTags{ src.m_customTags },
    m_membersToMatchWith{ src.m_membersToMatchWith },
    m_queueName{ src.m_queueName }
{
    creator = (PFMatchmakingMatchmakingPlayer const*)&m_creator;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest(CreateMatchmakingTicketRequest&& src) :
    PFMatchmakingCreateMatchmakingTicketRequest{ src },
    m_creator{ std::move(src.m_creator) },
    m_customTags{ std::move(src.m_customTags) },
    m_membersToMatchWith{ std::move(src.m_membersToMatchWith) },
    m_queueName{ std::move(src.m_queueName) }
{
    creator = (PFMatchmakingMatchmakingPlayer const*)&m_creator;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest(const PFMatchmakingCreateMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Creator", m_creator, creator);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "MembersToMatchWith", m_membersToMatchWith, membersToMatchWith, membersToMatchWithCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CreateMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCreateMatchmakingTicketRequest>(*this);
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult() :
    PFMatchmakingCreateMatchmakingTicketResult{}
{
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult(const CreateMatchmakingTicketResult& src) :
    PFMatchmakingCreateMatchmakingTicketResult{ src },
    m_ticketId{ src.m_ticketId }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult(CreateMatchmakingTicketResult&& src) :
    PFMatchmakingCreateMatchmakingTicketResult{ src },
    m_ticketId{ std::move(src.m_ticketId) }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult(const PFMatchmakingCreateMatchmakingTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateMatchmakingTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CreateMatchmakingTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCreateMatchmakingTicketResult>(*this);
}

size_t CreateMatchmakingTicketResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingCreateMatchmakingTicketResult) };
    serializedSize += (m_ticketId.size() + 1);
    return serializedSize;
}

void CreateMatchmakingTicketResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingCreateMatchmakingTicketResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingCreateMatchmakingTicketResult);
    memcpy(stringBuffer, m_ticketId.data(), m_ticketId.size() + 1);
    serializedStruct->ticketId = stringBuffer;
    stringBuffer += m_ticketId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment() :
    PFMatchmakingMatchmakingPlayerWithTeamAssignment{}
{
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment(const MatchmakingPlayerWithTeamAssignment& src) :
    PFMatchmakingMatchmakingPlayerWithTeamAssignment{ src },
    m_attributes{ src.m_attributes },
    m_entity{ src.m_entity },
    m_teamId{ src.m_teamId }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PFEntityKey const*)&m_entity;
    teamId = m_teamId.empty() ? nullptr : m_teamId.data();
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment(MatchmakingPlayerWithTeamAssignment&& src) :
    PFMatchmakingMatchmakingPlayerWithTeamAssignment{ src },
    m_attributes{ std::move(src.m_attributes) },
    m_entity{ std::move(src.m_entity) },
    m_teamId{ std::move(src.m_teamId) }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PFEntityKey const*)&m_entity;
    teamId = m_teamId.empty() ? nullptr : m_teamId.data();
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment(const PFMatchmakingMatchmakingPlayerWithTeamAssignment& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakingPlayerWithTeamAssignment::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Attributes", m_attributes, attributes);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "TeamId", m_teamId, teamId);
}

JsonValue MatchmakingPlayerWithTeamAssignment::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingMatchmakingPlayerWithTeamAssignment>(*this);
}

ServerDetails::ServerDetails() :
    PFMatchmakingServerDetails{}
{
}

ServerDetails::ServerDetails(const ServerDetails& src) :
    PFMatchmakingServerDetails{ src },
    m_fqdn{ src.m_fqdn },
    m_iPV4Address{ src.m_iPV4Address },
    m_ports{ src.m_ports },
    m_region{ src.m_region }
{
    fqdn = m_fqdn.empty() ? nullptr : m_fqdn.data();
    iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
    ports = m_ports.Empty() ? nullptr : m_ports.Data();
    region = m_region.empty() ? nullptr : m_region.data();
}

ServerDetails::ServerDetails(ServerDetails&& src) :
    PFMatchmakingServerDetails{ src },
    m_fqdn{ std::move(src.m_fqdn) },
    m_iPV4Address{ std::move(src.m_iPV4Address) },
    m_ports{ std::move(src.m_ports) },
    m_region{ std::move(src.m_region) }
{
    fqdn = m_fqdn.empty() ? nullptr : m_fqdn.data();
    iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
    ports = m_ports.Empty() ? nullptr : m_ports.Data();
    region = m_region.empty() ? nullptr : m_region.data();
}

ServerDetails::ServerDetails(const PFMatchmakingServerDetails& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerDetails::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fqdn", m_fqdn, fqdn);
    JsonUtils::ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
}

JsonValue ServerDetails::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingServerDetails>(*this);
}

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest() :
    PFMatchmakingCreateServerBackfillTicketRequest{}
{
}

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest(const CreateServerBackfillTicketRequest& src) :
    PFMatchmakingCreateServerBackfillTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_members{ src.m_members },
    m_queueName{ src.m_queueName },
    m_serverDetails{ src.m_serverDetails }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
}

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest(CreateServerBackfillTicketRequest&& src) :
    PFMatchmakingCreateServerBackfillTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_members{ std::move(src.m_members) },
    m_queueName{ std::move(src.m_queueName) },
    m_serverDetails{ std::move(src.m_serverDetails) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
}

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest(const PFMatchmakingCreateServerBackfillTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateServerBackfillTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
}

JsonValue CreateServerBackfillTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCreateServerBackfillTicketRequest>(*this);
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult() :
    PFMatchmakingCreateServerBackfillTicketResult{}
{
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult(const CreateServerBackfillTicketResult& src) :
    PFMatchmakingCreateServerBackfillTicketResult{ src },
    m_ticketId{ src.m_ticketId }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult(CreateServerBackfillTicketResult&& src) :
    PFMatchmakingCreateServerBackfillTicketResult{ src },
    m_ticketId{ std::move(src.m_ticketId) }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult(const PFMatchmakingCreateServerBackfillTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateServerBackfillTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CreateServerBackfillTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCreateServerBackfillTicketResult>(*this);
}

size_t CreateServerBackfillTicketResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingCreateServerBackfillTicketResult) };
    serializedSize += (m_ticketId.size() + 1);
    return serializedSize;
}

void CreateServerBackfillTicketResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingCreateServerBackfillTicketResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingCreateServerBackfillTicketResult);
    memcpy(stringBuffer, m_ticketId.data(), m_ticketId.size() + 1);
    serializedStruct->ticketId = stringBuffer;
    stringBuffer += m_ticketId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest() :
    PFMatchmakingCreateServerMatchmakingTicketRequest{}
{
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest(const CreateServerMatchmakingTicketRequest& src) :
    PFMatchmakingCreateServerMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_members{ src.m_members },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest(CreateServerMatchmakingTicketRequest&& src) :
    PFMatchmakingCreateServerMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_members{ std::move(src.m_members) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest(const PFMatchmakingCreateServerMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateServerMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CreateServerMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingCreateServerMatchmakingTicketRequest>(*this);
}

GetMatchRequest::GetMatchRequest() :
    PFMatchmakingGetMatchRequest{}
{
}

GetMatchRequest::GetMatchRequest(const GetMatchRequest& src) :
    PFMatchmakingGetMatchRequest{ src },
    m_customTags{ src.m_customTags },
    m_matchId{ src.m_matchId },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetMatchRequest::GetMatchRequest(GetMatchRequest&& src) :
    PFMatchmakingGetMatchRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_matchId{ std::move(src.m_matchId) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetMatchRequest::GetMatchRequest(const PFMatchmakingGetMatchRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EscapeObject", escapeObject);
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "ReturnMemberAttributes", returnMemberAttributes);
}

JsonValue GetMatchRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchRequest>(*this);
}

GetMatchResult::GetMatchResult() :
    PFMatchmakingGetMatchResult{}
{
}

GetMatchResult::GetMatchResult(const GetMatchResult& src) :
    PFMatchmakingGetMatchResult{ src },
    m_matchId{ src.m_matchId },
    m_members{ src.m_members },
    m_regionPreferences{ src.m_regionPreferences },
    m_serverDetails{ src.m_serverDetails }
{
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    regionPreferences = m_regionPreferences.Empty() ? nullptr : m_regionPreferences.Data();
    serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
}

GetMatchResult::GetMatchResult(GetMatchResult&& src) :
    PFMatchmakingGetMatchResult{ src },
    m_matchId{ std::move(src.m_matchId) },
    m_members{ std::move(src.m_members) },
    m_regionPreferences{ std::move(src.m_regionPreferences) },
    m_serverDetails{ std::move(src.m_serverDetails) }
{
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    regionPreferences = m_regionPreferences.Empty() ? nullptr : m_regionPreferences.Data();
    serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
}

GetMatchResult::GetMatchResult(const PFMatchmakingGetMatchResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "RegionPreferences", m_regionPreferences, regionPreferences, regionPreferencesCount);
    JsonUtils::ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
}

JsonValue GetMatchResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchResult>(*this);
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest() :
    PFMatchmakingGetMatchmakingTicketRequest{}
{
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest(const GetMatchmakingTicketRequest& src) :
    PFMatchmakingGetMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest(GetMatchmakingTicketRequest&& src) :
    PFMatchmakingGetMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest(const PFMatchmakingGetMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EscapeObject", escapeObject);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchmakingTicketRequest>(*this);
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult() :
    PFMatchmakingGetMatchmakingTicketResult{}
{
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult(const GetMatchmakingTicketResult& src) :
    PFMatchmakingGetMatchmakingTicketResult{ src },
    m_cancellationReasonString{ src.m_cancellationReasonString },
    m_creator{ src.m_creator },
    m_matchId{ src.m_matchId },
    m_members{ src.m_members },
    m_membersToMatchWith{ src.m_membersToMatchWith },
    m_queueName{ src.m_queueName },
    m_status{ src.m_status },
    m_ticketId{ src.m_ticketId }
{
    cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
    creator = (PFEntityKey const*)&m_creator;
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult(GetMatchmakingTicketResult&& src) :
    PFMatchmakingGetMatchmakingTicketResult{ src },
    m_cancellationReasonString{ std::move(src.m_cancellationReasonString) },
    m_creator{ std::move(src.m_creator) },
    m_matchId{ std::move(src.m_matchId) },
    m_members{ std::move(src.m_members) },
    m_membersToMatchWith{ std::move(src.m_membersToMatchWith) },
    m_queueName{ std::move(src.m_queueName) },
    m_status{ std::move(src.m_status) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
    creator = (PFEntityKey const*)&m_creator;
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult(const PFMatchmakingGetMatchmakingTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakingTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CancellationReasonString", m_cancellationReasonString, cancellationReasonString);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "Creator", m_creator, creator);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "MembersToMatchWith", m_membersToMatchWith, membersToMatchWith, membersToMatchWithCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetMatchmakingTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetMatchmakingTicketResult>(*this);
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest() :
    PFMatchmakingGetQueueStatisticsRequest{}
{
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest(const GetQueueStatisticsRequest& src) :
    PFMatchmakingGetQueueStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest(GetQueueStatisticsRequest&& src) :
    PFMatchmakingGetQueueStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest(const PFMatchmakingGetQueueStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetQueueStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue GetQueueStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetQueueStatisticsRequest>(*this);
}

Statistics::Statistics() :
    PFMatchmakingStatistics{}
{
}


Statistics::Statistics(const PFMatchmakingStatistics& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Statistics::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Average", average);
    JsonUtils::ObjectGetMember(input, "Percentile50", percentile50);
    JsonUtils::ObjectGetMember(input, "Percentile90", percentile90);
    JsonUtils::ObjectGetMember(input, "Percentile99", percentile99);
}

JsonValue Statistics::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingStatistics>(*this);
}

size_t Statistics::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMatchmakingStatistics) };
    return serializedSize;
}

void Statistics::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMatchmakingStatistics{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMatchmakingStatistics);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetQueueStatisticsResult::GetQueueStatisticsResult() :
    PFMatchmakingGetQueueStatisticsResult{}
{
}

GetQueueStatisticsResult::GetQueueStatisticsResult(const GetQueueStatisticsResult& src) :
    PFMatchmakingGetQueueStatisticsResult{ src },
    m_numberOfPlayersMatching{ src.m_numberOfPlayersMatching },
    m_timeToMatchStatisticsInSeconds{ src.m_timeToMatchStatisticsInSeconds }
{
    numberOfPlayersMatching = m_numberOfPlayersMatching ? m_numberOfPlayersMatching.operator->() : nullptr;
    timeToMatchStatisticsInSeconds = m_timeToMatchStatisticsInSeconds ? m_timeToMatchStatisticsInSeconds.operator->() : nullptr;
}

GetQueueStatisticsResult::GetQueueStatisticsResult(GetQueueStatisticsResult&& src) :
    PFMatchmakingGetQueueStatisticsResult{ src },
    m_numberOfPlayersMatching{ std::move(src.m_numberOfPlayersMatching) },
    m_timeToMatchStatisticsInSeconds{ std::move(src.m_timeToMatchStatisticsInSeconds) }
{
    numberOfPlayersMatching = m_numberOfPlayersMatching ? m_numberOfPlayersMatching.operator->() : nullptr;
    timeToMatchStatisticsInSeconds = m_timeToMatchStatisticsInSeconds ? m_timeToMatchStatisticsInSeconds.operator->() : nullptr;
}

GetQueueStatisticsResult::GetQueueStatisticsResult(const PFMatchmakingGetQueueStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetQueueStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NumberOfPlayersMatching", m_numberOfPlayersMatching, numberOfPlayersMatching);
    JsonUtils::ObjectGetMember(input, "TimeToMatchStatisticsInSeconds", m_timeToMatchStatisticsInSeconds, timeToMatchStatisticsInSeconds);
}

JsonValue GetQueueStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetQueueStatisticsResult>(*this);
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest() :
    PFMatchmakingGetServerBackfillTicketRequest{}
{
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest(const GetServerBackfillTicketRequest& src) :
    PFMatchmakingGetServerBackfillTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest(GetServerBackfillTicketRequest&& src) :
    PFMatchmakingGetServerBackfillTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest(const PFMatchmakingGetServerBackfillTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBackfillTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EscapeObject", escapeObject);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetServerBackfillTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetServerBackfillTicketRequest>(*this);
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult() :
    PFMatchmakingGetServerBackfillTicketResult{}
{
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult(const GetServerBackfillTicketResult& src) :
    PFMatchmakingGetServerBackfillTicketResult{ src },
    m_cancellationReasonString{ src.m_cancellationReasonString },
    m_matchId{ src.m_matchId },
    m_members{ src.m_members },
    m_queueName{ src.m_queueName },
    m_serverDetails{ src.m_serverDetails },
    m_status{ src.m_status },
    m_ticketId{ src.m_ticketId }
{
    cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    serverDetails = (PFMatchmakingServerDetails const*)&m_serverDetails;
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult(GetServerBackfillTicketResult&& src) :
    PFMatchmakingGetServerBackfillTicketResult{ src },
    m_cancellationReasonString{ std::move(src.m_cancellationReasonString) },
    m_matchId{ std::move(src.m_matchId) },
    m_members{ std::move(src.m_members) },
    m_queueName{ std::move(src.m_queueName) },
    m_serverDetails{ std::move(src.m_serverDetails) },
    m_status{ std::move(src.m_status) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    serverDetails = (PFMatchmakingServerDetails const*)&m_serverDetails;
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult(const PFMatchmakingGetServerBackfillTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBackfillTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CancellationReasonString", m_cancellationReasonString, cancellationReasonString);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetServerBackfillTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingGetServerBackfillTicketResult>(*this);
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest() :
    PFMatchmakingJoinMatchmakingTicketRequest{}
{
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest(const JoinMatchmakingTicketRequest& src) :
    PFMatchmakingJoinMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_member{ src.m_member },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    member = (PFMatchmakingMatchmakingPlayer const*)&m_member;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest(JoinMatchmakingTicketRequest&& src) :
    PFMatchmakingJoinMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_member{ std::move(src.m_member) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    member = (PFMatchmakingMatchmakingPlayer const*)&m_member;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest(const PFMatchmakingJoinMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void JoinMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Member", m_member, member);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue JoinMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingJoinMatchmakingTicketRequest>(*this);
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest() :
    PFMatchmakingListMatchmakingTicketsForPlayerRequest{}
{
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest(const ListMatchmakingTicketsForPlayerRequest& src) :
    PFMatchmakingListMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest(ListMatchmakingTicketsForPlayerRequest&& src) :
    PFMatchmakingListMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest(const PFMatchmakingListMatchmakingTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMatchmakingTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue ListMatchmakingTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingListMatchmakingTicketsForPlayerRequest>(*this);
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult() :
    PFMatchmakingListMatchmakingTicketsForPlayerResult{}
{
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult(const ListMatchmakingTicketsForPlayerResult& src) :
    PFMatchmakingListMatchmakingTicketsForPlayerResult{ src },
    m_ticketIds{ src.m_ticketIds }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult(ListMatchmakingTicketsForPlayerResult&& src) :
    PFMatchmakingListMatchmakingTicketsForPlayerResult{ src },
    m_ticketIds{ std::move(src.m_ticketIds) }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult(const PFMatchmakingListMatchmakingTicketsForPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMatchmakingTicketsForPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketIds", m_ticketIds, ticketIds, ticketIdsCount);
}

JsonValue ListMatchmakingTicketsForPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingListMatchmakingTicketsForPlayerResult>(*this);
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest() :
    PFMatchmakingListServerBackfillTicketsForPlayerRequest{}
{
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest(const ListServerBackfillTicketsForPlayerRequest& src) :
    PFMatchmakingListServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest(ListServerBackfillTicketsForPlayerRequest&& src) :
    PFMatchmakingListServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PFEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest(const PFMatchmakingListServerBackfillTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListServerBackfillTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue ListServerBackfillTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingListServerBackfillTicketsForPlayerRequest>(*this);
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult() :
    PFMatchmakingListServerBackfillTicketsForPlayerResult{}
{
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult(const ListServerBackfillTicketsForPlayerResult& src) :
    PFMatchmakingListServerBackfillTicketsForPlayerResult{ src },
    m_ticketIds{ src.m_ticketIds }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult(ListServerBackfillTicketsForPlayerResult&& src) :
    PFMatchmakingListServerBackfillTicketsForPlayerResult{ src },
    m_ticketIds{ std::move(src.m_ticketIds) }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult(const PFMatchmakingListServerBackfillTicketsForPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListServerBackfillTicketsForPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketIds", m_ticketIds, ticketIds, ticketIdsCount);
}

JsonValue ListServerBackfillTicketsForPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PFMatchmakingListServerBackfillTicketsForPlayerResult>(*this);
}

} // namespace MatchmakingModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameInfoResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "EndTime", input.endTime, true);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Mode", input.mode);
    JsonUtils::ObjectAddMember(output, "Players", input.players, input.playersCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "ServerIPV4Address", input.serverIPV4Address);
    JsonUtils::ObjectAddMember(output, "ServerIPV6Address", input.serverIPV6Address);
    JsonUtils::ObjectAddMember(output, "ServerPort", input.serverPort);
    JsonUtils::ObjectAddMember(output, "ServerPublicDNSName", input.serverPublicDNSName);
    JsonUtils::ObjectAddMember(output, "StartTime", input.startTime, true);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameModesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGameModeInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Gamemode", input.gamemode);
    JsonUtils::ObjectAddMember(output, "MaxPlayerCount", input.maxPlayerCount);
    JsonUtils::ObjectAddMember(output, "MinPlayerCount", input.minPlayerCount);
    JsonUtils::ObjectAddMember(output, "StartOpen", input.startOpen);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameModesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameModes", input.gameModes, input.gameModesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingModifyMatchmakerGameModesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "GameModes", input.gameModes, input.gameModesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingContainer_Dictionary_String_String& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCollectionFilter& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Excludes", input.excludes, input.excludesCount);
    JsonUtils::ObjectAddMember(output, "Includes", input.includes, input.includesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCurrentGamesRequest& input)
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
inline JsonValue ToJson<>(const PFMatchmakingGameInfo& input)
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
inline JsonValue ToJson<>(const PFMatchmakingCurrentGamesResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameCount", input.gameCount);
    JsonUtils::ObjectAddMember(output, "Games", input.games, input.gamesCount);
    JsonUtils::ObjectAddMember(output, "PlayerCount", input.playerCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGameServerRegionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildVersion", input.buildVersion);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingRegionInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Available", input.available);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "PingUrl", input.pingUrl);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGameServerRegionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Regions", input.regions, input.regionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingMatchmakeRequest& input)
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
inline JsonValue ToJson<>(const PFMatchmakingMatchmakeResult& input)
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
inline JsonValue ToJson<>(const PFMatchmakingClientStartGameRequest& input)
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
inline JsonValue ToJson<>(const PFMatchmakingStartGameResult& input)
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
inline JsonValue ToJson<>(const PFMatchmakingAuthUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthorizationTicket", input.authorizationTicket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingAuthUserResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Authorized", input.authorized);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingPlayerJoinedRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingPlayerLeftRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingMatchmakerStartGameRequest& input)
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
inline JsonValue ToJson<>(const PFMatchmakingStartGameResponse& input)
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
inline JsonValue ToJson<>(const PFMatchmakingUserInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MinCatalogVersion", input.minCatalogVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingUserInfoResponse& input)
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

template<>
inline JsonValue ToJson<>(const PFMatchmakingDeregisterGameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingNotifyMatchmakerPlayerLeftRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingNotifyMatchmakerPlayerLeftResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerState", input.playerState);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingRedeemMatchmakerTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Ticket", input.ticket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingRedeemMatchmakerTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Error", input.error);
    JsonUtils::ObjectAddMember(output, "TicketIsValid", input.ticketIsValid);
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingRefreshGameServerInstanceHeartbeatRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingRegisterGameRequest& input)
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
inline JsonValue ToJson<>(const PFMatchmakingRegisterGameResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingSetGameServerInstanceDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GameServerData", input.gameServerData);
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingSetGameServerInstanceStateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "State", input.state);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingSetGameServerInstanceTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LobbyId", input.lobbyId);
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCancelMatchmakingTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCancelServerBackfillTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingMatchmakingPlayerAttributes& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
    JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingMatchmakingPlayer& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Attributes", input.attributes);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCreateMatchmakingTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Creator", input.creator);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
    JsonUtils::ObjectAddMember(output, "MembersToMatchWith", input.membersToMatchWith, input.membersToMatchWithCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCreateMatchmakingTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingMatchmakingPlayerWithTeamAssignment& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Attributes", input.attributes);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "TeamId", input.teamId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingServerDetails& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Fqdn", input.fqdn);
    JsonUtils::ObjectAddMember(output, "IPV4Address", input.iPV4Address);
    JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCreateServerBackfillTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "ServerDetails", input.serverDetails);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCreateServerBackfillTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingCreateServerMatchmakingTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
    JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "ReturnMemberAttributes", input.returnMemberAttributes);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "RegionPreferences", input.regionPreferences, input.regionPreferencesCount);
    JsonUtils::ObjectAddMember(output, "ServerDetails", input.serverDetails);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakingTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakingTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CancellationReasonString", input.cancellationReasonString);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "Creator", input.creator);
    JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
    JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "MembersToMatchWith", input.membersToMatchWith, input.membersToMatchWithCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetQueueStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingStatistics& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Average", input.average);
    JsonUtils::ObjectAddMember(output, "Percentile50", input.percentile50);
    JsonUtils::ObjectAddMember(output, "Percentile90", input.percentile90);
    JsonUtils::ObjectAddMember(output, "Percentile99", input.percentile99);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetQueueStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NumberOfPlayersMatching", input.numberOfPlayersMatching);
    JsonUtils::ObjectAddMember(output, "TimeToMatchStatisticsInSeconds", input.timeToMatchStatisticsInSeconds);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetServerBackfillTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingGetServerBackfillTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CancellationReasonString", input.cancellationReasonString);
    JsonUtils::ObjectAddMember(output, "Created", input.created, true);
    JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
    JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
    JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "ServerDetails", input.serverDetails);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingJoinMatchmakingTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Member", input.member);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingListMatchmakingTicketsForPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingListMatchmakingTicketsForPlayerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TicketIds", input.ticketIds, input.ticketIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingListServerBackfillTicketsForPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMatchmakingListServerBackfillTicketsForPlayerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TicketIds", input.ticketIds, input.ticketIdsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
