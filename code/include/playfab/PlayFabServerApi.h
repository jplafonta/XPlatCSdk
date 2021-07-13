// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabServerDataModels.h>
#include <playfab/PlayFabGlobal.h>

extern "C"
{

/// <summary>
/// AddCharacterVirtualCurrency documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerAddCharacterVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerAddCharacterVirtualCurrencyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAddCharacterVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a AddCharacterVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerAddCharacterVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerAddCharacterVirtualCurrencyAsync call.
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
HRESULT PlayFabServerAddCharacterVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyCharacterVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// AddFriend documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerAddFriendAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAddFriendRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddGenericID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerAddGenericIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAddGenericIDRequest* request,
    _Inout_ XAsyncBlock* async
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
HRESULT PlayFabServerAddPlayerTagAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAddPlayerTagRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddSharedGroupMembers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerAddSharedGroupMembersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAddSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// AddUserVirtualCurrency documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerAddUserVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerAddUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAddUserVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a AddUserVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerAddUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerAddUserVirtualCurrencyAsync call.
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
HRESULT PlayFabServerAddUserVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// AuthenticateSessionTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerAuthenticateSessionTicketGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerAuthenticateSessionTicketAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAuthenticateSessionTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerAuthenticateSessionTicketAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerAuthenticateSessionTicketGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerAuthenticateSessionTicketResult** result
) noexcept;

/// <summary>
/// AwardSteamAchievement documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerAwardSteamAchievementGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerAwardSteamAchievementAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerAwardSteamAchievementRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerAwardSteamAchievementAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerAwardSteamAchievementGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerAwardSteamAchievementResult** result
) noexcept;

/// <summary>
/// BanUsers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerBanUsersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerBanUsersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerBanUsersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerBanUsersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerBanUsersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerBanUsersResult** result
) noexcept;

/// <summary>
/// ConsumeItem documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerConsumeItemGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerConsumeItemAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerConsumeItemRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a ConsumeItem call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerConsumeItemGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerConsumeItemAsync call.
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
HRESULT PlayFabServerConsumeItemGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerConsumeItemResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// CreateSharedGroup documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerCreateSharedGroupGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerCreateSharedGroupAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerCreateSharedGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a CreateSharedGroup call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerCreateSharedGroupGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerCreateSharedGroupAsync call.
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
HRESULT PlayFabServerCreateSharedGroupGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerCreateSharedGroupResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// DeleteCharacterFromUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerDeleteCharacterFromUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerDeleteCharacterFromUserRequest* request,
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
HRESULT PlayFabServerDeletePlayerAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerDeletePlayerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeletePushNotificationTemplate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerDeletePushNotificationTemplateAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerDeletePushNotificationTemplateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeleteSharedGroup documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerDeleteSharedGroupAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerDeleteSharedGroupRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// DeregisterGame documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerDeregisterGameAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerDeregisterGameRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// EvaluateRandomResultTable documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerEvaluateRandomResultTableGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerEvaluateRandomResultTableAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerEvaluateRandomResultTableRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a EvaluateRandomResultTable call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerEvaluateRandomResultTableGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerEvaluateRandomResultTableAsync call.
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
HRESULT PlayFabServerEvaluateRandomResultTableGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerEvaluateRandomResultTableResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// ExecuteCloudScript documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerExecuteCloudScriptGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerExecuteCloudScriptAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerExecuteCloudScriptServerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerExecuteCloudScriptAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerExecuteCloudScriptGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerExecuteCloudScriptResult** result
) noexcept;

/// <summary>
/// GetAllSegments documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetAllSegmentsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetAllSegmentsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetAllSegmentsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetAllSegmentsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetAllSegmentsResult** result
) noexcept;

/// <summary>
/// GetAllUsersCharacters documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetAllUsersCharactersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetAllUsersCharactersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerListUsersCharactersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetAllUsersCharactersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetAllUsersCharactersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerListUsersCharactersResult** result
) noexcept;

