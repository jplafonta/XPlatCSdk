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
/// AdActivity enum.
/// </summary>
enum class PlayFabClientAdActivity : uint32_t
{
    Opened,
    Closed,
    Start,
    End
};

/// <summary>
/// CloudScriptRevisionOption enum.
/// </summary>
enum class PlayFabClientCloudScriptRevisionOption : uint32_t
{
    Live,
    Latest,
    Specific
};

/// <summary>
/// GameInstanceState enum.
/// </summary>
enum class PlayFabClientGameInstanceState : uint32_t
{
    Open,
    Closed
};

/// <summary>
/// MatchmakeStatus enum.
/// </summary>
enum class PlayFabClientMatchmakeStatus : uint32_t
{
    Complete,
    Waiting,
    GameNotFound,
    NoAvailableSlots,
    SessionClosed
};

/// <summary>
/// Region enum.
/// </summary>
enum class PlayFabClientRegion : uint32_t
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
/// SourceType enum.
/// </summary>
enum class PlayFabClientSourceType : uint32_t
{
    Admin,
    BackEnd,
    GameClient,
    GameServer,
    Partner,
    Custom,
    API
};

/// <summary>
/// TradeStatus enum.
/// </summary>
enum class PlayFabClientTradeStatus : uint32_t
{
    Invalid,
    Opening,
    Open,
    Accepting,
    Accepted,
    Filled,
    Cancelled
};

/// <summary>
/// TransactionStatus enum.
/// </summary>
enum class PlayFabClientTransactionStatus : uint32_t
{
    CreateCart,
    Init,
    Approved,
    Succeeded,
    FailedByProvider,
    DisputePending,
    RefundPending,
    Refunded,
    RefundFailed,
    ChargedBack,
    FailedByUber,
    FailedByPlayFab,
    Revoked,
    TradePending,
    Traded,
    Upgraded,
    StackPending,
    Stacked,
    Other,
    Failed
};

/// <summary>
/// PlayFabClientAcceptTradeRequest data model. Request object for PlayFabClientAcceptTradeAsync.
/// </summary>
typedef struct PlayFabClientAcceptTradeRequest
{
    /// <summary>
    /// (Optional) Items from the accepting player's inventory in exchange for the offered items in the
    /// trade. In the case of a gift, this will be null.
    /// </summary>
    const char* const* acceptedInventoryInstanceIds;

    /// <summary>
    /// Count of acceptedInventoryInstanceIds
    /// </summary>
    uint32_t acceptedInventoryInstanceIdsCount;

    /// <summary>
    /// Player who opened the trade.
    /// </summary>
    const char* offeringPlayerId;

    /// <summary>
    /// Trade identifier.
    /// </summary>
    const char* tradeId;

} PlayFabClientAcceptTradeRequest;

/// <summary>
/// PlayFabClientTradeInfo data model.
/// </summary>
typedef struct PlayFabClientTradeInfo
{
    /// <summary>
    /// (Optional) Item instances from the accepting player that are used to fulfill the trade. If null,
    /// no one has accepted the trade.
    /// </summary>
    const char* const* acceptedInventoryInstanceIds;

    /// <summary>
    /// Count of acceptedInventoryInstanceIds
    /// </summary>
    uint32_t acceptedInventoryInstanceIdsCount;

    /// <summary>
    /// (Optional) The PlayFab ID of the player who accepted the trade. If null, no one has accepted
    /// the trade.
    /// </summary>
    const char* acceptedPlayerId;

    /// <summary>
    /// (Optional) An optional list of players allowed to complete this trade. If null, anybody can complete
    /// the trade.
    /// </summary>
    const char* const* allowedPlayerIds;

    /// <summary>
    /// Count of allowedPlayerIds
    /// </summary>
    uint32_t allowedPlayerIdsCount;

    /// <summary>
    /// (Optional) If set, The UTC time when this trade was canceled.
    /// </summary>
    time_t const* cancelledAt;

    /// <summary>
    /// (Optional) If set, The UTC time when this trade was fulfilled.
    /// </summary>
    time_t const* filledAt;

    /// <summary>
    /// (Optional) If set, The UTC time when this trade was made invalid.
    /// </summary>
    time_t const* invalidatedAt;

    /// <summary>
    /// (Optional) The catalogItem Ids of the item instances being offered.
    /// </summary>
    const char* const* offeredCatalogItemIds;

    /// <summary>
    /// Count of offeredCatalogItemIds
    /// </summary>
    uint32_t offeredCatalogItemIdsCount;

    /// <summary>
    /// (Optional) The itemInstance Ids that are being offered.
    /// </summary>
    const char* const* offeredInventoryInstanceIds;

    /// <summary>
    /// Count of offeredInventoryInstanceIds
    /// </summary>
    uint32_t offeredInventoryInstanceIdsCount;

    /// <summary>
    /// (Optional) The PlayFabId for the offering player.
    /// </summary>
    const char* offeringPlayerId;

    /// <summary>
    /// (Optional) The UTC time when this trade was created.
    /// </summary>
    time_t const* openedAt;

    /// <summary>
    /// (Optional) The catalogItem Ids requested in exchange.
    /// </summary>
    const char* const* requestedCatalogItemIds;

    /// <summary>
    /// Count of requestedCatalogItemIds
    /// </summary>
    uint32_t requestedCatalogItemIdsCount;

    /// <summary>
    /// (Optional) Describes the current state of this trade.
    /// </summary>
    PlayFabClientTradeStatus const* status;

    /// <summary>
    /// (Optional) The identifier for this trade.
    /// </summary>
    const char* tradeId;

} PlayFabClientTradeInfo;

/// <summary>
/// PlayFabClientAcceptTradeResponse data model. Result payload for PlayFabClientAcceptTradeAsync.
/// </summary>
typedef struct PlayFabClientAcceptTradeResponse
{
    /// <summary>
    /// (Optional) Details about trade which was just accepted.
    /// </summary>
    PlayFabClientTradeInfo const* trade;

} PlayFabClientAcceptTradeResponse;

/// <summary>
/// PlayFabClientAddFriendRequest data model. Request object for PlayFabClientAddFriendAsync.
/// </summary>
typedef struct PlayFabClientAddFriendRequest
{
    /// <summary>
    /// (Optional) Email address of the user to attempt to add to the local user's friend list.
    /// </summary>
    const char* friendEmail;

    /// <summary>
    /// (Optional) PlayFab identifier of the user to attempt to add to the local user's friend list.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// (Optional) Title-specific display name of the user to attempt to add to the local user's friend
    /// list.
    /// </summary>
    const char* friendTitleDisplayName;

    /// <summary>
    /// (Optional) PlayFab username of the user to attempt to add to the local user's friend list.
    /// </summary>
    const char* friendUsername;

} PlayFabClientAddFriendRequest;

/// <summary>
/// PlayFabClientAddFriendResult data model. Result payload for PlayFabClientAddFriendAsync.
/// </summary>
typedef struct PlayFabClientAddFriendResult
{
    /// <summary>
    /// True if the friend request was processed successfully.
    /// </summary>
    bool created;

} PlayFabClientAddFriendResult;

/// <summary>
/// PlayFabClientGenericServiceId data model.
/// </summary>
typedef struct PlayFabClientGenericServiceId
{
    /// <summary>
    /// Name of the service for which the player has a unique identifier.
    /// </summary>
    const char* serviceName;

    /// <summary>
    /// Unique identifier of the player in that service.
    /// </summary>
    const char* userId;

} PlayFabClientGenericServiceId;

/// <summary>
/// PlayFabClientAddGenericIDRequest data model. Request object for PlayFabClientAddGenericIDAsync.
/// </summary>
typedef struct PlayFabClientAddGenericIDRequest
{
    /// <summary>
    /// Generic service identifier to add to the player account.
    /// </summary>
    PlayFabClientGenericServiceId const* genericId;

} PlayFabClientAddGenericIDRequest;

/// <summary>
/// PlayFabClientAddOrUpdateContactEmailRequest data model. This API adds a contact email to the player's
/// profile. If the player's profile already contains a contact email, it will update the contact email
/// to the email address specified. Request object for PlayFabClientAddOrUpdateContactEmailAsync.
/// </summary>
typedef struct PlayFabClientAddOrUpdateContactEmailRequest
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
    /// The new contact email to associate with the player.
    /// </summary>
    const char* emailAddress;

} PlayFabClientAddOrUpdateContactEmailRequest;

/// <summary>
/// PlayFabClientAddSharedGroupMembersRequest data model. Request object for PlayFabClientAddSharedGroupMembersAsync.
/// </summary>
typedef struct PlayFabClientAddSharedGroupMembersRequest
{
    /// <summary>
    /// An array of unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* const* playFabIds;

    /// <summary>
    /// Count of playFabIds
    /// </summary>
    uint32_t playFabIdsCount;

    /// <summary>
    /// Unique identifier for the shared group.
    /// </summary>
    const char* sharedGroupId;

} PlayFabClientAddSharedGroupMembersRequest;

/// <summary>
/// PlayFabClientAddUsernamePasswordRequest data model. Request object for PlayFabClientAddUsernamePasswordAsync.
/// </summary>
typedef struct PlayFabClientAddUsernamePasswordRequest
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
    /// User email address attached to their account.
    /// </summary>
    const char* email;

    /// <summary>
    /// Password for the PlayFab account (6-100 characters).
    /// </summary>
    const char* password;

    /// <summary>
    /// PlayFab username for the account (3-20 characters).
    /// </summary>
    const char* username;

} PlayFabClientAddUsernamePasswordRequest;

/// <summary>
/// PlayFabClientAddUsernamePasswordResult data model. Each account must have a unique username and email
/// address in the PlayFab service. Once created, the account may be associated with additional accounts
/// (Steam, Facebook, Game Center, etc.), allowing for added social network lists and achievements systems.
/// This can also be used to provide a recovery method if the user loses their original means of access.
/// Result payload for PlayFabClientAddUsernamePasswordAsync.
/// </summary>
typedef struct PlayFabClientAddUsernamePasswordResult
{
    /// <summary>
    /// (Optional) PlayFab unique user name.
    /// </summary>
    const char* username;

} PlayFabClientAddUsernamePasswordResult;

/// <summary>
/// PlayFabClientAddUserVirtualCurrencyRequest data model. This API must be enabled for use as an option
/// in the game manager website. It is disabled by default. Request object for PlayFabClientAddUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabClientAddUserVirtualCurrencyRequest
{
    /// <summary>
    /// Amount to be added to the user balance of the specified virtual currency.
    /// </summary>
    int32_t amount;

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
    /// Name of the virtual currency which is to be incremented.
    /// </summary>
    const char* virtualCurrency;

} PlayFabClientAddUserVirtualCurrencyRequest;

/// <summary>
/// PlayFabClientAdPlacementDetails data model. A single ad placement details including placement and
/// reward information.
/// </summary>
typedef struct PlayFabClientAdPlacementDetails
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

} PlayFabClientAdPlacementDetails;

/// <summary>
/// PlayFabClientAdRewardItemGranted data model. Details for each item granted.
/// </summary>
typedef struct PlayFabClientAdRewardItemGranted
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

} PlayFabClientAdRewardItemGranted;

/// <summary>
/// PlayFabClientAdRewardResults data model. Details on what was granted to the player.
/// </summary>
typedef struct PlayFabClientAdRewardResults
{
    /// <summary>
    /// (Optional) Array of the items granted to the player.
    /// </summary>
    PlayFabClientAdRewardItemGranted const* const* grantedItems;

    /// <summary>
    /// Count of grantedItems
    /// </summary>
    uint32_t grantedItemsCount;

    /// <summary>
    /// (Optional) Dictionary of virtual currencies that were granted to the player.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* grantedVirtualCurrencies;

    /// <summary>
    /// Count of grantedVirtualCurrencies
    /// </summary>
    uint32_t grantedVirtualCurrenciesCount;

    /// <summary>
    /// (Optional) Dictionary of statistics that were modified for the player.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* incrementedStatistics;

    /// <summary>
    /// Count of incrementedStatistics
    /// </summary>
    uint32_t incrementedStatisticsCount;

} PlayFabClientAdRewardResults;

/// <summary>
/// PlayFabClientAndroidDevicePushNotificationRegistrationRequest data model. More information can be
/// found on configuring your game for the Google Cloud Messaging service in the Google developer documentation,
/// here: http://developer.android.com/google/gcm/client.html. The steps to configure and send Push Notifications
/// is described in the PlayFab tutorials, here: https://docs.microsoft.com/gaming/playfab/features/engagement/push-notifications/quickstart.
/// Request object for PlayFabClientAndroidDevicePushNotificationRegistrationAsync.
/// </summary>
typedef struct PlayFabClientAndroidDevicePushNotificationRegistrationRequest
{
    /// <summary>
    /// (Optional) Message to display when confirming push notification.
    /// </summary>
    const char* confirmationMessage;

    /// <summary>
    /// Registration ID provided by the Google Cloud Messaging service when the title registered to receive
    /// push notifications (see the GCM documentation, here: http://developer.android.com/google/gcm/client.html).
    /// </summary>
    const char* deviceToken;

    /// <summary>
    /// (Optional) If true, send a test push message immediately after sucessful registration. Defaults
    /// to false.
    /// </summary>
    bool const* sendPushNotificationConfirmation;

} PlayFabClientAndroidDevicePushNotificationRegistrationRequest;

/// <summary>
/// PlayFabClientAttributeInstallRequest data model. If you have an ad attribution partner enabled, this
/// will post an install to their service to track the device. It uses the given device id to match based
/// on clicks on ads. Request object for PlayFabClientAttributeInstallAsync.
/// </summary>
typedef struct PlayFabClientAttributeInstallRequest
{
    /// <summary>
    /// (Optional) The adid for this device.
    /// </summary>
    const char* adid;

    /// <summary>
    /// (Optional) The IdentifierForAdvertisers for iOS Devices.
    /// </summary>
    const char* idfa;

} PlayFabClientAttributeInstallRequest;

/// <summary>
/// PlayFabClientCancelTradeRequest data model. Request object for PlayFabClientCancelTradeAsync.
/// </summary>
typedef struct PlayFabClientCancelTradeRequest
{
    /// <summary>
    /// Trade identifier.
    /// </summary>
    const char* tradeId;

} PlayFabClientCancelTradeRequest;

/// <summary>
/// PlayFabClientCancelTradeResponse data model. Result payload for PlayFabClientCancelTradeAsync.
/// </summary>
typedef struct PlayFabClientCancelTradeResponse
{
    /// <summary>
    /// (Optional) Details about trade which was just canceled.
    /// </summary>
    PlayFabClientTradeInfo const* trade;

} PlayFabClientCancelTradeResponse;

/// <summary>
/// PlayFabClientCartItem data model.
/// </summary>
typedef struct PlayFabClientCartItem
{
    /// <summary>
    /// (Optional) Description of the catalog item.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) Display name for the catalog item.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) Class name to which catalog item belongs.
    /// </summary>
    const char* itemClass;

    /// <summary>
    /// (Optional) Unique identifier for the catalog item.
    /// </summary>
    const char* itemId;

    /// <summary>
    /// (Optional) Unique instance identifier for this catalog item.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// (Optional) Cost of the catalog item for each applicable real world currency.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* realCurrencyPrices;

    /// <summary>
    /// Count of realCurrencyPrices
    /// </summary>
    uint32_t realCurrencyPricesCount;

    /// <summary>
    /// (Optional) Amount of each applicable virtual currency which will be received as a result of purchasing
    /// this catalog item.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* vCAmount;

    /// <summary>
    /// Count of vCAmount
    /// </summary>
    uint32_t vCAmountCount;

    /// <summary>
    /// (Optional) Cost of the catalog item for each applicable virtual currency.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* virtualCurrencyPrices;

    /// <summary>
    /// Count of virtualCurrencyPrices
    /// </summary>
    uint32_t virtualCurrencyPricesCount;

} PlayFabClientCartItem;

/// <summary>
/// PlayFabClientCatalogItemBundleInfo data model.
/// </summary>
typedef struct PlayFabClientCatalogItemBundleInfo
{
    /// <summary>
    /// (Optional) Unique ItemId values for all items which will be added to the player inventory when
    /// the bundle is added.
    /// </summary>
    const char* const* bundledItems;

    /// <summary>
    /// Count of bundledItems
    /// </summary>
    uint32_t bundledItemsCount;

    /// <summary>
    /// (Optional) Unique TableId values for all RandomResultTable objects which are part of the bundle
    /// (random tables will be resolved and add the relevant items to the player inventory when the bundle
    /// is added).
    /// </summary>
    const char* const* bundledResultTables;

    /// <summary>
    /// Count of bundledResultTables
    /// </summary>
    uint32_t bundledResultTablesCount;

    /// <summary>
    /// (Optional) Virtual currency types and balances which will be added to the player inventory when
    /// the bundle is added.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* bundledVirtualCurrencies;

    /// <summary>
    /// Count of bundledVirtualCurrencies
    /// </summary>
    uint32_t bundledVirtualCurrenciesCount;

} PlayFabClientCatalogItemBundleInfo;

/// <summary>
/// PlayFabClientCatalogItemConsumableInfo data model.
/// </summary>
typedef struct PlayFabClientCatalogItemConsumableInfo
{
    /// <summary>
    /// (Optional) Number of times this object can be used, after which it will be removed from the player
    /// inventory.
    /// </summary>
    uint32_t const* usageCount;

    /// <summary>
    /// (Optional) Duration in seconds for how long the item will remain in the player inventory - once
    /// elapsed, the item will be removed (recommended minimum value is 5 seconds, as lower values can
    /// cause the item to expire before operations depending on this item's details have completed).
    /// </summary>
    uint32_t const* usagePeriod;

    /// <summary>
    /// (Optional) All inventory item instances in the player inventory sharing a non-null UsagePeriodGroup
    /// have their UsagePeriod values added together, and share the result - when that period has elapsed,
    /// all the items in the group will be removed.
    /// </summary>
    const char* usagePeriodGroup;

} PlayFabClientCatalogItemConsumableInfo;

/// <summary>
/// PlayFabClientCatalogItemContainerInfo data model. Containers are inventory items that can hold other
/// items defined in the catalog, as well as virtual currency, which is added to the player inventory
/// when the container is unlocked, using the UnlockContainerItem API. The items can be anything defined
/// in the catalog, as well as RandomResultTable objects which will be resolved when the container is
/// unlocked. Containers and their keys should be defined as Consumable (having a limited number of uses)
/// in their catalog defintiions, unless the intent is for the player to be able to re-use them infinitely.
/// </summary>
typedef struct PlayFabClientCatalogItemContainerInfo
{
    /// <summary>
    /// (Optional) Unique ItemId values for all items which will be added to the player inventory, once
    /// the container has been unlocked.
    /// </summary>
    const char* const* itemContents;

    /// <summary>
    /// Count of itemContents
    /// </summary>
    uint32_t itemContentsCount;

    /// <summary>
    /// (Optional) ItemId for the catalog item used to unlock the container, if any (if not specified,
    /// a call to UnlockContainerItem will open the container, adding the contents to the player inventory
    /// and currency balances).
    /// </summary>
    const char* keyItemId;

    /// <summary>
    /// (Optional) Unique TableId values for all RandomResultTable objects which are part of the container
    /// (once unlocked, random tables will be resolved and add the relevant items to the player inventory).
    /// </summary>
    const char* const* resultTableContents;

    /// <summary>
    /// Count of resultTableContents
    /// </summary>
    uint32_t resultTableContentsCount;

    /// <summary>
    /// (Optional) Virtual currency types and balances which will be added to the player inventory when
    /// the container is unlocked.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* virtualCurrencyContents;

    /// <summary>
    /// Count of virtualCurrencyContents
    /// </summary>
    uint32_t virtualCurrencyContentsCount;

} PlayFabClientCatalogItemContainerInfo;

/// <summary>
/// PlayFabClientCatalogItem data model. A purchasable item from the item catalog.
/// </summary>
typedef struct PlayFabClientCatalogItem
{
    /// <summary>
    /// (Optional) Defines the bundle properties for the item - bundles are items which contain other
    /// items, including random drop tables and virtual currencies.
    /// </summary>
    PlayFabClientCatalogItemBundleInfo const* bundle;

    /// <summary>
    /// If true, then an item instance of this type can be used to grant a character to a user.
    /// </summary>
    bool canBecomeCharacter;

    /// <summary>
    /// (Optional) Catalog version for this item.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Defines the consumable properties (number of uses, timeout) for the item.
    /// </summary>
    PlayFabClientCatalogItemConsumableInfo const* consumable;

    /// <summary>
    /// (Optional) Defines the container properties for the item - what items it contains, including
    /// random drop tables and virtual currencies, and what item (if any) is required to open it via the
    /// UnlockContainerItem API.
    /// </summary>
    PlayFabClientCatalogItemContainerInfo const* container;

    /// <summary>
    /// (Optional) Game specific custom data.
    /// </summary>
    const char* customData;

    /// <summary>
    /// (Optional) Text description of item, to show in-game.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) Text name for the item, to show in-game.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// If the item has IsLImitedEdition set to true, and this is the first time this ItemId has been
    /// defined as a limited edition item, this value determines the total number of instances to allocate
    /// for the title. Once this limit has been reached, no more instances of this ItemId can be created,
    /// and attempts to purchase or grant it will return a Result of false for that ItemId. If the item
    /// has already been defined to have a limited edition count, or if this value is less than zero,
    /// it will be ignored.
    /// </summary>
    int32_t initialLimitedEditionCount;

    /// <summary>
    /// BETA: If true, then only a fixed number can ever be granted.
    /// </summary>
    bool isLimitedEdition;

    /// <summary>
    /// If true, then only one item instance of this type will exist and its remaininguses will be incremented
    /// instead. RemainingUses will cap out at Int32.Max (2,147,483,647). All subsequent increases will
    /// be discarded.
    /// </summary>
    bool isStackable;

    /// <summary>
    /// If true, then an item instance of this type can be traded between players using the trading APIs.
    /// </summary>
    bool isTradable;

    /// <summary>
    /// (Optional) Class to which the item belongs.
    /// </summary>
    const char* itemClass;

    /// <summary>
    /// Unique identifier for this item.
    /// </summary>
    const char* itemId;

    /// <summary>
    /// (Optional) URL to the item image. For Facebook purchase to display the image on the item purchase
    /// page, this must be set to an HTTP URL.
    /// </summary>
    const char* itemImageUrl;

    /// <summary>
    /// (Optional) Override prices for this item for specific currencies.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* realCurrencyPrices;

    /// <summary>
    /// Count of realCurrencyPrices
    /// </summary>
    uint32_t realCurrencyPricesCount;

    /// <summary>
    /// (Optional) List of item tags.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

    /// <summary>
    /// (Optional) Price of this item in virtual currencies and "RM" (the base Real Money purchase price,
    /// in USD pennies).
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* virtualCurrencyPrices;

    /// <summary>
    /// Count of virtualCurrencyPrices
    /// </summary>
    uint32_t virtualCurrencyPricesCount;

} PlayFabClientCatalogItem;

/// <summary>
/// PlayFabClientCharacterLeaderboardEntry data model.
/// </summary>
typedef struct PlayFabClientCharacterLeaderboardEntry
{
    /// <summary>
    /// (Optional) PlayFab unique identifier of the character that belongs to the user for this leaderboard
    /// entry.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Title-specific display name of the character for this leaderboard entry.
    /// </summary>
    const char* characterName;

    /// <summary>
    /// (Optional) Name of the character class for this entry.
    /// </summary>
    const char* characterType;

    /// <summary>
    /// (Optional) Title-specific display name of the user for this leaderboard entry.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) PlayFab unique identifier of the user for this leaderboard entry.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// User's overall position in the leaderboard.
    /// </summary>
    int32_t position;

    /// <summary>
    /// Specific value of the user's statistic.
    /// </summary>
    int32_t statValue;

} PlayFabClientCharacterLeaderboardEntry;

