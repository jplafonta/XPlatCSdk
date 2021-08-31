#pragma once

#include "CloudScriptDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class CloudScriptAPI
{
public:
    CloudScriptAPI() = delete;
    CloudScriptAPI(const CloudScriptAPI& source) = delete;
    CloudScriptAPI& operator=(const CloudScriptAPI& source) = delete;
    ~CloudScriptAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<CloudScriptModels::GetCloudScriptRevisionResult> AdminGetCloudScriptRevision(SharedPtr<GlobalState const> state, const PFCloudScriptGetCloudScriptRevisionRequest& request, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::GetCloudScriptVersionsResult> AdminGetCloudScriptVersions(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<void> AdminSetPublishedRevision(SharedPtr<GlobalState const> state, const PFCloudScriptSetPublishedRevisionRequest& request, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::UpdateCloudScriptResult> AdminUpdateCloudScript(SharedPtr<GlobalState const> state, const PFCloudScriptUpdateCloudScriptRequest& request, const TaskQueue& queue);
    static AsyncOp<ExecuteCloudScriptResult> ClientExecuteCloudScript(SharedPtr<TitlePlayer> entity, const PFCloudScriptExecuteCloudScriptRequest& request, const TaskQueue& queue);
    static AsyncOp<ExecuteCloudScriptResult> ServerExecuteCloudScript(SharedPtr<GlobalState const> state, const PFCloudScriptExecuteCloudScriptServerRequest& request, const TaskQueue& queue);
    static AsyncOp<ExecuteCloudScriptResult> ExecuteEntityCloudScript(SharedPtr<Entity> entity, const PFCloudScriptExecuteEntityCloudScriptRequest& request, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::ExecuteFunctionResult> ExecuteFunction(SharedPtr<Entity> entity, const PFCloudScriptExecuteFunctionRequest& request, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::ListFunctionsResult> ListFunctions(SharedPtr<Entity> entity, const PFCloudScriptListFunctionsRequest& request, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::ListHttpFunctionsResult> ListHttpFunctions(SharedPtr<Entity> entity, const PFCloudScriptListFunctionsRequest& request, const TaskQueue& queue);
    static AsyncOp<CloudScriptModels::ListQueuedFunctionsResult> ListQueuedFunctions(SharedPtr<Entity> entity, const PFCloudScriptListFunctionsRequest& request, const TaskQueue& queue);
    static AsyncOp<void> PostFunctionResultForEntityTriggeredAction(SharedPtr<Entity> entity, const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> PostFunctionResultForFunctionExecution(SharedPtr<Entity> entity, const PFCloudScriptPostFunctionResultForFunctionExecutionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> PostFunctionResultForPlayerTriggeredAction(SharedPtr<Entity> entity, const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> PostFunctionResultForScheduledTask(SharedPtr<Entity> entity, const PFCloudScriptPostFunctionResultForScheduledTaskRequest& request, const TaskQueue& queue);
    static AsyncOp<void> RegisterHttpFunction(SharedPtr<Entity> entity, const PFCloudScriptRegisterHttpFunctionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> RegisterQueuedFunction(SharedPtr<Entity> entity, const PFCloudScriptRegisterQueuedFunctionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UnregisterFunction(SharedPtr<Entity> entity, const PFCloudScriptUnregisterFunctionRequest& request, const TaskQueue& queue);
};

}
