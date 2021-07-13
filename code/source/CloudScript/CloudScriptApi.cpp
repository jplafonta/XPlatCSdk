#include "stdafx.h"
#include "CloudScriptApi.h"

namespace PlayFab
{

using namespace CloudScriptModels;

CloudScriptAPI::CloudScriptAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<CloudScriptModels::ExecuteCloudScriptResult> CloudScriptAPI::ExecuteEntityCloudScript(
    const PlayFabCloudScriptExecuteEntityCloudScriptRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/ExecuteEntityCloudScript",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ExecuteCloudScriptResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ExecuteCloudScriptResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ExecuteCloudScriptResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CloudScriptModels::ExecuteFunctionResult> CloudScriptAPI::ExecuteFunction(
    const PlayFabCloudScriptExecuteFunctionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/ExecuteFunction",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ExecuteFunctionResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ExecuteFunctionResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ExecuteFunctionResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CloudScriptModels::ListFunctionsResult> CloudScriptAPI::ListFunctions(
    const PlayFabCloudScriptListFunctionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/ListFunctions",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListFunctionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListFunctionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListFunctionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CloudScriptModels::ListHttpFunctionsResult> CloudScriptAPI::ListHttpFunctions(
    const PlayFabCloudScriptListFunctionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/ListHttpFunctions",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListHttpFunctionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListHttpFunctionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListHttpFunctionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CloudScriptModels::ListQueuedFunctionsResult> CloudScriptAPI::ListQueuedFunctions(
    const PlayFabCloudScriptListFunctionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/ListQueuedFunctions",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListQueuedFunctionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListQueuedFunctionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListQueuedFunctionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> CloudScriptAPI::PostFunctionResultForEntityTriggeredAction(
    const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/PostFunctionResultForEntityTriggeredAction",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> CloudScriptAPI::PostFunctionResultForFunctionExecution(
    const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/PostFunctionResultForFunctionExecution",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> CloudScriptAPI::PostFunctionResultForPlayerTriggeredAction(
    const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/PostFunctionResultForPlayerTriggeredAction",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> CloudScriptAPI::PostFunctionResultForScheduledTask(
    const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/PostFunctionResultForScheduledTask",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> CloudScriptAPI::RegisterHttpFunction(
    const PlayFabCloudScriptRegisterHttpFunctionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/RegisterHttpFunction",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> CloudScriptAPI::RegisterQueuedFunction(
    const PlayFabCloudScriptRegisterQueuedFunctionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/RegisterQueuedFunction",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> CloudScriptAPI::UnregisterFunction(
    const PlayFabCloudScriptUnregisterFunctionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PLAYFAB_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    return m_httpClient->MakePostRequest(
        "/CloudScript/UnregisterFunction",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
