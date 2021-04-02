// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabAuth.h>
#include <playfab/PlayFabClientDataModels_c.h>

extern "C"
{

/// <summary>
/// <LoginWithAndroidDeviceID documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithAndroidDeviceID(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithApple documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithApple(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithCustomID documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithCustomID(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithEmailAddress documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithEmailAddress(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithEmailAddressRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithFacebook documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithFacebook(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithFacebookInstantGamesId documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithFacebookInstantGamesId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithGameCenter documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithGameCenter(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGameCenterRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithGoogleAccount documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithGoogleAccount(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithIOSDeviceID documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithIOSDeviceID(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithKongregate documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithKongregate(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithKongregateRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithNintendoServiceAccount documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithNintendoServiceAccount(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithNintendoSwitchDeviceId documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithNintendoSwitchDeviceId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithOpenIdConnect documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithOpenIdConnect(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithPlayFab documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithPlayFab(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPlayFabRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithPSN documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithPSN(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPSNRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithSteam documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithSteam(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithSteamRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithTwitch documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithTwitch(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithTwitchRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithWindowsHello documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithWindowsHello(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithWindowsHelloRequest* request,
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
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientLoginWithXbox(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <RegisterPlayFabUser documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientRegisterPlayFabUser(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientRegisterPlayFabUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <RegisterWithWindowsHello documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabClientGetAuthResult"/> to get the result.
/// </remarks>
HRESULT PlayFabClientRegisterWithWindowsHello(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientRegisterWithWindowsHelloRequest* request,
    _In_ XAsyncBlock* async
) noexcept;

}
