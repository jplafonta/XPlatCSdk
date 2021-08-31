#pragma once

#include "FriendsDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class FriendsAPI
{
public:
    FriendsAPI() = delete;
    FriendsAPI(const FriendsAPI& source) = delete;
    FriendsAPI& operator=(const FriendsAPI& source) = delete;
    ~FriendsAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<FriendsModels::AddFriendResult> ClientAddFriend(SharedPtr<TitlePlayer> entity, const PFFriendsClientAddFriendRequest& request, const TaskQueue& queue);
    static AsyncOp<FriendsModels::GetFriendsListResult> ClientGetFriendsList(SharedPtr<TitlePlayer> entity, const PFFriendsClientGetFriendsListRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientRemoveFriend(SharedPtr<TitlePlayer> entity, const PFFriendsClientRemoveFriendRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientSetFriendTags(SharedPtr<TitlePlayer> entity, const PFFriendsClientSetFriendTagsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerAddFriend(SharedPtr<GlobalState const> state, const PFFriendsServerAddFriendRequest& request, const TaskQueue& queue);
    static AsyncOp<FriendsModels::GetFriendsListResult> ServerGetFriendsList(SharedPtr<GlobalState const> state, const PFFriendsServerGetFriendsListRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerRemoveFriend(SharedPtr<GlobalState const> state, const PFFriendsServerRemoveFriendRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetFriendTags(SharedPtr<GlobalState const> state, const PFFriendsServerSetFriendTagsRequest& request, const TaskQueue& queue);
};

}
