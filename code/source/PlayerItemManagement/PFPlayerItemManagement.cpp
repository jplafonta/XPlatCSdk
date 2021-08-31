#include "stdafx.h"
#include <playfab/PFPlayerItemManagement.h>
#include "PlayerItemManagement.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::PlayerItemManagementModels;

HRESULT PFPlayerItemManagementAdminAddUserVirtualCurrencyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementAdminAddUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminAddUserVirtualCurrency, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminAddUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementAdminAddUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementAdminCheckLimitedEditionItemAvailabilityAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementCheckLimitedEditionItemAvailabilityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminCheckLimitedEditionItemAvailability, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminCheckLimitedEditionItemAvailabilityGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerItemManagementCheckLimitedEditionItemAvailabilityResult), result, nullptr);
}

HRESULT PFPlayerItemManagementAdminGetUserInventoryAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementAdminGetUserInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminGetUserInventory, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminGetUserInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementAdminGetUserInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementAdminGetUserInventoryResult*)(std::dynamic_pointer_cast<AdminGetUserInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementAdminGrantItemsToUsersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementGrantItemsToUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminGrantItemsToUsers, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminGrantItemsToUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementGrantItemsToUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementGrantItemsToUsersResult*)(std::dynamic_pointer_cast<GrantItemsToUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementAdminIncrementLimitedEditionItemAvailabilityAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementIncrementLimitedEditionItemAvailabilityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminIncrementLimitedEditionItemAvailability, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminRevokeInventoryItemAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementRevokeInventoryItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminRevokeInventoryItem, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminRevokeInventoryItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementRevokeInventoryItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminRevokeInventoryItems, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminRevokeInventoryItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementRevokeInventoryItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementRevokeInventoryItemsResult*)(std::dynamic_pointer_cast<RevokeInventoryItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementAdminSubtractUserVirtualCurrencyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementAdminSubtractUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::AdminSubtractUserVirtualCurrency, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementAdminSubtractUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementAdminSubtractUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementClientAddUserVirtualCurrencyAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientAddUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientAddUserVirtualCurrency, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientAddUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementClientAddUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementClientConfirmPurchaseAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementConfirmPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientConfirmPurchase, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientConfirmPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementConfirmPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementConfirmPurchaseResult*)(std::dynamic_pointer_cast<ConfirmPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientConsumeItemAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientConsumeItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientConsumeItem, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientConsumeItemGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementClientConsumeItemGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementConsumeItemResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementConsumeItemResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementClientGetCharacterInventoryAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientGetCharacterInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientGetCharacterInventory, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientGetCharacterInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementClientGetCharacterInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementClientGetCharacterInventoryResult*)(std::dynamic_pointer_cast<ClientGetCharacterInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientGetPaymentTokenAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementGetPaymentTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientGetPaymentToken, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientGetPaymentTokenGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementClientGetPaymentTokenGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementGetPaymentTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementGetPaymentTokenResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementClientGetPurchaseAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementGetPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientGetPurchase, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientGetPurchaseGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementClientGetPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementGetPurchaseResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementGetPurchaseResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementClientGetUserInventoryAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientGetUserInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientGetUserInventory, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientGetUserInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementClientGetUserInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementClientGetUserInventoryResult*)(std::dynamic_pointer_cast<ClientGetUserInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientPayForPurchaseAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementPayForPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientPayForPurchase, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientPayForPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementPayForPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementPayForPurchaseResult*)(std::dynamic_pointer_cast<PayForPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientPurchaseItemAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementPurchaseItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientPurchaseItem, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientPurchaseItemGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementPurchaseItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementPurchaseItemResult*)(std::dynamic_pointer_cast<PurchaseItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientRedeemCouponAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientRedeemCouponRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientRedeemCoupon, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientRedeemCouponGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementRedeemCouponResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementRedeemCouponResult*)(std::dynamic_pointer_cast<RedeemCouponResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientStartPurchaseAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementStartPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientStartPurchase, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientStartPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementStartPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementStartPurchaseResult*)(std::dynamic_pointer_cast<StartPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientSubtractUserVirtualCurrencyAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientSubtractUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientSubtractUserVirtualCurrency, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientSubtractUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementClientSubtractUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementClientUnlockContainerInstanceAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientUnlockContainerInstanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientUnlockContainerInstance, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientUnlockContainerInstanceGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementClientUnlockContainerItemAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFPlayerItemManagementClientUnlockContainerItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ClientUnlockContainerItem, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementClientUnlockContainerItemGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerAddCharacterVirtualCurrencyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementAddCharacterVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerAddCharacterVirtualCurrency, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerAddCharacterVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementServerAddCharacterVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyCharacterVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyCharacterVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementServerAddUserVirtualCurrencyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerAddUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerAddUserVirtualCurrency, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerAddUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementServerAddUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementServerConsumeItemAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerConsumeItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerConsumeItem, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerConsumeItemGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementServerConsumeItemGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementConsumeItemResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementConsumeItemResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementServerEvaluateRandomResultTableAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementEvaluateRandomResultTableRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerEvaluateRandomResultTable, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerEvaluateRandomResultTableGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementServerEvaluateRandomResultTableGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementEvaluateRandomResultTableResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementEvaluateRandomResultTableResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementServerGetCharacterInventoryAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerGetCharacterInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerGetCharacterInventory, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerGetCharacterInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementServerGetCharacterInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementServerGetCharacterInventoryResult*)(std::dynamic_pointer_cast<ServerGetCharacterInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerGetRandomResultTablesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementGetRandomResultTablesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerGetRandomResultTables, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerGetRandomResultTablesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGetRandomResultTablesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGetRandomResultTablesResult*)(std::dynamic_pointer_cast<GetRandomResultTablesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerGetUserInventoryAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerGetUserInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerGetUserInventory, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerGetUserInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementServerGetUserInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementServerGetUserInventoryResult*)(std::dynamic_pointer_cast<ServerGetUserInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerGrantItemsToCharacterAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementGrantItemsToCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerGrantItemsToCharacter, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerGrantItemsToCharacterGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementGrantItemsToCharacterResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementGrantItemsToCharacterResult*)(std::dynamic_pointer_cast<GrantItemsToCharacterResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerGrantItemsToUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementGrantItemsToUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerGrantItemsToUser, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerGrantItemsToUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementGrantItemsToUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementGrantItemsToUserResult*)(std::dynamic_pointer_cast<GrantItemsToUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerGrantItemsToUsersAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementGrantItemsToUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerGrantItemsToUsers, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerGrantItemsToUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementGrantItemsToUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementGrantItemsToUsersResult*)(std::dynamic_pointer_cast<GrantItemsToUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerModifyItemUsesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementModifyItemUsesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerModifyItemUses, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerModifyItemUsesGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementServerModifyItemUsesGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyItemUsesResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyItemUsesResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementServerMoveItemToCharacterFromCharacterAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementMoveItemToCharacterFromCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerMoveItemToCharacterFromCharacter, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerMoveItemToCharacterFromUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementMoveItemToCharacterFromUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerMoveItemToCharacterFromUser, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerMoveItemToUserFromCharacterAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementMoveItemToUserFromCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerMoveItemToUserFromCharacter, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerRedeemCouponAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerRedeemCouponRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerRedeemCoupon, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerRedeemCouponGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementRedeemCouponResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementRedeemCouponResult*)(std::dynamic_pointer_cast<RedeemCouponResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerReportPlayerAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementReportPlayerServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerReportPlayer, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerReportPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerItemManagementReportPlayerServerResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerItemManagementReportPlayerServerResult), result, nullptr);
}

