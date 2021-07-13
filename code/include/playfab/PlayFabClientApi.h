// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabClientDataModels.h>
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>

extern "C"
{

/// <summary>
/// AcceptTrade documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientAcceptTradeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientAcceptTradeAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAcceptTradeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientAcceptTradeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientAcceptTradeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientAcceptTradeResponse** result
) noexcept;

/// <summary>
/// AddFriend documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientAddFriendGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientAddFriendAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAddFriendRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientAddFriendAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabClientAddFriendResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientAddFriendGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabClientAddFriendResult* result
) noexcept;

/// <summary>
/// AddGenericID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientAddGenericIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAddGenericIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddOrUpdateContactEmail documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientAddOrUpdateContactEmailAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAddOrUpdateContactEmailRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddSharedGroupMembers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientAddSharedGroupMembersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAddSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddUsernamePassword documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientAddUsernamePasswordGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientAddUsernamePasswordAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAddUsernamePasswordRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a AddUsernamePassword call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientAddUsernamePasswordGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientAddUsernamePasswordAsync call.
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
HRESULT PlayFabClientAddUsernamePasswordGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientAddUsernamePasswordResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// AddUserVirtualCurrency documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientAddUserVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientAddUserVirtualCurrencyAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAddUserVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a AddUserVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientAddUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientAddUserVirtualCurrencyAsync call.
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
HRESULT PlayFabClientAddUserVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// AndroidDevicePushNotificationRegistration documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientAndroidDevicePushNotificationRegistrationAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAndroidDevicePushNotificationRegistrationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AttributeInstall documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientAttributeInstallAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientAttributeInstallRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// CancelTrade documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientCancelTradeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientCancelTradeAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientCancelTradeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientCancelTradeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientCancelTradeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientCancelTradeResponse** result
) noexcept;

/// <summary>
/// ConfirmPurchase documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientConfirmPurchaseGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientConfirmPurchaseAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientConfirmPurchaseRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientConfirmPurchaseAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientConfirmPurchaseGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConfirmPurchaseResult** result
) noexcept;

/// <summary>
/// ConsumeItem documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientConsumeItemGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientConsumeItemAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientConsumeItemRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a ConsumeItem call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientConsumeItemGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientConsumeItemAsync call.
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
HRESULT PlayFabClientConsumeItemGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientConsumeItemResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// ConsumeMicrosoftStoreEntitlements documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientConsumeMicrosoftStoreEntitlementsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientConsumeMicrosoftStoreEntitlementsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientConsumeMicrosoftStoreEntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientConsumeMicrosoftStoreEntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumeMicrosoftStoreEntitlementsResponse** result
) noexcept;

/// <summary>
/// ConsumePS5Entitlements documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientConsumePS5EntitlementsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientConsumePS5EntitlementsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientConsumePS5EntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientConsumePS5EntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientConsumePS5EntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumePS5EntitlementsResult** result
) noexcept;

/// <summary>
/// ConsumePSNEntitlements documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientConsumePSNEntitlementsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientConsumePSNEntitlementsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientConsumePSNEntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientConsumePSNEntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientConsumePSNEntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumePSNEntitlementsResult** result
) noexcept;

/// <summary>
/// ConsumeXboxEntitlements documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientConsumeXboxEntitlementsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientConsumeXboxEntitlementsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientConsumeXboxEntitlementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientConsumeXboxEntitlementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientConsumeXboxEntitlementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientConsumeXboxEntitlementsResult** result
) noexcept;

/// <summary>
/// CreateSharedGroup documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientCreateSharedGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientCreateSharedGroupAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientCreateSharedGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateSharedGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientCreateSharedGroupGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientCreateSharedGroupAsync call.
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
HRESULT PlayFabClientCreateSharedGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// ExecuteCloudScript documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientExecuteCloudScriptGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientExecuteCloudScriptAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientExecuteCloudScriptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientExecuteCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientExecuteCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientExecuteCloudScriptResult** result
) noexcept;

