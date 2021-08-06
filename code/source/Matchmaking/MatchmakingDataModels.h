#pragma once

#include <playfab/PFMatchmakingDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace MatchmakingModels
{

// Matchmaking Classes
struct GetMatchmakerGameInfoRequest : public PFMatchmakingGetMatchmakerGameInfoRequest, public SerializableModel
{
    GetMatchmakerGameInfoRequest();
    GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src);
    GetMatchmakerGameInfoRequest(GetMatchmakerGameInfoRequest&& src);
    GetMatchmakerGameInfoRequest(const PFMatchmakingGetMatchmakerGameInfoRequest& src);
    GetMatchmakerGameInfoRequest& operator=(const GetMatchmakerGameInfoRequest&) = delete;
    ~GetMatchmakerGameInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct GetMatchmakerGameInfoResult : public PFMatchmakingGetMatchmakerGameInfoResult, public BaseModel, public ApiResult
{
    GetMatchmakerGameInfoResult();
    GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src);
    GetMatchmakerGameInfoResult(GetMatchmakerGameInfoResult&& src);
    GetMatchmakerGameInfoResult(const PFMatchmakingGetMatchmakerGameInfoResult& src);
    GetMatchmakerGameInfoResult& operator=(const GetMatchmakerGameInfoResult&) = delete;
    ~GetMatchmakerGameInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    StdExtra::optional<time_t> m_endTime;
    String m_lobbyId;
    String m_mode;
    PointerArrayModel<char, String> m_players;
    StdExtra::optional<PFRegion> m_region;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    String m_serverPublicDNSName;
    String m_titleId;
};

struct GetMatchmakerGameModesRequest : public PFMatchmakingGetMatchmakerGameModesRequest, public SerializableModel
{
    GetMatchmakerGameModesRequest();
    GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src);
    GetMatchmakerGameModesRequest(GetMatchmakerGameModesRequest&& src);
    GetMatchmakerGameModesRequest(const PFMatchmakingGetMatchmakerGameModesRequest& src);
    GetMatchmakerGameModesRequest& operator=(const GetMatchmakerGameModesRequest&) = delete;
    ~GetMatchmakerGameModesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildVersion;
};

struct GameModeInfo : public PFMatchmakingGameModeInfo, public BaseModel
{
    GameModeInfo();
    GameModeInfo(const GameModeInfo& src);
    GameModeInfo(GameModeInfo&& src);
    GameModeInfo(const PFMatchmakingGameModeInfo& src);
    GameModeInfo& operator=(const GameModeInfo&) = delete;
    ~GameModeInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_gamemode;
    StdExtra::optional<bool> m_startOpen;
};

struct GetMatchmakerGameModesResult : public PFMatchmakingGetMatchmakerGameModesResult, public BaseModel, public ApiResult
{
    GetMatchmakerGameModesResult();
    GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src);
    GetMatchmakerGameModesResult(GetMatchmakerGameModesResult&& src);
    GetMatchmakerGameModesResult(const PFMatchmakingGetMatchmakerGameModesResult& src);
    GetMatchmakerGameModesResult& operator=(const GetMatchmakerGameModesResult&) = delete;
    ~GetMatchmakerGameModesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMatchmakingGameModeInfo, GameModeInfo> m_gameModes;
};

struct ModifyMatchmakerGameModesRequest : public PFMatchmakingModifyMatchmakerGameModesRequest, public BaseModel
{
    ModifyMatchmakerGameModesRequest();
    ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src);
    ModifyMatchmakerGameModesRequest(ModifyMatchmakerGameModesRequest&& src);
    ModifyMatchmakerGameModesRequest(const PFMatchmakingModifyMatchmakerGameModesRequest& src);
    ModifyMatchmakerGameModesRequest& operator=(const ModifyMatchmakerGameModesRequest&) = delete;
    ~ModifyMatchmakerGameModesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    PointerArrayModel<PFMatchmakingGameModeInfo, GameModeInfo> m_gameModes;
};

struct Container_Dictionary_String_String : public PFMatchmakingContainer_Dictionary_String_String, public BaseModel
{
    Container_Dictionary_String_String();
    Container_Dictionary_String_String(const Container_Dictionary_String_String& src);
    Container_Dictionary_String_String(Container_Dictionary_String_String&& src);
    Container_Dictionary_String_String(const PFMatchmakingContainer_Dictionary_String_String& src);
    Container_Dictionary_String_String& operator=(const Container_Dictionary_String_String&) = delete;
    ~Container_Dictionary_String_String() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
};

struct CollectionFilter : public PFMatchmakingCollectionFilter, public BaseModel
{
    CollectionFilter();
    CollectionFilter(const CollectionFilter& src);
    CollectionFilter(CollectionFilter&& src);
    CollectionFilter(const PFMatchmakingCollectionFilter& src);
    CollectionFilter& operator=(const CollectionFilter&) = delete;
    ~CollectionFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMatchmakingContainer_Dictionary_String_String, Container_Dictionary_String_String> m_excludes;
    PointerArrayModel<PFMatchmakingContainer_Dictionary_String_String, Container_Dictionary_String_String> m_includes;
};