/// <summary>
/// PlayFabClientContainer_Dictionary_String_String data model. A data container.
/// </summary>
typedef struct PlayFabClientContainer_Dictionary_String_String
{
    /// <summary>
    /// (Optional) Content of data.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientContainer_Dictionary_String_String;

/// <summary>
/// PlayFabClientCollectionFilter data model. Collection filter to include and/or exclude collections
/// with certain key-value pairs. The filter generates a collection set defined by Includes rules and
/// then remove collections that matches the Excludes rules. A collection is considered matching a rule
/// if the rule describes a subset of the collection. .
/// </summary>
typedef struct PlayFabClientCollectionFilter
{
    /// <summary>
    /// (Optional) List of Exclude rules, with any of which if a collection matches, it is excluded by
    /// the filter.
    /// </summary>
    PlayFabClientContainer_Dictionary_String_String const* const* excludes;

    /// <summary>
    /// Count of excludes
    /// </summary>
    uint32_t excludesCount;

    /// <summary>
    /// (Optional) List of Include rules, with any of which if a collection matches, it is included by
    /// the filter, unless it is excluded by one of the Exclude rule.
    /// </summary>
    PlayFabClientContainer_Dictionary_String_String const* const* includes;

    /// <summary>
    /// Count of includes
    /// </summary>
    uint32_t includesCount;

} PlayFabClientCollectionFilter;

/// <summary>
/// PlayFabClientConfirmPurchaseRequest data model. The final step in the purchasing process, this API
/// finalizes the purchase with the payment provider, where applicable, adding virtual goods to the player
/// inventory (including random drop table resolution and recursive addition of bundled items) and adjusting
/// virtual currency balances for funds used or added. Note that this is a pull operation, and should
/// be polled regularly when a purchase is in progress. Please note that the processing time for inventory
/// grants and purchases increases fractionally the more items are in the inventory, and the more items
/// are in the grant/purchase operation. Request object for PlayFabClientConfirmPurchaseAsync.
/// </summary>
typedef struct PlayFabClientConfirmPurchaseRequest
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
    /// Purchase order identifier returned from StartPurchase.
    /// </summary>
    const char* orderId;

} PlayFabClientConfirmPurchaseRequest;

/// <summary>
/// PlayFabClientConfirmPurchaseResult data model. When the FailedByPaymentProvider error is returned,
/// it's important to check the ProviderErrorCode, ProviderErrorMessage, and ProviderErrorDetails to understand
/// the specific reason the payment was rejected, as in some rare cases, this may mean that the provider
/// hasn't completed some operation required to finalize the purchase. Result payload for PlayFabClientConfirmPurchaseAsync.
/// </summary>
typedef struct PlayFabClientConfirmPurchaseResult
{
    /// <summary>
    /// (Optional) Array of items purchased.
    /// </summary>
    PlayFabItemInstance const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

    /// <summary>
    /// (Optional) Purchase order identifier.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// Date and time of the purchase.
    /// </summary>
    time_t purchaseDate;

} PlayFabClientConfirmPurchaseResult;

/// <summary>
/// PlayFabClientConsumeItemRequest data model. Request object for PlayFabClientConsumeItemAsync.
/// </summary>
typedef struct PlayFabClientConsumeItemRequest
{
    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// Number of uses to consume from the item.
    /// </summary>
    int32_t consumeCount;

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
    /// Unique instance identifier of the item to be consumed.
    /// </summary>
    const char* itemInstanceId;

} PlayFabClientConsumeItemRequest;

/// <summary>
/// PlayFabClientConsumeItemResult data model. Result payload for PlayFabClientConsumeItemAsync.
/// </summary>
typedef struct PlayFabClientConsumeItemResult
{
    /// <summary>
    /// (Optional) Unique instance identifier of the item with uses consumed.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// Number of uses remaining on the item.
    /// </summary>
    int32_t remainingUses;

} PlayFabClientConsumeItemResult;

/// <summary>
/// PlayFabClientMicrosoftStorePayload data model.
/// </summary>
typedef struct PlayFabClientMicrosoftStorePayload
{
    /// <summary>
    /// (Optional) Microsoft store ID key. This is optional. Alternatively you can use XboxToken.
    /// </summary>
    const char* collectionsMsIdKey;

    /// <summary>
    /// (Optional) If collectionsMsIdKey is provided, this will verify the user id in the collectionsMsIdKey
    /// is the same.
    /// </summary>
    const char* userId;

    /// <summary>
    /// (Optional) Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// ""). This is optional. Alternatively can use CollectionsMsIdKey.
    /// </summary>
    const char* xboxToken;

} PlayFabClientMicrosoftStorePayload;

/// <summary>
/// PlayFabClientConsumeMicrosoftStoreEntitlementsRequest data model. Request object for PlayFabClientConsumeMicrosoftStoreEntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumeMicrosoftStoreEntitlementsRequest
{
    /// <summary>
    /// (Optional) Catalog version to use.
    /// </summary>
    const char* catalogVersion;

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
    /// Marketplace specific payload containing details to fetch in app purchase transactions.
    /// </summary>
    PlayFabClientMicrosoftStorePayload const* marketplaceSpecificData;

} PlayFabClientConsumeMicrosoftStoreEntitlementsRequest;

/// <summary>
/// PlayFabClientConsumeMicrosoftStoreEntitlementsResponse data model. Result payload for PlayFabClientConsumeMicrosoftStoreEntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumeMicrosoftStoreEntitlementsResponse
{
    /// <summary>
    /// (Optional) Details for the items purchased.
    /// </summary>
    PlayFabItemInstance const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

} PlayFabClientConsumeMicrosoftStoreEntitlementsResponse;

/// <summary>
/// PlayFabClientPlayStation5Payload data model.
/// </summary>
typedef struct PlayFabClientPlayStation5Payload
{
    /// <summary>
    /// (Optional) An optional list of entitlement ids to query against PSN.
    /// </summary>
    const char* const* ids;

    /// <summary>
    /// Count of ids
    /// </summary>
    uint32_t idsCount;

    /// <summary>
    /// (Optional) Id of the PSN service label to consume entitlements from.
    /// </summary>
    const char* serviceLabel;

} PlayFabClientPlayStation5Payload;

/// <summary>
/// PlayFabClientConsumePS5EntitlementsRequest data model. Request object for PlayFabClientConsumePS5EntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumePS5EntitlementsRequest
{
    /// <summary>
    /// (Optional) Catalog version to use.
    /// </summary>
    const char* catalogVersion;

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
    /// Marketplace specific payload containing details to fetch in app purchase transactions.
    /// </summary>
    PlayFabClientPlayStation5Payload const* marketplaceSpecificData;

} PlayFabClientConsumePS5EntitlementsRequest;

/// <summary>
/// PlayFabClientConsumePS5EntitlementsResult data model. Result payload for PlayFabClientConsumePS5EntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumePS5EntitlementsResult
{
    /// <summary>
    /// (Optional) Details for the items purchased.
    /// </summary>
    PlayFabItemInstance const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

} PlayFabClientConsumePS5EntitlementsResult;

/// <summary>
/// PlayFabClientConsumePSNEntitlementsRequest data model. Request object for PlayFabClientConsumePSNEntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumePSNEntitlementsRequest
{
    /// <summary>
    /// (Optional) Which catalog to match granted entitlements against. If null, defaults to title default
    /// catalog.
    /// </summary>
    const char* catalogVersion;

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
    /// Id of the PSN service label to consume entitlements from.
    /// </summary>
    int32_t serviceLabel;

} PlayFabClientConsumePSNEntitlementsRequest;

/// <summary>
/// PlayFabClientConsumePSNEntitlementsResult data model. Result payload for PlayFabClientConsumePSNEntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumePSNEntitlementsResult
{
    /// <summary>
    /// (Optional) Array of items granted to the player as a result of consuming entitlements.
    /// </summary>
    PlayFabItemInstance const* const* itemsGranted;

    /// <summary>
    /// Count of itemsGranted
    /// </summary>
    uint32_t itemsGrantedCount;

} PlayFabClientConsumePSNEntitlementsResult;

/// <summary>
/// PlayFabClientConsumeXboxEntitlementsRequest data model. Request object for PlayFabClientConsumeXboxEntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumeXboxEntitlementsRequest
{
    /// <summary>
    /// (Optional) Catalog version to use.
    /// </summary>
    const char* catalogVersion;

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
    /// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// "").
    /// </summary>
    const char* xboxToken;

} PlayFabClientConsumeXboxEntitlementsRequest;

/// <summary>
/// PlayFabClientConsumeXboxEntitlementsResult data model. Result payload for PlayFabClientConsumeXboxEntitlementsAsync.
/// </summary>
typedef struct PlayFabClientConsumeXboxEntitlementsResult
{
    /// <summary>
    /// (Optional) Details for the items purchased.
    /// </summary>
    PlayFabItemInstance const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

} PlayFabClientConsumeXboxEntitlementsResult;

/// <summary>
/// PlayFabClientCreateSharedGroupRequest data model. If SharedGroupId is specified, the service will
/// attempt to create a group with that identifier, and will return an error if it is already in use.
/// If no SharedGroupId is specified, a random identifier will be assigned. Request object for PlayFabClientCreateSharedGroupAsync.
/// </summary>
typedef struct PlayFabClientCreateSharedGroupRequest
{
    /// <summary>
    /// (Optional) Unique identifier for the shared group (a random identifier will be assigned, if one
    /// is not specified).
    /// </summary>
    const char* sharedGroupId;

} PlayFabClientCreateSharedGroupRequest;

/// <summary>
/// PlayFabClientCreateSharedGroupResult data model. Result payload for PlayFabClientCreateSharedGroupAsync.
/// </summary>
typedef struct PlayFabClientCreateSharedGroupResult
{
    /// <summary>
    /// (Optional) Unique identifier for the shared group.
    /// </summary>
    const char* sharedGroupId;

} PlayFabClientCreateSharedGroupResult;

/// <summary>
/// PlayFabClientCurrentGamesRequest data model. Request object for PlayFabClientGetCurrentGamesAsync.
/// </summary>
typedef struct PlayFabClientCurrentGamesRequest
{
    /// <summary>
    /// (Optional) Build to match against.
    /// </summary>
    const char* buildVersion;

    /// <summary>
    /// (Optional) Game mode to look for.
    /// </summary>
    const char* gameMode;

    /// <summary>
    /// (Optional) Region to check for Game Server Instances.
    /// </summary>
    PlayFabClientRegion const* region;

    /// <summary>
    /// (Optional) Statistic name to find statistic-based matches.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) Filter to include and/or exclude Game Server Instances associated with certain tags.
    /// </summary>
    PlayFabClientCollectionFilter const* tagFilter;

} PlayFabClientCurrentGamesRequest;

/// <summary>
/// PlayFabClientGameInfo data model.
/// </summary>
typedef struct PlayFabClientGameInfo
{
    /// <summary>
    /// (Optional) Build version this server is running.
    /// </summary>
    const char* buildVersion;

    /// <summary>
    /// (Optional) Game mode this server is running.
    /// </summary>
    const char* gameMode;

    /// <summary>
    /// (Optional) Game session custom data.
    /// </summary>
    const char* gameServerData;

    /// <summary>
    /// (Optional) Game specific string denoting server configuration.
    /// </summary>
    PlayFabClientGameInstanceState const* gameServerStateEnum;

    /// <summary>
    /// (Optional) Last heartbeat of the game server instance, used in external game server provider
    /// mode.
    /// </summary>
    time_t const* lastHeartbeat;

    /// <summary>
    /// (Optional) Unique lobby identifier for this game server.
    /// </summary>
    const char* lobbyID;

    /// <summary>
    /// (Optional) Maximum players this server can support.
    /// </summary>
    int32_t const* maxPlayers;

    /// <summary>
    /// (Optional) Array of current player IDs on this server.
    /// </summary>
    const char* const* playerUserIds;

    /// <summary>
    /// Count of playerUserIds
    /// </summary>
    uint32_t playerUserIdsCount;

    /// <summary>
    /// (Optional) Region to which this server is associated.
    /// </summary>
    PlayFabClientRegion const* region;

    /// <summary>
    /// Duration in seconds this server has been running.
    /// </summary>
    uint32_t runTime;

    /// <summary>
    /// (Optional) IPV4 address of the server.
    /// </summary>
    const char* serverIPV4Address;

    /// <summary>
    /// (Optional) IPV6 address of the server.
    /// </summary>
    const char* serverIPV6Address;

    /// <summary>
    /// (Optional) Port number to use for non-http communications with the server.
    /// </summary>
    int32_t const* serverPort;

    /// <summary>
    /// (Optional) Public DNS name (if any) of the server.
    /// </summary>
    const char* serverPublicDNSName;

    /// <summary>
    /// (Optional) Stastic used to match this game in player statistic matchmaking.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) Game session tags.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PlayFabClientGameInfo;

/// <summary>
/// PlayFabClientCurrentGamesResult data model. Result payload for PlayFabClientGetCurrentGamesAsync.
/// </summary>
typedef struct PlayFabClientCurrentGamesResult
{
    /// <summary>
    /// Number of games running.
    /// </summary>
    int32_t gameCount;

    /// <summary>
    /// (Optional) Array of games found.
    /// </summary>
    PlayFabClientGameInfo const* const* games;

    /// <summary>
    /// Count of games
    /// </summary>
    uint32_t gamesCount;

    /// <summary>
    /// Total number of players across all servers.
    /// </summary>
    int32_t playerCount;

} PlayFabClientCurrentGamesResult;

/// <summary>
/// PlayFabClientDeviceInfoRequest data model. Any arbitrary information collected by the device. Request
/// object for PlayFabClientReportDeviceInfoAsync.
/// </summary>
typedef struct PlayFabClientDeviceInfoRequest
{
    /// <summary>
    /// (Optional) Information posted to the PlayStream Event. Currently arbitrary, and specific to the
    /// environment sending it.
    /// </summary>
    PlayFabJsonObject info;

} PlayFabClientDeviceInfoRequest;

/// <summary>
/// PlayFabClientExecuteCloudScriptRequest data model. Request object for PlayFabClientExecuteCloudScriptAsync.
/// </summary>
typedef struct PlayFabClientExecuteCloudScriptRequest
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
    /// The name of the CloudScript function to execute.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) Object that is passed in to the function as the first argument.
    /// </summary>
    PlayFabJsonObject functionParameter;

    /// <summary>
    /// (Optional) Generate a 'player_executed_cloudscript' PlayStream event containing the results of
    /// the function execution and other contextual information. This event will show up in the PlayStream
    /// debugger console for the player in Game Manager.
    /// </summary>
    bool const* generatePlayStreamEvent;

    /// <summary>
    /// (Optional) Option for which revision of the CloudScript to execute. 'Latest' executes the most
    /// recently created revision, 'Live' executes the current live, published revision, and 'Specific'
    /// executes the specified revision. The default value is 'Specific', if the SpeificRevision parameter
    /// is specified, otherwise it is 'Live'.
    /// </summary>
    PlayFabClientCloudScriptRevisionOption const* revisionSelection;

    /// <summary>
    /// (Optional) The specivic revision to execute, when RevisionSelection is set to 'Specific'.
    /// </summary>
    int32_t const* specificRevision;

} PlayFabClientExecuteCloudScriptRequest;

/// <summary>
/// PlayFabClientScriptExecutionError data model.
/// </summary>
typedef struct PlayFabClientScriptExecutionError
{
    /// <summary>
    /// (Optional) Error code, such as CloudScriptNotFound, JavascriptException, CloudScriptFunctionArgumentSizeExceeded,
    /// CloudScriptAPIRequestCountExceeded, CloudScriptAPIRequestError, or CloudScriptHTTPRequestError.
    /// </summary>
    const char* error;

    /// <summary>
    /// (Optional) Details about the error.
    /// </summary>
    const char* message;

    /// <summary>
    /// (Optional) Point during the execution of the script at which the error occurred, if any.
    /// </summary>
    const char* stackTrace;

} PlayFabClientScriptExecutionError;

/// <summary>
/// PlayFabClientLogStatement data model.
/// </summary>
typedef struct PlayFabClientLogStatement
{
    /// <summary>
    /// (Optional) Optional object accompanying the message as contextual information.
    /// </summary>
    PlayFabJsonObject data;

    /// <summary>
    /// (Optional) 'Debug', 'Info', or 'Error'.
    /// </summary>
    const char* level;

    /// <summary>
    /// (Optional) Message property.
    /// </summary>
    const char* message;

} PlayFabClientLogStatement;

/// <summary>
/// PlayFabClientExecuteCloudScriptResult data model. Result payload for PlayFabClientExecuteCloudScriptAsync.
/// </summary>
typedef struct PlayFabClientExecuteCloudScriptResult
{
    /// <summary>
    /// Number of PlayFab API requests issued by the CloudScript function.
    /// </summary>
    int32_t aPIRequestsIssued;

    /// <summary>
    /// (Optional) Information about the error, if any, that occurred during execution.
    /// </summary>
    PlayFabClientScriptExecutionError const* error;

    /// <summary>
    /// ExecutionTimeSeconds property.
    /// </summary>
    double executionTimeSeconds;

    /// <summary>
    /// (Optional) The name of the function that executed.
    /// </summary>
    const char* functionName;

    /// <summary>
    /// (Optional) The object returned from the CloudScript function, if any.
    /// </summary>
    PlayFabJsonObject functionResult;

    /// <summary>
    /// (Optional) Flag indicating if the FunctionResult was too large and was subsequently dropped from
    /// this event. This only occurs if the total event size is larger than 350KB.
    /// </summary>
    bool const* functionResultTooLarge;

    /// <summary>
    /// Number of external HTTP requests issued by the CloudScript function.
    /// </summary>
    int32_t httpRequestsIssued;

    /// <summary>
    /// (Optional) Entries logged during the function execution. These include both entries logged in
    /// the function code using log.info() and log.error() and error entries for API and HTTP request
    /// failures.
    /// </summary>
    PlayFabClientLogStatement const* const* logs;

    /// <summary>
    /// Count of logs
    /// </summary>
    uint32_t logsCount;

    /// <summary>
    /// (Optional) Flag indicating if the logs were too large and were subsequently dropped from this
    /// event. This only occurs if the total event size is larger than 350KB after the FunctionResult
    /// was removed.
    /// </summary>
    bool const* logsTooLarge;

    /// <summary>
    /// MemoryConsumedBytes property.
    /// </summary>
    uint32_t memoryConsumedBytes;

    /// <summary>
    /// Processor time consumed while executing the function. This does not include time spent waiting
    /// on API calls or HTTP requests.
    /// </summary>
    double processorTimeSeconds;

    /// <summary>
    /// The revision of the CloudScript that executed.
    /// </summary>
    int32_t revision;

} PlayFabClientExecuteCloudScriptResult;

/// <summary>
/// PlayFabClientFacebookInstantGamesPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientFacebookInstantGamesPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique Facebook Instant Games identifier for a user.
    /// </summary>
    const char* facebookInstantGamesId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Facebook Instant Games identifier.
    /// </summary>
    const char* playFabId;

} PlayFabClientFacebookInstantGamesPlayFabIdPair;

/// <summary>
/// PlayFabClientFacebookPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientFacebookPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique Facebook identifier for a user.
    /// </summary>
    const char* facebookId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Facebook identifier.
    /// </summary>
    const char* playFabId;

} PlayFabClientFacebookPlayFabIdPair;

/// <summary>
/// PlayFabClientFriendInfo data model.
/// </summary>
typedef struct PlayFabClientFriendInfo
{
    /// <summary>
    /// (Optional) Available Facebook information (if the user and PlayFab friend are also connected
    /// in Facebook).
    /// </summary>
    PlayFabUserFacebookInfo const* facebookInfo;

    /// <summary>
    /// (Optional) PlayFab unique identifier for this friend.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// (Optional) Available Game Center information (if the user and PlayFab friend are also connected
    /// in Game Center).
    /// </summary>
    PlayFabUserGameCenterInfo const* gameCenterInfo;

    /// <summary>
    /// (Optional) The profile of the user, if requested.
    /// </summary>
    PlayFabPlayerProfileModel const* profile;

    /// <summary>
    /// (Optional) Available PSN information, if the user and PlayFab friend are both connected to PSN.
    /// </summary>
    PlayFabUserPsnInfo const* PSNInfo;

    /// <summary>
    /// (Optional) Available Steam information (if the user and PlayFab friend are also connected in
    /// Steam).
    /// </summary>
    PlayFabUserSteamInfo const* steamInfo;

    /// <summary>
    /// (Optional) Tags which have been associated with this friend.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

    /// <summary>
    /// (Optional) Title-specific display name for this friend.
    /// </summary>
    const char* titleDisplayName;

    /// <summary>
    /// (Optional) PlayFab unique username for this friend.
    /// </summary>
    const char* username;

    /// <summary>
    /// (Optional) Available Xbox information, if the user and PlayFab friend are both connected to Xbox
    /// Live.
    /// </summary>
    PlayFabUserXboxInfo const* xboxInfo;

} PlayFabClientFriendInfo;

/// <summary>
/// PlayFabClientGameCenterPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientGameCenterPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique Game Center identifier for a user.
    /// </summary>
    const char* gameCenterId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Game Center identifier.
    /// </summary>
    const char* playFabId;

} PlayFabClientGameCenterPlayFabIdPair;

/// <summary>
/// PlayFabClientGameServerRegionsRequest data model. Request object for PlayFabClientGetGameServerRegionsAsync.
/// </summary>
typedef struct PlayFabClientGameServerRegionsRequest
{
    /// <summary>
    /// Version of game server for which stats are being requested.
    /// </summary>
    const char* buildVersion;

    /// <summary>
    /// (Optional) Unique identifier for the title, found in the Settings > Game Properties section of
    /// the PlayFab developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientGameServerRegionsRequest;

/// <summary>
/// PlayFabClientRegionInfo data model.
/// </summary>
typedef struct PlayFabClientRegionInfo
{
    /// <summary>
    /// Indicates whether the server specified is available in this region.
    /// </summary>
    bool available;

    /// <summary>
    /// (Optional) Name of the region.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Url to ping to get roundtrip time.
    /// </summary>
    const char* pingUrl;

    /// <summary>
    /// (Optional) Unique identifier for the region.
    /// </summary>
    PlayFabClientRegion const* region;

} PlayFabClientRegionInfo;

/// <summary>
/// PlayFabClientGameServerRegionsResult data model. Result payload for PlayFabClientGetGameServerRegionsAsync.
/// </summary>
typedef struct PlayFabClientGameServerRegionsResult
{
    /// <summary>
    /// (Optional) Array of regions found matching the request parameters.
    /// </summary>
    PlayFabClientRegionInfo const* const* regions;

    /// <summary>
    /// Count of regions
    /// </summary>
    uint32_t regionsCount;

} PlayFabClientGameServerRegionsResult;

/// <summary>
/// PlayFabClientGenericPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientGenericPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique generic service identifier for a user.
    /// </summary>
    PlayFabClientGenericServiceId const* genericId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// given generic identifier.
    /// </summary>
    const char* playFabId;

} PlayFabClientGenericPlayFabIdPair;

/// <summary>
/// PlayFabClientGetAccountInfoRequest data model. Request object for PlayFabClientGetAccountInfoAsync.
/// </summary>
typedef struct PlayFabClientGetAccountInfoRequest
{
    /// <summary>
    /// (Optional) User email address for the account to find (if no Username is specified).
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Unique PlayFab identifier of the user whose info is being requested. Optional, defaults
    /// to the authenticated user if no other lookup identifier set.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Title-specific username for the account to find (if no Email is set). Note that if
    /// the non-unique Title Display Names option is enabled for the title, attempts to look up users
    /// by Title Display Name will always return AccountNotFound.
    /// </summary>
    const char* titleDisplayName;

    /// <summary>
    /// (Optional) PlayFab Username for the account to find (if no PlayFabId is specified).
    /// </summary>
    const char* username;

} PlayFabClientGetAccountInfoRequest;

/// <summary>
/// PlayFabClientGetAccountInfoResult data model. This API retrieves details regarding the player in
/// the PlayFab service. Note that when this call is used to retrieve data about another player (not the
/// one signed into the local client), some data, such as Personally Identifying Information (PII), will
/// be omitted for privacy reasons or to comply with the requirements of the platform belongs to. The
/// user account returned will be based on the identifier provided in priority order: PlayFabId, Username,
/// Email, then TitleDisplayName. If no identifier is specified, the currently signed in user's information
/// will be returned. Result payload for PlayFabClientGetAccountInfoAsync.
/// </summary>
typedef struct PlayFabClientGetAccountInfoResult
{
    /// <summary>
    /// (Optional) Account information for the local user.
    /// </summary>
    PlayFabUserAccountInfo const* accountInfo;

} PlayFabClientGetAccountInfoResult;

