#pragma once

#include "ExperimentationDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class ExperimentationAPI
{
public:
    ExperimentationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    ExperimentationAPI(const ExperimentationAPI& source) = delete;
    ExperimentationAPI& operator=(const ExperimentationAPI& source) = delete;
    ~ExperimentationAPI() = default;

    // ------------ Generated API calls
    AsyncOp<ExperimentationModels::CreateExclusionGroupResult> CreateExclusionGroup(const PFExperimentationCreateExclusionGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<ExperimentationModels::CreateExperimentResult> CreateExperiment(const PFExperimentationCreateExperimentRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteExclusionGroup(const PFExperimentationDeleteExclusionGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> DeleteExperiment(const PFExperimentationDeleteExperimentRequest& request, const TaskQueue& queue) const;
    AsyncOp<ExperimentationModels::GetExclusionGroupsResult> GetExclusionGroups(const PFExperimentationGetExclusionGroupsRequest& request, const TaskQueue& queue) const;
    AsyncOp<ExperimentationModels::GetExclusionGroupTrafficResult> GetExclusionGroupTraffic(const PFExperimentationGetExclusionGroupTrafficRequest& request, const TaskQueue& queue) const;
    AsyncOp<ExperimentationModels::GetExperimentsResult> GetExperiments(const PFExperimentationGetExperimentsRequest& request, const TaskQueue& queue) const;
    AsyncOp<ExperimentationModels::GetLatestScorecardResult> GetLatestScorecard(const PFExperimentationGetLatestScorecardRequest& request, const TaskQueue& queue) const;
    AsyncOp<ExperimentationModels::GetTreatmentAssignmentResult> GetTreatmentAssignment(const PFExperimentationGetTreatmentAssignmentRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> StartExperiment(const PFExperimentationStartExperimentRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> StopExperiment(const PFExperimentationStopExperimentRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UpdateExclusionGroup(const PFExperimentationUpdateExclusionGroupRequest& request, const TaskQueue& queue) const;
    AsyncOp<void> UpdateExperiment(const PFExperimentationUpdateExperimentRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
