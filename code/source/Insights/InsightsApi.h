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
        AsyncOp<InsightsModels::InsightsGetDetailsResponse> GetDetails(const PlayFabInsightsInsightsEmptyRequest& request, const TaskQueue& queue);
        AsyncOp<InsightsModels::InsightsGetLimitsResponse> GetLimits(const PlayFabInsightsInsightsEmptyRequest& request, const TaskQueue& queue);
        AsyncOp<InsightsModels::InsightsGetOperationStatusResponse> GetOperationStatus(const PlayFabInsightsInsightsGetOperationStatusRequest& request, const TaskQueue& queue);
        AsyncOp<InsightsModels::InsightsGetPendingOperationsResponse> GetPendingOperations(const PlayFabInsightsInsightsGetPendingOperationsRequest& request, const TaskQueue& queue);
        AsyncOp<InsightsModels::InsightsOperationResponse> SetPerformance(const PlayFabInsightsInsightsSetPerformanceRequest& request, const TaskQueue& queue);
        AsyncOp<InsightsModels::InsightsOperationResponse> SetStorageRetention(const PlayFabInsightsInsightsSetStorageRetentionRequest& request, const TaskQueue& queue);

    };
}

#endif
