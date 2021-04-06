// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabAuth.h>
#include <playfab/PlayFabServerDataModels_c.h>

extern "C"
{

/// <summary>
/// <LoginWithServerCustomId documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerLoginWithServerCustomId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithSteamId documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerLoginWithSteamId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithSteamIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithXbox documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerLoginWithXbox(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithXboxId documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabServerGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabServerLoginWithXboxId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithXboxIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

}
