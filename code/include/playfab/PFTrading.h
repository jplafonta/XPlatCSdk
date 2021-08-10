// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFTradingDataModels.h>
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>

extern "C"
{

/// <summary>
/// Accepts an open trade (one that has not yet been accepted or cancelled), if the locally signed-in
/// player is in the allowed player list for the trade, or it is open to all players. If the call is successful,
/// the offered and accepted items will be swapped between the two players' inventories.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also ClientCancelTradeAsync, ClientGetPlayerTradesAsync, ClientGetTradeStatusAsync, ClientOpenTradeAsync.
///
/// If successful, call <see cref="PFTradingClientAcceptTradeGetResult"/> to get the result.
/// </remarks>
HRESULT PFTradingClientAcceptTradeAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFTradingAcceptTradeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFTradingClientAcceptTradeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFTradingClientAcceptTradeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingAcceptTradeResponse** result
) noexcept;

/// <summary>
/// Cancels an open trade (one that has not yet been accepted or cancelled). Note that only the player
/// who created the trade can cancel it via this API call, to prevent griefing of the trade system (cancelling
/// trades in order to prevent other players from accepting them, for trades that can be claimed by more
/// than one player).
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also ClientAcceptTradeAsync, ClientGetPlayerTradesAsync, ClientGetTradeStatusAsync, ClientOpenTradeAsync.
///
/// If successful, call <see cref="PFTradingClientCancelTradeGetResult"/> to get the result.
/// </remarks>
HRESULT PFTradingClientCancelTradeAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFTradingCancelTradeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFTradingClientCancelTradeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFTradingClientCancelTradeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingCancelTradeResponse** result
) noexcept;

/// <summary>
/// Gets all trades the player has either opened or accepted, optionally filtered by trade status.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also ClientAcceptTradeAsync, ClientCancelTradeAsync, ClientGetTradeStatusAsync, ClientOpenTradeAsync.
///
/// If successful, call <see cref="PFTradingClientGetPlayerTradesGetResult"/> to get the result.
/// </remarks>
HRESULT PFTradingClientGetPlayerTradesAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFTradingGetPlayerTradesRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFTradingClientGetPlayerTradesAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFTradingClientGetPlayerTradesGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingGetPlayerTradesResponse** result
) noexcept;

/// <summary>
/// Gets the current status of an existing trade.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also ClientAcceptTradeAsync, ClientCancelTradeAsync, ClientGetPlayerTradesAsync, ClientOpenTradeAsync.
///
/// If successful, call <see cref="PFTradingClientGetTradeStatusGetResult"/> to get the result.
/// </remarks>
HRESULT PFTradingClientGetTradeStatusAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFTradingGetTradeStatusRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFTradingClientGetTradeStatusAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFTradingClientGetTradeStatusGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingGetTradeStatusResponse** result
) noexcept;

/// <summary>
/// Opens a new outstanding trade. Note that a given item instance may only be in one open trade at a
/// time.
/// </summary>
/// <param name="entityHandle">PFEntityHandle returned from a auth call.</param>
/// <param name="request">Populated request object.</param>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// See also ClientAcceptTradeAsync, ClientCancelTradeAsync, ClientGetPlayerTradesAsync, ClientGetTradeStatusAsync.
///
/// If successful, call <see cref="PFTradingClientOpenTradeGetResult"/> to get the result.
/// </remarks>
HRESULT PFTradingClientOpenTradeAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ const PFTradingOpenTradeRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept;

/// <summary>
/// Gets the result of a successful PFTradingClientOpenTradeAsync call.
/// </summary>
/// <param name="async">XAsyncBlock for the async operation.</param>
/// <param name="resultHandle">Opaque handle to the result object.</param>
/// <param name="result">Pointer to the result object.</param>
/// <returns>Result code for this API operation.</returns>
/// <remarks>
/// The lifetime of the result object is tied to the result handle. When the result is no longer needed, call
/// PFResultCloseHandle to release the result object.
/// </remarks>
HRESULT PFTradingClientOpenTradeGetResult(
    _Inout_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingOpenTradeResponse** result
) noexcept;


}