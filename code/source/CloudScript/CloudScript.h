#pragma once

#include "CloudScriptDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class CloudScriptAPI
{
public:
    CloudScriptAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    CloudScriptAPI(const CloudScriptAPI& source) = delete;
    CloudScriptAPI& operator=(const CloudScriptAPI& source) = delete;
    ~CloudScriptAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<CloudScriptModels::GetCloudScriptRevisionResult> AdminGetCloudScriptRevision(const PFCloudScriptGetCloudScriptRevisionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::GetCloudScriptVersionsResult> AdminGetCloudScriptVersions(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSetPublishedRevision(const PFCloudScriptSetPublishedRevisionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::UpdateCloudScriptResult> AdminUpdateCloudScript(const PFCloudScriptUpdateCloudScriptRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<ExecuteCloudScriptResult> ClientExecuteCloudScript(const PFCloudScriptExecuteCloudScriptRequest& request, const TaskQueue& queue) const;
    static AsyncOp<ExecuteCloudScriptResult> ServerExecuteCloudScript(const PFCloudScriptExecuteCloudScriptServerRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<ExecuteCloudScriptResult> ExecuteEntityCloudScript(const PFCloudScriptExecuteEntityCloudScriptRequest& request, const TaskQueue& queue) const;
    AsyncOp<CloudScriptModels::ExecuteFunctionResult> ExecuteFunction(const PFCloudScriptExecuteFunctionRequest& request, const TaskQueue& queue) const;
    AsyncOp<CloudScriptModels::ListFunctionsResult> ListFunctions(const PFCloudScriptListFunctionsRequest& request, const TaskQueue& queue) const;
    AsyncOp<CloudScriptModels::ListHttpFunctionsResult> ListHttpFunctions(const PFCloudScriptListFunctionsRequest& request, const TaskQueue& queue) const;
    AsyncOp<CloudScriptModels::ListQueuedFunctionsResult> ListQueuedFunctions(const PFCloudScriptListFunctionsRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> PostFunctionResultForEntityTriggeredAction(const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> PostFunctionResultForFunctionExecution(const PFCloudScriptPostFunctionResultForFunctionExecutionRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> PostFunctionResultForPlayerTriggeredAction(const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> PostFunctionResultForScheduledTask(const PFCloudScriptPostFunctionResultForScheduledTaskRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> RegisterHttpFunction(const PFCloudScriptRegisterHttpFunctionRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> RegisterQueuedFunction(const PFCloudScriptRegisterQueuedFunctionRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UnregisterFunction(const PFCloudScriptUnregisterFunctionRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
