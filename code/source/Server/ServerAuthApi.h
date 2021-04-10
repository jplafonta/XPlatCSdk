#pragma once

#include "ServerDataModels.h"
#include "HttpClient.h"

namespace PlayFab
{
class AuthContext;

class ServerAuthAPI
{
public:
    ServerAuthAPI();
    ServerAuthAPI(const ServerAuthAPI&) = delete;
    ServerAuthAPI& operator=(const ServerAuthAPI& source) = delete;
    ~ServerAuthAPI() = default;

    // Generated APIs 
    AsyncOp<SharedPtr<AuthContext>> LoginWithServerCustomId(const PlayFabServerLoginWithServerCustomIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithSteamId(const PlayFabServerLoginWithSteamIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithXbox(const PlayFabServerLoginWithXboxRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<AuthContext>> LoginWithXboxId(const PlayFabServerLoginWithXboxIdRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<PlayFabApiSettings> m_settings;
    HttpClient const m_httpClient;
};

}