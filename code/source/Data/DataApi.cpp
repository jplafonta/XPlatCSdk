#include "stdafx.h"
#include "DataApi.h"

namespace PlayFab
{

using namespace DataModels;

DataAPI::DataAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<DataModels::AbortFileUploadsResponse> DataAPI::AbortFileUploads(
    const PlayFabDataAbortFileUploadsRequest& request,
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
        "/File/AbortFileUploads",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AbortFileUploadsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AbortFileUploadsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AbortFileUploadsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<DataModels::DeleteFilesResponse> DataAPI::DeleteFiles(
    const PlayFabDataDeleteFilesRequest& request,
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
        "/File/DeleteFiles",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<DeleteFilesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            DeleteFilesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<DeleteFilesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<DataModels::FinalizeFileUploadsResponse> DataAPI::FinalizeFileUploads(
    const PlayFabDataFinalizeFileUploadsRequest& request,
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
        "/File/FinalizeFileUploads",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<FinalizeFileUploadsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            FinalizeFileUploadsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<FinalizeFileUploadsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<DataModels::GetFilesResponse> DataAPI::GetFiles(
    const PlayFabDataGetFilesRequest& request,
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
        "/File/GetFiles",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetFilesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetFilesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetFilesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<DataModels::GetObjectsResponse> DataAPI::GetObjects(
    const PlayFabDataGetObjectsRequest& request,
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
        "/Object/GetObjects",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetObjectsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetObjectsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetObjectsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<DataModels::InitiateFileUploadsResponse> DataAPI::InitiateFileUploads(
    const PlayFabDataInitiateFileUploadsRequest& request,
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
        "/File/InitiateFileUploads",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<InitiateFileUploadsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            InitiateFileUploadsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<InitiateFileUploadsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<DataModels::SetObjectsResponse> DataAPI::SetObjects(
    const PlayFabDataSetObjectsRequest& request,
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
        "/Object/SetObjects",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SetObjectsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            SetObjectsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<SetObjectsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
