#include "stdafx.h"
#include <playfab/PlayFabClientApi.h>
#include "ClientApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::ClientModels;

HRESULT PlayFabClientAcceptTradeAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAcceptTradeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AcceptTrade, &contextHandle->entity->clientAPI, AcceptTradeRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAcceptTradeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientAcceptTradeResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientAcceptTradeResponse*)(std::dynamic_pointer_cast<AcceptTradeResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientAddFriendAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAddFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AddFriend, &contextHandle->entity->clientAPI, AddFriendRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAddFriendGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabClientAddFriendResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabClientAddFriendResult), result, nullptr);
}

HRESULT PlayFabClientAddGenericIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAddGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AddGenericID, &contextHandle->entity->clientAPI, AddGenericIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAddOrUpdateContactEmailAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAddOrUpdateContactEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AddOrUpdateContactEmail, &contextHandle->entity->clientAPI, AddOrUpdateContactEmailRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAddSharedGroupMembersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAddSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AddSharedGroupMembers, &contextHandle->entity->clientAPI, AddSharedGroupMembersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAddUsernamePasswordAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAddUsernamePasswordRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AddUsernamePassword, &contextHandle->entity->clientAPI, AddUsernamePasswordRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAddUsernamePasswordGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientAddUsernamePasswordGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientAddUsernamePasswordResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientAddUsernamePasswordResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientAddUserVirtualCurrencyAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAddUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AddUserVirtualCurrency, &contextHandle->entity->clientAPI, AddUserVirtualCurrencyRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAddUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientAddUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientAndroidDevicePushNotificationRegistrationAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAndroidDevicePushNotificationRegistrationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AndroidDevicePushNotificationRegistration, &contextHandle->entity->clientAPI, AndroidDevicePushNotificationRegistrationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientAttributeInstallAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientAttributeInstallRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::AttributeInstall, &contextHandle->entity->clientAPI, AttributeInstallRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientCancelTradeAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientCancelTradeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::CancelTrade, &contextHandle->entity->clientAPI, CancelTradeRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientCancelTradeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientCancelTradeResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientCancelTradeResponse*)(std::dynamic_pointer_cast<CancelTradeResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientConfirmPurchaseAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientConfirmPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ConfirmPurchase, &contextHandle->entity->clientAPI, ConfirmPurchaseRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientConfirmPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConfirmPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientConfirmPurchaseResult*)(std::dynamic_pointer_cast<ConfirmPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientConsumeItemAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientConsumeItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ConsumeItem, &contextHandle->entity->clientAPI, ConsumeItemRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientConsumeItemGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientConsumeItemGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientConsumeItemResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientConsumeItemResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientConsumeMicrosoftStoreEntitlementsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ConsumeMicrosoftStoreEntitlements, &contextHandle->entity->clientAPI, ConsumeMicrosoftStoreEntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientConsumeMicrosoftStoreEntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumeMicrosoftStoreEntitlementsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientConsumeMicrosoftStoreEntitlementsResponse*)(std::dynamic_pointer_cast<ConsumeMicrosoftStoreEntitlementsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientConsumePS5EntitlementsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientConsumePS5EntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ConsumePS5Entitlements, &contextHandle->entity->clientAPI, ConsumePS5EntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientConsumePS5EntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumePS5EntitlementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientConsumePS5EntitlementsResult*)(std::dynamic_pointer_cast<ConsumePS5EntitlementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientConsumePSNEntitlementsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientConsumePSNEntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ConsumePSNEntitlements, &contextHandle->entity->clientAPI, ConsumePSNEntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientConsumePSNEntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumePSNEntitlementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientConsumePSNEntitlementsResult*)(std::dynamic_pointer_cast<ConsumePSNEntitlementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientConsumeXboxEntitlementsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientConsumeXboxEntitlementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ConsumeXboxEntitlements, &contextHandle->entity->clientAPI, ConsumeXboxEntitlementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientConsumeXboxEntitlementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumeXboxEntitlementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientConsumeXboxEntitlementsResult*)(std::dynamic_pointer_cast<ConsumeXboxEntitlementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientCreateSharedGroupAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientCreateSharedGroupRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::CreateSharedGroup, &contextHandle->entity->clientAPI, CreateSharedGroupRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientCreateSharedGroupGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientCreateSharedGroupGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientCreateSharedGroupResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientExecuteCloudScriptAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientExecuteCloudScriptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ExecuteCloudScript, &contextHandle->entity->clientAPI, ExecuteCloudScriptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientExecuteCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientExecuteCloudScriptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientExecuteCloudScriptResult*)(std::dynamic_pointer_cast<ExecuteCloudScriptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetAccountInfoAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetAccountInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetAccountInfo, &contextHandle->entity->clientAPI, GetAccountInfoRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetAccountInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetAccountInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetAccountInfoResult*)(std::dynamic_pointer_cast<GetAccountInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetAdPlacementsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetAdPlacementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetAdPlacements, &contextHandle->entity->clientAPI, GetAdPlacementsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetAdPlacementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetAdPlacementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetAdPlacementsResult*)(std::dynamic_pointer_cast<GetAdPlacementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetAllUsersCharactersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientListUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetAllUsersCharacters, &contextHandle->entity->clientAPI, ListUsersCharactersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetAllUsersCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientListUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientListUsersCharactersResult*)(std::dynamic_pointer_cast<ListUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetCatalogItemsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetCatalogItems, &contextHandle->entity->clientAPI, GetCatalogItemsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetCatalogItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCatalogItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetCatalogItemsResult*)(std::dynamic_pointer_cast<GetCatalogItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetCharacterDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetCharacterData, &contextHandle->entity->clientAPI, GetCharacterDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetCharacterDataResult*)(std::dynamic_pointer_cast<GetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetCharacterInventoryAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetCharacterInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetCharacterInventory, &contextHandle->entity->clientAPI, GetCharacterInventoryRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetCharacterInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetCharacterInventoryResult*)(std::dynamic_pointer_cast<GetCharacterInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetCharacterLeaderboardAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetCharacterLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetCharacterLeaderboard, &contextHandle->entity->clientAPI, GetCharacterLeaderboardRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetCharacterLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetCharacterLeaderboardResult*)(std::dynamic_pointer_cast<GetCharacterLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetCharacterReadOnlyDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetCharacterReadOnlyData, &contextHandle->entity->clientAPI, GetCharacterDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetCharacterReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetCharacterDataResult*)(std::dynamic_pointer_cast<GetCharacterDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetCharacterStatisticsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetCharacterStatistics, &contextHandle->entity->clientAPI, GetCharacterStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetCharacterStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetCharacterStatisticsResult*)(std::dynamic_pointer_cast<GetCharacterStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetContentDownloadUrlAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetContentDownloadUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetContentDownloadUrl, &contextHandle->entity->clientAPI, GetContentDownloadUrlRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetContentDownloadUrlGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientGetContentDownloadUrlGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetContentDownloadUrlResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientGetContentDownloadUrlResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientGetCurrentGamesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientCurrentGamesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetCurrentGames, &contextHandle->entity->clientAPI, CurrentGamesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetCurrentGamesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientCurrentGamesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientCurrentGamesResult*)(std::dynamic_pointer_cast<CurrentGamesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetFriendLeaderboardAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetFriendLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetFriendLeaderboard, &contextHandle->entity->clientAPI, GetFriendLeaderboardRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetFriendLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetFriendLeaderboardAroundPlayerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetFriendLeaderboardAroundPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetFriendLeaderboardAroundPlayer, &contextHandle->entity->clientAPI, GetFriendLeaderboardAroundPlayerRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetFriendLeaderboardAroundPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetFriendLeaderboardAroundPlayerResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetFriendLeaderboardAroundPlayerResult*)(std::dynamic_pointer_cast<GetFriendLeaderboardAroundPlayerResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetFriendsListAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetFriendsListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetFriendsList, &contextHandle->entity->clientAPI, GetFriendsListRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetFriendsListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetFriendsListResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetFriendsListResult*)(std::dynamic_pointer_cast<GetFriendsListResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetGameServerRegionsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGameServerRegionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetGameServerRegions, &contextHandle->entity->clientAPI, GameServerRegionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetGameServerRegionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGameServerRegionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGameServerRegionsResult*)(std::dynamic_pointer_cast<GameServerRegionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetLeaderboardAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetLeaderboard, &contextHandle->entity->clientAPI, GetLeaderboardRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetLeaderboardAroundCharacterAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetLeaderboardAroundCharacterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetLeaderboardAroundCharacter, &contextHandle->entity->clientAPI, GetLeaderboardAroundCharacterRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetLeaderboardAroundCharacterGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardAroundCharacterResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetLeaderboardAroundCharacterResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundCharacterResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetLeaderboardAroundPlayerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetLeaderboardAroundPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetLeaderboardAroundPlayer, &contextHandle->entity->clientAPI, GetLeaderboardAroundPlayerRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetLeaderboardAroundPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardAroundPlayerResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetLeaderboardAroundPlayerResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundPlayerResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetLeaderboardForUserCharactersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetLeaderboardForUsersCharactersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetLeaderboardForUserCharacters, &contextHandle->entity->clientAPI, GetLeaderboardForUsersCharactersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetLeaderboardForUserCharactersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardForUsersCharactersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetLeaderboardForUsersCharactersResult*)(std::dynamic_pointer_cast<GetLeaderboardForUsersCharactersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPaymentTokenAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPaymentTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPaymentToken, &contextHandle->entity->clientAPI, GetPaymentTokenRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPaymentTokenGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientGetPaymentTokenGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetPaymentTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientGetPaymentTokenResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientGetPhotonAuthenticationTokenAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPhotonAuthenticationTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPhotonAuthenticationToken, &contextHandle->entity->clientAPI, GetPhotonAuthenticationTokenRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPhotonAuthenticationTokenGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientGetPhotonAuthenticationTokenGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetPhotonAuthenticationTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientGetPhotonAuthenticationTokenResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientGetPlayerCombinedInfoAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayerCombinedInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayerCombinedInfo, &contextHandle->entity->clientAPI, GetPlayerCombinedInfoRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayerCombinedInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerCombinedInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayerCombinedInfoResult*)(std::dynamic_pointer_cast<GetPlayerCombinedInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayerProfileAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayerProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayerProfile, &contextHandle->entity->clientAPI, GetPlayerProfileRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayerProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerProfileResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayerProfileResult*)(std::dynamic_pointer_cast<GetPlayerProfileResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayerSegmentsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayerSegments, &contextHandle->entity->clientAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayerSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayerSegmentsResult*)(std::dynamic_pointer_cast<GetPlayerSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayerStatisticsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayerStatistics, &contextHandle->entity->clientAPI, GetPlayerStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayerStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayerStatisticsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayerStatisticVersionsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayerStatisticVersionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayerStatisticVersions, &contextHandle->entity->clientAPI, GetPlayerStatisticVersionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayerStatisticVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerStatisticVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayerStatisticVersionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayerTagsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayerTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayerTags, &contextHandle->entity->clientAPI, GetPlayerTagsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayerTagsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerTagsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayerTagsResult*)(std::dynamic_pointer_cast<GetPlayerTagsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayerTradesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayerTradesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayerTrades, &contextHandle->entity->clientAPI, GetPlayerTradesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayerTradesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerTradesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayerTradesResponse*)(std::dynamic_pointer_cast<GetPlayerTradesResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromFacebookIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromFacebookIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromFacebookIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromFacebookIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromFacebookIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromFacebookIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromFacebookInstantGamesIds, &contextHandle->entity->clientAPI, GetPlayFabIDsFromFacebookInstantGamesIdsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromFacebookInstantGamesIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromGameCenterIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromGameCenterIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromGameCenterIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromGameCenterIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromGameCenterIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromGameCenterIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGameCenterIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromGenericIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromGenericIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromGenericIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromGenericIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromGenericIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromGenericIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromGenericIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGenericIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromGoogleIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromGoogleIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromGoogleIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromGoogleIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromGoogleIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromGoogleIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromGoogleIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromKongregateIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromKongregateIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromKongregateIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromKongregateIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromKongregateIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromKongregateIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromKongregateIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromNintendoSwitchDeviceIds, &contextHandle->entity->clientAPI, GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromPSNAccountIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromPSNAccountIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromPSNAccountIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromPSNAccountIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromPSNAccountIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromSteamIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromSteamIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromSteamIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromSteamIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromSteamIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromSteamIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromSteamIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromSteamIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromTwitchIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromTwitchIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromTwitchIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromTwitchIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromTwitchIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromTwitchIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromTwitchIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPlayFabIDsFromXboxLiveIDsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPlayFabIDsFromXboxLiveIDs, &contextHandle->entity->clientAPI, GetPlayFabIDsFromXboxLiveIDsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPlayFabIDsFromXboxLiveIDsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult*)(std::dynamic_pointer_cast<GetPlayFabIDsFromXboxLiveIDsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPublisherDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPublisherData, &contextHandle->entity->clientAPI, GetPublisherDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPublisherDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetPublisherDataResult*)(std::dynamic_pointer_cast<GetPublisherDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetPurchaseAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetPurchase, &contextHandle->entity->clientAPI, GetPurchaseRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetPurchaseGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientGetPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetPurchaseResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientGetPurchaseResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientGetSharedGroupDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetSharedGroupData, &contextHandle->entity->clientAPI, GetSharedGroupDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetSharedGroupDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetSharedGroupDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetSharedGroupDataResult*)(std::dynamic_pointer_cast<GetSharedGroupDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetStoreItemsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetStoreItems, &contextHandle->entity->clientAPI, GetStoreItemsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetStoreItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetStoreItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetStoreItemsResult*)(std::dynamic_pointer_cast<GetStoreItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetTimeAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetTime, &contextHandle->entity->clientAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetTimeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabClientGetTimeResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabClientGetTimeResult), result, nullptr);
}

HRESULT PlayFabClientGetTitleDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetTitleData, &contextHandle->entity->clientAPI, GetTitleDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetTitleDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetTitleNewsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetTitleNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetTitleNews, &contextHandle->entity->clientAPI, GetTitleNewsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetTitleNewsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetTitleNewsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetTitleNewsResult*)(std::dynamic_pointer_cast<GetTitleNewsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetTitlePublicKeyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabClientGetTitlePublicKeyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ClientAPI::GetTitlePublicKey, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetTitlePublicKeyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientGetTitlePublicKeyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetTitlePublicKeyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientGetTitlePublicKeyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientGetTradeStatusAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetTradeStatusRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetTradeStatus, &contextHandle->entity->clientAPI, GetTradeStatusRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetTradeStatusGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetTradeStatusResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetTradeStatusResponse*)(std::dynamic_pointer_cast<GetTradeStatusResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetUserDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetUserData, &contextHandle->entity->clientAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetUserInventoryAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetUserInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetUserInventory, &contextHandle->entity->clientAPI, GetUserInventoryRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetUserInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetUserInventoryResult*)(std::dynamic_pointer_cast<GetUserInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetUserPublisherDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetUserPublisherData, &contextHandle->entity->clientAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetUserPublisherReadOnlyDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetUserPublisherReadOnlyData, &contextHandle->entity->clientAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGetUserReadOnlyDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GetUserReadOnlyData, &contextHandle->entity->clientAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGetUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientGrantCharacterToUserAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientGrantCharacterToUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::GrantCharacterToUser, &contextHandle->entity->clientAPI, GrantCharacterToUserRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientGrantCharacterToUserGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientGrantCharacterToUserGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGrantCharacterToUserResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientGrantCharacterToUserResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientLinkAndroidDeviceIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkAndroidDeviceID, &contextHandle->entity->clientAPI, LinkAndroidDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkAppleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkApple, &contextHandle->entity->clientAPI, LinkAppleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkCustomIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkCustomID, &contextHandle->entity->clientAPI, LinkCustomIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkFacebookAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkFacebookAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkFacebookAccount, &contextHandle->entity->clientAPI, LinkFacebookAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkFacebookInstantGamesIdAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkFacebookInstantGamesId, &contextHandle->entity->clientAPI, LinkFacebookInstantGamesIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkGameCenterAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkGameCenterAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkGameCenterAccount, &contextHandle->entity->clientAPI, LinkGameCenterAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkGoogleAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkGoogleAccount, &contextHandle->entity->clientAPI, LinkGoogleAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkIOSDeviceIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkIOSDeviceID, &contextHandle->entity->clientAPI, LinkIOSDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkKongregateAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkKongregateAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkKongregate, &contextHandle->entity->clientAPI, LinkKongregateAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkNintendoServiceAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkNintendoServiceAccount, &contextHandle->entity->clientAPI, LinkNintendoServiceAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkNintendoSwitchDeviceIdAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkNintendoSwitchDeviceId, &contextHandle->entity->clientAPI, LinkNintendoSwitchDeviceIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkOpenIdConnectAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkOpenIdConnect, &contextHandle->entity->clientAPI, LinkOpenIdConnectRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkPSNAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkPSNAccount, &contextHandle->entity->clientAPI, LinkPSNAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkSteamAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkSteamAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkSteamAccount, &contextHandle->entity->clientAPI, LinkSteamAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkTwitchAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkTwitchAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkTwitch, &contextHandle->entity->clientAPI, LinkTwitchAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLinkXboxAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientLinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::LinkXboxAccount, &contextHandle->entity->clientAPI, LinkXboxAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientMatchmakeAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientMatchmakeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::Matchmake, &contextHandle->entity->clientAPI, MatchmakeRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientMatchmakeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientMatchmakeResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientMatchmakeResult*)(std::dynamic_pointer_cast<MatchmakeResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientOpenTradeAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientOpenTradeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::OpenTrade, &contextHandle->entity->clientAPI, OpenTradeRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientOpenTradeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientOpenTradeResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientOpenTradeResponse*)(std::dynamic_pointer_cast<OpenTradeResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientPayForPurchaseAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientPayForPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::PayForPurchase, &contextHandle->entity->clientAPI, PayForPurchaseRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientPayForPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientPayForPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientPayForPurchaseResult*)(std::dynamic_pointer_cast<PayForPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientPurchaseItemAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientPurchaseItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::PurchaseItem, &contextHandle->entity->clientAPI, PurchaseItemRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientPurchaseItemGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientPurchaseItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientPurchaseItemResult*)(std::dynamic_pointer_cast<PurchaseItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientRedeemCouponAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRedeemCouponRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RedeemCoupon, &contextHandle->entity->clientAPI, RedeemCouponRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRedeemCouponGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientRedeemCouponResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientRedeemCouponResult*)(std::dynamic_pointer_cast<RedeemCouponResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientRefreshPSNAuthTokenAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRefreshPSNAuthTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RefreshPSNAuthToken, &contextHandle->entity->clientAPI, RefreshPSNAuthTokenRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRegisterForIOSPushNotificationAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRegisterForIOSPushNotificationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RegisterForIOSPushNotification, &contextHandle->entity->clientAPI, RegisterForIOSPushNotificationRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRemoveContactEmailAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRemoveContactEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RemoveContactEmail, &contextHandle->entity->clientAPI, RemoveContactEmailRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRemoveFriendAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRemoveFriendRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RemoveFriend, &contextHandle->entity->clientAPI, RemoveFriendRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRemoveGenericIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRemoveGenericIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RemoveGenericID, &contextHandle->entity->clientAPI, RemoveGenericIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRemoveSharedGroupMembersAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRemoveSharedGroupMembersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RemoveSharedGroupMembers, &contextHandle->entity->clientAPI, RemoveSharedGroupMembersRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientReportAdActivityAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientReportAdActivityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ReportAdActivity, &contextHandle->entity->clientAPI, ReportAdActivityRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientReportDeviceInfoAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientDeviceInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ReportDeviceInfo, &contextHandle->entity->clientAPI, DeviceInfoRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientReportPlayerAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientReportPlayerClientRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ReportPlayer, &contextHandle->entity->clientAPI, ReportPlayerClientRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientReportPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabClientReportPlayerClientResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabClientReportPlayerClientResult), result, nullptr);
}

