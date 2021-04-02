#include "stdafx.h"

#if defined(ENABLE_PLAYFABSERVER_API)

#include "MatchmakerApi.h"
#include "PlayFabSettings.h"

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace MatchmakerModels;

    PlayFabMatchmakerInstanceAPI::PlayFabMatchmakerInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    PlayFabMatchmakerInstanceAPI::PlayFabMatchmakerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    SharedPtr<PlayFabApiSettings> PlayFabMatchmakerInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabMatchmakerInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabMatchmakerInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabMatchmaker instance APIs

    void PlayFabMatchmakerInstanceAPI::AuthUser(
        AuthUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AuthUserResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AuthUserResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Matchmaker/AuthUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMatchmakerInstanceAPI::PlayerJoined(
        PlayerJoinedRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Matchmaker/PlayerJoined",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMatchmakerInstanceAPI::PlayerLeft(
        PlayerLeftRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Matchmaker/PlayerLeft",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMatchmakerInstanceAPI::StartGame(
        StartGameRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<StartGameResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            StartGameResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Matchmaker/StartGame",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMatchmakerInstanceAPI::UserInfo(
        UserInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UserInfoResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UserInfoResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Matchmaker/UserInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabMatchmakerInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
    {
        if (httpResult.serviceResponse.HttpCode == 200)
        {
            result.FromJson(httpResult.serviceResponse.Data);
            return true;
        }
        else // Process the error case
        {
            if (PlayFabSettings::globalErrorHandler != nullptr)
            {
                PlayFabSettings::globalErrorHandler(httpResult.serviceResponse);
            }
            if (errorHandler)
            {
                errorHandler(httpResult.serviceResponse);
            }
            return false;
        }
    }
}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
