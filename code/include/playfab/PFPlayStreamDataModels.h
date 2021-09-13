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
/// PFPlayStreamAddPlayerTagRequest data model. This API will trigger a player_tag_added event and add
/// a tag with the given TagName and PlayFabID to the corresponding player profile. TagName can be used
/// for segmentation and it is limited to 256 characters. Also there is a limit on the number of tags
/// a title can have.
/// </summary>
typedef struct PFPlayStreamAddPlayerTagRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique tag for player profile.
    /// </summary>
    const char* tagName;

} PFPlayStreamAddPlayerTagRequest;

/// <summary>
/// PFPlayStreamGetSegmentResult data model.
/// </summary>
typedef struct PFPlayStreamGetSegmentResult
{
    /// <summary>
    /// (Optional) Identifier of the segments AB Test, if it is attached to one.
    /// </summary>
    const char* aBTestParent;

    /// <summary>
    /// Unique identifier for this segment.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Segment name.
    /// </summary>
    const char* name;

} PFPlayStreamGetSegmentResult;

/// <summary>
/// PFPlayStreamGetAllSegmentsResult data model.
/// </summary>
typedef struct PFPlayStreamGetAllSegmentsResult
{
    /// <summary>
    /// (Optional) Array of segments for this title.
    /// </summary>
    PFPlayStreamGetSegmentResult const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PFPlayStreamGetAllSegmentsResult;

/// <summary>
/// PFPlayStreamGetPlayersSegmentsRequest data model.
/// </summary>
typedef struct PFPlayStreamGetPlayersSegmentsRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PFPlayStreamGetPlayersSegmentsRequest;

/// <summary>
/// PFPlayStreamGetPlayerSegmentsResult data model.
/// </summary>
typedef struct PFPlayStreamGetPlayerSegmentsResult
{
    /// <summary>
    /// (Optional) Array of segments the requested player currently belongs to.
    /// </summary>
    PFPlayStreamGetSegmentResult const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PFPlayStreamGetPlayerSegmentsResult;

/// <summary>
/// PFPlayStreamGetPlayersInSegmentRequest data model. Initial request must contain at least a Segment
/// ID. Subsequent requests must contain the Segment ID as well as the Continuation Token. Failure to
/// send the Continuation Token will result in a new player segment list being generated. Each time the
/// Continuation Token is passed in the length of the Total Seconds to Live is refreshed. If too much
/// time passes between requests to the point that a subsequent request is past the Total Seconds to Live
/// an error will be returned and paging will be terminated. This API is resource intensive and should
/// not be used in scenarios which might generate high request volumes. Only one request to this API at
/// a time should be made per title. Concurrent requests to the API may be rejected with the APIConcurrentRequestLimitExceeded
/// error.
/// </summary>
typedef struct PFPlayStreamGetPlayersInSegmentRequest
{
    /// <summary>
    /// (Optional) Continuation token if retrieving subsequent pages of results.
    /// </summary>
    const char* continuationToken;

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
    /// (Optional) Maximum number of profiles to load. Default is 1,000. Maximum is 10,000.
    /// </summary>
    uint32_t const* maxBatchSize;

    /// <summary>
    /// (Optional) Number of seconds to keep the continuation token active. After token expiration it
    /// is not possible to continue paging results. Default is 300 (5 minutes). Maximum is 1,800 (30 minutes).
    /// </summary>
    uint32_t const* secondsToLive;

    /// <summary>
    /// Unique identifier for this segment.
    /// </summary>
    const char* segmentId;

} PFPlayStreamGetPlayersInSegmentRequest;

/// <summary>
/// PFPlayStreamAdCampaignAttribution data model.
/// </summary>
typedef struct PFPlayStreamAdCampaignAttribution
{
    /// <summary>
    /// UTC time stamp of attribution.
    /// </summary>
    time_t attributedAt;

    /// <summary>
    /// (Optional) Attribution campaign identifier.
    /// </summary>
    const char* campaignId;

    /// <summary>
    /// (Optional) Attribution network name.
    /// </summary>
    const char* platform;

} PFPlayStreamAdCampaignAttribution;

/// <summary>
/// PFPlayStreamContactEmailInfo data model.
/// </summary>
typedef struct PFPlayStreamContactEmailInfo
{
    /// <summary>
    /// (Optional) The email address.
    /// </summary>
    const char* emailAddress;

    /// <summary>
    /// (Optional) The name of the email info data.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) The verification status of the email.
    /// </summary>
    PFEmailVerificationStatus const* verificationStatus;

} PFPlayStreamContactEmailInfo;

/// <summary>
/// PFPlayStreamPlayerLinkedAccount data model.
/// </summary>
typedef struct PFPlayStreamPlayerLinkedAccount
{
    /// <summary>
    /// (Optional) Linked account's email.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Authentication platform.
    /// </summary>
    PFLoginIdentityProvider const* platform;

    /// <summary>
    /// (Optional) Platform user identifier.
    /// </summary>
    const char* platformUserId;

    /// <summary>
    /// (Optional) Linked account's username.
    /// </summary>
    const char* username;

} PFPlayStreamPlayerLinkedAccount;

/// <summary>
/// PFPlayStreamPlayerLocation data model.
/// </summary>
typedef struct PFPlayStreamPlayerLocation
{
    /// <summary>
    /// (Optional) City of the player's geographic location.
    /// </summary>
    const char* city;

    /// <summary>
    /// The two-character continent code for this location.
    /// </summary>
    PFContinentCode continentCode;

    /// <summary>
    /// The two-character ISO 3166-1 country code for the country associated with the location.
    /// </summary>
    PFCountryCode countryCode;

    /// <summary>
    /// (Optional) Latitude coordinate of the player's geographic location.
    /// </summary>
    double const* latitude;

    /// <summary>
    /// (Optional) Longitude coordinate of the player's geographic location.
    /// </summary>
    double const* longitude;

} PFPlayStreamPlayerLocation;

/// <summary>
/// PFPlayStreamPlayerStatistic data model.
/// </summary>
typedef struct PFPlayStreamPlayerStatistic
{
    /// <summary>
    /// (Optional) Statistic ID.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Statistic name.
    /// </summary>
    const char* name;

    /// <summary>
    /// Current statistic value.
    /// </summary>
    int32_t statisticValue;

    /// <summary>
    /// Statistic version (0 if not a versioned statistic).
    /// </summary>
    int32_t statisticVersion;

} PFPlayStreamPlayerStatistic;

/// <summary>
/// PFPlayStreamPushNotificationRegistration data model.
/// </summary>
typedef struct PFPlayStreamPushNotificationRegistration
{
    /// <summary>
    /// (Optional) Notification configured endpoint.
    /// </summary>
    const char* notificationEndpointARN;

    /// <summary>
    /// (Optional) Push notification platform.
    /// </summary>
    PFPushNotificationPlatform const* platform;

} PFPlayStreamPushNotificationRegistration;

/// <summary>
/// PFPlayStreamPlayerProfile data model.
/// </summary>
typedef struct PFPlayStreamPlayerProfile
{
    /// <summary>
    /// (Optional) Array of ad campaigns player has been attributed to.
    /// </summary>
    PFPlayStreamAdCampaignAttribution const* const* adCampaignAttributions;

    /// <summary>
    /// Count of adCampaignAttributions
    /// </summary>
    uint32_t adCampaignAttributionsCount;

    /// <summary>
    /// (Optional) Image URL of the player's avatar.
    /// </summary>
    const char* avatarUrl;

    /// <summary>
    /// (Optional) Banned until UTC Date. If permanent ban this is set for 20 years after the original
    /// ban date.
    /// </summary>
    time_t const* bannedUntil;

    /// <summary>
    /// (Optional) Array of contact email addresses associated with the player.
    /// </summary>
    PFPlayStreamContactEmailInfo const* const* contactEmailAddresses;

    /// <summary>
    /// Count of contactEmailAddresses
    /// </summary>
    uint32_t contactEmailAddressesCount;

    /// <summary>
    /// (Optional) Player record created.
    /// </summary>
    time_t const* created;

    /// <summary>
    /// (Optional) Player Display Name.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) Last login.
    /// </summary>
    time_t const* lastLogin;

    /// <summary>
    /// (Optional) Array of third party accounts linked to this player.
    /// </summary>
    PFPlayStreamPlayerLinkedAccount const* const* linkedAccounts;

    /// <summary>
    /// Count of linkedAccounts
    /// </summary>
    uint32_t linkedAccountsCount;

    /// <summary>
    /// (Optional) Dictionary of player's locations by type.
    /// </summary>
    struct PFPlayStreamPlayerLocationDictionaryEntry const* locations;

    /// <summary>
    /// Count of locations
    /// </summary>
    uint32_t locationsCount;

    /// <summary>
    /// (Optional) Player account origination.
    /// </summary>
    PFLoginIdentityProvider const* origination;

    /// <summary>
    /// (Optional) List of player variants for experimentation.
    /// </summary>
    const char* const* playerExperimentVariants;

    /// <summary>
    /// Count of playerExperimentVariants
    /// </summary>
    uint32_t playerExperimentVariantsCount;

    /// <summary>
    /// (Optional) PlayFab Player ID.
    /// </summary>
    const char* playerId;

    /// <summary>
    /// (Optional) Array of player statistics.
    /// </summary>
    PFPlayStreamPlayerStatistic const* const* playerStatistics;

    /// <summary>
    /// Count of playerStatistics
    /// </summary>
    uint32_t playerStatisticsCount;

    /// <summary>
    /// (Optional) Publisher this player belongs to.
    /// </summary>
    const char* publisherId;

    /// <summary>
    /// (Optional) Array of configured push notification end points.
    /// </summary>
    PFPlayStreamPushNotificationRegistration const* const* pushNotificationRegistrations;

    /// <summary>
    /// Count of pushNotificationRegistrations
    /// </summary>
    uint32_t pushNotificationRegistrationsCount;

    /// <summary>
    /// (Optional) Dictionary of player's statistics using only the latest version's value.
    /// </summary>
    struct PFInt32DictionaryEntry const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

    /// <summary>
    /// (Optional) List of player's tags for segmentation.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

    /// <summary>
    /// (Optional) Title ID this profile applies to.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) A sum of player's total purchases in USD across all currencies.
    /// </summary>
    uint32_t const* totalValueToDateInUSD;

    /// <summary>
    /// (Optional) Dictionary of player's total purchases by currency.
    /// </summary>
    struct PFUint32DictionaryEntry const* valuesToDate;

    /// <summary>
    /// Count of valuesToDate
    /// </summary>
    uint32_t valuesToDateCount;

    /// <summary>
    /// (Optional) Dictionary of player's virtual currency balances.
    /// </summary>
    struct PFInt32DictionaryEntry const* virtualCurrencyBalances;

    /// <summary>
    /// Count of virtualCurrencyBalances
    /// </summary>
    uint32_t virtualCurrencyBalancesCount;

} PFPlayStreamPlayerProfile;

/// <summary>
/// PFPlayStreamGetPlayersInSegmentResult data model.
/// </summary>
typedef struct PFPlayStreamGetPlayersInSegmentResult
{
    /// <summary>
    /// (Optional) Continuation token to use to retrieve subsequent pages of results. If token returns
    /// null there are no more results.
    /// </summary>
    const char* continuationToken;

    /// <summary>
    /// (Optional) Array of player profiles in this segment.
    /// </summary>
    PFPlayStreamPlayerProfile const* const* playerProfiles;

    /// <summary>
    /// Count of playerProfiles
    /// </summary>
    uint32_t playerProfilesCount;

    /// <summary>
    /// Count of profiles matching this segment.
    /// </summary>
    int32_t profilesInSegment;

} PFPlayStreamGetPlayersInSegmentResult;

/// <summary>
/// PFPlayStreamGetPlayerTagsRequest data model. This API will return a list of canonical tags which
/// includes both namespace and tag's name. If namespace is not provided, the result is a list of all
/// canonical tags. TagName can be used for segmentation and Namespace is limited to 128 characters.
/// </summary>
typedef struct PFPlayStreamGetPlayerTagsRequest
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
    /// (Optional) Optional namespace to filter results by.
    /// </summary>
    const char* playfabNamespace;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PFPlayStreamGetPlayerTagsRequest;

/// <summary>
/// PFPlayStreamGetPlayerTagsResult data model.
/// </summary>
typedef struct PFPlayStreamGetPlayerTagsResult
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Canonical tags (including namespace and tag's name) for the requested user.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PFPlayStreamGetPlayerTagsResult;

/// <summary>
/// PFPlayStreamRemovePlayerTagRequest data model. This API will trigger a player_tag_removed event and
/// remove a tag with the given TagName and PlayFabID from the corresponding player profile. TagName can
/// be used for segmentation and it is limited to 256 characters.
/// </summary>
typedef struct PFPlayStreamRemovePlayerTagRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique tag for player profile.
    /// </summary>
    const char* tagName;

} PFPlayStreamRemovePlayerTagRequest;

/// <summary>
/// PFPlayStreamEventContents data model.
/// </summary>
typedef struct PFPlayStreamEventContents
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the event (e.g. build number, external trace
    /// identifiers, etc.). Before an event is written, this collection and the base request custom tags
    /// will be merged, but not overriden. This enables the caller to specify static tags and per event
    /// tags.
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Entity associated with the event. If null, the event will apply to the calling entity.
    /// </summary>
    PFEntityKey const* entity;

    /// <summary>
    /// The namespace in which the event is defined. Allowed namespaces can vary by API.
    /// </summary>
    const char* eventNamespace;

    /// <summary>
    /// The name of this event.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) The original unique identifier associated with this event before it was posted to
    /// PlayFab. The value might differ from the EventId value, which is assigned when the event is received
    /// by the server.
    /// </summary>
    const char* originalId;

    /// <summary>
    /// (Optional) The time (in UTC) associated with this event when it occurred. If specified, this
    /// value is stored in the OriginalTimestamp property of the PlayStream event.
    /// </summary>
    time_t const* originalTimestamp;

    /// <summary>
    /// (Optional) Arbitrary data associated with the event. Only one of Payload or PayloadJSON is allowed.
    /// </summary>
    PFJsonObject payload;

    /// <summary>
    /// (Optional) Arbitrary data associated with the event, represented as a JSON serialized string.
    /// Only one of Payload or PayloadJSON is allowed.
    /// </summary>
    const char* payloadJSON;

} PFPlayStreamEventContents;

/// <summary>
/// PFPlayStreamWriteEventsRequest data model.
/// </summary>
typedef struct PFPlayStreamWriteEventsRequest
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
    /// Collection of events to write to PlayStream.
    /// </summary>
    PFPlayStreamEventContents const* const* events;

    /// <summary>
    /// Count of events
    /// </summary>
    uint32_t eventsCount;

} PFPlayStreamWriteEventsRequest;

/// <summary>
/// PFPlayStreamWriteEventsResponse data model.
/// </summary>
typedef struct PFPlayStreamWriteEventsResponse
{
    /// <summary>
    /// (Optional) The unique identifiers assigned by the server to the events, in the same order as
    /// the events in the request. Only returned if FlushToPlayStream option is true.
    /// </summary>
    const char* const* assignedEventIds;

    /// <summary>
    /// Count of assignedEventIds
    /// </summary>
    uint32_t assignedEventIdsCount;

} PFPlayStreamWriteEventsResponse;

/// <summary>
/// Dictionary entry for an associative array with PFPlayStreamPlayerLocation values.
/// </summary>
typedef struct PFPlayStreamPlayerLocationDictionaryEntry
{
    const char* key;
    PFPlayStreamPlayerLocation const* value;
} PFPlayStreamPlayerLocationDictionaryEntry;

#pragma pop_macro("IN")

}
