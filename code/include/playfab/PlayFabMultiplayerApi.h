// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabMultiplayerDataModels.h>
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>

extern "C"
{

/// <summary>
/// CancelAllMatchmakingTicketsForPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// CancelAllServerBackfillTicketsForPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// CancelMatchmakingTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerCancelMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCancelMatchmakingTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// CancelServerBackfillTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerCancelServerBackfillTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCancelServerBackfillTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// CreateBuildAlias documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateBuildAliasGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildAliasAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateBuildAliasRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateBuildAliasAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildAliasGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerBuildAliasDetailsResponse** result
) noexcept;

/// <summary>
/// CreateBuildWithCustomContainer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateBuildWithCustomContainerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildWithCustomContainerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateBuildWithCustomContainerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateBuildWithCustomContainerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildWithCustomContainerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateBuildWithCustomContainerResponse** result
) noexcept;

/// <summary>
/// CreateBuildWithManagedContainer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateBuildWithManagedContainerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildWithManagedContainerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateBuildWithManagedContainerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateBuildWithManagedContainerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildWithManagedContainerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateBuildWithManagedContainerResponse** result
) noexcept;

/// <summary>
/// CreateBuildWithProcessBasedServer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateBuildWithProcessBasedServerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildWithProcessBasedServerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateBuildWithProcessBasedServerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerCreateBuildWithProcessBasedServerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse** result
) noexcept;

/// <summary>
/// CreateMatchmakingTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateMatchmakingTicketGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateMatchmakingTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateMatchmakingTicket call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerCreateMatchmakingTicketGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateMatchmakingTicketAsync call.
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
HRESULT PlayFabMultiplayerCreateMatchmakingTicketGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateMatchmakingTicketResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreateRemoteUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateRemoteUserGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateRemoteUserAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateRemoteUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateRemoteUserAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerCreateRemoteUserGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerCreateRemoteUserResponse** result
) noexcept;

/// <summary>
/// CreateServerBackfillTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateServerBackfillTicketGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateServerBackfillTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateServerBackfillTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateServerBackfillTicket call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerCreateServerBackfillTicketGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateServerBackfillTicketAsync call.
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
HRESULT PlayFabMultiplayerCreateServerBackfillTicketGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateServerBackfillTicketResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreateServerMatchmakingTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateServerMatchmakingTicketGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateServerMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateServerMatchmakingTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateServerMatchmakingTicket call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerCreateServerMatchmakingTicketGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateServerMatchmakingTicketAsync call.
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
HRESULT PlayFabMultiplayerCreateServerMatchmakingTicketGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateMatchmakingTicketResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreateTitleMultiplayerServersQuotaChange documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateTitleMultiplayerServersQuotaChange call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeAsync call.
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
HRESULT PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// DeleteAsset documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerDeleteAssetAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerDeleteAssetRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteBuild documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerDeleteBuildAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerDeleteBuildRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteBuildAlias documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerDeleteBuildAliasAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerDeleteBuildAliasRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteBuildRegion documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerDeleteBuildRegionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerDeleteBuildRegionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteCertificate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerDeleteCertificateAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerDeleteCertificateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteContainerImageRepository documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerDeleteContainerImageRepositoryAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerDeleteContainerImageRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteRemoteUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerDeleteRemoteUserAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerDeleteRemoteUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// EnableMultiplayerServersForTitle documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerEnableMultiplayerServersForTitleGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerEnableMultiplayerServersForTitleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerEnableMultiplayerServersForTitleAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerEnableMultiplayerServersForTitleGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerEnableMultiplayerServersForTitleResponse** result
) noexcept;

/// <summary>
/// GetAssetDownloadUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetAssetDownloadUrlGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetAssetDownloadUrlAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetAssetDownloadUrlRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetAssetDownloadUrl call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerGetAssetDownloadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetAssetDownloadUrlAsync call.
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
HRESULT PlayFabMultiplayerGetAssetDownloadUrlGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetAssetDownloadUrlResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetAssetUploadUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetAssetUploadUrlGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetAssetUploadUrlAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetAssetUploadUrlRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetAssetUploadUrl call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerGetAssetUploadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetAssetUploadUrlAsync call.
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
HRESULT PlayFabMultiplayerGetAssetUploadUrlGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetAssetUploadUrlResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetBuild documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetBuildGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetBuildAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetBuildRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetBuildAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetBuildGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetBuildResponse** result
) noexcept;

