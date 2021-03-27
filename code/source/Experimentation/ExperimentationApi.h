#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <Experimentation/ExperimentationDataModels.h>
#include <playfab/HttpClient.h>
#include <playfab/TaskQueue.h>

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
        void CreateExclusionGroup(ExperimentationModels::CreateExclusionGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::CreateExclusionGroupResult> callback, const ErrorCallback errorCallback = nullptr);
        void CreateExperiment(ExperimentationModels::CreateExperimentRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::CreateExperimentResult> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteExclusionGroup(ExperimentationModels::DeleteExclusionGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteExperiment(ExperimentationModels::DeleteExperimentRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetExclusionGroups(ExperimentationModels::GetExclusionGroupsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::GetExclusionGroupsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetExclusionGroupTraffic(ExperimentationModels::GetExclusionGroupTrafficRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::GetExclusionGroupTrafficResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetExperiments(ExperimentationModels::GetExperimentsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::GetExperimentsResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetLatestScorecard(ExperimentationModels::GetLatestScorecardRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::GetLatestScorecardResult> callback, const ErrorCallback errorCallback = nullptr);
        void GetTreatmentAssignment(ExperimentationModels::GetTreatmentAssignmentRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::GetTreatmentAssignmentResult> callback, const ErrorCallback errorCallback = nullptr);
        void StartExperiment(ExperimentationModels::StartExperimentRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void StopExperiment(ExperimentationModels::StopExperimentRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateExclusionGroup(ExperimentationModels::UpdateExclusionGroupRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UpdateExperiment(ExperimentationModels::UpdateExperimentRequest& request, const TaskQueue& queue, const ProcessApiCallback<ExperimentationModels::EmptyResponse> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
