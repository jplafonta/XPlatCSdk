// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// Region enum.
/// </summary>
enum class PlayFabMatchmakerRegion : uint32_t
{
    USCentral,
    USEast,
    EUWest,
    Singapore,
    Japan,
    Brazil,
    Australia
};

/// <summary>
/// PlayFabMatchmakerAuthUserRequest data model. This API allows the external match-making service to
/// confirm that the user has a valid Session Ticket for the title, in order to securely enable match-making.
/// The client passes the user's Session Ticket to the external match-making service, which then passes
/// the Session Ticket in as the AuthorizationTicket in this call. Request object for PlayFabMatchmakerAuthUserAsync.
/// </summary>
typedef struct PlayFabMatchmakerAuthUserRequest
{
    /// <summary>
    /// Session Ticket provided by the client.
    /// </summary>
    const char* authorizationTicket;

} PlayFabMatchmakerAuthUserRequest;

/// <summary>
/// PlayFabMatchmakerAuthUserResponse data model. Result payload for PlayFabMatchmakerAuthUserAsync.
/// </summary>
typedef struct PlayFabMatchmakerAuthUserResponse
{
    /// <summary>
    /// Boolean indicating if the user has been authorized to use the external match-making service.
    /// </summary>
    bool authorized;

    /// <summary>
    /// (Optional) PlayFab unique identifier of the account that has been authorized.
    /// </summary>
    const char* playFabId;

} PlayFabMatchmakerAuthUserResponse;

/// <summary>
/// PlayFabMatchmakerPlayerJoinedRequest data model. Request object for PlayFabMatchmakerPlayerJoinedAsync.
/// </summary>
typedef struct PlayFabMatchmakerPlayerJoinedRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Unique identifier of the Game Server Instance the user is joining. This must be a Game Server
    /// Instance started with the Matchmaker/StartGame API.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// PlayFab unique identifier for the player joining.
    /// </summary>
    const char* playFabId;

} PlayFabMatchmakerPlayerJoinedRequest;

/// <summary>
/// PlayFabMatchmakerPlayerLeftRequest data model. Request object for PlayFabMatchmakerPlayerLeftAsync.
/// </summary>
typedef struct PlayFabMatchmakerPlayerLeftRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Unique identifier of the Game Server Instance the user is leaving. This must be a Game Server
    /// Instance started with the Matchmaker/StartGame API.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// PlayFab unique identifier for the player leaving.
    /// </summary>
    const char* playFabId;

} PlayFabMatchmakerPlayerLeftRequest;

/// <summary>
/// PlayFabMatchmakerStartGameRequest data model. Request object for PlayFabMatchmakerStartGameAsync.
/// </summary>
typedef struct PlayFabMatchmakerStartGameRequest
{
    /// <summary>
    /// Unique identifier of the previously uploaded build executable which is to be started.
    /// </summary>
    const char* build;

    /// <summary>
    /// (Optional) Custom command line argument when starting game server process.
    /// </summary>
    const char* customCommandLineData;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// HTTP endpoint URL for receiving game status events, if using an external matchmaker. When the
    /// game ends, PlayFab will make a POST request to this URL with the X-SecretKey header set to the
    /// value of the game's secret and an application/json body of { "EventName": "game_ended", "GameID":
    /// "<gameid>" }.
    /// </summary>
    const char* externalMatchmakerEventEndpoint;

    /// <summary>
    /// Game mode for this Game Server Instance.
    /// </summary>
    const char* gameMode;

    /// <summary>
    /// Region with which to associate the server, for filtering.
    /// </summary>
    PlayFabMatchmakerRegion region;

} PlayFabMatchmakerStartGameRequest;

/// <summary>
/// PlayFabMatchmakerStartGameResponse data model. Result payload for PlayFabMatchmakerStartGameAsync.
/// </summary>
typedef struct PlayFabMatchmakerStartGameResponse
{
    /// <summary>
    /// (Optional) Unique identifier for the game/lobby in the new Game Server Instance.
    /// </summary>
    const char* gameID;

    /// <summary>
    /// (Optional) IPV4 address of the server.
    /// </summary>
    const char* serverIPV4Address;

    /// <summary>
    /// (Optional) IPV6 address of the new Game Server Instance.
    /// </summary>
    const char* serverIPV6Address;

    /// <summary>
    /// Port number for communication with the Game Server Instance.
    /// </summary>
    uint32_t serverPort;

    /// <summary>
    /// (Optional) Public DNS name (if any) of the server.
    /// </summary>
    const char* serverPublicDNSName;

} PlayFabMatchmakerStartGameResponse;

/// <summary>
/// PlayFabMatchmakerUserInfoRequest data model. Request object for PlayFabMatchmakerUserInfoAsync.
/// </summary>
typedef struct PlayFabMatchmakerUserInfoRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Minimum catalog version for which data is requested (filters the results to only contain inventory
    /// items which have a catalog version of this or higher).
    /// </summary>
    int32_t minCatalogVersion;

    /// <summary>
    /// PlayFab unique identifier of the user whose information is being requested.
    /// </summary>
    const char* playFabId;

} PlayFabMatchmakerUserInfoRequest;

/// <summary>
/// PlayFabMatchmakerUserInfoResponse data model. Result payload for PlayFabMatchmakerUserInfoAsync.
/// </summary>
typedef struct PlayFabMatchmakerUserInfoResponse
{
    /// <summary>
    /// (Optional) Array of inventory items in the user's current inventory.
    /// </summary>
    PlayFabItemInstance const* const* inventory;

    /// <summary>
    /// Count of inventory
    /// </summary>
    uint32_t inventoryCount;

    /// <summary>
    /// Boolean indicating whether the user is a developer.
    /// </summary>
    bool isDeveloper;

    /// <summary>
    /// (Optional) PlayFab unique identifier of the user whose information was requested.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Steam unique identifier, if the user has an associated Steam account.
    /// </summary>
    const char* steamId;

    /// <summary>
    /// (Optional) Title specific display name, if set.
    /// </summary>
    const char* titleDisplayName;

    /// <summary>
    /// (Optional) PlayFab unique user name.
    /// </summary>
    const char* username;

    /// <summary>
    /// (Optional) Array of virtual currency balance(s) belonging to the user.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* virtualCurrency;

    /// <summary>
    /// Count of virtualCurrency
    /// </summary>
    uint32_t virtualCurrencyCount;

    /// <summary>
    /// (Optional) Array of remaining times and timestamps for virtual currencies.
    /// </summary>
    struct PlayFabVirtualCurrencyRechargeTimeDictionaryEntry const* virtualCurrencyRechargeTimes;

    /// <summary>
    /// Count of virtualCurrencyRechargeTimes
    /// </summary>
    uint32_t virtualCurrencyRechargeTimesCount;

} PlayFabMatchmakerUserInfoResponse;

#pragma pop_macro("IN")

}
