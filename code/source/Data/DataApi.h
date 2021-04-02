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
        void AbortFileUploads(DataModels::AbortFileUploadsRequest& request, const TaskQueue& queue, const ProcessApiCallback<DataModels::AbortFileUploadsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void DeleteFiles(DataModels::DeleteFilesRequest& request, const TaskQueue& queue, const ProcessApiCallback<DataModels::DeleteFilesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void FinalizeFileUploads(DataModels::FinalizeFileUploadsRequest& request, const TaskQueue& queue, const ProcessApiCallback<DataModels::FinalizeFileUploadsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetFiles(DataModels::GetFilesRequest& request, const TaskQueue& queue, const ProcessApiCallback<DataModels::GetFilesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetObjects(DataModels::GetObjectsRequest& request, const TaskQueue& queue, const ProcessApiCallback<DataModels::GetObjectsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void InitiateFileUploads(DataModels::InitiateFileUploadsRequest& request, const TaskQueue& queue, const ProcessApiCallback<DataModels::InitiateFileUploadsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void SetObjects(DataModels::SetObjectsRequest& request, const TaskQueue& queue, const ProcessApiCallback<DataModels::SetObjectsResponse> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
