// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabAdminDataModels.h>
#include <playfab/PlayFabGlobal.h>

extern "C"
{

/// <summary>
/// AbortTaskInstance documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminAbortTaskInstanceAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminAbortTaskInstanceRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddLocalizedNews documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminAddLocalizedNewsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminAddLocalizedNewsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddNews documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminAddNewsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminAddNewsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminAddNewsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a AddNews call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminAddNewsGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminAddNewsAsync call.
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
HRESULT PlayFabAdminAddNewsGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminAddNewsResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// AddPlayerTag documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminAddPlayerTagAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminAddPlayerTagRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddServerBuild documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminAddServerBuildGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminAddServerBuildAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminAddServerBuildRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminAddServerBuildAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminAddServerBuildGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminAddServerBuildResult** result
) noexcept;

/// <summary>
/// AddUserVirtualCurrency documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminAddUserVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminAddUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminAddUserVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a AddUserVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminAddUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminAddUserVirtualCurrencyAsync call.
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
HRESULT PlayFabAdminAddUserVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// AddVirtualCurrencyTypes documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminAddVirtualCurrencyTypesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminAddVirtualCurrencyTypesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// BanUsers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminBanUsersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminBanUsersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminBanUsersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminBanUsersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminBanUsersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminBanUsersResult** result
) noexcept;

/// <summary>
/// CheckLimitedEditionItemAvailability documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminCheckLimitedEditionItemAvailabilityGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminCheckLimitedEditionItemAvailabilityAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminCheckLimitedEditionItemAvailabilityAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminCheckLimitedEditionItemAvailabilityResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCheckLimitedEditionItemAvailabilityGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminCheckLimitedEditionItemAvailabilityResult* result
) noexcept;

/// <summary>
/// CreateActionsOnPlayersInSegmentTask documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminCreateActionsOnPlayersInSegmentTaskAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateActionsOnPlayersInSegmentTask call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminCreateActionsOnPlayersInSegmentTaskAsync call.
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
HRESULT PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreateCloudScriptTask documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminCreateCloudScriptTaskGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminCreateCloudScriptTaskAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCreateCloudScriptTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateCloudScriptTask call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateCloudScriptTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminCreateCloudScriptTaskAsync call.
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
HRESULT PlayFabAdminCreateCloudScriptTaskGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreateInsightsScheduledScalingTask documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminCreateInsightsScheduledScalingTaskGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminCreateInsightsScheduledScalingTaskAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCreateInsightsScheduledScalingTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateInsightsScheduledScalingTask call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateInsightsScheduledScalingTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminCreateInsightsScheduledScalingTaskAsync call.
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
HRESULT PlayFabAdminCreateInsightsScheduledScalingTaskGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreateOpenIdConnection documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminCreateOpenIdConnectionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCreateOpenIdConnectionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// CreatePlayerSharedSecret documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminCreatePlayerSharedSecretGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminCreatePlayerSharedSecretAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCreatePlayerSharedSecretRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreatePlayerSharedSecret call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreatePlayerSharedSecretGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminCreatePlayerSharedSecretAsync call.
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
HRESULT PlayFabAdminCreatePlayerSharedSecretGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreatePlayerSharedSecretResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreatePlayerStatisticDefinition documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminCreatePlayerStatisticDefinitionGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminCreatePlayerStatisticDefinitionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCreatePlayerStatisticDefinitionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminCreatePlayerStatisticDefinitionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminCreatePlayerStatisticDefinitionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminCreatePlayerStatisticDefinitionResult** result
) noexcept;

/// <summary>
/// CreateSegment documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminCreateSegmentGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminCreateSegmentAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminCreateSegmentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateSegment call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateSegmentGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminCreateSegmentAsync call.
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
HRESULT PlayFabAdminCreateSegmentGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminCreateSegmentResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// DeleteContent documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeleteContentAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeleteContentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteMasterPlayerAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminDeleteMasterPlayerAccountGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminDeleteMasterPlayerAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeleteMasterPlayerAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminDeleteMasterPlayerAccountAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminDeleteMasterPlayerAccountGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminDeleteMasterPlayerAccountResult** result
) noexcept;

