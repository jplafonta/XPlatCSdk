#include "stdafx.h"
#include <playfab/PlayFabAdminApi.h>
#include "AdminApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::AdminModels;

HRESULT PlayFabAdminAbortTaskInstanceAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminAbortTaskInstanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::AbortTaskInstance, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminAddLocalizedNewsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminAddLocalizedNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::AddLocalizedNews, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminAddNewsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminAddNewsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::AddNews, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminAddNewsGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminAddNewsGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminAddNewsResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminAddNewsResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminAddPlayerTagAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminAddPlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::AddPlayerTag, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminAddServerBuildAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminAddServerBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::AddServerBuild, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminAddServerBuildGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminAddServerBuildResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminAddServerBuildResult*)(std::dynamic_pointer_cast<AddServerBuildResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminAddUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminAddUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::AddUserVirtualCurrency, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminAddUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminAddUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminAddVirtualCurrencyTypesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminAddVirtualCurrencyTypesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::AddVirtualCurrencyTypes, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminBanUsersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminBanUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::BanUsers, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminBanUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminBanUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminBanUsersResult*)(std::dynamic_pointer_cast<BanUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminCheckLimitedEditionItemAvailabilityAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CheckLimitedEditionItemAvailability, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCheckLimitedEditionItemAvailabilityGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminCheckLimitedEditionItemAvailabilityResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminCheckLimitedEditionItemAvailabilityResult), result, nullptr);
}

