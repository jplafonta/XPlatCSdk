#pragma once

#include "AuthenticationDataModels.h"
#include "HttpClient.h"

namespace PlayFab
{

class Entity;

class AuthenticationAuthAPI
{
public:
    AuthenticationAuthAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey);
    AuthenticationAuthAPI(const AuthenticationAuthAPI&) = delete;
    AuthenticationAuthAPI& operator=(const AuthenticationAuthAPI& source) = delete;
    ~AuthenticationAuthAPI() = default;

    // ------------ Generated API calls
    AsyncOp<SharedPtr<Entity>> GetEntityToken(const PlayFabAuthenticationGetEntityTokenRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<String const> m_secretKey;
};

}