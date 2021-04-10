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
        // TODO
        /* if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        } */
    }

    PlayFabMatchmakerInstanceAPI::PlayFabMatchmakerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        // TODO
        /*if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }*/
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

    AsyncOp<AuthUserResponse> PlayFabMatchmakerInstanceAPI::AuthUser(
        const PlayFabMatchmakerAuthUserRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        return m_httpClient.MakePostRequest(
            "/Matchmaker/AuthUser",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<AuthUserResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                AuthUserResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMatchmakerInstanceAPI::PlayerJoined(
        const PlayFabMatchmakerPlayerJoinedRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        return m_httpClient.MakePostRequest(
            "/Matchmaker/PlayerJoined",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMatchmakerInstanceAPI::PlayerLeft(
        const PlayFabMatchmakerPlayerLeftRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        return m_httpClient.MakePostRequest(
            "/Matchmaker/PlayerLeft",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<StartGameResponse> PlayFabMatchmakerInstanceAPI::StartGame(
        const PlayFabMatchmakerStartGameRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        return m_httpClient.MakePostRequest(
            "/Matchmaker/StartGame",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<StartGameResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                StartGameResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<UserInfoResponse> PlayFabMatchmakerInstanceAPI::UserInfo(
        const PlayFabMatchmakerUserInfoRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        return m_httpClient.MakePostRequest(
            "/Matchmaker/UserInfo",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<UserInfoResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                UserInfoResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
