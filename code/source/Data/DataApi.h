#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "DataDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Data APIs
    /// </summary>
    class PlayFabDataInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabDataInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabDataInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabDataInstanceAPI() = default;
        PlayFabDataInstanceAPI(const PlayFabDataInstanceAPI& source) = delete; // disable copy
        PlayFabDataInstanceAPI(PlayFabDataInstanceAPI&&) = delete; // disable move
        PlayFabDataInstanceAPI& operator=(const PlayFabDataInstanceAPI& source) = delete; // disable assignment
        PlayFabDataInstanceAPI& operator=(PlayFabDataInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<DataModels::AbortFileUploadsResponse> AbortFileUploads(const PlayFabDataAbortFileUploadsRequest& request, const TaskQueue& queue);
        AsyncOp<DataModels::DeleteFilesResponse> DeleteFiles(const PlayFabDataDeleteFilesRequest& request, const TaskQueue& queue);
        AsyncOp<DataModels::FinalizeFileUploadsResponse> FinalizeFileUploads(const PlayFabDataFinalizeFileUploadsRequest& request, const TaskQueue& queue);
        AsyncOp<DataModels::GetFilesResponse> GetFiles(const PlayFabDataGetFilesRequest& request, const TaskQueue& queue);
        AsyncOp<DataModels::GetObjectsResponse> GetObjects(const PlayFabDataGetObjectsRequest& request, const TaskQueue& queue);
        AsyncOp<DataModels::InitiateFileUploadsResponse> InitiateFileUploads(const PlayFabDataInitiateFileUploadsRequest& request, const TaskQueue& queue);
        AsyncOp<DataModels::SetObjectsResponse> SetObjects(const PlayFabDataSetObjectsRequest& request, const TaskQueue& queue);

    };
}

#endif
