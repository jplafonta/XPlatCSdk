#pragma once

#include <playfab/PlayFabMatchmakerDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace MatchmakerModels
{

// Matchmaker Classes
struct AuthUserRequest : public PlayFabMatchmakerAuthUserRequest, public SerializableModel
{
    AuthUserRequest();
    AuthUserRequest(const AuthUserRequest& src);
    AuthUserRequest(AuthUserRequest&& src);
    AuthUserRequest(const PlayFabMatchmakerAuthUserRequest& src);
    AuthUserRequest& operator=(const AuthUserRequest&) = delete;
    ~AuthUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_authorizationTicket;
};

struct AuthUserResponse : public PlayFabMatchmakerAuthUserResponse, public SerializableModel, public ApiResult
{
    AuthUserResponse();
    AuthUserResponse(const AuthUserResponse& src);
    AuthUserResponse(AuthUserResponse&& src);
    AuthUserResponse(const PlayFabMatchmakerAuthUserResponse& src);
    AuthUserResponse& operator=(const AuthUserResponse&) = delete;
    ~AuthUserResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct PlayerJoinedRequest : public PlayFabMatchmakerPlayerJoinedRequest, public BaseModel
{
    PlayerJoinedRequest();
    PlayerJoinedRequest(const PlayerJoinedRequest& src);
    PlayerJoinedRequest(PlayerJoinedRequest&& src);
    PlayerJoinedRequest(const PlayFabMatchmakerPlayerJoinedRequest& src);
    PlayerJoinedRequest& operator=(const PlayerJoinedRequest&) = delete;
    ~PlayerJoinedRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_playFabId;
};

struct PlayerLeftRequest : public PlayFabMatchmakerPlayerLeftRequest, public BaseModel
{
    PlayerLeftRequest();
    PlayerLeftRequest(const PlayerLeftRequest& src);
    PlayerLeftRequest(PlayerLeftRequest&& src);
    PlayerLeftRequest(const PlayFabMatchmakerPlayerLeftRequest& src);
    PlayerLeftRequest& operator=(const PlayerLeftRequest&) = delete;
    ~PlayerLeftRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_lobbyId;
    String m_playFabId;
};

struct StartGameRequest : public PlayFabMatchmakerStartGameRequest, public BaseModel
{
    StartGameRequest();
    StartGameRequest(const StartGameRequest& src);
    StartGameRequest(StartGameRequest&& src);
    StartGameRequest(const PlayFabMatchmakerStartGameRequest& src);
    StartGameRequest& operator=(const StartGameRequest&) = delete;
    ~StartGameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_build;
    String m_customCommandLineData;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_externalMatchmakerEventEndpoint;
    String m_gameMode;
};

struct StartGameResponse : public PlayFabMatchmakerStartGameResponse, public SerializableModel, public ApiResult
{
    StartGameResponse();
    StartGameResponse(const StartGameResponse& src);
    StartGameResponse(StartGameResponse&& src);
    StartGameResponse(const PlayFabMatchmakerStartGameResponse& src);
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

struct UserInfoRequest : public PlayFabMatchmakerUserInfoRequest, public BaseModel
{
    UserInfoRequest();
    UserInfoRequest(const UserInfoRequest& src);
    UserInfoRequest(UserInfoRequest&& src);
    UserInfoRequest(const PlayFabMatchmakerUserInfoRequest& src);
    UserInfoRequest& operator=(const UserInfoRequest&) = delete;
    ~UserInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct UserInfoResponse : public PlayFabMatchmakerUserInfoResponse, public BaseModel, public ApiResult
{
    UserInfoResponse();
    UserInfoResponse(const UserInfoResponse& src);
    UserInfoResponse(UserInfoResponse&& src);
    UserInfoResponse(const PlayFabMatchmakerUserInfoResponse& src);
    UserInfoResponse& operator=(const UserInfoResponse&) = delete;
    ~UserInfoResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    String m_steamId;
    String m_titleDisplayName;
    String m_username;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PlayFabVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

} // namespace MatchmakerModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabMatchmakerAuthUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMatchmakerAuthUserResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMatchmakerPlayerJoinedRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMatchmakerPlayerLeftRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMatchmakerStartGameRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMatchmakerStartGameResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMatchmakerUserInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMatchmakerUserInfoResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabMatchmakerRegion>
{
    static constexpr PlayFabMatchmakerRegion maxValue = PlayFabMatchmakerRegion::Australia;
};

} // namespace PlayFab
