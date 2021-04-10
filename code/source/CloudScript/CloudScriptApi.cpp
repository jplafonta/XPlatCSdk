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
        // TODO
        /* if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        } */
    }

    PlayFabCloudScriptInstanceAPI::PlayFabCloudScriptInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
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

    AsyncOp<ExecuteCloudScriptResult> PlayFabCloudScriptInstanceAPI::ExecuteEntityCloudScript(
        const PlayFabCloudScriptExecuteEntityCloudScriptRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/ExecuteEntityCloudScript",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ExecuteCloudScriptResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ExecuteCloudScriptResult resultModel;
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

    AsyncOp<ExecuteFunctionResult> PlayFabCloudScriptInstanceAPI::ExecuteFunction(
        const PlayFabCloudScriptExecuteFunctionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/ExecuteFunction",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ExecuteFunctionResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ExecuteFunctionResult resultModel;
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

    AsyncOp<ListFunctionsResult> PlayFabCloudScriptInstanceAPI::ListFunctions(
        const PlayFabCloudScriptListFunctionsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/ListFunctions",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListFunctionsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListFunctionsResult resultModel;
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

    AsyncOp<ListHttpFunctionsResult> PlayFabCloudScriptInstanceAPI::ListHttpFunctions(
        const PlayFabCloudScriptListFunctionsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/ListHttpFunctions",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListHttpFunctionsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListHttpFunctionsResult resultModel;
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

    AsyncOp<ListQueuedFunctionsResult> PlayFabCloudScriptInstanceAPI::ListQueuedFunctions(
        const PlayFabCloudScriptListFunctionsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/ListQueuedFunctions",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListQueuedFunctionsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListQueuedFunctionsResult resultModel;
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

    AsyncOp<BaseResult> PlayFabCloudScriptInstanceAPI::PostFunctionResultForEntityTriggeredAction(
        const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/PostFunctionResultForEntityTriggeredAction",
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

    AsyncOp<BaseResult> PlayFabCloudScriptInstanceAPI::PostFunctionResultForFunctionExecution(
        const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/PostFunctionResultForFunctionExecution",
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

    AsyncOp<BaseResult> PlayFabCloudScriptInstanceAPI::PostFunctionResultForPlayerTriggeredAction(
        const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/PostFunctionResultForPlayerTriggeredAction",
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

    AsyncOp<BaseResult> PlayFabCloudScriptInstanceAPI::PostFunctionResultForScheduledTask(
        const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/PostFunctionResultForScheduledTask",
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

    AsyncOp<BaseResult> PlayFabCloudScriptInstanceAPI::RegisterHttpFunction(
        const PlayFabCloudScriptRegisterHttpFunctionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/RegisterHttpFunction",
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

    AsyncOp<BaseResult> PlayFabCloudScriptInstanceAPI::RegisterQueuedFunction(
        const PlayFabCloudScriptRegisterQueuedFunctionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/RegisterQueuedFunction",
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

    AsyncOp<BaseResult> PlayFabCloudScriptInstanceAPI::UnregisterFunction(
        const PlayFabCloudScriptUnregisterFunctionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/CloudScript/UnregisterFunction",
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

}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