struct CurrentGamesRequest : public PFMatchmakingCurrentGamesRequest, public BaseModel
{
    CurrentGamesRequest();
    CurrentGamesRequest(const CurrentGamesRequest& src);
    CurrentGamesRequest(CurrentGamesRequest&& src);
    CurrentGamesRequest(const PFMatchmakingCurrentGamesRequest& src);
    CurrentGamesRequest& operator=(const CurrentGamesRequest&) = delete;
    ~CurrentGamesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_gameMode;
    StdExtra::optional<PFRegion> m_region;
    String m_statisticName;
    StdExtra::optional<CollectionFilter> m_tagFilter;
};

struct GameInfo : public PFMatchmakingGameInfo, public BaseModel
{
    GameInfo();
    GameInfo(const GameInfo& src);
    GameInfo(GameInfo&& src);
    GameInfo(const PFMatchmakingGameInfo& src);
    GameInfo& operator=(const GameInfo&) = delete;
    ~GameInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_gameMode;
    String m_gameServerData;
    StdExtra::optional<PFMatchmakingGameInstanceState> m_gameServerStateEnum;
    StdExtra::optional<time_t> m_lastHeartbeat;
    String m_lobbyID;
    StdExtra::optional<int32_t> m_maxPlayers;
    PointerArrayModel<char, String> m_playerUserIds;
    StdExtra::optional<PFRegion> m_region;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    StdExtra::optional<int32_t> m_serverPort;
    String m_serverPublicDNSName;
    String m_statisticName;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_tags;
};

struct CurrentGamesResult : public PFMatchmakingCurrentGamesResult, public BaseModel, public ApiResult
{
    CurrentGamesResult();
    CurrentGamesResult(const CurrentGamesResult& src);
    CurrentGamesResult(CurrentGamesResult&& src);
    CurrentGamesResult(const PFMatchmakingCurrentGamesResult& src);
    CurrentGamesResult& operator=(const CurrentGamesResult&) = delete;
    ~CurrentGamesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMatchmakingGameInfo, GameInfo> m_games;
};

struct GameServerRegionsRequest : public PFMatchmakingGameServerRegionsRequest, public SerializableModel
{
    GameServerRegionsRequest();
    GameServerRegionsRequest(const GameServerRegionsRequest& src);
    GameServerRegionsRequest(GameServerRegionsRequest&& src);
    GameServerRegionsRequest(const PFMatchmakingGameServerRegionsRequest& src);
    GameServerRegionsRequest& operator=(const GameServerRegionsRequest&) = delete;
    ~GameServerRegionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildVersion;
    String m_titleId;
};

struct RegionInfo : public PFMatchmakingRegionInfo, public BaseModel
{
    RegionInfo();
    RegionInfo(const RegionInfo& src);
    RegionInfo(RegionInfo&& src);
    RegionInfo(const PFMatchmakingRegionInfo& src);
    RegionInfo& operator=(const RegionInfo&) = delete;
    ~RegionInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_name;
    String m_pingUrl;
    StdExtra::optional<PFRegion> m_region;
};

struct GameServerRegionsResult : public PFMatchmakingGameServerRegionsResult, public BaseModel, public ApiResult
{
    GameServerRegionsResult();
    GameServerRegionsResult(const GameServerRegionsResult& src);
    GameServerRegionsResult(GameServerRegionsResult&& src);
    GameServerRegionsResult(const PFMatchmakingGameServerRegionsResult& src);
    GameServerRegionsResult& operator=(const GameServerRegionsResult&) = delete;
    ~GameServerRegionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMatchmakingRegionInfo, RegionInfo> m_regions;
};

struct MatchmakeRequest : public PFMatchmakingMatchmakeRequest, public BaseModel
{
    MatchmakeRequest();
    MatchmakeRequest(const MatchmakeRequest& src);
    MatchmakeRequest(MatchmakeRequest&& src);
    MatchmakeRequest(const PFMatchmakingMatchmakeRequest& src);
    MatchmakeRequest& operator=(const MatchmakeRequest&) = delete;
    ~MatchmakeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_characterId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_gameMode;
    String m_lobbyId;
    StdExtra::optional<PFRegion> m_region;
    StdExtra::optional<bool> m_startNewIfNoneFound;
    String m_statisticName;
    StdExtra::optional<CollectionFilter> m_tagFilter;
};

struct MatchmakeResult : public PFMatchmakingMatchmakeResult, public BaseModel, public ApiResult
{
    MatchmakeResult();
    MatchmakeResult(const MatchmakeResult& src);
    MatchmakeResult(MatchmakeResult&& src);
    MatchmakeResult(const PFMatchmakingMatchmakeResult& src);
    MatchmakeResult& operator=(const MatchmakeResult&) = delete;
    ~MatchmakeResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_expires;
    String m_lobbyID;
    StdExtra::optional<int32_t> m_pollWaitTimeMS;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    StdExtra::optional<int32_t> m_serverPort;
    String m_serverPublicDNSName;
    StdExtra::optional<PFMatchmakingMatchmakeStatus> m_status;
    String m_ticket;
};

struct ClientStartGameRequest : public PFMatchmakingClientStartGameRequest, public BaseModel
{
    ClientStartGameRequest();
    ClientStartGameRequest(const ClientStartGameRequest& src);
    ClientStartGameRequest(ClientStartGameRequest&& src);
    ClientStartGameRequest(const PFMatchmakingClientStartGameRequest& src);
    ClientStartGameRequest& operator=(const ClientStartGameRequest&) = delete;
    ~ClientStartGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    String m_characterId;
    String m_customCommandLineData;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_gameMode;
    String m_statisticName;
};

