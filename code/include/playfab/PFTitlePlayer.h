// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFEntity.h>

extern "C"
{

/// <summary>
/// Handle to an authenticated TitlePlayer Entity. Returned from one of the PFAuthenticationClientLogin* APIs.
/// When no longer needed, the Entity handle must be closed with PFTitlePlayerCloseHandle.
/// </summary>
typedef struct PFTitlePlayer* PFTitlePlayerHandle;

/// <summary>
/// Duplicates a PFTitlePlayerHandle.
/// </summary>
/// <param name="titlePlayerHandle">TitlePlayer handle to duplicate.</param>
/// <param name="duplicatedHandle">The duplicated handle.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Both the duplicated handle and the original handle need to be closed with PFTitlePlayerCloseHandle when they
/// are no longer needed.
/// </remarks>
HRESULT PFTitlePlayerDuplicateHandle(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Out_ PFTitlePlayerHandle* duplicatedHandle
) noexcept;

/// <summary>
/// Closes a PFTitlePlayerHandle.
/// </summary>
/// <param name="titlePlayerHandle">TitlePlayer handle to close.</param>
/// <returns>Result code for this API operation.</returns>
void PFTitlePlayerCloseHandle(
    _In_ PFTitlePlayerHandle titlePlayerHandle
) noexcept;

/// <summary>
/// Gets a generic PFEntityHandle for a TitlePlayer Entity. The PFEntityHandle can be used to
/// make API calls which only require a generic Entity rather than specifically a TitlePlayer Entity.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="entityHandle">Generic PFEntityHandle to the TitlePlayer Entity.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The output entityHandle and the titlePlayerHandle are separate and both need to be closed when they are no longer needed.
/// </remarks>
HRESULT PFTitlePlayerGetEntityHandle(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Out_ PFEntityHandle* entityHandle
) noexcept;

/// <summary>
/// Get the PlayFabId for the TitlePlayer.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="playFabId">Returned pointer to the playFabId. Valid until the TitlePlayer object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetPlayFabId(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_ const char** playFabId
) noexcept;

/// <summary>
/// Get the required buffer size for the TitlePlayer's Client SessionTicket.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name='bufferSize'>The required size of the buffer in bytes needed to hold the SessionTicket.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetCachedSessionTicketSize(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Out_ size_t* sessionTicketSize
) noexcept;

/// <summary>
/// Get the TitlePlayer's cached Client SessionTicket.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name='sessionTicketBufferSize'>The size of the provided SessionTicketBuffer, in bytes.</param>
/// <param name='SessionTicketBuffer'>Buffer to write the Client SessionTicket into.</param>
/// <param name='bufferUsed'>An optional pointer that contains the number of bytes written to the buffer.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetCachedSessionTicket(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _In_ size_t sessionTicketBufferSize,
    _Out_writes_bytes_to_opt_(sessionTicketSize, *bufferUsed) char* SessionTicketBuffer,
    _Out_opt_ size_t* bufferUsed
) noexcept;

/// <summary>
/// Get the Entity Id for the TitlePlayer.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="entityId">Returned pointer to the entityId. Valid until the TitlePlayer object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetEntityId(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_ const char** entityId
) noexcept;

/// <summary>
/// Get the cached Entity token.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="entityToken">Returned pointer to the entityToken. The pointer is valid until the TitlePlayer object is cleaned up, though
/// the token may expire before then.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetCachedEntityToken(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_ const PFEntityToken** entityToken
) noexcept;

/// <summary>
/// Get combined player info. Will be null if combined player info was not requested requested during login (see <see cref="PFGetPlayerCombinedInfoRequestParams"/>).
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="playerCombinedInfo">Returned pointer to player combined info. Valid until the TitlePlayer object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Note that the returned data is only guaranteed to be up to date as of the login request - it will not be automatically refreshed.
/// To get updated combined player data, call <see cref="PFPlayerDataManagementGetPlayerCombinedInfoAsync"/>
/// </remarks>
HRESULT PFTitlePlayerGetPlayerCombinedInfo(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const PFGetPlayerCombinedInfoResultPayload** playerCombinedInfo
) noexcept;

/// <summary>
/// Get last login time (prior to the login that resulted in this PFTitlePlayerHandle). lastLoginTime will be set to null if the player has no previous login.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="lastLoginTime">Returned pointer to the last login time. Valid until the TitlePlayer object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetLastLoginTime(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const time_t** lastLoginTime
) noexcept;

/// <summary>
/// Get UserSettings, if applicable. If unavailable, userSettings will be set to null.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="lastLoginTime">Returned pointer to the UserSettings. Valid until the TitlePlayer object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetUserSettings(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const PFAuthenticationUserSettings** userSettings
) noexcept;

/// <summary>
/// Get experimentation treatments for a user at the time of login. If unavailable, treatmentAssignment will be set to null.
/// </summary>
/// <param name="titlePlayerHandle">PFTitlePlayerHandle returned from a login call.</param>
/// <param name="lastLoginTime">Returned pointer to TreatmentAssignment. Valid until the TitlePlayer object is cleaned up.</param>
/// <returns>Result code for this API operation.</returns>
HRESULT PFTitlePlayerGetTreatmentAssignment(
    _In_ PFTitlePlayerHandle titlePlayerHandle,
    _Outptr_result_maybenull_ const PFTreatmentAssignment** treatmentAssignment
) noexcept;

}
