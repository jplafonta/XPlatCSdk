#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <CloudScript/CloudScriptDataModels.h>
#include <playfab/HttpClient.h>
#include <playfab/TaskQueue.h>

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
        void ExecuteEntityCloudScript(CloudScriptModels::ExecuteEntityCloudScriptRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::ExecuteCloudScriptResult> callback, const ErrorCallback errorCallback = nullptr);
        void ExecuteFunction(CloudScriptModels::ExecuteFunctionRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::ExecuteFunctionResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListFunctions(CloudScriptModels::ListFunctionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::ListFunctionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListHttpFunctions(CloudScriptModels::ListFunctionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::ListHttpFunctionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void ListQueuedFunctions(CloudScriptModels::ListFunctionsRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::ListQueuedFunctionsResult> callback, const ErrorCallback errorCallback = nullptr);
        void PostFunctionResultForEntityTriggeredAction(CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void PostFunctionResultForFunctionExecution(CloudScriptModels::PostFunctionResultForFunctionExecutionRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void PostFunctionResultForPlayerTriggeredAction(CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void PostFunctionResultForScheduledTask(CloudScriptModels::PostFunctionResultForScheduledTaskRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void RegisterHttpFunction(CloudScriptModels::RegisterHttpFunctionRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void RegisterQueuedFunction(CloudScriptModels::RegisterQueuedFunctionRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        void UnregisterFunction(CloudScriptModels::UnregisterFunctionRequest& request, const TaskQueue& queue, const ProcessApiCallback<CloudScriptModels::EmptyResult> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