/// <summary>
/// DeleteOpenIdConnection documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeleteOpenIdConnectionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeleteOpenIdConnectionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeletePlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeletePlayerAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeletePlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeletePlayerSharedSecret documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeletePlayerSharedSecretAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeletePlayerSharedSecretRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteSegment documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminDeleteSegmentGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminDeleteSegmentAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeleteSegmentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a DeleteSegment call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminDeleteSegmentGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminDeleteSegmentAsync call.
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
HRESULT PlayFabAdminDeleteSegmentGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminDeleteSegmentsResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// DeleteStore documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeleteStoreAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeleteStoreRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteTask documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeleteTaskAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeleteTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteTitle documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeleteTitleAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteTitleDataOverride documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminDeleteTitleDataOverrideAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminDeleteTitleDataOverrideRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ExportMasterPlayerData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminExportMasterPlayerDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminExportMasterPlayerDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminExportMasterPlayerDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a ExportMasterPlayerData call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminExportMasterPlayerDataGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminExportMasterPlayerDataAsync call.
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
HRESULT PlayFabAdminExportMasterPlayerDataGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminExportMasterPlayerDataResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetActionsOnPlayersInSegmentTaskInstance documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetTaskInstanceRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult** result
) noexcept;

/// <summary>
/// GetAllSegments documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetAllSegmentsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetAllSegmentsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetAllSegmentsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetAllSegmentsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetAllSegmentsResult** result
) noexcept;

/// <summary>
/// GetCatalogItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetCatalogItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetCatalogItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetCatalogItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetCatalogItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetCatalogItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCatalogItemsResult** result
) noexcept;

/// <summary>
/// GetCloudScriptRevision documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetCloudScriptRevisionGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetCloudScriptRevisionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetCloudScriptRevisionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetCloudScriptRevisionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetCloudScriptRevisionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCloudScriptRevisionResult** result
) noexcept;

/// <summary>
/// GetCloudScriptTaskInstance documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetCloudScriptTaskInstanceGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetCloudScriptTaskInstanceAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetTaskInstanceRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetCloudScriptTaskInstanceAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetCloudScriptTaskInstanceGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCloudScriptTaskInstanceResult** result
) noexcept;

/// <summary>
/// GetCloudScriptVersions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetCloudScriptVersionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetCloudScriptVersionsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetCloudScriptVersionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetCloudScriptVersionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetCloudScriptVersionsResult** result
) noexcept;

/// <summary>
/// GetContentList documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetContentListGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetContentListAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetContentListRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetContentListAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetContentListGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetContentListResult** result
) noexcept;

/// <summary>
/// GetContentUploadUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetContentUploadUrlGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetContentUploadUrlAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetContentUploadUrlRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetContentUploadUrl call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetContentUploadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetContentUploadUrlAsync call.
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
HRESULT PlayFabAdminGetContentUploadUrlGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetContentUploadUrlResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetDataReport documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetDataReportGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetDataReportAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetDataReportRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetDataReport call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetDataReportGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetDataReportAsync call.
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
HRESULT PlayFabAdminGetDataReportGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetDataReportResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetMatchmakerGameInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetMatchmakerGameInfoGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetMatchmakerGameInfoAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetMatchmakerGameInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetMatchmakerGameInfoAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetMatchmakerGameInfoGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetMatchmakerGameInfoResult** result
) noexcept;

/// <summary>
/// GetMatchmakerGameModes documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetMatchmakerGameModesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetMatchmakerGameModesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetMatchmakerGameModesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetMatchmakerGameModesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetMatchmakerGameModesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetMatchmakerGameModesResult** result
) noexcept;

/// <summary>
/// GetPlayedTitleList documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayedTitleListGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayedTitleListAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPlayedTitleListRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayedTitleListAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayedTitleListGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayedTitleListResult** result
) noexcept;

