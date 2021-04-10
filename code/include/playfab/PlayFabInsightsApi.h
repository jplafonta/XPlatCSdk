// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabInsightsDataModels.h>
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>

extern "C"
{

/// <summary>
/// <GetDetails documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabInsightsGetDetailsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabInsightsGetDetailsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabInsightsInsightsEmptyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetDetails call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabInsightsGetDetailsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabInsightsInsightsGetDetailsResponse** result
) noexcept;

/// <summary>
/// <GetLimits documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabInsightsGetLimitsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabInsightsGetLimitsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabInsightsInsightsEmptyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetLimits call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabInsightsGetLimitsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabInsightsInsightsGetLimitsResponse** result
) noexcept;

/// <summary>
/// <GetOperationStatus documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabInsightsGetOperationStatusGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabInsightsGetOperationStatusAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabInsightsInsightsGetOperationStatusRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetOperationStatus call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabInsightsGetOperationStatusGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful GetOperationStatus call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The size of the buffer for the result object.</param>
/// <param name="buffer">Byte buffer used for the result value and its fields.</param>
/// <param name="result">Pointer to the result object.</param>
/// <param name="bufferUsed">The number of bytes in the provided buffer that were used.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// result is a pointer within buffer and does not need to be freed separately.
/// </remarks>
HRESULT PlayFabInsightsGetOperationStatusGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabInsightsInsightsGetOperationStatusResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;
    
/// <summary>
/// <GetPendingOperations documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabInsightsGetPendingOperationsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabInsightsGetPendingOperationsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabInsightsInsightsGetPendingOperationsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetPendingOperations call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabInsightsGetPendingOperationsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabInsightsInsightsGetPendingOperationsResponse** result
) noexcept;

/// <summary>
/// <SetPerformance documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabInsightsSetPerformanceGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabInsightsSetPerformanceAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabInsightsInsightsSetPerformanceRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SetPerformance call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabInsightsSetPerformanceGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful SetPerformance call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The size of the buffer for the result object.</param>
/// <param name="buffer">Byte buffer used for the result value and its fields.</param>
/// <param name="result">Pointer to the result object.</param>
/// <param name="bufferUsed">The number of bytes in the provided buffer that were used.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// result is a pointer within buffer and does not need to be freed separately.
/// </remarks>
HRESULT PlayFabInsightsSetPerformanceGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabInsightsInsightsOperationResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;
    
/// <summary>
/// <SetStorageRetention documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabInsightsSetStorageRetentionGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabInsightsSetStorageRetentionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabInsightsInsightsSetStorageRetentionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SetStorageRetention call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabInsightsSetStorageRetentionGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful SetStorageRetention call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The size of the buffer for the result object.</param>
/// <param name="buffer">Byte buffer used for the result value and its fields.</param>
/// <param name="result">Pointer to the result object.</param>
/// <param name="bufferUsed">The number of bytes in the provided buffer that were used.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// result is a pointer within buffer and does not need to be freed separately.
/// </remarks>
HRESULT PlayFabInsightsSetStorageRetentionGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabInsightsInsightsOperationResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;
    

}