/// <summary>
/// GetAccountInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAccountInfoGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetAccountInfoAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetAccountInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetAccountInfoAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetAccountInfoGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetAccountInfoResult** result
) noexcept;

/// <summary>
/// GetAdPlacements documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAdPlacementsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetAdPlacementsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetAdPlacementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetAdPlacementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetAdPlacementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetAdPlacementsResult** result
) noexcept;

/// <summary>
/// GetAllUsersCharacters documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAllUsersCharactersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetAllUsersCharactersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientListUsersCharactersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetAllUsersCharactersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetAllUsersCharactersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientListUsersCharactersResult** result
) noexcept;

/// <summary>
/// GetCatalogItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetCatalogItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetCatalogItemsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetCatalogItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetCatalogItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetCatalogItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCatalogItemsResult** result
) noexcept;

/// <summary>
/// GetCharacterData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetCharacterDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetCharacterDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetCharacterDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetCharacterDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterDataResult** result
) noexcept;

/// <summary>
/// GetCharacterInventory documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetCharacterInventoryGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetCharacterInventoryAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetCharacterInventoryRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetCharacterInventoryAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetCharacterInventoryGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterInventoryResult** result
) noexcept;

/// <summary>
/// GetCharacterLeaderboard documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetCharacterLeaderboardGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetCharacterLeaderboardAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetCharacterLeaderboardRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetCharacterLeaderboardAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetCharacterLeaderboardGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterLeaderboardResult** result
) noexcept;

/// <summary>
/// GetCharacterReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetCharacterReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetCharacterReadOnlyDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetCharacterReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetCharacterReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterDataResult** result
) noexcept;

/// <summary>
/// GetCharacterStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetCharacterStatisticsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetCharacterStatisticsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetCharacterStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetCharacterStatisticsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetCharacterStatisticsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetCharacterStatisticsResult** result
) noexcept;

/// <summary>
/// GetContentDownloadUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetContentDownloadUrlGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetContentDownloadUrlAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetContentDownloadUrlRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetContentDownloadUrl call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientGetContentDownloadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetContentDownloadUrlAsync call.
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
HRESULT PlayFabClientGetContentDownloadUrlGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetContentDownloadUrlResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetCurrentGames documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetCurrentGamesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetCurrentGamesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientCurrentGamesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetCurrentGamesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetCurrentGamesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientCurrentGamesResult** result
) noexcept;

/// <summary>
/// GetFriendLeaderboard documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetFriendLeaderboardGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetFriendLeaderboardAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetFriendLeaderboardRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetFriendLeaderboardAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetFriendLeaderboardGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardResult** result
) noexcept;

/// <summary>
/// GetFriendLeaderboardAroundPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetFriendLeaderboardAroundPlayerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetFriendLeaderboardAroundPlayerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetFriendLeaderboardAroundPlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetFriendLeaderboardAroundPlayerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetFriendLeaderboardAroundPlayerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetFriendLeaderboardAroundPlayerResult** result
) noexcept;

/// <summary>
/// GetFriendsList documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetFriendsListGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetFriendsListAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetFriendsListRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetFriendsListAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetFriendsListGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetFriendsListResult** result
) noexcept;

/// <summary>
/// GetGameServerRegions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetGameServerRegionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetGameServerRegionsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGameServerRegionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetGameServerRegionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetGameServerRegionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGameServerRegionsResult** result
) noexcept;

/// <summary>
/// GetLeaderboard documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetLeaderboardGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetLeaderboardRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetLeaderboardAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardResult** result
) noexcept;

/// <summary>
/// GetLeaderboardAroundCharacter documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetLeaderboardAroundCharacterGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardAroundCharacterAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetLeaderboardAroundCharacterRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetLeaderboardAroundCharacterAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardAroundCharacterGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardAroundCharacterResult** result
) noexcept;

/// <summary>
/// GetLeaderboardAroundPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetLeaderboardAroundPlayerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardAroundPlayerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetLeaderboardAroundPlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetLeaderboardAroundPlayerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardAroundPlayerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardAroundPlayerResult** result
) noexcept;

