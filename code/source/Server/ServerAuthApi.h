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
    void LoginWithServerCustomId(const PlayFabServerLoginWithServerCustomIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithSteamId(const PlayFabServerLoginWithSteamIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithXbox(const PlayFabServerLoginWithXboxRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;
    void LoginWithXboxId(const PlayFabServerLoginWithXboxIdRequest& request, const TaskQueue& queue, const ProcessApiCallback<SharedPtr<AuthContext>> callback, const ErrorCallback errorCallback = nullptr) const;

private:
    SharedPtr<PlayFabApiSettings> m_settings;
    HttpClient const m_httpClient;
};

}