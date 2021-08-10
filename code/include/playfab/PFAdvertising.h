// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFAdvertisingDataModels.h>
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>

extern "C"
{

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Attributes an install for advertisment.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// If you have an ad attribution partner enabled, this will post an install to their service to track
/// the device. It uses the given device id to match based on clicks on ads.
///
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFAdvertisingClientAttributeInstallAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFAdvertisingAttributeInstallRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Returns a list of ad placements and a reward for each
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Returns a list of ad placements for the calling player. Each ad placement may include a reward if
/// there was at least one valid reward for the player as well as the number of plays remaining and when
/// the play count resets.
///
/// If successful, call <see cref="PFAdvertisingClientGetAdPlacementsGetResult"/> to get the result.
/// </remarks>
HRESULT PFAdvertisingClientGetAdPlacementsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFAdvertisingGetAdPlacementsRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFAdvertisingClientGetAdPlacementsAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFAdvertisingClientGetAdPlacementsGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAdvertisingGetAdPlacementsResult** result
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Report player's ad activity
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Given a Placement ID and a Reward ID from the GetAdPlacements API call records a player's ad activity.
///
/// Call <see cref="XAsyncGetStatus"/> to get the status of the operation.
/// </remarks>
HRESULT PFAdvertisingClientReportAdActivityAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFAdvertisingReportAdActivityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;
#endif

#if HC_PLATFORM != HC_PLATFORM_GDK
/// <summary>
/// Reward player's ad activity
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// Given a Placement ID and a Reward ID from the GetAdPlacements API call will grant the reward to the
/// player. This API call does not require that ReportAdActivity is called. The grant is performed in
/// real-time, at the end of the call all items will have been granted.
///
/// If successful, call <see cref="PFAdvertisingClientRewardAdActivityGetResult"/> to get the result.
/// </remarks>
HRESULT PFAdvertisingClientRewardAdActivityAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFAdvertisingRewardAdActivityRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFAdvertisingClientRewardAdActivityAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFAdvertisingClientRewardAdActivityGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAdvertisingRewardAdActivityResult** result
) noexcept;
#endif


}