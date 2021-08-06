#include "stdafx.h"
#include <playfab/PFPlayerDataManagement.h>
#include "PlayerDataManagement.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::PlayerDataManagementModels;

HRESULT PFPlayerDataManagementAdminCreatePlayerStatisticDefinitionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminCreatePlayerStatisticDefinition, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminCreatePlayerStatisticDefinitionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementCreatePlayerStatisticDefinitionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementCreatePlayerStatisticDefinitionResult*)(std::dynamic_pointer_cast<CreatePlayerStatisticDefinitionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetDataReportAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetDataReportRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetDataReport, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetDataReportGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerDataManagementAdminGetDataReportGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerDataManagementGetDataReportResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerDataManagementGetDataReportResult*>(buffer);

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetPlayerStatisticDefinitionsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetPlayerStatisticDefinitions, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetPlayerStatisticDefinitionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetPlayerStatisticDefinitionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetPlayerStatisticDefinitionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticDefinitionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetPlayerStatisticVersionsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetPlayerStatisticVersionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetPlayerStatisticVersions, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetPlayerStatisticVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetPlayerStatisticVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetPlayerStatisticVersionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetUserDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetUserData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementAdminGetUserDataResult*)(std::dynamic_pointer_cast<AdminGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetUserInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetUserInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementAdminGetUserDataResult*)(std::dynamic_pointer_cast<AdminGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetUserPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetUserPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementAdminGetUserDataResult*)(std::dynamic_pointer_cast<AdminGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetUserPublisherInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetUserPublisherInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementAdminGetUserDataResult*)(std::dynamic_pointer_cast<AdminGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetUserPublisherReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetUserPublisherReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementAdminGetUserDataResult*)(std::dynamic_pointer_cast<AdminGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminGetUserReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminGetUserReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminGetUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementAdminGetUserDataResult*)(std::dynamic_pointer_cast<AdminGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminIncrementPlayerStatisticVersionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementIncrementPlayerStatisticVersionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminIncrementPlayerStatisticVersion, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminIncrementPlayerStatisticVersionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementIncrementPlayerStatisticVersionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementIncrementPlayerStatisticVersionResult*)(std::dynamic_pointer_cast<IncrementPlayerStatisticVersionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminRefundPurchaseAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementRefundPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminRefundPurchase, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminRefundPurchaseGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerDataManagementAdminRefundPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerDataManagementRefundPurchaseResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerDataManagementRefundPurchaseResponse*>(buffer);

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminResetUserStatisticsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementResetUserStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminResetUserStatistics, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminResolvePurchaseDisputeAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementResolvePurchaseDisputeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminResolvePurchaseDispute, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminResolvePurchaseDisputeGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFPlayerDataManagementAdminResolvePurchaseDisputeGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFPlayerDataManagementResolvePurchaseDisputeResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFPlayerDataManagementResolvePurchaseDisputeResponse*>(buffer);

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminUpdatePlayerStatisticDefinitionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminUpdatePlayerStatisticDefinition, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminUpdatePlayerStatisticDefinitionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult*)(std::dynamic_pointer_cast<UpdatePlayerStatisticDefinitionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementAdminUpdateUserDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminUpdateUserData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminUpdateUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementAdminUpdateUserInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminUpdateUserInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminUpdateUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementAdminUpdateUserPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminUpdateUserPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminUpdateUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementAdminUpdateUserPublisherInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminUpdateUserPublisherInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminUpdateUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementAdminUpdateUserPublisherReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminUpdateUserPublisherReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminUpdateUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementAdminUpdateUserReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::AdminUpdateUserReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementAdminUpdateUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementClientGetFriendLeaderboardAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementClientGetFriendLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetFriendLeaderboard, &contextHandle->entity->playerDataManagementAPI, ClientGetFriendLeaderboardRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetFriendLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetFriendLeaderboardAroundPlayerAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetFriendLeaderboardAroundPlayer, &contextHandle->entity->playerDataManagementAPI, GetFriendLeaderboardAroundPlayerRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetFriendLeaderboardAroundPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult*)(std::dynamic_pointer_cast<GetFriendLeaderboardAroundPlayerResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetLeaderboardAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetLeaderboard, &contextHandle->entity->playerDataManagementAPI, GetLeaderboardRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetLeaderboardAroundPlayerAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetLeaderboardAroundPlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetLeaderboardAroundPlayer, &contextHandle->entity->playerDataManagementAPI, GetLeaderboardAroundPlayerRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetLeaderboardAroundPlayerGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetLeaderboardAroundPlayerResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetLeaderboardAroundPlayerResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundPlayerResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetPlayerStatisticsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementClientGetPlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetPlayerStatistics, &contextHandle->entity->playerDataManagementAPI, ClientGetPlayerStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetPlayerStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementClientGetPlayerStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementClientGetPlayerStatisticsResult*)(std::dynamic_pointer_cast<ClientGetPlayerStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetPlayerStatisticVersionsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetPlayerStatisticVersionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetPlayerStatisticVersions, &contextHandle->entity->playerDataManagementAPI, GetPlayerStatisticVersionsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetPlayerStatisticVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetPlayerStatisticVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetPlayerStatisticVersionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetUserDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetUserData, &contextHandle->entity->playerDataManagementAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementClientGetUserDataResult*)(std::dynamic_pointer_cast<ClientGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetUserPublisherDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetUserPublisherData, &contextHandle->entity->playerDataManagementAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementClientGetUserDataResult*)(std::dynamic_pointer_cast<ClientGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetUserPublisherReadOnlyDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetUserPublisherReadOnlyData, &contextHandle->entity->playerDataManagementAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementClientGetUserDataResult*)(std::dynamic_pointer_cast<ClientGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientGetUserReadOnlyDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientGetUserReadOnlyData, &contextHandle->entity->playerDataManagementAPI, GetUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientGetUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementClientGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementClientGetUserDataResult*)(std::dynamic_pointer_cast<ClientGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementClientUpdatePlayerStatisticsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementClientUpdatePlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientUpdatePlayerStatistics, &contextHandle->entity->playerDataManagementAPI, ClientUpdatePlayerStatisticsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientUpdateUserDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementClientUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientUpdateUserData, &contextHandle->entity->playerDataManagementAPI, ClientUpdateUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientUpdateUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementClientUpdateUserPublisherDataAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFPlayerDataManagementClientUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&PlayerDataManagementAPI::ClientUpdateUserPublisherData, &contextHandle->entity->playerDataManagementAPI, ClientUpdateUserDataRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementClientUpdateUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementServerGetFriendLeaderboardAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementServerGetFriendLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetFriendLeaderboard, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetFriendLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetLeaderboardAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetLeaderboardRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetLeaderboard, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetLeaderboardGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetLeaderboardResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetLeaderboardResult*)(std::dynamic_pointer_cast<GetLeaderboardResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetLeaderboardAroundUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetLeaderboardAroundUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetLeaderboardAroundUser, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetLeaderboardAroundUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetLeaderboardAroundUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetLeaderboardAroundUserResult*)(std::dynamic_pointer_cast<GetLeaderboardAroundUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetPlayerCombinedInfoAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFGetPlayerCombinedInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetPlayerCombinedInfo, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetPlayerCombinedInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFGetPlayerCombinedInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFGetPlayerCombinedInfoResult*)(std::dynamic_pointer_cast<GetPlayerCombinedInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetPlayerStatisticsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementServerGetPlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetPlayerStatistics, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetPlayerStatisticsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementServerGetPlayerStatisticsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementServerGetPlayerStatisticsResult*)(std::dynamic_pointer_cast<ServerGetPlayerStatisticsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetPlayerStatisticVersionsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetPlayerStatisticVersionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetPlayerStatisticVersions, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetPlayerStatisticVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementGetPlayerStatisticVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementGetPlayerStatisticVersionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetUserDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetUserData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementServerGetUserDataResult*)(std::dynamic_pointer_cast<ServerGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetUserInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetUserInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementServerGetUserDataResult*)(std::dynamic_pointer_cast<ServerGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetUserPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetUserPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementServerGetUserDataResult*)(std::dynamic_pointer_cast<ServerGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetUserPublisherInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetUserPublisherInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementServerGetUserDataResult*)(std::dynamic_pointer_cast<ServerGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetUserPublisherReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetUserPublisherReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementServerGetUserDataResult*)(std::dynamic_pointer_cast<ServerGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerGetUserReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerGetUserReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerGetUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFPlayerDataManagementServerGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFPlayerDataManagementServerGetUserDataResult*)(std::dynamic_pointer_cast<ServerGetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFPlayerDataManagementServerUpdatePlayerStatisticsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementServerUpdatePlayerStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerUpdatePlayerStatistics, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerUpdateUserDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerUpdateUserData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerUpdateUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementServerUpdateUserInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerUpdateUserInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerUpdateUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementServerUpdateUserPublisherDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerUpdateUserPublisherData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerUpdateUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementServerUpdateUserPublisherInternalDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerUpdateUserPublisherInternalData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerUpdateUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementServerUpdateUserPublisherReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerUpdateUserPublisherReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerUpdateUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

HRESULT PFPlayerDataManagementServerUpdateUserReadOnlyDataAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFPlayerDataManagementServerUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&PlayerDataManagementAPI::ServerUpdateUserReadOnlyData, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFPlayerDataManagementServerUpdateUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFPlayerDataManagementUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFPlayerDataManagementUpdateUserDataResult), result, nullptr);
}

