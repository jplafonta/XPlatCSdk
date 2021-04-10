#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "AuthenticationDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Authentication APIs
    /// </summary>
    class PlayFabAuthenticationInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabAuthenticationInstanceAPI();
        PlayFabAuthenticationInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings);
        PlayFabAuthenticationInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabAuthenticationInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabAuthenticationInstanceAPI() = default;
        PlayFabAuthenticationInstanceAPI(const PlayFabAuthenticationInstanceAPI& source) = delete; // disable copy
        PlayFabAuthenticationInstanceAPI(PlayFabAuthenticationInstanceAPI&&) = delete; // disable move
        PlayFabAuthenticationInstanceAPI& operator=(const PlayFabAuthenticationInstanceAPI& source) = delete; // disable assignment
        PlayFabAuthenticationInstanceAPI& operator=(PlayFabAuthenticationInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<AuthenticationModels::GetEntityTokenResponse> GetEntityToken(const PlayFabAuthenticationGetEntityTokenRequest& request, const TaskQueue& queue);
        AsyncOp<AuthenticationModels::ValidateEntityTokenResponse> ValidateEntityToken(const PlayFabAuthenticationValidateEntityTokenRequest& request, const TaskQueue& queue);

    };
}

#endif
