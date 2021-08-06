#pragma once

#include <playfab/PFFriendsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace FriendsModels
{

// Friends Classes
struct ClientAddFriendRequest : public PFFriendsClientAddFriendRequest, public SerializableModel
{
    ClientAddFriendRequest();
    ClientAddFriendRequest(const ClientAddFriendRequest& src);
    ClientAddFriendRequest(ClientAddFriendRequest&& src);
    ClientAddFriendRequest(const PFFriendsClientAddFriendRequest& src);
    ClientAddFriendRequest& operator=(const ClientAddFriendRequest&) = delete;
    ~ClientAddFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendEmail;
    String m_friendPlayFabId;
    String m_friendTitleDisplayName;
    String m_friendUsername;
};

struct AddFriendResult : public PFFriendsAddFriendResult, public SerializableModel, public ApiResult
{
    AddFriendResult();
    AddFriendResult(const AddFriendResult&) = default;
    AddFriendResult(AddFriendResult&&) = default;
    AddFriendResult(const PFFriendsAddFriendResult& src);
    AddFriendResult& operator=(const AddFriendResult&) = delete;
    ~AddFriendResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct ClientGetFriendsListRequest : public PFFriendsClientGetFriendsListRequest, public BaseModel
{
    ClientGetFriendsListRequest();
    ClientGetFriendsListRequest(const ClientGetFriendsListRequest& src);
    ClientGetFriendsListRequest(ClientGetFriendsListRequest&& src);
    ClientGetFriendsListRequest(const PFFriendsClientGetFriendsListRequest& src);
    ClientGetFriendsListRequest& operator=(const ClientGetFriendsListRequest&) = delete;
    ~ClientGetFriendsListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_xboxToken;
};

struct FriendInfo : public PFFriendsFriendInfo, public BaseModel
{
    FriendInfo();
    FriendInfo(const FriendInfo& src);
    FriendInfo(FriendInfo&& src);
    FriendInfo(const PFFriendsFriendInfo& src);
    FriendInfo& operator=(const FriendInfo&) = delete;
    ~FriendInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserFacebookInfo> m_facebookInfo;
    String m_friendPlayFabId;
    StdExtra::optional<UserGameCenterInfo> m_gameCenterInfo;
    StdExtra::optional<PlayerProfileModel> m_profile;
    StdExtra::optional<UserPsnInfo> m_PSNInfo;
    StdExtra::optional<UserSteamInfo> m_steamInfo;
    PointerArrayModel<char, String> m_tags;
    String m_titleDisplayName;
    String m_username;
    StdExtra::optional<UserXboxInfo> m_xboxInfo;
};

struct GetFriendsListResult : public PFFriendsGetFriendsListResult, public BaseModel, public ApiResult
{
    GetFriendsListResult();
    GetFriendsListResult(const GetFriendsListResult& src);
    GetFriendsListResult(GetFriendsListResult&& src);
    GetFriendsListResult(const PFFriendsGetFriendsListResult& src);
    GetFriendsListResult& operator=(const GetFriendsListResult&) = delete;
    ~GetFriendsListResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFFriendsFriendInfo, FriendInfo> m_friends;
};

struct ClientRemoveFriendRequest : public PFFriendsClientRemoveFriendRequest, public SerializableModel
{
    ClientRemoveFriendRequest();
    ClientRemoveFriendRequest(const ClientRemoveFriendRequest& src);
    ClientRemoveFriendRequest(ClientRemoveFriendRequest&& src);
    ClientRemoveFriendRequest(const PFFriendsClientRemoveFriendRequest& src);
    ClientRemoveFriendRequest& operator=(const ClientRemoveFriendRequest&) = delete;
    ~ClientRemoveFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendPlayFabId;
};

struct ClientSetFriendTagsRequest : public PFFriendsClientSetFriendTagsRequest, public BaseModel
{
    ClientSetFriendTagsRequest();
    ClientSetFriendTagsRequest(const ClientSetFriendTagsRequest& src);
    ClientSetFriendTagsRequest(ClientSetFriendTagsRequest&& src);
    ClientSetFriendTagsRequest(const PFFriendsClientSetFriendTagsRequest& src);
    ClientSetFriendTagsRequest& operator=(const ClientSetFriendTagsRequest&) = delete;
    ~ClientSetFriendTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_friendPlayFabId;
    PointerArrayModel<char, String> m_tags;
};

struct ServerAddFriendRequest : public PFFriendsServerAddFriendRequest, public SerializableModel
{
    ServerAddFriendRequest();
    ServerAddFriendRequest(const ServerAddFriendRequest& src);
    ServerAddFriendRequest(ServerAddFriendRequest&& src);
    ServerAddFriendRequest(const PFFriendsServerAddFriendRequest& src);
    ServerAddFriendRequest& operator=(const ServerAddFriendRequest&) = delete;
    ~ServerAddFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendEmail;
    String m_friendPlayFabId;
    String m_friendTitleDisplayName;
    String m_friendUsername;
    String m_playFabId;
};

struct ServerGetFriendsListRequest : public PFFriendsServerGetFriendsListRequest, public BaseModel
{
    ServerGetFriendsListRequest();
    ServerGetFriendsListRequest(const ServerGetFriendsListRequest& src);
    ServerGetFriendsListRequest(ServerGetFriendsListRequest&& src);
    ServerGetFriendsListRequest(const PFFriendsServerGetFriendsListRequest& src);
    ServerGetFriendsListRequest& operator=(const ServerGetFriendsListRequest&) = delete;
    ~ServerGetFriendsListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_xboxToken;
};

struct ServerRemoveFriendRequest : public PFFriendsServerRemoveFriendRequest, public SerializableModel
{
    ServerRemoveFriendRequest();
    ServerRemoveFriendRequest(const ServerRemoveFriendRequest& src);
    ServerRemoveFriendRequest(ServerRemoveFriendRequest&& src);
    ServerRemoveFriendRequest(const PFFriendsServerRemoveFriendRequest& src);
    ServerRemoveFriendRequest& operator=(const ServerRemoveFriendRequest&) = delete;
    ~ServerRemoveFriendRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendPlayFabId;
    String m_playFabId;
};

struct ServerSetFriendTagsRequest : public PFFriendsServerSetFriendTagsRequest, public BaseModel
{
    ServerSetFriendTagsRequest();
    ServerSetFriendTagsRequest(const ServerSetFriendTagsRequest& src);
    ServerSetFriendTagsRequest(ServerSetFriendTagsRequest&& src);
    ServerSetFriendTagsRequest(const PFFriendsServerSetFriendTagsRequest& src);
    ServerSetFriendTagsRequest& operator=(const ServerSetFriendTagsRequest&) = delete;
    ~ServerSetFriendTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_friendPlayFabId;
    String m_playFabId;
    PointerArrayModel<char, String> m_tags;
};

} // namespace FriendsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFFriendsClientAddFriendRequest& input);
template<> inline JsonValue ToJson<>(const PFFriendsAddFriendResult& input);
template<> inline JsonValue ToJson<>(const PFFriendsClientGetFriendsListRequest& input);
template<> inline JsonValue ToJson<>(const PFFriendsFriendInfo& input);
template<> inline JsonValue ToJson<>(const PFFriendsGetFriendsListResult& input);
template<> inline JsonValue ToJson<>(const PFFriendsClientRemoveFriendRequest& input);
template<> inline JsonValue ToJson<>(const PFFriendsClientSetFriendTagsRequest& input);
template<> inline JsonValue ToJson<>(const PFFriendsServerAddFriendRequest& input);
template<> inline JsonValue ToJson<>(const PFFriendsServerGetFriendsListRequest& input);
template<> inline JsonValue ToJson<>(const PFFriendsServerRemoveFriendRequest& input);
template<> inline JsonValue ToJson<>(const PFFriendsServerSetFriendTagsRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
