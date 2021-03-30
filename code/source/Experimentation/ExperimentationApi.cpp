#include <stdafx.h>

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <Experimentation/ExperimentationApi.h>
#include <playfab/PlayFabSettings.h>

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace ExperimentationModels;

    PlayFabExperimentationInstanceAPI::PlayFabExperimentationInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    PlayFabExperimentationInstanceAPI::PlayFabExperimentationInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    SharedPtr<PlayFabApiSettings> PlayFabExperimentationInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabExperimentationInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabExperimentationInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabExperimentation instance APIs

    void PlayFabExperimentationInstanceAPI::CreateExclusionGroup(
        CreateExclusionGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateExclusionGroupResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateExclusionGroupResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/CreateExclusionGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::CreateExperiment(
        CreateExperimentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateExperimentResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateExperimentResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/CreateExperiment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::DeleteExclusionGroup(
        DeleteExclusionGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/DeleteExclusionGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::DeleteExperiment(
        DeleteExperimentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/DeleteExperiment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::GetExclusionGroups(
        GetExclusionGroupsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetExclusionGroupsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetExclusionGroupsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/GetExclusionGroups",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::GetExclusionGroupTraffic(
        GetExclusionGroupTrafficRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetExclusionGroupTrafficResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetExclusionGroupTrafficResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/GetExclusionGroupTraffic",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::GetExperiments(
        GetExperimentsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetExperimentsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetExperimentsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/GetExperiments",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::GetLatestScorecard(
        GetLatestScorecardRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLatestScorecardResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetLatestScorecardResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/GetLatestScorecard",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::GetTreatmentAssignment(
        GetTreatmentAssignmentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTreatmentAssignmentResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTreatmentAssignmentResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/GetTreatmentAssignment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::StartExperiment(
        StartExperimentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/StartExperiment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::StopExperiment(
        StopExperimentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/StopExperiment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::UpdateExclusionGroup(
        UpdateExclusionGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/UpdateExclusionGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabExperimentationInstanceAPI::UpdateExperiment(
        UpdateExperimentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Experimentation/UpdateExperiment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabExperimentationInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
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
