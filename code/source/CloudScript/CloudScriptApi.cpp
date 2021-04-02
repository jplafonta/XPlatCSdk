#include "stdafx.h"

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "CloudScriptApi.h"
#include "PlayFabSettings.h"

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace CloudScriptModels;

    PlayFabCloudScriptInstanceAPI::PlayFabCloudScriptInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    PlayFabCloudScriptInstanceAPI::PlayFabCloudScriptInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    SharedPtr<PlayFabApiSettings> PlayFabCloudScriptInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabCloudScriptInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabCloudScriptInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabCloudScript instance APIs

    void PlayFabCloudScriptInstanceAPI::ExecuteEntityCloudScript(
        ExecuteEntityCloudScriptRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ExecuteCloudScriptResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ExecuteCloudScriptResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/CloudScript/ExecuteEntityCloudScript",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::ExecuteFunction(
        ExecuteFunctionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ExecuteFunctionResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ExecuteFunctionResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/CloudScript/ExecuteFunction",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::ListFunctions(
        ListFunctionsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListFunctionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListFunctionsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/CloudScript/ListFunctions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::ListHttpFunctions(
        ListFunctionsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListHttpFunctionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListHttpFunctionsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/CloudScript/ListHttpFunctions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::ListQueuedFunctions(
        ListFunctionsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListQueuedFunctionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListQueuedFunctionsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/CloudScript/ListQueuedFunctions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::PostFunctionResultForEntityTriggeredAction(
        PostFunctionResultForEntityTriggeredActionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

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
            "/CloudScript/PostFunctionResultForEntityTriggeredAction",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::PostFunctionResultForFunctionExecution(
        PostFunctionResultForFunctionExecutionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

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
            "/CloudScript/PostFunctionResultForFunctionExecution",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::PostFunctionResultForPlayerTriggeredAction(
        PostFunctionResultForPlayerTriggeredActionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

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
            "/CloudScript/PostFunctionResultForPlayerTriggeredAction",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::PostFunctionResultForScheduledTask(
        PostFunctionResultForScheduledTaskRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

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
            "/CloudScript/PostFunctionResultForScheduledTask",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::RegisterHttpFunction(
        RegisterHttpFunctionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

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
            "/CloudScript/RegisterHttpFunction",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::RegisterQueuedFunction(
        RegisterQueuedFunctionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

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
            "/CloudScript/RegisterQueuedFunction",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabCloudScriptInstanceAPI::UnregisterFunction(
        UnregisterFunctionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

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
            "/CloudScript/UnregisterFunction",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabCloudScriptInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
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
