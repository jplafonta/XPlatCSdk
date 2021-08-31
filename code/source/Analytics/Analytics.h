#pragma once

#include "AnalyticsDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class AnalyticsAPI
{
public:
    AnalyticsAPI() = delete;
    AnalyticsAPI(const AnalyticsAPI& source) = delete;
    AnalyticsAPI& operator=(const AnalyticsAPI& source) = delete;
    ~AnalyticsAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> ClientReportDeviceInfo(SharedPtr<TitlePlayer> entity, const PFAnalyticsDeviceInfoRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ClientWriteCharacterEvent(SharedPtr<TitlePlayer> entity, const PFAnalyticsWriteClientCharacterEventRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ClientWritePlayerEvent(SharedPtr<TitlePlayer> entity, const PFAnalyticsWriteClientPlayerEventRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ClientWriteTitleEvent(SharedPtr<TitlePlayer> entity, const PFAnalyticsWriteTitleEventRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ServerWriteCharacterEvent(SharedPtr<GlobalState const> state, const PFAnalyticsWriteServerCharacterEventRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ServerWritePlayerEvent(SharedPtr<GlobalState const> state, const PFAnalyticsWriteServerPlayerEventRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::WriteEventResponse> ServerWriteTitleEvent(SharedPtr<GlobalState const> state, const PFAnalyticsWriteTitleEventRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::InsightsGetDetailsResponse> GetDetails(SharedPtr<Entity> entity, const PFAnalyticsInsightsEmptyRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::InsightsGetLimitsResponse> GetLimits(SharedPtr<Entity> entity, const PFAnalyticsInsightsEmptyRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::InsightsGetOperationStatusResponse> GetOperationStatus(SharedPtr<Entity> entity, const PFAnalyticsInsightsGetOperationStatusRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::InsightsGetPendingOperationsResponse> GetPendingOperations(SharedPtr<Entity> entity, const PFAnalyticsInsightsGetPendingOperationsRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::InsightsOperationResponse> SetPerformance(SharedPtr<Entity> entity, const PFAnalyticsInsightsSetPerformanceRequest& request, const TaskQueue& queue);
    static AsyncOp<AnalyticsModels::InsightsOperationResponse> SetStorageRetention(SharedPtr<Entity> entity, const PFAnalyticsInsightsSetStorageRetentionRequest& request, const TaskQueue& queue);
};

}
