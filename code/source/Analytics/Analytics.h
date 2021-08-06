#pragma once

#include "AnalyticsDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class AnalyticsAPI
{
public:
    AnalyticsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    AnalyticsAPI(const AnalyticsAPI& source) = delete;
    AnalyticsAPI& operator=(const AnalyticsAPI& source) = delete;
    ~AnalyticsAPI() = default;

    // ------------ Generated API calls
    AsyncOp<void> ClientReportDeviceInfo(const PFAnalyticsDeviceInfoRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::WriteEventResponse> ClientWriteCharacterEvent(const PFAnalyticsWriteClientCharacterEventRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::WriteEventResponse> ClientWritePlayerEvent(const PFAnalyticsWriteClientPlayerEventRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::WriteEventResponse> ClientWriteTitleEvent(const PFAnalyticsWriteTitleEventRequest& request, const TaskQueue& queue) const;
    static AsyncOp<AnalyticsModels::WriteEventResponse> ServerWriteCharacterEvent(const PFAnalyticsWriteServerCharacterEventRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ServerWritePlayerEvent(const PFAnalyticsWriteServerPlayerEventRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ServerWriteTitleEvent(const PFAnalyticsWriteTitleEventRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<AnalyticsModels::InsightsGetDetailsResponse> GetDetails(const PFAnalyticsInsightsEmptyRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::InsightsGetLimitsResponse> GetLimits(const PFAnalyticsInsightsEmptyRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::InsightsGetOperationStatusResponse> GetOperationStatus(const PFAnalyticsInsightsGetOperationStatusRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::InsightsGetPendingOperationsResponse> GetPendingOperations(const PFAnalyticsInsightsGetPendingOperationsRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::InsightsOperationResponse> SetPerformance(const PFAnalyticsInsightsSetPerformanceRequest& request, const TaskQueue& queue) const;
    AsyncOp<AnalyticsModels::InsightsOperationResponse> SetStorageRetention(const PFAnalyticsInsightsSetStorageRetentionRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
