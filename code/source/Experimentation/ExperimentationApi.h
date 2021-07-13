#pragma once

#include "ExperimentationDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class ExperimentationAPI
{
public:
    ExperimentationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    ExperimentationAPI(const ExperimentationAPI& source) = delete;
    ExperimentationAPI& operator=(const ExperimentationAPI& source) = delete;
    ~ExperimentationAPI() = default;

    // ------------ Generated API calls
    AsyncOp<ExperimentationModels::CreateExclusionGroupResult> CreateExclusionGroup(const PlayFabExperimentationCreateExclusionGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ExperimentationModels::CreateExperimentResult> CreateExperiment(const PlayFabExperimentationCreateExperimentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteExclusionGroup(const PlayFabExperimentationDeleteExclusionGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> DeleteExperiment(const PlayFabExperimentationDeleteExperimentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ExperimentationModels::GetExclusionGroupsResult> GetExclusionGroups(const PlayFabExperimentationGetExclusionGroupsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ExperimentationModels::GetExclusionGroupTrafficResult> GetExclusionGroupTraffic(const PlayFabExperimentationGetExclusionGroupTrafficRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ExperimentationModels::GetExperimentsResult> GetExperiments(const PlayFabExperimentationGetExperimentsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ExperimentationModels::GetLatestScorecardResult> GetLatestScorecard(const PlayFabExperimentationGetLatestScorecardRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ExperimentationModels::GetTreatmentAssignmentResult> GetTreatmentAssignment(const PlayFabExperimentationGetTreatmentAssignmentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> StartExperiment(const PlayFabExperimentationStartExperimentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> StopExperiment(const PlayFabExperimentationStopExperimentRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateExclusionGroup(const PlayFabExperimentationUpdateExclusionGroupRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> UpdateExperiment(const PlayFabExperimentationUpdateExperimentRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
