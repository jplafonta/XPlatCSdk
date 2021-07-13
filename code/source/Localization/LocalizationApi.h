#pragma once

#include "LocalizationDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class LocalizationAPI
{
public:
    LocalizationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    LocalizationAPI(const LocalizationAPI& source) = delete;
    LocalizationAPI& operator=(const LocalizationAPI& source) = delete;
    ~LocalizationAPI() = default;

    // ------------ Generated API calls
    AsyncOp<LocalizationModels::GetLanguageListResponse> GetLanguageList(const PlayFabLocalizationGetLanguageListRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
