#include "stdafx.h"
#include <playfab/PFAnalytics.h>
#include "Analytics.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::AnalyticsModels;

HRESULT PFAnalyticsClientReportDeviceInfoAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsDeviceInfoRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::ClientReportDeviceInfo, &contextHandle->entity->analyticsAPI, DeviceInfoRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsClientWriteCharacterEventAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsWriteClientCharacterEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::ClientWriteCharacterEvent, &contextHandle->entity->analyticsAPI, WriteClientCharacterEventRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsClientWriteCharacterEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsClientWriteCharacterEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsClientWritePlayerEventAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsWriteClientPlayerEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::ClientWritePlayerEvent, &contextHandle->entity->analyticsAPI, WriteClientPlayerEventRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsClientWritePlayerEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsClientWritePlayerEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsClientWriteTitleEventAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsWriteTitleEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::ClientWriteTitleEvent, &contextHandle->entity->analyticsAPI, WriteTitleEventRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsClientWriteTitleEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsClientWriteTitleEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsServerWriteCharacterEventAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAnalyticsWriteServerCharacterEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AnalyticsAPI::ServerWriteCharacterEvent, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsServerWriteCharacterEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsServerWriteCharacterEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsServerWritePlayerEventAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAnalyticsWriteServerPlayerEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AnalyticsAPI::ServerWritePlayerEvent, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsServerWritePlayerEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsServerWritePlayerEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsServerWriteTitleEventAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAnalyticsWriteTitleEventRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AnalyticsAPI::ServerWriteTitleEvent, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsServerWriteTitleEventGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsServerWriteTitleEventGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsWriteEventResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsGetDetailsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsInsightsEmptyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::GetDetails, &contextHandle->entity->analyticsAPI, InsightsEmptyRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsGetDetailsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAnalyticsInsightsGetDetailsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAnalyticsInsightsGetDetailsResponse*)(std::dynamic_pointer_cast<InsightsGetDetailsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAnalyticsGetLimitsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsInsightsEmptyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::GetLimits, &contextHandle->entity->analyticsAPI, InsightsEmptyRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsGetLimitsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAnalyticsInsightsGetLimitsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAnalyticsInsightsGetLimitsResponse*)(std::dynamic_pointer_cast<InsightsGetLimitsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAnalyticsGetOperationStatusAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsInsightsGetOperationStatusRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::GetOperationStatus, &contextHandle->entity->analyticsAPI, InsightsGetOperationStatusRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsGetOperationStatusGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsGetOperationStatusGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsInsightsGetOperationStatusResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsInsightsGetOperationStatusResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsGetPendingOperationsAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsInsightsGetPendingOperationsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::GetPendingOperations, &contextHandle->entity->analyticsAPI, InsightsGetPendingOperationsRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsGetPendingOperationsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAnalyticsInsightsGetPendingOperationsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAnalyticsInsightsGetPendingOperationsResponse*)(std::dynamic_pointer_cast<InsightsGetPendingOperationsResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAnalyticsSetPerformanceAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsInsightsSetPerformanceRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::SetPerformance, &contextHandle->entity->analyticsAPI, InsightsSetPerformanceRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsSetPerformanceGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsSetPerformanceGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsInsightsOperationResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsInsightsOperationResponse*>(buffer);

    return S_OK;
}

HRESULT PFAnalyticsSetStorageRetentionAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAnalyticsInsightsSetStorageRetentionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AnalyticsAPI::SetStorageRetention, &contextHandle->entity->analyticsAPI, InsightsSetStorageRetentionRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAnalyticsSetStorageRetentionGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAnalyticsSetStorageRetentionGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAnalyticsInsightsOperationResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAnalyticsInsightsOperationResponse*>(buffer);

    return S_OK;
}

