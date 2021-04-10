// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>

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
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithAndroidDeviceIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAndroidDeviceIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithApple documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithAppleAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAppleRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithCustomID documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithCustomIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithCustomIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithEmailAddress documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithEmailAddressAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithEmailAddressRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithFacebook documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithFacebookAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithFacebookInstantGamesId documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithFacebookInstantGamesIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookInstantGamesIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithGameCenter documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithGameCenterAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGameCenterRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithGoogleAccount documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithGoogleAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGoogleAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithIOSDeviceID documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithIOSDeviceIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithIOSDeviceIDRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithKongregate documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithKongregateAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithKongregateRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithNintendoServiceAccount documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithNintendoServiceAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoServiceAccountRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithNintendoSwitchDeviceId documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithNintendoSwitchDeviceIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithOpenIdConnect documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithOpenIdConnectAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithOpenIdConnectRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithPlayFab documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithPlayFabAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPlayFabRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithPSN documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithPSNAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPSNRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithSteam documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithSteamAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithSteamRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithTwitch documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithTwitchAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithTwitchRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithWindowsHello documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithWindowsHelloAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithWindowsHelloRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <LoginWithXbox documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientLoginWithXboxAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithXboxRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <RegisterPlayFabUser documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientRegisterPlayFabUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientRegisterPlayFabUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// <RegisterWithWindowsHello documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabClientRegisterWithWindowsHelloAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientRegisterWithWindowsHelloRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

}