/// <summary>
/// GetBuildAlias documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetBuildAliasGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetBuildAliasAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetBuildAliasRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetBuildAliasAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetBuildAliasGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerBuildAliasDetailsResponse** result
) noexcept;

/// <summary>
/// GetContainerRegistryCredentials documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetContainerRegistryCredentialsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetContainerRegistryCredentialsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetContainerRegistryCredentialsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetContainerRegistryCredentials call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerGetContainerRegistryCredentialsGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetContainerRegistryCredentialsAsync call.
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
HRESULT PlayFabMultiplayerGetContainerRegistryCredentialsGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetContainerRegistryCredentialsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetMatch documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetMatchGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetMatchAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetMatchRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetMatchAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetMatchGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetMatchResult** result
) noexcept;

/// <summary>
/// GetMatchmakingTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetMatchmakingTicketGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetMatchmakingTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetMatchmakingTicketAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetMatchmakingTicketGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetMatchmakingTicketResult** result
) noexcept;

/// <summary>
/// GetMultiplayerServerDetails documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetMultiplayerServerDetailsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetMultiplayerServerDetailsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetMultiplayerServerDetailsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetMultiplayerServerDetailsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetMultiplayerServerDetailsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetMultiplayerServerDetailsResponse** result
) noexcept;

/// <summary>
/// GetMultiplayerServerLogs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetMultiplayerServerLogsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetMultiplayerServerLogsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetMultiplayerServerLogsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetMultiplayerServerLogs call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerGetMultiplayerServerLogsGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetMultiplayerServerLogsAsync call.
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
HRESULT PlayFabMultiplayerGetMultiplayerServerLogsGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetMultiplayerServerLogsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetMultiplayerSessionLogsBySessionId documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetMultiplayerSessionLogsBySessionId call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdAsync call.
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
HRESULT PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetMultiplayerServerLogsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetQueueStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetQueueStatisticsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetQueueStatisticsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetQueueStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetQueueStatisticsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetQueueStatisticsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetQueueStatisticsResult** result
) noexcept;

/// <summary>
/// GetRemoteLoginEndpoint documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetRemoteLoginEndpointGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetRemoteLoginEndpointAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetRemoteLoginEndpointRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetRemoteLoginEndpoint call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerGetRemoteLoginEndpointGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetRemoteLoginEndpointAsync call.
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
HRESULT PlayFabMultiplayerGetRemoteLoginEndpointGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerGetRemoteLoginEndpointResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetServerBackfillTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetServerBackfillTicketGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetServerBackfillTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetServerBackfillTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetServerBackfillTicketAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetServerBackfillTicketGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetServerBackfillTicketResult** result
) noexcept;

/// <summary>
/// GetTitleEnabledForMultiplayerServersStatus documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse** result
) noexcept;

/// <summary>
/// GetTitleMultiplayerServersQuotaChange documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse** result
) noexcept;

/// <summary>
/// GetTitleMultiplayerServersQuotas documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerGetTitleMultiplayerServersQuotasGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotasAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerGetTitleMultiplayerServersQuotasAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerGetTitleMultiplayerServersQuotasGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse** result
) noexcept;

/// <summary>
/// JoinMatchmakingTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerJoinMatchmakingTicketAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerJoinMatchmakingTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ListArchivedMultiplayerServers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListArchivedMultiplayerServersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListArchivedMultiplayerServersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListMultiplayerServersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListArchivedMultiplayerServersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListArchivedMultiplayerServersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListMultiplayerServersResponse** result
) noexcept;

/// <summary>
/// ListAssetSummaries documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListAssetSummariesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListAssetSummariesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListAssetSummariesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListAssetSummariesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListAssetSummariesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListAssetSummariesResponse** result
) noexcept;

/// <summary>
/// ListBuildAliases documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListBuildAliasesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListBuildAliasesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListBuildAliasesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListBuildAliasesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListBuildAliasesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListBuildAliasesResponse** result
) noexcept;

