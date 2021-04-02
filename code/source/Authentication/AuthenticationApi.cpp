#include "stdafx.h"

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "AuthenticationApi.h"
#include "PlayFabSettings.h"

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace AuthenticationModels;

    PlayFabAuthenticationInstanceAPI::PlayFabAuthenticationInstanceAPI() :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(MakeShared<PlayFabAuthenticationContext>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabAuthenticationInstanceAPI::PlayFabAuthenticationInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings) :
        m_settings(apiSettings),
        m_context(MakeShared<PlayFabAuthenticationContext>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabAuthenticationInstanceAPI::PlayFabAuthenticationInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    PlayFabAuthenticationInstanceAPI::PlayFabAuthenticationInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    SharedPtr<PlayFabApiSettings> PlayFabAuthenticationInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabAuthenticationInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabAuthenticationInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabAuthentication instance APIs

    void PlayFabAuthenticationInstanceAPI::GetEntityToken(
        GetEntityTokenRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetEntityTokenResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        String authKey, authValue;
        if (m_context->entityToken.length() > 0)
        {
            authKey = "X-EntityToken"; authValue = m_context->entityToken.data();
        }
        else if (m_context->clientSessionTicket.length() > 0)
        {
            authKey = "X-Authorization"; authValue = m_context->clientSessionTicket.data();
        }
#if defined(ENABLE_PLAYFABSERVER_API) || defined(ENABLE_PLAYFABADMIN_API)
        else if (m_settings->developerSecretKey.length() > 0)
        {
            authKey = "X-SecretKey"; authValue = m_settings->developerSecretKey.data();
        }
#endif
        UnorderedMap<String, String> headers;
        headers.emplace(authKey, authValue);

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetEntityTokenResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                context->HandlePlayFabLogin("", "", outResult.entity->id, outResult.entity->type, outResult.entityToken);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Authentication/GetEntityToken",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAuthenticationInstanceAPI::ValidateEntityToken(
        ValidateEntityTokenRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ValidateEntityTokenResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ValidateEntityTokenResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Authentication/ValidateEntityToken",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabAuthenticationInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
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