/// <summary>
/// PlayFabClientNameIdentifier data model. Identifier by either name or ID. Note that a name may change
/// due to renaming, or reused after being deleted. ID is immutable and unique.
/// </summary>
typedef struct PlayFabClientNameIdentifier
{
    /// <summary>
    /// (Optional) Id Identifier, if present.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Name Identifier, if present.
    /// </summary>
    const char* name;

} PlayFabClientNameIdentifier;

/// <summary>
/// PlayFabClientGetAdPlacementsRequest data model. Using an AppId to return a list of valid ad placements
/// for a player. Request object for PlayFabClientGetAdPlacementsAsync.
/// </summary>
typedef struct PlayFabClientGetAdPlacementsRequest
{
    /// <summary>
    /// The current AppId to use.
    /// </summary>
    const char* appId;

    /// <summary>
    /// (Optional) Using the name or unique identifier, filter the result for get a specific placement.
    /// </summary>
    PlayFabClientNameIdentifier const* identifier;

} PlayFabClientGetAdPlacementsRequest;

/// <summary>
/// PlayFabClientGetAdPlacementsResult data model. Array of AdPlacementDetails. Result payload for PlayFabClientGetAdPlacementsAsync.
/// </summary>
typedef struct PlayFabClientGetAdPlacementsResult
{
    /// <summary>
    /// (Optional) Array of results.
    /// </summary>
    PlayFabClientAdPlacementDetails const* const* adPlacements;

    /// <summary>
    /// Count of adPlacements
    /// </summary>
    uint32_t adPlacementsCount;

} PlayFabClientGetAdPlacementsResult;

/// <summary>
/// PlayFabClientGetCatalogItemsRequest data model. Request object for PlayFabClientGetCatalogItemsAsync.
/// </summary>
typedef struct PlayFabClientGetCatalogItemsRequest
{
    /// <summary>
    /// (Optional) Which catalog is being requested. If null, uses the default catalog.
    /// </summary>
    const char* catalogVersion;

} PlayFabClientGetCatalogItemsRequest;

/// <summary>
/// PlayFabClientGetCatalogItemsResult data model. If CatalogVersion is not specified, only inventory
/// items associated with the most recent version of the catalog will be returned. Result payload for
/// PlayFabClientGetCatalogItemsAsync.
/// </summary>
typedef struct PlayFabClientGetCatalogItemsResult
{
    /// <summary>
    /// (Optional) Array of items which can be purchased.
    /// </summary>
    PlayFabClientCatalogItem const* const* catalog;

    /// <summary>
    /// Count of catalog
    /// </summary>
    uint32_t catalogCount;

} PlayFabClientGetCatalogItemsResult;

/// <summary>
/// PlayFabClientGetCharacterDataRequest data model. Data is stored as JSON key-value pairs. If the Keys
/// parameter is provided, the data object returned will only contain the data specific to the indicated
/// Keys. Otherwise, the full set of custom character data will be returned. Request object for PlayFabClientGetCharacterDataAsync
/// and PlayFabClientGetCharacterReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterDataRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) The version that currently exists according to the caller. The call will return the
    /// data for all of the keys if the version in the system is greater than this.
    /// </summary>
    uint32_t const* ifChangedFromDataVersion;

    /// <summary>
    /// (Optional) Specific keys to search for in the custom user data.
    /// </summary>
    const char* const* keys;

    /// <summary>
    /// Count of keys
    /// </summary>
    uint32_t keysCount;

    /// <summary>
    /// (Optional) Unique PlayFab identifier of the user to load data for. Optional, defaults to yourself
    /// if not set.
    /// </summary>
    const char* playFabId;

} PlayFabClientGetCharacterDataRequest;

/// <summary>
/// PlayFabClientGetCharacterDataResult data model. Result payload for PlayFabClientGetCharacterDataAsync
/// and PlayFabClientGetCharacterReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterDataResult
{
    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) User specific data for this title.
    /// </summary>
    struct PlayFabUserDataRecordDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

    /// <summary>
    /// Indicates the current version of the data that has been set. This is incremented with every set
    /// call for that type of data (read-only, internal, etc). This version can be provided in Get calls
    /// to find updated data.
    /// </summary>
    uint32_t dataVersion;

} PlayFabClientGetCharacterDataResult;

/// <summary>
/// PlayFabClientGetCharacterInventoryRequest data model. All items currently in the character inventory
/// will be returned, irrespective of how they were acquired (via purchasing, grants, coupons, etc.).
/// Items that are expired, fully consumed, or are no longer valid are not considered to be in the user's
/// current inventory, and so will not be not included. Also returns their virtual currency balances.
/// Request object for PlayFabClientGetCharacterInventoryAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterInventoryRequest
{
    /// <summary>
    /// (Optional) Used to limit results to only those from a specific catalog version.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientGetCharacterInventoryRequest;

/// <summary>
/// PlayFabClientGetCharacterInventoryResult data model. Result payload for PlayFabClientGetCharacterInventoryAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterInventoryResult
{
    /// <summary>
    /// (Optional) Unique identifier of the character for this inventory.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Array of inventory items belonging to the character.
    /// </summary>
    PlayFabItemInstance const* const* inventory;

    /// <summary>
    /// Count of inventory
    /// </summary>
    uint32_t inventoryCount;

    /// <summary>
    /// (Optional) Array of virtual currency balance(s) belonging to the character.
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

} PlayFabClientGetCharacterInventoryResult;

/// <summary>
/// PlayFabClientGetCharacterLeaderboardRequest data model. Request object for PlayFabClientGetCharacterLeaderboardAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterLeaderboardRequest
{
    /// <summary>
    /// (Optional) Optional character type on which to filter the leaderboard entries.
    /// </summary>
    const char* characterType;

    /// <summary>
    /// (Optional) Maximum number of entries to retrieve. Default 10, maximum 100.
    /// </summary>
    int32_t const* maxResultsCount;

    /// <summary>
    /// First entry in the leaderboard to be retrieved.
    /// </summary>
    int32_t startPosition;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

} PlayFabClientGetCharacterLeaderboardRequest;

/// <summary>
/// PlayFabClientGetCharacterLeaderboardResult data model. Note that the Position of the character in
/// the results is for the overall leaderboard. Result payload for PlayFabClientGetCharacterLeaderboardAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterLeaderboardResult
{
    /// <summary>
    /// (Optional) Ordered list of leaderboard entries.
    /// </summary>
    PlayFabClientCharacterLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

} PlayFabClientGetCharacterLeaderboardResult;

/// <summary>
/// PlayFabClientGetCharacterStatisticsRequest data model. Request object for PlayFabClientGetCharacterStatisticsAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterStatisticsRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

} PlayFabClientGetCharacterStatisticsRequest;

/// <summary>
/// PlayFabClientGetCharacterStatisticsResult data model. In addition to being available for use by the
/// title, the statistics are used for all leaderboard operations in PlayFab. Result payload for PlayFabClientGetCharacterStatisticsAsync.
/// </summary>
typedef struct PlayFabClientGetCharacterStatisticsResult
{
    /// <summary>
    /// (Optional) The requested character statistics.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* characterStatistics;

    /// <summary>
    /// Count of characterStatistics
    /// </summary>
    uint32_t characterStatisticsCount;

} PlayFabClientGetCharacterStatisticsResult;

/// <summary>
/// PlayFabClientGetContentDownloadUrlRequest data model. Request object for PlayFabClientGetContentDownloadUrlAsync.
/// </summary>
typedef struct PlayFabClientGetContentDownloadUrlRequest
{
    /// <summary>
    /// (Optional) HTTP method to fetch item - GET or HEAD. Use HEAD when only fetching metadata. Default
    /// is GET.
    /// </summary>
    const char* httpMethod;

    /// <summary>
    /// Key of the content item to fetch, usually formatted as a path, e.g. images/a.png.
    /// </summary>
    const char* key;

    /// <summary>
    /// (Optional) True to download through CDN. CDN provides higher download bandwidth and lower latency.
    /// However, if you want the latest, non-cached version of the content during development, set this
    /// to false. Default is true.
    /// </summary>
    bool const* thruCDN;

} PlayFabClientGetContentDownloadUrlRequest;

/// <summary>
/// PlayFabClientGetContentDownloadUrlResult data model. Result payload for PlayFabClientGetContentDownloadUrlAsync.
/// </summary>
typedef struct PlayFabClientGetContentDownloadUrlResult
{
    /// <summary>
    /// (Optional) URL for downloading content via HTTP GET or HEAD method. The URL will expire in approximately
    /// one hour.
    /// </summary>
    const char* uRL;

} PlayFabClientGetContentDownloadUrlResult;

/// <summary>
/// PlayFabClientPlayerProfileViewConstraints data model.
/// </summary>
typedef struct PlayFabClientPlayerProfileViewConstraints
{
    /// <summary>
    /// Whether to show player's avatar URL. Defaults to false.
    /// </summary>
    bool showAvatarUrl;

    /// <summary>
    /// Whether to show the banned until time. Defaults to false.
    /// </summary>
    bool showBannedUntil;

    /// <summary>
    /// Whether to show campaign attributions. Defaults to false.
    /// </summary>
    bool showCampaignAttributions;

    /// <summary>
    /// Whether to show contact email addresses. Defaults to false.
    /// </summary>
    bool showContactEmailAddresses;

    /// <summary>
    /// Whether to show the created date. Defaults to false.
    /// </summary>
    bool showCreated;

    /// <summary>
    /// Whether to show the display name. Defaults to false.
    /// </summary>
    bool showDisplayName;

    /// <summary>
    /// Whether to show player's experiment variants. Defaults to false.
    /// </summary>
    bool showExperimentVariants;

    /// <summary>
    /// Whether to show the last login time. Defaults to false.
    /// </summary>
    bool showLastLogin;

    /// <summary>
    /// Whether to show the linked accounts. Defaults to false.
    /// </summary>
    bool showLinkedAccounts;

    /// <summary>
    /// Whether to show player's locations. Defaults to false.
    /// </summary>
    bool showLocations;

    /// <summary>
    /// Whether to show player's membership information. Defaults to false.
    /// </summary>
    bool showMemberships;

    /// <summary>
    /// Whether to show origination. Defaults to false.
    /// </summary>
    bool showOrigination;

    /// <summary>
    /// Whether to show push notification registrations. Defaults to false.
    /// </summary>
    bool showPushNotificationRegistrations;

    /// <summary>
    /// Reserved for future development.
    /// </summary>
    bool showStatistics;

    /// <summary>
    /// Whether to show tags. Defaults to false.
    /// </summary>
    bool showTags;

    /// <summary>
    /// Whether to show the total value to date in usd. Defaults to false.
    /// </summary>
    bool showTotalValueToDateInUsd;

    /// <summary>
    /// Whether to show the values to date. Defaults to false.
    /// </summary>
    bool showValuesToDate;

} PlayFabClientPlayerProfileViewConstraints;

/// <summary>
/// PlayFabClientGetFriendLeaderboardAroundPlayerRequest data model. Request object for PlayFabClientGetFriendLeaderboardAroundPlayerAsync.
/// </summary>
typedef struct PlayFabClientGetFriendLeaderboardAroundPlayerRequest
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
    /// (Optional) Indicates whether Facebook friends should be included in the response. Default is
    /// true.
    /// </summary>
    bool const* includeFacebookFriends;

    /// <summary>
    /// (Optional) Indicates whether Steam service friends should be included in the response. Default
    /// is true.
    /// </summary>
    bool const* includeSteamFriends;

    /// <summary>
    /// (Optional) Maximum number of entries to retrieve. Default 10, maximum 100.
    /// </summary>
    int32_t const* maxResultsCount;

    /// <summary>
    /// (Optional) PlayFab unique identifier of the user to center the leaderboard around. If null will
    /// center on the logged in user.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabClientPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// Statistic used to rank players for this leaderboard.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) The version of the leaderboard to get.
    /// </summary>
    int32_t const* version;

    /// <summary>
    /// (Optional) Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
    /// </summary>
    const char* xboxToken;

} PlayFabClientGetFriendLeaderboardAroundPlayerRequest;

/// <summary>
/// PlayFabClientPlayerLeaderboardEntry data model.
/// </summary>
typedef struct PlayFabClientPlayerLeaderboardEntry
{
    /// <summary>
    /// (Optional) Title-specific display name of the user for this leaderboard entry.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) PlayFab unique identifier of the user for this leaderboard entry.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// User's overall position in the leaderboard.
    /// </summary>
    int32_t position;

    /// <summary>
    /// (Optional) The profile of the user, if requested.
    /// </summary>
    PlayFabPlayerProfileModel const* profile;

    /// <summary>
    /// Specific value of the user's statistic.
    /// </summary>
    int32_t statValue;

} PlayFabClientPlayerLeaderboardEntry;

/// <summary>
/// PlayFabClientGetFriendLeaderboardAroundPlayerResult data model. Note: When calling 'GetLeaderboardAround...'
/// APIs, the position of the user defaults to 0 when the user does not have the corresponding statistic.If
/// Facebook friends are included, make sure the access token from previous LoginWithFacebook call is
/// still valid and not expired. If Xbox Live friends are included, make sure the access token from the
/// previous LoginWithXbox call is still valid and not expired. . Result payload for PlayFabClientGetFriendLeaderboardAroundPlayerAsync.
/// </summary>
typedef struct PlayFabClientGetFriendLeaderboardAroundPlayerResult
{
    /// <summary>
    /// (Optional) Ordered listing of users and their positions in the requested leaderboard.
    /// </summary>
    PlayFabClientPlayerLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

    /// <summary>
    /// (Optional) The time the next scheduled reset will occur. Null if the leaderboard does not reset
    /// on a schedule.
    /// </summary>
    time_t const* nextReset;

    /// <summary>
    /// The version of the leaderboard returned.
    /// </summary>
    int32_t version;

} PlayFabClientGetFriendLeaderboardAroundPlayerResult;

/// <summary>
/// PlayFabClientGetFriendLeaderboardRequest data model. Request object for PlayFabClientGetFriendLeaderboardAsync.
/// </summary>
typedef struct PlayFabClientGetFriendLeaderboardRequest
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
    /// (Optional) Indicates whether Facebook friends should be included in the response. Default is
    /// true.
    /// </summary>
    bool const* includeFacebookFriends;

    /// <summary>
    /// (Optional) Indicates whether Steam service friends should be included in the response. Default
    /// is true.
    /// </summary>
    bool const* includeSteamFriends;

    /// <summary>
    /// (Optional) Maximum number of entries to retrieve. Default 10, maximum 100.
    /// </summary>
    int32_t const* maxResultsCount;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabClientPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// Position in the leaderboard to start this listing (defaults to the first entry).
    /// </summary>
    int32_t startPosition;

    /// <summary>
    /// Statistic used to rank friends for this leaderboard.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) The version of the leaderboard to get.
    /// </summary>
    int32_t const* version;

    /// <summary>
    /// (Optional) Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
    /// </summary>
    const char* xboxToken;

} PlayFabClientGetFriendLeaderboardRequest;

/// <summary>
/// PlayFabClientGetFriendsListRequest data model. Request object for PlayFabClientGetFriendsListAsync.
/// </summary>
typedef struct PlayFabClientGetFriendsListRequest
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
    /// (Optional) Indicates whether Facebook friends should be included in the response. Default is
    /// true.
    /// </summary>
    bool const* includeFacebookFriends;

    /// <summary>
    /// (Optional) Indicates whether Steam service friends should be included in the response. Default
    /// is true.
    /// </summary>
    bool const* includeSteamFriends;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabClientPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// (Optional) Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
    /// </summary>
    const char* xboxToken;

} PlayFabClientGetFriendsListRequest;

/// <summary>
/// PlayFabClientGetFriendsListResult data model. If any additional services are queried for the user's
/// friends, those friends who also have a PlayFab account registered for the title will be returned in
/// the results. For Facebook, user has to have logged into the title's Facebook app recently, and only
/// friends who also plays this game will be included. For Xbox Live, user has to have logged into the
/// Xbox Live recently, and only friends who also play this game will be included. Result payload for
/// PlayFabClientGetFriendsListAsync.
/// </summary>
typedef struct PlayFabClientGetFriendsListResult
{
    /// <summary>
    /// (Optional) Array of friends found.
    /// </summary>
    PlayFabClientFriendInfo const* const* friends;

    /// <summary>
    /// Count of friends
    /// </summary>
    uint32_t friendsCount;

} PlayFabClientGetFriendsListResult;

/// <summary>
/// PlayFabClientGetLeaderboardAroundCharacterRequest data model. Request object for PlayFabClientGetLeaderboardAroundCharacterAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardAroundCharacterRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character on which to center the leaderboard.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Optional character type on which to filter the leaderboard entries.
    /// </summary>
    const char* characterType;

    /// <summary>
    /// (Optional) Maximum number of entries to retrieve. Default 10, maximum 100.
    /// </summary>
    int32_t const* maxResultsCount;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

} PlayFabClientGetLeaderboardAroundCharacterRequest;

/// <summary>
/// PlayFabClientGetLeaderboardAroundCharacterResult data model. Note: When calling 'GetLeaderboardAround...'
/// APIs, the position of the character defaults to 0 when the character does not have the corresponding
/// statistic. Result payload for PlayFabClientGetLeaderboardAroundCharacterAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardAroundCharacterResult
{
    /// <summary>
    /// (Optional) Ordered list of leaderboard entries.
    /// </summary>
    PlayFabClientCharacterLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

} PlayFabClientGetLeaderboardAroundCharacterResult;

/// <summary>
/// PlayFabClientGetLeaderboardAroundPlayerRequest data model. Request object for PlayFabClientGetLeaderboardAroundPlayerAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardAroundPlayerRequest
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
    /// (Optional) Maximum number of entries to retrieve. Default 10, maximum 100.
    /// </summary>
    int32_t const* maxResultsCount;

    /// <summary>
    /// (Optional) PlayFab unique identifier of the user to center the leaderboard around. If null will
    /// center on the logged in user.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabClientPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// Statistic used to rank players for this leaderboard.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) The version of the leaderboard to get.
    /// </summary>
    int32_t const* version;

} PlayFabClientGetLeaderboardAroundPlayerRequest;

/// <summary>
/// PlayFabClientGetLeaderboardAroundPlayerResult data model. Note: When calling 'GetLeaderboardAround...'
/// APIs, the position of the user defaults to 0 when the user does not have the corresponding statistic.
/// Result payload for PlayFabClientGetLeaderboardAroundPlayerAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardAroundPlayerResult
{
    /// <summary>
    /// (Optional) Ordered listing of users and their positions in the requested leaderboard.
    /// </summary>
    PlayFabClientPlayerLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

    /// <summary>
    /// (Optional) The time the next scheduled reset will occur. Null if the leaderboard does not reset
    /// on a schedule.
    /// </summary>
    time_t const* nextReset;

    /// <summary>
    /// The version of the leaderboard returned.
    /// </summary>
    int32_t version;

} PlayFabClientGetLeaderboardAroundPlayerResult;

/// <summary>
/// PlayFabClientGetLeaderboardForUsersCharactersRequest data model. Request object for PlayFabClientGetLeaderboardForUserCharactersAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardForUsersCharactersRequest
{
    /// <summary>
    /// Maximum number of entries to retrieve.
    /// </summary>
    int32_t maxResultsCount;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

} PlayFabClientGetLeaderboardForUsersCharactersRequest;

/// <summary>
/// PlayFabClientGetLeaderboardForUsersCharactersResult data model. NOTE: The position of the character
/// in the results is relative to the other characters for that specific user. This mean the values will
/// always be between 0 and one less than the number of characters returned regardless of the size of
/// the actual leaderboard. Result payload for PlayFabClientGetLeaderboardForUserCharactersAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardForUsersCharactersResult
{
    /// <summary>
    /// (Optional) Ordered list of leaderboard entries.
    /// </summary>
    PlayFabClientCharacterLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

} PlayFabClientGetLeaderboardForUsersCharactersResult;

/// <summary>
/// PlayFabClientGetLeaderboardRequest data model. Request object for PlayFabClientGetLeaderboardAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardRequest
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
    /// (Optional) Maximum number of entries to retrieve. Default 10, maximum 100.
    /// </summary>
    int32_t const* maxResultsCount;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabClientPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// Position in the leaderboard to start this listing (defaults to the first entry).
    /// </summary>
    int32_t startPosition;

    /// <summary>
    /// Statistic used to rank players for this leaderboard.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) The version of the leaderboard to get.
    /// </summary>
    int32_t const* version;

} PlayFabClientGetLeaderboardRequest;

/// <summary>
/// PlayFabClientGetLeaderboardResult data model. Note that the Position of the user in the results is
/// for the overall leaderboard. If Facebook friends are included, make sure the access token from previous
/// LoginWithFacebook call is still valid and not expired. If Xbox Live friends are included, make sure
/// the access token from the previous LoginWithXbox call is still valid and not expired. . Result payload
/// for PlayFabClientGetFriendLeaderboardAsync and PlayFabClientGetLeaderboardAsync.
/// </summary>
typedef struct PlayFabClientGetLeaderboardResult
{
    /// <summary>
    /// (Optional) Ordered listing of users and their positions in the requested leaderboard.
    /// </summary>
    PlayFabClientPlayerLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

    /// <summary>
    /// (Optional) The time the next scheduled reset will occur. Null if the leaderboard does not reset
    /// on a schedule.
    /// </summary>
    time_t const* nextReset;

    /// <summary>
    /// The version of the leaderboard returned.
    /// </summary>
    int32_t version;

} PlayFabClientGetLeaderboardResult;

/// <summary>
/// PlayFabClientGetPaymentTokenRequest data model. Request object for PlayFabClientGetPaymentTokenAsync.
/// </summary>
typedef struct PlayFabClientGetPaymentTokenRequest
{
    /// <summary>
    /// The name of service to provide the payment token. Allowed Values are: xsolla.
    /// </summary>
    const char* tokenProvider;

} PlayFabClientGetPaymentTokenRequest;

/// <summary>
/// PlayFabClientGetPaymentTokenResult data model. Result payload for PlayFabClientGetPaymentTokenAsync.
/// </summary>
typedef struct PlayFabClientGetPaymentTokenResult
{
    /// <summary>
    /// (Optional) PlayFab's purchase order identifier.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// (Optional) The token from provider.
    /// </summary>
    const char* providerToken;

} PlayFabClientGetPaymentTokenResult;

/// <summary>
/// PlayFabClientGetPhotonAuthenticationTokenRequest data model. Request object for PlayFabClientGetPhotonAuthenticationTokenAsync.
/// </summary>
typedef struct PlayFabClientGetPhotonAuthenticationTokenRequest
{
    /// <summary>
    /// The Photon applicationId for the game you wish to log into.
    /// </summary>
    const char* photonApplicationId;

} PlayFabClientGetPhotonAuthenticationTokenRequest;

/// <summary>
/// PlayFabClientGetPhotonAuthenticationTokenResult data model. Result payload for PlayFabClientGetPhotonAuthenticationTokenAsync.
/// </summary>
typedef struct PlayFabClientGetPhotonAuthenticationTokenResult
{
    /// <summary>
    /// (Optional) The Photon authentication token for this game-session.
    /// </summary>
    const char* photonCustomAuthenticationToken;

} PlayFabClientGetPhotonAuthenticationTokenResult;