HRESULT PFPlayerItemManagementServerRevokeInventoryItemAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementRevokeInventoryItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerRevokeInventoryItem, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerRevokeInventoryItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementRevokeInventoryItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerRevokeInventoryItems, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerRevokeInventoryItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementRevokeInventoryItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementRevokeInventoryItemsResult*)(std::dynamic_pointer_cast<RevokeInventoryItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerSubtractCharacterVirtualCurrencyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementSubtractCharacterVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerSubtractCharacterVirtualCurrency, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerSubtractCharacterVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementServerSubtractCharacterVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyCharacterVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyCharacterVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementServerSubtractUserVirtualCurrencyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerSubtractUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerSubtractUserVirtualCurrency, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerSubtractUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerItemManagementServerSubtractUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerItemManagementModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerItemManagementModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerItemManagementServerUnlockContainerInstanceAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerUnlockContainerInstanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerUnlockContainerInstance, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerUnlockContainerInstanceGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerUnlockContainerItemAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementServerUnlockContainerItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerUnlockContainerItem, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerItemManagementServerUnlockContainerItemGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerItemManagementUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerItemManagementUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerItemManagementServerUpdateUserInventoryItemCustomDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerItemManagementUpdateUserInventoryItemDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerItemManagementAPI::ServerUpdateUserInventoryItemCustomData, contextHandle->state, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