/// <summary>
/// GetPlayerIdFromAuthToken documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayerIdFromAuthTokenGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayerIdFromAuthTokenAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPlayerIdFromAuthTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetPlayerIdFromAuthToken call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetPlayerIdFromAuthTokenGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayerIdFromAuthTokenAsync call.
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
HRESULT PlayFabAdminGetPlayerIdFromAuthTokenGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetPlayerIdFromAuthTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetPlayerProfile documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayerProfileGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayerProfileAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPlayerProfileRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayerProfileAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayerProfileGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerProfileResult** result
) noexcept;

/// <summary>
/// GetPlayerSegments documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayerSegmentsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayerSegmentsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPlayersSegmentsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayerSegmentsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayerSegmentsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerSegmentsResult** result
) noexcept;

/// <summary>
/// GetPlayerSharedSecrets documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayerSharedSecretsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayerSharedSecretsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayerSharedSecretsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayerSharedSecretsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerSharedSecretsResult** result
) noexcept;

/// <summary>
/// GetPlayersInSegment documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayersInSegmentGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayersInSegmentAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPlayersInSegmentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayersInSegmentAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayersInSegmentGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayersInSegmentResult** result
) noexcept;

/// <summary>
/// GetPlayerStatisticDefinitions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayerStatisticDefinitionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayerStatisticDefinitionsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayerStatisticDefinitionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayerStatisticDefinitionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerStatisticDefinitionsResult** result
) noexcept;

/// <summary>
/// GetPlayerStatisticVersions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayerStatisticVersionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayerStatisticVersionsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPlayerStatisticVersionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayerStatisticVersionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayerStatisticVersionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerStatisticVersionsResult** result
) noexcept;

/// <summary>
/// GetPlayerTags documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPlayerTagsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPlayerTagsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPlayerTagsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPlayerTagsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPlayerTagsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPlayerTagsResult** result
) noexcept;

/// <summary>
/// GetPolicy documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPolicyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPolicyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPolicyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPolicyAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPolicyGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPolicyResponse** result
) noexcept;

/// <summary>
/// GetPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetPublisherDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetPublisherDataResult** result
) noexcept;

/// <summary>
/// GetRandomResultTables documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetRandomResultTablesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetRandomResultTablesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetRandomResultTablesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetRandomResultTablesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetRandomResultTablesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetRandomResultTablesResult** result
) noexcept;

/// <summary>
/// GetSegments documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetSegmentsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetSegmentsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetSegmentsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetSegmentsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetSegmentsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetSegmentsResponse** result
) noexcept;

/// <summary>
/// GetServerBuildInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetServerBuildInfoGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetServerBuildInfoAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetServerBuildInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetServerBuildInfoAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetServerBuildInfoGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetServerBuildInfoResult** result
) noexcept;

/// <summary>
/// GetServerBuildUploadUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetServerBuildUploadUrlGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetServerBuildUploadUrlAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetServerBuildUploadURLRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetServerBuildUploadUrl call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetServerBuildUploadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetServerBuildUploadUrlAsync call.
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
HRESULT PlayFabAdminGetServerBuildUploadUrlGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminGetServerBuildUploadURLResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetStoreItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetStoreItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetStoreItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetStoreItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetStoreItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetStoreItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetStoreItemsResult** result
) noexcept;

/// <summary>
/// GetTaskInstances documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetTaskInstancesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetTaskInstancesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetTaskInstancesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetTaskInstancesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetTaskInstancesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTaskInstancesResult** result
) noexcept;

/// <summary>
/// GetTasks documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetTasksGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetTasksAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetTasksRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetTasksAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetTasksGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTasksResult** result
) noexcept;

/// <summary>
/// GetTitleData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetTitleDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetTitleDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetTitleDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetTitleDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTitleDataResult** result
) noexcept;

/// <summary>
/// GetTitleInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetTitleInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetTitleInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetTitleInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetTitleInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetTitleDataResult** result
) noexcept;

/// <summary>
/// GetUserAccountInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserAccountInfoGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserAccountInfoAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminLookupUserAccountInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserAccountInfoAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserAccountInfoGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminLookupUserAccountInfoResult** result
) noexcept;

/// <summary>
/// GetUserBans documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserBansGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserBansAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserBansRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserBansAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserBansGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserBansResult** result
) noexcept;

