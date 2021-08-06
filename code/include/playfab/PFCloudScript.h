// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFCloudScriptDataModels.h>
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>

extern "C"
{

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Gets the contents and information of a specific Cloud Script revision.
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFCloudScriptAdminGetCloudScriptRevisionGetResult"/> to get the result.
/// </remarks>
HRESULT PFCloudScriptAdminGetCloudScriptRevisionAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFCloudScriptGetCloudScriptRevisionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptAdminGetCloudScriptRevisionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptAdminGetCloudScriptRevisionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptGetCloudScriptRevisionResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Lists all the current cloud script versions. For each version, information about the current published
/// and latest revisions is also listed.
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFCloudScriptAdminGetCloudScriptVersionsGetResult"/> to get the result.
/// </remarks>
HRESULT PFCloudScriptAdminGetCloudScriptVersionsAsync(
    _In_ PFStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptAdminGetCloudScriptVersionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptAdminGetCloudScriptVersionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptGetCloudScriptVersionsResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Sets the currently published revision of a title Cloud Script
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFCloudScriptAdminSetPublishedRevisionAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFCloudScriptSetPublishedRevisionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Creates a new Cloud Script revision and uploads source code to it. Note that at this time, only one
/// file should be submitted in the revision.
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFCloudScriptAdminUpdateCloudScriptGetResult"/> to get the result.
/// </remarks>
HRESULT PFCloudScriptAdminUpdateCloudScriptAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFCloudScriptUpdateCloudScriptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptAdminUpdateCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PFCloudScriptUpdateCloudScriptResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFCloudScriptAdminUpdateCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFCloudScriptUpdateCloudScriptResult* result
) noexcept;
#endif

/// <summary>
/// Executes a CloudScript function, with the 'currentPlayerId' set to the PlayFab ID of the authenticated
/// player.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFCloudScriptClientExecuteCloudScriptGetResult"/> to get the result.
/// </remarks>
HRESULT PFCloudScriptClientExecuteCloudScriptAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptExecuteCloudScriptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptClientExecuteCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptClientExecuteCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExecuteCloudScriptResult** result
) noexcept;

/// <summary>
/// Executes a CloudScript function, with the 'currentPlayerId' variable set to the specified PlayFabId
/// parameter value.
/// </summary>
/// <param name="stateHandle">PFStateHandle returned from PFInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFCloudScriptServerExecuteCloudScriptGetResult"/> to get the result.
/// </remarks>
HRESULT PFCloudScriptServerExecuteCloudScriptAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFCloudScriptExecuteCloudScriptServerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptServerExecuteCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptServerExecuteCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExecuteCloudScriptResult** result
) noexcept;

/// <summary>
/// Cloud Script is one of PlayFab's most versatile features. It allows client code to request execution
/// of any kind of custom server-side functionality you can implement, and it can be used in conjunction
/// with virtually anything.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Executes CloudScript with the entity profile that is defined in the request.
/// </remarks>
HRESULT PFCloudScriptExecuteEntityCloudScriptAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptExecuteEntityCloudScriptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptExecuteEntityCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptExecuteEntityCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFExecuteCloudScriptResult** result
) noexcept;

