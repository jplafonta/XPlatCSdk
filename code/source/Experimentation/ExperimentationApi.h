#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "ExperimentationDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Experimentation APIs
    /// </summary>
    class PlayFabExperimentationInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabExperimentationInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabExperimentationInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabExperimentationInstanceAPI() = default;
        PlayFabExperimentationInstanceAPI(const PlayFabExperimentationInstanceAPI& source) = delete; // disable copy
        PlayFabExperimentationInstanceAPI(PlayFabExperimentationInstanceAPI&&) = delete; // disable move
        PlayFabExperimentationInstanceAPI& operator=(const PlayFabExperimentationInstanceAPI& source) = delete; // disable assignment
        PlayFabExperimentationInstanceAPI& operator=(PlayFabExperimentationInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<ExperimentationModels::CreateExclusionGroupResult> CreateExclusionGroup(const PlayFabExperimentationCreateExclusionGroupRequest& request, const TaskQueue& queue);
        AsyncOp<ExperimentationModels::CreateExperimentResult> CreateExperiment(const PlayFabExperimentationCreateExperimentRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteExclusionGroup(const PlayFabExperimentationDeleteExclusionGroupRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> DeleteExperiment(const PlayFabExperimentationDeleteExperimentRequest& request, const TaskQueue& queue);
        AsyncOp<ExperimentationModels::GetExclusionGroupsResult> GetExclusionGroups(const PlayFabExperimentationGetExclusionGroupsRequest& request, const TaskQueue& queue);
        AsyncOp<ExperimentationModels::GetExclusionGroupTrafficResult> GetExclusionGroupTraffic(const PlayFabExperimentationGetExclusionGroupTrafficRequest& request, const TaskQueue& queue);
        AsyncOp<ExperimentationModels::GetExperimentsResult> GetExperiments(const PlayFabExperimentationGetExperimentsRequest& request, const TaskQueue& queue);
        AsyncOp<ExperimentationModels::GetLatestScorecardResult> GetLatestScorecard(const PlayFabExperimentationGetLatestScorecardRequest& request, const TaskQueue& queue);
        AsyncOp<ExperimentationModels::GetTreatmentAssignmentResult> GetTreatmentAssignment(const PlayFabExperimentationGetTreatmentAssignmentRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> StartExperiment(const PlayFabExperimentationStartExperimentRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> StopExperiment(const PlayFabExperimentationStopExperimentRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateExclusionGroup(const PlayFabExperimentationUpdateExclusionGroupRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> UpdateExperiment(const PlayFabExperimentationUpdateExperimentRequest& request, const TaskQueue& queue);

    };
}

#endif
