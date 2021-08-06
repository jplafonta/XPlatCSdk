#pragma once

#include "FriendsDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class FriendsAPI
{
public:
    FriendsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    FriendsAPI(const FriendsAPI& source) = delete;
    FriendsAPI& operator=(const FriendsAPI& source) = delete;
    ~FriendsAPI() = default;

    // ------------ Generated API calls
    AsyncOp<FriendsModels::AddFriendResult> ClientAddFriend(const PFFriendsClientAddFriendRequest& request, const TaskQueue& queue) const;
    AsyncOp<FriendsModels::GetFriendsListResult> ClientGetFriendsList(const PFFriendsClientGetFriendsListRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientRemoveFriend(const PFFriendsClientRemoveFriendRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> ClientSetFriendTags(const PFFriendsClientSetFriendTagsRequest& request, const TaskQueue& queue) const;
    static AsyncOp<void> ServerAddFriend(const PFFriendsServerAddFriendRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<FriendsModels::GetFriendsListResult> ServerGetFriendsList(const PFFriendsServerGetFriendsListRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerRemoveFriend(const PFFriendsServerRemoveFriendRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetFriendTags(const PFFriendsServerSetFriendTagsRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
