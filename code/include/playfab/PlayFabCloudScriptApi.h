// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabCloudScriptDataModels.h>
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>

extern "C"
{

/// <summary>
/// ExecuteEntityCloudScript documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabCloudScriptExecuteEntityCloudScriptGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabCloudScriptExecuteEntityCloudScriptAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptExecuteEntityCloudScriptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabCloudScriptExecuteEntityCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabCloudScriptExecuteEntityCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptExecuteCloudScriptResult** result
) noexcept;

/// <summary>
/// ExecuteFunction documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabCloudScriptExecuteFunctionGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabCloudScriptExecuteFunctionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptExecuteFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabCloudScriptExecuteFunctionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabCloudScriptExecuteFunctionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptExecuteFunctionResult** result
) noexcept;

/// <summary>
/// ListFunctions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabCloudScriptListFunctionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabCloudScriptListFunctionsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptListFunctionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabCloudScriptListFunctionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabCloudScriptListFunctionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptListFunctionsResult** result
) noexcept;

/// <summary>
/// ListHttpFunctions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabCloudScriptListHttpFunctionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabCloudScriptListHttpFunctionsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptListFunctionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabCloudScriptListHttpFunctionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabCloudScriptListHttpFunctionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptListHttpFunctionsResult** result
) noexcept;

/// <summary>
/// ListQueuedFunctions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabCloudScriptListQueuedFunctionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabCloudScriptListQueuedFunctionsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptListFunctionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabCloudScriptListQueuedFunctionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabCloudScriptListQueuedFunctionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabCloudScriptListQueuedFunctionsResult** result
) noexcept;

/// <summary>
/// PostFunctionResultForEntityTriggeredAction documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// PostFunctionResultForFunctionExecution documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabCloudScriptPostFunctionResultForFunctionExecutionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// PostFunctionResultForPlayerTriggeredAction documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// PostFunctionResultForScheduledTask documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabCloudScriptPostFunctionResultForScheduledTaskAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RegisterHttpFunction documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabCloudScriptRegisterHttpFunctionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptRegisterHttpFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RegisterQueuedFunction documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabCloudScriptRegisterQueuedFunctionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptRegisterQueuedFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnregisterFunction documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabCloudScriptUnregisterFunctionAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabCloudScriptUnregisterFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;


}