/// <summary>
/// GetUserData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserInventory documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserInventoryGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserInventoryAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserInventoryRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserInventoryAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserInventoryGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserInventoryResult** result
) noexcept;

/// <summary>
/// GetUserPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserPublisherInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserPublisherInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserPublisherInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserPublisherInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserPublisherReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserPublisherReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserPublisherReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserPublisherReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGetUserReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGetUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGetUserReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGetUserReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGetUserDataResult** result
) noexcept;

/// <summary>
/// GrantItemsToUsers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminGrantItemsToUsersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminGrantItemsToUsersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminGrantItemsToUsersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminGrantItemsToUsersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminGrantItemsToUsersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminGrantItemsToUsersResult** result
) noexcept;

/// <summary>
/// IncrementLimitedEditionItemAvailability documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminIncrementLimitedEditionItemAvailabilityAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// IncrementPlayerStatisticVersion documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminIncrementPlayerStatisticVersionGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminIncrementPlayerStatisticVersionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminIncrementPlayerStatisticVersionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminIncrementPlayerStatisticVersionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminIncrementPlayerStatisticVersionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminIncrementPlayerStatisticVersionResult** result
) noexcept;

/// <summary>
/// ListOpenIdConnection documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminListOpenIdConnectionGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminListOpenIdConnectionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminListOpenIdConnectionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminListOpenIdConnectionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminListOpenIdConnectionResponse** result
) noexcept;

/// <summary>
/// ListServerBuilds documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminListServerBuildsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminListServerBuildsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminListServerBuildsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminListServerBuildsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminListBuildsResult** result
) noexcept;

/// <summary>
/// ListVirtualCurrencyTypes documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminListVirtualCurrencyTypesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminListVirtualCurrencyTypesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminListVirtualCurrencyTypesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminListVirtualCurrencyTypesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminListVirtualCurrencyTypesResult** result
) noexcept;

/// <summary>
/// ModifyMatchmakerGameModes documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminModifyMatchmakerGameModesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminModifyMatchmakerGameModesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ModifyServerBuild documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminModifyServerBuildGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminModifyServerBuildAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminModifyServerBuildRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminModifyServerBuildAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminModifyServerBuildGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminModifyServerBuildResult** result
) noexcept;

/// <summary>
/// RefundPurchase documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminRefundPurchaseGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminRefundPurchaseAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRefundPurchaseRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a RefundPurchase call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminRefundPurchaseGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminRefundPurchaseAsync call.
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
HRESULT PlayFabAdminRefundPurchaseGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminRefundPurchaseResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// RemovePlayerTag documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminRemovePlayerTagAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRemovePlayerTagRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveServerBuild documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminRemoveServerBuildAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRemoveServerBuildRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveVirtualCurrencyTypes documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminRemoveVirtualCurrencyTypesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRemoveVirtualCurrencyTypesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ResetCharacterStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminResetCharacterStatisticsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminResetCharacterStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ResetPassword documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminResetPasswordAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminResetPasswordRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ResetUserStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminResetUserStatisticsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminResetUserStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ResolvePurchaseDispute documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminResolvePurchaseDisputeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminResolvePurchaseDisputeAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminResolvePurchaseDisputeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a ResolvePurchaseDispute call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminResolvePurchaseDisputeGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminResolvePurchaseDisputeAsync call.
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
HRESULT PlayFabAdminResolvePurchaseDisputeGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminResolvePurchaseDisputeResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// RevokeAllBansForUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminRevokeAllBansForUserGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminRevokeAllBansForUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRevokeAllBansForUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminRevokeAllBansForUserAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminRevokeAllBansForUserGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminRevokeAllBansForUserResult** result
) noexcept;

/// <summary>
/// RevokeBans documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminRevokeBansGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminRevokeBansAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRevokeBansRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminRevokeBansAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminRevokeBansGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminRevokeBansResult** result
) noexcept;

/// <summary>
/// RevokeInventoryItem documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminRevokeInventoryItemAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRevokeInventoryItemRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RevokeInventoryItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminRevokeInventoryItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminRevokeInventoryItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRevokeInventoryItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminRevokeInventoryItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminRevokeInventoryItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminRevokeInventoryItemsResult** result
) noexcept;

