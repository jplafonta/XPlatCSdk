// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabExperimentationDataModels.h>
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>

extern "C"
{

/// <summary>
/// <CreateExclusionGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabExperimentationCreateExclusionGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabExperimentationCreateExclusionGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationCreateExclusionGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateExclusionGroup call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabExperimentationCreateExclusionGroupGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreateExclusionGroup call.
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
HRESULT PlayFabExperimentationCreateExclusionGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabExperimentationCreateExclusionGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;
    
/// <summary>
/// <CreateExperiment documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabExperimentationCreateExperimentGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabExperimentationCreateExperimentAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationCreateExperimentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateExperiment call.>
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabExperimentationCreateExperimentGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful CreateExperiment call.
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
HRESULT PlayFabExperimentationCreateExperimentGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabExperimentationCreateExperimentResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;
    
/// <summary>
/// <DeleteExclusionGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabExperimentationDeleteExclusionGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationDeleteExclusionGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <DeleteExperiment documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabExperimentationDeleteExperimentAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationDeleteExperimentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <GetExclusionGroups documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabExperimentationGetExclusionGroupsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabExperimentationGetExclusionGroupsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationGetExclusionGroupsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetExclusionGroups call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabExperimentationGetExclusionGroupsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetExclusionGroupsResult** result
) noexcept;

/// <summary>
/// <GetExclusionGroupTraffic documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabExperimentationGetExclusionGroupTrafficGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabExperimentationGetExclusionGroupTrafficAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationGetExclusionGroupTrafficRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetExclusionGroupTraffic call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabExperimentationGetExclusionGroupTrafficGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetExclusionGroupTrafficResult** result
) noexcept;

/// <summary>
/// <GetExperiments documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabExperimentationGetExperimentsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabExperimentationGetExperimentsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationGetExperimentsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetExperiments call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabExperimentationGetExperimentsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetExperimentsResult** result
) noexcept;

/// <summary>
/// <GetLatestScorecard documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabExperimentationGetLatestScorecardGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabExperimentationGetLatestScorecardAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationGetLatestScorecardRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetLatestScorecard call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabExperimentationGetLatestScorecardGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetLatestScorecardResult** result
) noexcept;

/// <summary>
/// <GetTreatmentAssignment documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabExperimentationGetTreatmentAssignmentGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabExperimentationGetTreatmentAssignmentAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationGetTreatmentAssignmentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful GetTreatmentAssignment call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabExperimentationGetTreatmentAssignmentGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabExperimentationGetTreatmentAssignmentResult** result
) noexcept;

/// <summary>
/// <StartExperiment documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabExperimentationStartExperimentAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationStartExperimentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <StopExperiment documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabExperimentationStopExperimentAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationStopExperimentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <UpdateExclusionGroup documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabExperimentationUpdateExclusionGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationUpdateExclusionGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <UpdateExperiment documentation goes here.>
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabExperimentationUpdateExperimentAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabExperimentationUpdateExperimentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;


}