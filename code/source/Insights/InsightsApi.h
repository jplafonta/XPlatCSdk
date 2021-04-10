#pragma once

#include "InsightsDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
struct AuthTokens;

class InsightsAPI
{
public:
    InsightsAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    InsightsAPI(const InsightsAPI& source) = delete;
    InsightsAPI& operator=(const InsightsAPI& source) = delete;
    ~InsightsAPI() = default;

    // ------------ Generated API calls
    AsyncOp<InsightsModels::InsightsGetDetailsResponse> GetDetails(const PlayFabInsightsInsightsEmptyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<InsightsModels::InsightsGetLimitsResponse> GetLimits(const PlayFabInsightsInsightsEmptyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<InsightsModels::InsightsGetOperationStatusResponse> GetOperationStatus(const PlayFabInsightsInsightsGetOperationStatusRequest& request, const TaskQueue& queue) const; 
    AsyncOp<InsightsModels::InsightsGetPendingOperationsResponse> GetPendingOperations(const PlayFabInsightsInsightsGetPendingOperationsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<InsightsModels::InsightsOperationResponse> SetPerformance(const PlayFabInsightsInsightsSetPerformanceRequest& request, const TaskQueue& queue) const; 
    AsyncOp<InsightsModels::InsightsOperationResponse> SetStorageRetention(const PlayFabInsightsInsightsSetStorageRetentionRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
