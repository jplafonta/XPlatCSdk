#pragma once

#include "MatchmakerDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class MatchmakerAPI
{
public:
    MatchmakerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey);
    MatchmakerAPI(const MatchmakerAPI& source) = delete;
    MatchmakerAPI& operator=(const MatchmakerAPI& source) = delete;
    ~MatchmakerAPI() = default;

    // ------------ Generated API calls
    AsyncOp<MatchmakerModels::AuthUserResponse> AuthUser(const PlayFabMatchmakerAuthUserRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> PlayerJoined(const PlayFabMatchmakerPlayerJoinedRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> PlayerLeft(const PlayFabMatchmakerPlayerLeftRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MatchmakerModels::StartGameResponse> StartGame(const PlayFabMatchmakerStartGameRequest& request, const TaskQueue& queue) const; 
    AsyncOp<MatchmakerModels::UserInfoResponse> UserInfo(const PlayFabMatchmakerUserInfoRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<String const> m_secretKey;
};

}
