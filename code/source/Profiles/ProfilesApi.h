#pragma once

#include "ProfilesDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
struct AuthTokens;

class ProfilesAPI
{
public:
    ProfilesAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    ProfilesAPI(const ProfilesAPI& source) = delete;
    ProfilesAPI& operator=(const ProfilesAPI& source) = delete;
    ~ProfilesAPI() = default;

    // ------------ Generated API calls
    AsyncOp<ProfilesModels::GetGlobalPolicyResponse> GetGlobalPolicy(const PlayFabProfilesGetGlobalPolicyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ProfilesModels::GetEntityProfileResponse> GetProfile(const PlayFabProfilesGetEntityProfileRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ProfilesModels::GetEntityProfilesResponse> GetProfiles(const PlayFabProfilesGetEntityProfilesRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsResponse> GetTitlePlayersFromMasterPlayerAccountIds(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& request, const TaskQueue& queue) const; 
    AsyncOp<void> SetGlobalPolicy(const PlayFabProfilesSetGlobalPolicyRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ProfilesModels::SetProfileLanguageResponse> SetProfileLanguage(const PlayFabProfilesSetProfileLanguageRequest& request, const TaskQueue& queue) const; 
    AsyncOp<ProfilesModels::SetEntityProfilePolicyResponse> SetProfilePolicy(const PlayFabProfilesSetEntityProfilePolicyRequest& request, const TaskQueue& queue) const; 

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
