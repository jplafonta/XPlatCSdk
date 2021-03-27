#pragma once

#if defined(ENABLE_PLAYFABSERVER_API)

#include <Matchmaker/MatchmakerDataModels.h>
#include <playfab/HttpClient.h>
#include <playfab/TaskQueue.h>

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
        void AuthUser(MatchmakerModels::AuthUserRequest& request, const TaskQueue& queue, const ProcessApiCallback<MatchmakerModels::AuthUserResponse> callback, const ErrorCallback errorCallback = nullptr);
        void PlayerJoined(MatchmakerModels::PlayerJoinedRequest& request, const TaskQueue& queue, const ProcessApiCallback<MatchmakerModels::PlayerJoinedResponse> callback, const ErrorCallback errorCallback = nullptr);
        void PlayerLeft(MatchmakerModels::PlayerLeftRequest& request, const TaskQueue& queue, const ProcessApiCallback<MatchmakerModels::PlayerLeftResponse> callback, const ErrorCallback errorCallback = nullptr);
        void StartGame(MatchmakerModels::StartGameRequest& request, const TaskQueue& queue, const ProcessApiCallback<MatchmakerModels::StartGameResponse> callback, const ErrorCallback errorCallback = nullptr);
        void UserInfo(MatchmakerModels::UserInfoRequest& request, const TaskQueue& queue, const ProcessApiCallback<MatchmakerModels::UserInfoResponse> callback, const ErrorCallback errorCallback = nullptr);
        static bool ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler);
    };
}

#endif