/// <summary>
/// GetCatalogItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetCatalogItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetCatalogItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetCatalogItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetCatalogItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetCatalogItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCatalogItemsResult** result
) noexcept;

/// <summary>
/// GetCharacterData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetCharacterDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetCharacterDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetCharacterDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetCharacterDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterDataResult** result
) noexcept;

/// <summary>
/// GetCharacterInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetCharacterInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetCharacterInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetCharacterInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetCharacterInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterDataResult** result
) noexcept;

/// <summary>
/// GetCharacterInventory documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetCharacterInventoryGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetCharacterInventoryAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetCharacterInventoryRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetCharacterInventoryAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetCharacterInventoryGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterInventoryResult** result
) noexcept;

/// <summary>
/// GetCharacterLeaderboard documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetCharacterLeaderboardGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetCharacterLeaderboardAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetCharacterLeaderboardRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetCharacterLeaderboardAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetCharacterLeaderboardGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterLeaderboardResult** result
) noexcept;

/// <summary>
/// GetCharacterReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetCharacterReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetCharacterReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetCharacterReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetCharacterReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterDataResult** result
) noexcept;

/// <summary>
/// GetCharacterStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetCharacterStatisticsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetCharacterStatisticsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetCharacterStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetCharacterStatisticsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetCharacterStatisticsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetCharacterStatisticsResult** result
) noexcept;

/// <summary>
/// GetContentDownloadUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetContentDownloadUrlGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetContentDownloadUrlAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetContentDownloadUrlRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GetContentDownloadUrl call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerGetContentDownloadUrlGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetContentDownloadUrlAsync call.
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
HRESULT PlayFabServerGetContentDownloadUrlGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerGetContentDownloadUrlResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GetFriendLeaderboard documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetFriendLeaderboardGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetFriendLeaderboardAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetFriendLeaderboardRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetFriendLeaderboardAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetFriendLeaderboardGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardResult** result
) noexcept;

/// <summary>
/// GetFriendsList documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetFriendsListGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetFriendsListAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetFriendsListRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetFriendsListAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetFriendsListGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetFriendsListResult** result
) noexcept;

/// <summary>
/// GetLeaderboard documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetLeaderboardGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetLeaderboardRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetLeaderboardAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardResult** result
) noexcept;

/// <summary>
/// GetLeaderboardAroundCharacter documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetLeaderboardAroundCharacterGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardAroundCharacterAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetLeaderboardAroundCharacterRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetLeaderboardAroundCharacterAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardAroundCharacterGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardAroundCharacterResult** result
) noexcept;

/// <summary>
/// GetLeaderboardAroundUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetLeaderboardAroundUserGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardAroundUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetLeaderboardAroundUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetLeaderboardAroundUserAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardAroundUserGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardAroundUserResult** result
) noexcept;

/// <summary>
/// GetLeaderboardForUserCharacters documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetLeaderboardForUserCharactersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardForUserCharactersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetLeaderboardForUsersCharactersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetLeaderboardForUserCharactersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetLeaderboardForUserCharactersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetLeaderboardForUsersCharactersResult** result
) noexcept;

/// <summary>
/// GetPlayerCombinedInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayerCombinedInfoGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayerCombinedInfoAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayerCombinedInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayerCombinedInfoAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayerCombinedInfoGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerCombinedInfoResult** result
) noexcept;

/// <summary>
/// GetPlayerProfile documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayerProfileGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayerProfileAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayerProfileRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayerProfileAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayerProfileGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerProfileResult** result
) noexcept;

/// <summary>
/// GetPlayerSegments documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayerSegmentsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayerSegmentsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayersSegmentsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayerSegmentsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayerSegmentsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerSegmentsResult** result
) noexcept;

/// <summary>
/// GetPlayersInSegment documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayersInSegmentGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayersInSegmentAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayersInSegmentRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayersInSegmentAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayersInSegmentGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayersInSegmentResult** result
) noexcept;

