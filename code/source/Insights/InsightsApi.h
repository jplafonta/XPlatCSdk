#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "InsightsDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Insights APIs
    /// </summary>
    class PlayFabInsightsInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabInsightsInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabInsightsInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabInsightsInstanceAPI() = default;
        PlayFabInsightsInstanceAPI(const PlayFabInsightsInstanceAPI& source) = delete; // disable copy
        PlayFabInsightsInstanceAPI(PlayFabInsightsInstanceAPI&&) = delete; // disable move
        PlayFabInsightsInstanceAPI& operator=(const PlayFabInsightsInstanceAPI& source) = delete; // disable assignment
        PlayFabInsightsInstanceAPI& operator=(PlayFabInsightsInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        void GetDetails(InsightsModels::InsightsEmptyRequest& request, const TaskQueue& queue, const ProcessApiCallback<InsightsModels::InsightsGetDetailsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetLimits(InsightsModels::InsightsEmptyRequest& request, const TaskQueue& queue, const ProcessApiCallback<InsightsModels::InsightsGetLimitsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetOperationStatus(InsightsModels::InsightsGetOperationStatusRequest& request, const TaskQueue& queue, const ProcessApiCallback<InsightsModels::InsightsGetOperationStatusResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetPendingOperations(InsightsModels::InsightsGetPendingOperationsRequest& request, const TaskQueue& queue, const ProcessApiCallback<InsightsModels::InsightsGetPendingOperationsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void SetPerformance(InsightsModels::InsightsSetPerformanceRequest& request, const TaskQueue& queue, const ProcessApiCallback<InsightsModels::InsightsOperationResponse> callback, const ErrorCallback errorCallback = nullptr);
        void SetStorageRetention(InsightsModels::InsightsSetStorageRetentionRequest& request, const TaskQueue& queue, const ProcessApiCallback<InsightsModels::InsightsOperationResponse> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
