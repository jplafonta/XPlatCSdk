#pragma once

#include "GameServerDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class GameServerAPI
{
public:
    GameServerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    GameServerAPI(const GameServerAPI& source) = delete;
    GameServerAPI& operator=(const GameServerAPI& source) = delete;
    ~GameServerAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<GameServerModels::AddServerBuildResult> AdminAddServerBuild(const PFGameServerAddServerBuildRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GameServerModels::GetServerBuildInfoResult> AdminGetServerBuildInfo(const PFGameServerGetServerBuildInfoRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GameServerModels::GetServerBuildUploadURLResult> AdminGetServerBuildUploadUrl(const PFGameServerGetServerBuildUploadURLRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GameServerModels::ListBuildsResult> AdminListServerBuilds(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<GameServerModels::ModifyServerBuildResult> AdminModifyServerBuild(const PFGameServerModifyServerBuildRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminRemoveServerBuild(const PFGameServerRemoveServerBuildRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
