#include "stdafx.h"
#include "AdminApi.h"

namespace PlayFab
{

using namespace AdminModels;

AdminAPI::AdminAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey) :
    m_httpClient{ std::move(httpClient) },
    m_secretKey{ std::move(secretKey) }
{
}

AsyncOp<void> AdminAPI::AbortTaskInstance(
    const PlayFabAdminAbortTaskInstanceRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/AbortTaskInstance",
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

AsyncOp<void> AdminAPI::AddLocalizedNews(
    const PlayFabAdminAddLocalizedNewsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/AddLocalizedNews",
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

AsyncOp<AdminModels::AddNewsResult> AdminAPI::AddNews(
    const PlayFabAdminAddNewsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/AddNews",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AddNewsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AddNewsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AddNewsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::AddPlayerTag(
    const PlayFabAdminAddPlayerTagRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/AddPlayerTag",
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

AsyncOp<AdminModels::AddServerBuildResult> AdminAPI::AddServerBuild(
    const PlayFabAdminAddServerBuildRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/AddServerBuild",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AddServerBuildResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AddServerBuildResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AddServerBuildResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::ModifyUserVirtualCurrencyResult> AdminAPI::AddUserVirtualCurrency(
    const PlayFabAdminAddUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/AddUserVirtualCurrency",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyUserVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyUserVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::AddVirtualCurrencyTypes(
    const PlayFabAdminAddVirtualCurrencyTypesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/AddVirtualCurrencyTypes",
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

AsyncOp<AdminModels::BanUsersResult> AdminAPI::BanUsers(
    const PlayFabAdminBanUsersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/BanUsers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<BanUsersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            BanUsersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<BanUsersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::CheckLimitedEditionItemAvailabilityResult> AdminAPI::CheckLimitedEditionItemAvailability(
    const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CheckLimitedEditionItemAvailability",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CheckLimitedEditionItemAvailabilityResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CheckLimitedEditionItemAvailabilityResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CheckLimitedEditionItemAvailabilityResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::CreateTaskResult> AdminAPI::CreateActionsOnPlayersInSegmentTask(
    const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CreateActionsOnPlayersInSegmentTask",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateTaskResult>
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

AsyncOp<AdminModels::CreateTaskResult> AdminAPI::CreateCloudScriptTask(
    const PlayFabAdminCreateCloudScriptTaskRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CreateCloudScriptTask",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateTaskResult>
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

AsyncOp<AdminModels::CreateTaskResult> AdminAPI::CreateInsightsScheduledScalingTask(
    const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CreateInsightsScheduledScalingTask",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateTaskResult>
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

AsyncOp<void> AdminAPI::CreateOpenIdConnection(
    const PlayFabAdminCreateOpenIdConnectionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CreateOpenIdConnection",
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

AsyncOp<AdminModels::CreatePlayerSharedSecretResult> AdminAPI::CreatePlayerSharedSecret(
    const PlayFabAdminCreatePlayerSharedSecretRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CreatePlayerSharedSecret",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreatePlayerSharedSecretResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreatePlayerSharedSecretResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreatePlayerSharedSecretResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::CreatePlayerStatisticDefinitionResult> AdminAPI::CreatePlayerStatisticDefinition(
    const PlayFabAdminCreatePlayerStatisticDefinitionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CreatePlayerStatisticDefinition",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreatePlayerStatisticDefinitionResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreatePlayerStatisticDefinitionResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreatePlayerStatisticDefinitionResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::CreateSegmentResponse> AdminAPI::CreateSegment(
    const PlayFabAdminCreateSegmentRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/CreateSegment",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateSegmentResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateSegmentResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateSegmentResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::DeleteContent(
    const PlayFabAdminDeleteContentRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteContent",
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

AsyncOp<AdminModels::DeleteMasterPlayerAccountResult> AdminAPI::DeleteMasterPlayerAccount(
    const PlayFabAdminDeleteMasterPlayerAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteMasterPlayerAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<DeleteMasterPlayerAccountResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            DeleteMasterPlayerAccountResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<DeleteMasterPlayerAccountResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::DeleteOpenIdConnection(
    const PlayFabAdminDeleteOpenIdConnectionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteOpenIdConnection",
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

AsyncOp<void> AdminAPI::DeletePlayer(
    const PlayFabAdminDeletePlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeletePlayer",
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

AsyncOp<void> AdminAPI::DeletePlayerSharedSecret(
    const PlayFabAdminDeletePlayerSharedSecretRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeletePlayerSharedSecret",
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

AsyncOp<AdminModels::DeleteSegmentsResponse> AdminAPI::DeleteSegment(
    const PlayFabAdminDeleteSegmentRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteSegment",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<DeleteSegmentsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            DeleteSegmentsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<DeleteSegmentsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::DeleteStore(
    const PlayFabAdminDeleteStoreRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteStore",
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

AsyncOp<void> AdminAPI::DeleteTask(
    const PlayFabAdminDeleteTaskRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteTask",
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

AsyncOp<void> AdminAPI::DeleteTitle(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteTitle",
        headers,
        JsonValue{ rapidjson::kNullType },
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

AsyncOp<void> AdminAPI::DeleteTitleDataOverride(
    const PlayFabAdminDeleteTitleDataOverrideRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/DeleteTitleDataOverride",
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

AsyncOp<AdminModels::ExportMasterPlayerDataResult> AdminAPI::ExportMasterPlayerData(
    const PlayFabAdminExportMasterPlayerDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ExportMasterPlayerData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ExportMasterPlayerDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ExportMasterPlayerDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ExportMasterPlayerDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetActionsOnPlayersInSegmentTaskInstanceResult> AdminAPI::GetActionsOnPlayersInSegmentTaskInstance(
    const PlayFabAdminGetTaskInstanceRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetActionsOnPlayersInSegmentTaskInstance",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetActionsOnPlayersInSegmentTaskInstanceResult>
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

AsyncOp<AdminModels::GetAllSegmentsResult> AdminAPI::GetAllSegments(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetAllSegments",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetAllSegmentsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetAllSegmentsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetAllSegmentsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetCatalogItemsResult> AdminAPI::GetCatalogItems(
    const PlayFabAdminGetCatalogItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetCatalogItems",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCatalogItemsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCatalogItemsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCatalogItemsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetCloudScriptRevisionResult> AdminAPI::GetCloudScriptRevision(
    const PlayFabAdminGetCloudScriptRevisionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetCloudScriptRevision",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCloudScriptRevisionResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCloudScriptRevisionResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCloudScriptRevisionResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetCloudScriptTaskInstanceResult> AdminAPI::GetCloudScriptTaskInstance(
    const PlayFabAdminGetTaskInstanceRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetCloudScriptTaskInstance",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCloudScriptTaskInstanceResult>
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

AsyncOp<AdminModels::GetCloudScriptVersionsResult> AdminAPI::GetCloudScriptVersions(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetCloudScriptVersions",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCloudScriptVersionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCloudScriptVersionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCloudScriptVersionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetContentListResult> AdminAPI::GetContentList(
    const PlayFabAdminGetContentListRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetContentList",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetContentListResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetContentListResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetContentListResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetContentUploadUrlResult> AdminAPI::GetContentUploadUrl(
    const PlayFabAdminGetContentUploadUrlRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetContentUploadUrl",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetContentUploadUrlResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetContentUploadUrlResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetContentUploadUrlResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetDataReportResult> AdminAPI::GetDataReport(
    const PlayFabAdminGetDataReportRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetDataReport",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetDataReportResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetDataReportResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetDataReportResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetMatchmakerGameInfoResult> AdminAPI::GetMatchmakerGameInfo(
    const PlayFabAdminGetMatchmakerGameInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetMatchmakerGameInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetMatchmakerGameInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchmakerGameInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchmakerGameInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetMatchmakerGameModesResult> AdminAPI::GetMatchmakerGameModes(
    const PlayFabAdminGetMatchmakerGameModesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetMatchmakerGameModes",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetMatchmakerGameModesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchmakerGameModesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchmakerGameModesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayedTitleListResult> AdminAPI::GetPlayedTitleList(
    const PlayFabAdminGetPlayedTitleListRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayedTitleList",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayedTitleListResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayedTitleListResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayedTitleListResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayerIdFromAuthTokenResult> AdminAPI::GetPlayerIdFromAuthToken(
    const PlayFabAdminGetPlayerIdFromAuthTokenRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayerIdFromAuthToken",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerIdFromAuthTokenResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerIdFromAuthTokenResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerIdFromAuthTokenResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayerProfileResult> AdminAPI::GetPlayerProfile(
    const PlayFabAdminGetPlayerProfileRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayerProfile",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerProfileResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerProfileResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerProfileResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayerSegmentsResult> AdminAPI::GetPlayerSegments(
    const PlayFabAdminGetPlayersSegmentsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayerSegments",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerSegmentsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerSegmentsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerSegmentsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayerSharedSecretsResult> AdminAPI::GetPlayerSharedSecrets(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayerSharedSecrets",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerSharedSecretsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerSharedSecretsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerSharedSecretsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayersInSegmentResult> AdminAPI::GetPlayersInSegment(
    const PlayFabAdminGetPlayersInSegmentRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayersInSegment",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayersInSegmentResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayersInSegmentResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayersInSegmentResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayerStatisticDefinitionsResult> AdminAPI::GetPlayerStatisticDefinitions(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayerStatisticDefinitions",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerStatisticDefinitionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerStatisticDefinitionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerStatisticDefinitionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayerStatisticVersionsResult> AdminAPI::GetPlayerStatisticVersions(
    const PlayFabAdminGetPlayerStatisticVersionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayerStatisticVersions",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerStatisticVersionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerStatisticVersionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerStatisticVersionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPlayerTagsResult> AdminAPI::GetPlayerTags(
    const PlayFabAdminGetPlayerTagsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPlayerTags",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerTagsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerTagsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerTagsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPolicyResponse> AdminAPI::GetPolicy(
    const PlayFabAdminGetPolicyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPolicy",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPolicyResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPolicyResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPolicyResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetPublisherDataResult> AdminAPI::GetPublisherData(
    const PlayFabAdminGetPublisherDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetPublisherData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPublisherDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPublisherDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPublisherDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetRandomResultTablesResult> AdminAPI::GetRandomResultTables(
    const PlayFabAdminGetRandomResultTablesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetRandomResultTables",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetRandomResultTablesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetRandomResultTablesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetRandomResultTablesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetSegmentsResponse> AdminAPI::GetSegments(
    const PlayFabAdminGetSegmentsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetSegments",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetSegmentsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetSegmentsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetSegmentsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetServerBuildInfoResult> AdminAPI::GetServerBuildInfo(
    const PlayFabAdminGetServerBuildInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetServerBuildInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetServerBuildInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetServerBuildInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetServerBuildInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetServerBuildUploadURLResult> AdminAPI::GetServerBuildUploadUrl(
    const PlayFabAdminGetServerBuildUploadURLRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetServerBuildUploadUrl",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetServerBuildUploadURLResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetServerBuildUploadURLResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetServerBuildUploadURLResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetStoreItemsResult> AdminAPI::GetStoreItems(
    const PlayFabAdminGetStoreItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetStoreItems",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetStoreItemsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetStoreItemsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetStoreItemsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetTaskInstancesResult> AdminAPI::GetTaskInstances(
    const PlayFabAdminGetTaskInstancesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetTaskInstances",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTaskInstancesResult>
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

AsyncOp<AdminModels::GetTasksResult> AdminAPI::GetTasks(
    const PlayFabAdminGetTasksRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetTasks",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTasksResult>
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

AsyncOp<AdminModels::GetTitleDataResult> AdminAPI::GetTitleData(
    const PlayFabAdminGetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetTitleData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetTitleDataResult> AdminAPI::GetTitleInternalData(
    const PlayFabAdminGetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetTitleInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::LookupUserAccountInfoResult> AdminAPI::GetUserAccountInfo(
    const PlayFabAdminLookupUserAccountInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserAccountInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<LookupUserAccountInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LookupUserAccountInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<LookupUserAccountInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserBansResult> AdminAPI::GetUserBans(
    const PlayFabAdminGetUserBansRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserBans",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserBansResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserBansResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserBansResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserDataResult> AdminAPI::GetUserData(
    const PlayFabAdminGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserDataResult> AdminAPI::GetUserInternalData(
    const PlayFabAdminGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserInventoryResult> AdminAPI::GetUserInventory(
    const PlayFabAdminGetUserInventoryRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserInventory",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserDataResult> AdminAPI::GetUserPublisherData(
    const PlayFabAdminGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserPublisherData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserDataResult> AdminAPI::GetUserPublisherInternalData(
    const PlayFabAdminGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserPublisherInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserDataResult> AdminAPI::GetUserPublisherReadOnlyData(
    const PlayFabAdminGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserPublisherReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GetUserDataResult> AdminAPI::GetUserReadOnlyData(
    const PlayFabAdminGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GetUserReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::GrantItemsToUsersResult> AdminAPI::GrantItemsToUsers(
    const PlayFabAdminGrantItemsToUsersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/GrantItemsToUsers",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GrantItemsToUsersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantItemsToUsersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantItemsToUsersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::IncrementLimitedEditionItemAvailability(
    const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/IncrementLimitedEditionItemAvailability",
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

AsyncOp<AdminModels::IncrementPlayerStatisticVersionResult> AdminAPI::IncrementPlayerStatisticVersion(
    const PlayFabAdminIncrementPlayerStatisticVersionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/IncrementPlayerStatisticVersion",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<IncrementPlayerStatisticVersionResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            IncrementPlayerStatisticVersionResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<IncrementPlayerStatisticVersionResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::ListOpenIdConnectionResponse> AdminAPI::ListOpenIdConnection(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ListOpenIdConnection",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListOpenIdConnectionResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListOpenIdConnectionResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListOpenIdConnectionResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::ListBuildsResult> AdminAPI::ListServerBuilds(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ListServerBuilds",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListBuildsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListBuildsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListBuildsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::ListVirtualCurrencyTypesResult> AdminAPI::ListVirtualCurrencyTypes(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ListVirtualCurrencyTypes",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListVirtualCurrencyTypesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListVirtualCurrencyTypesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListVirtualCurrencyTypesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::ModifyMatchmakerGameModes(
    const PlayFabAdminModifyMatchmakerGameModesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ModifyMatchmakerGameModes",
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

AsyncOp<AdminModels::ModifyServerBuildResult> AdminAPI::ModifyServerBuild(
    const PlayFabAdminModifyServerBuildRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ModifyServerBuild",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyServerBuildResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyServerBuildResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyServerBuildResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::RefundPurchaseResponse> AdminAPI::RefundPurchase(
    const PlayFabAdminRefundPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RefundPurchase",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RefundPurchaseResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RefundPurchaseResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RefundPurchaseResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::RemovePlayerTag(
    const PlayFabAdminRemovePlayerTagRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RemovePlayerTag",
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

AsyncOp<void> AdminAPI::RemoveServerBuild(
    const PlayFabAdminRemoveServerBuildRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RemoveServerBuild",
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

AsyncOp<void> AdminAPI::RemoveVirtualCurrencyTypes(
    const PlayFabAdminRemoveVirtualCurrencyTypesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RemoveVirtualCurrencyTypes",
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

AsyncOp<void> AdminAPI::ResetCharacterStatistics(
    const PlayFabAdminResetCharacterStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ResetCharacterStatistics",
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

AsyncOp<void> AdminAPI::ResetPassword(
    const PlayFabAdminResetPasswordRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ResetPassword",
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

AsyncOp<void> AdminAPI::ResetUserStatistics(
    const PlayFabAdminResetUserStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ResetUserStatistics",
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

AsyncOp<AdminModels::ResolvePurchaseDisputeResponse> AdminAPI::ResolvePurchaseDispute(
    const PlayFabAdminResolvePurchaseDisputeRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/ResolvePurchaseDispute",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ResolvePurchaseDisputeResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ResolvePurchaseDisputeResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ResolvePurchaseDisputeResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::RevokeAllBansForUserResult> AdminAPI::RevokeAllBansForUser(
    const PlayFabAdminRevokeAllBansForUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RevokeAllBansForUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RevokeAllBansForUserResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RevokeAllBansForUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RevokeAllBansForUserResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::RevokeBansResult> AdminAPI::RevokeBans(
    const PlayFabAdminRevokeBansRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RevokeBans",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RevokeBansResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RevokeBansResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RevokeBansResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::RevokeInventoryItem(
    const PlayFabAdminRevokeInventoryItemRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RevokeInventoryItem",
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

AsyncOp<AdminModels::RevokeInventoryItemsResult> AdminAPI::RevokeInventoryItems(
    const PlayFabAdminRevokeInventoryItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RevokeInventoryItems",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RevokeInventoryItemsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RevokeInventoryItemsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RevokeInventoryItemsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::RunTaskResult> AdminAPI::RunTask(
    const PlayFabAdminRunTaskRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/RunTask",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RunTaskResult>
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

AsyncOp<void> AdminAPI::SendAccountRecoveryEmail(
    const PlayFabAdminSendAccountRecoveryEmailRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SendAccountRecoveryEmail",
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

AsyncOp<void> AdminAPI::SetCatalogItems(
    const PlayFabAdminUpdateCatalogItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetCatalogItems",
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

AsyncOp<void> AdminAPI::SetPlayerSecret(
    const PlayFabAdminSetPlayerSecretRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetPlayerSecret",
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

AsyncOp<void> AdminAPI::SetPublishedRevision(
    const PlayFabAdminSetPublishedRevisionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetPublishedRevision",
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

AsyncOp<void> AdminAPI::SetPublisherData(
    const PlayFabAdminSetPublisherDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetPublisherData",
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

AsyncOp<void> AdminAPI::SetStoreItems(
    const PlayFabAdminUpdateStoreItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetStoreItems",
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

AsyncOp<void> AdminAPI::SetTitleData(
    const PlayFabAdminSetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetTitleData",
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

AsyncOp<void> AdminAPI::SetTitleDataAndOverrides(
    const PlayFabAdminSetTitleDataAndOverridesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetTitleDataAndOverrides",
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

AsyncOp<void> AdminAPI::SetTitleInternalData(
    const PlayFabAdminSetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetTitleInternalData",
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

AsyncOp<AdminModels::SetupPushNotificationResult> AdminAPI::SetupPushNotification(
    const PlayFabAdminSetupPushNotificationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SetupPushNotification",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SetupPushNotificationResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            SetupPushNotificationResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<SetupPushNotificationResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::ModifyUserVirtualCurrencyResult> AdminAPI::SubtractUserVirtualCurrency(
    const PlayFabAdminSubtractUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/SubtractUserVirtualCurrency",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyUserVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyUserVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdateBansResult> AdminAPI::UpdateBans(
    const PlayFabAdminUpdateBansRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateBans",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateBansResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateBansResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateBansResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::UpdateCatalogItems(
    const PlayFabAdminUpdateCatalogItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateCatalogItems",
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

AsyncOp<AdminModels::UpdateCloudScriptResult> AdminAPI::UpdateCloudScript(
    const PlayFabAdminUpdateCloudScriptRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateCloudScript",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateCloudScriptResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateCloudScriptResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateCloudScriptResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::UpdateOpenIdConnection(
    const PlayFabAdminUpdateOpenIdConnectionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateOpenIdConnection",
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

AsyncOp<void> AdminAPI::UpdatePlayerSharedSecret(
    const PlayFabAdminUpdatePlayerSharedSecretRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdatePlayerSharedSecret",
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

AsyncOp<AdminModels::UpdatePlayerStatisticDefinitionResult> AdminAPI::UpdatePlayerStatisticDefinition(
    const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdatePlayerStatisticDefinition",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdatePlayerStatisticDefinitionResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdatePlayerStatisticDefinitionResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdatePlayerStatisticDefinitionResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdatePolicyResponse> AdminAPI::UpdatePolicy(
    const PlayFabAdminUpdatePolicyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdatePolicy",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdatePolicyResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdatePolicyResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdatePolicyResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::UpdateRandomResultTables(
    const PlayFabAdminUpdateRandomResultTablesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateRandomResultTables",
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

AsyncOp<AdminModels::UpdateSegmentResponse> AdminAPI::UpdateSegment(
    const PlayFabAdminUpdateSegmentRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateSegment",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateSegmentResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateSegmentResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateSegmentResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> AdminAPI::UpdateStoreItems(
    const PlayFabAdminUpdateStoreItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateStoreItems",
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

AsyncOp<void> AdminAPI::UpdateTask(
    const PlayFabAdminUpdateTaskRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateTask",
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

AsyncOp<AdminModels::UpdateUserDataResult> AdminAPI::UpdateUserData(
    const PlayFabAdminUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateUserData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdateUserDataResult> AdminAPI::UpdateUserInternalData(
    const PlayFabAdminUpdateUserInternalDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateUserInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdateUserDataResult> AdminAPI::UpdateUserPublisherData(
    const PlayFabAdminUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateUserPublisherData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdateUserDataResult> AdminAPI::UpdateUserPublisherInternalData(
    const PlayFabAdminUpdateUserInternalDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateUserPublisherInternalData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdateUserDataResult> AdminAPI::UpdateUserPublisherReadOnlyData(
    const PlayFabAdminUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateUserPublisherReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdateUserDataResult> AdminAPI::UpdateUserReadOnlyData(
    const PlayFabAdminUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateUserReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AdminModels::UpdateUserTitleDisplayNameResult> AdminAPI::UpdateUserTitleDisplayName(
    const PlayFabAdminUpdateUserTitleDisplayNameRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Admin/UpdateUserTitleDisplayName",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateUserTitleDisplayNameResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateUserTitleDisplayNameResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateUserTitleDisplayNameResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