HRESULT PlayFabAdminCreateActionsOnPlayersInSegmentTaskAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CreateActionsOnPlayersInSegmentTask, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminCreateTaskResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminCreateCloudScriptTaskAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCreateCloudScriptTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CreateCloudScriptTask, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCreateCloudScriptTaskGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminCreateCloudScriptTaskGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminCreateTaskResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminCreateInsightsScheduledScalingTaskAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCreateInsightsScheduledScalingTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CreateInsightsScheduledScalingTask, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCreateInsightsScheduledScalingTaskGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminCreateInsightsScheduledScalingTaskGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminCreateTaskResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminCreateOpenIdConnectionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCreateOpenIdConnectionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CreateOpenIdConnection, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCreatePlayerSharedSecretAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCreatePlayerSharedSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CreatePlayerSharedSecret, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCreatePlayerSharedSecretGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminCreatePlayerSharedSecretGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreatePlayerSharedSecretResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminCreatePlayerSharedSecretResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminCreatePlayerStatisticDefinitionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCreatePlayerStatisticDefinitionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CreatePlayerStatisticDefinition, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCreatePlayerStatisticDefinitionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminCreatePlayerStatisticDefinitionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminCreatePlayerStatisticDefinitionResult*)(std::dynamic_pointer_cast<CreatePlayerStatisticDefinitionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminCreateSegmentAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminCreateSegmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::CreateSegment, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminCreateSegmentGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminCreateSegmentGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateSegmentResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminCreateSegmentResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminDeleteContentAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeleteContentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteContent, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeleteMasterPlayerAccountAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeleteMasterPlayerAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteMasterPlayerAccount, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeleteMasterPlayerAccountGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminDeleteMasterPlayerAccountResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminDeleteMasterPlayerAccountResult*)(std::dynamic_pointer_cast<DeleteMasterPlayerAccountResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminDeleteOpenIdConnectionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeleteOpenIdConnectionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteOpenIdConnection, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeletePlayerAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeletePlayerRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeletePlayer, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeletePlayerSharedSecretAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeletePlayerSharedSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeletePlayerSharedSecret, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeleteSegmentAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeleteSegmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteSegment, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeleteSegmentGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminDeleteSegmentGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminDeleteSegmentsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminDeleteSegmentsResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminDeleteStoreAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeleteStoreRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteStore, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeleteTaskAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeleteTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteTask, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeleteTitleAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteTitle, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminDeleteTitleDataOverrideAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminDeleteTitleDataOverrideRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::DeleteTitleDataOverride, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminExportMasterPlayerDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminExportMasterPlayerDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ExportMasterPlayerData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminExportMasterPlayerDataGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminExportMasterPlayerDataGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminExportMasterPlayerDataResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminExportMasterPlayerDataResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetTaskInstanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetActionsOnPlayersInSegmentTaskInstance, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult*)(std::dynamic_pointer_cast<GetActionsOnPlayersInSegmentTaskInstanceResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetAllSegmentsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetAllSegments, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetAllSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetAllSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetAllSegmentsResult*)(std::dynamic_pointer_cast<GetAllSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetCatalogItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetCatalogItems, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetCatalogItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCatalogItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetCatalogItemsResult*)(std::dynamic_pointer_cast<GetCatalogItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetCloudScriptRevisionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetCloudScriptRevisionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetCloudScriptRevision, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetCloudScriptRevisionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCloudScriptRevisionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetCloudScriptRevisionResult*)(std::dynamic_pointer_cast<GetCloudScriptRevisionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetCloudScriptTaskInstanceAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetTaskInstanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetCloudScriptTaskInstance, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetCloudScriptTaskInstanceGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCloudScriptTaskInstanceResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetCloudScriptTaskInstanceResult*)(std::dynamic_pointer_cast<GetCloudScriptTaskInstanceResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetCloudScriptVersionsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetCloudScriptVersions, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetCloudScriptVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCloudScriptVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetCloudScriptVersionsResult*)(std::dynamic_pointer_cast<GetCloudScriptVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetContentListAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetContentListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetContentList, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetContentListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetContentListResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetContentListResult*)(std::dynamic_pointer_cast<GetContentListResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetContentUploadUrlAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetContentUploadUrlRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetContentUploadUrl, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetContentUploadUrlGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminGetContentUploadUrlGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetContentUploadUrlResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminGetContentUploadUrlResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminGetDataReportAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetDataReportRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetDataReport, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetDataReportGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminGetDataReportGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetDataReportResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminGetDataReportResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminGetMatchmakerGameInfoAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetMatchmakerGameInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetMatchmakerGameInfo, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetMatchmakerGameInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetMatchmakerGameInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetMatchmakerGameInfoResult*)(std::dynamic_pointer_cast<GetMatchmakerGameInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetMatchmakerGameModesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetMatchmakerGameModesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetMatchmakerGameModes, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetMatchmakerGameModesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetMatchmakerGameModesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetMatchmakerGameModesResult*)(std::dynamic_pointer_cast<GetMatchmakerGameModesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayedTitleListAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPlayedTitleListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayedTitleList, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayedTitleListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayedTitleListResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayedTitleListResult*)(std::dynamic_pointer_cast<GetPlayedTitleListResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayerIdFromAuthTokenAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPlayerIdFromAuthTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayerIdFromAuthToken, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayerIdFromAuthTokenGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminGetPlayerIdFromAuthTokenGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetPlayerIdFromAuthTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminGetPlayerIdFromAuthTokenResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminGetPlayerProfileAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPlayerProfileRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayerProfile, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayerProfileGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerProfileResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayerProfileResult*)(std::dynamic_pointer_cast<GetPlayerProfileResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayerSegmentsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPlayersSegmentsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayerSegments, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayerSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerSegmentsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayerSegmentsResult*)(std::dynamic_pointer_cast<GetPlayerSegmentsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayerSharedSecretsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayerSharedSecrets, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayerSharedSecretsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerSharedSecretsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayerSharedSecretsResult*)(std::dynamic_pointer_cast<GetPlayerSharedSecretsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayersInSegmentAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPlayersInSegmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayersInSegment, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayersInSegmentGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayersInSegmentResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayersInSegmentResult*)(std::dynamic_pointer_cast<GetPlayersInSegmentResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayerStatisticDefinitionsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayerStatisticDefinitions, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayerStatisticDefinitionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerStatisticDefinitionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayerStatisticDefinitionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticDefinitionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayerStatisticVersionsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPlayerStatisticVersionsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayerStatisticVersions, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayerStatisticVersionsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerStatisticVersionsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayerStatisticVersionsResult*)(std::dynamic_pointer_cast<GetPlayerStatisticVersionsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPlayerTagsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPlayerTagsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPlayerTags, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPlayerTagsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerTagsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPlayerTagsResult*)(std::dynamic_pointer_cast<GetPlayerTagsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPolicyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPolicy, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPolicyResponse*)(std::dynamic_pointer_cast<GetPolicyResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetPublisherData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPublisherDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetPublisherDataResult*)(std::dynamic_pointer_cast<GetPublisherDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetRandomResultTablesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetRandomResultTablesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetRandomResultTables, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetRandomResultTablesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetRandomResultTablesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetRandomResultTablesResult*)(std::dynamic_pointer_cast<GetRandomResultTablesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetSegmentsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetSegmentsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetSegments, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetSegmentsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetSegmentsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetSegmentsResponse*)(std::dynamic_pointer_cast<GetSegmentsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetServerBuildInfoAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetServerBuildInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetServerBuildInfo, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetServerBuildInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetServerBuildInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetServerBuildInfoResult*)(std::dynamic_pointer_cast<GetServerBuildInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetServerBuildUploadUrlAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetServerBuildUploadURLRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetServerBuildUploadUrl, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetServerBuildUploadUrlGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminGetServerBuildUploadUrlGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetServerBuildUploadURLResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminGetServerBuildUploadURLResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminGetStoreItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetStoreItems, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetStoreItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetStoreItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetStoreItemsResult*)(std::dynamic_pointer_cast<GetStoreItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetTaskInstancesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetTaskInstancesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetTaskInstances, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetTaskInstancesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTaskInstancesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetTaskInstancesResult*)(std::dynamic_pointer_cast<GetTaskInstancesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetTasksAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetTasksRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetTasks, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetTasksGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTasksResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetTasksResult*)(std::dynamic_pointer_cast<GetTasksResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetTitleDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetTitleData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetTitleDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetTitleInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetTitleInternalData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetTitleInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTitleDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetTitleDataResult*)(std::dynamic_pointer_cast<GetTitleDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserAccountInfoAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminLookupUserAccountInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserAccountInfo, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserAccountInfoGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminLookupUserAccountInfoResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminLookupUserAccountInfoResult*)(std::dynamic_pointer_cast<LookupUserAccountInfoResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserBansAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserBans, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserBansResult*)(std::dynamic_pointer_cast<GetUserBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserInternalData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserInventoryAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserInventoryRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserInventory, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserInventoryGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserInventoryResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserInventoryResult*)(std::dynamic_pointer_cast<GetUserInventoryResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserPublisherData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserPublisherInternalData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserPublisherReadOnlyData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGetUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GetUserReadOnlyData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGetUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGetUserDataResult*)(std::dynamic_pointer_cast<GetUserDataResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminGrantItemsToUsersAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminGrantItemsToUsersRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::GrantItemsToUsers, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminGrantItemsToUsersGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGrantItemsToUsersResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminGrantItemsToUsersResult*)(std::dynamic_pointer_cast<GrantItemsToUsersResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminIncrementLimitedEditionItemAvailabilityAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::IncrementLimitedEditionItemAvailability, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminIncrementPlayerStatisticVersionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminIncrementPlayerStatisticVersionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::IncrementPlayerStatisticVersion, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminIncrementPlayerStatisticVersionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminIncrementPlayerStatisticVersionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminIncrementPlayerStatisticVersionResult*)(std::dynamic_pointer_cast<IncrementPlayerStatisticVersionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminListOpenIdConnectionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ListOpenIdConnection, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminListOpenIdConnectionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminListOpenIdConnectionResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminListOpenIdConnectionResponse*)(std::dynamic_pointer_cast<ListOpenIdConnectionResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminListServerBuildsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ListServerBuilds, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminListServerBuildsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminListBuildsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminListBuildsResult*)(std::dynamic_pointer_cast<ListBuildsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminListVirtualCurrencyTypesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ListVirtualCurrencyTypes, &contextHandle->state->adminAPI, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminListVirtualCurrencyTypesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminListVirtualCurrencyTypesResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminListVirtualCurrencyTypesResult*)(std::dynamic_pointer_cast<ListVirtualCurrencyTypesResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminModifyMatchmakerGameModesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminModifyMatchmakerGameModesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ModifyMatchmakerGameModes, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminModifyServerBuildAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminModifyServerBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ModifyServerBuild, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminModifyServerBuildGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminModifyServerBuildResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminModifyServerBuildResult*)(std::dynamic_pointer_cast<ModifyServerBuildResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminRefundPurchaseAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRefundPurchaseRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RefundPurchase, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRefundPurchaseGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminRefundPurchaseGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminRefundPurchaseResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminRefundPurchaseResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminRemovePlayerTagAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRemovePlayerTagRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RemovePlayerTag, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRemoveServerBuildAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRemoveServerBuildRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RemoveServerBuild, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRemoveVirtualCurrencyTypesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRemoveVirtualCurrencyTypesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RemoveVirtualCurrencyTypes, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminResetCharacterStatisticsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminResetCharacterStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ResetCharacterStatistics, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminResetPasswordAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminResetPasswordRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ResetPassword, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminResetUserStatisticsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminResetUserStatisticsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ResetUserStatistics, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminResolvePurchaseDisputeAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminResolvePurchaseDisputeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::ResolvePurchaseDispute, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminResolvePurchaseDisputeGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminResolvePurchaseDisputeGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminResolvePurchaseDisputeResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminResolvePurchaseDisputeResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminRevokeAllBansForUserAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRevokeAllBansForUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RevokeAllBansForUser, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRevokeAllBansForUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminRevokeAllBansForUserResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminRevokeAllBansForUserResult*)(std::dynamic_pointer_cast<RevokeAllBansForUserResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminRevokeBansAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRevokeBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RevokeBans, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRevokeBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminRevokeBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminRevokeBansResult*)(std::dynamic_pointer_cast<RevokeBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminRevokeInventoryItemAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRevokeInventoryItemRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RevokeInventoryItem, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRevokeInventoryItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRevokeInventoryItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RevokeInventoryItems, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRevokeInventoryItemsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminRevokeInventoryItemsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminRevokeInventoryItemsResult*)(std::dynamic_pointer_cast<RevokeInventoryItemsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminRunTaskAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminRunTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::RunTask, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminRunTaskGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminRunTaskGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminRunTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminRunTaskResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminSendAccountRecoveryEmailAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSendAccountRecoveryEmailRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SendAccountRecoveryEmail, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetCatalogItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetCatalogItems, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetPlayerSecretAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSetPlayerSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetPlayerSecret, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetPublishedRevisionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSetPublishedRevisionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetPublishedRevision, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSetPublisherDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetPublisherData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetStoreItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetStoreItems, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetTitleDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetTitleData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetTitleDataAndOverridesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSetTitleDataAndOverridesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetTitleDataAndOverrides, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetTitleInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSetTitleDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetTitleInternalData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetupPushNotificationAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSetupPushNotificationRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SetupPushNotification, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSetupPushNotificationGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminSetupPushNotificationGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminSetupPushNotificationResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminSetupPushNotificationResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminSubtractUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminSubtractUserVirtualCurrencyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::SubtractUserVirtualCurrency, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminSubtractUserVirtualCurrencyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminSubtractUserVirtualCurrencyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminModifyUserVirtualCurrencyResult*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminUpdateBansAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateBansRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateBans, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateBansGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminUpdateBansResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminUpdateBansResult*)(std::dynamic_pointer_cast<UpdateBansResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminUpdateCatalogItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateCatalogItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateCatalogItems, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateCloudScriptAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateCloudScriptRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateCloudScript, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateCloudScriptGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateCloudScriptResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminUpdateCloudScriptResult), result, nullptr);
}

