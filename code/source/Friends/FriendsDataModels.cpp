#include "stdafx.h"
#include "FriendsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace Friends
{

JsonValue ClientAddFriendRequest::ToJson() const
{
    return ClientAddFriendRequest::ToJson(this->Model());
}

JsonValue ClientAddFriendRequest::ToJson(const PFFriendsClientAddFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendEmail", input.friendEmail);
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "FriendTitleDisplayName", input.friendTitleDisplayName);
    JsonUtils::ObjectAddMember(output, "FriendUsername", input.friendUsername);
    return output;
}

void AddFriendResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Created", this->m_model.created);
}

size_t AddFriendResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFFriendsAddFriendResult const*> AddFriendResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<AddFriendResult>(&this->Model());
}

size_t AddFriendResult::RequiredBufferSize(const PFFriendsAddFriendResult& model)
{
    UNREFERENCED_PARAMETER(model); // Fixed size
    return sizeof(ModelType);
}

HRESULT AddFriendResult::Copy(const PFFriendsAddFriendResult& input, PFFriendsAddFriendResult& output, ModelBuffer& buffer)
{
    output = input;
    UNREFERENCED_PARAMETER(buffer); // Fixed size
    return S_OK;
}

JsonValue ClientGetFriendsListRequest::ToJson() const
{
    return ClientGetFriendsListRequest::ToJson(this->Model());
}

JsonValue ClientGetFriendsListRequest::ToJson(const PFFriendsClientGetFriendsListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember<PlayerProfileViewConstraints>(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

void FriendInfo::FromJson(const JsonValue& input)
{
    StdExtra::optional<UserFacebookInfo> facebookInfo{};
    JsonUtils::ObjectGetMember(input, "FacebookInfo", facebookInfo);
    if (facebookInfo)
    {
        this->SetFacebookInfo(std::move(*facebookInfo));
    }

    String friendPlayFabId{};
    JsonUtils::ObjectGetMember(input, "FriendPlayFabId", friendPlayFabId);
    this->SetFriendPlayFabId(std::move(friendPlayFabId));

    StdExtra::optional<UserGameCenterInfo> gameCenterInfo{};
    JsonUtils::ObjectGetMember(input, "GameCenterInfo", gameCenterInfo);
    if (gameCenterInfo)
    {
        this->SetGameCenterInfo(std::move(*gameCenterInfo));
    }

    StdExtra::optional<PlayerProfileModel> profile{};
    JsonUtils::ObjectGetMember(input, "Profile", profile);
    if (profile)
    {
        this->SetProfile(std::move(*profile));
    }

    StdExtra::optional<UserPsnInfo> PSNInfo{};
    JsonUtils::ObjectGetMember(input, "PSNInfo", PSNInfo);
    if (PSNInfo)
    {
        this->SetPSNInfo(std::move(*PSNInfo));
    }

    StdExtra::optional<UserSteamInfo> steamInfo{};
    JsonUtils::ObjectGetMember(input, "SteamInfo", steamInfo);
    if (steamInfo)
    {
        this->SetSteamInfo(std::move(*steamInfo));
    }

    CStringVector tags{};
    JsonUtils::ObjectGetMember(input, "Tags", tags);
    this->SetTags(std::move(tags));

    String titleDisplayName{};
    JsonUtils::ObjectGetMember(input, "TitleDisplayName", titleDisplayName);
    this->SetTitleDisplayName(std::move(titleDisplayName));

    String username{};
    JsonUtils::ObjectGetMember(input, "Username", username);
    this->SetUsername(std::move(username));

    StdExtra::optional<UserXboxInfo> xboxInfo{};
    JsonUtils::ObjectGetMember(input, "XboxInfo", xboxInfo);
    if (xboxInfo)
    {
        this->SetXboxInfo(std::move(*xboxInfo));
    }
}

size_t FriendInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFFriendsFriendInfo const*> FriendInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<FriendInfo>(&this->Model());
}

size_t FriendInfo::RequiredBufferSize(const PFFriendsFriendInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.facebookInfo)
    {
        requiredSize += UserFacebookInfo::RequiredBufferSize(*model.facebookInfo);
    }
    if (model.friendPlayFabId)
    {
        requiredSize += (std::strlen(model.friendPlayFabId) + 1);
    }
    if (model.gameCenterInfo)
    {
        requiredSize += UserGameCenterInfo::RequiredBufferSize(*model.gameCenterInfo);
    }
    if (model.profile)
    {
        requiredSize += PlayerProfileModel::RequiredBufferSize(*model.profile);
    }
    if (model.PSNInfo)
    {
        requiredSize += UserPsnInfo::RequiredBufferSize(*model.PSNInfo);
    }
    if (model.steamInfo)
    {
        requiredSize += UserSteamInfo::RequiredBufferSize(*model.steamInfo);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.tagsCount);
    for (size_t i = 0; i < model.tagsCount; ++i)
    {
        requiredSize += (std::strlen(model.tags[i]) + 1);
    }
    if (model.titleDisplayName)
    {
        requiredSize += (std::strlen(model.titleDisplayName) + 1);
    }
    if (model.username)
    {
        requiredSize += (std::strlen(model.username) + 1);
    }
    if (model.xboxInfo)
    {
        requiredSize += UserXboxInfo::RequiredBufferSize(*model.xboxInfo);
    }
    return requiredSize;
}