/// <summary>
/// RunTask documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminRunTaskGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminRunTaskAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminRunTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a RunTask call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminRunTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminRunTaskAsync call.
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
HRESULT PlayFabAdminRunTaskGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminRunTaskResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// SendAccountRecoveryEmail documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSendAccountRecoveryEmailAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSendAccountRecoveryEmailRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetCatalogItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetCatalogItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateCatalogItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetPlayerSecret documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetPlayerSecretAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSetPlayerSecretRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetPublishedRevision documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetPublishedRevisionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSetPublishedRevisionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSetPublisherDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetStoreItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetStoreItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateStoreItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetTitleData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetTitleDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetTitleDataAndOverrides documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetTitleDataAndOverridesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSetTitleDataAndOverridesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetTitleInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminSetTitleInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetupPushNotification documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminSetupPushNotificationGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminSetupPushNotificationAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSetupPushNotificationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SetupPushNotification call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminSetupPushNotificationGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminSetupPushNotificationAsync call.
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
HRESULT PlayFabAdminSetupPushNotificationGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminSetupPushNotificationResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// SubtractUserVirtualCurrency documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminSubtractUserVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminSubtractUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminSubtractUserVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SubtractUserVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminSubtractUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminSubtractUserVirtualCurrencyAsync call.
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
HRESULT PlayFabAdminSubtractUserVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// UpdateBans documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateBansGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateBansAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateBansRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateBansAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminUpdateBansGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminUpdateBansResult** result
) noexcept;

/// <summary>
/// UpdateCatalogItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminUpdateCatalogItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateCatalogItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateCloudScript documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateCloudScriptGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateCloudScriptAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateCloudScriptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateCloudScriptResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateCloudScriptResult* result
) noexcept;

/// <summary>
/// UpdateOpenIdConnection documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminUpdateOpenIdConnectionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateOpenIdConnectionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdatePlayerSharedSecret documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminUpdatePlayerSharedSecretAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdatePlayerSharedSecretRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdatePlayerStatisticDefinition documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdatePlayerStatisticDefinitionGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdatePlayerStatisticDefinitionAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdatePlayerStatisticDefinitionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdatePlayerStatisticDefinitionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminUpdatePlayerStatisticDefinitionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminUpdatePlayerStatisticDefinitionResult** result
) noexcept;

/// <summary>
/// UpdatePolicy documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdatePolicyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdatePolicyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdatePolicyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdatePolicyAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabAdminUpdatePolicyGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAdminUpdatePolicyResponse** result
) noexcept;

/// <summary>
/// UpdateRandomResultTables documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminUpdateRandomResultTablesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateRandomResultTablesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateSegment documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateSegmentGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateSegmentAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateSegmentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a UpdateSegment call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateSegmentGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateSegmentAsync call.
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
HRESULT PlayFabAdminUpdateSegmentGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminUpdateSegmentResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// UpdateStoreItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminUpdateStoreItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateStoreItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateTask documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabAdminUpdateTaskAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateUserData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateUserDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateUserDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateUserDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateUserInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateUserInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateUserInternalDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateUserInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateUserPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateUserPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateUserPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserPublisherInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateUserPublisherInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateUserInternalDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateUserPublisherInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserPublisherInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserPublisherReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateUserPublisherReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateUserPublisherReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserPublisherReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateUserReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateUserReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserTitleDisplayName documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabAdminUpdateUserTitleDisplayNameGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabAdminUpdateUserTitleDisplayNameAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAdminUpdateUserTitleDisplayNameRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a UpdateUserTitleDisplayName call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserTitleDisplayNameGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabAdminUpdateUserTitleDisplayNameAsync call.
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
HRESULT PlayFabAdminUpdateUserTitleDisplayNameGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabAdminUpdateUserTitleDisplayNameResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;


}