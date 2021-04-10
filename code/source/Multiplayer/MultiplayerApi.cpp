#include "stdafx.h"
#include "MultiplayerApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace MultiplayerModels;

MultiplayerAPI::MultiplayerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<void> MultiplayerAPI::CancelAllMatchmakingTicketsForPlayer(
    const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/CancelAllMatchmakingTicketsForPlayer",
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

AsyncOp<void> MultiplayerAPI::CancelAllServerBackfillTicketsForPlayer(
    const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/CancelAllServerBackfillTicketsForPlayer",
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

AsyncOp<void> MultiplayerAPI::CancelMatchmakingTicket(
    const PlayFabMultiplayerCancelMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/CancelMatchmakingTicket",
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

AsyncOp<void> MultiplayerAPI::CancelServerBackfillTicket(
    const PlayFabMultiplayerCancelServerBackfillTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/CancelServerBackfillTicket",
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

AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> MultiplayerAPI::CreateBuildAlias(
    const PlayFabMultiplayerCreateBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/CreateBuildAlias",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
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

AsyncOp<MultiplayerModels::CreateBuildWithCustomContainerResponse> MultiplayerAPI::CreateBuildWithCustomContainer(
    const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/CreateBuildWithCustomContainer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateBuildWithCustomContainerResponse>
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

AsyncOp<MultiplayerModels::CreateBuildWithManagedContainerResponse> MultiplayerAPI::CreateBuildWithManagedContainer(
    const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/CreateBuildWithManagedContainer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateBuildWithManagedContainerResponse>
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

AsyncOp<MultiplayerModels::CreateBuildWithProcessBasedServerResponse> MultiplayerAPI::CreateBuildWithProcessBasedServer(
    const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/CreateBuildWithProcessBasedServer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateBuildWithProcessBasedServerResponse>
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

AsyncOp<MultiplayerModels::CreateMatchmakingTicketResult> MultiplayerAPI::CreateMatchmakingTicket(
    const PlayFabMultiplayerCreateMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/CreateMatchmakingTicket",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateMatchmakingTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateMatchmakingTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateMatchmakingTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::CreateRemoteUserResponse> MultiplayerAPI::CreateRemoteUser(
    const PlayFabMultiplayerCreateRemoteUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/CreateRemoteUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateRemoteUserResponse>
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

AsyncOp<MultiplayerModels::CreateServerBackfillTicketResult> MultiplayerAPI::CreateServerBackfillTicket(
    const PlayFabMultiplayerCreateServerBackfillTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/CreateServerBackfillTicket",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateServerBackfillTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateServerBackfillTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateServerBackfillTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::CreateMatchmakingTicketResult> MultiplayerAPI::CreateServerMatchmakingTicket(
    const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/CreateServerMatchmakingTicket",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateMatchmakingTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateMatchmakingTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateMatchmakingTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::CreateTitleMultiplayerServersQuotaChangeResponse> MultiplayerAPI::CreateTitleMultiplayerServersQuotaChange(
    const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/CreateTitleMultiplayerServersQuotaChange",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateTitleMultiplayerServersQuotaChangeResponse>
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

AsyncOp<void> MultiplayerAPI::DeleteAsset(
    const PlayFabMultiplayerDeleteAssetRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/DeleteAsset",
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

AsyncOp<void> MultiplayerAPI::DeleteBuild(
    const PlayFabMultiplayerDeleteBuildRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/DeleteBuild",
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

AsyncOp<void> MultiplayerAPI::DeleteBuildAlias(
    const PlayFabMultiplayerDeleteBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/DeleteBuildAlias",
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

AsyncOp<void> MultiplayerAPI::DeleteBuildRegion(
    const PlayFabMultiplayerDeleteBuildRegionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/DeleteBuildRegion",
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

AsyncOp<void> MultiplayerAPI::DeleteCertificate(
    const PlayFabMultiplayerDeleteCertificateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/DeleteCertificate",
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

AsyncOp<void> MultiplayerAPI::DeleteContainerImageRepository(
    const PlayFabMultiplayerDeleteContainerImageRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/DeleteContainerImageRepository",
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

AsyncOp<void> MultiplayerAPI::DeleteRemoteUser(
    const PlayFabMultiplayerDeleteRemoteUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/DeleteRemoteUser",
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

AsyncOp<MultiplayerModels::EnableMultiplayerServersForTitleResponse> MultiplayerAPI::EnableMultiplayerServersForTitle(
    const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/EnableMultiplayerServersForTitle",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<EnableMultiplayerServersForTitleResponse>
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

AsyncOp<MultiplayerModels::GetAssetUploadUrlResponse> MultiplayerAPI::GetAssetUploadUrl(
    const PlayFabMultiplayerGetAssetUploadUrlRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetAssetUploadUrl",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetAssetUploadUrlResponse>
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

AsyncOp<MultiplayerModels::GetBuildResponse> MultiplayerAPI::GetBuild(
    const PlayFabMultiplayerGetBuildRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetBuild",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetBuildResponse>
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

AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> MultiplayerAPI::GetBuildAlias(
    const PlayFabMultiplayerGetBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetBuildAlias",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
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

AsyncOp<MultiplayerModels::GetContainerRegistryCredentialsResponse> MultiplayerAPI::GetContainerRegistryCredentials(
    const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetContainerRegistryCredentials",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetContainerRegistryCredentialsResponse>
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

AsyncOp<MultiplayerModels::GetMatchResult> MultiplayerAPI::GetMatch(
    const PlayFabMultiplayerGetMatchRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/GetMatch",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetMatchResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::GetMatchmakingTicketResult> MultiplayerAPI::GetMatchmakingTicket(
    const PlayFabMultiplayerGetMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/GetMatchmakingTicket",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetMatchmakingTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchmakingTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchmakingTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::GetMultiplayerServerDetailsResponse> MultiplayerAPI::GetMultiplayerServerDetails(
    const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetMultiplayerServerDetails",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetMultiplayerServerDetailsResponse>
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

AsyncOp<MultiplayerModels::GetMultiplayerServerLogsResponse> MultiplayerAPI::GetMultiplayerServerLogs(
    const PlayFabMultiplayerGetMultiplayerServerLogsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetMultiplayerServerLogs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetMultiplayerServerLogsResponse>
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

AsyncOp<MultiplayerModels::GetMultiplayerServerLogsResponse> MultiplayerAPI::GetMultiplayerSessionLogsBySessionId(
    const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetMultiplayerSessionLogsBySessionId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetMultiplayerServerLogsResponse>
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

AsyncOp<MultiplayerModels::GetQueueStatisticsResult> MultiplayerAPI::GetQueueStatistics(
    const PlayFabMultiplayerGetQueueStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/GetQueueStatistics",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetQueueStatisticsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetQueueStatisticsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetQueueStatisticsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::GetRemoteLoginEndpointResponse> MultiplayerAPI::GetRemoteLoginEndpoint(
    const PlayFabMultiplayerGetRemoteLoginEndpointRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetRemoteLoginEndpoint",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetRemoteLoginEndpointResponse>
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

AsyncOp<MultiplayerModels::GetServerBackfillTicketResult> MultiplayerAPI::GetServerBackfillTicket(
    const PlayFabMultiplayerGetServerBackfillTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/GetServerBackfillTicket",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetServerBackfillTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetServerBackfillTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetServerBackfillTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse> MultiplayerAPI::GetTitleEnabledForMultiplayerServersStatus(
    const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetTitleEnabledForMultiplayerServersStatus",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleEnabledForMultiplayerServersStatusResponse>
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

AsyncOp<MultiplayerModels::GetTitleMultiplayerServersQuotaChangeResponse> MultiplayerAPI::GetTitleMultiplayerServersQuotaChange(
    const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetTitleMultiplayerServersQuotaChange",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleMultiplayerServersQuotaChangeResponse>
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

AsyncOp<MultiplayerModels::GetTitleMultiplayerServersQuotasResponse> MultiplayerAPI::GetTitleMultiplayerServersQuotas(
    const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/GetTitleMultiplayerServersQuotas",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleMultiplayerServersQuotasResponse>
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

AsyncOp<void> MultiplayerAPI::JoinMatchmakingTicket(
    const PlayFabMultiplayerJoinMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/JoinMatchmakingTicket",
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

AsyncOp<MultiplayerModels::ListMultiplayerServersResponse> MultiplayerAPI::ListArchivedMultiplayerServers(
    const PlayFabMultiplayerListMultiplayerServersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListArchivedMultiplayerServers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListMultiplayerServersResponse>
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

AsyncOp<MultiplayerModels::ListAssetSummariesResponse> MultiplayerAPI::ListAssetSummaries(
    const PlayFabMultiplayerListAssetSummariesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListAssetSummaries",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListAssetSummariesResponse>
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

AsyncOp<MultiplayerModels::ListBuildAliasesResponse> MultiplayerAPI::ListBuildAliases(
    const PlayFabMultiplayerListBuildAliasesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListBuildAliases",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListBuildAliasesResponse>
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

AsyncOp<MultiplayerModels::ListBuildSummariesResponse> MultiplayerAPI::ListBuildSummariesV2(
    const PlayFabMultiplayerListBuildSummariesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListBuildSummariesV2",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListBuildSummariesResponse>
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

AsyncOp<MultiplayerModels::ListCertificateSummariesResponse> MultiplayerAPI::ListCertificateSummaries(
    const PlayFabMultiplayerListCertificateSummariesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListCertificateSummaries",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListCertificateSummariesResponse>
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

AsyncOp<MultiplayerModels::ListContainerImagesResponse> MultiplayerAPI::ListContainerImages(
    const PlayFabMultiplayerListContainerImagesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListContainerImages",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListContainerImagesResponse>
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

AsyncOp<MultiplayerModels::ListContainerImageTagsResponse> MultiplayerAPI::ListContainerImageTags(
    const PlayFabMultiplayerListContainerImageTagsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListContainerImageTags",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListContainerImageTagsResponse>
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

AsyncOp<MultiplayerModels::ListMatchmakingTicketsForPlayerResult> MultiplayerAPI::ListMatchmakingTicketsForPlayer(
    const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/ListMatchmakingTicketsForPlayer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListMatchmakingTicketsForPlayerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListMatchmakingTicketsForPlayerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListMatchmakingTicketsForPlayerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::ListMultiplayerServersResponse> MultiplayerAPI::ListMultiplayerServers(
    const PlayFabMultiplayerListMultiplayerServersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListMultiplayerServers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListMultiplayerServersResponse>
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

AsyncOp<MultiplayerModels::ListPartyQosServersResponse> MultiplayerAPI::ListPartyQosServers(
    const PlayFabMultiplayerListPartyQosServersRequest& request,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return httpClient->MakePostRequest(
        "/MultiplayerServer/ListPartyQosServers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListPartyQosServersResponse>
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

AsyncOp<MultiplayerModels::ListQosServersForTitleResponse> MultiplayerAPI::ListQosServersForTitle(
    const PlayFabMultiplayerListQosServersForTitleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListQosServersForTitle",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListQosServersForTitleResponse>
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

AsyncOp<MultiplayerModels::ListServerBackfillTicketsForPlayerResult> MultiplayerAPI::ListServerBackfillTicketsForPlayer(
    const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/Match/ListServerBackfillTicketsForPlayer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListServerBackfillTicketsForPlayerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListServerBackfillTicketsForPlayerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListServerBackfillTicketsForPlayerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MultiplayerModels::ListTitleMultiplayerServersQuotaChangesResponse> MultiplayerAPI::ListTitleMultiplayerServersQuotaChanges(
    const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListTitleMultiplayerServersQuotaChanges",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListTitleMultiplayerServersQuotaChangesResponse>
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

AsyncOp<MultiplayerModels::ListVirtualMachineSummariesResponse> MultiplayerAPI::ListVirtualMachineSummaries(
    const PlayFabMultiplayerListVirtualMachineSummariesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ListVirtualMachineSummaries",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListVirtualMachineSummariesResponse>
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

AsyncOp<MultiplayerModels::RequestMultiplayerServerResponse> MultiplayerAPI::RequestMultiplayerServer(
    const PlayFabMultiplayerRequestMultiplayerServerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/RequestMultiplayerServer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RequestMultiplayerServerResponse>
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

AsyncOp<MultiplayerModels::RolloverContainerRegistryCredentialsResponse> MultiplayerAPI::RolloverContainerRegistryCredentials(
    const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/RolloverContainerRegistryCredentials",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RolloverContainerRegistryCredentialsResponse>
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

AsyncOp<void> MultiplayerAPI::ShutdownMultiplayerServer(
    const PlayFabMultiplayerShutdownMultiplayerServerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/ShutdownMultiplayerServer",
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

AsyncOp<void> MultiplayerAPI::UntagContainerImage(
    const PlayFabMultiplayerUntagContainerImageRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/UntagContainerImage",
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

AsyncOp<MultiplayerModels::BuildAliasDetailsResponse> MultiplayerAPI::UpdateBuildAlias(
    const PlayFabMultiplayerUpdateBuildAliasRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/UpdateBuildAlias",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
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

AsyncOp<void> MultiplayerAPI::UpdateBuildName(
    const PlayFabMultiplayerUpdateBuildNameRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/UpdateBuildName",
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

AsyncOp<void> MultiplayerAPI::UpdateBuildRegion(
    const PlayFabMultiplayerUpdateBuildRegionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/UpdateBuildRegion",
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

AsyncOp<void> MultiplayerAPI::UpdateBuildRegions(
    const PlayFabMultiplayerUpdateBuildRegionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/UpdateBuildRegions",
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

AsyncOp<void> MultiplayerAPI::UploadCertificate(
    const PlayFabMultiplayerUploadCertificateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    headers.emplace("X-EntityToken", m_tokens->EntityToken);

    return m_httpClient->MakePostRequest(
        "/MultiplayerServer/UploadCertificate",
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