/// <summary>
/// PlayFabClientGetPlayerCombinedInfoRequestParams data model.
/// </summary>
typedef struct PlayFabClientGetPlayerCombinedInfoRequestParams
{
    /// <summary>
    /// Whether to get character inventories. Defaults to false.
    /// </summary>
    bool getCharacterInventories;

    /// <summary>
    /// Whether to get the list of characters. Defaults to false.
    /// </summary>
    bool getCharacterList;

    /// <summary>
    /// Whether to get player profile. Defaults to false. Has no effect for a new player.
    /// </summary>
    bool getPlayerProfile;

    /// <summary>
    /// Whether to get player statistics. Defaults to false.
    /// </summary>
    bool getPlayerStatistics;

    /// <summary>
    /// Whether to get title data. Defaults to false.
    /// </summary>
    bool getTitleData;

    /// <summary>
    /// Whether to get the player's account Info. Defaults to false.
    /// </summary>
    bool getUserAccountInfo;

    /// <summary>
    /// Whether to get the player's custom data. Defaults to false.
    /// </summary>
    bool getUserData;

    /// <summary>
    /// Whether to get the player's inventory. Defaults to false.
    /// </summary>
    bool getUserInventory;

    /// <summary>
    /// Whether to get the player's read only data. Defaults to false.
    /// </summary>
    bool getUserReadOnlyData;

    /// <summary>
    /// Whether to get the player's virtual currency balances. Defaults to false.
    /// </summary>
    bool getUserVirtualCurrency;

    /// <summary>
    /// (Optional) Specific statistics to retrieve. Leave null to get all keys. Has no effect if GetPlayerStatistics
    /// is false.
    /// </summary>
    const char* const* playerStatisticNames;

    /// <summary>
    /// Count of playerStatisticNames
    /// </summary>
    uint32_t playerStatisticNamesCount;

    /// <summary>
    /// (Optional) Specifies the properties to return from the player profile. Defaults to returning
    /// the player's display name.
    /// </summary>
    PlayFabClientPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// (Optional) Specific keys to search for in the custom data. Leave null to get all keys. Has no
    /// effect if GetTitleData is false.
    /// </summary>
    const char* const* titleDataKeys;

    /// <summary>
    /// Count of titleDataKeys
    /// </summary>
    uint32_t titleDataKeysCount;

    /// <summary>
    /// (Optional) Specific keys to search for in the custom data. Leave null to get all keys. Has no
    /// effect if GetUserData is false.
    /// </summary>
    const char* const* userDataKeys;

    /// <summary>
    /// Count of userDataKeys
    /// </summary>
    uint32_t userDataKeysCount;

    /// <summary>
    /// (Optional) Specific keys to search for in the custom data. Leave null to get all keys. Has no
    /// effect if GetUserReadOnlyData is false.
    /// </summary>
    const char* const* userReadOnlyDataKeys;

    /// <summary>
    /// Count of userReadOnlyDataKeys
    /// </summary>
    uint32_t userReadOnlyDataKeysCount;

} PlayFabClientGetPlayerCombinedInfoRequestParams;

/// <summary>
/// PlayFabClientGetPlayerCombinedInfoRequest data model. Request object for PlayFabClientGetPlayerCombinedInfoAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerCombinedInfoRequest
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
    /// Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) PlayFabId of the user whose data will be returned. If not filled included, we return
    /// the data for the calling player. .
    /// </summary>
    const char* playFabId;

} PlayFabClientGetPlayerCombinedInfoRequest;

/// <summary>
/// PlayFabClientGetPlayerCombinedInfoResult data model. Returns whatever info is requested in the response
/// for the user. If no user is explicitly requested this defaults to the authenticated user. If the user
/// is the same as the requester, PII (like email address, facebook id) is returned if available. Otherwise,
/// only public information is returned. All parameters default to false. Result payload for PlayFabClientGetPlayerCombinedInfoAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerCombinedInfoResult
{
    /// <summary>
    /// (Optional) Results for requested info.
    /// </summary>
    PlayFabGetPlayerCombinedInfoResultPayload const* infoResultPayload;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabClientGetPlayerCombinedInfoResult;

/// <summary>
/// PlayFabClientGetPlayerProfileRequest data model. This API allows for access to details regarding
/// a user in the PlayFab service, usually for purposes of customer support. Note that data returned may
/// be Personally Identifying Information (PII), such as email address, and so care should be taken in
/// how this data is stored and managed. Since this call will always return the relevant information for
/// users who have accessed the title, the recommendation is to not store this data locally. Request
/// object for PlayFabClientGetPlayerProfileAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerProfileRequest
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
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabClientPlayerProfileViewConstraints const* profileConstraints;

} PlayFabClientGetPlayerProfileRequest;

/// <summary>
/// PlayFabClientGetPlayerProfileResult data model. Result payload for PlayFabClientGetPlayerProfileAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerProfileResult
{
    /// <summary>
    /// (Optional) The profile of the player. This profile is not guaranteed to be up-to-date. For a
    /// new player, this profile will not exist.
    /// </summary>
    PlayFabPlayerProfileModel const* playerProfile;

} PlayFabClientGetPlayerProfileResult;

/// <summary>
/// PlayFabClientGetSegmentResult data model.
/// </summary>
typedef struct PlayFabClientGetSegmentResult
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

} PlayFabClientGetSegmentResult;

/// <summary>
/// PlayFabClientGetPlayerSegmentsResult data model. Result payload for PlayFabClientGetPlayerSegmentsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerSegmentsResult
{
    /// <summary>
    /// (Optional) Array of segments the requested player currently belongs to.
    /// </summary>
    PlayFabClientGetSegmentResult const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PlayFabClientGetPlayerSegmentsResult;

/// <summary>
/// PlayFabClientStatisticNameVersion data model.
/// </summary>
typedef struct PlayFabClientStatisticNameVersion
{
    /// <summary>
    /// Unique name of the statistic.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// The version of the statistic to be returned.
    /// </summary>
    uint32_t version;

} PlayFabClientStatisticNameVersion;

/// <summary>
/// PlayFabClientGetPlayerStatisticsRequest data model. Request object for PlayFabClientGetPlayerStatisticsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerStatisticsRequest
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
    /// (Optional) Statistics to return (current version will be returned for each).
    /// </summary>
    const char* const* statisticNames;

    /// <summary>
    /// Count of statisticNames
    /// </summary>
    uint32_t statisticNamesCount;

    /// <summary>
    /// (Optional) Statistics to return, if StatisticNames is not set (only statistics which have a version
    /// matching that provided will be returned).
    /// </summary>
    PlayFabClientStatisticNameVersion const* const* statisticNameVersions;

    /// <summary>
    /// Count of statisticNameVersions
    /// </summary>
    uint32_t statisticNameVersionsCount;

} PlayFabClientGetPlayerStatisticsRequest;

/// <summary>
/// PlayFabClientGetPlayerStatisticsResult data model. In addition to being available for use by the
/// title, the statistics are used for all leaderboard operations in PlayFab. Result payload for PlayFabClientGetPlayerStatisticsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerStatisticsResult
{
    /// <summary>
    /// (Optional) User statistics for the requested user.
    /// </summary>
    PlayFabStatisticValue const* const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

} PlayFabClientGetPlayerStatisticsResult;

/// <summary>
/// PlayFabClientGetPlayerStatisticVersionsRequest data model. Request object for PlayFabClientGetPlayerStatisticVersionsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerStatisticVersionsRequest
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
    /// (Optional) Unique name of the statistic.
    /// </summary>
    const char* statisticName;

} PlayFabClientGetPlayerStatisticVersionsRequest;

/// <summary>
/// PlayFabClientPlayerStatisticVersion data model.
/// </summary>
typedef struct PlayFabClientPlayerStatisticVersion
{
    /// <summary>
    /// Time when the statistic version became active.
    /// </summary>
    time_t activationTime;

    /// <summary>
    /// (Optional) Time when the statistic version became inactive due to statistic version incrementing.
    /// </summary>
    time_t const* deactivationTime;

    /// <summary>
    /// (Optional) Time at which the statistic version was scheduled to become active, based on the configured
    /// ResetInterval.
    /// </summary>
    time_t const* scheduledActivationTime;

    /// <summary>
    /// (Optional) Time at which the statistic version was scheduled to become inactive, based on the
    /// configured ResetInterval.
    /// </summary>
    time_t const* scheduledDeactivationTime;

    /// <summary>
    /// (Optional) Name of the statistic when the version became active.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// Version of the statistic.
    /// </summary>
    uint32_t version;

} PlayFabClientPlayerStatisticVersion;

/// <summary>
/// PlayFabClientGetPlayerStatisticVersionsResult data model. Result payload for PlayFabClientGetPlayerStatisticVersionsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerStatisticVersionsResult
{
    /// <summary>
    /// (Optional) Version change history of the statistic.
    /// </summary>
    PlayFabClientPlayerStatisticVersion const* const* statisticVersions;

    /// <summary>
    /// Count of statisticVersions
    /// </summary>
    uint32_t statisticVersionsCount;

} PlayFabClientGetPlayerStatisticVersionsResult;

/// <summary>
/// PlayFabClientGetPlayerTagsRequest data model. This API will return a list of canonical tags which
/// includes both namespace and tag's name. If namespace is not provided, the result is a list of all
/// canonical tags. TagName can be used for segmentation and Namespace is limited to 128 characters.
/// Request object for PlayFabClientGetPlayerTagsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerTagsRequest
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
    /// (Optional) Optional namespace to filter results by.
    /// </summary>
    const char* playfabNamespace;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabClientGetPlayerTagsRequest;

/// <summary>
/// PlayFabClientGetPlayerTagsResult data model. Result payload for PlayFabClientGetPlayerTagsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerTagsResult
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

} PlayFabClientGetPlayerTagsResult;

/// <summary>
/// PlayFabClientGetPlayerTradesRequest data model. Request object for PlayFabClientGetPlayerTradesAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerTradesRequest
{
    /// <summary>
    /// (Optional) Returns only trades with the given status. If null, returns all trades.
    /// </summary>
    PlayFabClientTradeStatus const* statusFilter;

} PlayFabClientGetPlayerTradesRequest;

/// <summary>
/// PlayFabClientGetPlayerTradesResponse data model. Result payload for PlayFabClientGetPlayerTradesAsync.
/// </summary>
typedef struct PlayFabClientGetPlayerTradesResponse
{
    /// <summary>
    /// (Optional) History of trades which this player has accepted.
    /// </summary>
    PlayFabClientTradeInfo const* const* acceptedTrades;

    /// <summary>
    /// Count of acceptedTrades
    /// </summary>
    uint32_t acceptedTradesCount;

    /// <summary>
    /// (Optional) The trades for this player which are currently available to be accepted.
    /// </summary>
    PlayFabClientTradeInfo const* const* openedTrades;

    /// <summary>
    /// Count of openedTrades
    /// </summary>
    uint32_t openedTradesCount;

} PlayFabClientGetPlayerTradesResponse;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromFacebookIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromFacebookIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromFacebookIDsRequest
{
    /// <summary>
    /// Array of unique Facebook identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* facebookIDs;

    /// <summary>
    /// Count of facebookIDs
    /// </summary>
    uint32_t facebookIDsCount;

} PlayFabClientGetPlayFabIDsFromFacebookIDsRequest;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromFacebookIDsResult data model. For Facebook identifiers which have not
/// been linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromFacebookIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromFacebookIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Facebook identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientFacebookPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromFacebookIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest
{
    /// <summary>
    /// Array of unique Facebook Instant Games identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* facebookInstantGamesIds;

    /// <summary>
    /// Count of facebookInstantGamesIds
    /// </summary>
    uint32_t facebookInstantGamesIdsCount;

} PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult data model. For Facebook Instant Game
/// identifiers which have not been linked to PlayFab accounts, null will be returned. Result payload
/// for PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult
{
    /// <summary>
    /// (Optional) Mapping of Facebook Instant Games identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientFacebookInstantGamesPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromGameCenterIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest
{
    /// <summary>
    /// Array of unique Game Center identifiers (the Player Identifier) for which the title needs to
    /// get PlayFab identifiers.
    /// </summary>
    const char* const* gameCenterIDs;

    /// <summary>
    /// Count of gameCenterIDs
    /// </summary>
    uint32_t gameCenterIDsCount;

} PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromGameCenterIDsResult data model. For Game Center identifiers which have
/// not been linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromGameCenterIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromGameCenterIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Game Center identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientGameCenterPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromGameCenterIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromGenericIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromGenericIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromGenericIDsRequest
{
    /// <summary>
    /// Array of unique generic service identifiers for which the title needs to get PlayFab identifiers.
    /// Currently limited to a maximum of 10 in a single request.
    /// </summary>
    PlayFabClientGenericServiceId const* const* genericIDs;

    /// <summary>
    /// Count of genericIDs
    /// </summary>
    uint32_t genericIDsCount;

} PlayFabClientGetPlayFabIDsFromGenericIDsRequest;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromGenericIDsResult data model. For generic service identifiers which
/// have not been linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromGenericIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromGenericIDsResult
{
    /// <summary>
    /// (Optional) Mapping of generic service identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientGenericPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromGenericIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromGoogleIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromGoogleIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromGoogleIDsRequest
{
    /// <summary>
    /// Array of unique Google identifiers (Google+ user IDs) for which the title needs to get PlayFab
    /// identifiers.
    /// </summary>
    const char* const* googleIDs;

    /// <summary>
    /// Count of googleIDs
    /// </summary>
    uint32_t googleIDsCount;

} PlayFabClientGetPlayFabIDsFromGoogleIDsRequest;

/// <summary>
/// PlayFabClientGooglePlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientGooglePlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique Google identifier for a user.
    /// </summary>
    const char* googleId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Google identifier.
    /// </summary>
    const char* playFabId;

} PlayFabClientGooglePlayFabIdPair;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromGoogleIDsResult data model. For Google identifiers which have not been
/// linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromGoogleIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromGoogleIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Google identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientGooglePlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromGoogleIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromKongregateIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromKongregateIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromKongregateIDsRequest
{
    /// <summary>
    /// Array of unique Kongregate identifiers (Kongregate's user_id) for which the title needs to get
    /// PlayFab identifiers.
    /// </summary>
    const char* const* kongregateIDs;

    /// <summary>
    /// Count of kongregateIDs
    /// </summary>
    uint32_t kongregateIDsCount;

} PlayFabClientGetPlayFabIDsFromKongregateIDsRequest;

/// <summary>
/// PlayFabClientKongregatePlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientKongregatePlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique Kongregate identifier for a user.
    /// </summary>
    const char* kongregateId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Kongregate identifier.
    /// </summary>
    const char* playFabId;

} PlayFabClientKongregatePlayFabIdPair;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromKongregateIDsResult data model. For Kongregate identifiers which have
/// not been linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromKongregateIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromKongregateIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Kongregate identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientKongregatePlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromKongregateIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
{
    /// <summary>
    /// Array of unique Nintendo Switch Device identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* nintendoSwitchDeviceIds;

    /// <summary>
    /// Count of nintendoSwitchDeviceIds
    /// </summary>
    uint32_t nintendoSwitchDeviceIdsCount;

} PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;

/// <summary>
/// PlayFabClientNintendoSwitchPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientNintendoSwitchPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique Nintendo Switch Device identifier for a user.
    /// </summary>
    const char* nintendoSwitchDeviceId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Nintendo Switch Device identifier.
    /// </summary>
    const char* playFabId;

} PlayFabClientNintendoSwitchPlayFabIdPair;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult data model. For Nintendo Switch identifiers
/// which have not been linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
{
    /// <summary>
    /// (Optional) Mapping of Nintendo Switch Device identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientNintendoSwitchPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromPSNAccountIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest
{
    /// <summary>
    /// (Optional) Id of the PSN issuer environment. If null, defaults to production environment.
    /// </summary>
    int32_t const* issuerId;

    /// <summary>
    /// Array of unique PlayStation Network identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* PSNAccountIDs;

    /// <summary>
    /// Count of PSNAccountIDs
    /// </summary>
    uint32_t PSNAccountIDsCount;

} PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest;

/// <summary>
/// PlayFabClientPSNAccountPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientPSNAccountPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// PlayStation Network identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Unique PlayStation Network identifier for a user.
    /// </summary>
    const char* PSNAccountId;

} PlayFabClientPSNAccountPlayFabIdPair;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult data model. For PlayStation Network identifiers
/// which have not been linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromPSNAccountIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult
{
    /// <summary>
    /// (Optional) Mapping of PlayStation Network identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientPSNAccountPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromSteamIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromSteamIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromSteamIDsRequest
{
    /// <summary>
    /// (Optional) Array of unique Steam identifiers (Steam profile IDs) for which the title needs to
    /// get PlayFab identifiers.
    /// </summary>
    const char* const* steamStringIDs;

    /// <summary>
    /// Count of steamStringIDs
    /// </summary>
    uint32_t steamStringIDsCount;

} PlayFabClientGetPlayFabIDsFromSteamIDsRequest;

/// <summary>
/// PlayFabClientSteamPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientSteamPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Steam identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Unique Steam identifier for a user.
    /// </summary>
    const char* steamStringId;

} PlayFabClientSteamPlayFabIdPair;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromSteamIDsResult data model. For Steam identifiers which have not been
/// linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromSteamIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromSteamIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Steam identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientSteamPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromSteamIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromTwitchIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromTwitchIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromTwitchIDsRequest
{
    /// <summary>
    /// Array of unique Twitch identifiers (Twitch's _id) for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* twitchIds;

    /// <summary>
    /// Count of twitchIds
    /// </summary>
    uint32_t twitchIdsCount;

} PlayFabClientGetPlayFabIDsFromTwitchIDsRequest;

/// <summary>
/// PlayFabClientTwitchPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientTwitchPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Twitch identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Unique Twitch identifier for a user.
    /// </summary>
    const char* twitchId;

} PlayFabClientTwitchPlayFabIdPair;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromTwitchIDsResult data model. For Twitch identifiers which have not been
/// linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromTwitchIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromTwitchIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Twitch identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientTwitchPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromTwitchIDsResult;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest data model. Request object for PlayFabClientGetPlayFabIDsFromXboxLiveIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest
{
    /// <summary>
    /// (Optional) The ID of Xbox Live sandbox.
    /// </summary>
    const char* sandbox;

    /// <summary>
    /// Array of unique Xbox Live account identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* xboxLiveAccountIDs;

    /// <summary>
    /// Count of xboxLiveAccountIDs
    /// </summary>
    uint32_t xboxLiveAccountIDsCount;

} PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest;

/// <summary>
/// PlayFabClientXboxLiveAccountPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabClientXboxLiveAccountPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// Xbox Live identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Unique Xbox Live identifier for a user.
    /// </summary>
    const char* xboxLiveAccountId;

} PlayFabClientXboxLiveAccountPlayFabIdPair;