/// <summary>
/// GetLeaderboardForUserCharacters documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetLeaderboardForUserCharactersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardForUserCharactersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetLeaderboardForUsersCharactersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetLeaderboardForUserCharactersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetLeaderboardForUserCharactersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetLeaderboardForUsersCharactersResult** result
) noexcept;

/// <summary>
/// GetPaymentToken documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPaymentTokenGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPaymentTokenAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPaymentTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetPaymentToken call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientGetPaymentTokenGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPaymentTokenAsync call.
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
HRESULT PlayFabClientGetPaymentTokenGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetPaymentTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetPhotonAuthenticationToken documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPhotonAuthenticationTokenGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPhotonAuthenticationTokenAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPhotonAuthenticationTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetPhotonAuthenticationToken call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientGetPhotonAuthenticationTokenGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPhotonAuthenticationTokenAsync call.
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
HRESULT PlayFabClientGetPhotonAuthenticationTokenGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetPhotonAuthenticationTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetPlayerCombinedInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayerCombinedInfoGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayerCombinedInfoAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayerCombinedInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayerCombinedInfoAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayerCombinedInfoGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerCombinedInfoResult** result
) noexcept;

/// <summary>
/// GetPlayerProfile documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayerProfileGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayerProfileAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayerProfileRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayerProfileAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayerProfileGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerProfileResult** result
) noexcept;

/// <summary>
/// GetPlayerSegments documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayerSegmentsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayerSegmentsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayerSegmentsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayerSegmentsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerSegmentsResult** result
) noexcept;

/// <summary>
/// GetPlayerStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayerStatisticsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayerStatisticsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayerStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayerStatisticsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayerStatisticsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerStatisticsResult** result
) noexcept;

/// <summary>
/// GetPlayerStatisticVersions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayerStatisticVersionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayerStatisticVersionsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayerStatisticVersionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayerStatisticVersionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayerStatisticVersionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerStatisticVersionsResult** result
) noexcept;

/// <summary>
/// GetPlayerTags documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayerTagsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayerTagsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayerTagsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayerTagsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayerTagsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerTagsResult** result
) noexcept;

/// <summary>
/// GetPlayerTrades documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayerTradesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayerTradesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayerTradesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayerTradesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayerTradesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayerTradesResponse** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromFacebookIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromFacebookIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromFacebookIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromFacebookIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromFacebookIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromFacebookIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromFacebookInstantGamesIds documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromGameCenterIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromGameCenterIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromGameCenterIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromGameCenterIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromGameCenterIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromGameCenterIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromGenericIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromGenericIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromGenericIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromGenericIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromGenericIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromGenericIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromGenericIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromGoogleIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromGoogleIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromGoogleIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromGoogleIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromGoogleIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromGoogleIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromKongregateIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromKongregateIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromKongregateIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromKongregateIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromKongregateIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromKongregateIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromNintendoSwitchDeviceIds documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromPSNAccountIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromPSNAccountIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromPSNAccountIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromPSNAccountIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromPSNAccountIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromSteamIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromSteamIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromSteamIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromSteamIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromSteamIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromSteamIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromSteamIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromTwitchIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromTwitchIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromTwitchIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromTwitchIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromTwitchIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromTwitchIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromXboxLiveIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPlayFabIDsFromXboxLiveIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromXboxLiveIDsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPlayFabIDsFromXboxLiveIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPlayFabIDsFromXboxLiveIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult** result
) noexcept;

/// <summary>
/// GetPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPublisherDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPublisherDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetPublisherDataResult** result
) noexcept;

/// <summary>
/// GetPurchase documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetPurchaseGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetPurchaseAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetPurchaseRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetPurchase call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientGetPurchaseGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetPurchaseAsync call.
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
HRESULT PlayFabClientGetPurchaseGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetPurchaseResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetSharedGroupData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetSharedGroupDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetSharedGroupDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetSharedGroupDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetSharedGroupDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetSharedGroupDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetSharedGroupDataResult** result
) noexcept;

