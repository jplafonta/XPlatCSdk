#pragma once

#include "AuthenticationDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
struct AuthTokens;

class AuthenticationAPI
{
public:
    AuthenticationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    AuthenticationAPI(const AuthenticationAPI& source) = delete;
    AuthenticationAPI& operator=(const AuthenticationAPI& source) = delete;
    ~AuthenticationAPI() = default;

    // ------------ Generated API calls
    AsyncOp<AuthenticationModels::ValidateEntityTokenResponse> ValidateEntityToken(const PlayFabAuthenticationValidateEntityTokenRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
