#include "stdafx.h"
#include "ClientApi.h"

namespace PlayFab
{

using namespace ClientModels;

ClientAPI::ClientAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<ClientModels::AcceptTradeResponse> ClientAPI::AcceptTrade(
    const PlayFabClientAcceptTradeRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AcceptTrade",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AcceptTradeResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AcceptTradeResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AcceptTradeResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::AddFriendResult> ClientAPI::AddFriend(
    const PlayFabClientAddFriendRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AddFriend",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AddFriendResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AddFriendResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AddFriendResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ClientAPI::AddGenericID(
    const PlayFabClientAddGenericIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AddGenericID",
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

AsyncOp<void> ClientAPI::AddOrUpdateContactEmail(
    const PlayFabClientAddOrUpdateContactEmailRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AddOrUpdateContactEmail",
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

AsyncOp<void> ClientAPI::AddSharedGroupMembers(
    const PlayFabClientAddSharedGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AddSharedGroupMembers",
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

AsyncOp<ClientModels::AddUsernamePasswordResult> ClientAPI::AddUsernamePassword(
    const PlayFabClientAddUsernamePasswordRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AddUsernamePassword",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AddUsernamePasswordResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AddUsernamePasswordResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AddUsernamePasswordResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ModifyUserVirtualCurrencyResult> ClientAPI::AddUserVirtualCurrency(
    const PlayFabClientAddUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AddUserVirtualCurrency",
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

AsyncOp<void> ClientAPI::AndroidDevicePushNotificationRegistration(
    const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AndroidDevicePushNotificationRegistration",
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

AsyncOp<void> ClientAPI::AttributeInstall(
    const PlayFabClientAttributeInstallRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/AttributeInstall",
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

AsyncOp<ClientModels::CancelTradeResponse> ClientAPI::CancelTrade(
    const PlayFabClientCancelTradeRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/CancelTrade",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CancelTradeResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CancelTradeResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CancelTradeResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ConfirmPurchaseResult> ClientAPI::ConfirmPurchase(
    const PlayFabClientConfirmPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ConfirmPurchase",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ConfirmPurchaseResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ConfirmPurchaseResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ConfirmPurchaseResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ConsumeItemResult> ClientAPI::ConsumeItem(
    const PlayFabClientConsumeItemRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ConsumeItem",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ConsumeItemResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ConsumeItemResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ConsumeItemResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ConsumeMicrosoftStoreEntitlementsResponse> ClientAPI::ConsumeMicrosoftStoreEntitlements(
    const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ConsumeMicrosoftStoreEntitlements",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ConsumeMicrosoftStoreEntitlementsResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ConsumeMicrosoftStoreEntitlementsResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ConsumeMicrosoftStoreEntitlementsResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ConsumePS5EntitlementsResult> ClientAPI::ConsumePS5Entitlements(
    const PlayFabClientConsumePS5EntitlementsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ConsumePS5Entitlements",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ConsumePS5EntitlementsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ConsumePS5EntitlementsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ConsumePS5EntitlementsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ConsumePSNEntitlementsResult> ClientAPI::ConsumePSNEntitlements(
    const PlayFabClientConsumePSNEntitlementsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ConsumePSNEntitlements",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ConsumePSNEntitlementsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ConsumePSNEntitlementsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ConsumePSNEntitlementsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ConsumeXboxEntitlementsResult> ClientAPI::ConsumeXboxEntitlements(
    const PlayFabClientConsumeXboxEntitlementsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ConsumeXboxEntitlements",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ConsumeXboxEntitlementsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ConsumeXboxEntitlementsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ConsumeXboxEntitlementsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::CreateSharedGroupResult> ClientAPI::CreateSharedGroup(
    const PlayFabClientCreateSharedGroupRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/CreateSharedGroup",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CreateSharedGroupResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateSharedGroupResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateSharedGroupResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ExecuteCloudScriptResult> ClientAPI::ExecuteCloudScript(
    const PlayFabClientExecuteCloudScriptRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ExecuteCloudScript",
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

AsyncOp<ClientModels::GetAccountInfoResult> ClientAPI::GetAccountInfo(
    const PlayFabClientGetAccountInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetAccountInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetAccountInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetAccountInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetAccountInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetAdPlacementsResult> ClientAPI::GetAdPlacements(
    const PlayFabClientGetAdPlacementsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetAdPlacements",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetAdPlacementsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetAdPlacementsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetAdPlacementsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ListUsersCharactersResult> ClientAPI::GetAllUsersCharacters(
    const PlayFabClientListUsersCharactersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetAllUsersCharacters",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ListUsersCharactersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListUsersCharactersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListUsersCharactersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetCatalogItemsResult> ClientAPI::GetCatalogItems(
    const PlayFabClientGetCatalogItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetCatalogItems",
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

AsyncOp<ClientModels::GetCharacterDataResult> ClientAPI::GetCharacterData(
    const PlayFabClientGetCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetCharacterData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetCharacterInventoryResult> ClientAPI::GetCharacterInventory(
    const PlayFabClientGetCharacterInventoryRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetCharacterInventory",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetCharacterLeaderboardResult> ClientAPI::GetCharacterLeaderboard(
    const PlayFabClientGetCharacterLeaderboardRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetCharacterLeaderboard",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterLeaderboardResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterLeaderboardResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterLeaderboardResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetCharacterDataResult> ClientAPI::GetCharacterReadOnlyData(
    const PlayFabClientGetCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetCharacterReadOnlyData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetCharacterStatisticsResult> ClientAPI::GetCharacterStatistics(
    const PlayFabClientGetCharacterStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetCharacterStatistics",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetCharacterStatisticsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetCharacterStatisticsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetCharacterStatisticsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetContentDownloadUrlResult> ClientAPI::GetContentDownloadUrl(
    const PlayFabClientGetContentDownloadUrlRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetContentDownloadUrl",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetContentDownloadUrlResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetContentDownloadUrlResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetContentDownloadUrlResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::CurrentGamesResult> ClientAPI::GetCurrentGames(
    const PlayFabClientCurrentGamesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetCurrentGames",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<CurrentGamesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CurrentGamesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CurrentGamesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetLeaderboardResult> ClientAPI::GetFriendLeaderboard(
    const PlayFabClientGetFriendLeaderboardRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetFriendLeaderboard",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetFriendLeaderboardAroundPlayerResult> ClientAPI::GetFriendLeaderboardAroundPlayer(
    const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetFriendLeaderboardAroundPlayer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetFriendLeaderboardAroundPlayerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetFriendLeaderboardAroundPlayerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetFriendLeaderboardAroundPlayerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetFriendsListResult> ClientAPI::GetFriendsList(
    const PlayFabClientGetFriendsListRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetFriendsList",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetFriendsListResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetFriendsListResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetFriendsListResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GameServerRegionsResult> ClientAPI::GetGameServerRegions(
    const PlayFabClientGameServerRegionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetGameServerRegions",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GameServerRegionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GameServerRegionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GameServerRegionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetLeaderboardResult> ClientAPI::GetLeaderboard(
    const PlayFabClientGetLeaderboardRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetLeaderboard",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetLeaderboardAroundCharacterResult> ClientAPI::GetLeaderboardAroundCharacter(
    const PlayFabClientGetLeaderboardAroundCharacterRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetLeaderboardAroundCharacter",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardAroundCharacterResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardAroundCharacterResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardAroundCharacterResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetLeaderboardAroundPlayerResult> ClientAPI::GetLeaderboardAroundPlayer(
    const PlayFabClientGetLeaderboardAroundPlayerRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetLeaderboardAroundPlayer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardAroundPlayerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardAroundPlayerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardAroundPlayerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetLeaderboardForUsersCharactersResult> ClientAPI::GetLeaderboardForUserCharacters(
    const PlayFabClientGetLeaderboardForUsersCharactersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetLeaderboardForUserCharacters",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetLeaderboardForUsersCharactersResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetLeaderboardForUsersCharactersResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetLeaderboardForUsersCharactersResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPaymentTokenResult> ClientAPI::GetPaymentToken(
    const PlayFabClientGetPaymentTokenRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPaymentToken",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPaymentTokenResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPaymentTokenResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPaymentTokenResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPhotonAuthenticationTokenResult> ClientAPI::GetPhotonAuthenticationToken(
    const PlayFabClientGetPhotonAuthenticationTokenRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPhotonAuthenticationToken",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPhotonAuthenticationTokenResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPhotonAuthenticationTokenResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPhotonAuthenticationTokenResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayerCombinedInfoResult> ClientAPI::GetPlayerCombinedInfo(
    const PlayFabClientGetPlayerCombinedInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayerCombinedInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerCombinedInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerCombinedInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerCombinedInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayerProfileResult> ClientAPI::GetPlayerProfile(
    const PlayFabClientGetPlayerProfileRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayerProfile",
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

AsyncOp<ClientModels::GetPlayerSegmentsResult> ClientAPI::GetPlayerSegments(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayerSegments",
        headers,
        JsonValue{ rapidjson::kNullType },
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

AsyncOp<ClientModels::GetPlayerStatisticsResult> ClientAPI::GetPlayerStatistics(
    const PlayFabClientGetPlayerStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayerStatistics",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerStatisticsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerStatisticsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerStatisticsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayerStatisticVersionsResult> ClientAPI::GetPlayerStatisticVersions(
    const PlayFabClientGetPlayerStatisticVersionsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayerStatisticVersions",
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

AsyncOp<ClientModels::GetPlayerTagsResult> ClientAPI::GetPlayerTags(
    const PlayFabClientGetPlayerTagsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayerTags",
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

AsyncOp<ClientModels::GetPlayerTradesResponse> ClientAPI::GetPlayerTrades(
    const PlayFabClientGetPlayerTradesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayerTrades",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayerTradesResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayerTradesResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayerTradesResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromFacebookIDsResult> ClientAPI::GetPlayFabIDsFromFacebookIDs(
    const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromFacebookIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromFacebookIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromFacebookIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromFacebookIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromFacebookInstantGamesIdsResult> ClientAPI::GetPlayFabIDsFromFacebookInstantGamesIds(
    const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromFacebookInstantGamesIds",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromFacebookInstantGamesIdsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromFacebookInstantGamesIdsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromFacebookInstantGamesIdsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromGameCenterIDsResult> ClientAPI::GetPlayFabIDsFromGameCenterIDs(
    const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromGameCenterIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromGameCenterIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromGameCenterIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromGameCenterIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromGenericIDsResult> ClientAPI::GetPlayFabIDsFromGenericIDs(
    const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromGenericIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromGenericIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromGenericIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromGenericIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromGoogleIDsResult> ClientAPI::GetPlayFabIDsFromGoogleIDs(
    const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromGoogleIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromGoogleIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromGoogleIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromGoogleIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromKongregateIDsResult> ClientAPI::GetPlayFabIDsFromKongregateIDs(
    const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromKongregateIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromKongregateIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromKongregateIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromKongregateIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> ClientAPI::GetPlayFabIDsFromNintendoSwitchDeviceIds(
    const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromNintendoSwitchDeviceIds",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromNintendoSwitchDeviceIdsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromPSNAccountIDsResult> ClientAPI::GetPlayFabIDsFromPSNAccountIDs(
    const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromPSNAccountIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromPSNAccountIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromPSNAccountIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromPSNAccountIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromSteamIDsResult> ClientAPI::GetPlayFabIDsFromSteamIDs(
    const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromSteamIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromSteamIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromSteamIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromSteamIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromTwitchIDsResult> ClientAPI::GetPlayFabIDsFromTwitchIDs(
    const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromTwitchIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromTwitchIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromTwitchIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromTwitchIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPlayFabIDsFromXboxLiveIDsResult> ClientAPI::GetPlayFabIDsFromXboxLiveIDs(
    const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPlayFabIDsFromXboxLiveIDs",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromXboxLiveIDsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPlayFabIDsFromXboxLiveIDsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPlayFabIDsFromXboxLiveIDsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetPublisherDataResult> ClientAPI::GetPublisherData(
    const PlayFabClientGetPublisherDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPublisherData",
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

AsyncOp<ClientModels::GetPurchaseResult> ClientAPI::GetPurchase(
    const PlayFabClientGetPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetPurchase",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetPurchaseResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetPurchaseResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetPurchaseResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetSharedGroupDataResult> ClientAPI::GetSharedGroupData(
    const PlayFabClientGetSharedGroupDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetSharedGroupData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetSharedGroupDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetSharedGroupDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetSharedGroupDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetStoreItemsResult> ClientAPI::GetStoreItems(
    const PlayFabClientGetStoreItemsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetStoreItems",
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

AsyncOp<ClientModels::GetTimeResult> ClientAPI::GetTime(
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetTime",
        headers,
        JsonValue{ rapidjson::kNullType },
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTimeResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTimeResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTimeResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetTitleDataResult> ClientAPI::GetTitleData(
    const PlayFabClientGetTitleDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetTitleData",
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

AsyncOp<ClientModels::GetTitleNewsResult> ClientAPI::GetTitleNews(
    const PlayFabClientGetTitleNewsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetTitleNews",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitleNewsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitleNewsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitleNewsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetTitlePublicKeyResult> ClientAPI::GetTitlePublicKey(
    const PlayFabClientGetTitlePublicKeyRequest& request,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    UnorderedMap<String, String> headers;
    // No auth header required for this API

    return httpClient->MakePostRequest(
        "/Client/GetTitlePublicKey",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTitlePublicKeyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTitlePublicKeyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTitlePublicKeyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetTradeStatusResponse> ClientAPI::GetTradeStatus(
    const PlayFabClientGetTradeStatusRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetTradeStatus",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GetTradeStatusResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetTradeStatusResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetTradeStatusResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::GetUserDataResult> ClientAPI::GetUserData(
    const PlayFabClientGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetUserData",
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

AsyncOp<ClientModels::GetUserInventoryResult> ClientAPI::GetUserInventory(
    const PlayFabClientGetUserInventoryRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetUserInventory",
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

AsyncOp<ClientModels::GetUserDataResult> ClientAPI::GetUserPublisherData(
    const PlayFabClientGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetUserPublisherData",
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

AsyncOp<ClientModels::GetUserDataResult> ClientAPI::GetUserPublisherReadOnlyData(
    const PlayFabClientGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetUserPublisherReadOnlyData",
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

AsyncOp<ClientModels::GetUserDataResult> ClientAPI::GetUserReadOnlyData(
    const PlayFabClientGetUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GetUserReadOnlyData",
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

AsyncOp<ClientModels::GrantCharacterToUserResult> ClientAPI::GrantCharacterToUser(
    const PlayFabClientGrantCharacterToUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/GrantCharacterToUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<GrantCharacterToUserResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantCharacterToUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantCharacterToUserResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ClientAPI::LinkAndroidDeviceID(
    const PlayFabClientLinkAndroidDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkAndroidDeviceID",
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

AsyncOp<void> ClientAPI::LinkApple(
    const PlayFabClientLinkAppleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkApple",
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

AsyncOp<void> ClientAPI::LinkCustomID(
    const PlayFabClientLinkCustomIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkCustomID",
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

AsyncOp<void> ClientAPI::LinkFacebookAccount(
    const PlayFabClientLinkFacebookAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkFacebookAccount",
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

AsyncOp<void> ClientAPI::LinkFacebookInstantGamesId(
    const PlayFabClientLinkFacebookInstantGamesIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkFacebookInstantGamesId",
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

AsyncOp<void> ClientAPI::LinkGameCenterAccount(
    const PlayFabClientLinkGameCenterAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkGameCenterAccount",
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

AsyncOp<void> ClientAPI::LinkGoogleAccount(
    const PlayFabClientLinkGoogleAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkGoogleAccount",
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

AsyncOp<void> ClientAPI::LinkIOSDeviceID(
    const PlayFabClientLinkIOSDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkIOSDeviceID",
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

AsyncOp<void> ClientAPI::LinkKongregate(
    const PlayFabClientLinkKongregateAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkKongregate",
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

AsyncOp<void> ClientAPI::LinkNintendoServiceAccount(
    const PlayFabClientLinkNintendoServiceAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkNintendoServiceAccount",
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

AsyncOp<void> ClientAPI::LinkNintendoSwitchDeviceId(
    const PlayFabClientLinkNintendoSwitchDeviceIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkNintendoSwitchDeviceId",
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

AsyncOp<void> ClientAPI::LinkOpenIdConnect(
    const PlayFabClientLinkOpenIdConnectRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkOpenIdConnect",
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

AsyncOp<void> ClientAPI::LinkPSNAccount(
    const PlayFabClientLinkPSNAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkPSNAccount",
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

AsyncOp<void> ClientAPI::LinkSteamAccount(
    const PlayFabClientLinkSteamAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkSteamAccount",
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

AsyncOp<void> ClientAPI::LinkTwitch(
    const PlayFabClientLinkTwitchAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkTwitch",
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

AsyncOp<void> ClientAPI::LinkXboxAccount(
    const PlayFabClientLinkXboxAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/LinkXboxAccount",
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

AsyncOp<ClientModels::MatchmakeResult> ClientAPI::Matchmake(
    const PlayFabClientMatchmakeRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/Matchmake",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<MatchmakeResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            MatchmakeResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<MatchmakeResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::OpenTradeResponse> ClientAPI::OpenTrade(
    const PlayFabClientOpenTradeRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/OpenTrade",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<OpenTradeResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            OpenTradeResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<OpenTradeResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::PayForPurchaseResult> ClientAPI::PayForPurchase(
    const PlayFabClientPayForPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/PayForPurchase",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<PayForPurchaseResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            PayForPurchaseResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<PayForPurchaseResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::PurchaseItemResult> ClientAPI::PurchaseItem(
    const PlayFabClientPurchaseItemRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/PurchaseItem",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<PurchaseItemResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            PurchaseItemResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<PurchaseItemResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::RedeemCouponResult> ClientAPI::RedeemCoupon(
    const PlayFabClientRedeemCouponRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RedeemCoupon",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RedeemCouponResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RedeemCouponResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RedeemCouponResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ClientAPI::RefreshPSNAuthToken(
    const PlayFabClientRefreshPSNAuthTokenRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RefreshPSNAuthToken",
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

AsyncOp<void> ClientAPI::RegisterForIOSPushNotification(
    const PlayFabClientRegisterForIOSPushNotificationRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RegisterForIOSPushNotification",
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

AsyncOp<void> ClientAPI::RemoveContactEmail(
    const PlayFabClientRemoveContactEmailRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RemoveContactEmail",
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

AsyncOp<void> ClientAPI::RemoveFriend(
    const PlayFabClientRemoveFriendRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RemoveFriend",
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

AsyncOp<void> ClientAPI::RemoveGenericID(
    const PlayFabClientRemoveGenericIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RemoveGenericID",
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

AsyncOp<void> ClientAPI::RemoveSharedGroupMembers(
    const PlayFabClientRemoveSharedGroupMembersRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RemoveSharedGroupMembers",
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

AsyncOp<void> ClientAPI::ReportAdActivity(
    const PlayFabClientReportAdActivityRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ReportAdActivity",
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

AsyncOp<void> ClientAPI::ReportDeviceInfo(
    const PlayFabClientDeviceInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ReportDeviceInfo",
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

AsyncOp<ClientModels::ReportPlayerClientResult> ClientAPI::ReportPlayer(
    const PlayFabClientReportPlayerClientRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ReportPlayer",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ReportPlayerClientResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ReportPlayerClientResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ReportPlayerClientResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::RestoreIOSPurchasesResult> ClientAPI::RestoreIOSPurchases(
    const PlayFabClientRestoreIOSPurchasesRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RestoreIOSPurchases",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RestoreIOSPurchasesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RestoreIOSPurchasesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RestoreIOSPurchasesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::RewardAdActivityResult> ClientAPI::RewardAdActivity(
    const PlayFabClientRewardAdActivityRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/RewardAdActivity",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<RewardAdActivityResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RewardAdActivityResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RewardAdActivityResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ClientAPI::SendAccountRecoveryEmail(
    const PlayFabClientSendAccountRecoveryEmailRequest& request,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    UnorderedMap<String, String> headers;
    // No auth header required for this API

    return httpClient->MakePostRequest(
        "/Client/SendAccountRecoveryEmail",
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

AsyncOp<void> ClientAPI::SetFriendTags(
    const PlayFabClientSetFriendTagsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/SetFriendTags",
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

AsyncOp<void> ClientAPI::SetPlayerSecret(
    const PlayFabClientSetPlayerSecretRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/SetPlayerSecret",
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

AsyncOp<ClientModels::StartGameResult> ClientAPI::StartGame(
    const PlayFabClientStartGameRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/StartGame",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<StartGameResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            StartGameResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<StartGameResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::StartPurchaseResult> ClientAPI::StartPurchase(
    const PlayFabClientStartPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/StartPurchase",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<StartPurchaseResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            StartPurchaseResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<StartPurchaseResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ModifyUserVirtualCurrencyResult> ClientAPI::SubtractUserVirtualCurrency(
    const PlayFabClientSubtractUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/SubtractUserVirtualCurrency",
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

AsyncOp<void> ClientAPI::UnlinkAndroidDeviceID(
    const PlayFabClientUnlinkAndroidDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkAndroidDeviceID",
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

AsyncOp<void> ClientAPI::UnlinkApple(
    const PlayFabClientUnlinkAppleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkApple",
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

AsyncOp<void> ClientAPI::UnlinkCustomID(
    const PlayFabClientUnlinkCustomIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkCustomID",
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

AsyncOp<void> ClientAPI::UnlinkFacebookAccount(
    const PlayFabClientUnlinkFacebookAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkFacebookAccount",
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

AsyncOp<void> ClientAPI::UnlinkFacebookInstantGamesId(
    const PlayFabClientUnlinkFacebookInstantGamesIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkFacebookInstantGamesId",
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

AsyncOp<void> ClientAPI::UnlinkGameCenterAccount(
    const PlayFabClientUnlinkGameCenterAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkGameCenterAccount",
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

AsyncOp<void> ClientAPI::UnlinkGoogleAccount(
    const PlayFabClientUnlinkGoogleAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkGoogleAccount",
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

AsyncOp<void> ClientAPI::UnlinkIOSDeviceID(
    const PlayFabClientUnlinkIOSDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkIOSDeviceID",
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

AsyncOp<void> ClientAPI::UnlinkKongregate(
    const PlayFabClientUnlinkKongregateAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkKongregate",
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

AsyncOp<void> ClientAPI::UnlinkNintendoServiceAccount(
    const PlayFabClientUnlinkNintendoServiceAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkNintendoServiceAccount",
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

AsyncOp<void> ClientAPI::UnlinkNintendoSwitchDeviceId(
    const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkNintendoSwitchDeviceId",
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

AsyncOp<void> ClientAPI::UnlinkOpenIdConnect(
    const PlayFabClientUnlinkOpenIdConnectRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkOpenIdConnect",
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

AsyncOp<void> ClientAPI::UnlinkPSNAccount(
    const PlayFabClientUnlinkPSNAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkPSNAccount",
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

AsyncOp<void> ClientAPI::UnlinkSteamAccount(
    const PlayFabClientUnlinkSteamAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkSteamAccount",
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

AsyncOp<void> ClientAPI::UnlinkTwitch(
    const PlayFabClientUnlinkTwitchAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkTwitch",
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

AsyncOp<void> ClientAPI::UnlinkXboxAccount(
    const PlayFabClientUnlinkXboxAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlinkXboxAccount",
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

AsyncOp<ClientModels::UnlockContainerItemResult> ClientAPI::UnlockContainerInstance(
    const PlayFabClientUnlockContainerInstanceRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlockContainerInstance",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UnlockContainerItemResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UnlockContainerItemResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::UnlockContainerItemResult> ClientAPI::UnlockContainerItem(
    const PlayFabClientUnlockContainerItemRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UnlockContainerItem",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UnlockContainerItemResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UnlockContainerItemResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ClientAPI::UpdateAvatarUrl(
    const PlayFabClientUpdateAvatarUrlRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdateAvatarUrl",
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

AsyncOp<ClientModels::UpdateCharacterDataResult> ClientAPI::UpdateCharacterData(
    const PlayFabClientUpdateCharacterDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdateCharacterData",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UpdateCharacterDataResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UpdateCharacterDataResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UpdateCharacterDataResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> ClientAPI::UpdateCharacterStatistics(
    const PlayFabClientUpdateCharacterStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdateCharacterStatistics",
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

AsyncOp<void> ClientAPI::UpdatePlayerStatistics(
    const PlayFabClientUpdatePlayerStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdatePlayerStatistics",
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

AsyncOp<void> ClientAPI::UpdateSharedGroupData(
    const PlayFabClientUpdateSharedGroupDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdateSharedGroupData",
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

AsyncOp<ClientModels::UpdateUserDataResult> ClientAPI::UpdateUserData(
    const PlayFabClientUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdateUserData",
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

AsyncOp<ClientModels::UpdateUserDataResult> ClientAPI::UpdateUserPublisherData(
    const PlayFabClientUpdateUserDataRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdateUserPublisherData",
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

AsyncOp<ClientModels::UpdateUserTitleDisplayNameResult> ClientAPI::UpdateUserTitleDisplayName(
    const PlayFabClientUpdateUserTitleDisplayNameRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/UpdateUserTitleDisplayName",
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

AsyncOp<ClientModels::ValidateAmazonReceiptResult> ClientAPI::ValidateAmazonIAPReceipt(
    const PlayFabClientValidateAmazonReceiptRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ValidateAmazonIAPReceipt",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ValidateAmazonReceiptResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ValidateAmazonReceiptResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ValidateAmazonReceiptResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ValidateGooglePlayPurchaseResult> ClientAPI::ValidateGooglePlayPurchase(
    const PlayFabClientValidateGooglePlayPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ValidateGooglePlayPurchase",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ValidateGooglePlayPurchaseResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ValidateGooglePlayPurchaseResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ValidateGooglePlayPurchaseResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ValidateIOSReceiptResult> ClientAPI::ValidateIOSReceipt(
    const PlayFabClientValidateIOSReceiptRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ValidateIOSReceipt",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ValidateIOSReceiptResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ValidateIOSReceiptResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ValidateIOSReceiptResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::ValidateWindowsReceiptResult> ClientAPI::ValidateWindowsStoreReceipt(
    const PlayFabClientValidateWindowsReceiptRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/ValidateWindowsStoreReceipt",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<ValidateWindowsReceiptResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ValidateWindowsReceiptResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ValidateWindowsReceiptResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::WriteEventResponse> ClientAPI::WriteCharacterEvent(
    const PlayFabClientWriteClientCharacterEventRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/WriteCharacterEvent",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::WriteEventResponse> ClientAPI::WritePlayerEvent(
    const PlayFabClientWriteClientPlayerEventRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/WritePlayerEvent",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ClientModels::WriteEventResponse> ClientAPI::WriteTitleEvent(
    const PlayFabClientWriteTitleEventRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PLAYFAB_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    return m_httpClient->MakePostRequest(
        "/Client/WriteTitleEvent",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<WriteEventResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            WriteEventResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<WriteEventResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