HRESULT PlayFabClientRestoreIOSPurchasesAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRestoreIOSPurchasesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RestoreIOSPurchases, &contextHandle->entity->clientAPI, RestoreIOSPurchasesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRestoreIOSPurchasesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientRestoreIOSPurchasesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientRestoreIOSPurchasesResult*)(std::dynamic_pointer_cast<RestoreIOSPurchasesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientRewardAdActivityAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientRewardAdActivityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::RewardAdActivity, &contextHandle->entity->clientAPI, RewardAdActivityRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRewardAdActivityGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientRewardAdActivityResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientRewardAdActivityResult*)(std::dynamic_pointer_cast<RewardAdActivityResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientSendAccountRecoveryEmailAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabClientSendAccountRecoveryEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&ClientAPI::SendAccountRecoveryEmail, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientSetFriendTagsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientSetFriendTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::SetFriendTags, &contextHandle->entity->clientAPI, SetFriendTagsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientSetPlayerSecretAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientSetPlayerSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::SetPlayerSecret, &contextHandle->entity->clientAPI, SetPlayerSecretRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientStartGameAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientStartGameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::StartGame, &contextHandle->entity->clientAPI, StartGameRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientStartGameGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientStartGameResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientStartGameResult*)(std::dynamic_pointer_cast<StartGameResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientStartPurchaseAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientStartPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::StartPurchase, &contextHandle->entity->clientAPI, StartPurchaseRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientStartPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientStartPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientStartPurchaseResult*)(std::dynamic_pointer_cast<StartPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientSubtractUserVirtualCurrencyAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientSubtractUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::SubtractUserVirtualCurrency, &contextHandle->entity->clientAPI, SubtractUserVirtualCurrencyRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientSubtractUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientSubtractUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientUnlinkAndroidDeviceIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkAndroidDeviceID, &contextHandle->entity->clientAPI, UnlinkAndroidDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkAppleAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkApple, &contextHandle->entity->clientAPI, UnlinkAppleRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkCustomIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkCustomID, &contextHandle->entity->clientAPI, UnlinkCustomIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkFacebookAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkFacebookAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkFacebookAccount, &contextHandle->entity->clientAPI, UnlinkFacebookAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkFacebookInstantGamesIdAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkFacebookInstantGamesId, &contextHandle->entity->clientAPI, UnlinkFacebookInstantGamesIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkGameCenterAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkGameCenterAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkGameCenterAccount, &contextHandle->entity->clientAPI, UnlinkGameCenterAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkGoogleAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkGoogleAccount, &contextHandle->entity->clientAPI, UnlinkGoogleAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkIOSDeviceIDAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkIOSDeviceID, &contextHandle->entity->clientAPI, UnlinkIOSDeviceIDRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkKongregateAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkKongregateAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkKongregate, &contextHandle->entity->clientAPI, UnlinkKongregateAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkNintendoServiceAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkNintendoServiceAccount, &contextHandle->entity->clientAPI, UnlinkNintendoServiceAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkNintendoSwitchDeviceIdAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkNintendoSwitchDeviceId, &contextHandle->entity->clientAPI, UnlinkNintendoSwitchDeviceIdRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkOpenIdConnectAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkOpenIdConnect, &contextHandle->entity->clientAPI, UnlinkOpenIdConnectRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkPSNAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkPSNAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkPSNAccount, &contextHandle->entity->clientAPI, UnlinkPSNAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkSteamAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkSteamAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkSteamAccount, &contextHandle->entity->clientAPI, UnlinkSteamAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkTwitchAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkTwitchAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkTwitch, &contextHandle->entity->clientAPI, UnlinkTwitchAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlinkXboxAccountAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlinkXboxAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlinkXboxAccount, &contextHandle->entity->clientAPI, UnlinkXboxAccountRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlockContainerInstanceAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlockContainerInstanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlockContainerInstance, &contextHandle->entity->clientAPI, UnlockContainerInstanceRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlockContainerInstanceGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientUnlockContainerItemAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUnlockContainerItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UnlockContainerItem, &contextHandle->entity->clientAPI, UnlockContainerItemRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUnlockContainerItemGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientUnlockContainerItemResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientUnlockContainerItemResult*)(std::dynamic_pointer_cast<UnlockContainerItemResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientUpdateAvatarUrlAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdateAvatarUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdateAvatarUrl, &contextHandle->entity->clientAPI, UpdateAvatarUrlRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdateCharacterDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdateCharacterDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdateCharacterData, &contextHandle->entity->clientAPI, UpdateCharacterDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdateCharacterDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabClientUpdateCharacterDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabClientUpdateCharacterDataResult), result, nullptr);
}

