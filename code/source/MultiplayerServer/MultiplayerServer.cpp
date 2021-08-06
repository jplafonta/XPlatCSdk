#include "stdafx.h"
#include "MultiplayerServer.h"

namespace PlayFab
{

using namespace MultiplayerServerModels;

MultiplayerServerAPI::MultiplayerServerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<BuildAliasDetailsResponse> MultiplayerServerAPI::CreateBuildAlias(
    const PFMultiplayerServerCreateBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/CreateBuildAlias" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            BuildAliasDetailsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<BuildAliasDetailsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateBuildWithCustomContainerResponse> MultiplayerServerAPI::CreateBuildWithCustomContainer(
    const PFMultiplayerServerCreateBuildWithCustomContainerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/CreateBuildWithCustomContainer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateBuildWithCustomContainerResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateBuildWithCustomContainerResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateBuildWithCustomContainerResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateBuildWithManagedContainerResponse> MultiplayerServerAPI::CreateBuildWithManagedContainer(
    const PFMultiplayerServerCreateBuildWithManagedContainerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/CreateBuildWithManagedContainer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateBuildWithManagedContainerResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateBuildWithManagedContainerResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateBuildWithManagedContainerResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateBuildWithProcessBasedServerResponse> MultiplayerServerAPI::CreateBuildWithProcessBasedServer(
    const PFMultiplayerServerCreateBuildWithProcessBasedServerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/CreateBuildWithProcessBasedServer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateBuildWithProcessBasedServerResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateBuildWithProcessBasedServerResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateBuildWithProcessBasedServerResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateRemoteUserResponse> MultiplayerServerAPI::CreateRemoteUser(
    const PFMultiplayerServerCreateRemoteUserRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/CreateRemoteUser" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateRemoteUserResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateRemoteUserResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateRemoteUserResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateTitleMultiplayerServersQuotaChangeResponse> MultiplayerServerAPI::CreateTitleMultiplayerServersQuotaChange(
    const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/CreateTitleMultiplayerServersQuotaChange" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateTitleMultiplayerServersQuotaChangeResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateTitleMultiplayerServersQuotaChangeResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateTitleMultiplayerServersQuotaChangeResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MultiplayerServerAPI::DeleteAsset(
    const PFMultiplayerServerDeleteAssetRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/DeleteAsset" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::DeleteBuild(
    const PFMultiplayerServerDeleteBuildRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/DeleteBuild" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::DeleteBuildAlias(
    const PFMultiplayerServerDeleteBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/DeleteBuildAlias" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::DeleteBuildRegion(
    const PFMultiplayerServerDeleteBuildRegionRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/DeleteBuildRegion" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::DeleteCertificate(
    const PFMultiplayerServerDeleteCertificateRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/DeleteCertificate" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::DeleteContainerImageRepository(
    const PFMultiplayerServerDeleteContainerImageRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/DeleteContainerImageRepository" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::DeleteRemoteUser(
    const PFMultiplayerServerDeleteRemoteUserRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/DeleteRemoteUser" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<EnableMultiplayerServersForTitleResponse> MultiplayerServerAPI::EnableMultiplayerServersForTitle(
    const PFMultiplayerServerEnableMultiplayerServersForTitleRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/EnableMultiplayerServersForTitle" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<EnableMultiplayerServersForTitleResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            EnableMultiplayerServersForTitleResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<EnableMultiplayerServersForTitleResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetAssetDownloadUrlResponse> MultiplayerServerAPI::GetAssetDownloadUrl(
    const PFMultiplayerServerGetAssetDownloadUrlRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetAssetDownloadUrl" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetAssetDownloadUrlResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetAssetDownloadUrlResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetAssetDownloadUrlResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetAssetUploadUrlResponse> MultiplayerServerAPI::GetAssetUploadUrl(
    const PFMultiplayerServerGetAssetUploadUrlRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetAssetUploadUrl" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetAssetUploadUrlResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetAssetUploadUrlResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetAssetUploadUrlResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetBuildResponse> MultiplayerServerAPI::GetBuild(
    const PFMultiplayerServerGetBuildRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetBuild" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetBuildResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetBuildResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetBuildResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<BuildAliasDetailsResponse> MultiplayerServerAPI::GetBuildAlias(
    const PFMultiplayerServerGetBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetBuildAlias" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            BuildAliasDetailsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<BuildAliasDetailsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetContainerRegistryCredentialsResponse> MultiplayerServerAPI::GetContainerRegistryCredentials(
    const PFMultiplayerServerGetContainerRegistryCredentialsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetContainerRegistryCredentials" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetContainerRegistryCredentialsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetContainerRegistryCredentialsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetContainerRegistryCredentialsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetMultiplayerServerDetailsResponse> MultiplayerServerAPI::GetMultiplayerServerDetails(
    const PFMultiplayerServerGetMultiplayerServerDetailsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetMultiplayerServerDetails" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetMultiplayerServerDetailsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMultiplayerServerDetailsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMultiplayerServerDetailsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetMultiplayerServerLogsResponse> MultiplayerServerAPI::GetMultiplayerServerLogs(
    const PFMultiplayerServerGetMultiplayerServerLogsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetMultiplayerServerLogs" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetMultiplayerServerLogsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMultiplayerServerLogsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMultiplayerServerLogsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetMultiplayerServerLogsResponse> MultiplayerServerAPI::GetMultiplayerSessionLogsBySessionId(
    const PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetMultiplayerSessionLogsBySessionId" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetMultiplayerServerLogsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMultiplayerServerLogsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMultiplayerServerLogsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetRemoteLoginEndpointResponse> MultiplayerServerAPI::GetRemoteLoginEndpoint(
    const PFMultiplayerServerGetRemoteLoginEndpointRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetRemoteLoginEndpoint" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetRemoteLoginEndpointResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetRemoteLoginEndpointResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetRemoteLoginEndpointResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetTitleEnabledForMultiplayerServersStatusResponse> MultiplayerServerAPI::GetTitleEnabledForMultiplayerServersStatus(
    const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetTitleEnabledForMultiplayerServersStatus" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetTitleEnabledForMultiplayerServersStatusResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleEnabledForMultiplayerServersStatusResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleEnabledForMultiplayerServersStatusResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetTitleMultiplayerServersQuotaChangeResponse> MultiplayerServerAPI::GetTitleMultiplayerServersQuotaChange(
    const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetTitleMultiplayerServersQuotaChange" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetTitleMultiplayerServersQuotaChangeResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleMultiplayerServersQuotaChangeResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleMultiplayerServersQuotaChangeResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetTitleMultiplayerServersQuotasResponse> MultiplayerServerAPI::GetTitleMultiplayerServersQuotas(
    const PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/GetTitleMultiplayerServersQuotas" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetTitleMultiplayerServersQuotasResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleMultiplayerServersQuotasResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleMultiplayerServersQuotasResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListMultiplayerServersResponse> MultiplayerServerAPI::ListArchivedMultiplayerServers(
    const PFMultiplayerServerListMultiplayerServersRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListArchivedMultiplayerServers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListMultiplayerServersResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListMultiplayerServersResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListMultiplayerServersResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListAssetSummariesResponse> MultiplayerServerAPI::ListAssetSummaries(
    const PFMultiplayerServerListAssetSummariesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListAssetSummaries" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListAssetSummariesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListAssetSummariesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListAssetSummariesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListBuildAliasesResponse> MultiplayerServerAPI::ListBuildAliases(
    const PFMultiplayerServerListBuildAliasesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListBuildAliases" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListBuildAliasesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListBuildAliasesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListBuildAliasesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListBuildSummariesResponse> MultiplayerServerAPI::ListBuildSummariesV2(
    const PFMultiplayerServerListBuildSummariesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListBuildSummariesV2" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListBuildSummariesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListBuildSummariesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListBuildSummariesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListCertificateSummariesResponse> MultiplayerServerAPI::ListCertificateSummaries(
    const PFMultiplayerServerListCertificateSummariesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListCertificateSummaries" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListCertificateSummariesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListCertificateSummariesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListCertificateSummariesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListContainerImagesResponse> MultiplayerServerAPI::ListContainerImages(
    const PFMultiplayerServerListContainerImagesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListContainerImages" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListContainerImagesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListContainerImagesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListContainerImagesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListContainerImageTagsResponse> MultiplayerServerAPI::ListContainerImageTags(
    const PFMultiplayerServerListContainerImageTagsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListContainerImageTags" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListContainerImageTagsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListContainerImageTagsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListContainerImageTagsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListMultiplayerServersResponse> MultiplayerServerAPI::ListMultiplayerServers(
    const PFMultiplayerServerListMultiplayerServersRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListMultiplayerServers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListMultiplayerServersResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListMultiplayerServersResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListMultiplayerServersResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListPartyQosServersResponse> MultiplayerServerAPI::ListPartyQosServers(
    const PFMultiplayerServerListPartyQosServersRequest& request,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/MultiplayerServer/ListPartyQosServers" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListPartyQosServersResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListPartyQosServersResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListPartyQosServersResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListQosServersForTitleResponse> MultiplayerServerAPI::ListQosServersForTitle(
    const PFMultiplayerServerListQosServersForTitleRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListQosServersForTitle" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListQosServersForTitleResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListQosServersForTitleResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListQosServersForTitleResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListTitleMultiplayerServersQuotaChangesResponse> MultiplayerServerAPI::ListTitleMultiplayerServersQuotaChanges(
    const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListTitleMultiplayerServersQuotaChanges" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListTitleMultiplayerServersQuotaChangesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListTitleMultiplayerServersQuotaChangesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListTitleMultiplayerServersQuotaChangesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListVirtualMachineSummariesResponse> MultiplayerServerAPI::ListVirtualMachineSummaries(
    const PFMultiplayerServerListVirtualMachineSummariesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ListVirtualMachineSummaries" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListVirtualMachineSummariesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListVirtualMachineSummariesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListVirtualMachineSummariesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<RequestMultiplayerServerResponse> MultiplayerServerAPI::RequestMultiplayerServer(
    const PFMultiplayerServerRequestMultiplayerServerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/RequestMultiplayerServer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RequestMultiplayerServerResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RequestMultiplayerServerResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RequestMultiplayerServerResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<RolloverContainerRegistryCredentialsResponse> MultiplayerServerAPI::RolloverContainerRegistryCredentials(
    const PFMultiplayerServerRolloverContainerRegistryCredentialsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/RolloverContainerRegistryCredentials" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RolloverContainerRegistryCredentialsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RolloverContainerRegistryCredentialsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RolloverContainerRegistryCredentialsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MultiplayerServerAPI::ShutdownMultiplayerServer(
    const PFMultiplayerServerShutdownMultiplayerServerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/ShutdownMultiplayerServer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::UntagContainerImage(
    const PFMultiplayerServerUntagContainerImageRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/UntagContainerImage" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<BuildAliasDetailsResponse> MultiplayerServerAPI::UpdateBuildAlias(
    const PFMultiplayerServerUpdateBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/UpdateBuildAlias" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            BuildAliasDetailsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<BuildAliasDetailsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MultiplayerServerAPI::UpdateBuildName(
    const PFMultiplayerServerUpdateBuildNameRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/UpdateBuildName" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::UpdateBuildRegion(
    const PFMultiplayerServerUpdateBuildRegionRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/UpdateBuildRegion" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::UpdateBuildRegions(
    const PFMultiplayerServerUpdateBuildRegionsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/UpdateBuildRegions" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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

AsyncOp<void> MultiplayerServerAPI::UploadCertificate(
    const PFMultiplayerServerUploadCertificateRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/MultiplayerServer/UploadCertificate" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
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
