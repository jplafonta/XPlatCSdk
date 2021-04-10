// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabDataDataModels.h>
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>

extern "C"
{

/// <summary>
/// <AbortFileUploads documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabDataAbortFileUploadsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabDataAbortFileUploadsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabDataAbortFileUploadsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful AbortFileUploads call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabDataAbortFileUploadsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataAbortFileUploadsResponse** result
) noexcept;

/// <summary>
/// <DeleteFiles documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabDataDeleteFilesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabDataDeleteFilesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabDataDeleteFilesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful DeleteFiles call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabDataDeleteFilesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataDeleteFilesResponse** result
) noexcept;

/// <summary>
/// <FinalizeFileUploads documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabDataFinalizeFileUploadsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabDataFinalizeFileUploadsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabDataFinalizeFileUploadsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful FinalizeFileUploads call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabDataFinalizeFileUploadsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataFinalizeFileUploadsResponse** result
) noexcept;

/// <summary>
/// <GetFiles documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabDataGetFilesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabDataGetFilesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabDataGetFilesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetFiles call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabDataGetFilesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataGetFilesResponse** result
) noexcept;

/// <summary>
/// <GetObjects documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabDataGetObjectsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabDataGetObjectsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabDataGetObjectsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetObjects call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabDataGetObjectsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataGetObjectsResponse** result
) noexcept;

/// <summary>
/// <InitiateFileUploads documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabDataInitiateFileUploadsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabDataInitiateFileUploadsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabDataInitiateFileUploadsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful InitiateFileUploads call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabDataInitiateFileUploadsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataInitiateFileUploadsResponse** result
) noexcept;

/// <summary>
/// <SetObjects documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabDataSetObjectsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabDataSetObjectsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabDataSetObjectsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful SetObjects call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabDataSetObjectsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabDataSetObjectsResponse** result
) noexcept;


}