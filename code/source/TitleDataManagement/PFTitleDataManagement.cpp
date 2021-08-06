#include "stdafx.h"
#include <playfab/PFTitleDataManagement.h>
#include "TitleDataManagement.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::TitleDataManagementModels;

HRESULT PFTitleDataManagementAdminAddLocalizedNewsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementAddLocalizedNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminAddLocalizedNews, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminAddNewsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementAddNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminAddNews, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminAddNewsGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFTitleDataManagementAdminAddNewsGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFTitleDataManagementAddNewsResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFTitleDataManagementAddNewsResult*>(buffer);

    return S_OK;
}

HRESULT PFTitleDataManagementAdminAddVirtualCurrencyTypesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementAddVirtualCurrencyTypesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminAddVirtualCurrencyTypes, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminDeleteStoreAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementDeleteStoreRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminDeleteStore, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminDeleteTitleDataOverrideAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementDeleteTitleDataOverrideRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminDeleteTitleDataOverride, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminGetCatalogItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminGetCatalogItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminGetCatalogItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetCatalogItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetCatalogItemsResult*)(std::dynamic_pointer_cast<GetCatalogItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementAdminGetPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminGetPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminGetPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetPublisherDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetPublisherDataResult*)(std::dynamic_pointer_cast<GetPublisherDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementAdminGetRandomResultTablesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetRandomResultTablesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminGetRandomResultTables, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminGetRandomResultTablesGetResult(
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

HRESULT PFTitleDataManagementAdminGetStoreItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminGetStoreItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminGetStoreItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetStoreItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetStoreItemsResult*)(std::dynamic_pointer_cast<GetStoreItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementAdminGetTitleDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminGetTitleData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminGetTitleDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementAdminGetTitleInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminGetTitleInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminGetTitleInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementAdminListVirtualCurrencyTypesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminListVirtualCurrencyTypes, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminListVirtualCurrencyTypesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementListVirtualCurrencyTypesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementListVirtualCurrencyTypesResult*)(std::dynamic_pointer_cast<ListVirtualCurrencyTypesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementAdminRemoveVirtualCurrencyTypesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementRemoveVirtualCurrencyTypesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminRemoveVirtualCurrencyTypes, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminSetCatalogItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementUpdateCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminSetCatalogItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminSetStoreItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementUpdateStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminSetStoreItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminSetTitleDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminSetTitleData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminSetTitleDataAndOverridesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementSetTitleDataAndOverridesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminSetTitleDataAndOverrides, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminSetTitleInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminSetTitleInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminSetupPushNotificationAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementSetupPushNotificationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminSetupPushNotification, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminSetupPushNotificationGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFTitleDataManagementAdminSetupPushNotificationGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFTitleDataManagementSetupPushNotificationResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFTitleDataManagementSetupPushNotificationResult*>(buffer);

    return S_OK;
}

HRESULT PFTitleDataManagementAdminUpdateCatalogItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementUpdateCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminUpdateCatalogItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminUpdateRandomResultTablesAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementUpdateRandomResultTablesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminUpdateRandomResultTables, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementAdminUpdateStoreItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementUpdateStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::AdminUpdateStoreItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementClientGetCatalogItemsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTitleDataManagementGetCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TitleDataManagementAPI::ClientGetCatalogItems, &contextHandle->entity->titleDataManagementAPI, GetCatalogItemsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementClientGetCatalogItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetCatalogItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetCatalogItemsResult*)(std::dynamic_pointer_cast<GetCatalogItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementClientGetPublisherDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTitleDataManagementGetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TitleDataManagementAPI::ClientGetPublisherData, &contextHandle->entity->titleDataManagementAPI, GetPublisherDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementClientGetPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetPublisherDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetPublisherDataResult*)(std::dynamic_pointer_cast<GetPublisherDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementClientGetStoreItemsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTitleDataManagementGetStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TitleDataManagementAPI::ClientGetStoreItems, &contextHandle->entity->titleDataManagementAPI, GetStoreItemsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementClientGetStoreItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetStoreItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetStoreItemsResult*)(std::dynamic_pointer_cast<GetStoreItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementClientGetTimeAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TitleDataManagementAPI::ClientGetTime, &contextHandle->entity->titleDataManagementAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementClientGetTimeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFTitleDataManagementGetTimeResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFTitleDataManagementGetTimeResult), result, nullptr);
}

HRESULT PFTitleDataManagementClientGetTitleDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTitleDataManagementGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TitleDataManagementAPI::ClientGetTitleData, &contextHandle->entity->titleDataManagementAPI, GetTitleDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementClientGetTitleDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementClientGetTitleNewsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTitleDataManagementGetTitleNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TitleDataManagementAPI::ClientGetTitleNews, &contextHandle->entity->titleDataManagementAPI, GetTitleNewsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementClientGetTitleNewsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetTitleNewsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetTitleNewsResult*)(std::dynamic_pointer_cast<GetTitleNewsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementServerGetCatalogItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerGetCatalogItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerGetCatalogItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetCatalogItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetCatalogItemsResult*)(std::dynamic_pointer_cast<GetCatalogItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementServerGetPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerGetPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerGetPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetPublisherDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetPublisherDataResult*)(std::dynamic_pointer_cast<GetPublisherDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementServerGetStoreItemsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetStoreItemsServerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerGetStoreItems, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerGetStoreItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetStoreItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetStoreItemsResult*)(std::dynamic_pointer_cast<GetStoreItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementServerGetTimeAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerGetTime, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerGetTimeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFTitleDataManagementGetTimeResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFTitleDataManagementGetTimeResult), result, nullptr);
}

HRESULT PFTitleDataManagementServerGetTitleDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerGetTitleData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerGetTitleDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementServerGetTitleInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerGetTitleInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerGetTitleInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementServerGetTitleNewsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementGetTitleNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerGetTitleNews, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerGetTitleNewsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTitleDataManagementGetTitleNewsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTitleDataManagementGetTitleNewsResult*)(std::dynamic_pointer_cast<GetTitleNewsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTitleDataManagementServerSetPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFSetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerSetPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerSetTitleDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerSetTitleData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTitleDataManagementServerSetTitleInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFTitleDataManagementSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&TitleDataManagementAPI::ServerSetTitleInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