HRESULT PlayFabClientUpdateCharacterStatisticsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdateCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdateCharacterStatistics, &contextHandle->entity->clientAPI, UpdateCharacterStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdatePlayerStatisticsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdatePlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdatePlayerStatistics, &contextHandle->entity->clientAPI, UpdatePlayerStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdateSharedGroupDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdateSharedGroupDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdateSharedGroupData, &contextHandle->entity->clientAPI, UpdateSharedGroupDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdateUserDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdateUserData, &contextHandle->entity->clientAPI, UpdateUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdateUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabClientUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabClientUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabClientUpdateUserPublisherDataAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdateUserPublisherData, &contextHandle->entity->clientAPI, UpdateUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdateUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabClientUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabClientUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabClientUpdateUserTitleDisplayNameAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientUpdateUserTitleDisplayNameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::UpdateUserTitleDisplayName, &contextHandle->entity->clientAPI, UpdateUserTitleDisplayNameRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientUpdateUserTitleDisplayNameGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientUpdateUserTitleDisplayNameGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientUpdateUserTitleDisplayNameResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientUpdateUserTitleDisplayNameResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientValidateAmazonIAPReceiptAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientValidateAmazonReceiptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ValidateAmazonIAPReceipt, &contextHandle->entity->clientAPI, ValidateAmazonReceiptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientValidateAmazonIAPReceiptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateAmazonReceiptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientValidateAmazonReceiptResult*)(std::dynamic_pointer_cast<ValidateAmazonReceiptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientValidateGooglePlayPurchaseAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientValidateGooglePlayPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ValidateGooglePlayPurchase, &contextHandle->entity->clientAPI, ValidateGooglePlayPurchaseRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientValidateGooglePlayPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateGooglePlayPurchaseResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientValidateGooglePlayPurchaseResult*)(std::dynamic_pointer_cast<ValidateGooglePlayPurchaseResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientValidateIOSReceiptAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientValidateIOSReceiptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ValidateIOSReceipt, &contextHandle->entity->clientAPI, ValidateIOSReceiptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientValidateIOSReceiptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateIOSReceiptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientValidateIOSReceiptResult*)(std::dynamic_pointer_cast<ValidateIOSReceiptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientValidateWindowsStoreReceiptAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientValidateWindowsReceiptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::ValidateWindowsStoreReceipt, &contextHandle->entity->clientAPI, ValidateWindowsReceiptRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientValidateWindowsStoreReceiptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateWindowsReceiptResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabClientValidateWindowsReceiptResult*)(std::dynamic_pointer_cast<ValidateWindowsReceiptResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabClientWriteCharacterEventAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientWriteClientCharacterEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::WriteCharacterEvent, &contextHandle->entity->clientAPI, WriteClientCharacterEventRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientWriteCharacterEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientWriteCharacterEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientWritePlayerEventAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientWriteClientPlayerEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::WritePlayerEvent, &contextHandle->entity->clientAPI, WriteClientPlayerEventRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientWritePlayerEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientWritePlayerEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabClientWriteTitleEventAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabClientWriteTitleEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&ClientAPI::WriteTitleEvent, &contextHandle->entity->clientAPI, WriteTitleEventRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientWriteTitleEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabClientWriteTitleEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabClientWriteEventResponse*>(buffer);

    return S_OK;
}
