#pragma once

#include "ContentDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class ContentAPI
{
public:
    ContentAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    ContentAPI(const ContentAPI& source) = delete;
    ContentAPI& operator=(const ContentAPI& source) = delete;
    ~ContentAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminDeleteContent(const PFContentDeleteContentRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ContentModels::GetContentListResult> AdminGetContentList(const PFContentGetContentListRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<ContentModels::GetContentUploadUrlResult> AdminGetContentUploadUrl(const PFContentGetContentUploadUrlRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<ContentModels::GetContentDownloadUrlResult> ClientGetContentDownloadUrl(const PFContentGetContentDownloadUrlRequest& request, const TaskQueue& queue) const;
    static AsyncOp<ContentModels::GetContentDownloadUrlResult> ServerGetContentDownloadUrl(const PFContentGetContentDownloadUrlRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