/// <summary>
/// PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult data model. For XboxLive identifiers which have not
/// been linked to PlayFab accounts, null will be returned. Result payload for PlayFabClientGetPlayFabIDsFromXboxLiveIDsAsync.
/// </summary>
typedef struct PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult
{
    /// <summary>
    /// (Optional) Mapping of PlayStation Network identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabClientXboxLiveAccountPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult;

/// <summary>
/// PlayFabClientGetPublisherDataRequest data model. This API is designed to return publisher-specific
/// values which can be read, but not written to, by the client. This data is shared across all titles
/// assigned to a particular publisher, and can be used for cross-game coordination. Only titles assigned
/// to a publisher can use this API. For more information email helloplayfab@microsoft.com. Note that
/// there may up to a minute delay in between updating title data and this API call returning the newest
/// value. Request object for PlayFabClientGetPublisherDataAsync.
/// </summary>
typedef struct PlayFabClientGetPublisherDataRequest
{
    /// <summary>
    ///  array of keys to get back data from the Publisher data blob, set by the admin tools.
    /// </summary>
    const char* const* keys;

    /// <summary>
    /// Count of keys
    /// </summary>
    uint32_t keysCount;

} PlayFabClientGetPublisherDataRequest;

/// <summary>
/// PlayFabClientGetPublisherDataResult data model. Result payload for PlayFabClientGetPublisherDataAsync.
/// </summary>
typedef struct PlayFabClientGetPublisherDataResult
{
    /// <summary>
    /// (Optional) A dictionary object of key / value pairs.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetPublisherDataResult;

/// <summary>
/// PlayFabClientGetPurchaseRequest data model. Request object for PlayFabClientGetPurchaseAsync.
/// </summary>
typedef struct PlayFabClientGetPurchaseRequest
{
    /// <summary>
    /// Purchase order identifier.
    /// </summary>
    const char* orderId;

} PlayFabClientGetPurchaseRequest;

/// <summary>
/// PlayFabClientGetPurchaseResult data model. Result payload for PlayFabClientGetPurchaseAsync.
/// </summary>
typedef struct PlayFabClientGetPurchaseResult
{
    /// <summary>
    /// (Optional) Purchase order identifier.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// (Optional) Payment provider used for transaction (If not VC).
    /// </summary>
    const char* paymentProvider;

    /// <summary>
    /// Date and time of the purchase.
    /// </summary>
    time_t purchaseDate;

    /// <summary>
    /// (Optional) Provider transaction ID (If not VC).
    /// </summary>
    const char* transactionId;

    /// <summary>
    /// (Optional) PlayFab transaction status.
    /// </summary>
    const char* transactionStatus;

} PlayFabClientGetPurchaseResult;

/// <summary>
/// PlayFabClientGetSharedGroupDataRequest data model. Request object for PlayFabClientGetSharedGroupDataAsync.
/// </summary>
typedef struct PlayFabClientGetSharedGroupDataRequest
{
    /// <summary>
    /// (Optional) If true, return the list of all members of the shared group.
    /// </summary>
    bool const* getMembers;

    /// <summary>
    /// (Optional) Specific keys to retrieve from the shared group (if not specified, all keys will be
    /// returned, while an empty array indicates that no keys should be returned).
    /// </summary>
    const char* const* keys;

    /// <summary>
    /// Count of keys
    /// </summary>
    uint32_t keysCount;

    /// <summary>
    /// Unique identifier for the shared group.
    /// </summary>
    const char* sharedGroupId;

} PlayFabClientGetSharedGroupDataRequest;

/// <summary>
/// PlayFabClientSharedGroupDataRecord data model.
/// </summary>
typedef struct PlayFabClientSharedGroupDataRecord
{
    /// <summary>
    /// Timestamp for when this data was last updated.
    /// </summary>
    time_t lastUpdated;

    /// <summary>
    /// (Optional) Unique PlayFab identifier of the user to last update this value.
    /// </summary>
    const char* lastUpdatedBy;

    /// <summary>
    /// (Optional) Indicates whether this data can be read by all users (public) or only members of the
    /// group (private).
    /// </summary>
    PlayFabUserDataPermission const* permission;

    /// <summary>
    /// (Optional) Data stored for the specified group data key.
    /// </summary>
    const char* value;

} PlayFabClientSharedGroupDataRecord;

/// <summary>
/// PlayFabClientGetSharedGroupDataResult data model. Result payload for PlayFabClientGetSharedGroupDataAsync.
/// </summary>
typedef struct PlayFabClientGetSharedGroupDataResult
{
    /// <summary>
    /// (Optional) Data for the requested keys.
    /// </summary>
    struct PlayFabClientSharedGroupDataRecordDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

    /// <summary>
    /// (Optional) List of PlayFabId identifiers for the members of this group, if requested.
    /// </summary>
    const char* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

} PlayFabClientGetSharedGroupDataResult;

/// <summary>
/// PlayFabClientGetStoreItemsRequest data model. A store contains an array of references to items defined
/// in one or more catalog versions of the game, along with the prices for the item, in both real world
/// and virtual currencies. These prices act as an override to any prices defined in the catalog. In this
/// way, the base definitions of the items may be defined in the catalog, with all associated properties,
/// while the pricing can be set for each store, as needed. This allows for subsets of goods to be defined
/// for different purposes (in order to simplify showing some, but not all catalog items to users, based
/// upon different characteristics), along with unique prices. Note that all prices defined in the catalog
/// and store definitions for the item are considered valid, and that a compromised client can be made
/// to send a request for an item based upon any of these definitions. If no price is specified in the
/// store for an item, the price set in the catalog should be displayed to the user. Request object for
/// PlayFabClientGetStoreItemsAsync.
/// </summary>
typedef struct PlayFabClientGetStoreItemsRequest
{
    /// <summary>
    /// (Optional) Catalog version to store items from. Use default catalog version if null.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Unqiue identifier for the store which is being requested.
    /// </summary>
    const char* storeId;

} PlayFabClientGetStoreItemsRequest;

/// <summary>
/// PlayFabClientStoreMarketingModel data model. Marketing data about a specific store.
/// </summary>
typedef struct PlayFabClientStoreMarketingModel
{
    /// <summary>
    /// (Optional) Tagline for a store.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) Display name of a store as it will appear to users.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) Custom data about a store.
    /// </summary>
    PlayFabJsonObject metadata;

} PlayFabClientStoreMarketingModel;

/// <summary>
/// PlayFabClientStoreItem data model. A store entry that list a catalog item at a particular price.
/// </summary>
typedef struct PlayFabClientStoreItem
{
    /// <summary>
    /// (Optional) Store specific custom data. The data only exists as part of this store; it is not
    /// transferred to item instances.
    /// </summary>
    PlayFabJsonObject customData;

    /// <summary>
    /// (Optional) Intended display position for this item. Note that 0 is the first position.
    /// </summary>
    uint32_t const* displayPosition;

    /// <summary>
    /// Unique identifier of the item as it exists in the catalog - note that this must exactly match
    /// the ItemId from the catalog.
    /// </summary>
    const char* itemId;

    /// <summary>
    /// (Optional) Override prices for this item for specific currencies.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* realCurrencyPrices;

    /// <summary>
    /// Count of realCurrencyPrices
    /// </summary>
    uint32_t realCurrencyPricesCount;

    /// <summary>
    /// (Optional) Override prices for this item in virtual currencies and "RM" (the base Real Money
    /// purchase price, in USD pennies).
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* virtualCurrencyPrices;

    /// <summary>
    /// Count of virtualCurrencyPrices
    /// </summary>
    uint32_t virtualCurrencyPricesCount;

} PlayFabClientStoreItem;

/// <summary>
/// PlayFabClientGetStoreItemsResult data model. Result payload for PlayFabClientGetStoreItemsAsync.
/// </summary>
typedef struct PlayFabClientGetStoreItemsResult
{
    /// <summary>
    /// (Optional) The base catalog that this store is a part of.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Additional data about the store.
    /// </summary>
    PlayFabClientStoreMarketingModel const* marketingData;

    /// <summary>
    /// (Optional) How the store was last updated (Admin or a third party).
    /// </summary>
    PlayFabClientSourceType const* source;

    /// <summary>
    /// (Optional) Array of items which can be purchased from this store.
    /// </summary>
    PlayFabClientStoreItem const* const* store;

    /// <summary>
    /// Count of store
    /// </summary>
    uint32_t storeCount;

    /// <summary>
    /// (Optional) The ID of this store.
    /// </summary>
    const char* storeId;

} PlayFabClientGetStoreItemsResult;

/// <summary>
/// PlayFabClientGetTimeResult data model. Time is always returned as Coordinated Universal Time (UTC).
/// Result payload for PlayFabClientGetTimeAsync.
/// </summary>
typedef struct PlayFabClientGetTimeResult
{
    /// <summary>
    /// Current server time when the request was received, in UTC.
    /// </summary>
    time_t time;

} PlayFabClientGetTimeResult;

/// <summary>
/// PlayFabClientGetTitleDataRequest data model. This API is designed to return title specific values
/// which can be read, but not written to, by the client. For example, a developer could choose to store
/// values which modify the user experience, such as enemy spawn rates, weapon strengths, movement speeds,
/// etc. This allows a developer to update the title without the need to create, test, and ship a new
/// build. If the player belongs to an experiment variant that uses title data overrides, the overrides
/// are applied automatically and returned with the title data. Note that there may up to a minute delay
/// in between updating title data and this API call returning the newest value. Request object for PlayFabClientGetTitleDataAsync.
/// </summary>
typedef struct PlayFabClientGetTitleDataRequest
{
    /// <summary>
    /// (Optional) Specific keys to search for in the title data (leave null to get all keys).
    /// </summary>
    const char* const* keys;

    /// <summary>
    /// Count of keys
    /// </summary>
    uint32_t keysCount;

    /// <summary>
    /// (Optional) Optional field that specifies the name of an override. This value is ignored when
    /// used by the game client; otherwise, the overrides are applied automatically to the title data.
    /// </summary>
    const char* overrideLabel;

} PlayFabClientGetTitleDataRequest;

/// <summary>
/// PlayFabClientGetTitleDataResult data model. Result payload for PlayFabClientGetTitleDataAsync.
/// </summary>
typedef struct PlayFabClientGetTitleDataResult
{
    /// <summary>
    /// (Optional) A dictionary object of key / value pairs.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabClientGetTitleDataResult;

/// <summary>
/// PlayFabClientGetTitleNewsRequest data model. Request object for PlayFabClientGetTitleNewsAsync.
/// </summary>
typedef struct PlayFabClientGetTitleNewsRequest
{
    /// <summary>
    /// (Optional) Limits the results to the last n entries. Defaults to 10 if not set.
    /// </summary>
    int32_t const* count;

} PlayFabClientGetTitleNewsRequest;

/// <summary>
/// PlayFabClientTitleNewsItem data model.
/// </summary>
typedef struct PlayFabClientTitleNewsItem
{
    /// <summary>
    /// (Optional) News item text.
    /// </summary>
    const char* body;

    /// <summary>
    /// (Optional) Unique identifier of news item.
    /// </summary>
    const char* newsId;

    /// <summary>
    /// Date and time when the news item was posted.
    /// </summary>
    time_t timestamp;

    /// <summary>
    /// (Optional) Title of the news item.
    /// </summary>
    const char* title;

} PlayFabClientTitleNewsItem;

/// <summary>
/// PlayFabClientGetTitleNewsResult data model. Result payload for PlayFabClientGetTitleNewsAsync.
/// </summary>
typedef struct PlayFabClientGetTitleNewsResult
{
    /// <summary>
    /// (Optional) Array of news items.
    /// </summary>
    PlayFabClientTitleNewsItem const* const* news;

    /// <summary>
    /// Count of news
    /// </summary>
    uint32_t newsCount;

} PlayFabClientGetTitleNewsResult;

/// <summary>
/// PlayFabClientGetTitlePublicKeyRequest data model. An RSA CSP blob to be used to encrypt the payload
/// of account creation requests when that API requires a signature header. For example if Client/LoginWithCustomId
/// requires signature headers but the player does not have an account yet follow these steps: 1) Call
/// Client/GetTitlePublicKey with one of the title's shared secrets. 2) Convert the Base64 encoded CSP
/// blob to a byte array and create an RSA signing object. 3) Encrypt the UTF8 encoded JSON body of the
/// registration request and place the Base64 encoded result into the EncryptedRequest and with the TitleId
/// field, all other fields can be left empty when performing the API request. 4) Client receives authentication
/// token as normal. Future requests to LoginWithCustomId will require the X-PlayFab-Signature header.
/// Request object for PlayFabClientGetTitlePublicKeyAsync.
/// </summary>
typedef struct PlayFabClientGetTitlePublicKeyRequest
{
    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// The shared secret key for this title.
    /// </summary>
    const char* titleSharedSecret;

} PlayFabClientGetTitlePublicKeyRequest;

/// <summary>
/// PlayFabClientGetTitlePublicKeyResult data model. Result payload for PlayFabClientGetTitlePublicKeyAsync.
/// </summary>
typedef struct PlayFabClientGetTitlePublicKeyResult
{
    /// <summary>
    /// (Optional) Base64 encoded RSA CSP byte array blob containing the title's public RSA key.
    /// </summary>
    const char* rSAPublicKey;

} PlayFabClientGetTitlePublicKeyResult;

/// <summary>
/// PlayFabClientGetTradeStatusRequest data model. Request object for PlayFabClientGetTradeStatusAsync.
/// </summary>
typedef struct PlayFabClientGetTradeStatusRequest
{
    /// <summary>
    /// Player who opened trade.
    /// </summary>
    const char* offeringPlayerId;

    /// <summary>
    /// Trade identifier as returned by OpenTradeOffer.
    /// </summary>
    const char* tradeId;

} PlayFabClientGetTradeStatusRequest;

/// <summary>
/// PlayFabClientGetTradeStatusResponse data model. Result payload for PlayFabClientGetTradeStatusAsync.
/// </summary>
typedef struct PlayFabClientGetTradeStatusResponse
{
    /// <summary>
    /// (Optional) Information about the requested trade.
    /// </summary>
    PlayFabClientTradeInfo const* trade;

} PlayFabClientGetTradeStatusResponse;

/// <summary>
/// PlayFabClientGetUserDataRequest data model. Data is stored as JSON key-value pairs. Every time the
/// data is updated via any source, the version counter is incremented. If the Version parameter is provided,
/// then this call will only return data if the current version on the system is greater than the value
/// provided. If the Keys parameter is provided, the data object returned will only contain the data specific
/// to the indicated Keys. Otherwise, the full set of custom user data will be returned. Request object
/// for PlayFabClientGetUserDataAsync, PlayFabClientGetUserPublisherDataAsync, PlayFabClientGetUserPublisherReadOnlyDataAsync,
/// and PlayFabClientGetUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabClientGetUserDataRequest
{
    /// <summary>
    /// (Optional) The version that currently exists according to the caller. The call will return the
    /// data for all of the keys if the version in the system is greater than this.
    /// </summary>
    uint32_t const* ifChangedFromDataVersion;

    /// <summary>
    /// (Optional) List of unique keys to load from.
    /// </summary>
    const char* const* keys;

    /// <summary>
    /// Count of keys
    /// </summary>
    uint32_t keysCount;

    /// <summary>
    /// (Optional) Unique PlayFab identifier of the user to load data for. Optional, defaults to yourself
    /// if not set. When specified to a PlayFab id of another player, then this will only return public
    /// keys for that account.
    /// </summary>
    const char* playFabId;

} PlayFabClientGetUserDataRequest;

/// <summary>
/// PlayFabClientGetUserDataResult data model. Result payload for PlayFabClientGetUserDataAsync, PlayFabClientGetUserPublisherDataAsync,
/// PlayFabClientGetUserPublisherReadOnlyDataAsync, and PlayFabClientGetUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabClientGetUserDataResult
{
    /// <summary>
    /// (Optional) User specific data for this title.
    /// </summary>
    struct PlayFabUserDataRecordDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

    /// <summary>
    /// Indicates the current version of the data that has been set. This is incremented with every set
    /// call for that type of data (read-only, internal, etc). This version can be provided in Get calls
    /// to find updated data.
    /// </summary>
    uint32_t dataVersion;

} PlayFabClientGetUserDataResult;

/// <summary>
/// PlayFabClientGetUserInventoryRequest data model. Request object for PlayFabClientGetUserInventoryAsync.
/// </summary>
typedef struct PlayFabClientGetUserInventoryRequest
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

} PlayFabClientGetUserInventoryRequest;

/// <summary>
/// PlayFabClientGetUserInventoryResult data model. All items currently in the user inventory will be
/// returned, irrespective of how they were acquired (via purchasing, grants, coupons, etc.). Items that
/// are expired, fully consumed, or are no longer valid are not considered to be in the user's current
/// inventory, and so will not be not included. Result payload for PlayFabClientGetUserInventoryAsync.
/// </summary>
typedef struct PlayFabClientGetUserInventoryResult
{
    /// <summary>
    /// (Optional) Array of inventory items belonging to the user.
    /// </summary>
    PlayFabItemInstance const* const* inventory;

    /// <summary>
    /// Count of inventory
    /// </summary>
    uint32_t inventoryCount;

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

} PlayFabClientGetUserInventoryResult;

/// <summary>
/// PlayFabClientGrantCharacterToUserRequest data model. Grants a character to the user of the type specified
/// by the item ID. The user must already have an instance of this item in their inventory in order to
/// allow character creation. This item can come from a purchase or grant, which must be done before calling
/// to create the character. Request object for PlayFabClientGrantCharacterToUserAsync.
/// </summary>
typedef struct PlayFabClientGrantCharacterToUserRequest
{
    /// <summary>
    /// (Optional) Catalog version from which items are to be granted.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Non-unique display name of the character being granted (1-40 characters in length).
    /// </summary>
    const char* characterName;

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
    /// Catalog item identifier of the item in the user's inventory that corresponds to the character
    /// in the catalog to be created.
    /// </summary>
    const char* itemId;

} PlayFabClientGrantCharacterToUserRequest;

/// <summary>
/// PlayFabClientGrantCharacterToUserResult data model. Result payload for PlayFabClientGrantCharacterToUserAsync.
/// </summary>
typedef struct PlayFabClientGrantCharacterToUserResult
{
    /// <summary>
    /// (Optional) Unique identifier tagged to this character.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Type of character that was created.
    /// </summary>
    const char* characterType;

    /// <summary>
    /// Indicates whether this character was created successfully.
    /// </summary>
    bool result;

} PlayFabClientGrantCharacterToUserResult;

/// <summary>
/// PlayFabClientItemPurchaseRequest data model.
/// </summary>
typedef struct PlayFabClientItemPurchaseRequest
{
    /// <summary>
    /// (Optional) Title-specific text concerning this purchase.
    /// </summary>
    const char* annotation;

    /// <summary>
    /// Unique ItemId of the item to purchase.
    /// </summary>
    const char* itemId;

    /// <summary>
    /// How many of this item to purchase. Min 1, maximum 25.
    /// </summary>
    uint32_t quantity;

    /// <summary>
    /// (Optional) Items to be upgraded as a result of this purchase (upgraded items are hidden, as they
    /// are "replaced" by the new items).
    /// </summary>
    const char* const* upgradeFromItems;

    /// <summary>
    /// Count of upgradeFromItems
    /// </summary>
    uint32_t upgradeFromItemsCount;

} PlayFabClientItemPurchaseRequest;

/// <summary>
/// PlayFabClientLinkAndroidDeviceIDRequest data model. Request object for PlayFabClientLinkAndroidDeviceIDAsync.
/// </summary>
typedef struct PlayFabClientLinkAndroidDeviceIDRequest
{
    /// <summary>
    /// (Optional) Specific model of the user's device.
    /// </summary>
    const char* androidDevice;

    /// <summary>
    /// Android device identifier for the user's device.
    /// </summary>
    const char* androidDeviceId;

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
    /// (Optional) If another user is already linked to the device, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// (Optional) Specific Operating System version for the user's device.
    /// </summary>
    const char* OS;

} PlayFabClientLinkAndroidDeviceIDRequest;

/// <summary>
/// PlayFabClientLinkAppleRequest data model. Request object for PlayFabClientLinkAppleAsync.
/// </summary>
typedef struct PlayFabClientLinkAppleRequest
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
    /// (Optional) If another user is already linked to a specific Apple account, unlink the other user
    /// and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// The JSON Web token (JWT) returned by Apple after login. Represented as the identityToken field
    /// in the authorization credential payload. Used to validate the request and find the user ID (Apple
    /// subject) to link with.
    /// </summary>
    const char* identityToken;

} PlayFabClientLinkAppleRequest;

/// <summary>
/// PlayFabClientLinkCustomIDRequest data model. Request object for PlayFabClientLinkCustomIDAsync.
/// </summary>
typedef struct PlayFabClientLinkCustomIDRequest
{
    /// <summary>
    /// Custom unique identifier for the user, generated by the title.
    /// </summary>
    const char* customId;

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
    /// (Optional) If another user is already linked to the custom ID, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

} PlayFabClientLinkCustomIDRequest;

/// <summary>
/// PlayFabClientLinkFacebookAccountRequest data model. Facebook sign-in is accomplished using the Facebook
/// User Access Token. More information on the Token can be found in the Facebook developer documentation
/// (https://developers.facebook.com/docs/facebook-login/access-tokens/). In Unity, for example, the Token
/// is available as AccessToken in the Facebook SDK ScriptableObject FB. Note that titles should never
/// re-use the same Facebook applications between PlayFab Title IDs, as Facebook provides unique user
/// IDs per application and doing so can result in issues with the Facebook ID for the user in their PlayFab
/// account information. If you must re-use an application in a new PlayFab Title ID, please be sure to
/// first unlink all accounts from Facebook, or delete all users in the first Title ID. Request object
/// for PlayFabClientLinkFacebookAccountAsync.
/// </summary>
typedef struct PlayFabClientLinkFacebookAccountRequest
{
    /// <summary>
    /// Unique identifier from Facebook for the user.
    /// </summary>
    const char* accessToken;

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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

} PlayFabClientLinkFacebookAccountRequest;

/// <summary>
/// PlayFabClientLinkFacebookInstantGamesIdRequest data model. Request object for PlayFabClientLinkFacebookInstantGamesIdAsync.
/// </summary>
typedef struct PlayFabClientLinkFacebookInstantGamesIdRequest
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
    /// Facebook Instant Games signature for the user.
    /// </summary>
    const char* facebookInstantGamesSignature;

    /// <summary>
    /// (Optional) If another user is already linked to the Facebook Instant Games ID, unlink the other
    /// user and re-link.
    /// </summary>
    bool const* forceLink;

} PlayFabClientLinkFacebookInstantGamesIdRequest;

/// <summary>
/// PlayFabClientLinkGameCenterAccountRequest data model. Request object for PlayFabClientLinkGameCenterAccountAsync.
/// </summary>
typedef struct PlayFabClientLinkGameCenterAccountRequest
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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// Game Center identifier for the player account to be linked.
    /// </summary>
    const char* gameCenterId;

    /// <summary>
    /// (Optional) The URL for the public encryption key that will be used to verify the signature.
    /// </summary>
    const char* publicKeyUrl;

    /// <summary>
    /// (Optional) A random value used to compute the hash and keep it randomized.
    /// </summary>
    const char* salt;

    /// <summary>
    /// (Optional) The verification signature of the authentication payload.
    /// </summary>
    const char* signature;

    /// <summary>
    /// (Optional) The integer representation of date and time that the signature was created on. PlayFab
    /// will reject authentication signatures not within 10 minutes of the server's current time.
    /// </summary>
    const char* timestamp;

} PlayFabClientLinkGameCenterAccountRequest;

/// <summary>
/// PlayFabClientLinkGoogleAccountRequest data model. Google sign-in is accomplished by obtaining a Google
/// OAuth 2.0 credential using the Google sign-in for Android APIs on the device and passing it to this
/// API. Request object for PlayFabClientLinkGoogleAccountAsync.
/// </summary>
typedef struct PlayFabClientLinkGoogleAccountRequest
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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// (Optional) Server authentication code obtained on the client by calling getServerAuthCode() (https://developers.google.com/identity/sign-in/android/offline-access)
    /// from Google Play for the user.
    /// </summary>
    const char* serverAuthCode;

} PlayFabClientLinkGoogleAccountRequest;

/// <summary>
/// PlayFabClientLinkIOSDeviceIDRequest data model. Request object for PlayFabClientLinkIOSDeviceIDAsync.
/// </summary>
typedef struct PlayFabClientLinkIOSDeviceIDRequest
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
    /// Vendor-specific iOS identifier for the user's device.
    /// </summary>
    const char* deviceId;

    /// <summary>
    /// (Optional) Specific model of the user's device.
    /// </summary>
    const char* deviceModel;

    /// <summary>
    /// (Optional) If another user is already linked to the device, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// (Optional) Specific Operating System version for the user's device.
    /// </summary>
    const char* OS;

} PlayFabClientLinkIOSDeviceIDRequest;

/// <summary>
/// PlayFabClientLinkKongregateAccountRequest data model. Request object for PlayFabClientLinkKongregateAsync.
/// </summary>
typedef struct PlayFabClientLinkKongregateAccountRequest
{
    /// <summary>
    /// Valid session auth ticket issued by Kongregate.
    /// </summary>
    const char* authTicket;

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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// Numeric user ID assigned by Kongregate.
    /// </summary>
    const char* kongregateId;

} PlayFabClientLinkKongregateAccountRequest;

/// <summary>
/// PlayFabClientLinkNintendoServiceAccountRequest data model. Request object for PlayFabClientLinkNintendoServiceAccountAsync.
/// </summary>
typedef struct PlayFabClientLinkNintendoServiceAccountRequest
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
    /// (Optional) If another user is already linked to a specific Nintendo Switch account, unlink the
    /// other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// The JSON Web token (JWT) returned by Nintendo after login. Used to validate the request and find
    /// the user ID (Nintendo Switch subject) to link with.
    /// </summary>
    const char* identityToken;

} PlayFabClientLinkNintendoServiceAccountRequest;

/// <summary>
/// PlayFabClientLinkNintendoSwitchDeviceIdRequest data model. Request object for PlayFabClientLinkNintendoSwitchDeviceIdAsync.
/// </summary>
typedef struct PlayFabClientLinkNintendoSwitchDeviceIdRequest
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
    /// (Optional) If another user is already linked to the Nintendo Switch Device ID, unlink the other
    /// user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// Nintendo Switch unique identifier for the user's device.
    /// </summary>
    const char* nintendoSwitchDeviceId;

} PlayFabClientLinkNintendoSwitchDeviceIdRequest;

/// <summary>
/// PlayFabClientLinkOpenIdConnectRequest data model. Request object for PlayFabClientLinkOpenIdConnectAsync.
/// </summary>
typedef struct PlayFabClientLinkOpenIdConnectRequest
{
    /// <summary>
    /// A name that identifies which configured OpenID Connect provider relationship to use. Maximum
    /// 100 characters.
    /// </summary>
    const char* connectionId;

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
    /// (Optional) If another user is already linked to a specific OpenId Connect user, unlink the other
    /// user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// The JSON Web token (JWT) returned by the identity provider after login. Represented as the id_token
    /// field in the identity provider's response. Used to validate the request and find the user ID (OpenID
    /// Connect subject) to link with.
    /// </summary>
    const char* idToken;

} PlayFabClientLinkOpenIdConnectRequest;

/// <summary>
/// PlayFabClientLinkPSNAccountRequest data model. Request object for PlayFabClientLinkPSNAccountAsync.
/// </summary>
typedef struct PlayFabClientLinkPSNAccountRequest
{
    /// <summary>
    /// Authentication code provided by the PlayStation Network.
    /// </summary>
    const char* authCode;

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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// (Optional) Id of the PSN issuer environment. If null, defaults to production environment.
    /// </summary>
    int32_t const* issuerId;

    /// <summary>
    /// Redirect URI supplied to PSN when requesting an auth code.
    /// </summary>
    const char* redirectUri;

} PlayFabClientLinkPSNAccountRequest;

/// <summary>
/// PlayFabClientLinkSteamAccountRequest data model. Steam authentication is accomplished with the Steam
/// Session Ticket. More information on the Ticket can be found in the Steamworks SDK, here: https://partner.steamgames.com/documentation/auth
/// (requires sign-in). NOTE: For Steam authentication to work, the title must be configured with the
/// Steam Application ID and Publisher Key in the PlayFab Game Manager (under Properties). Information
/// on creating a Publisher Key (referred to as the Secret Key in PlayFab) for your title can be found
/// here: https://partner.steamgames.com/documentation/webapi#publisherkey. Request object for PlayFabClientLinkSteamAccountAsync.
/// </summary>
typedef struct PlayFabClientLinkSteamAccountRequest
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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// Authentication token for the user, returned as a byte array from Steam, and converted to a string
    /// (for example, the byte 0x08 should become "08").
    /// </summary>
    const char* steamTicket;

} PlayFabClientLinkSteamAccountRequest;

/// <summary>
/// PlayFabClientLinkTwitchAccountRequest data model. Request object for PlayFabClientLinkTwitchAsync.
/// </summary>
typedef struct PlayFabClientLinkTwitchAccountRequest
{
    /// <summary>
    /// Valid token issued by Twitch.
    /// </summary>
    const char* accessToken;

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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

} PlayFabClientLinkTwitchAccountRequest;

/// <summary>
/// PlayFabClientLinkXboxAccountRequest data model. Request object for PlayFabClientLinkXboxAccountAsync.
/// </summary>
typedef struct PlayFabClientLinkXboxAccountRequest
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
    /// (Optional) If another user is already linked to the account, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// "").
    /// </summary>
    const char* xboxToken;

} PlayFabClientLinkXboxAccountRequest;

