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
/// <AbortTaskInstance documentation goes here.>
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
/// <AddLocalizedNews documentation goes here.>
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
/// <AddNews documentation goes here.>
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
/// Get the size in bytes needed to store the result of a AddNews call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminAddNewsGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful AddNews call.
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
/// <AddPlayerTag documentation goes here.>
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
/// <AddServerBuild documentation goes here.>
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
/// Gets the result of a successful AddServerBuild call.
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
/// <AddUserVirtualCurrency documentation goes here.>
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
/// Get the size in bytes needed to store the result of a AddUserVirtualCurrency call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminAddUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful AddUserVirtualCurrency call.
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
/// <AddVirtualCurrencyTypes documentation goes here.>
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
/// <BanUsers documentation goes here.>
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
/// Gets the result of a successful BanUsers call.
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
/// <CheckLimitedEditionItemAvailability documentation goes here.>
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
/// Gets the result of a successful CheckLimitedEditionItemAvailability call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminCheckLimitedEditionItemAvailabilityResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCheckLimitedEditionItemAvailabilityGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminCheckLimitedEditionItemAvailabilityResult* result
) noexcept;
    
/// <summary>
/// <CreateActionsOnPlayersInSegmentTask documentation goes here.>
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
/// Get the size in bytes needed to store the result of a CreateActionsOnPlayersInSegmentTask call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateActionsOnPlayersInSegmentTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreateActionsOnPlayersInSegmentTask call.
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
/// <CreateCloudScriptTask documentation goes here.>
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
/// Get the size in bytes needed to store the result of a CreateCloudScriptTask call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateCloudScriptTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreateCloudScriptTask call.
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
/// <CreateInsightsScheduledScalingTask documentation goes here.>
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
/// Get the size in bytes needed to store the result of a CreateInsightsScheduledScalingTask call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateInsightsScheduledScalingTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreateInsightsScheduledScalingTask call.
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
/// <CreateOpenIdConnection documentation goes here.>
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
/// <CreatePlayerSharedSecret documentation goes here.>
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
/// Get the size in bytes needed to store the result of a CreatePlayerSharedSecret call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreatePlayerSharedSecretGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreatePlayerSharedSecret call.
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
/// <CreatePlayerStatisticDefinition documentation goes here.>
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
/// Gets the result of a successful CreatePlayerStatisticDefinition call.
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
/// <CreateSegment documentation goes here.>
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
/// Get the size in bytes needed to store the result of a CreateSegment call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminCreateSegmentGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreateSegment call.
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
/// <DeleteContent documentation goes here.>
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
/// <DeleteMasterPlayerAccount documentation goes here.>
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
/// Gets the result of a successful DeleteMasterPlayerAccount call.
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
/// <DeleteOpenIdConnection documentation goes here.>
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
/// <DeletePlayer documentation goes here.>
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
/// <DeletePlayerSharedSecret documentation goes here.>
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
/// <DeleteSegment documentation goes here.>
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
/// Get the size in bytes needed to store the result of a DeleteSegment call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminDeleteSegmentGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful DeleteSegment call.
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
/// <DeleteStore documentation goes here.>
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
/// <DeleteTask documentation goes here.>
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
/// <DeleteTitle documentation goes here.>
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
/// <DeleteTitleDataOverride documentation goes here.>
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
/// <ExportMasterPlayerData documentation goes here.>
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
/// Get the size in bytes needed to store the result of a ExportMasterPlayerData call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminExportMasterPlayerDataGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful ExportMasterPlayerData call.
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
/// <GetActionsOnPlayersInSegmentTaskInstance documentation goes here.>
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
/// Gets the result of a successful GetActionsOnPlayersInSegmentTaskInstance call.
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
/// <GetAllSegments documentation goes here.>
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
/// Gets the result of a successful GetAllSegments call.
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
/// <GetCatalogItems documentation goes here.>
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
/// Gets the result of a successful GetCatalogItems call.
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
/// <GetCloudScriptRevision documentation goes here.>
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
/// Gets the result of a successful GetCloudScriptRevision call.
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
/// <GetCloudScriptTaskInstance documentation goes here.>
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
/// Gets the result of a successful GetCloudScriptTaskInstance call.
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
/// <GetCloudScriptVersions documentation goes here.>
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
/// Gets the result of a successful GetCloudScriptVersions call.
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
/// <GetContentList documentation goes here.>
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
/// Gets the result of a successful GetContentList call.
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
/// <GetContentUploadUrl documentation goes here.>
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
/// Get the size in bytes needed to store the result of a GetContentUploadUrl call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetContentUploadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful GetContentUploadUrl call.
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
/// <GetDataReport documentation goes here.>
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
/// Get the size in bytes needed to store the result of a GetDataReport call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetDataReportGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful GetDataReport call.
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
/// <GetMatchmakerGameInfo documentation goes here.>
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
/// Gets the result of a successful GetMatchmakerGameInfo call.
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
/// <GetMatchmakerGameModes documentation goes here.>
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
/// Gets the result of a successful GetMatchmakerGameModes call.
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
/// <GetPlayedTitleList documentation goes here.>
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
/// Gets the result of a successful GetPlayedTitleList call.
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
/// <GetPlayerIdFromAuthToken documentation goes here.>
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
/// Get the size in bytes needed to store the result of a GetPlayerIdFromAuthToken call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetPlayerIdFromAuthTokenGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful GetPlayerIdFromAuthToken call.
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
/// <GetPlayerProfile documentation goes here.>
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
/// Gets the result of a successful GetPlayerProfile call.
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
/// <GetPlayerSegments documentation goes here.>
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
/// Gets the result of a successful GetPlayerSegments call.
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
/// <GetPlayerSharedSecrets documentation goes here.>
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
/// Gets the result of a successful GetPlayerSharedSecrets call.
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
/// <GetPlayersInSegment documentation goes here.>
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
/// Gets the result of a successful GetPlayersInSegment call.
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
/// <GetPlayerStatisticDefinitions documentation goes here.>
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
/// Gets the result of a successful GetPlayerStatisticDefinitions call.
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
/// <GetPlayerStatisticVersions documentation goes here.>
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
/// Gets the result of a successful GetPlayerStatisticVersions call.
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
/// <GetPlayerTags documentation goes here.>
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
/// Gets the result of a successful GetPlayerTags call.
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
/// <GetPolicy documentation goes here.>
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
/// Gets the result of a successful GetPolicy call.
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
/// <GetPublisherData documentation goes here.>
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
/// Gets the result of a successful GetPublisherData call.
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
/// <GetRandomResultTables documentation goes here.>
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
/// Gets the result of a successful GetRandomResultTables call.
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
/// <GetSegments documentation goes here.>
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
/// Gets the result of a successful GetSegments call.
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
/// <GetServerBuildInfo documentation goes here.>
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
/// Gets the result of a successful GetServerBuildInfo call.
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
/// <GetServerBuildUploadUrl documentation goes here.>
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
/// Get the size in bytes needed to store the result of a GetServerBuildUploadUrl call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminGetServerBuildUploadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful GetServerBuildUploadUrl call.
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
/// <GetStoreItems documentation goes here.>
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
/// Gets the result of a successful GetStoreItems call.
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
/// <GetTaskInstances documentation goes here.>
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
/// Gets the result of a successful GetTaskInstances call.
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
/// <GetTasks documentation goes here.>
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
/// Gets the result of a successful GetTasks call.
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
/// <GetTitleData documentation goes here.>
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
/// Gets the result of a successful GetTitleData call.
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
/// <GetTitleInternalData documentation goes here.>
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
/// Gets the result of a successful GetTitleInternalData call.
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
/// <GetUserAccountInfo documentation goes here.>
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
/// Gets the result of a successful GetUserAccountInfo call.
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
/// <GetUserBans documentation goes here.>
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
/// Gets the result of a successful GetUserBans call.
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
/// <GetUserData documentation goes here.>
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
/// Gets the result of a successful GetUserData call.
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
/// <GetUserInternalData documentation goes here.>
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
/// Gets the result of a successful GetUserInternalData call.
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
/// <GetUserInventory documentation goes here.>
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
/// Gets the result of a successful GetUserInventory call.
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
/// <GetUserPublisherData documentation goes here.>
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
/// Gets the result of a successful GetUserPublisherData call.
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
/// <GetUserPublisherInternalData documentation goes here.>
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
/// Gets the result of a successful GetUserPublisherInternalData call.
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
/// <GetUserPublisherReadOnlyData documentation goes here.>
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
/// Gets the result of a successful GetUserPublisherReadOnlyData call.
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
/// <GetUserReadOnlyData documentation goes here.>
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
/// Gets the result of a successful GetUserReadOnlyData call.
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
/// <GrantItemsToUsers documentation goes here.>
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
/// Gets the result of a successful GrantItemsToUsers call.
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
/// <IncrementLimitedEditionItemAvailability documentation goes here.>
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
/// <IncrementPlayerStatisticVersion documentation goes here.>
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
/// Gets the result of a successful IncrementPlayerStatisticVersion call.
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
/// <ListOpenIdConnection documentation goes here.>
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
/// Gets the result of a successful ListOpenIdConnection call.
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
/// <ListServerBuilds documentation goes here.>
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
/// Gets the result of a successful ListServerBuilds call.
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
/// <ListVirtualCurrencyTypes documentation goes here.>
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
/// Gets the result of a successful ListVirtualCurrencyTypes call.
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
/// <ModifyMatchmakerGameModes documentation goes here.>
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
/// <ModifyServerBuild documentation goes here.>
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
/// Gets the result of a successful ModifyServerBuild call.
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
/// <RefundPurchase documentation goes here.>
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
/// Get the size in bytes needed to store the result of a RefundPurchase call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminRefundPurchaseGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful RefundPurchase call.
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
/// <RemovePlayerTag documentation goes here.>
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
/// <RemoveServerBuild documentation goes here.>
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
/// <RemoveVirtualCurrencyTypes documentation goes here.>
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
/// <ResetCharacterStatistics documentation goes here.>
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
/// <ResetPassword documentation goes here.>
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
/// <ResetUserStatistics documentation goes here.>
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
/// <ResolvePurchaseDispute documentation goes here.>
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
/// Get the size in bytes needed to store the result of a ResolvePurchaseDispute call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminResolvePurchaseDisputeGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful ResolvePurchaseDispute call.
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
/// <RevokeAllBansForUser documentation goes here.>
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
/// Gets the result of a successful RevokeAllBansForUser call.
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
/// <RevokeBans documentation goes here.>
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
/// Gets the result of a successful RevokeBans call.
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
/// <RevokeInventoryItem documentation goes here.>
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
/// <RevokeInventoryItems documentation goes here.>
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
/// Gets the result of a successful RevokeInventoryItems call.
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
/// <RunTask documentation goes here.>
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
/// Get the size in bytes needed to store the result of a RunTask call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminRunTaskGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful RunTask call.
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
/// <SendAccountRecoveryEmail documentation goes here.>
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
/// <SetCatalogItems documentation goes here.>
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
/// <SetPlayerSecret documentation goes here.>
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
/// <SetPublishedRevision documentation goes here.>
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
/// <SetPublisherData documentation goes here.>
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
/// <SetStoreItems documentation goes here.>
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
/// <SetTitleData documentation goes here.>
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
/// <SetTitleDataAndOverrides documentation goes here.>
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
/// <SetTitleInternalData documentation goes here.>
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
/// <SetupPushNotification documentation goes here.>
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
/// Get the size in bytes needed to store the result of a SetupPushNotification call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminSetupPushNotificationGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful SetupPushNotification call.
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
/// <SubtractUserVirtualCurrency documentation goes here.>
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
/// Get the size in bytes needed to store the result of a SubtractUserVirtualCurrency call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminSubtractUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful SubtractUserVirtualCurrency call.
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
/// <UpdateBans documentation goes here.>
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
/// Gets the result of a successful UpdateBans call.
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
/// <UpdateCatalogItems documentation goes here.>
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
/// <UpdateCloudScript documentation goes here.>
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
/// Gets the result of a successful UpdateCloudScript call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateCloudScriptResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateCloudScriptResult* result
) noexcept;
    