/// <summary>
/// GetPlayerStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayerStatisticsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayerStatisticsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayerStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayerStatisticsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayerStatisticsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerStatisticsResult** result
) noexcept;

/// <summary>
/// GetPlayerStatisticVersions documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayerStatisticVersionsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayerStatisticVersionsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayerStatisticVersionsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayerStatisticVersionsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayerStatisticVersionsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerStatisticVersionsResult** result
) noexcept;

/// <summary>
/// GetPlayerTags documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayerTagsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayerTagsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayerTagsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayerTagsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayerTagsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayerTagsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromFacebookIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayFabIDsFromFacebookIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromFacebookIDsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromFacebookIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayFabIDsFromFacebookIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromFacebookIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromFacebookIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromFacebookInstantGamesIds documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromGenericIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayFabIDsFromGenericIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromGenericIDsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromGenericIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayFabIDsFromGenericIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromGenericIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromGenericIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromNintendoSwitchDeviceIds documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromPSNAccountIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayFabIDsFromPSNAccountIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromPSNAccountIDsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayFabIDsFromPSNAccountIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromPSNAccountIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromSteamIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayFabIDsFromSteamIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromSteamIDsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromSteamIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayFabIDsFromSteamIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromSteamIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromSteamIDsResult** result
) noexcept;

/// <summary>
/// GetPlayFabIDsFromXboxLiveIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPlayFabIDsFromXboxLiveIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromXboxLiveIDsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPlayFabIDsFromXboxLiveIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPlayFabIDsFromXboxLiveIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult** result
) noexcept;

/// <summary>
/// GetPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetPublisherDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetPublisherDataResult** result
) noexcept;

/// <summary>
/// GetRandomResultTables documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetRandomResultTablesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetRandomResultTablesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetRandomResultTablesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetRandomResultTablesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetRandomResultTablesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetRandomResultTablesResult** result
) noexcept;

/// <summary>
/// GetServerCustomIDsFromPlayFabIDs documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetServerCustomIDsFromPlayFabIDsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetServerCustomIDsFromPlayFabIDsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetServerCustomIDsFromPlayFabIDsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetServerCustomIDsFromPlayFabIDsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetServerCustomIDsFromPlayFabIDsResult** result
) noexcept;

/// <summary>
/// GetSharedGroupData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetSharedGroupDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetSharedGroupDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetSharedGroupDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetSharedGroupDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetSharedGroupDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetSharedGroupDataResult** result
) noexcept;

/// <summary>
/// GetStoreItems documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetStoreItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetStoreItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetStoreItemsServerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetStoreItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetStoreItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetStoreItemsResult** result
) noexcept;

/// <summary>
/// GetTime documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetTimeGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetTimeAsync(
    _In_ PlayFabStateHandle stateHandle,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetTimeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerGetTimeResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerGetTimeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerGetTimeResult* result
) noexcept;

/// <summary>
/// GetTitleData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetTitleDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetTitleDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetTitleDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetTitleDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetTitleDataResult** result
) noexcept;

/// <summary>
/// GetTitleInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetTitleInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetTitleInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetTitleInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetTitleInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetTitleDataResult** result
) noexcept;

/// <summary>
/// GetTitleNews documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetTitleNewsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetTitleNewsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetTitleNewsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetTitleNewsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetTitleNewsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetTitleNewsResult** result
) noexcept;

/// <summary>
/// GetUserAccountInfo documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserAccountInfoGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserAccountInfoAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserAccountInfoRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserAccountInfoAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserAccountInfoGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserAccountInfoResult** result
) noexcept;

/// <summary>
/// GetUserBans documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserBansGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserBansAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserBansRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserBansAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserBansGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserBansResult** result
) noexcept;

/// <summary>
/// GetUserData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserInventory documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserInventoryGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserInventoryAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserInventoryRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserInventoryAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserInventoryGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserInventoryResult** result
) noexcept;