/// <summary>
/// PlayFabClientListUsersCharactersRequest data model. Returns a list of every character that currently
/// belongs to a user. Request object for PlayFabClientGetAllUsersCharactersAsync.
/// </summary>
typedef struct PlayFabClientListUsersCharactersRequest
{
    /// <summary>
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabClientListUsersCharactersRequest;

/// <summary>
/// PlayFabClientListUsersCharactersResult data model. Result payload for PlayFabClientGetAllUsersCharactersAsync.
/// </summary>
typedef struct PlayFabClientListUsersCharactersResult
{
    /// <summary>
    /// (Optional) The requested list of characters.
    /// </summary>
    PlayFabCharacterResult const* const* characters;

    /// <summary>
    /// Count of characters
    /// </summary>
    uint32_t charactersCount;

} PlayFabClientListUsersCharactersResult;

/// <summary>
/// PlayFabClientLoginWithAndroidDeviceIDRequest data model. On Android devices, the recommendation is
/// to use the Settings.Secure.ANDROID_ID as the AndroidDeviceId, as described in this blog post (http://android-developers.blogspot.com/2011/03/identifying-app-installations.html).
/// More information on this identifier can be found in the Android documentation (http://developer.android.com/reference/android/provider/Settings.Secure.html).
/// If this is the first time a user has signed in with the Android device and CreateAccount is set to
/// true, a new PlayFab account will be created and linked to the Android device ID. In this case, no
/// email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is
/// linked to the Android device, an error indicating this will be returned, so that the title can guide
/// the user through creation of a PlayFab account. Please note that while multiple devices of this type
/// can be linked to a single user account, only the one most recently used to login (or most recently
/// linked) will be reflected in the user's account information. We will be updating to show all linked
/// devices in a future release. Request object for PlayFabClientLoginWithAndroidDeviceIDAsync.
/// </summary>
typedef struct PlayFabClientLoginWithAndroidDeviceIDRequest
{
    /// <summary>
    /// (Optional) Specific model of the user's device.
    /// </summary>
    const char* androidDevice;

    /// <summary>
    /// (Optional) Android device identifier for the user's device.
    /// </summary>
    const char* androidDeviceId;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Specific Operating System version for the user's device.
    /// </summary>
    const char* OS;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithAndroidDeviceIDRequest;

/// <summary>
/// PlayFabClientLoginWithAppleRequest data model. Request object for PlayFabClientLoginWithAppleAsync.
/// </summary>
typedef struct PlayFabClientLoginWithAppleRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// The JSON Web token (JWT) returned by Apple after login. Represented as the identityToken field
    /// in the authorization credential payload.
    /// </summary>
    const char* identityToken;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithAppleRequest;

/// <summary>
/// PlayFabClientLoginWithCustomIDRequest data model. It is highly recommended that developers ensure
/// that it is extremely unlikely that a customer could generate an ID which is already in use by another
/// customer. If this is the first time a user has signed in with the Custom ID and CreateAccount is set
/// to true, a new PlayFab account will be created and linked to the Custom ID. In this case, no email
/// or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked
/// to the Custom ID, an error indicating this will be returned, so that the title can guide the user
/// through creation of a PlayFab account. Request object for PlayFabClientLoginWithCustomIDAsync.
/// </summary>
typedef struct PlayFabClientLoginWithCustomIDRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) Custom unique identifier for the user, generated by the title.
    /// </summary>
    const char* customId;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithCustomIDRequest;

/// <summary>
/// PlayFabClientLoginWithEmailAddressRequest data model. Email address and password lengths are provided
/// for information purposes. The server will validate that data passed in conforms to the field definition
/// and report errors appropriately. It is recommended that developers not perform this validation locally,
/// so that future updates do not require client updates. Request object for PlayFabClientLoginWithEmailAddressAsync.
/// </summary>
typedef struct PlayFabClientLoginWithEmailAddressRequest
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
    /// Email address for the account.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Password for the PlayFab account (6-100 characters).
    /// </summary>
    const char* password;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithEmailAddressRequest;

/// <summary>
/// PlayFabClientLoginWithFacebookInstantGamesIdRequest data model. Request object for PlayFabClientLoginWithFacebookInstantGamesIdAsync.
/// </summary>
typedef struct PlayFabClientLoginWithFacebookInstantGamesIdRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// Facebook Instant Games signature for the user.
    /// </summary>
    const char* facebookInstantGamesSignature;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithFacebookInstantGamesIdRequest;

/// <summary>
/// PlayFabClientLoginWithFacebookRequest data model. Facebook sign-in is accomplished using the Facebook
/// User Access Token. More information on the Token can be found in the Facebook developer documentation
/// (https://developers.facebook.com/docs/facebook-login/access-tokens/). In Unity, for example, the Token
/// is available as AccessToken in the Facebook SDK ScriptableObject FB. If this is the first time a user
/// has signed in with the Facebook account and CreateAccount is set to true, a new PlayFab account will
/// be created and linked to the provided account's Facebook ID. In this case, no email or username will
/// be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Facebook
/// account, an error indicating this will be returned, so that the title can guide the user through creation
/// of a PlayFab account. Note that titles should never re-use the same Facebook applications between
/// PlayFab Title IDs, as Facebook provides unique user IDs per application and doing so can result in
/// issues with the Facebook ID for the user in their PlayFab account information. If you must re-use
/// an application in a new PlayFab Title ID, please be sure to first unlink all accounts from Facebook,
/// or delete all users in the first Title ID. Request object for PlayFabClientLoginWithFacebookAsync.
/// </summary>
typedef struct PlayFabClientLoginWithFacebookRequest
{
    /// <summary>
    /// Unique identifier from Facebook for the user.
    /// </summary>
    const char* accessToken;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithFacebookRequest;

/// <summary>
/// PlayFabClientLoginWithGameCenterRequest data model. The Game Center player identifier (https://developer.apple.com/library/ios/documentation/Accounts/Reference/ACAccountClassRef/index.html#//apple_ref/occ/instp/ACAccount/identifier)
/// is a generated string which is stored on the local device. As with device identifiers, care must be
/// taken to never expose a player's Game Center identifier to end users, as that could result in a user's
/// account being compromised. If this is the first time a user has signed in with Game Center and CreateAccount
/// is set to true, a new PlayFab account will be created and linked to the Game Center identifier. In
/// this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab
/// account is linked to the Game Center account, an error indicating this will be returned, so that the
/// title can guide the user through creation of a PlayFab account. Request object for PlayFabClientLoginWithGameCenterAsync.
/// </summary>
typedef struct PlayFabClientLoginWithGameCenterRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Unique Game Center player id.
    /// </summary>
    const char* playerId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) The URL for the public encryption key that will be used to verify the signature.
    /// </summary>
    const char* publicKeyUrl;

    /// <summary>
    /// (Optional) A random value used to compute the hash and keep it randomized.
    /// </summary>
    const char* salt;

    /// <summary>
    /// (Optional) The verification signature of the authentication payload.
    /// </summary>
    const char* signature;

    /// <summary>
    /// (Optional) The integer representation of date and time that the signature was created on. PlayFab
    /// will reject authentication signatures not within 10 minutes of the server's current time.
    /// </summary>
    const char* timestamp;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithGameCenterRequest;

/// <summary>
/// PlayFabClientLoginWithGoogleAccountRequest data model. Google sign-in is accomplished by obtaining
/// a Google OAuth 2.0 credential using the Google sign-in for Android APIs on the device and passing
/// it to this API. If this is the first time a user has signed in with the Google account and CreateAccount
/// is set to true, a new PlayFab account will be created and linked to the Google account. Otherwise,
/// if no PlayFab account is linked to the Google account, an error indicating this will be returned,
/// so that the title can guide the user through creation of a PlayFab account. The current (recommended)
/// method for obtaining a Google account credential in an Android application is to call GoogleSignInAccount.getServerAuthCode()
/// and send the auth code as the ServerAuthCode parameter of this API. Before doing this, you must create
/// an OAuth 2.0 web application client ID in the Google API Console and configure its client ID and secret
/// in the PlayFab Game Manager Google Add-on for your title. This method does not require prompting of
/// the user for additional Google account permissions, resulting in a user experience with the least
/// possible friction. For more information about obtaining the server auth code, see https://developers.google.com/identity/sign-in/android/offline-access.
/// The previous (deprecated) method was to obtain an OAuth access token by calling GetAccessToken() on
/// the client and passing it as the AccessToken parameter to this API. for the with the Google OAuth
/// 2.0 Access Token. More information on this change can be found in the Google developer documentation
/// (https://android-developers.googleblog.com/2016/01/play-games-permissions-are-changing-in.html).
/// Request object for PlayFabClientLoginWithGoogleAccountAsync.
/// </summary>
typedef struct PlayFabClientLoginWithGoogleAccountRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) OAuth 2.0 server authentication code obtained on the client by calling the getServerAuthCode()
    /// (https://developers.google.com/identity/sign-in/android/offline-access) Google client API.
    /// </summary>
    const char* serverAuthCode;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithGoogleAccountRequest;

/// <summary>
/// PlayFabClientLoginWithIOSDeviceIDRequest data model. On iOS devices, the identifierForVendor (https://developer.apple.com/library/ios/documentation/UIKit/Reference/UIDevice_Class/index.html#//apple_ref/occ/instp/UIDevice/identifierForVendor)
/// must be used as the DeviceId, as the UIDevice uniqueIdentifier has been deprecated as of iOS 5, and
/// use of the advertisingIdentifier for this purpose will result in failure of Apple's certification
/// process. If this is the first time a user has signed in with the iOS device and CreateAccount is set
/// to true, a new PlayFab account will be created and linked to the vendor-specific iOS device ID. In
/// this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab
/// account is linked to the iOS device, an error indicating this will be returned, so that the title
/// can guide the user through creation of a PlayFab account. Please note that while multiple devices
/// of this type can be linked to a single user account, only the one most recently used to login (or
/// most recently linked) will be reflected in the user's account information. We will be updating to
/// show all linked devices in a future release. Request object for PlayFabClientLoginWithIOSDeviceIDAsync.
/// </summary>
typedef struct PlayFabClientLoginWithIOSDeviceIDRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Vendor-specific iOS identifier for the user's device.
    /// </summary>
    const char* deviceId;

    /// <summary>
    /// (Optional) Specific model of the user's device.
    /// </summary>
    const char* deviceModel;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Specific Operating System version for the user's device.
    /// </summary>
    const char* OS;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithIOSDeviceIDRequest;

/// <summary>
/// PlayFabClientLoginWithKongregateRequest data model. More details regarding Kongregate and their game
/// authentication system can be found at http://developers.kongregate.com/docs/virtual-goods/authentication.
/// Developers must provide the Kongregate user ID and auth token that are generated using the Kongregate
/// client library. PlayFab will combine these identifiers with the title's unique Kongregate app ID to
/// log the player into the Kongregate system. If CreateAccount is set to true and there is not already
/// a user matched to this Kongregate ID, then PlayFab will create a new account for this user and link
/// the ID. In this case, no email or username will be associated with the PlayFab account. If there is
/// already a different PlayFab user linked with this account, then an error will be returned. Request
/// object for PlayFabClientLoginWithKongregateAsync.
/// </summary>
typedef struct PlayFabClientLoginWithKongregateRequest
{
    /// <summary>
    /// (Optional) Token issued by Kongregate's client API for the user.
    /// </summary>
    const char* authTicket;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Numeric user ID assigned by Kongregate.
    /// </summary>
    const char* kongregateId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithKongregateRequest;

/// <summary>
/// PlayFabClientLoginWithNintendoServiceAccountRequest data model. Request object for PlayFabClientLoginWithNintendoServiceAccountAsync.
/// </summary>
typedef struct PlayFabClientLoginWithNintendoServiceAccountRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// The JSON Web token (JWT) returned by Nintendo after login.
    /// </summary>
    const char* identityToken;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithNintendoServiceAccountRequest;

/// <summary>
/// PlayFabClientLoginWithNintendoSwitchDeviceIdRequest data model. Request object for PlayFabClientLoginWithNintendoSwitchDeviceIdAsync.
/// </summary>
typedef struct PlayFabClientLoginWithNintendoSwitchDeviceIdRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Nintendo Switch unique identifier for the user's device.
    /// </summary>
    const char* nintendoSwitchDeviceId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithNintendoSwitchDeviceIdRequest;

/// <summary>
/// PlayFabClientLoginWithOpenIdConnectRequest data model. Request object for PlayFabClientLoginWithOpenIdConnectAsync.
/// </summary>
typedef struct PlayFabClientLoginWithOpenIdConnectRequest
{
    /// <summary>
    /// A name that identifies which configured OpenID Connect provider relationship to use. Maximum
    /// 100 characters.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// The JSON Web token (JWT) returned by the identity provider after login. Represented as the id_token
    /// field in the identity provider's response.
    /// </summary>
    const char* idToken;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithOpenIdConnectRequest;

/// <summary>
/// PlayFabClientLoginWithPlayFabRequest data model. Username and password lengths are provided for information
/// purposes. The server will validate that data passed in conforms to the field definition and report
/// errors appropriately. It is recommended that developers not perform this validation locally, so that
/// future updates to the username or password do not require client updates. Request object for PlayFabClientLoginWithPlayFabAsync.
/// </summary>
typedef struct PlayFabClientLoginWithPlayFabRequest
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
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Password for the PlayFab account (6-100 characters).
    /// </summary>
    const char* password;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// PlayFab username for the account.
    /// </summary>
    const char* username;

} PlayFabClientLoginWithPlayFabRequest;

/// <summary>
/// PlayFabClientLoginWithPSNRequest data model. If this is the first time a user has signed in with
/// the PlayStation Network account and CreateAccount is set to true, a new PlayFab account will be created
/// and linked to the PSN account. In this case, no email or username will be associated with the PlayFab
/// account. Otherwise, if no PlayFab account is linked to the PSN account, an error indicating this will
/// be returned, so that the title can guide the user through creation of a PlayFab account. Request
/// object for PlayFabClientLoginWithPSNAsync.
/// </summary>
typedef struct PlayFabClientLoginWithPSNRequest
{
    /// <summary>
    /// (Optional) Auth code provided by the PSN OAuth provider.
    /// </summary>
    const char* authCode;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Id of the PSN issuer environment. If null, defaults to production environment.
    /// </summary>
    int32_t const* issuerId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) Redirect URI supplied to PSN when requesting an auth code.
    /// </summary>
    const char* redirectUri;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithPSNRequest;

/// <summary>
/// PlayFabClientLoginWithSteamRequest data model. Steam sign-in is accomplished with the Steam Session
/// Ticket. More information on the Ticket can be found in the Steamworks SDK, here: https://partner.steamgames.com/documentation/auth
/// (requires sign-in). NOTE: For Steam authentication to work, the title must be configured with the
/// Steam Application ID and Web API Key in the PlayFab Game Manager (under Steam in the Add-ons Marketplace).
/// You can obtain a Web API Key from the Permissions page of any Group associated with your App ID in
/// the Steamworks site. If this is the first time a user has signed in with the Steam account and CreateAccount
/// is set to true, a new PlayFab account will be created and linked to the provided account's Steam ID.
/// In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab
/// account is linked to the Steam account, an error indicating this will be returned, so that the title
/// can guide the user through creation of a PlayFab account. Request object for PlayFabClientLoginWithSteamAsync.
/// </summary>
typedef struct PlayFabClientLoginWithSteamRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) Authentication token for the user, returned as a byte array from Steam, and converted
    /// to a string (for example, the byte 0x08 should become "08").
    /// </summary>
    const char* steamTicket;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithSteamRequest;

/// <summary>
/// PlayFabClientLoginWithTwitchRequest data model. More details regarding Twitch and their authentication
/// system can be found at https://github.com/justintv/Twitch-API/blob/master/authentication.md. Developers
/// must provide the Twitch access token that is generated using one of the Twitch authentication flows.
/// PlayFab will use the title's unique Twitch Client ID to authenticate the token and log in to the PlayFab
/// system. If CreateAccount is set to true and there is not already a user matched to the Twitch username
/// that generated the token, then PlayFab will create a new account for this user and link the ID. In
/// this case, no email or username will be associated with the PlayFab account. If there is already a
/// different PlayFab user linked with this account, then an error will be returned. Request object for
/// PlayFabClientLoginWithTwitchAsync.
/// </summary>
typedef struct PlayFabClientLoginWithTwitchRequest
{
    /// <summary>
    /// (Optional) Token issued by Twitch's API for the user.
    /// </summary>
    const char* accessToken;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientLoginWithTwitchRequest;

/// <summary>
/// PlayFabClientLoginWithXboxRequest data model. If this is the first time a user has signed in with
/// the Xbox Live account and CreateAccount is set to true, a new PlayFab account will be created and
/// linked to the Xbox Live account. In this case, no email or username will be associated with the PlayFab
/// account. Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating
/// this will be returned, so that the title can guide the user through creation of a PlayFab account.
/// Request object for PlayFabClientLoginWithXboxAsync.
/// </summary>
typedef struct PlayFabClientLoginWithXboxRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

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
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// "").
    /// </summary>
    const char* xboxToken;

} PlayFabClientLoginWithXboxRequest;

/// <summary>
/// PlayFabClientMatchmakeRequest data model. Request object for PlayFabClientMatchmakeAsync.
/// </summary>
typedef struct PlayFabClientMatchmakeRequest
{
    /// <summary>
    /// (Optional) Build version to match against. [Note: Required if LobbyId is not specified].
    /// </summary>
    const char* buildVersion;

    /// <summary>
    /// (Optional) Character to use for stats based matching. Leave null to use account stats.
    /// </summary>
    const char* characterId;

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
    /// (Optional) Game mode to match make against. [Note: Required if LobbyId is not specified].
    /// </summary>
    const char* gameMode;

    /// <summary>
    /// (Optional) Lobby identifier to match make against. This is used to select a specific Game Server
    /// Instance.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// (Optional) Region to match make against. [Note: Required if LobbyId is not specified].
    /// </summary>
    PlayFabClientRegion const* region;

    /// <summary>
    /// (Optional) Start a game session if one with an open slot is not found. Defaults to true.
    /// </summary>
    bool const* startNewIfNoneFound;

    /// <summary>
    /// (Optional) Player statistic to use in finding a match. May be null for no stat-based matching.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) Filter to include and/or exclude Game Server Instances associated with certain Tags.
    /// </summary>
    PlayFabClientCollectionFilter const* tagFilter;

} PlayFabClientMatchmakeRequest;

/// <summary>
/// PlayFabClientMatchmakeResult data model. Result payload for PlayFabClientMatchmakeAsync.
/// </summary>
typedef struct PlayFabClientMatchmakeResult
{
    /// <summary>
    /// (Optional) Timestamp for when the server will expire, if applicable.
    /// </summary>
    const char* expires;

    /// <summary>
    /// (Optional) Unique lobby identifier of the server matched.
    /// </summary>
    const char* lobbyID;

    /// <summary>
    /// (Optional) Time in milliseconds the application is configured to wait on matchmaking results.
    /// </summary>
    int32_t const* pollWaitTimeMS;

    /// <summary>
    /// (Optional) IPV4 address of the server.
    /// </summary>
    const char* serverIPV4Address;

    /// <summary>
    /// (Optional) IPV6 address of the server.
    /// </summary>
    const char* serverIPV6Address;

    /// <summary>
    /// (Optional) Port number to use for non-http communications with the server.
    /// </summary>
    int32_t const* serverPort;

    /// <summary>
    /// (Optional) Public DNS name (if any) of the server.
    /// </summary>
    const char* serverPublicDNSName;

    /// <summary>
    /// (Optional) Result of match making process.
    /// </summary>
    PlayFabClientMatchmakeStatus const* status;

    /// <summary>
    /// (Optional) Server authorization ticket (used by RedeemMatchmakerTicket to validate user insertion
    /// into the game).
    /// </summary>
    const char* ticket;

} PlayFabClientMatchmakeResult;

/// <summary>
/// PlayFabClientModifyUserVirtualCurrencyResult data model. Result payload for PlayFabClientAddUserVirtualCurrencyAsync
/// and PlayFabClientSubtractUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabClientModifyUserVirtualCurrencyResult
{
    /// <summary>
    /// Balance of the virtual currency after modification.
    /// </summary>
    int32_t balance;

    /// <summary>
    /// Amount added or subtracted from the user's virtual currency. Maximum VC balance is Int32 (2,147,483,647).
    /// Any increase over this value will be discarded.
    /// </summary>
    int32_t balanceChange;

    /// <summary>
    /// (Optional) User currency was subtracted from.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Name of the virtual currency which was modified.
    /// </summary>
    const char* virtualCurrency;

} PlayFabClientModifyUserVirtualCurrencyResult;

/// <summary>
/// PlayFabClientOpenTradeRequest data model. Request object for PlayFabClientOpenTradeAsync.
/// </summary>
typedef struct PlayFabClientOpenTradeRequest
{
    /// <summary>
    /// (Optional) Players who are allowed to accept the trade. If null, the trade may be accepted by
    /// any player. If empty, the trade may not be accepted by any player.
    /// </summary>
    const char* const* allowedPlayerIds;

    /// <summary>
    /// Count of allowedPlayerIds
    /// </summary>
    uint32_t allowedPlayerIdsCount;

    /// <summary>
    /// (Optional) Player inventory items offered for trade. If not set, the trade is effectively a gift
    /// request.
    /// </summary>
    const char* const* offeredInventoryInstanceIds;

    /// <summary>
    /// Count of offeredInventoryInstanceIds
    /// </summary>
    uint32_t offeredInventoryInstanceIdsCount;

    /// <summary>
    /// (Optional) Catalog items accepted for the trade. If not set, the trade is effectively a gift.
    /// </summary>
    const char* const* requestedCatalogItemIds;

    /// <summary>
    /// Count of requestedCatalogItemIds
    /// </summary>
    uint32_t requestedCatalogItemIdsCount;

} PlayFabClientOpenTradeRequest;

/// <summary>
/// PlayFabClientOpenTradeResponse data model. Result payload for PlayFabClientOpenTradeAsync.
/// </summary>
typedef struct PlayFabClientOpenTradeResponse
{
    /// <summary>
    /// (Optional) The information about the trade that was just opened.
    /// </summary>
    PlayFabClientTradeInfo const* trade;

} PlayFabClientOpenTradeResponse;

/// <summary>
/// PlayFabClientPayForPurchaseRequest data model. This is the second step in the purchasing process,
/// initiating the purchase transaction with the payment provider (if applicable). For payment provider
/// scenarios, the title should next present the user with the payment provider'sinterface for payment.
/// Once the player has completed the payment with the provider, the title should call ConfirmPurchase
/// tofinalize the process and add the appropriate items to the player inventory. Request object for
/// PlayFabClientPayForPurchaseAsync.
/// </summary>
typedef struct PlayFabClientPayForPurchaseRequest
{
    /// <summary>
    /// Currency to use to fund the purchase.
    /// </summary>
    const char* currency;

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
    /// Purchase order identifier returned from StartPurchase.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// Payment provider to use to fund the purchase.
    /// </summary>
    const char* providerName;

    /// <summary>
    /// (Optional) Payment provider transaction identifier. Required for Facebook Payments.
    /// </summary>
    const char* providerTransactionId;

} PlayFabClientPayForPurchaseRequest;

/// <summary>
/// PlayFabClientPayForPurchaseResult data model. For web-based payment providers, this operation returns
/// the URL to which the user should be directed inorder to approve the purchase. Items added to the user
/// inventory as a result of this operation will be marked as unconfirmed. Result payload for PlayFabClientPayForPurchaseAsync.
/// </summary>
typedef struct PlayFabClientPayForPurchaseResult
{
    /// <summary>
    /// Local credit applied to the transaction (provider specific).
    /// </summary>
    uint32_t creditApplied;

    /// <summary>
    /// (Optional) Purchase order identifier.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// (Optional) Provider used for the transaction.
    /// </summary>
    const char* providerData;

    /// <summary>
    /// (Optional) A token generated by the provider to authenticate the request (provider-specific).
    /// </summary>
    const char* providerToken;

    /// <summary>
    /// (Optional) URL to the purchase provider page that details the purchase.
    /// </summary>
    const char* purchaseConfirmationPageURL;

    /// <summary>
    /// (Optional) Currency for the transaction, may be a virtual currency or real money.
    /// </summary>
    const char* purchaseCurrency;

    /// <summary>
    /// Cost of the transaction.
    /// </summary>
    uint32_t purchasePrice;

    /// <summary>
    /// (Optional) Status of the transaction.
    /// </summary>
    PlayFabClientTransactionStatus const* status;

    /// <summary>
    /// (Optional) Virtual currencies granted by the transaction, if any.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* vCAmount;

    /// <summary>
    /// Count of vCAmount
    /// </summary>
    uint32_t vCAmountCount;

    /// <summary>
    /// (Optional) Current virtual currency balances for the user.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* virtualCurrency;

    /// <summary>
    /// Count of virtualCurrency
    /// </summary>
    uint32_t virtualCurrencyCount;

} PlayFabClientPayForPurchaseResult;