/// <summary>
/// GetStoreItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetStoreItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetStoreItemsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetStoreItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetStoreItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetStoreItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetStoreItemsResult** result
) noexcept;

/// <summary>
/// GetTime documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetTimeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetTimeAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetTimeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabClientGetTimeResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientGetTimeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabClientGetTimeResult* result
) noexcept;

/// <summary>
/// GetTitleData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetTitleDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetTitleDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetTitleDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetTitleDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetTitleDataResult** result
) noexcept;

/// <summary>
/// GetTitleNews documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetTitleNewsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetTitleNewsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetTitleNewsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetTitleNewsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetTitleNewsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetTitleNewsResult** result
) noexcept;

/// <summary>
/// GetTitlePublicKey documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetTitlePublicKeyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetTitlePublicKeyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientGetTitlePublicKeyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetTitlePublicKey call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientGetTitlePublicKeyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetTitlePublicKeyAsync call.
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
HRESULT PlayFabClientGetTitlePublicKeyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGetTitlePublicKeyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetTradeStatus documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetTradeStatusGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetTradeStatusAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetTradeStatusRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetTradeStatusAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetTradeStatusGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetTradeStatusResponse** result
) noexcept;

/// <summary>
/// GetUserData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetUserDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetUserDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetUserDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetUserDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserInventory documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetUserInventoryGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetUserInventoryAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetUserInventoryRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetUserInventoryAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetUserInventoryGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserInventoryResult** result
) noexcept;

/// <summary>
/// GetUserPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetUserPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetUserPublisherDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetUserPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetUserPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserPublisherReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetUserPublisherReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetUserPublisherReadOnlyDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetUserPublisherReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetUserPublisherReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetUserReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGetUserReadOnlyDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGetUserReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientGetUserReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientGetUserDataResult** result
) noexcept;

/// <summary>
/// GrantCharacterToUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGrantCharacterToUserGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientGrantCharacterToUserAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientGrantCharacterToUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GrantCharacterToUser call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientGrantCharacterToUserGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientGrantCharacterToUserAsync call.
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
HRESULT PlayFabClientGrantCharacterToUserGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientGrantCharacterToUserResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// LinkAndroidDeviceID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkAndroidDeviceIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkAndroidDeviceIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkApple documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkAppleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkAppleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkCustomID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkCustomIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkCustomIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkFacebookAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkFacebookAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkFacebookAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkFacebookInstantGamesId documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkFacebookInstantGamesIdAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkFacebookInstantGamesIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkGameCenterAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkGameCenterAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkGameCenterAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkGoogleAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkGoogleAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkGoogleAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkIOSDeviceID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkIOSDeviceIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkIOSDeviceIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkKongregate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkKongregateAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkKongregateAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkNintendoServiceAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkNintendoServiceAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkNintendoServiceAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkNintendoSwitchDeviceId documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkNintendoSwitchDeviceIdAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkNintendoSwitchDeviceIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkOpenIdConnect documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkOpenIdConnectAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkOpenIdConnectRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkPSNAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkPSNAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkPSNAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkSteamAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkSteamAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkSteamAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkTwitch documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkTwitchAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkTwitchAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkXboxAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientLinkXboxAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientLinkXboxAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Matchmake documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientMatchmakeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientMatchmakeAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientMatchmakeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientMatchmakeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientMatchmakeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientMatchmakeResult** result
) noexcept;

/// <summary>
/// OpenTrade documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientOpenTradeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientOpenTradeAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientOpenTradeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientOpenTradeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientOpenTradeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientOpenTradeResponse** result
) noexcept;

/// <summary>
/// PayForPurchase documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientPayForPurchaseGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientPayForPurchaseAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientPayForPurchaseRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientPayForPurchaseAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientPayForPurchaseGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientPayForPurchaseResult** result
) noexcept;

