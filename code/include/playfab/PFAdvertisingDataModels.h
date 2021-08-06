// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFSharedDataModels.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// AdActivity enum.
/// </summary>
enum class PFAdvertisingAdActivity : uint32_t
{
    Opened,
    Closed,
    Start,
    End
};

/// <summary>
/// PFAdvertisingAttributeInstallRequest data model. If you have an ad attribution partner enabled, this
/// will post an install to their service to track the device. It uses the given device id to match based
/// on clicks on ads.
/// </summary>
typedef struct PFAdvertisingAttributeInstallRequest
{
    /// <summary>
    /// (Optional) The adid for this device.
    /// </summary>
    const char* adid;

    /// <summary>
    /// (Optional) The IdentifierForAdvertisers for iOS Devices.
    /// </summary>
    const char* idfa;

} PFAdvertisingAttributeInstallRequest;

/// <summary>
/// PFAdvertisingGetAdPlacementsRequest data model. Using an AppId to return a list of valid ad placements
/// for a player.
/// </summary>
typedef struct PFAdvertisingGetAdPlacementsRequest
{
    /// <summary>
    /// The current AppId to use.
    /// </summary>
    const char* appId;

    /// <summary>
    /// (Optional) Using the name or unique identifier, filter the result for get a specific placement.
    /// </summary>
    PFNameIdentifier const* identifier;

} PFAdvertisingGetAdPlacementsRequest;

/// <summary>
/// PFAdvertisingAdPlacementDetails data model. A single ad placement details including placement and
/// reward information.
/// </summary>
typedef struct PFAdvertisingAdPlacementDetails
{
    /// <summary>
    /// (Optional) Placement unique ID.
    /// </summary>
    const char* placementId;

    /// <summary>
    /// (Optional) Placement name.
    /// </summary>
    const char* placementName;

    /// <summary>
    /// (Optional) If placement has viewing limits indicates how many views are left.
    /// </summary>
    int32_t const* placementViewsRemaining;

    /// <summary>
    /// (Optional) If placement has viewing limits indicates when they will next reset.
    /// </summary>
    double const* placementViewsResetMinutes;

    /// <summary>
    /// (Optional) Optional URL to a reward asset.
    /// </summary>
    const char* rewardAssetUrl;

    /// <summary>
    /// (Optional) Reward description.
    /// </summary>
    const char* rewardDescription;

    /// <summary>
    /// (Optional) Reward unique ID.
    /// </summary>
    const char* rewardId;

    /// <summary>
    /// (Optional) Reward name.
    /// </summary>
    const char* rewardName;

} PFAdvertisingAdPlacementDetails;

/// <summary>
/// PFAdvertisingGetAdPlacementsResult data model. Array of AdPlacementDetails.
/// </summary>
typedef struct PFAdvertisingGetAdPlacementsResult
{
    /// <summary>
    /// (Optional) Array of results.
    /// </summary>
    PFAdvertisingAdPlacementDetails const* const* adPlacements;

    /// <summary>
    /// Count of adPlacements
    /// </summary>
    uint32_t adPlacementsCount;

} PFAdvertisingGetAdPlacementsResult;

/// <summary>
/// PFAdvertisingReportAdActivityRequest data model. Report ad activity.
/// </summary>
typedef struct PFAdvertisingReportAdActivityRequest
{
    /// <summary>
    /// Type of activity, may be Opened, Closed, Start or End.
    /// </summary>
    PFAdvertisingAdActivity activity;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Unique ID of the placement to report for.
    /// </summary>
    const char* placementId;

    /// <summary>
    /// Unique ID of the reward the player was offered.
    /// </summary>
    const char* rewardId;

} PFAdvertisingReportAdActivityRequest;

/// <summary>
/// PFAdvertisingRewardAdActivityRequest data model. Details on which placement and reward to perform
/// a grant on.
/// </summary>
typedef struct PFAdvertisingRewardAdActivityRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Placement unique ID.
    /// </summary>
    const char* placementId;

    /// <summary>
    /// Reward unique ID.
    /// </summary>
    const char* rewardId;

} PFAdvertisingRewardAdActivityRequest;

/// <summary>
/// PFAdvertisingAdRewardItemGranted data model. Details for each item granted.
/// </summary>
typedef struct PFAdvertisingAdRewardItemGranted
{
    /// <summary>
    /// (Optional) Catalog ID.
    /// </summary>
    const char* catalogId;

    /// <summary>
    /// (Optional) Catalog item display name.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) Inventory instance ID.
    /// </summary>
    const char* instanceId;

    /// <summary>
    /// (Optional) Item ID.
    /// </summary>
    const char* itemId;

} PFAdvertisingAdRewardItemGranted;

/// <summary>
/// PFAdvertisingAdRewardResults data model. Details on what was granted to the player.
/// </summary>
typedef struct PFAdvertisingAdRewardResults
{
    /// <summary>
    /// (Optional) Array of the items granted to the player.
    /// </summary>
    PFAdvertisingAdRewardItemGranted const* const* grantedItems;

    /// <summary>
    /// Count of grantedItems
    /// </summary>
    uint32_t grantedItemsCount;

    /// <summary>
    /// (Optional) Dictionary of virtual currencies that were granted to the player.
    /// </summary>
    struct PFInt32DictionaryEntry const* grantedVirtualCurrencies;

    /// <summary>
    /// Count of grantedVirtualCurrencies
    /// </summary>
    uint32_t grantedVirtualCurrenciesCount;

    /// <summary>
    /// (Optional) Dictionary of statistics that were modified for the player.
    /// </summary>
    struct PFInt32DictionaryEntry const* incrementedStatistics;

    /// <summary>
    /// Count of incrementedStatistics
    /// </summary>
    uint32_t incrementedStatisticsCount;

} PFAdvertisingAdRewardResults;

/// <summary>
/// PFAdvertisingRewardAdActivityResult data model. Result for rewarding an ad activity.
/// </summary>
typedef struct PFAdvertisingRewardAdActivityResult
{
    /// <summary>
    /// (Optional) PlayStream Event ID that was generated by this reward (all subsequent events are associated
    /// with this event identifier).
    /// </summary>
    const char* adActivityEventId;

    /// <summary>
    /// (Optional) Debug results from the grants.
    /// </summary>
    const char* const* debugResults;

    /// <summary>
    /// Count of debugResults
    /// </summary>
    uint32_t debugResultsCount;

    /// <summary>
    /// (Optional) Id of the placement the reward was for.
    /// </summary>
    const char* placementId;

    /// <summary>
    /// (Optional) Name of the placement the reward was for.
    /// </summary>
    const char* placementName;

    /// <summary>
    /// (Optional) If placement has viewing limits indicates how many views are left.
    /// </summary>
    int32_t const* placementViewsRemaining;

    /// <summary>
    /// (Optional) If placement has viewing limits indicates when they will next reset.
    /// </summary>
    double const* placementViewsResetMinutes;

    /// <summary>
    /// (Optional) Reward results.
    /// </summary>
    PFAdvertisingAdRewardResults const* rewardResults;

} PFAdvertisingRewardAdActivityResult;

#pragma pop_macro("IN")

}
