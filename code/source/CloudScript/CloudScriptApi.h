#pragma once

#include "CloudScriptDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class CloudScriptAPI
{
public:
    CloudScriptAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    CloudScriptAPI(const CloudScriptAPI& source) = delete;
    CloudScriptAPI& operator=(const CloudScriptAPI& source) = delete;
    ~CloudScriptAPI() = default;

    // ------------ Generated API calls
    AsyncOp<CloudScriptModels::ExecuteCloudScriptResult> ExecuteEntityCloudScript(const PlayFabCloudScriptExecuteEntityCloudScriptRequest& request, const TaskQueue& queue) const; 
    AsyncOp<CloudScriptModels::ExecuteFunctionResult> ExecuteFunction(const PlayFabCloudScriptExecuteFunctionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<CloudScriptModels::ListFunctionsResult> ListFunctions(const PlayFabCloudScriptListFunctionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<CloudScriptModels::ListHttpFunctionsResult> ListHttpFunctions(const PlayFabCloudScriptListFunctionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<CloudScriptModels::ListQueuedFunctionsResult> ListQueuedFunctions(const PlayFabCloudScriptListFunctionsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> PostFunctionResultForEntityTriggeredAction(const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> PostFunctionResultForFunctionExecution(const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> PostFunctionResultForPlayerTriggeredAction(const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> PostFunctionResultForScheduledTask(const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RegisterHttpFunction(const PlayFabCloudScriptRegisterHttpFunctionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> RegisterQueuedFunction(const PlayFabCloudScriptRegisterQueuedFunctionRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UnregisterFunction(const PlayFabCloudScriptUnregisterFunctionRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