HRESULT PlayFabAdminUpdateOpenIdConnectionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateOpenIdConnectionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateOpenIdConnection, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdatePlayerSharedSecretAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdatePlayerSharedSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdatePlayerSharedSecret, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdatePlayerStatisticDefinitionAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdatePlayerStatisticDefinitionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdatePlayerStatisticDefinition, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdatePlayerStatisticDefinitionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminUpdatePlayerStatisticDefinitionResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminUpdatePlayerStatisticDefinitionResult*)(std::dynamic_pointer_cast<UpdatePlayerStatisticDefinitionResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminUpdatePolicyAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdatePolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdatePolicy, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdatePolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminUpdatePolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAdminUpdatePolicyResponse*)(std::dynamic_pointer_cast<UpdatePolicyResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PlayFabAdminUpdateRandomResultTablesAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateRandomResultTablesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateRandomResultTables, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateSegmentAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateSegmentRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateSegment, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateSegmentGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminUpdateSegmentGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminUpdateSegmentResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminUpdateSegmentResponse*>(buffer);

    return S_OK;
}

HRESULT PlayFabAdminUpdateStoreItemsAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateStoreItemsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateStoreItems, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateTaskAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateTaskRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateTask, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateUserData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabAdminUpdateUserInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateUserInternalData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabAdminUpdateUserPublisherDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateUserPublisherData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserPublisherDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabAdminUpdateUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateUserInternalDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateUserPublisherInternalData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserPublisherInternalDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabAdminUpdateUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateUserPublisherReadOnlyData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserPublisherReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabAdminUpdateUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateUserReadOnlyData, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserReadOnlyDataGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PlayFabAdminUpdateUserDataResult), result, nullptr);
}

HRESULT PlayFabAdminUpdateUserTitleDisplayNameAsync(
    _In_ PlayFabStateHandle contextHandle,
    _In_ const PlayFabAdminUpdateUserTitleDisplayNameRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdminAPI::UpdateUserTitleDisplayName, &contextHandle->state->adminAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAdminUpdateUserTitleDisplayNameGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabAdminUpdateUserTitleDisplayNameGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminUpdateUserTitleDisplayNameResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabAdminUpdateUserTitleDisplayNameResult*>(buffer);

    return S_OK;
}

