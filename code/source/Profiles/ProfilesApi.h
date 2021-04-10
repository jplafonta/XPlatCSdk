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
        AsyncOp<ProfilesModels::GetGlobalPolicyResponse> GetGlobalPolicy(const PlayFabProfilesGetGlobalPolicyRequest& request, const TaskQueue& queue);
        AsyncOp<ProfilesModels::GetEntityProfileResponse> GetProfile(const PlayFabProfilesGetEntityProfileRequest& request, const TaskQueue& queue);
        AsyncOp<ProfilesModels::GetEntityProfilesResponse> GetProfiles(const PlayFabProfilesGetEntityProfilesRequest& request, const TaskQueue& queue);
        AsyncOp<ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse> GetTitlePlayersFromMasterPlayerAccountIds(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> SetGlobalPolicy(const PlayFabProfilesSetGlobalPolicyRequest& request, const TaskQueue& queue);
        AsyncOp<ProfilesModels::SetProfileLanguageResponse> SetProfileLanguage(const PlayFabProfilesSetProfileLanguageRequest& request, const TaskQueue& queue);
        AsyncOp<ProfilesModels::SetEntityProfilePolicyResponse> SetProfilePolicy(const PlayFabProfilesSetEntityProfilePolicyRequest& request, const TaskQueue& queue);

    };
}

#endif
