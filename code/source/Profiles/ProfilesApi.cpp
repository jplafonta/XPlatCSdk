#include <stdafx.h>

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <Profiles/ProfilesApi.h>
#include <playfab/PlayFabSettings.h>

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace ProfilesModels;

    PlayFabProfilesInstanceAPI::PlayFabProfilesInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    PlayFabProfilesInstanceAPI::PlayFabProfilesInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    SharedPtr<PlayFabApiSettings> PlayFabProfilesInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabProfilesInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabProfilesInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabProfiles instance APIs

    void PlayFabProfilesInstanceAPI::GetGlobalPolicy(
        GetGlobalPolicyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetGlobalPolicyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetGlobalPolicyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Profile/GetGlobalPolicy",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabProfilesInstanceAPI::GetProfile(
        GetEntityProfileRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetEntityProfileResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetEntityProfileResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Profile/GetProfile",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabProfilesInstanceAPI::GetProfiles(
        GetEntityProfilesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetEntityProfilesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetEntityProfilesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Profile/GetProfiles",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabProfilesInstanceAPI::GetTitlePlayersFromMasterPlayerAccountIds(
        GetTitlePlayersFromMasterPlayerAccountIdsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitlePlayersFromMasterPlayerAccountIdsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitlePlayersFromMasterPlayerAccountIdsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Profile/GetTitlePlayersFromMasterPlayerAccountIds",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabProfilesInstanceAPI::SetGlobalPolicy(
        SetGlobalPolicyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetGlobalPolicyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetGlobalPolicyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Profile/SetGlobalPolicy",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabProfilesInstanceAPI::SetProfileLanguage(
        SetProfileLanguageRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetProfileLanguageResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetProfileLanguageResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Profile/SetProfileLanguage",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabProfilesInstanceAPI::SetProfilePolicy(
        SetEntityProfilePolicyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetEntityProfilePolicyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetEntityProfilePolicyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Profile/SetProfilePolicy",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabProfilesInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
    {
        if (httpResult.serviceResponse.HttpCode == 200)
        {
            result.FromJson(httpResult.serviceResponse.Data);
            JsonUtils::FromJson(httpResult.requestBody, result.Request);
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
