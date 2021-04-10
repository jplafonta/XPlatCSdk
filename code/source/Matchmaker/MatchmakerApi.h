#pragma once

#if defined(ENABLE_PLAYFABSERVER_API)

#include "MatchmakerDataModels.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{
    class CallRequestContainerBase;
    class CallRequestContainer;
    class PlayFabApiSettings;
    class PlayFabAuthenticationContext;

    /// <summary>
    /// Main interface for PlayFab Sdk, specifically all Matchmaker APIs
    /// </summary>
    class PlayFabMatchmakerInstanceAPI
    {
    private:
        SharedPtr<PlayFabApiSettings> m_settings;
        SharedPtr<PlayFabAuthenticationContext> m_context;
        HttpClient const m_httpClient;

    public:
        PlayFabMatchmakerInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);
        PlayFabMatchmakerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext);

        ~PlayFabMatchmakerInstanceAPI() = default;
        PlayFabMatchmakerInstanceAPI(const PlayFabMatchmakerInstanceAPI& source) = delete; // disable copy
        PlayFabMatchmakerInstanceAPI(PlayFabMatchmakerInstanceAPI&&) = delete; // disable move
        PlayFabMatchmakerInstanceAPI& operator=(const PlayFabMatchmakerInstanceAPI& source) = delete; // disable assignment
        PlayFabMatchmakerInstanceAPI& operator=(PlayFabMatchmakerInstanceAPI&& other) = delete; // disable move assignment

        SharedPtr<PlayFabApiSettings> GetSettings() const;
        SharedPtr<PlayFabAuthenticationContext> GetAuthenticationContext() const;
        void ForgetAllCredentials();

        // ------------ Generated API calls
        AsyncOp<MatchmakerModels::AuthUserResponse> AuthUser(const PlayFabMatchmakerAuthUserRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> PlayerJoined(const PlayFabMatchmakerPlayerJoinedRequest& request, const TaskQueue& queue);
        AsyncOp<BaseResult> PlayerLeft(const PlayFabMatchmakerPlayerLeftRequest& request, const TaskQueue& queue);
        AsyncOp<MatchmakerModels::StartGameResponse> StartGame(const PlayFabMatchmakerStartGameRequest& request, const TaskQueue& queue);
        AsyncOp<MatchmakerModels::UserInfoResponse> UserInfo(const PlayFabMatchmakerUserInfoRequest& request, const TaskQueue& queue);

    };
}

#endif