/// <summary>
/// GetUserPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserPublisherInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserPublisherInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserPublisherInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserPublisherInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserPublisherReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserPublisherReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserPublisherReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserPublisherReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept;

/// <summary>
/// GetUserReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetUserReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGetUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGetUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGetUserReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGetUserReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGetUserDataResult** result
) noexcept;

/// <summary>
/// GrantCharacterToUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGrantCharacterToUserGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGrantCharacterToUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGrantCharacterToUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a GrantCharacterToUser call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerGrantCharacterToUserGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGrantCharacterToUserAsync call.
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
HRESULT PlayFabServerGrantCharacterToUserGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerGrantCharacterToUserResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// GrantItemsToCharacter documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGrantItemsToCharacterGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGrantItemsToCharacterAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGrantItemsToCharacterRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGrantItemsToCharacterAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGrantItemsToCharacterGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGrantItemsToCharacterResult** result
) noexcept;

/// <summary>
/// GrantItemsToUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGrantItemsToUserGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGrantItemsToUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGrantItemsToUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGrantItemsToUserAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGrantItemsToUserGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGrantItemsToUserResult** result
) noexcept;

/// <summary>
/// GrantItemsToUsers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGrantItemsToUsersGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerGrantItemsToUsersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerGrantItemsToUsersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerGrantItemsToUsersAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerGrantItemsToUsersGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerGrantItemsToUsersResult** result
) noexcept;

/// <summary>
/// LinkPSNAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerLinkPSNAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLinkPSNAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkServerCustomId documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerLinkServerCustomIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLinkServerCustomIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// LinkXboxAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerLinkXboxAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLinkXboxAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ModifyItemUses documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerModifyItemUsesGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerModifyItemUsesAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerModifyItemUsesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a ModifyItemUses call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerModifyItemUsesGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerModifyItemUsesAsync call.
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
HRESULT PlayFabServerModifyItemUsesGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyItemUsesResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// MoveItemToCharacterFromCharacter documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerMoveItemToCharacterFromCharacterAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerMoveItemToCharacterFromCharacterRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// MoveItemToCharacterFromUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerMoveItemToCharacterFromUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerMoveItemToCharacterFromUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// MoveItemToUserFromCharacter documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerMoveItemToUserFromCharacterAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerMoveItemToUserFromCharacterRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// NotifyMatchmakerPlayerLeft documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerNotifyMatchmakerPlayerLeftGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerNotifyMatchmakerPlayerLeftAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerNotifyMatchmakerPlayerLeftRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerNotifyMatchmakerPlayerLeftAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerNotifyMatchmakerPlayerLeftGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerNotifyMatchmakerPlayerLeftResult** result
) noexcept;

/// <summary>
/// RedeemCoupon documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerRedeemCouponGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerRedeemCouponAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRedeemCouponRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerRedeemCouponAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerRedeemCouponGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRedeemCouponResult** result
) noexcept;

/// <summary>
/// RedeemMatchmakerTicket documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerRedeemMatchmakerTicketGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerRedeemMatchmakerTicketAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRedeemMatchmakerTicketRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerRedeemMatchmakerTicketAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerRedeemMatchmakerTicketGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRedeemMatchmakerTicketResult** result
) noexcept;

/// <summary>
/// RefreshGameServerInstanceHeartbeat documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerRefreshGameServerInstanceHeartbeatAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRefreshGameServerInstanceHeartbeatRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RegisterGame documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerRegisterGameGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerRegisterGameAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRegisterGameRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a RegisterGame call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerRegisterGameGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerRegisterGameAsync call.
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
HRESULT PlayFabServerRegisterGameGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerRegisterGameResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// RemoveFriend documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerRemoveFriendAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRemoveFriendRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveGenericID documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerRemoveGenericIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRemoveGenericIDRequest* request,
    _Inout_ XAsyncBlock* async
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
HRESULT PlayFabServerRemovePlayerTagAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRemovePlayerTagRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// RemoveSharedGroupMembers documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerRemoveSharedGroupMembersAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRemoveSharedGroupMembersRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// ReportPlayer documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerReportPlayerGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerReportPlayerAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerReportPlayerServerRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerReportPlayerAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerReportPlayerServerResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerReportPlayerGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerReportPlayerServerResult* result
) noexcept;