HRESULT FriendInfo::Copy(const PFFriendsFriendInfo& input, PFFriendsFriendInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.facebookInfo = buffer.CopyTo<UserFacebookInfo>(input.facebookInfo);
    output.friendPlayFabId = buffer.CopyTo(input.friendPlayFabId);
    output.gameCenterInfo = buffer.CopyTo<UserGameCenterInfo>(input.gameCenterInfo);
    output.profile = buffer.CopyTo<PlayerProfileModel>(input.profile);
    output.PSNInfo = buffer.CopyTo<UserPsnInfo>(input.PSNInfo);
    output.steamInfo = buffer.CopyTo<UserSteamInfo>(input.steamInfo);
    output.tags = buffer.CopyToArray(input.tags, input.tagsCount);
    output.titleDisplayName = buffer.CopyTo(input.titleDisplayName);
    output.username = buffer.CopyTo(input.username);
    output.xboxInfo = buffer.CopyTo<UserXboxInfo>(input.xboxInfo);
    return S_OK;
}

void GetFriendsListResult::FromJson(const JsonValue& input)
{
    ModelVector<FriendInfo> friends{};
    JsonUtils::ObjectGetMember<FriendInfo>(input, "Friends", friends);
    this->SetFriends(std::move(friends));
}

size_t GetFriendsListResult::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFFriendsGetFriendsListResult const*> GetFriendsListResult::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetFriendsListResult>(&this->Model());
}

size_t GetFriendsListResult::RequiredBufferSize(const PFFriendsGetFriendsListResult& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFFriendsFriendInfo*) + sizeof(PFFriendsFriendInfo*) * model.friendsCount);
    for (size_t i = 0; i < model.friendsCount; ++i)
    {
        requiredSize += FriendInfo::RequiredBufferSize(*model.friends[i]);
    }
    return requiredSize;
}

HRESULT GetFriendsListResult::Copy(const PFFriendsGetFriendsListResult& input, PFFriendsGetFriendsListResult& output, ModelBuffer& buffer)
{
    output = input;
    output.friends = buffer.CopyToArray<FriendInfo>(input.friends, input.friendsCount);
    return S_OK;
}

JsonValue ClientRemoveFriendRequest::ToJson() const
{
    return ClientRemoveFriendRequest::ToJson(this->Model());
}

JsonValue ClientRemoveFriendRequest::ToJson(const PFFriendsClientRemoveFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    return output;
}

JsonValue ClientSetFriendTagsRequest::ToJson() const
{
    return ClientSetFriendTagsRequest::ToJson(this->Model());
}

JsonValue ClientSetFriendTagsRequest::ToJson(const PFFriendsClientSetFriendTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMemberArray(output, "Tags", input.tags, input.tagsCount);
    return output;
}

JsonValue ServerAddFriendRequest::ToJson() const
{
    return ServerAddFriendRequest::ToJson(this->Model());
}

JsonValue ServerAddFriendRequest::ToJson(const PFFriendsServerAddFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendEmail", input.friendEmail);
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "FriendTitleDisplayName", input.friendTitleDisplayName);
    JsonUtils::ObjectAddMember(output, "FriendUsername", input.friendUsername);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue ServerGetFriendsListRequest::ToJson() const
{
    return ServerGetFriendsListRequest::ToJson(this->Model());
}

JsonValue ServerGetFriendsListRequest::ToJson(const PFFriendsServerGetFriendsListRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberDictionary(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember<PlayerProfileViewConstraints>(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

JsonValue ServerRemoveFriendRequest::ToJson() const
{
    return ServerRemoveFriendRequest::ToJson(this->Model());
}

JsonValue ServerRemoveFriendRequest::ToJson(const PFFriendsServerRemoveFriendRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

JsonValue ServerSetFriendTagsRequest::ToJson() const
{
    return ServerSetFriendTagsRequest::ToJson(this->Model());
}

JsonValue ServerSetFriendTagsRequest::ToJson(const PFFriendsServerSetFriendTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendPlayFabId", input.friendPlayFabId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMemberArray(output, "Tags", input.tags, input.tagsCount);
    return output;
}

} // namespace Friends
} // namespace PlayFab
