// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <httpClient/pal.h>
#include <httpClient/async.h>
#include <playfab/PFSharedDataModels.h>
#include <playfab/PFAuthenticationDataModels.h>

extern "C"
{

/// <summary>
/// Handle to an authenticated Entity (Player, Server, etc.). Contains the auth tokens needed to make PlayFab service
/// calls. When no longer needed, the Entity handle must be closed with PFEntityCloseHandle.
/// </summary>
typedef struct PFEntity* PFEntityHandle;

/// <summary>
/// PlayFab EntityToken and its expiration time. Used internally to authenticate PlayFab service calls.
/// </summary>
typedef struct PFEntityToken
{
    /// <summary>
    /// The token used to set X-EntityToken for all entity based API calls.
    /// </summary>
    const char* token;

    /// <summary>
    /// (Optional) The time the token will expire, if it is an expiring token, in UTC.
    /// </summary>
    time_t const* expiration;

} PFEntityToken;

/// TODO move to PlayFabAuthentication.h maybe?
/// <summary>
/// Get the result from a PlayFab authentication API. See PlayFabAuthentication.h for the various authentication options.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="entityHandle">Entity handle which can be used to call other PlayFab APIs.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If the auth call fails, entityHandle with be null. Otherwise, the handle must be closed with PFEntityCloseHandle
/// when it is no longer needed.
/// </remarks>
HRESULT PFGetAuthResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFEntityHandle* entityHandle
) noexcept;

/// <summary>
/// Duplicates a PFEntityHandle.
/// </summary>
/// <param name="entityHandle">Entity handle to duplicate.</param>
/// <param name="duplicatedEntityHandle">The duplicated handle.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Both the duplicated handle and the original handle need to be closed with PFEntityCloseHandle when they
/// are no longer needed.
/// </remarks>
HRESULT PFEntityDuplicateHandle(
    _In_ PFEntityHandle entityHandle,
    _Out_ PFEntityHandle* duplicatedEntityHandle
) noexcept;

/// <summary>
/// Closes a PFEntityHandle.
/// </summary>
/// <param name="entityHandle">Entity handle to close.</param>
/// <returns>Result code for this API operation.</returns>
void PFEntityCloseHandle(
    _In_ PFEntityHandle entityHandle
) noexcept;

/// <summary>
/// A callback invoked every time an Entity is automatically reauthenticated, thus obtaining a new EntityToken. An entity
/// will be automatically reauthenticated prior to its EntityToken expiring.
/// </summary>
typedef void CALLBACK PFEntityTokenRefreshedCallback(
    _In_ const PFEntityToken* newToken,
    _In_opt_ void* context
);

/// <summary>
/// Registers a PFTokenRefreshedCallback for an Entity.
/// </summary>
/// <param name="entityHandle">Entity handle for the entity.</param>
/// <param name="callback">The callback, <see cref="PFEntityTokenRefreshedCallback"/>.</param>
/// <param name="context">Optional pointer to data used by the event handler.</param>
/// <param name="token">The token for unregistering the callback.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityRegisterTokenRefreshedCallback(
    _In_ PFEntityHandle entityHandle,
    _In_ PFEntityTokenRefreshedCallback* callback,
    _In_opt_ void* context,
    _Out_ PFRegistrationToken* token
) noexcept;

/// <summary>
/// Unregisters a previously registered PFEntityTokenRefreshedCallback.
/// </summary>
/// <param name="entityHandle">Entity handle for the entity.</param>
/// <param name="token">Registration token from PFEntityRegisterTokenRefreshedCallback.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityUnregisterTokenRefreshedCallback(
    _In_ PFEntityHandle entityHandle,
    _In_ PFRegistrationToken token
) noexcept;

/// <summary>
/// Method to get an EntityToken for an owned Entity. The token requested can either be for the calling entity (i.e. refreshing
/// the existing valid token) or for an entity owned by the calling entity. If the a token refresh is requested, the internal auth
/// tokens will be updated and used for future calls. Note that the previous EntityToken remains valid until expiration, even though
/// it will no longer be used internally. If the requested token was for a different Entity, a new Entity object is created.
/// </summary>
/// <param name="entityHandle">Existing PFEntityHandle returned from an auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PFGetAuthResult"/> to get the result. If the requested token was the calling Entity, the resulting handle
/// will be a new handle to the same Entity object (it still must be closed by the caller when no longer needed). 
/// </remarks>
HRESULT PFEntityGetEntityTokenAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFAuthenticationGetEntityTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Get the PlayFabId (master_player_account Id) for an Entity.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="playFabId">Returned pointer to the playFabId. Valid until the Entity object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityGetPlayFabId(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const char** playFabId
) noexcept;

/// <summary>
/// Get the Entity Id for an Entity.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="entityId">Returned pointer to the entityId. Valid until the Entity object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityGetEntityId(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const char** entityId
) noexcept;

/// <summary>
/// Get the Entity type for an entity.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="entityId">Returned pointer to the entityType. Valid until the Entity object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityGetEntityType(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const char** entityType
) noexcept;

/// <summary>
/// Get the Entity token.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="entityToken">Returned pointer to the entityToken. The pointer is valid until the Entity object is cleaned up, though
/// the token may expire before then.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityGetCachedEntityToken(
    _In_ PFEntityHandle entityHandle,
    _Outptr_ const PFEntityToken** entityToken
) noexcept;

/// <summary>
/// Get combined player info. Will be null if combined player info was not requested requested during login (see <see cref="PFGetPlayerCombinedInfoRequestParams"/>).
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="playerCombinedInfo">Returned pointer to player combined info. Valid until the Entity object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Note that the returned data is only guaranteed to be up to date as of the login request - it will not be automatically refreshed.
/// To get updated combined player data, call <see cref="PFPlayerDataManagementGetPlayerCombinedInfoAsync"/>
/// </remarks>
HRESULT PFEntityGetPlayerCombinedInfo(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const PFGetPlayerCombinedInfoResultPayload** playerCombinedInfo
) noexcept;

/// <summary>
/// Get last login time (prior to the login that resulted in this entityHandle). lastLoginTime will be set to null if entity has no previous login.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="lastLoginTime">Returned pointer to the last login time. Valid until the Entity object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityGetLastLoginTime(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const time_t** lastLoginTime
) noexcept;

/// <summary>
/// Get UserSettings, if applicable. If unavailable, userSettings will be set to null.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="lastLoginTime">Returned pointer to the UserSettings. Valid until the Entity object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityGetUserSettings(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const PFAuthenticationUserSettings** userSettings
) noexcept;

/// <summary>
/// Get experimentation treatments for a user at the time of login. If unavailable, treatmentAssignment will be set to null.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="lastLoginTime">Returned pointer to TreatmentAssignment. Valid until the Entity object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFEntityGetTreatmentAssignment(
    _In_ PFEntityHandle entityHandle,
    _Outptr_result_maybenull_ const PFTreatmentAssignment** treatmentAssignment
) noexcept;

}