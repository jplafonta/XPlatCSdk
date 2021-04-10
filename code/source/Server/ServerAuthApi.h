#pragma once

#include "ServerDataModels.h"
#include "HttpClient.h"

namespace PlayFab
{

class Entity;

class ServerAuthAPI
{
public:
    ServerAuthAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey);
    ServerAuthAPI(const ServerAuthAPI&) = delete;
    ServerAuthAPI& operator=(const ServerAuthAPI& source) = delete;
    ~ServerAuthAPI() = default;

    // ------------ Generated API calls
    AsyncOp<SharedPtr<Entity>> LoginWithServerCustomId(const PlayFabServerLoginWithServerCustomIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithSteamId(const PlayFabServerLoginWithSteamIdRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithXbox(const PlayFabServerLoginWithXboxRequest& request, const TaskQueue& queue) const;
    AsyncOp<SharedPtr<Entity>> LoginWithXboxId(const PlayFabServerLoginWithXboxIdRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<String const> m_secretKey;
};

}