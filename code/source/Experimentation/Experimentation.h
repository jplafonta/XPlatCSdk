#pragma once

#include "ExperimentationDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class ExperimentationAPI
{
public:
    ExperimentationAPI() = delete;
    ExperimentationAPI(const ExperimentationAPI& source) = delete;
    ExperimentationAPI& operator=(const ExperimentationAPI& source) = delete;
    ~ExperimentationAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<ExperimentationModels::CreateExclusionGroupResult> CreateExclusionGroup(SharedPtr<Entity> entity, const PFExperimentationCreateExclusionGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<ExperimentationModels::CreateExperimentResult> CreateExperiment(SharedPtr<Entity> entity, const PFExperimentationCreateExperimentRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteExclusionGroup(SharedPtr<Entity> entity, const PFExperimentationDeleteExclusionGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<void> DeleteExperiment(SharedPtr<Entity> entity, const PFExperimentationDeleteExperimentRequest& request, const TaskQueue& queue);
    static AsyncOp<ExperimentationModels::GetExclusionGroupsResult> GetExclusionGroups(SharedPtr<Entity> entity, const PFExperimentationGetExclusionGroupsRequest& request, const TaskQueue& queue);
    static AsyncOp<ExperimentationModels::GetExclusionGroupTrafficResult> GetExclusionGroupTraffic(SharedPtr<Entity> entity, const PFExperimentationGetExclusionGroupTrafficRequest& request, const TaskQueue& queue);
    static AsyncOp<ExperimentationModels::GetExperimentsResult> GetExperiments(SharedPtr<Entity> entity, const PFExperimentationGetExperimentsRequest& request, const TaskQueue& queue);
    static AsyncOp<ExperimentationModels::GetLatestScorecardResult> GetLatestScorecard(SharedPtr<Entity> entity, const PFExperimentationGetLatestScorecardRequest& request, const TaskQueue& queue);
    static AsyncOp<ExperimentationModels::GetTreatmentAssignmentResult> GetTreatmentAssignment(SharedPtr<Entity> entity, const PFExperimentationGetTreatmentAssignmentRequest& request, const TaskQueue& queue);
    static AsyncOp<void> StartExperiment(SharedPtr<Entity> entity, const PFExperimentationStartExperimentRequest& request, const TaskQueue& queue);
    static AsyncOp<void> StopExperiment(SharedPtr<Entity> entity, const PFExperimentationStopExperimentRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UpdateExclusionGroup(SharedPtr<Entity> entity, const PFExperimentationUpdateExclusionGroupRequest& request, const TaskQueue& queue);
    static AsyncOp<void> UpdateExperiment(SharedPtr<Entity> entity, const PFExperimentationUpdateExperimentRequest& request, const TaskQueue& queue);
};

}