/// <summary>
/// PlayFabClientPaymentOption data model.
/// </summary>
typedef struct PlayFabClientPaymentOption
{
    /// <summary>
    /// (Optional) Specific currency to use to fund the purchase.
    /// </summary>
    const char* currency;

    /// <summary>
    /// Amount of the specified currency needed for the purchase.
    /// </summary>
    uint32_t price;

    /// <summary>
    /// (Optional) Name of the purchase provider for this option.
    /// </summary>
    const char* providerName;

    /// <summary>
    /// Amount of existing credit the user has with the provider.
    /// </summary>
    uint32_t storeCredit;

} PlayFabClientPaymentOption;

/// <summary>
/// PlayFabClientPurchaseItemRequest data model. Please note that the processing time for inventory grants
/// and purchases increases fractionally the more items are in the inventory, and the more items are in
/// the grant/purchase operation (with each item in a bundle being a distinct add). Request object for
/// PlayFabClientPurchaseItemAsync.
/// </summary>
typedef struct PlayFabClientPurchaseItemRequest
{
    /// <summary>
    /// (Optional) Catalog version for the items to be purchased (defaults to most recent version.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

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
    /// Unique identifier of the item to purchase.
    /// </summary>
    const char* itemId;

    /// <summary>
    /// Price the client expects to pay for the item (in case a new catalog or store was uploaded, with
    /// new prices).
    /// </summary>
    int32_t price;

    /// <summary>
    /// (Optional) Store to buy this item through. If not set, prices default to those in the catalog.
    /// </summary>
    const char* storeId;

    /// <summary>
    /// Virtual currency to use to purchase the item.
    /// </summary>
    const char* virtualCurrency;

} PlayFabClientPurchaseItemRequest;

/// <summary>
/// PlayFabClientPurchaseItemResult data model. Result payload for PlayFabClientPurchaseItemAsync.
/// </summary>
typedef struct PlayFabClientPurchaseItemResult
{
    /// <summary>
    /// (Optional) Details for the items purchased.
    /// </summary>
    PlayFabItemInstance const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

} PlayFabClientPurchaseItemResult;

/// <summary>
/// PlayFabClientPurchaseReceiptFulfillment data model.
/// </summary>
typedef struct PlayFabClientPurchaseReceiptFulfillment
{
    /// <summary>
    /// (Optional) Items granted to the player in fulfillment of the validated receipt.
    /// </summary>
    PlayFabItemInstance const* const* fulfilledItems;

    /// <summary>
    /// Count of fulfilledItems
    /// </summary>
    uint32_t fulfilledItemsCount;

    /// <summary>
    /// (Optional) Source of the payment price information for the recorded purchase transaction. A value
    /// of 'Request' indicates that the price specified in the request was used, whereas a value of 'Catalog'
    /// indicates that the real-money price of the catalog item matching the product ID in the validated
    /// receipt transaction and the currency specified in the request (defaulting to USD) was used.
    /// </summary>
    const char* recordedPriceSource;

    /// <summary>
    /// (Optional) Currency used to purchase the items (ISO 4217 currency code).
    /// </summary>
    const char* recordedTransactionCurrency;

    /// <summary>
    /// (Optional) Amount of the stated currency paid for the items, in centesimal units.
    /// </summary>
    uint32_t const* recordedTransactionTotal;

} PlayFabClientPurchaseReceiptFulfillment;

/// <summary>
/// PlayFabClientRedeemCouponRequest data model. Coupon codes can be created for any item, or set of
/// items, in the catalog for the title. This operation causes the coupon to be consumed, and the specific
/// items to be awarded to the user. Attempting to re-use an already consumed code, or a code which has
/// not yet been created in the service, will result in an error. Request object for PlayFabClientRedeemCouponAsync.
/// </summary>
typedef struct PlayFabClientRedeemCouponRequest
{
    /// <summary>
    /// (Optional) Catalog version of the coupon. If null, uses the default catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Optional identifier for the Character that should receive the item. If null, item
    /// is added to the player.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// Generated coupon code to redeem.
    /// </summary>
    const char* couponCode;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientRedeemCouponRequest;

/// <summary>
/// PlayFabClientRedeemCouponResult data model. Result payload for PlayFabClientRedeemCouponAsync.
/// </summary>
typedef struct PlayFabClientRedeemCouponResult
{
    /// <summary>
    /// (Optional) Items granted to the player as a result of redeeming the coupon.
    /// </summary>
    PlayFabItemInstance const* const* grantedItems;

    /// <summary>
    /// Count of grantedItems
    /// </summary>
    uint32_t grantedItemsCount;

} PlayFabClientRedeemCouponResult;

/// <summary>
/// PlayFabClientRefreshPSNAuthTokenRequest data model. Request object for PlayFabClientRefreshPSNAuthTokenAsync.
/// </summary>
typedef struct PlayFabClientRefreshPSNAuthTokenRequest
{
    /// <summary>
    /// Auth code returned by PSN OAuth system.
    /// </summary>
    const char* authCode;

    /// <summary>
    /// (Optional) Id of the PSN issuer environment. If null, defaults to production environment.
    /// </summary>
    int32_t const* issuerId;

    /// <summary>
    /// Redirect URI supplied to PSN when requesting an auth code.
    /// </summary>
    const char* redirectUri;

} PlayFabClientRefreshPSNAuthTokenRequest;

/// <summary>
/// PlayFabClientRegisterForIOSPushNotificationRequest data model. The steps to configure and send Push
/// Notifications is described in the PlayFab tutorials, here: https://docs.microsoft.com/gaming/playfab/features/engagement/push-notifications/quickstart.
/// Request object for PlayFabClientRegisterForIOSPushNotificationAsync.
/// </summary>
typedef struct PlayFabClientRegisterForIOSPushNotificationRequest
{
    /// <summary>
    /// (Optional) Message to display when confirming push notification.
    /// </summary>
    const char* confirmationMessage;

    /// <summary>
    /// Unique token generated by the Apple Push Notification service when the title registered to receive
    /// push notifications.
    /// </summary>
    const char* deviceToken;

    /// <summary>
    /// (Optional) If true, send a test push message immediately after sucessful registration. Defaults
    /// to false.
    /// </summary>
    bool const* sendPushNotificationConfirmation;

} PlayFabClientRegisterForIOSPushNotificationRequest;

/// <summary>
/// PlayFabClientRegisterPlayFabUserRequest data model. Request object for PlayFabClientRegisterPlayFabUserAsync.
/// </summary>
typedef struct PlayFabClientRegisterPlayFabUserRequest
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
    /// (Optional) An optional parameter for setting the display name for this title (3-25 characters).
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) User email address attached to their account.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabClientGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Password for the PlayFab account (6-100 characters).
    /// </summary>
    const char* password;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) An optional parameter that specifies whether both the username and email parameters
    /// are required. If true, both parameters are required; if false, the user must supply either the
    /// username or email parameter. The default value is true.
    /// </summary>
    bool const* requireBothUsernameAndEmail;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) PlayFab username for the account (3-20 characters).
    /// </summary>
    const char* username;

} PlayFabClientRegisterPlayFabUserRequest;

/// <summary>
/// PlayFabClientRemoveContactEmailRequest data model. This API removes an existing contact email from
/// the player's profile. Request object for PlayFabClientRemoveContactEmailAsync.
/// </summary>
typedef struct PlayFabClientRemoveContactEmailRequest
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

} PlayFabClientRemoveContactEmailRequest;

/// <summary>
/// PlayFabClientRemoveFriendRequest data model. Request object for PlayFabClientRemoveFriendAsync.
/// </summary>
typedef struct PlayFabClientRemoveFriendRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account which is to be removed.
    /// </summary>
    const char* friendPlayFabId;

} PlayFabClientRemoveFriendRequest;

/// <summary>
/// PlayFabClientRemoveGenericIDRequest data model. Request object for PlayFabClientRemoveGenericIDAsync.
/// </summary>
typedef struct PlayFabClientRemoveGenericIDRequest
{
    /// <summary>
    /// Generic service identifier to be removed from the player.
    /// </summary>
    PlayFabClientGenericServiceId const* genericId;

} PlayFabClientRemoveGenericIDRequest;

/// <summary>
/// PlayFabClientRemoveSharedGroupMembersRequest data model. Request object for PlayFabClientRemoveSharedGroupMembersAsync.
/// </summary>
typedef struct PlayFabClientRemoveSharedGroupMembersRequest
{
    /// <summary>
    /// An array of unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* const* playFabIds;

    /// <summary>
    /// Count of playFabIds
    /// </summary>
    uint32_t playFabIdsCount;

    /// <summary>
    /// Unique identifier for the shared group.
    /// </summary>
    const char* sharedGroupId;

} PlayFabClientRemoveSharedGroupMembersRequest;

/// <summary>
/// PlayFabClientReportAdActivityRequest data model. Report ad activity. Request object for PlayFabClientReportAdActivityAsync.
/// </summary>
typedef struct PlayFabClientReportAdActivityRequest
{
    /// <summary>
    /// Type of activity, may be Opened, Closed, Start or End.
    /// </summary>
    PlayFabClientAdActivity activity;

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
    /// Unique ID of the placement to report for.
    /// </summary>
    const char* placementId;

    /// <summary>
    /// Unique ID of the reward the player was offered.
    /// </summary>
    const char* rewardId;

} PlayFabClientReportAdActivityRequest;

/// <summary>
/// PlayFabClientReportPlayerClientRequest data model. Request object for PlayFabClientReportPlayerAsync.
/// </summary>
typedef struct PlayFabClientReportPlayerClientRequest
{
    /// <summary>
    /// (Optional) Optional additional comment by reporting player.
    /// </summary>
    const char* comment;

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
    /// Unique PlayFab identifier of the reported player.
    /// </summary>
    const char* reporteeId;

} PlayFabClientReportPlayerClientRequest;

/// <summary>
/// PlayFabClientReportPlayerClientResult data model. Players are currently limited to five reports per
/// day. Attempts by a single user account to submit reports beyond five will result in Updated being
/// returned as false. Result payload for PlayFabClientReportPlayerAsync.
/// </summary>
typedef struct PlayFabClientReportPlayerClientResult
{
    /// <summary>
    /// The number of remaining reports which may be filed today.
    /// </summary>
    int32_t submissionsRemaining;

} PlayFabClientReportPlayerClientResult;

/// <summary>
/// PlayFabClientRestoreIOSPurchasesRequest data model. The title should obtain a refresh receipt via
/// restoreCompletedTransactions in the SKPaymentQueue of the Apple StoreKit and pass that in to this
/// call. The resultant receipt contains new receipt instances for all non-consumable goods previously
/// purchased by the user. This API call iterates through every purchase in the receipt and restores the
/// items if they still exist in the catalog and can be validated. Request object for PlayFabClientRestoreIOSPurchasesAsync.
/// </summary>
typedef struct PlayFabClientRestoreIOSPurchasesRequest
{
    /// <summary>
    /// (Optional) Catalog version of the restored items. If null, defaults to primary catalog.
    /// </summary>
    const char* catalogVersion;

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
    /// Base64 encoded receipt data, passed back by the App Store as a result of a successful purchase.
    /// </summary>
    const char* receiptData;

} PlayFabClientRestoreIOSPurchasesRequest;

/// <summary>
/// PlayFabClientRestoreIOSPurchasesResult data model. Once verified, the valid items will be restored
/// into the user's inventory. Result payload for PlayFabClientRestoreIOSPurchasesAsync.
/// </summary>
typedef struct PlayFabClientRestoreIOSPurchasesResult
{
    /// <summary>
    /// (Optional) Fulfilled inventory items and recorded purchases in fulfillment of the validated receipt
    /// transactions.
    /// </summary>
    PlayFabClientPurchaseReceiptFulfillment const* const* fulfillments;

    /// <summary>
    /// Count of fulfillments
    /// </summary>
    uint32_t fulfillmentsCount;

} PlayFabClientRestoreIOSPurchasesResult;

/// <summary>
/// PlayFabClientRewardAdActivityRequest data model. Details on which placement and reward to perform
/// a grant on. Request object for PlayFabClientRewardAdActivityAsync.
/// </summary>
typedef struct PlayFabClientRewardAdActivityRequest
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
    /// Placement unique ID.
    /// </summary>
    const char* placementId;

    /// <summary>
    /// Reward unique ID.
    /// </summary>
    const char* rewardId;

} PlayFabClientRewardAdActivityRequest;

/// <summary>
/// PlayFabClientRewardAdActivityResult data model. Result for rewarding an ad activity. Result payload
/// for PlayFabClientRewardAdActivityAsync.
/// </summary>
typedef struct PlayFabClientRewardAdActivityResult
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
    PlayFabClientAdRewardResults const* rewardResults;

} PlayFabClientRewardAdActivityResult;

/// <summary>
/// PlayFabClientSendAccountRecoveryEmailRequest data model. If the account in question is a "temporary"
/// account (for example, one that was created via a call to LoginFromIOSDeviceID), thisfunction will
/// have no effect. Only PlayFab accounts which have valid email addresses will be able to receive a password
/// reset email using this API. Request object for PlayFabClientSendAccountRecoveryEmailAsync.
/// </summary>
typedef struct PlayFabClientSendAccountRecoveryEmailRequest
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
    /// User email address attached to their account.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) The email template id of the account recovery email template to send.
    /// </summary>
    const char* emailTemplateId;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabClientSendAccountRecoveryEmailRequest;

/// <summary>
/// PlayFabClientSetFriendTagsRequest data model. This operation is not additive. It will completely
/// replace the tag list for the specified user. Please note that only users in the PlayFab friends list
/// can be assigned tags. Attempting to set a tag on a friend only included in the friends list from a
/// social site integration (such as Facebook or Steam) will return the AccountNotFound error. Request
/// object for PlayFabClientSetFriendTagsAsync.
/// </summary>
typedef struct PlayFabClientSetFriendTagsRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account to which the tag(s) should be applied.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// Array of tags to set on the friend account.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PlayFabClientSetFriendTagsRequest;

/// <summary>
/// PlayFabClientSetPlayerSecretRequest data model. APIs that require signatures require that the player
/// have a configured Player Secret Key that is used to sign all requests. Players that don't have a secret
/// will be blocked from making API calls until it is configured. To create a signature header add a SHA256
/// hashed string containing UTF8 encoded JSON body as it will be sent to the server, the current time
/// in UTC formatted to ISO 8601, and the players secret formatted as 'body.date.secret'. Place the resulting
/// hash into the header X-PlayFab-Signature, along with a header X-PlayFab-Timestamp of the same UTC
/// timestamp used in the signature. Request object for PlayFabClientSetPlayerSecretAsync.
/// </summary>
typedef struct PlayFabClientSetPlayerSecretRequest
{
    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

} PlayFabClientSetPlayerSecretRequest;

/// <summary>
/// PlayFabClientStartGameRequest data model. This API must be enabled for use as an option in the game
/// manager website. It is disabled by default. Request object for PlayFabClientStartGameAsync.
/// </summary>
typedef struct PlayFabClientStartGameRequest
{
    /// <summary>
    /// Version information for the build of the game server which is to be started.
    /// </summary>
    const char* buildVersion;

    /// <summary>
    /// (Optional) Character to use for stats based matching. Leave null to use account stats.
    /// </summary>
    const char* characterId;

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
    /// The title-defined game mode this server is to be running (defaults to 0 if there is only one
    /// mode).
    /// </summary>
    const char* gameMode;

    /// <summary>
    /// The region to associate this server with for match filtering.
    /// </summary>
    PlayFabClientRegion region;

    /// <summary>
    /// (Optional) Player statistic for others to use in finding this game. May be null for no stat-based
    /// matching.
    /// </summary>
    const char* statisticName;

} PlayFabClientStartGameRequest;

/// <summary>
/// PlayFabClientStartGameResult data model. Result payload for PlayFabClientStartGameAsync.
/// </summary>
typedef struct PlayFabClientStartGameResult
{
    /// <summary>
    /// (Optional) Timestamp for when the server should expire, if applicable.
    /// </summary>
    const char* expires;

    /// <summary>
    /// (Optional) Unique identifier for the lobby of the server started.
    /// </summary>
    const char* lobbyID;

    /// <summary>
    /// (Optional) Password required to log into the server.
    /// </summary>
    const char* password;

    /// <summary>
    /// (Optional) Server IPV4 address.
    /// </summary>
    const char* serverIPV4Address;

    /// <summary>
    /// (Optional) Server IPV6 address.
    /// </summary>
    const char* serverIPV6Address;

    /// <summary>
    /// (Optional) Port on the server to be used for communication.
    /// </summary>
    int32_t const* serverPort;

    /// <summary>
    /// (Optional) Server public DNS name.
    /// </summary>
    const char* serverPublicDNSName;

    /// <summary>
    /// (Optional) Unique identifier for the server.
    /// </summary>
    const char* ticket;

} PlayFabClientStartGameResult;

/// <summary>
/// PlayFabClientStartPurchaseRequest data model. This is the first step in the purchasing process. For
/// security purposes, once the order (or "cart") has been created, additional inventory objects may no
/// longer be added. In addition, inventory objects will be locked to the current prices, regardless of
/// any subsequent changes at the catalog level which may occur during the next two steps. Request object
/// for PlayFabClientStartPurchaseAsync.
/// </summary>
typedef struct PlayFabClientStartPurchaseRequest
{
    /// <summary>
    /// (Optional) Catalog version for the items to be purchased. Defaults to most recent catalog.
    /// </summary>
    const char* catalogVersion;

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
    /// Array of items to purchase.
    /// </summary>
    PlayFabClientItemPurchaseRequest const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

    /// <summary>
    /// (Optional) Store through which to purchase items. If not set, prices will be pulled from the
    /// catalog itself.
    /// </summary>
    const char* storeId;

} PlayFabClientStartPurchaseRequest;

/// <summary>
/// PlayFabClientStartPurchaseResult data model. Result payload for PlayFabClientStartPurchaseAsync.
/// </summary>
typedef struct PlayFabClientStartPurchaseResult
{
    /// <summary>
    /// (Optional) Cart items to be purchased.
    /// </summary>
    PlayFabClientCartItem const* const* contents;

    /// <summary>
    /// Count of contents
    /// </summary>
    uint32_t contentsCount;

    /// <summary>
    /// (Optional) Purchase order identifier.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// (Optional) Available methods by which the user can pay.
    /// </summary>
    PlayFabClientPaymentOption const* const* paymentOptions;

    /// <summary>
    /// Count of paymentOptions
    /// </summary>
    uint32_t paymentOptionsCount;

    /// <summary>
    /// (Optional) Current virtual currency totals for the user.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* virtualCurrencyBalances;

    /// <summary>
    /// Count of virtualCurrencyBalances
    /// </summary>
    uint32_t virtualCurrencyBalancesCount;

} PlayFabClientStartPurchaseResult;

/// <summary>
/// PlayFabClientStatisticUpdate data model.
/// </summary>
typedef struct PlayFabClientStatisticUpdate
{
    /// <summary>
    /// Unique name of the statistic.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// Statistic value for the player.
    /// </summary>
    int32_t value;

    /// <summary>
    /// (Optional) For updates to an existing statistic value for a player, the version of the statistic
    /// when it was loaded. Null when setting the statistic value for the first time.
    /// </summary>
    uint32_t const* version;

} PlayFabClientStatisticUpdate;

/// <summary>
/// PlayFabClientSubtractUserVirtualCurrencyRequest data model. This API must be enabled for use as an
/// option in the game manager website. It is disabled by default. Request object for PlayFabClientSubtractUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabClientSubtractUserVirtualCurrencyRequest
{
    /// <summary>
    /// Amount to be subtracted from the user balance of the specified virtual currency.
    /// </summary>
    int32_t amount;

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
    /// Name of the virtual currency which is to be decremented.
    /// </summary>
    const char* virtualCurrency;

} PlayFabClientSubtractUserVirtualCurrencyRequest;

/// <summary>
/// PlayFabClientUnlinkAndroidDeviceIDRequest data model. Request object for PlayFabClientUnlinkAndroidDeviceIDAsync.
/// </summary>
typedef struct PlayFabClientUnlinkAndroidDeviceIDRequest
{
    /// <summary>
    /// (Optional) Android device identifier for the user's device. If not specified, the most recently
    /// signed in Android Device ID will be used.
    /// </summary>
    const char* androidDeviceId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientUnlinkAndroidDeviceIDRequest;

/// <summary>
/// PlayFabClientUnlinkAppleRequest data model. Request object for PlayFabClientUnlinkAppleAsync.
/// </summary>
typedef struct PlayFabClientUnlinkAppleRequest
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

} PlayFabClientUnlinkAppleRequest;

/// <summary>
/// PlayFabClientUnlinkCustomIDRequest data model. Request object for PlayFabClientUnlinkCustomIDAsync.
/// </summary>
typedef struct PlayFabClientUnlinkCustomIDRequest
{
    /// <summary>
    /// (Optional) Custom unique identifier for the user, generated by the title. If not specified, the
    /// most recently signed in Custom ID will be used.
    /// </summary>
    const char* customId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientUnlinkCustomIDRequest;

/// <summary>
/// PlayFabClientUnlinkFacebookAccountRequest data model. Request object for PlayFabClientUnlinkFacebookAccountAsync.
/// </summary>
typedef struct PlayFabClientUnlinkFacebookAccountRequest
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

} PlayFabClientUnlinkFacebookAccountRequest;

/// <summary>
/// PlayFabClientUnlinkFacebookInstantGamesIdRequest data model. Request object for PlayFabClientUnlinkFacebookInstantGamesIdAsync.
/// </summary>
typedef struct PlayFabClientUnlinkFacebookInstantGamesIdRequest
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
    /// (Optional) Facebook Instant Games identifier for the user. If not specified, the most recently
    /// signed in ID will be used.
    /// </summary>
    const char* facebookInstantGamesId;

} PlayFabClientUnlinkFacebookInstantGamesIdRequest;

/// <summary>
/// PlayFabClientUnlinkGameCenterAccountRequest data model. Request object for PlayFabClientUnlinkGameCenterAccountAsync.
/// </summary>
typedef struct PlayFabClientUnlinkGameCenterAccountRequest
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

} PlayFabClientUnlinkGameCenterAccountRequest;

/// <summary>
/// PlayFabClientUnlinkGoogleAccountRequest data model. Request object for PlayFabClientUnlinkGoogleAccountAsync.
/// </summary>
typedef struct PlayFabClientUnlinkGoogleAccountRequest
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

} PlayFabClientUnlinkGoogleAccountRequest;

/// <summary>
/// PlayFabClientUnlinkIOSDeviceIDRequest data model. Request object for PlayFabClientUnlinkIOSDeviceIDAsync.
/// </summary>
typedef struct PlayFabClientUnlinkIOSDeviceIDRequest
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
    /// (Optional) Vendor-specific iOS identifier for the user's device. If not specified, the most recently
    /// signed in iOS Device ID will be used.
    /// </summary>
    const char* deviceId;

} PlayFabClientUnlinkIOSDeviceIDRequest;

/// <summary>
/// PlayFabClientUnlinkKongregateAccountRequest data model. Request object for PlayFabClientUnlinkKongregateAsync.
/// </summary>
typedef struct PlayFabClientUnlinkKongregateAccountRequest
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

} PlayFabClientUnlinkKongregateAccountRequest;

/// <summary>
/// PlayFabClientUnlinkNintendoServiceAccountRequest data model. Request object for PlayFabClientUnlinkNintendoServiceAccountAsync.
/// </summary>
typedef struct PlayFabClientUnlinkNintendoServiceAccountRequest
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

} PlayFabClientUnlinkNintendoServiceAccountRequest;