struct StartGameResult : public PFMatchmakingStartGameResult, public BaseModel, public ApiResult
{
    StartGameResult();
    StartGameResult(const StartGameResult& src);
    StartGameResult(StartGameResult&& src);
    StartGameResult(const PFMatchmakingStartGameResult& src);
    StartGameResult& operator=(const StartGameResult&) = delete;
    ~StartGameResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_expires;
    String m_lobbyID;
    String m_password;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    StdExtra::optional<int32_t> m_serverPort;
    String m_serverPublicDNSName;
    String m_ticket;
};

struct AuthUserRequest : public PFMatchmakingAuthUserRequest, public SerializableModel
{
    AuthUserRequest();
    AuthUserRequest(const AuthUserRequest& src);
    AuthUserRequest(AuthUserRequest&& src);
    AuthUserRequest(const PFMatchmakingAuthUserRequest& src);
    AuthUserRequest& operator=(const AuthUserRequest&) = delete;
    ~AuthUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_authorizationTicket;
};

struct AuthUserResponse : public PFMatchmakingAuthUserResponse, public SerializableModel, public ApiResult
{
    AuthUserResponse();
    AuthUserResponse(const AuthUserResponse& src);
    AuthUserResponse(AuthUserResponse&& src);
    AuthUserResponse(const PFMatchmakingAuthUserResponse& src);
    AuthUserResponse& operator=(const AuthUserResponse&) = delete;
    ~AuthUserResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct PlayerJoinedRequest : public PFMatchmakingPlayerJoinedRequest, public BaseModel
{
    PlayerJoinedRequest();
    PlayerJoinedRequest(const PlayerJoinedRequest& src);
    PlayerJoinedRequest(PlayerJoinedRequest&& src);
    PlayerJoinedRequest(const PFMatchmakingPlayerJoinedRequest& src);
    PlayerJoinedRequest& operator=(const PlayerJoinedRequest&) = delete;
    ~PlayerJoinedRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_playFabId;
};

struct PlayerLeftRequest : public PFMatchmakingPlayerLeftRequest, public BaseModel
{
    PlayerLeftRequest();
    PlayerLeftRequest(const PlayerLeftRequest& src);
    PlayerLeftRequest(PlayerLeftRequest&& src);
    PlayerLeftRequest(const PFMatchmakingPlayerLeftRequest& src);
    PlayerLeftRequest& operator=(const PlayerLeftRequest&) = delete;
    ~PlayerLeftRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_playFabId;
};

struct MatchmakerStartGameRequest : public PFMatchmakingMatchmakerStartGameRequest, public BaseModel
{
    MatchmakerStartGameRequest();
    MatchmakerStartGameRequest(const MatchmakerStartGameRequest& src);
    MatchmakerStartGameRequest(MatchmakerStartGameRequest&& src);
    MatchmakerStartGameRequest(const PFMatchmakingMatchmakerStartGameRequest& src);
    MatchmakerStartGameRequest& operator=(const MatchmakerStartGameRequest&) = delete;
    ~MatchmakerStartGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_build;
    String m_customCommandLineData;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_externalMatchmakerEventEndpoint;
    String m_gameMode;
};

struct StartGameResponse : public PFMatchmakingStartGameResponse, public SerializableModel, public ApiResult
{
    StartGameResponse();
    StartGameResponse(const StartGameResponse& src);
    StartGameResponse(StartGameResponse&& src);
    StartGameResponse(const PFMatchmakingStartGameResponse& src);
    StartGameResponse& operator=(const StartGameResponse&) = delete;
    ~StartGameResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gameID;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    String m_serverPublicDNSName;
};

struct UserInfoRequest : public PFMatchmakingUserInfoRequest, public BaseModel
{
    UserInfoRequest();
    UserInfoRequest(const UserInfoRequest& src);
    UserInfoRequest(UserInfoRequest&& src);
    UserInfoRequest(const PFMatchmakingUserInfoRequest& src);
    UserInfoRequest& operator=(const UserInfoRequest&) = delete;
    ~UserInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UserInfoResponse : public PFMatchmakingUserInfoResponse, public BaseModel, public ApiResult
{
    UserInfoResponse();
    UserInfoResponse(const UserInfoResponse& src);
    UserInfoResponse(UserInfoResponse&& src);
    UserInfoResponse(const PFMatchmakingUserInfoResponse& src);
    UserInfoResponse& operator=(const UserInfoResponse&) = delete;
    ~UserInfoResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    String m_steamId;
    String m_titleDisplayName;
    String m_username;
    AssociativeArrayModel<PFInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PFVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct DeregisterGameRequest : public PFMatchmakingDeregisterGameRequest, public BaseModel
{
    DeregisterGameRequest();
    DeregisterGameRequest(const DeregisterGameRequest& src);
    DeregisterGameRequest(DeregisterGameRequest&& src);
    DeregisterGameRequest(const PFMatchmakingDeregisterGameRequest& src);
    DeregisterGameRequest& operator=(const DeregisterGameRequest&) = delete;
    ~DeregisterGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
};

struct NotifyMatchmakerPlayerLeftRequest : public PFMatchmakingNotifyMatchmakerPlayerLeftRequest, public BaseModel
{
    NotifyMatchmakerPlayerLeftRequest();
    NotifyMatchmakerPlayerLeftRequest(const NotifyMatchmakerPlayerLeftRequest& src);
    NotifyMatchmakerPlayerLeftRequest(NotifyMatchmakerPlayerLeftRequest&& src);
    NotifyMatchmakerPlayerLeftRequest(const PFMatchmakingNotifyMatchmakerPlayerLeftRequest& src);
    NotifyMatchmakerPlayerLeftRequest& operator=(const NotifyMatchmakerPlayerLeftRequest&) = delete;
    ~NotifyMatchmakerPlayerLeftRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_playFabId;
};

struct NotifyMatchmakerPlayerLeftResult : public PFMatchmakingNotifyMatchmakerPlayerLeftResult, public BaseModel, public ApiResult
{
    NotifyMatchmakerPlayerLeftResult();
    NotifyMatchmakerPlayerLeftResult(const NotifyMatchmakerPlayerLeftResult& src);
    NotifyMatchmakerPlayerLeftResult(NotifyMatchmakerPlayerLeftResult&& src);
    NotifyMatchmakerPlayerLeftResult(const PFMatchmakingNotifyMatchmakerPlayerLeftResult& src);
    NotifyMatchmakerPlayerLeftResult& operator=(const NotifyMatchmakerPlayerLeftResult&) = delete;
    ~NotifyMatchmakerPlayerLeftResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFMatchmakingPlayerConnectionState> m_playerState;
};

struct RedeemMatchmakerTicketRequest : public PFMatchmakingRedeemMatchmakerTicketRequest, public BaseModel
{
    RedeemMatchmakerTicketRequest();
    RedeemMatchmakerTicketRequest(const RedeemMatchmakerTicketRequest& src);
    RedeemMatchmakerTicketRequest(RedeemMatchmakerTicketRequest&& src);
    RedeemMatchmakerTicketRequest(const PFMatchmakingRedeemMatchmakerTicketRequest& src);
    RedeemMatchmakerTicketRequest& operator=(const RedeemMatchmakerTicketRequest&) = delete;
    ~RedeemMatchmakerTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_ticket;
};

struct RedeemMatchmakerTicketResult : public PFMatchmakingRedeemMatchmakerTicketResult, public BaseModel, public ApiResult
{
    RedeemMatchmakerTicketResult();
    RedeemMatchmakerTicketResult(const RedeemMatchmakerTicketResult& src);
    RedeemMatchmakerTicketResult(RedeemMatchmakerTicketResult&& src);
    RedeemMatchmakerTicketResult(const PFMatchmakingRedeemMatchmakerTicketResult& src);
    RedeemMatchmakerTicketResult& operator=(const RedeemMatchmakerTicketResult&) = delete;
    ~RedeemMatchmakerTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_error;
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct RefreshGameServerInstanceHeartbeatRequest : public PFMatchmakingRefreshGameServerInstanceHeartbeatRequest, public SerializableModel
{
    RefreshGameServerInstanceHeartbeatRequest();
    RefreshGameServerInstanceHeartbeatRequest(const RefreshGameServerInstanceHeartbeatRequest& src);
    RefreshGameServerInstanceHeartbeatRequest(RefreshGameServerInstanceHeartbeatRequest&& src);
    RefreshGameServerInstanceHeartbeatRequest(const PFMatchmakingRefreshGameServerInstanceHeartbeatRequest& src);
    RefreshGameServerInstanceHeartbeatRequest& operator=(const RefreshGameServerInstanceHeartbeatRequest&) = delete;
    ~RefreshGameServerInstanceHeartbeatRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct RegisterGameRequest : public PFMatchmakingRegisterGameRequest, public BaseModel
{
    RegisterGameRequest();
    RegisterGameRequest(const RegisterGameRequest& src);
    RegisterGameRequest(RegisterGameRequest&& src);
    RegisterGameRequest(const PFMatchmakingRegisterGameRequest& src);
    RegisterGameRequest& operator=(const RegisterGameRequest&) = delete;
    ~RegisterGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_build;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_gameMode;
    String m_lobbyId;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    String m_serverPort;
    String m_serverPublicDNSName;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_tags;
};

struct RegisterGameResponse : public PFMatchmakingRegisterGameResponse, public SerializableModel, public ApiResult
{
    RegisterGameResponse();
    RegisterGameResponse(const RegisterGameResponse& src);
    RegisterGameResponse(RegisterGameResponse&& src);
    RegisterGameResponse(const PFMatchmakingRegisterGameResponse& src);
    RegisterGameResponse& operator=(const RegisterGameResponse&) = delete;
    ~RegisterGameResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct SetGameServerInstanceDataRequest : public PFMatchmakingSetGameServerInstanceDataRequest, public SerializableModel
{
    SetGameServerInstanceDataRequest();
    SetGameServerInstanceDataRequest(const SetGameServerInstanceDataRequest& src);
    SetGameServerInstanceDataRequest(SetGameServerInstanceDataRequest&& src);
    SetGameServerInstanceDataRequest(const PFMatchmakingSetGameServerInstanceDataRequest& src);
    SetGameServerInstanceDataRequest& operator=(const SetGameServerInstanceDataRequest&) = delete;
    ~SetGameServerInstanceDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gameServerData;
    String m_lobbyId;
};

struct SetGameServerInstanceStateRequest : public PFMatchmakingSetGameServerInstanceStateRequest, public SerializableModel
{
    SetGameServerInstanceStateRequest();
    SetGameServerInstanceStateRequest(const SetGameServerInstanceStateRequest& src);
    SetGameServerInstanceStateRequest(SetGameServerInstanceStateRequest&& src);
    SetGameServerInstanceStateRequest(const PFMatchmakingSetGameServerInstanceStateRequest& src);
    SetGameServerInstanceStateRequest& operator=(const SetGameServerInstanceStateRequest&) = delete;
    ~SetGameServerInstanceStateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct SetGameServerInstanceTagsRequest : public PFMatchmakingSetGameServerInstanceTagsRequest, public BaseModel
{
    SetGameServerInstanceTagsRequest();
    SetGameServerInstanceTagsRequest(const SetGameServerInstanceTagsRequest& src);
    SetGameServerInstanceTagsRequest(SetGameServerInstanceTagsRequest&& src);
    SetGameServerInstanceTagsRequest(const PFMatchmakingSetGameServerInstanceTagsRequest& src);
    SetGameServerInstanceTagsRequest& operator=(const SetGameServerInstanceTagsRequest&) = delete;
    ~SetGameServerInstanceTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_lobbyId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_tags;
};

struct CancelAllMatchmakingTicketsForPlayerRequest : public PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest, public BaseModel
{
    CancelAllMatchmakingTicketsForPlayerRequest();
    CancelAllMatchmakingTicketsForPlayerRequest(const CancelAllMatchmakingTicketsForPlayerRequest& src);
    CancelAllMatchmakingTicketsForPlayerRequest(CancelAllMatchmakingTicketsForPlayerRequest&& src);
    CancelAllMatchmakingTicketsForPlayerRequest(const PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest& src);
    CancelAllMatchmakingTicketsForPlayerRequest& operator=(const CancelAllMatchmakingTicketsForPlayerRequest&) = delete;
    ~CancelAllMatchmakingTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_queueName;
};

struct CancelAllServerBackfillTicketsForPlayerRequest : public PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest, public BaseModel
{
    CancelAllServerBackfillTicketsForPlayerRequest();
    CancelAllServerBackfillTicketsForPlayerRequest(const CancelAllServerBackfillTicketsForPlayerRequest& src);
    CancelAllServerBackfillTicketsForPlayerRequest(CancelAllServerBackfillTicketsForPlayerRequest&& src);
    CancelAllServerBackfillTicketsForPlayerRequest(const PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest& src);
    CancelAllServerBackfillTicketsForPlayerRequest& operator=(const CancelAllServerBackfillTicketsForPlayerRequest&) = delete;
    ~CancelAllServerBackfillTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    String m_queueName;
};

struct CancelMatchmakingTicketRequest : public PFMatchmakingCancelMatchmakingTicketRequest, public BaseModel
{
    CancelMatchmakingTicketRequest();
    CancelMatchmakingTicketRequest(const CancelMatchmakingTicketRequest& src);
    CancelMatchmakingTicketRequest(CancelMatchmakingTicketRequest&& src);
    CancelMatchmakingTicketRequest(const PFMatchmakingCancelMatchmakingTicketRequest& src);
    CancelMatchmakingTicketRequest& operator=(const CancelMatchmakingTicketRequest&) = delete;
    ~CancelMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct CancelServerBackfillTicketRequest : public PFMatchmakingCancelServerBackfillTicketRequest, public BaseModel
{
    CancelServerBackfillTicketRequest();
    CancelServerBackfillTicketRequest(const CancelServerBackfillTicketRequest& src);
    CancelServerBackfillTicketRequest(CancelServerBackfillTicketRequest&& src);
    CancelServerBackfillTicketRequest(const PFMatchmakingCancelServerBackfillTicketRequest& src);
    CancelServerBackfillTicketRequest& operator=(const CancelServerBackfillTicketRequest&) = delete;
    ~CancelServerBackfillTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct MatchmakingPlayerAttributes : public PFMatchmakingMatchmakingPlayerAttributes, public BaseModel
{
    MatchmakingPlayerAttributes();
    MatchmakingPlayerAttributes(const MatchmakingPlayerAttributes& src);
    MatchmakingPlayerAttributes(MatchmakingPlayerAttributes&& src);
    MatchmakingPlayerAttributes(const PFMatchmakingMatchmakingPlayerAttributes& src);
    MatchmakingPlayerAttributes& operator=(const MatchmakingPlayerAttributes&) = delete;
    ~MatchmakingPlayerAttributes() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_dataObject;
    String m_escapedDataObject;
};

struct MatchmakingPlayer : public PFMatchmakingMatchmakingPlayer, public BaseModel
{
    MatchmakingPlayer();
    MatchmakingPlayer(const MatchmakingPlayer& src);
    MatchmakingPlayer(MatchmakingPlayer&& src);
    MatchmakingPlayer(const PFMatchmakingMatchmakingPlayer& src);
    MatchmakingPlayer& operator=(const MatchmakingPlayer&) = delete;
    ~MatchmakingPlayer() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<MatchmakingPlayerAttributes> m_attributes;
    EntityKey m_entity;
};

struct CreateMatchmakingTicketRequest : public PFMatchmakingCreateMatchmakingTicketRequest, public BaseModel
{
    CreateMatchmakingTicketRequest();
    CreateMatchmakingTicketRequest(const CreateMatchmakingTicketRequest& src);
    CreateMatchmakingTicketRequest(CreateMatchmakingTicketRequest&& src);
    CreateMatchmakingTicketRequest(const PFMatchmakingCreateMatchmakingTicketRequest& src);
    CreateMatchmakingTicketRequest& operator=(const CreateMatchmakingTicketRequest&) = delete;
    ~CreateMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    MatchmakingPlayer m_creator;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFEntityKey, EntityKey> m_membersToMatchWith;
    String m_queueName;
};

struct CreateMatchmakingTicketResult : public PFMatchmakingCreateMatchmakingTicketResult, public SerializableModel, public ApiResult
{
    CreateMatchmakingTicketResult();
    CreateMatchmakingTicketResult(const CreateMatchmakingTicketResult& src);
    CreateMatchmakingTicketResult(CreateMatchmakingTicketResult&& src);
    CreateMatchmakingTicketResult(const PFMatchmakingCreateMatchmakingTicketResult& src);
    CreateMatchmakingTicketResult& operator=(const CreateMatchmakingTicketResult&) = delete;
    ~CreateMatchmakingTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_ticketId;
};

struct MatchmakingPlayerWithTeamAssignment : public PFMatchmakingMatchmakingPlayerWithTeamAssignment, public BaseModel
{
    MatchmakingPlayerWithTeamAssignment();
    MatchmakingPlayerWithTeamAssignment(const MatchmakingPlayerWithTeamAssignment& src);
    MatchmakingPlayerWithTeamAssignment(MatchmakingPlayerWithTeamAssignment&& src);
    MatchmakingPlayerWithTeamAssignment(const PFMatchmakingMatchmakingPlayerWithTeamAssignment& src);
    MatchmakingPlayerWithTeamAssignment& operator=(const MatchmakingPlayerWithTeamAssignment&) = delete;
    ~MatchmakingPlayerWithTeamAssignment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<MatchmakingPlayerAttributes> m_attributes;
    EntityKey m_entity;
    String m_teamId;
};

struct ServerDetails : public PFMatchmakingServerDetails, public BaseModel
{
    ServerDetails();
    ServerDetails(const ServerDetails& src);
    ServerDetails(ServerDetails&& src);
    ServerDetails(const PFMatchmakingServerDetails& src);
    ServerDetails& operator=(const ServerDetails&) = delete;
    ~ServerDetails() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_fqdn;
    String m_iPV4Address;
    PointerArrayModel<PFPort, Port> m_ports;
    String m_region;
};

struct CreateServerBackfillTicketRequest : public PFMatchmakingCreateServerBackfillTicketRequest, public BaseModel
{
    CreateServerBackfillTicketRequest();
    CreateServerBackfillTicketRequest(const CreateServerBackfillTicketRequest& src);
    CreateServerBackfillTicketRequest(CreateServerBackfillTicketRequest&& src);
    CreateServerBackfillTicketRequest(const PFMatchmakingCreateServerBackfillTicketRequest& src);
    CreateServerBackfillTicketRequest& operator=(const CreateServerBackfillTicketRequest&) = delete;
    ~CreateServerBackfillTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFMatchmakingMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
    String m_queueName;
    StdExtra::optional<ServerDetails> m_serverDetails;
};

struct CreateServerBackfillTicketResult : public PFMatchmakingCreateServerBackfillTicketResult, public SerializableModel, public ApiResult
{
    CreateServerBackfillTicketResult();
    CreateServerBackfillTicketResult(const CreateServerBackfillTicketResult& src);
    CreateServerBackfillTicketResult(CreateServerBackfillTicketResult&& src);
    CreateServerBackfillTicketResult(const PFMatchmakingCreateServerBackfillTicketResult& src);
    CreateServerBackfillTicketResult& operator=(const CreateServerBackfillTicketResult&) = delete;
    ~CreateServerBackfillTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_ticketId;
};

struct CreateServerMatchmakingTicketRequest : public PFMatchmakingCreateServerMatchmakingTicketRequest, public BaseModel
{
    CreateServerMatchmakingTicketRequest();
    CreateServerMatchmakingTicketRequest(const CreateServerMatchmakingTicketRequest& src);
    CreateServerMatchmakingTicketRequest(CreateServerMatchmakingTicketRequest&& src);
    CreateServerMatchmakingTicketRequest(const PFMatchmakingCreateServerMatchmakingTicketRequest& src);
    CreateServerMatchmakingTicketRequest& operator=(const CreateServerMatchmakingTicketRequest&) = delete;
    ~CreateServerMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFMatchmakingMatchmakingPlayer, MatchmakingPlayer> m_members;
    String m_queueName;
};

struct GetMatchRequest : public PFMatchmakingGetMatchRequest, public BaseModel
{
    GetMatchRequest();
    GetMatchRequest(const GetMatchRequest& src);
    GetMatchRequest(GetMatchRequest&& src);
    GetMatchRequest(const PFMatchmakingGetMatchRequest& src);
    GetMatchRequest& operator=(const GetMatchRequest&) = delete;
    ~GetMatchRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_matchId;
    String m_queueName;
};

struct GetMatchResult : public PFMatchmakingGetMatchResult, public BaseModel, public ApiResult
{
    GetMatchResult();
    GetMatchResult(const GetMatchResult& src);
    GetMatchResult(GetMatchResult&& src);
    GetMatchResult(const PFMatchmakingGetMatchResult& src);
    GetMatchResult& operator=(const GetMatchResult&) = delete;
    ~GetMatchResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_matchId;
    PointerArrayModel<PFMatchmakingMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
    PointerArrayModel<char, String> m_regionPreferences;
    StdExtra::optional<ServerDetails> m_serverDetails;
};

struct GetMatchmakingTicketRequest : public PFMatchmakingGetMatchmakingTicketRequest, public BaseModel
{
    GetMatchmakingTicketRequest();
    GetMatchmakingTicketRequest(const GetMatchmakingTicketRequest& src);
    GetMatchmakingTicketRequest(GetMatchmakingTicketRequest&& src);
    GetMatchmakingTicketRequest(const PFMatchmakingGetMatchmakingTicketRequest& src);
    GetMatchmakingTicketRequest& operator=(const GetMatchmakingTicketRequest&) = delete;
    ~GetMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct GetMatchmakingTicketResult : public PFMatchmakingGetMatchmakingTicketResult, public BaseModel, public ApiResult
{
    GetMatchmakingTicketResult();
    GetMatchmakingTicketResult(const GetMatchmakingTicketResult& src);
    GetMatchmakingTicketResult(GetMatchmakingTicketResult&& src);
    GetMatchmakingTicketResult(const PFMatchmakingGetMatchmakingTicketResult& src);
    GetMatchmakingTicketResult& operator=(const GetMatchmakingTicketResult&) = delete;
    ~GetMatchmakingTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_cancellationReasonString;
    EntityKey m_creator;
    String m_matchId;
    PointerArrayModel<PFMatchmakingMatchmakingPlayer, MatchmakingPlayer> m_members;
    PointerArrayModel<PFEntityKey, EntityKey> m_membersToMatchWith;
    String m_queueName;
    String m_status;
    String m_ticketId;
};

struct GetQueueStatisticsRequest : public PFMatchmakingGetQueueStatisticsRequest, public BaseModel
{
    GetQueueStatisticsRequest();
    GetQueueStatisticsRequest(const GetQueueStatisticsRequest& src);
    GetQueueStatisticsRequest(GetQueueStatisticsRequest&& src);
    GetQueueStatisticsRequest(const PFMatchmakingGetQueueStatisticsRequest& src);
    GetQueueStatisticsRequest& operator=(const GetQueueStatisticsRequest&) = delete;
    ~GetQueueStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_queueName;
};

struct Statistics : public PFMatchmakingStatistics, public SerializableModel
{
    Statistics();
    Statistics(const Statistics&) = default;
    Statistics(Statistics&&) = default;
    Statistics(const PFMatchmakingStatistics& src);
    Statistics& operator=(const Statistics&) = delete;
    ~Statistics() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetQueueStatisticsResult : public PFMatchmakingGetQueueStatisticsResult, public BaseModel, public ApiResult
{
    GetQueueStatisticsResult();
    GetQueueStatisticsResult(const GetQueueStatisticsResult& src);
    GetQueueStatisticsResult(GetQueueStatisticsResult&& src);
    GetQueueStatisticsResult(const PFMatchmakingGetQueueStatisticsResult& src);
    GetQueueStatisticsResult& operator=(const GetQueueStatisticsResult&) = delete;
    ~GetQueueStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_numberOfPlayersMatching;
    StdExtra::optional<Statistics> m_timeToMatchStatisticsInSeconds;
};

struct GetServerBackfillTicketRequest : public PFMatchmakingGetServerBackfillTicketRequest, public BaseModel
{
    GetServerBackfillTicketRequest();
    GetServerBackfillTicketRequest(const GetServerBackfillTicketRequest& src);
    GetServerBackfillTicketRequest(GetServerBackfillTicketRequest&& src);
    GetServerBackfillTicketRequest(const PFMatchmakingGetServerBackfillTicketRequest& src);
    GetServerBackfillTicketRequest& operator=(const GetServerBackfillTicketRequest&) = delete;
    ~GetServerBackfillTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct GetServerBackfillTicketResult : public PFMatchmakingGetServerBackfillTicketResult, public BaseModel, public ApiResult
{
    GetServerBackfillTicketResult();
    GetServerBackfillTicketResult(const GetServerBackfillTicketResult& src);
    GetServerBackfillTicketResult(GetServerBackfillTicketResult&& src);
    GetServerBackfillTicketResult(const PFMatchmakingGetServerBackfillTicketResult& src);
    GetServerBackfillTicketResult& operator=(const GetServerBackfillTicketResult&) = delete;
    ~GetServerBackfillTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_cancellationReasonString;
    String m_matchId;
    PointerArrayModel<PFMatchmakingMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
    String m_queueName;
    ServerDetails m_serverDetails;
    String m_status;
    String m_ticketId;
};

struct JoinMatchmakingTicketRequest : public PFMatchmakingJoinMatchmakingTicketRequest, public BaseModel
{
    JoinMatchmakingTicketRequest();
    JoinMatchmakingTicketRequest(const JoinMatchmakingTicketRequest& src);
    JoinMatchmakingTicketRequest(JoinMatchmakingTicketRequest&& src);
    JoinMatchmakingTicketRequest(const PFMatchmakingJoinMatchmakingTicketRequest& src);
    JoinMatchmakingTicketRequest& operator=(const JoinMatchmakingTicketRequest&) = delete;
    ~JoinMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    MatchmakingPlayer m_member;
    String m_queueName;
    String m_ticketId;
};

struct ListMatchmakingTicketsForPlayerRequest : public PFMatchmakingListMatchmakingTicketsForPlayerRequest, public BaseModel
{
    ListMatchmakingTicketsForPlayerRequest();
    ListMatchmakingTicketsForPlayerRequest(const ListMatchmakingTicketsForPlayerRequest& src);
    ListMatchmakingTicketsForPlayerRequest(ListMatchmakingTicketsForPlayerRequest&& src);
    ListMatchmakingTicketsForPlayerRequest(const PFMatchmakingListMatchmakingTicketsForPlayerRequest& src);
    ListMatchmakingTicketsForPlayerRequest& operator=(const ListMatchmakingTicketsForPlayerRequest&) = delete;
    ~ListMatchmakingTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_queueName;
};

struct ListMatchmakingTicketsForPlayerResult : public PFMatchmakingListMatchmakingTicketsForPlayerResult, public BaseModel, public ApiResult
{
    ListMatchmakingTicketsForPlayerResult();
    ListMatchmakingTicketsForPlayerResult(const ListMatchmakingTicketsForPlayerResult& src);
    ListMatchmakingTicketsForPlayerResult(ListMatchmakingTicketsForPlayerResult&& src);
    ListMatchmakingTicketsForPlayerResult(const PFMatchmakingListMatchmakingTicketsForPlayerResult& src);
    ListMatchmakingTicketsForPlayerResult& operator=(const ListMatchmakingTicketsForPlayerResult&) = delete;
    ~ListMatchmakingTicketsForPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_ticketIds;
};

struct ListServerBackfillTicketsForPlayerRequest : public PFMatchmakingListServerBackfillTicketsForPlayerRequest, public BaseModel
{
    ListServerBackfillTicketsForPlayerRequest();
    ListServerBackfillTicketsForPlayerRequest(const ListServerBackfillTicketsForPlayerRequest& src);
    ListServerBackfillTicketsForPlayerRequest(ListServerBackfillTicketsForPlayerRequest&& src);
    ListServerBackfillTicketsForPlayerRequest(const PFMatchmakingListServerBackfillTicketsForPlayerRequest& src);
    ListServerBackfillTicketsForPlayerRequest& operator=(const ListServerBackfillTicketsForPlayerRequest&) = delete;
    ~ListServerBackfillTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    String m_queueName;
};

struct ListServerBackfillTicketsForPlayerResult : public PFMatchmakingListServerBackfillTicketsForPlayerResult, public BaseModel, public ApiResult
{
    ListServerBackfillTicketsForPlayerResult();
    ListServerBackfillTicketsForPlayerResult(const ListServerBackfillTicketsForPlayerResult& src);
    ListServerBackfillTicketsForPlayerResult(ListServerBackfillTicketsForPlayerResult&& src);
    ListServerBackfillTicketsForPlayerResult(const PFMatchmakingListServerBackfillTicketsForPlayerResult& src);
    ListServerBackfillTicketsForPlayerResult& operator=(const ListServerBackfillTicketsForPlayerResult&) = delete;
    ~ListServerBackfillTicketsForPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_ticketIds;
};

} // namespace MatchmakingModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameInfoResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameModesRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGameModeInfo& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakerGameModesResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingModifyMatchmakerGameModesRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingContainer_Dictionary_String_String& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCollectionFilter& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCurrentGamesRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGameInfo& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCurrentGamesResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGameServerRegionsRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingRegionInfo& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGameServerRegionsResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingMatchmakeRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingMatchmakeResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingClientStartGameRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingStartGameResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingAuthUserRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingAuthUserResponse& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingPlayerJoinedRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingPlayerLeftRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingMatchmakerStartGameRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingStartGameResponse& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingUserInfoRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingUserInfoResponse& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingDeregisterGameRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingNotifyMatchmakerPlayerLeftRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingNotifyMatchmakerPlayerLeftResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingRedeemMatchmakerTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingRedeemMatchmakerTicketResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingRefreshGameServerInstanceHeartbeatRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingRegisterGameRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingRegisterGameResponse& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingSetGameServerInstanceDataRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingSetGameServerInstanceStateRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingSetGameServerInstanceTagsRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCancelMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCancelServerBackfillTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingMatchmakingPlayerAttributes& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingMatchmakingPlayer& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCreateMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCreateMatchmakingTicketResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingMatchmakingPlayerWithTeamAssignment& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingServerDetails& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCreateServerBackfillTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCreateServerBackfillTicketResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingCreateServerMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetMatchmakingTicketResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetQueueStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingStatistics& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetQueueStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetServerBackfillTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingGetServerBackfillTicketResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingJoinMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingListMatchmakingTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingListMatchmakingTicketsForPlayerResult& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingListServerBackfillTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PFMatchmakingListServerBackfillTicketsForPlayerResult& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