/// <summary>
/// PurchaseItem documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientPurchaseItemGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientPurchaseItemAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientPurchaseItemRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientPurchaseItemAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientPurchaseItemGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientPurchaseItemResult** result
) noexcept;

/// <summary>
/// RedeemCoupon documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientRedeemCouponGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientRedeemCouponAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRedeemCouponRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientRedeemCouponAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientRedeemCouponGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientRedeemCouponResult** result
) noexcept;

/// <summary>
/// RefreshPSNAuthToken documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientRefreshPSNAuthTokenAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRefreshPSNAuthTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RegisterForIOSPushNotification documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientRegisterForIOSPushNotificationAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRegisterForIOSPushNotificationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveContactEmail documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientRemoveContactEmailAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRemoveContactEmailRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveFriend documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientRemoveFriendAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRemoveFriendRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveGenericID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientRemoveGenericIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRemoveGenericIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveSharedGroupMembers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientRemoveSharedGroupMembersAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRemoveSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ReportAdActivity documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientReportAdActivityAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientReportAdActivityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ReportDeviceInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientReportDeviceInfoAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientDeviceInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ReportPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientReportPlayerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientReportPlayerAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientReportPlayerClientRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientReportPlayerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabClientReportPlayerClientResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientReportPlayerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabClientReportPlayerClientResult* result
) noexcept;

/// <summary>
/// RestoreIOSPurchases documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientRestoreIOSPurchasesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientRestoreIOSPurchasesAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRestoreIOSPurchasesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientRestoreIOSPurchasesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientRestoreIOSPurchasesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientRestoreIOSPurchasesResult** result
) noexcept;

/// <summary>
/// RewardAdActivity documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientRewardAdActivityGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientRewardAdActivityAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientRewardAdActivityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientRewardAdActivityAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientRewardAdActivityGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientRewardAdActivityResult** result
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
HRESULT PlayFabClientSendAccountRecoveryEmailAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientSendAccountRecoveryEmailRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetFriendTags documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientSetFriendTagsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientSetFriendTagsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetPlayerSecret documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientSetPlayerSecretAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientSetPlayerSecretRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// StartGame documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientStartGameGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientStartGameAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientStartGameRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientStartGameAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientStartGameGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientStartGameResult** result
) noexcept;

/// <summary>
/// StartPurchase documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientStartPurchaseGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientStartPurchaseAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientStartPurchaseRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientStartPurchaseAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientStartPurchaseGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientStartPurchaseResult** result
) noexcept;

/// <summary>
/// SubtractUserVirtualCurrency documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientSubtractUserVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientSubtractUserVirtualCurrencyAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientSubtractUserVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SubtractUserVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientSubtractUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientSubtractUserVirtualCurrencyAsync call.
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
HRESULT PlayFabClientSubtractUserVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// UnlinkAndroidDeviceID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkAndroidDeviceIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkAndroidDeviceIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkApple documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkAppleAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkAppleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkCustomID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkCustomIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkCustomIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkFacebookAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkFacebookAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkFacebookAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkFacebookInstantGamesId documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkFacebookInstantGamesIdAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkFacebookInstantGamesIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkGameCenterAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkGameCenterAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkGameCenterAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkGoogleAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkGoogleAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkGoogleAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkIOSDeviceID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkIOSDeviceIDAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkIOSDeviceIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkKongregate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkKongregateAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkKongregateAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkNintendoServiceAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkNintendoServiceAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkNintendoServiceAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkNintendoSwitchDeviceId documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkNintendoSwitchDeviceIdAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkOpenIdConnect documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkOpenIdConnectAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkOpenIdConnectRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkPSNAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkPSNAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkPSNAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkSteamAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkSteamAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkSteamAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkTwitch documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkTwitchAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkTwitchAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkXboxAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUnlinkXboxAccountAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlinkXboxAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlockContainerInstance documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientUnlockContainerInstanceGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientUnlockContainerInstanceAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlockContainerInstanceRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientUnlockContainerInstanceAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientUnlockContainerInstanceGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientUnlockContainerItemResult** result
) noexcept;

