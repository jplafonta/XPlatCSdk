#include "stdafx.h"
#include "ScheduledTask.h"

namespace PlayFab
{

using namespace ScheduledTaskModels;

ScheduledTaskAPI::ScheduledTaskAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<void> ScheduledTaskAPI::AdminAbortTaskInstance(
    const PFScheduledTaskAbortTaskInstanceRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/AbortTaskInstance" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<CreateTaskResult> ScheduledTaskAPI::AdminCreateActionsOnPlayersInSegmentTask(
    const PFScheduledTaskCreateActionsOnPlayerSegmentTaskRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/CreateActionsOnPlayersInSegmentTask" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateTaskResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateTaskResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateTaskResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateTaskResult> ScheduledTaskAPI::AdminCreateCloudScriptTask(
    const PFScheduledTaskCreateCloudScriptTaskRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/CreateCloudScriptTask" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateTaskResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateTaskResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateTaskResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateTaskResult> ScheduledTaskAPI::AdminCreateInsightsScheduledScalingTask(
    const PFScheduledTaskCreateInsightsScheduledScalingTaskRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/CreateInsightsScheduledScalingTask" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateTaskResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateTaskResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateTaskResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ScheduledTaskAPI::AdminDeleteTask(
    const PFScheduledTaskDeleteTaskRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/DeleteTask" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<GetActionsOnPlayersInSegmentTaskInstanceResult> ScheduledTaskAPI::AdminGetActionsOnPlayersInSegmentTaskInstance(
    const PFScheduledTaskGetTaskInstanceRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GetActionsOnPlayersInSegmentTaskInstance" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetActionsOnPlayersInSegmentTaskInstanceResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetActionsOnPlayersInSegmentTaskInstanceResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetActionsOnPlayersInSegmentTaskInstanceResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetCloudScriptTaskInstanceResult> ScheduledTaskAPI::AdminGetCloudScriptTaskInstance(
    const PFScheduledTaskGetTaskInstanceRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GetCloudScriptTaskInstance" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetCloudScriptTaskInstanceResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCloudScriptTaskInstanceResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCloudScriptTaskInstanceResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetTaskInstancesResult> ScheduledTaskAPI::AdminGetTaskInstances(
    const PFScheduledTaskGetTaskInstancesRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GetTaskInstances" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetTaskInstancesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTaskInstancesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTaskInstancesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetTasksResult> ScheduledTaskAPI::AdminGetTasks(
    const PFScheduledTaskGetTasksRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GetTasks" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetTasksResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTasksResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTasksResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<RunTaskResult> ScheduledTaskAPI::AdminRunTask(
    const PFScheduledTaskRunTaskRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/RunTask" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RunTaskResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RunTaskResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RunTaskResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ScheduledTaskAPI::AdminUpdateTask(
    const PFScheduledTaskUpdateTaskRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/UpdateTask" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
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