/// <summary>
/// ListBuildSummariesV2 documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListBuildSummariesV2GetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListBuildSummariesV2Async(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListBuildSummariesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListBuildSummariesV2Async call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListBuildSummariesV2GetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListBuildSummariesResponse** result
) noexcept;

/// <summary>
/// ListCertificateSummaries documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListCertificateSummariesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListCertificateSummariesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListCertificateSummariesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListCertificateSummariesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListCertificateSummariesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListCertificateSummariesResponse** result
) noexcept;

/// <summary>
/// ListContainerImages documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListContainerImagesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListContainerImagesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListContainerImagesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListContainerImagesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListContainerImagesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListContainerImagesResponse** result
) noexcept;

/// <summary>
/// ListContainerImageTags documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListContainerImageTagsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListContainerImageTagsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListContainerImageTagsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListContainerImageTagsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListContainerImageTagsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListContainerImageTagsResponse** result
) noexcept;

/// <summary>
/// ListMatchmakingTicketsForPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListMatchmakingTicketsForPlayerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListMatchmakingTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListMatchmakingTicketsForPlayerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListMatchmakingTicketsForPlayerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListMatchmakingTicketsForPlayerResult** result
) noexcept;

/// <summary>
/// ListMultiplayerServers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListMultiplayerServersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListMultiplayerServersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListMultiplayerServersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListMultiplayerServersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListMultiplayerServersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListMultiplayerServersResponse** result
) noexcept;

/// <summary>
/// ListPartyQosServers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListPartyQosServersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListPartyQosServersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabMultiplayerListPartyQosServersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListPartyQosServersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListPartyQosServersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListPartyQosServersResponse** result
) noexcept;

/// <summary>
/// ListQosServersForTitle documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListQosServersForTitleGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListQosServersForTitleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListQosServersForTitleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListQosServersForTitleAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListQosServersForTitleGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListQosServersForTitleResponse** result
) noexcept;

/// <summary>
/// ListServerBackfillTicketsForPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListServerBackfillTicketsForPlayerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListServerBackfillTicketsForPlayerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListServerBackfillTicketsForPlayerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListServerBackfillTicketsForPlayerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListServerBackfillTicketsForPlayerResult** result
) noexcept;

/// <summary>
/// ListTitleMultiplayerServersQuotaChanges documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse** result
) noexcept;

/// <summary>
/// ListVirtualMachineSummaries documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerListVirtualMachineSummariesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerListVirtualMachineSummariesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerListVirtualMachineSummariesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerListVirtualMachineSummariesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerListVirtualMachineSummariesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerListVirtualMachineSummariesResponse** result
) noexcept;

/// <summary>
/// RequestMultiplayerServer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerRequestMultiplayerServerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerRequestMultiplayerServerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerRequestMultiplayerServerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerRequestMultiplayerServerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerRequestMultiplayerServerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerRequestMultiplayerServerResponse** result
) noexcept;

/// <summary>
/// RolloverContainerRegistryCredentials documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerRolloverContainerRegistryCredentialsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerRolloverContainerRegistryCredentialsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a RolloverContainerRegistryCredentials call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabMultiplayerRolloverContainerRegistryCredentialsGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerRolloverContainerRegistryCredentialsAsync call.
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
HRESULT PlayFabMultiplayerRolloverContainerRegistryCredentialsGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// ShutdownMultiplayerServer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerShutdownMultiplayerServerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerShutdownMultiplayerServerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UntagContainerImage documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerUntagContainerImageAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerUntagContainerImageRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateBuildAlias documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabMultiplayerUpdateBuildAliasGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabMultiplayerUpdateBuildAliasAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerUpdateBuildAliasRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabMultiplayerUpdateBuildAliasAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabMultiplayerUpdateBuildAliasGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabMultiplayerBuildAliasDetailsResponse** result
) noexcept;

/// <summary>
/// UpdateBuildName documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerUpdateBuildNameAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerUpdateBuildNameRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateBuildRegion documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerUpdateBuildRegionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerUpdateBuildRegionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateBuildRegions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerUpdateBuildRegionsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerUpdateBuildRegionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UploadCertificate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabMultiplayerUploadCertificateAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabMultiplayerUploadCertificateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;


}