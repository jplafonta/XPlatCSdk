#include "stdafx.h"
#include <playfab/PlayFabInsightsApi.h>
#include "InsightsApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::InsightsModels;

HRESULT PlayFabInsightsGetDetailsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabInsightsInsightsEmptyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&InsightsAPI::GetDetails, &contextHandle->entity->insightsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabInsightsGetDetailsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabInsightsInsightsGetDetailsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabInsightsInsightsGetDetailsResponse*)(std::dynamic_pointer_cast<InsightsGetDetailsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabInsightsGetLimitsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabInsightsInsightsEmptyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&InsightsAPI::GetLimits, &contextHandle->entity->insightsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabInsightsGetLimitsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabInsightsInsightsGetLimitsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabInsightsInsightsGetLimitsResponse*)(std::dynamic_pointer_cast<InsightsGetLimitsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabInsightsGetOperationStatusAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabInsightsInsightsGetOperationStatusRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&InsightsAPI::GetOperationStatus, &contextHandle->entity->insightsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabInsightsGetOperationStatusGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabInsightsGetOperationStatusGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabInsightsInsightsGetOperationStatusResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabInsightsInsightsGetOperationStatusResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabInsightsGetPendingOperationsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabInsightsInsightsGetPendingOperationsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&InsightsAPI::GetPendingOperations, &contextHandle->entity->insightsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabInsightsGetPendingOperationsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabInsightsInsightsGetPendingOperationsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabInsightsInsightsGetPendingOperationsResponse*)(std::dynamic_pointer_cast<InsightsGetPendingOperationsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabInsightsSetPerformanceAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabInsightsInsightsSetPerformanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&InsightsAPI::SetPerformance, &contextHandle->entity->insightsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabInsightsSetPerformanceGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabInsightsSetPerformanceGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabInsightsInsightsOperationResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabInsightsInsightsOperationResponse*>(buffer);

    return S_OK;
}
HRESULT PlayFabInsightsSetStorageRetentionAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabInsightsInsightsSetStorageRetentionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&InsightsAPI::SetStorageRetention, &contextHandle->entity->insightsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabInsightsSetStorageRetentionGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PlayFabInsightsSetStorageRetentionGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabInsightsInsightsOperationResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PlayFabInsightsInsightsOperationResponse*>(buffer);

    return S_OK;
}
