// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabAuthenticationDataModels.h>

extern "C"
{

/// <summary>
/// <GetEntityToken documentation goes here.>
/// </summary>
/// <param name="stateHandle">PlayFabStateHandle returned from PlayFabInitialize call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If successful, call <see cref="PlayFabGetAuthResult"/> to get the result. The resulting PlayFabEntityHandle
/// will be used to authenticate future PlayFab calls.
/// </remarks>
HRESULT PlayFabAuthenticationGetEntityTokenAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAuthenticationGetEntityTokenRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

}
