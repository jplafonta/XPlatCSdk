#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "CloudScriptDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all CloudScript APIs
    /// </summary>
    class PlayFabCloudScriptInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabCloudScriptInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabCloudScriptInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabCloudScriptInstanceAPI() = default;
        PlayFabCloudScriptInstanceAPI(const PlayFabCloudScriptInstanceAPI& source) = delete; // disable copy
        PlayFabCloudScriptInstanceAPI(PlayFabCloudScriptInstanceAPI&&) = delete; // disable move
        PlayFabCloudScriptInstanceAPI& operator=(const PlayFabCloudScriptInstanceAPI& source) = delete; // disable assignment
        PlayFabCloudScriptInstanceAPI& operator=(PlayFabCloudScriptInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<CloudScriptModels::ExecuteCloudScriptResult> ExecuteEntityCloudScript(const PlayFabCloudScriptExecuteEntityCloudScriptRequest& request, const TaskQueue& queue);
        AsyncOp<CloudScriptModels::ExecuteFunctionResult> ExecuteFunction(const PlayFabCloudScriptExecuteFunctionRequest& request, const TaskQueue& queue);
        AsyncOp<CloudScriptModels::ListFunctionsResult> ListFunctions(const PlayFabCloudScriptListFunctionsRequest& request, const TaskQueue& queue);
        AsyncOp<CloudScriptModels::ListHttpFunctionsResult> ListHttpFunctions(const PlayFabCloudScriptListFunctionsRequest& request, const TaskQueue& queue);
        AsyncOp<CloudScriptModels::ListQueuedFunctionsResult> ListQueuedFunctions(const PlayFabCloudScriptListFunctionsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> PostFunctionResultForEntityTriggeredAction(const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> PostFunctionResultForFunctionExecution(const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> PostFunctionResultForPlayerTriggeredAction(const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> PostFunctionResultForScheduledTask(const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RegisterHttpFunction(const PlayFabCloudScriptRegisterHttpFunctionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> RegisterQueuedFunction(const PlayFabCloudScriptRegisterQueuedFunctionRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UnregisterFunction(const PlayFabCloudScriptUnregisterFunctionRequest& request, const TaskQueue& queue);

    };
}

#endif