/// <summary>
/// Cloud Script is one of PlayFab's most versatile features. It allows client code to request execution
/// of any kind of custom server-side functionality you can implement, and it can be used in conjunction
/// with virtually anything.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Executes an Azure Function with the profile of the entity that is defined in the request. See also
/// PFCloudScriptRegisterHttpFunctionAsync, PFCloudScriptRegisterQueuedFunctionAsync
/// </remarks>
HRESULT PFCloudScriptExecuteFunctionAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptExecuteFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptExecuteFunctionAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptExecuteFunctionGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptExecuteFunctionResult** result
) noexcept;

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Lists all currently registered Azure Functions for a given title.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptListHttpFunctionsAsync, PFCloudScriptListQueuedFunctionsAsync, PFCloudScriptRegisterHttpFunctionAsync,
/// PFCloudScriptRegisterQueuedFunctionAsync
/// </remarks>
HRESULT PFCloudScriptListFunctionsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptListFunctionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptListFunctionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptListFunctionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptListFunctionsResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Lists all currently registered HTTP triggered Azure Functions for a given title.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// A title can have many functions, ListHttpFunctions will return a list of all the currently registered
/// HTTP triggered functions for a given title. See also PFCloudScriptListFunctionsAsync, PFCloudScriptListQueuedFunctionsAsync,
/// PFCloudScriptRegisterHttpFunctionAsync
/// </remarks>
HRESULT PFCloudScriptListHttpFunctionsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptListFunctionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptListHttpFunctionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptListHttpFunctionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptListHttpFunctionsResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Lists all currently registered Queue triggered Azure Functions for a given title.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptListFunctionsAsync, PFCloudScriptListHttpFunctionsAsync, PFCloudScriptRegisterQueuedFunctionAsync
/// </remarks>
HRESULT PFCloudScriptListQueuedFunctionsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptListFunctionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFCloudScriptListQueuedFunctionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFCloudScriptListQueuedFunctionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFCloudScriptListQueuedFunctionsResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Generate an entity PlayStream event for the provided function result.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptPostFunctionResultForFunctionExecutionAsync, PFCloudScriptPostFunctionResultForPlayerTriggeredActionAsync,
/// PFCloudScriptPostFunctionResultForScheduledTaskAsync
/// </remarks>
HRESULT PFCloudScriptPostFunctionResultForEntityTriggeredActionAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptPostFunctionResultForEntityTriggeredActionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Generate an entity PlayStream event for the provided function result.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptPostFunctionResultForEntityTriggeredActionAsync, PFCloudScriptPostFunctionResultForPlayerTriggeredActionAsync,
/// PFCloudScriptPostFunctionResultForScheduledTaskAsync
/// </remarks>
HRESULT PFCloudScriptPostFunctionResultForFunctionExecutionAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptPostFunctionResultForFunctionExecutionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Generate a player PlayStream event for the provided function result.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptPostFunctionResultForEntityTriggeredActionAsync, PFCloudScriptPostFunctionResultForFunctionExecutionAsync,
/// PFCloudScriptPostFunctionResultForScheduledTaskAsync
/// </remarks>
HRESULT PFCloudScriptPostFunctionResultForPlayerTriggeredActionAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptPostFunctionResultForPlayerTriggeredActionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Generate a PlayStream event for the provided function result.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptPostFunctionResultForEntityTriggeredActionAsync, PFCloudScriptPostFunctionResultForFunctionExecutionAsync,
/// PFCloudScriptPostFunctionResultForPlayerTriggeredActionAsync
/// </remarks>
HRESULT PFCloudScriptPostFunctionResultForScheduledTaskAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptPostFunctionResultForScheduledTaskRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Registers an HTTP triggered Azure function with a title.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptExecuteFunctionAsync, PFCloudScriptListFunctionsAsync, PFCloudScriptListHttpFunctionsAsync,
/// PFCloudScriptRegisterQueuedFunctionAsync, PFCloudScriptUnregisterFunctionAsync
/// </remarks>
HRESULT PFCloudScriptRegisterHttpFunctionAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptRegisterHttpFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Registers a queue triggered Azure Function with a title.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// A title can have many functions, RegisterQueuedFunction associates a function name with a queue name
/// and connection string. See also PFCloudScriptExecuteFunctionAsync, PFCloudScriptListFunctionsAsync,
/// PFCloudScriptListQueuedFunctionsAsync, PFCloudScriptPostFunctionResultForEntityTriggeredActionAsync,
/// PFCloudScriptPostFunctionResultForFunctionExecutionAsync, PFCloudScriptPostFunctionResultForPlayerTriggeredActionAsync,
/// PFCloudScriptPostFunctionResultForScheduledTaskAsync, PFCloudScriptRegisterHttpFunctionAsync, PFCloudScriptUnregisterFunctionAsync
/// </remarks>
HRESULT PFCloudScriptRegisterQueuedFunctionAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptRegisterQueuedFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Unregisters an Azure Function with a title.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also PFCloudScriptRegisterHttpFunctionAsync, PFCloudScriptRegisterQueuedFunctionAsync
/// </remarks>
HRESULT PFCloudScriptUnregisterFunctionAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFCloudScriptUnregisterFunctionRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif


}