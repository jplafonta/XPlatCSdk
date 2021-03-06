// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFDataDataModels.h>
#include <playfab/PFGlobal.h>
#include <playfab/PFTitlePlayer.h>

extern "C"
{

/// <summary>
/// Abort pending file uploads to an entity's profile.
/// </summary>
/// <param name="entityHandle">PFEntityHandle to use for authentication.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Aborts the pending upload of the requested files. See also FileDeleteFilesAsync, FileFinalizeFileUploadsAsync,
/// FileGetFilesAsync, FileInitiateFileUploadsAsync.
///
/// If successful, call <see cref="PFDataAbortFileUploadsGetResult"/> to get the result.
/// </remarks>
HRESULT PFDataAbortFileUploadsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFDataAbortFileUploadsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFDataAbortFileUploadsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFDataAbortFileUploadsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataAbortFileUploadsResponse** result
) noexcept;

/// <summary>
/// Delete files on an entity's profile.
/// </summary>
/// <param name="entityHandle">PFEntityHandle to use for authentication.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Deletes the requested files from the entity's profile. See also FileAbortFileUploadsAsync, FileFinalizeFileUploadsAsync,
/// FileGetFilesAsync, FileInitiateFileUploadsAsync.
///
/// If successful, call <see cref="PFDataDeleteFilesGetResult"/> to get the result.
/// </remarks>
HRESULT PFDataDeleteFilesAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFDataDeleteFilesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFDataDeleteFilesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFDataDeleteFilesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataDeleteFilesResponse** result
) noexcept;

/// <summary>
/// Finalize file uploads to an entity's profile.
/// </summary>
/// <param name="entityHandle">PFEntityHandle to use for authentication.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Finalizes the upload of the requested files. Verifies that the files have been successfully uploaded
/// and moves the file pointers from pending to live. See also FileAbortFileUploadsAsync, FileDeleteFilesAsync,
/// FileGetFilesAsync, FileInitiateFileUploadsAsync.
///
/// If successful, call <see cref="PFDataFinalizeFileUploadsGetResult"/> to get the result.
/// </remarks>
HRESULT PFDataFinalizeFileUploadsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFDataFinalizeFileUploadsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFDataFinalizeFileUploadsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFDataFinalizeFileUploadsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataFinalizeFileUploadsResponse** result
) noexcept;

/// <summary>
/// Retrieves file metadata from an entity's profile.
/// </summary>
/// <param name="entityHandle">PFEntityHandle to use for authentication.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Returns URLs that may be used to download the files for a profile for a limited length of time. Only
/// returns files that have been successfully uploaded, files that are still pending will either return
/// the old value, if it exists, or nothing. See also FileAbortFileUploadsAsync, FileDeleteFilesAsync,
/// FileFinalizeFileUploadsAsync, FileInitiateFileUploadsAsync.
///
/// If successful, call <see cref="PFDataGetFilesGetResult"/> to get the result.
/// </remarks>
HRESULT PFDataGetFilesAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFDataGetFilesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFDataGetFilesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFDataGetFilesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataGetFilesResponse** result
) noexcept;

/// <summary>
/// Retrieves objects from an entity's profile.
/// </summary>
/// <param name="entityHandle">PFEntityHandle to use for authentication.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Gets JSON objects from an entity profile and returns it.  See also ObjectSetObjectsAsync.
///
/// If successful, call <see cref="PFDataGetObjectsGetResult"/> to get the result.
/// </remarks>
HRESULT PFDataGetObjectsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFDataGetObjectsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFDataGetObjectsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFDataGetObjectsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataGetObjectsResponse** result
) noexcept;

/// <summary>
/// Initiates file uploads to an entity's profile.
/// </summary>
/// <param name="entityHandle">PFEntityHandle to use for authentication.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Returns URLs that may be used to upload the files for a profile 5 minutes. After using the upload
/// calls FinalizeFileUploads must be called to move the file status from pending to live. See also FileAbortFileUploadsAsync,
/// FileDeleteFilesAsync, FileFinalizeFileUploadsAsync, FileGetFilesAsync.
///
/// If successful, call <see cref="PFDataInitiateFileUploadsGetResult"/> to get the result.
/// </remarks>
HRESULT PFDataInitiateFileUploadsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFDataInitiateFileUploadsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFDataInitiateFileUploadsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFDataInitiateFileUploadsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataInitiateFileUploadsResponse** result
) noexcept;

/// <summary>
/// Sets objects on an entity's profile.
/// </summary>
/// <param name="entityHandle">PFEntityHandle to use for authentication.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Sets JSON objects on the requested entity profile. May include a version number to be used to perform
/// optimistic concurrency operations during update. If the current version differs from the version in
/// the request the request will be ignored. If no version is set on the request then the value will always
/// be updated if the values differ. Using the version value does not guarantee a write though, ConcurrentEditError
/// may still occur if multiple clients are attempting to update the same profile.  See also ObjectGetObjectsAsync.
///
/// If successful, call <see cref="PFDataSetObjectsGetResult"/> to get the result.
/// </remarks>
HRESULT PFDataSetObjectsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFDataSetObjectsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFDataSetObjectsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFDataSetObjectsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFDataSetObjectsResponse** result
) noexcept;


}