#include "stdafx.h"
#include "PlayerItemManagement.h"

namespace PlayFab
{

using namespace PlayerItemManagementModels;

PlayerItemManagementAPI::PlayerItemManagementAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<ModifyUserVirtualCurrencyResult> PlayerItemManagementAPI::AdminAddUserVirtualCurrency(
    const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/AddUserVirtualCurrency" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
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

AsyncOp<CheckLimitedEditionItemAvailabilityResult> PlayerItemManagementAPI::AdminCheckLimitedEditionItemAvailability(
    const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/CheckLimitedEditionItemAvailability" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CheckLimitedEditionItemAvailabilityResult>
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

AsyncOp<AdminGetUserInventoryResult> PlayerItemManagementAPI::AdminGetUserInventory(
    const PFPlayerItemManagementAdminGetUserInventoryRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GetUserInventory" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<AdminGetUserInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AdminGetUserInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AdminGetUserInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GrantItemsToUsersResult> PlayerItemManagementAPI::AdminGrantItemsToUsers(
    const PFPlayerItemManagementGrantItemsToUsersRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GrantItemsToUsers" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GrantItemsToUsersResult>
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

AsyncOp<void> PlayerItemManagementAPI::AdminIncrementLimitedEditionItemAvailability(
    const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/IncrementLimitedEditionItemAvailability" };
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

AsyncOp<void> PlayerItemManagementAPI::AdminRevokeInventoryItem(
    const PFPlayerItemManagementRevokeInventoryItemRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/RevokeInventoryItem" };
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

AsyncOp<RevokeInventoryItemsResult> PlayerItemManagementAPI::AdminRevokeInventoryItems(
    const PFPlayerItemManagementRevokeInventoryItemsRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/RevokeInventoryItems" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RevokeInventoryItemsResult>
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

AsyncOp<ModifyUserVirtualCurrencyResult> PlayerItemManagementAPI::AdminSubtractUserVirtualCurrency(
    const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/SubtractUserVirtualCurrency" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
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

AsyncOp<ModifyUserVirtualCurrencyResult> PlayerItemManagementAPI::ClientAddUserVirtualCurrency(
    const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/AddUserVirtualCurrency" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
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

AsyncOp<ConfirmPurchaseResult> PlayerItemManagementAPI::ClientConfirmPurchase(
    const PFPlayerItemManagementConfirmPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/ConfirmPurchase" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ConfirmPurchaseResult>
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

AsyncOp<ConsumeItemResult> PlayerItemManagementAPI::ClientConsumeItem(
    const PFPlayerItemManagementClientConsumeItemRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/ConsumeItem" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ConsumeItemResult>
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

AsyncOp<ClientGetCharacterInventoryResult> PlayerItemManagementAPI::ClientGetCharacterInventory(
    const PFPlayerItemManagementClientGetCharacterInventoryRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetCharacterInventory" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ClientGetCharacterInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ClientGetCharacterInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ClientGetCharacterInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetPaymentTokenResult> PlayerItemManagementAPI::ClientGetPaymentToken(
    const PFPlayerItemManagementGetPaymentTokenRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetPaymentToken" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetPaymentTokenResult>
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

AsyncOp<GetPurchaseResult> PlayerItemManagementAPI::ClientGetPurchase(
    const PFPlayerItemManagementGetPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetPurchase" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetPurchaseResult>
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

AsyncOp<ClientGetUserInventoryResult> PlayerItemManagementAPI::ClientGetUserInventory(
    const PFPlayerItemManagementClientGetUserInventoryRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetUserInventory" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ClientGetUserInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ClientGetUserInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ClientGetUserInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<PayForPurchaseResult> PlayerItemManagementAPI::ClientPayForPurchase(
    const PFPlayerItemManagementPayForPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/PayForPurchase" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<PayForPurchaseResult>
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

AsyncOp<PurchaseItemResult> PlayerItemManagementAPI::ClientPurchaseItem(
    const PFPlayerItemManagementPurchaseItemRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/PurchaseItem" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<PurchaseItemResult>
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

AsyncOp<RedeemCouponResult> PlayerItemManagementAPI::ClientRedeemCoupon(
    const PFPlayerItemManagementClientRedeemCouponRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/RedeemCoupon" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RedeemCouponResult>
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

AsyncOp<StartPurchaseResult> PlayerItemManagementAPI::ClientStartPurchase(
    const PFPlayerItemManagementStartPurchaseRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/StartPurchase" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<StartPurchaseResult>
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

AsyncOp<ModifyUserVirtualCurrencyResult> PlayerItemManagementAPI::ClientSubtractUserVirtualCurrency(
    const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/SubtractUserVirtualCurrency" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
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

AsyncOp<UnlockContainerItemResult> PlayerItemManagementAPI::ClientUnlockContainerInstance(
    const PFPlayerItemManagementClientUnlockContainerInstanceRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/UnlockContainerInstance" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
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

AsyncOp<UnlockContainerItemResult> PlayerItemManagementAPI::ClientUnlockContainerItem(
    const PFPlayerItemManagementClientUnlockContainerItemRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/UnlockContainerItem" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
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

AsyncOp<ModifyCharacterVirtualCurrencyResult> PlayerItemManagementAPI::ServerAddCharacterVirtualCurrency(
    const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/AddCharacterVirtualCurrency" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyCharacterVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyCharacterVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyCharacterVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ModifyUserVirtualCurrencyResult> PlayerItemManagementAPI::ServerAddUserVirtualCurrency(
    const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/AddUserVirtualCurrency" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
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

AsyncOp<ConsumeItemResult> PlayerItemManagementAPI::ServerConsumeItem(
    const PFPlayerItemManagementServerConsumeItemRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/ConsumeItem" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ConsumeItemResult>
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

AsyncOp<EvaluateRandomResultTableResult> PlayerItemManagementAPI::ServerEvaluateRandomResultTable(
    const PFPlayerItemManagementEvaluateRandomResultTableRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/EvaluateRandomResultTable" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<EvaluateRandomResultTableResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            EvaluateRandomResultTableResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<EvaluateRandomResultTableResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ServerGetCharacterInventoryResult> PlayerItemManagementAPI::ServerGetCharacterInventory(
    const PFPlayerItemManagementServerGetCharacterInventoryRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/GetCharacterInventory" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ServerGetCharacterInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerGetCharacterInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ServerGetCharacterInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetRandomResultTablesResult> PlayerItemManagementAPI::ServerGetRandomResultTables(
    const PFPlayerItemManagementGetRandomResultTablesRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/GetRandomResultTables" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetRandomResultTablesResult>
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

AsyncOp<ServerGetUserInventoryResult> PlayerItemManagementAPI::ServerGetUserInventory(
    const PFPlayerItemManagementServerGetUserInventoryRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/GetUserInventory" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ServerGetUserInventoryResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerGetUserInventoryResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ServerGetUserInventoryResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GrantItemsToCharacterResult> PlayerItemManagementAPI::ServerGrantItemsToCharacter(
    const PFPlayerItemManagementGrantItemsToCharacterRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/GrantItemsToCharacter" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GrantItemsToCharacterResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantItemsToCharacterResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantItemsToCharacterResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GrantItemsToUserResult> PlayerItemManagementAPI::ServerGrantItemsToUser(
    const PFPlayerItemManagementGrantItemsToUserRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/GrantItemsToUser" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GrantItemsToUserResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GrantItemsToUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GrantItemsToUserResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GrantItemsToUsersResult> PlayerItemManagementAPI::ServerGrantItemsToUsers(
    const PFPlayerItemManagementGrantItemsToUsersRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/GrantItemsToUsers" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GrantItemsToUsersResult>
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

AsyncOp<ModifyItemUsesResult> PlayerItemManagementAPI::ServerModifyItemUses(
    const PFPlayerItemManagementModifyItemUsesRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/ModifyItemUses" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyItemUsesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyItemUsesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyItemUsesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> PlayerItemManagementAPI::ServerMoveItemToCharacterFromCharacter(
    const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/MoveItemToCharacterFromCharacter" };
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

AsyncOp<void> PlayerItemManagementAPI::ServerMoveItemToCharacterFromUser(
    const PFPlayerItemManagementMoveItemToCharacterFromUserRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/MoveItemToCharacterFromUser" };
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

AsyncOp<void> PlayerItemManagementAPI::ServerMoveItemToUserFromCharacter(
    const PFPlayerItemManagementMoveItemToUserFromCharacterRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/MoveItemToUserFromCharacter" };
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

AsyncOp<RedeemCouponResult> PlayerItemManagementAPI::ServerRedeemCoupon(
    const PFPlayerItemManagementServerRedeemCouponRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/RedeemCoupon" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RedeemCouponResult>
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

AsyncOp<ReportPlayerServerResult> PlayerItemManagementAPI::ServerReportPlayer(
    const PFPlayerItemManagementReportPlayerServerRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/ReportPlayer" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ReportPlayerServerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ReportPlayerServerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ReportPlayerServerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> PlayerItemManagementAPI::ServerRevokeInventoryItem(
    const PFPlayerItemManagementRevokeInventoryItemRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/RevokeInventoryItem" };
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

AsyncOp<RevokeInventoryItemsResult> PlayerItemManagementAPI::ServerRevokeInventoryItems(
    const PFPlayerItemManagementRevokeInventoryItemsRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/RevokeInventoryItems" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RevokeInventoryItemsResult>
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

AsyncOp<ModifyCharacterVirtualCurrencyResult> PlayerItemManagementAPI::ServerSubtractCharacterVirtualCurrency(
    const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/SubtractCharacterVirtualCurrency" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyCharacterVirtualCurrencyResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ModifyCharacterVirtualCurrencyResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ModifyCharacterVirtualCurrencyResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ModifyUserVirtualCurrencyResult> PlayerItemManagementAPI::ServerSubtractUserVirtualCurrency(
    const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/SubtractUserVirtualCurrency" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
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

AsyncOp<UnlockContainerItemResult> PlayerItemManagementAPI::ServerUnlockContainerInstance(
    const PFPlayerItemManagementServerUnlockContainerInstanceRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/UnlockContainerInstance" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
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

AsyncOp<UnlockContainerItemResult> PlayerItemManagementAPI::ServerUnlockContainerItem(
    const PFPlayerItemManagementServerUnlockContainerItemRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/UnlockContainerItem" };
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

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
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

AsyncOp<void> PlayerItemManagementAPI::ServerUpdateUserInventoryItemCustomData(
    const PFPlayerItemManagementUpdateUserInventoryItemDataRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/UpdateUserInventoryItemCustomData" };
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