/// <summary>
/// RevokeAllBansForUser documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerRevokeAllBansForUserGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerRevokeAllBansForUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRevokeAllBansForUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerRevokeAllBansForUserAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerRevokeAllBansForUserGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRevokeAllBansForUserResult** result
) noexcept;

/// <summary>
/// RevokeBans documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerRevokeBansGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerRevokeBansAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRevokeBansRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerRevokeBansAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerRevokeBansGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRevokeBansResult** result
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
HRESULT PlayFabServerRevokeInventoryItemAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRevokeInventoryItemRequest* request,
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
/// If successful, call <see cref="PlayFabServerRevokeInventoryItemsGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerRevokeInventoryItemsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerRevokeInventoryItemsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerRevokeInventoryItemsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerRevokeInventoryItemsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerRevokeInventoryItemsResult** result
) noexcept;

/// <summary>
/// SavePushNotificationTemplate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerSavePushNotificationTemplateGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerSavePushNotificationTemplateAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSavePushNotificationTemplateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SavePushNotificationTemplate call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerSavePushNotificationTemplateGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerSavePushNotificationTemplateAsync call.
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
HRESULT PlayFabServerSavePushNotificationTemplateGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerSavePushNotificationTemplateResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// SendCustomAccountRecoveryEmail documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSendCustomAccountRecoveryEmailAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSendCustomAccountRecoveryEmailRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SendEmailFromTemplate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSendEmailFromTemplateAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSendEmailFromTemplateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SendPushNotification documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSendPushNotificationAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSendPushNotificationRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SendPushNotificationFromTemplate documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSendPushNotificationFromTemplateAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSendPushNotificationFromTemplateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetFriendTags documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSetFriendTagsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetFriendTagsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetGameServerInstanceData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSetGameServerInstanceDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetGameServerInstanceDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetGameServerInstanceState documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSetGameServerInstanceStateAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetGameServerInstanceStateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SetGameServerInstanceTags documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerSetGameServerInstanceTagsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetGameServerInstanceTagsRequest* request,
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
HRESULT PlayFabServerSetPlayerSecretAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetPlayerSecretRequest* request,
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
HRESULT PlayFabServerSetPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetPublisherDataRequest* request,
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
HRESULT PlayFabServerSetTitleDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetTitleDataRequest* request,
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
HRESULT PlayFabServerSetTitleInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSetTitleDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// SubtractCharacterVirtualCurrency documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerSubtractCharacterVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerSubtractCharacterVirtualCurrencyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSubtractCharacterVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SubtractCharacterVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerSubtractCharacterVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerSubtractCharacterVirtualCurrencyAsync call.
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
HRESULT PlayFabServerSubtractCharacterVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyCharacterVirtualCurrencyResult** result,
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
/// If successful, call <see cref="PlayFabServerSubtractUserVirtualCurrencyGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerSubtractUserVirtualCurrencyAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerSubtractUserVirtualCurrencyRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a SubtractUserVirtualCurrency call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerSubtractUserVirtualCurrencyGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerSubtractUserVirtualCurrencyAsync call.
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
HRESULT PlayFabServerSubtractUserVirtualCurrencyGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerModifyUserVirtualCurrencyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// UnlinkPSNAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUnlinkPSNAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUnlinkPSNAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkServerCustomId documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUnlinkServerCustomIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUnlinkServerCustomIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlinkXboxAccount documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUnlinkXboxAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUnlinkXboxAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UnlockContainerInstance documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUnlockContainerInstanceGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUnlockContainerInstanceAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUnlockContainerInstanceRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUnlockContainerInstanceAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerUnlockContainerInstanceGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerUnlockContainerItemResult** result
) noexcept;