/// <summary>
/// PlayFabClientUnlinkNintendoSwitchDeviceIdRequest data model. Request object for PlayFabClientUnlinkNintendoSwitchDeviceIdAsync.
/// </summary>
typedef struct PlayFabClientUnlinkNintendoSwitchDeviceIdRequest
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
    /// (Optional) Nintendo Switch Device identifier for the user. If not specified, the most recently
    /// signed in device ID will be used.
    /// </summary>
    const char* nintendoSwitchDeviceId;

} PlayFabClientUnlinkNintendoSwitchDeviceIdRequest;

/// <summary>
/// PlayFabClientUnlinkOpenIdConnectRequest data model. Request object for PlayFabClientUnlinkOpenIdConnectAsync.
/// </summary>
typedef struct PlayFabClientUnlinkOpenIdConnectRequest
{
    /// <summary>
    /// A name that identifies which configured OpenID Connect provider relationship to use. Maximum
    /// 100 characters.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientUnlinkOpenIdConnectRequest;

/// <summary>
/// PlayFabClientUnlinkPSNAccountRequest data model. Request object for PlayFabClientUnlinkPSNAccountAsync.
/// </summary>
typedef struct PlayFabClientUnlinkPSNAccountRequest
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

} PlayFabClientUnlinkPSNAccountRequest;

/// <summary>
/// PlayFabClientUnlinkSteamAccountRequest data model. Request object for PlayFabClientUnlinkSteamAccountAsync.
/// </summary>
typedef struct PlayFabClientUnlinkSteamAccountRequest
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

} PlayFabClientUnlinkSteamAccountRequest;

/// <summary>
/// PlayFabClientUnlinkTwitchAccountRequest data model. Request object for PlayFabClientUnlinkTwitchAsync.
/// </summary>
typedef struct PlayFabClientUnlinkTwitchAccountRequest
{
    /// <summary>
    /// (Optional) Valid token issued by Twitch. Used to specify which twitch account to unlink from
    /// the profile. By default it uses the one that is present on the profile.
    /// </summary>
    const char* accessToken;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientUnlinkTwitchAccountRequest;

/// <summary>
/// PlayFabClientUnlinkXboxAccountRequest data model. Request object for PlayFabClientUnlinkXboxAccountAsync.
/// </summary>
typedef struct PlayFabClientUnlinkXboxAccountRequest
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

} PlayFabClientUnlinkXboxAccountRequest;

/// <summary>
/// PlayFabClientUnlockContainerInstanceRequest data model. Specify the container and optionally the
/// catalogVersion for the container to open. Request object for PlayFabClientUnlockContainerInstanceAsync.
/// </summary>
typedef struct PlayFabClientUnlockContainerInstanceRequest
{
    /// <summary>
    /// (Optional) Specifies the catalog version that should be used to determine container contents.
    /// If unspecified, uses catalog associated with the item instance.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// ItemInstanceId of the container to unlock.
    /// </summary>
    const char* containerItemInstanceId;

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
    /// (Optional) ItemInstanceId of the key that will be consumed by unlocking this container. If the
    /// container requires a key, this parameter is required.
    /// </summary>
    const char* keyItemInstanceId;

} PlayFabClientUnlockContainerInstanceRequest;

/// <summary>
/// PlayFabClientUnlockContainerItemRequest data model. Specify the type of container to open and optionally
/// the catalogVersion for the container to open. Request object for PlayFabClientUnlockContainerItemAsync.
/// </summary>
typedef struct PlayFabClientUnlockContainerItemRequest
{
    /// <summary>
    /// (Optional) Specifies the catalog version that should be used to determine container contents.
    /// If unspecified, uses default/primary catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// Catalog ItemId of the container type to unlock.
    /// </summary>
    const char* containerItemId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientUnlockContainerItemRequest;

/// <summary>
/// PlayFabClientUnlockContainerItemResult data model. The items and vc found within the container. These
/// will be added and stacked in the appropriate inventory. Result payload for PlayFabClientUnlockContainerInstanceAsync
/// and PlayFabClientUnlockContainerItemAsync.
/// </summary>
typedef struct PlayFabClientUnlockContainerItemResult
{
    /// <summary>
    /// (Optional) Items granted to the player as a result of unlocking the container.
    /// </summary>
    PlayFabItemInstance const* const* grantedItems;

    /// <summary>
    /// Count of grantedItems
    /// </summary>
    uint32_t grantedItemsCount;

    /// <summary>
    /// (Optional) Unique instance identifier of the container unlocked.
    /// </summary>
    const char* unlockedItemInstanceId;

    /// <summary>
    /// (Optional) Unique instance identifier of the key used to unlock the container, if applicable.
    /// </summary>
    const char* unlockedWithItemInstanceId;

    /// <summary>
    /// (Optional) Virtual currency granted to the player as a result of unlocking the container.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* virtualCurrency;

    /// <summary>
    /// Count of virtualCurrency
    /// </summary>
    uint32_t virtualCurrencyCount;

} PlayFabClientUnlockContainerItemResult;

/// <summary>
/// PlayFabClientUpdateAvatarUrlRequest data model. Request object for PlayFabClientUpdateAvatarUrlAsync.
/// </summary>
typedef struct PlayFabClientUpdateAvatarUrlRequest
{
    /// <summary>
    /// URL of the avatar image. If empty, it removes the existing avatar URL.
    /// </summary>
    const char* imageUrl;

} PlayFabClientUpdateAvatarUrlRequest;

/// <summary>
/// PlayFabClientUpdateCharacterDataRequest data model. This function performs an additive update of
/// the arbitrary strings containing the custom data for the character. In updating the custom data object,
/// keys which already exist in the object will have their values overwritten, while keys with null values
/// will be removed. New keys will be added, with the given values. No other key-value pairs will be changed
/// apart from those specified in the call. Request object for PlayFabClientUpdateCharacterDataAsync.
/// </summary>
typedef struct PlayFabClientUpdateCharacterDataRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

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
    /// (Optional) Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace,
    /// are limited in size, and may not begin with a '!' character or be null.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

    /// <summary>
    /// (Optional) Optional list of Data-keys to remove from UserData. Some SDKs cannot insert null-values
    /// into Data due to language constraints. Use this to delete the keys directly.
    /// </summary>
    const char* const* keysToRemove;

    /// <summary>
    /// Count of keysToRemove
    /// </summary>
    uint32_t keysToRemoveCount;

    /// <summary>
    /// (Optional) Permission to be applied to all user data keys written in this request. Defaults to
    /// "private" if not set.
    /// </summary>
    PlayFabUserDataPermission const* permission;

} PlayFabClientUpdateCharacterDataRequest;

/// <summary>
/// PlayFabClientUpdateCharacterDataResult data model. Result payload for PlayFabClientUpdateCharacterDataAsync.
/// </summary>
typedef struct PlayFabClientUpdateCharacterDataResult
{
    /// <summary>
    /// Indicates the current version of the data that has been set. This is incremented with every set
    /// call for that type of data (read-only, internal, etc). This version can be provided in Get calls
    /// to find updated data.
    /// </summary>
    uint32_t dataVersion;

} PlayFabClientUpdateCharacterDataResult;

/// <summary>
/// PlayFabClientUpdateCharacterStatisticsRequest data model. Enable this option with the 'Allow Client
/// to Post Player Statistics' option in PlayFab GameManager for your title. However, this is not best
/// practice, as this data will no longer be safely controlled by the server. This operation is additive.
/// Character Statistics not currently defined will be added, while those already defined will be updated
/// with the given values. All other user statistics will remain unchanged. Character statistics are used
/// by the character-leaderboard apis, and accessible for custom game-logic. Request object for PlayFabClientUpdateCharacterStatisticsAsync.
/// </summary>
typedef struct PlayFabClientUpdateCharacterStatisticsRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Statistics to be updated with the provided values, in the Key(string), Value(int)
    /// pattern.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* characterStatistics;

    /// <summary>
    /// Count of characterStatistics
    /// </summary>
    uint32_t characterStatisticsCount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabClientUpdateCharacterStatisticsRequest;

/// <summary>
/// PlayFabClientUpdatePlayerStatisticsRequest data model. Enable this option with the 'Allow Client
/// to Post Player Statistics' option in PlayFab GameManager for your title. However, this is not best
/// practice, as this data will no longer be safely controlled by the server. This operation is additive.
/// Statistics not currently defined will be added, while those already defined will be updated with the
/// given values. All other user statistics will remain unchanged. Note that if the statistic is intended
/// to have a reset period, the UpdatePlayerStatisticDefinition API call can be used to define that reset
/// period. Once a statistic has been versioned (reset), the now-previous version can still be written
/// to for up a short, pre-defined period (currently 10 seconds), using the Version parameter in this
/// call. Request object for PlayFabClientUpdatePlayerStatisticsAsync.
/// </summary>
typedef struct PlayFabClientUpdatePlayerStatisticsRequest
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
    /// Statistics to be updated with the provided values.
    /// </summary>
    PlayFabClientStatisticUpdate const* const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

} PlayFabClientUpdatePlayerStatisticsRequest;

/// <summary>
/// PlayFabClientUpdateSharedGroupDataRequest data model. Note that in the case of multiple calls to
/// write to the same shared group data keys, the last write received by the PlayFab service will determine
/// the value available to subsequent read operations. For scenarios requiring coordination of data updates,
/// it is recommended that titles make use of user data with read permission set to public, or a combination
/// of user data and shared group data. Request object for PlayFabClientUpdateSharedGroupDataAsync.
/// </summary>
typedef struct PlayFabClientUpdateSharedGroupDataRequest
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
    /// (Optional) Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace,
    /// are limited in size, and may not begin with a '!' character or be null.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

    /// <summary>
    /// (Optional) Optional list of Data-keys to remove from UserData. Some SDKs cannot insert null-values
    /// into Data due to language constraints. Use this to delete the keys directly.
    /// </summary>
    const char* const* keysToRemove;

    /// <summary>
    /// Count of keysToRemove
    /// </summary>
    uint32_t keysToRemoveCount;

    /// <summary>
    /// (Optional) Permission to be applied to all user data keys in this request.
    /// </summary>
    PlayFabUserDataPermission const* permission;

    /// <summary>
    /// Unique identifier for the shared group.
    /// </summary>
    const char* sharedGroupId;

} PlayFabClientUpdateSharedGroupDataRequest;

/// <summary>
/// PlayFabClientUpdateUserDataRequest data model. This function performs an additive update of the arbitrary
/// strings containing the custom data for the user. In updating the custom data object, keys which already
/// exist in the object will have their values overwritten, while keys with null values will be removed.
/// New keys will be added, with the given values. No other key-value pairs will be changed apart from
/// those specified in the call. Request object for PlayFabClientUpdateUserDataAsync and PlayFabClientUpdateUserPublisherDataAsync.
/// </summary>
typedef struct PlayFabClientUpdateUserDataRequest
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
    /// (Optional) Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace,
    /// are limited in size, and may not begin with a '!' character or be null.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

    /// <summary>
    /// (Optional) Optional list of Data-keys to remove from UserData. Some SDKs cannot insert null-values
    /// into Data due to language constraints. Use this to delete the keys directly.
    /// </summary>
    const char* const* keysToRemove;

    /// <summary>
    /// Count of keysToRemove
    /// </summary>
    uint32_t keysToRemoveCount;

    /// <summary>
    /// (Optional) Permission to be applied to all user data keys written in this request. Defaults to
    /// "private" if not set. This is used for requests by one player for information about another player;
    /// those requests will only return Public keys.
    /// </summary>
    PlayFabUserDataPermission const* permission;

} PlayFabClientUpdateUserDataRequest;

/// <summary>
/// PlayFabClientUpdateUserDataResult data model. Result payload for PlayFabClientUpdateUserDataAsync
/// and PlayFabClientUpdateUserPublisherDataAsync.
/// </summary>
typedef struct PlayFabClientUpdateUserDataResult
{
    /// <summary>
    /// Indicates the current version of the data that has been set. This is incremented with every set
    /// call for that type of data (read-only, internal, etc). This version can be provided in Get calls
    /// to find updated data.
    /// </summary>
    uint32_t dataVersion;

} PlayFabClientUpdateUserDataResult;

/// <summary>
/// PlayFabClientUpdateUserTitleDisplayNameRequest data model. In addition to the PlayFab username, titles
/// can make use of a DisplayName which is also a unique identifier, but specific to the title. This allows
/// for unique names which more closely match the theme or genre of a title, for example. Request object
/// for PlayFabClientUpdateUserTitleDisplayNameAsync.
/// </summary>
typedef struct PlayFabClientUpdateUserTitleDisplayNameRequest
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
    /// New title display name for the user - must be between 3 and 25 characters.
    /// </summary>
    const char* displayName;

} PlayFabClientUpdateUserTitleDisplayNameRequest;

/// <summary>
/// PlayFabClientUpdateUserTitleDisplayNameResult data model. Result payload for PlayFabClientUpdateUserTitleDisplayNameAsync.
/// </summary>
typedef struct PlayFabClientUpdateUserTitleDisplayNameResult
{
    /// <summary>
    /// (Optional) Current title display name for the user (this will be the original display name if
    /// the rename attempt failed).
    /// </summary>
    const char* displayName;

} PlayFabClientUpdateUserTitleDisplayNameResult;

/// <summary>
/// PlayFabClientValidateAmazonReceiptRequest data model. Request object for PlayFabClientValidateAmazonIAPReceiptAsync.
/// </summary>
typedef struct PlayFabClientValidateAmazonReceiptRequest
{
    /// <summary>
    /// (Optional) Catalog version of the fulfilled items. If null, defaults to the primary catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Currency used to pay for the purchase (ISO 4217 currency code).
    /// </summary>
    const char* currencyCode;

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
    /// Amount of the stated currency paid, in centesimal units.
    /// </summary>
    int32_t purchasePrice;

    /// <summary>
    /// ReceiptId returned by the Amazon App Store in-app purchase API.
    /// </summary>
    const char* receiptId;

    /// <summary>
    /// AmazonId of the user making the purchase as returned by the Amazon App Store in-app purchase
    /// API.
    /// </summary>
    const char* userId;

} PlayFabClientValidateAmazonReceiptRequest;

/// <summary>
/// PlayFabClientValidateAmazonReceiptResult data model. Once verified, the catalog item matching the
/// Amazon item name will be added to the user's inventory. Result payload for PlayFabClientValidateAmazonIAPReceiptAsync.
/// </summary>
typedef struct PlayFabClientValidateAmazonReceiptResult
{
    /// <summary>
    /// (Optional) Fulfilled inventory items and recorded purchases in fulfillment of the validated receipt
    /// transactions.
    /// </summary>
    PlayFabClientPurchaseReceiptFulfillment const* const* fulfillments;

    /// <summary>
    /// Count of fulfillments
    /// </summary>
    uint32_t fulfillmentsCount;

} PlayFabClientValidateAmazonReceiptResult;

/// <summary>
/// PlayFabClientValidateGooglePlayPurchaseRequest data model. The packageName and productId are defined
/// in the GooglePlay store. The productId must match the ItemId of the inventory item in the PlayFab
/// catalog for the title. This enables the PlayFab service to securely validate that the purchase is
/// for the correct item, in order to prevent uses from passing valid receipts as being for more expensive
/// items (passing a receipt for a 99-cent purchase as being for a $19.99 purchase, for example). Each
/// receipt may be validated only once to avoid granting the same item over and over from a single purchase.
/// Request object for PlayFabClientValidateGooglePlayPurchaseAsync.
/// </summary>
typedef struct PlayFabClientValidateGooglePlayPurchaseRequest
{
    /// <summary>
    /// (Optional) Catalog version of the fulfilled items. If null, defaults to the primary catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Currency used to pay for the purchase (ISO 4217 currency code).
    /// </summary>
    const char* currencyCode;

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
    /// (Optional) Amount of the stated currency paid, in centesimal units.
    /// </summary>
    uint32_t const* purchasePrice;

    /// <summary>
    /// Original JSON string returned by the Google Play IAB API.
    /// </summary>
    const char* receiptJson;

    /// <summary>
    /// Signature returned by the Google Play IAB API.
    /// </summary>
    const char* signature;

} PlayFabClientValidateGooglePlayPurchaseRequest;

/// <summary>
/// PlayFabClientValidateGooglePlayPurchaseResult data model. Once verified, the catalog item (ItemId)
/// matching the GooglePlay store item (productId) will be added to the user's inventory. Result payload
/// for PlayFabClientValidateGooglePlayPurchaseAsync.
/// </summary>
typedef struct PlayFabClientValidateGooglePlayPurchaseResult
{
    /// <summary>
    /// (Optional) Fulfilled inventory items and recorded purchases in fulfillment of the validated receipt
    /// transactions.
    /// </summary>
    PlayFabClientPurchaseReceiptFulfillment const* const* fulfillments;

    /// <summary>
    /// Count of fulfillments
    /// </summary>
    uint32_t fulfillmentsCount;

} PlayFabClientValidateGooglePlayPurchaseResult;

/// <summary>
/// PlayFabClientValidateIOSReceiptRequest data model. The CurrencyCode and PurchasePrice must match
/// the price which was set up for the item in the Apple store. In addition, The ItemId of the inventory
/// in the PlayFab Catalog must match the Product ID as it was set up in the Apple store. This enables
/// the PlayFab service to securely validate that the purchase is for the correct item, in order to prevent
/// uses from passing valid receipts as being for more expensive items (passing a receipt for a 99-cent
/// purchase as being for a $19.99 purchase, for example). Request object for PlayFabClientValidateIOSReceiptAsync.
/// </summary>
typedef struct PlayFabClientValidateIOSReceiptRequest
{
    /// <summary>
    /// (Optional) Catalog version of the fulfilled items. If null, defaults to the primary catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Currency used to pay for the purchase (ISO 4217 currency code).
    /// </summary>
    const char* currencyCode;

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
    /// Amount of the stated currency paid, in centesimal units.
    /// </summary>
    int32_t purchasePrice;

    /// <summary>
    /// Base64 encoded receipt data, passed back by the App Store as a result of a successful purchase.
    /// </summary>
    const char* receiptData;

} PlayFabClientValidateIOSReceiptRequest;

/// <summary>
/// PlayFabClientValidateIOSReceiptResult data model. Once verified, the catalog item matching the iTunes
/// item name will be added to the user's inventory. Result payload for PlayFabClientValidateIOSReceiptAsync.
/// </summary>
typedef struct PlayFabClientValidateIOSReceiptResult
{
    /// <summary>
    /// (Optional) Fulfilled inventory items and recorded purchases in fulfillment of the validated receipt
    /// transactions.
    /// </summary>
    PlayFabClientPurchaseReceiptFulfillment const* const* fulfillments;

    /// <summary>
    /// Count of fulfillments
    /// </summary>
    uint32_t fulfillmentsCount;

} PlayFabClientValidateIOSReceiptResult;

/// <summary>
/// PlayFabClientValidateWindowsReceiptRequest data model. Request object for PlayFabClientValidateWindowsStoreReceiptAsync.
/// </summary>
typedef struct PlayFabClientValidateWindowsReceiptRequest
{
    /// <summary>
    /// (Optional) Catalog version of the fulfilled items. If null, defaults to the primary catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Currency used to pay for the purchase (ISO 4217 currency code).
    /// </summary>
    const char* currencyCode;

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
    /// Amount of the stated currency paid, in centesimal units.
    /// </summary>
    uint32_t purchasePrice;

    /// <summary>
    /// XML Receipt returned by the Windows App Store in-app purchase API.
    /// </summary>
    const char* receipt;

} PlayFabClientValidateWindowsReceiptRequest;

/// <summary>
/// PlayFabClientValidateWindowsReceiptResult data model. Once verified, the catalog item matching the
/// Product name will be added to the user's inventory. Result payload for PlayFabClientValidateWindowsStoreReceiptAsync.
/// </summary>
typedef struct PlayFabClientValidateWindowsReceiptResult
{
    /// <summary>
    /// (Optional) Fulfilled inventory items and recorded purchases in fulfillment of the validated receipt
    /// transactions.
    /// </summary>
    PlayFabClientPurchaseReceiptFulfillment const* const* fulfillments;

    /// <summary>
    /// Count of fulfillments
    /// </summary>
    uint32_t fulfillmentsCount;

} PlayFabClientValidateWindowsReceiptResult;

/// <summary>
/// PlayFabClientWriteClientCharacterEventRequest data model. This API is designed to write a multitude
/// of different client-defined events into PlayStream. It supports a flexible JSON schema, which allowsfor
/// arbitrary key-value pairs to describe any character-based event. The created event will be locked
/// to the authenticated title and player. . Request object for PlayFabClientWriteCharacterEventAsync.
/// </summary>
typedef struct PlayFabClientWriteClientCharacterEventRequest
{
    /// <summary>
    /// (Optional) Custom event properties. Each property consists of a name (string) and a value (JSON
    /// object).
    /// </summary>
    PlayFabJsonObject body;

    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

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
    /// The name of the event, within the namespace scoped to the title. The naming convention is up
    /// to the caller, but it commonly follows the subject_verb_object pattern (e.g. player_logged_in).
    /// </summary>
    const char* eventName;

    /// <summary>
    /// (Optional) The time (in UTC) associated with this event. The value defaults to the current time.
    /// </summary>
    time_t const* timestamp;

} PlayFabClientWriteClientCharacterEventRequest;

/// <summary>
/// PlayFabClientWriteClientPlayerEventRequest data model. This API is designed to write a multitude
/// of different event types into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary
/// key-value pairs to describe any player-based event. The created event will be locked to the authenticated
/// title and player. . Request object for PlayFabClientWritePlayerEventAsync.
/// </summary>
typedef struct PlayFabClientWriteClientPlayerEventRequest
{
    /// <summary>
    /// (Optional) Custom data properties associated with the event. Each property consists of a name
    /// (string) and a value (JSON object).
    /// </summary>
    PlayFabJsonObject body;

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
    /// The name of the event, within the namespace scoped to the title. The naming convention is up
    /// to the caller, but it commonly follows the subject_verb_object pattern (e.g. player_logged_in).
    /// </summary>
    const char* eventName;

    /// <summary>
    /// (Optional) The time (in UTC) associated with this event. The value defaults to the current time.
    /// </summary>
    time_t const* timestamp;

} PlayFabClientWriteClientPlayerEventRequest;

/// <summary>
/// PlayFabClientWriteEventResponse data model. Result payload for PlayFabClientWriteCharacterEventAsync,
/// PlayFabClientWritePlayerEventAsync, and PlayFabClientWriteTitleEventAsync.
/// </summary>
typedef struct PlayFabClientWriteEventResponse
{
    /// <summary>
    /// (Optional) The unique identifier of the event. The values of this identifier consist of ASCII
    /// characters and are not constrained to any particular format.
    /// </summary>
    const char* eventId;

} PlayFabClientWriteEventResponse;

/// <summary>
/// PlayFabClientWriteTitleEventRequest data model. This API is designed to write a multitude of different
/// client-defined events into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary
/// key-value pairs to describe any title-based event. The created event will be locked to the authenticated
/// title. . Request object for PlayFabClientWriteTitleEventAsync.
/// </summary>
typedef struct PlayFabClientWriteTitleEventRequest
{
    /// <summary>
    /// (Optional) Custom event properties. Each property consists of a name (string) and a value (JSON
    /// object).
    /// </summary>
    PlayFabJsonObject body;

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
    /// The name of the event, within the namespace scoped to the title. The naming convention is up
    /// to the caller, but it commonly follows the subject_verb_object pattern (e.g. player_logged_in).
    /// </summary>
    const char* eventName;

    /// <summary>
    /// (Optional) The time (in UTC) associated with this event. The value defaults to the current time.
    /// </summary>
    time_t const* timestamp;

} PlayFabClientWriteTitleEventRequest;

/// <summary>
/// Dictionary entry for an associative array with PlayFabClientSharedGroupDataRecord values.
/// </summary>
typedef struct PlayFabClientSharedGroupDataRecordDictionaryEntry
{
    const char* key;
    PlayFabClientSharedGroupDataRecord* value;
} PlayFabClientSharedGroupDataRecordDictionaryEntry;

#pragma pop_macro("IN")

}