/// <summary>
/// UnlockContainerItem documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientUnlockContainerItemGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientUnlockContainerItemAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUnlockContainerItemRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientUnlockContainerItemAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientUnlockContainerItemGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientUnlockContainerItemResult** result
) noexcept;

/// <summary>
/// UpdateAvatarUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUpdateAvatarUrlAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdateAvatarUrlRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateCharacterData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientUpdateCharacterDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientUpdateCharacterDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdateCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientUpdateCharacterDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabClientUpdateCharacterDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientUpdateCharacterDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabClientUpdateCharacterDataResult* result
) noexcept;

/// <summary>
/// UpdateCharacterStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUpdateCharacterStatisticsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdateCharacterStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdatePlayerStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUpdatePlayerStatisticsAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdatePlayerStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateSharedGroupData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabClientUpdateSharedGroupDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdateSharedGroupDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateUserData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientUpdateUserDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientUpdateUserDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientUpdateUserDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabClientUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientUpdateUserDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabClientUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientUpdateUserPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientUpdateUserPublisherDataAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientUpdateUserPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabClientUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientUpdateUserPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabClientUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserTitleDisplayName documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientUpdateUserTitleDisplayNameGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientUpdateUserTitleDisplayNameAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientUpdateUserTitleDisplayNameRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a UpdateUserTitleDisplayName call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientUpdateUserTitleDisplayNameGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientUpdateUserTitleDisplayNameAsync call.
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
HRESULT PlayFabClientUpdateUserTitleDisplayNameGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientUpdateUserTitleDisplayNameResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// ValidateAmazonIAPReceipt documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientValidateAmazonIAPReceiptGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientValidateAmazonIAPReceiptAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientValidateAmazonReceiptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientValidateAmazonIAPReceiptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientValidateAmazonIAPReceiptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateAmazonReceiptResult** result
) noexcept;

/// <summary>
/// ValidateGooglePlayPurchase documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientValidateGooglePlayPurchaseGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientValidateGooglePlayPurchaseAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientValidateGooglePlayPurchaseRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientValidateGooglePlayPurchaseAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientValidateGooglePlayPurchaseGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateGooglePlayPurchaseResult** result
) noexcept;

/// <summary>
/// ValidateIOSReceipt documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientValidateIOSReceiptGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientValidateIOSReceiptAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientValidateIOSReceiptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientValidateIOSReceiptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientValidateIOSReceiptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateIOSReceiptResult** result
) noexcept;

/// <summary>
/// ValidateWindowsStoreReceipt documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientValidateWindowsStoreReceiptGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientValidateWindowsStoreReceiptAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientValidateWindowsReceiptRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientValidateWindowsStoreReceiptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabClientValidateWindowsStoreReceiptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabClientValidateWindowsReceiptResult** result
) noexcept;

/// <summary>
/// WriteCharacterEvent documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientWriteCharacterEventGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientWriteCharacterEventAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientWriteClientCharacterEventRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a WriteCharacterEvent call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientWriteCharacterEventGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientWriteCharacterEventAsync call.
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
HRESULT PlayFabClientWriteCharacterEventGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// WritePlayerEvent documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientWritePlayerEventGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientWritePlayerEventAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientWriteClientPlayerEventRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a WritePlayerEvent call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientWritePlayerEventGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientWritePlayerEventAsync call.
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
HRESULT PlayFabClientWritePlayerEventGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// WriteTitleEvent documentation not found in XmlRefDocs.
/// </summary>
/// <param name="entityHandle">PlayFabEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientWriteTitleEventGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientWriteTitleEventAsync(
    _In_ PlayFabEntityHandle entityHandle,
    _In_ const PlayFabClientWriteTitleEventRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a WriteTitleEvent call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabClientWriteTitleEventGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabClientWriteTitleEventAsync call.
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
HRESULT PlayFabClientWriteTitleEventGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabClientWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;


}