/// <summary>
/// <UpdateOpenIdConnection documentation goes here.>
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
/// <UpdatePlayerSharedSecret documentation goes here.>
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
/// <UpdatePlayerStatisticDefinition documentation goes here.>
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
/// Gets the result of a successful UpdatePlayerStatisticDefinition call.
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
/// <UpdatePolicy documentation goes here.>
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
/// Gets the result of a successful UpdatePolicy call.
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
/// <UpdateRandomResultTables documentation goes here.>
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
/// <UpdateSegment documentation goes here.>
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
/// Get the size in bytes needed to store the result of a UpdateSegment call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateSegmentGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful UpdateSegment call.
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
/// <UpdateStoreItems documentation goes here.>
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
/// <UpdateTask documentation goes here.>
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
/// <UpdateUserData documentation goes here.>
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
/// Gets the result of a successful UpdateUserData call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;
    
/// <summary>
/// <UpdateUserInternalData documentation goes here.>
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
/// Gets the result of a successful UpdateUserInternalData call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;
    
/// <summary>
/// <UpdateUserPublisherData documentation goes here.>
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
/// Gets the result of a successful UpdateUserPublisherData call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;
    
/// <summary>
/// <UpdateUserPublisherInternalData documentation goes here.>
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
/// Gets the result of a successful UpdateUserPublisherInternalData call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserPublisherInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;
    
/// <summary>
/// <UpdateUserPublisherReadOnlyData documentation goes here.>
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
/// Gets the result of a successful UpdateUserPublisherReadOnlyData call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserPublisherReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;
    
/// <summary>
/// <UpdateUserReadOnlyData documentation goes here.>
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
/// Gets the result of a successful UpdateUserReadOnlyData call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabAdminUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabAdminUpdateUserDataResult* result
) noexcept;
    
/// <summary>
/// <UpdateUserTitleDisplayName documentation goes here.>
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
/// Get the size in bytes needed to store the result of a UpdateUserTitleDisplayName call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabAdminUpdateUserTitleDisplayNameGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful UpdateUserTitleDisplayName call.
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