/// <summary>
/// UnlockContainerItem documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUnlockContainerItemGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUnlockContainerItemAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUnlockContainerItemRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUnlockContainerItemAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerUnlockContainerItemGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerUnlockContainerItemResult** result
) noexcept;

/// <summary>
/// UpdateAvatarUrl documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUpdateAvatarUrlAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateAvatarUrlRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateBans documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateBansGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateBansAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateBansRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateBansAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PlayFabResultCloseHandle to release the result object.
/// </remarks>
HRESULT PlayFabServerUpdateBansGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabServerUpdateBansResult** result
) noexcept;

/// <summary>
/// UpdateCharacterData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateCharacterDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateCharacterDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateCharacterDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateCharacterDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateCharacterDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateCharacterDataResult* result
) noexcept;

/// <summary>
/// UpdateCharacterInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateCharacterInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateCharacterInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateCharacterInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateCharacterDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateCharacterInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateCharacterDataResult* result
) noexcept;

/// <summary>
/// UpdateCharacterReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateCharacterReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateCharacterReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateCharacterDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateCharacterReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateCharacterDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateCharacterReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateCharacterDataResult* result
) noexcept;

/// <summary>
/// UpdateCharacterStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUpdateCharacterStatisticsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateCharacterStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdatePlayerStatistics documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUpdatePlayerStatisticsAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdatePlayerStatisticsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateSharedGroupData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUpdateSharedGroupDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateSharedGroupDataRequest* request,
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
/// If successful, call <see cref="PlayFabServerUpdateUserDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateUserDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateUserDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateUserDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateUserInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateUserInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateUserInternalDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateUserInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateUserInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserInventoryItemCustomData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PlayFabServerUpdateUserInventoryItemCustomDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateUserInventoryItemDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// UpdateUserPublisherData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateUserPublisherDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateUserPublisherDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateUserPublisherDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateUserPublisherDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserPublisherInternalData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateUserPublisherInternalDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateUserPublisherInternalDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateUserInternalDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateUserPublisherInternalDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateUserPublisherInternalDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserPublisherReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateUserPublisherReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateUserPublisherReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateUserPublisherReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateUserPublisherReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept;

/// <summary>
/// UpdateUserReadOnlyData documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerUpdateUserReadOnlyDataGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerUpdateUserReadOnlyDataAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerUpdateUserDataRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerUpdateUserReadOnlyDataAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="result">PlayFabServerUpdateUserDataResult object that will be populated with the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerUpdateUserReadOnlyDataGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PlayFabServerUpdateUserDataResult* result
) noexcept;

/// <summary>
/// WriteCharacterEvent documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerWriteCharacterEventGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerWriteCharacterEventAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerWriteServerCharacterEventRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a WriteCharacterEvent call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerWriteCharacterEventGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerWriteCharacterEventAsync call.
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
HRESULT PlayFabServerWriteCharacterEventGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// WritePlayerEvent documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerWritePlayerEventGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerWritePlayerEventAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerWriteServerPlayerEventRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a WritePlayerEvent call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerWritePlayerEventGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerWritePlayerEventAsync call.
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
HRESULT PlayFabServerWritePlayerEventGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// WriteTitleEvent documentation not found in XmlRefDocs.
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerWriteTitleEventGetResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerWriteTitleEventAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerWriteTitleEventRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the size in bytes needed to store the result of a WriteTitleEvent call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="bufferSize">The buffer size in bytes required for the result.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PlayFabServerWriteTitleEventGetResultSize(
    _Inout_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept;

/// <summary>
/// Gets the result of a successful PlayFabServerWriteTitleEventAsync call.
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
HRESULT PlayFabServerWriteTitleEventGetResult(
    _Inout_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PlayFabServerWriteEventResponse** result,
    _Out_opt_ size_t* bufferUsed
) noexcept;


}