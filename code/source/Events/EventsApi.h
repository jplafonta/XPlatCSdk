#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "EventsDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Events APIs
    /// </summary>
    class PlayFabEventsInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabEventsInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabEventsInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabEventsInstanceAPI() = default;
        PlayFabEventsInstanceAPI(const PlayFabEventsInstanceAPI& source) = delete; // disable copy
        PlayFabEventsInstanceAPI(PlayFabEventsInstanceAPI&&) = delete; // disable move
        PlayFabEventsInstanceAPI& operator=(const PlayFabEventsInstanceAPI& source) = delete; // disable assignment
        PlayFabEventsInstanceAPI& operator=(PlayFabEventsInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<EventsModels::WriteEventsResponse> WriteEvents(const PlayFabEventsWriteEventsRequest& request, const TaskQueue& queue);
        AsyncOp<EventsModels::WriteEventsResponse> WriteTelemetryEvents(const PlayFabEventsWriteEventsRequest& request, const TaskQueue& queue);

    };
}

#endif
