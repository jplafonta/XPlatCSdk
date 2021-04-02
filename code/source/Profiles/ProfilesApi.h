#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "ProfilesDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Profiles APIs
    /// </summary>
    class PlayFabProfilesInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabProfilesInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabProfilesInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabProfilesInstanceAPI() = default;
        PlayFabProfilesInstanceAPI(const PlayFabProfilesInstanceAPI& source) = delete; // disable copy
        PlayFabProfilesInstanceAPI(PlayFabProfilesInstanceAPI&&) = delete; // disable move
        PlayFabProfilesInstanceAPI& operator=(const PlayFabProfilesInstanceAPI& source) = delete; // disable assignment
        PlayFabProfilesInstanceAPI& operator=(PlayFabProfilesInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        void GetGlobalPolicy(ProfilesModels::GetGlobalPolicyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ProfilesModels::GetGlobalPolicyResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetProfile(ProfilesModels::GetEntityProfileRequest& request, const TaskQueue& queue, const ProcessApiCallback<ProfilesModels::GetEntityProfileResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetProfiles(ProfilesModels::GetEntityProfilesRequest& request, const TaskQueue& queue, const ProcessApiCallback<ProfilesModels::GetEntityProfilesResponse> callback, const ErrorCallback errorCallback = nullptr);
        void GetTitlePlayersFromMasterPlayerAccountIds(ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest& request, const TaskQueue& queue, const ProcessApiCallback<ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse> callback, const ErrorCallback errorCallback = nullptr);
        void SetGlobalPolicy(ProfilesModels::SetGlobalPolicyRequest& request, const TaskQueue& queue, const ProcessApiCallback<PlayFab::BaseResult> callback, const ErrorCallback errorCallback = nullptr);
        void SetProfileLanguage(ProfilesModels::SetProfileLanguageRequest& request, const TaskQueue& queue, const ProcessApiCallback<ProfilesModels::SetProfileLanguageResponse> callback, const ErrorCallback errorCallback = nullptr);
        void SetProfilePolicy(ProfilesModels::SetEntityProfilePolicyRequest& request, const TaskQueue& queue, const ProcessApiCallback<ProfilesModels::SetEntityProfilePolicyResponse> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
