#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "LocalizationDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Localization APIs
    /// </summary>
    class PlayFabLocalizationInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabLocalizationInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabLocalizationInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabLocalizationInstanceAPI() = default;
        PlayFabLocalizationInstanceAPI(const PlayFabLocalizationInstanceAPI& source) = delete; // disable copy
        PlayFabLocalizationInstanceAPI(PlayFabLocalizationInstanceAPI&&) = delete; // disable move
        PlayFabLocalizationInstanceAPI& operator=(const PlayFabLocalizationInstanceAPI& source) = delete; // disable assignment
        PlayFabLocalizationInstanceAPI& operator=(PlayFabLocalizationInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<LocalizationModels::GetLanguageListResponse> GetLanguageList(const PlayFabLocalizationGetLanguageListRequest& request, const TaskQueue& queue);

    };
}

#endif
