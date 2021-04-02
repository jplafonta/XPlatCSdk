// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PlayFabBaseModel_c.h>

extern "C"
{

#pragma push_macro("IN")
#undef IN

// Client enums
enum class PlayFabClientAdActivity : uint32_t
{
    Opened,
    Closed,
    Start,
    End
};

enum class PlayFabClientCloudScriptRevisionOption : uint32_t
{
    Live,
    Latest,
    Specific
};

enum class PlayFabClientContinentCode : uint32_t
{
    AF,
    AN,
    AS,
    EU,
    NA,
    OC,
    SA
};

enum class PlayFabClientCountryCode : uint32_t
{
    AF,
    AX,
    AL,
    DZ,
    AS,
    AD,
    AO,
    AI,
    AQ,
    AG,
    AR,
    AM,
    AW,
    AU,
    AT,
    AZ,
    BS,
    BH,
    BD,
    BB,
    BY,
    BE,
    BZ,
    BJ,
    BM,
    BT,
    BO,
    BQ,
    BA,
    BW,
    BV,
    BR,
    IO,
    BN,
    BG,
    BF,
    BI,
    KH,
    CM,
    CA,
    CV,
    KY,
    CF,
    TD,
    CL,
    CN,
    CX,
    CC,
    CO,
    KM,
    CG,
    CD,
    CK,
    CR,
    CI,
    HR,
    CU,
    CW,
    CY,
    CZ,
    DK,
    DJ,
    DM,
    DO,
    EC,
    EG,
    SV,
    GQ,
    ER,
    EE,
    ET,
    FK,
    FO,
    FJ,
    FI,
    FR,
    GF,
    PF,
    TF,
    GA,
    GM,
    GE,
    DE,
    GH,
    GI,
    GR,
    GL,
    GD,
    GP,
    GU,
    GT,
    GG,
    GN,
    GW,
    GY,
    HT,
    HM,
    VA,
    HN,
    HK,
    HU,
    IS,
    IN,
    ID,
    IR,
    IQ,
    IE,
    IM,
    IL,
    IT,
    JM,
    JP,
    JE,
    JO,
    KZ,
    KE,
    KI,
    KP,
    KR,
    KW,
    KG,
    LA,
    LV,
    LB,
    LS,
    LR,
    LY,
    LI,
    LT,
    LU,
    MO,
    MK,
    MG,
    MW,
    MY,
    MV,
    ML,
    MT,
    MH,
    MQ,
    MR,
    MU,
    YT,
    MX,
    FM,
    MD,
    MC,
    MN,
    ME,
    MS,
    MA,
    MZ,
    MM,
    NA,
    NR,
    NP,
    NL,
    NC,
    NZ,
    NI,
    NE,
    NG,
    NU,
    NF,
    MP,
    NO,
    OM,
    PK,
    PW,
    PS,
    PA,
    PG,
    PY,
    PE,
    PH,
    PN,
    PL,
    PT,
    PR,
    QA,
    RE,
    RO,
    RU,
    RW,
    BL,
    SH,
    KN,
    LC,
    MF,
    PM,
    VC,
    WS,
    SM,
    ST,
    SA,
    SN,
    RS,
    SC,
    SL,
    SG,
    SX,
    SK,
    SI,
    SB,
    SO,
    ZA,
    GS,
    SS,
    ES,
    LK,
    SD,
    SR,
    SJ,
    SZ,
    SE,
    CH,
    SY,
    TW,
    TJ,
    TZ,
    TH,
    TL,
    TG,
    TK,
    TO,
    TT,
    TN,
    TR,
    TM,
    TC,
    TV,
    UG,
    UA,
    AE,
    GB,
    US,
    UM,
    UY,
    UZ,
    VU,
    VE,
    VN,
    VG,
    VI,
    WF,
    EH,
    YE,
    ZM,
    ZW
};

enum class PlayFabClientCurrency : uint32_t
{
    AED,
    AFN,
    ALL,
    AMD,
    ANG,
    AOA,
    ARS,
    AUD,
    AWG,
    AZN,
    BAM,
    BBD,
    BDT,
    BGN,
    BHD,
    BIF,
    BMD,
    BND,
    BOB,
    BRL,
    BSD,
    BTN,
    BWP,
    BYR,
    BZD,
    CAD,
    CDF,
    CHF,
    CLP,
    CNY,
    COP,
    CRC,
    CUC,
    CUP,
    CVE,
    CZK,
    DJF,
    DKK,
    DOP,
    DZD,
    EGP,
    ERN,
    ETB,
    EUR,
    FJD,
    FKP,
    GBP,
    GEL,
    GGP,
    GHS,
    GIP,
    GMD,
    GNF,
    GTQ,
    GYD,
    HKD,
    HNL,
    HRK,
    HTG,
    HUF,
    IDR,
    ILS,
    IMP,
    INR,
    IQD,
    IRR,
    ISK,
    JEP,
    JMD,
    JOD,
    JPY,
    KES,
    KGS,
    KHR,
    KMF,
    KPW,
    KRW,
    KWD,
    KYD,
    KZT,
    LAK,
    LBP,
    LKR,
    LRD,
    LSL,
    LYD,
    MAD,
    MDL,
    MGA,
    MKD,
    MMK,
    MNT,
    MOP,
    MRO,
    MUR,
    MVR,
    MWK,
    MXN,
    MYR,
    MZN,
    NAD,
    NGN,
    NIO,
    NOK,
    NPR,
    NZD,
    OMR,
    PAB,
    PEN,
    PGK,
    PHP,
    PKR,
    PLN,
    PYG,
    QAR,
    RON,
    RSD,
    RUB,
    RWF,
    SAR,
    SBD,
    SCR,
    SDG,
    SEK,
    SGD,
    SHP,
    SLL,
    SOS,
    SPL,
    SRD,
    STD,
    SVC,
    SYP,
    SZL,
    THB,
    TJS,
    TMT,
    TND,
    TOP,
    TRY,
    TTD,
    TVD,
    TWD,
    TZS,
    UAH,
    UGX,
    USD,
    UYU,
    UZS,
    VEF,
    VND,
    VUV,
    WST,
    XAF,
    XCD,
    XDR,
    XOF,
    XPF,
    YER,
    ZAR,
    ZMW,
    ZWD
};

enum class PlayFabClientEmailVerificationStatus : uint32_t
{
    Unverified,
    Pending,
    Confirmed
};

enum class PlayFabClientGameInstanceState : uint32_t
{
    Open,
    Closed
};

enum class PlayFabClientLoginIdentityProvider : uint32_t
{
    Unknown,
    PlayFab,
    Custom,
    GameCenter,
    GooglePlay,
    Steam,
    XBoxLive,
    PSN,
    Kongregate,
    Facebook,
    IOSDevice,
    AndroidDevice,
    Twitch,
    WindowsHello,
    GameServer,
    CustomServer,
    NintendoSwitch,
    FacebookInstantGames,
    OpenIdConnect,
    Apple,
    NintendoSwitchAccount
};

enum class PlayFabClientMatchmakeStatus : uint32_t
{
    Complete,
    Waiting,
    GameNotFound,
    NoAvailableSlots,
    SessionClosed
};

enum class PlayFabClientPushNotificationPlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

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

enum class PlayFabClientSubscriptionProviderStatus : uint32_t
{
    NoError,
    Cancelled,
    UnknownError,
    BillingError,
    ProductUnavailable,
    CustomerDidNotAcceptPriceChange,
    FreeTrial,
    PaymentPending
};

enum class PlayFabClientTitleActivationStatus : uint32_t
{
    None,
    ActivatedTitleKey,
    PendingSteam,
    ActivatedSteam,
    RevokedSteam
};

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

enum class PlayFabClientUserDataPermission : uint32_t
{
    Private,
    Public
};

enum class PlayFabClientUserOrigination : uint32_t
{
    Organic,
    Steam,
    Google,
    Amazon,
    Facebook,
    Kongregate,
    GamersFirst,
    Unknown,
    IOS,
    LoadTest,
    Android,
    PSN,
    GameCenter,
    CustomId,
    XboxLive,
    Parse,
    Twitch,
    WindowsHello,
    ServerCustomId,
    NintendoSwitchDeviceId,
    FacebookInstantGamesId,
    OpenIdConnect,
    Apple,
    NintendoSwitchAccount
};


// Client structs
typedef struct PlayFabClientAcceptTradeRequest
{
    PF_ARRAY const char** acceptedInventoryInstanceIds;
    PF_COLLECTION_COUNT uint32_t acceptedInventoryInstanceIdsCount;
    const char* offeringPlayerId;
    const char* tradeId;
} PlayFabClientAcceptTradeRequest;

typedef struct PlayFabClientTradeInfo
{
    PF_ARRAY const char** acceptedInventoryInstanceIds;
    PF_COLLECTION_COUNT uint32_t acceptedInventoryInstanceIdsCount;
    const char* acceptedPlayerId;
    PF_ARRAY const char** allowedPlayerIds;
    PF_COLLECTION_COUNT uint32_t allowedPlayerIdsCount;
    PF_OPTIONAL time_t* cancelledAt;
    PF_OPTIONAL time_t* filledAt;
    PF_OPTIONAL time_t* invalidatedAt;
    PF_ARRAY const char** offeredCatalogItemIds;
    PF_COLLECTION_COUNT uint32_t offeredCatalogItemIdsCount;
    PF_ARRAY const char** offeredInventoryInstanceIds;
    PF_COLLECTION_COUNT uint32_t offeredInventoryInstanceIdsCount;
    const char* offeringPlayerId;
    PF_OPTIONAL time_t* openedAt;
    PF_ARRAY const char** requestedCatalogItemIds;
    PF_COLLECTION_COUNT uint32_t requestedCatalogItemIdsCount;
    PF_OPTIONAL PlayFabClientTradeStatus* status;
    const char* tradeId;
} PlayFabClientTradeInfo;

typedef struct PlayFabClientAcceptTradeResponse
{
    PF_OPTIONAL PlayFabClientTradeInfo* trade;
} PlayFabClientAcceptTradeResponse;

typedef struct PlayFabClientAdCampaignAttributionModel
{
    time_t attributedAt;
    const char* campaignId;
    const char* platform;
} PlayFabClientAdCampaignAttributionModel;

typedef struct PlayFabClientAddFriendRequest
{
    const char* friendEmail;
    const char* friendPlayFabId;
    const char* friendTitleDisplayName;
    const char* friendUsername;
} PlayFabClientAddFriendRequest;

typedef struct PlayFabClientAddFriendResult
{
    bool created;
} PlayFabClientAddFriendResult;

typedef struct PlayFabClientGenericServiceId
{
    const char* serviceName;
    const char* userId;
} PlayFabClientGenericServiceId;

typedef struct PlayFabClientAddGenericIDRequest
{
    PlayFabClientGenericServiceId* genericId;
} PlayFabClientAddGenericIDRequest;

typedef struct PlayFabClientAddOrUpdateContactEmailRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* emailAddress;
} PlayFabClientAddOrUpdateContactEmailRequest;

typedef struct PlayFabClientAddSharedGroupMembersRequest
{
    PF_ARRAY const char** playFabIds;
    PF_COLLECTION_COUNT uint32_t playFabIdsCount;
    const char* sharedGroupId;
} PlayFabClientAddSharedGroupMembersRequest;

typedef struct PlayFabClientAddUsernamePasswordRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* email;
    const char* password;
    const char* username;
} PlayFabClientAddUsernamePasswordRequest;

typedef struct PlayFabClientAddUsernamePasswordResult
{
    const char* username;
} PlayFabClientAddUsernamePasswordResult;

typedef struct PlayFabClientAddUserVirtualCurrencyRequest
{
    int32_t amount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* virtualCurrency;
} PlayFabClientAddUserVirtualCurrencyRequest;

typedef struct PlayFabClientAdPlacementDetails
{
    const char* placementId;
    const char* placementName;
    PF_OPTIONAL int32_t* placementViewsRemaining;
    PF_OPTIONAL double* placementViewsResetMinutes;
    const char* rewardAssetUrl;
    const char* rewardDescription;
    const char* rewardId;
    const char* rewardName;
} PlayFabClientAdPlacementDetails;

typedef struct PlayFabClientAdRewardItemGranted
{
    const char* catalogId;
    const char* displayName;
    const char* instanceId;
    const char* itemId;
} PlayFabClientAdRewardItemGranted;

typedef struct PlayFabClientAdRewardResults
{
    PF_ARRAY PlayFabClientAdRewardItemGranted** grantedItems;
    PF_COLLECTION_COUNT uint32_t grantedItemsCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* grantedVirtualCurrencies;
    PF_COLLECTION_COUNT uint32_t grantedVirtualCurrenciesCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* incrementedStatistics;
    PF_COLLECTION_COUNT uint32_t incrementedStatisticsCount;
} PlayFabClientAdRewardResults;

typedef struct PlayFabClientAndroidDevicePushNotificationRegistrationRequest
{
    const char* confirmationMessage;
    const char* deviceToken;
    PF_OPTIONAL bool* sendPushNotificationConfirmation;
} PlayFabClientAndroidDevicePushNotificationRegistrationRequest;

typedef struct PlayFabClientAttributeInstallRequest
{
    const char* adid;
    const char* idfa;
} PlayFabClientAttributeInstallRequest;

typedef struct PlayFabClientCancelTradeRequest
{
    const char* tradeId;
} PlayFabClientCancelTradeRequest;

typedef struct PlayFabClientCancelTradeResponse
{
    PF_OPTIONAL PlayFabClientTradeInfo* trade;
} PlayFabClientCancelTradeResponse;

typedef struct PlayFabClientCartItem
{
    const char* description;
    const char* displayName;
    const char* itemClass;
    const char* itemId;
    const char* itemInstanceId;
    PF_MAP struct PlayFabUint32DictionaryEntry* realCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t realCurrencyPricesCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* vCAmount;
    PF_COLLECTION_COUNT uint32_t vCAmountCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyPricesCount;
} PlayFabClientCartItem;

typedef struct PlayFabClientCatalogItemBundleInfo
{
    PF_ARRAY const char** bundledItems;
    PF_COLLECTION_COUNT uint32_t bundledItemsCount;
    PF_ARRAY const char** bundledResultTables;
    PF_COLLECTION_COUNT uint32_t bundledResultTablesCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* bundledVirtualCurrencies;
    PF_COLLECTION_COUNT uint32_t bundledVirtualCurrenciesCount;
} PlayFabClientCatalogItemBundleInfo;

typedef struct PlayFabClientCatalogItemConsumableInfo
{
    PF_OPTIONAL uint32_t* usageCount;
    PF_OPTIONAL uint32_t* usagePeriod;
    const char* usagePeriodGroup;
} PlayFabClientCatalogItemConsumableInfo;

typedef struct PlayFabClientCatalogItemContainerInfo
{
    PF_ARRAY const char** itemContents;
    PF_COLLECTION_COUNT uint32_t itemContentsCount;
    const char* keyItemId;
    PF_ARRAY const char** resultTableContents;
    PF_COLLECTION_COUNT uint32_t resultTableContentsCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyContents;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyContentsCount;
} PlayFabClientCatalogItemContainerInfo;

typedef struct PlayFabClientCatalogItem
{
    PF_OPTIONAL PlayFabClientCatalogItemBundleInfo* bundle;
    bool canBecomeCharacter;
    const char* catalogVersion;
    PF_OPTIONAL PlayFabClientCatalogItemConsumableInfo* consumable;
    PF_OPTIONAL PlayFabClientCatalogItemContainerInfo* container;
    const char* customData;
    const char* description;
    const char* displayName;
    int32_t initialLimitedEditionCount;
    bool isLimitedEdition;
    bool isStackable;
    bool isTradable;
    const char* itemClass;
    const char* itemId;
    const char* itemImageUrl;
    PF_MAP struct PlayFabUint32DictionaryEntry* realCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t realCurrencyPricesCount;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyPricesCount;
} PlayFabClientCatalogItem;

typedef struct PlayFabClientItemInstance
{
    const char* annotation;
    PF_ARRAY const char** bundleContents;
    PF_COLLECTION_COUNT uint32_t bundleContentsCount;
    const char* bundleParent;
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customData;
    PF_COLLECTION_COUNT uint32_t customDataCount;
    const char* displayName;
    PF_OPTIONAL time_t* expiration;
    const char* itemClass;
    const char* itemId;
    const char* itemInstanceId;
    PF_OPTIONAL time_t* purchaseDate;
    PF_OPTIONAL int32_t* remainingUses;
    const char* unitCurrency;
    uint32_t unitPrice;
    PF_OPTIONAL int32_t* usesIncrementedBy;
} PlayFabClientItemInstance;

typedef struct PlayFabClientCharacterInventory
{
    const char* characterId;
    PF_ARRAY PlayFabClientItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;
} PlayFabClientCharacterInventory;

typedef struct PlayFabClientCharacterLeaderboardEntry
{
    const char* characterId;
    const char* characterName;
    const char* characterType;
    const char* displayName;
    const char* playFabId;
    int32_t position;
    int32_t statValue;
} PlayFabClientCharacterLeaderboardEntry;

typedef struct PlayFabClientCharacterResult
{
    const char* characterId;
    const char* characterName;
    const char* characterType;
} PlayFabClientCharacterResult;

typedef struct PlayFabClientContainer_Dictionary_String_String
{
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientContainer_Dictionary_String_String;

typedef struct PlayFabClientCollectionFilter
{
    PF_ARRAY PlayFabClientContainer_Dictionary_String_String** excludes;
    PF_COLLECTION_COUNT uint32_t excludesCount;
    PF_ARRAY PlayFabClientContainer_Dictionary_String_String** includes;
    PF_COLLECTION_COUNT uint32_t includesCount;
} PlayFabClientCollectionFilter;

typedef struct PlayFabClientConfirmPurchaseRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* orderId;
} PlayFabClientConfirmPurchaseRequest;

typedef struct PlayFabClientConfirmPurchaseResult
{
    PF_ARRAY PlayFabClientItemInstance** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;
    const char* orderId;
    time_t purchaseDate;
} PlayFabClientConfirmPurchaseResult;

typedef struct PlayFabClientConsumeItemRequest
{
    const char* characterId;
    int32_t consumeCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* itemInstanceId;
} PlayFabClientConsumeItemRequest;

typedef struct PlayFabClientConsumeItemResult
{
    const char* itemInstanceId;
    int32_t remainingUses;
} PlayFabClientConsumeItemResult;

typedef struct PlayFabClientMicrosoftStorePayload
{
    const char* collectionsMsIdKey;
    const char* userId;
    const char* xboxToken;
} PlayFabClientMicrosoftStorePayload;

typedef struct PlayFabClientConsumeMicrosoftStoreEntitlementsRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabClientMicrosoftStorePayload* marketplaceSpecificData;
} PlayFabClientConsumeMicrosoftStoreEntitlementsRequest;

typedef struct PlayFabClientConsumeMicrosoftStoreEntitlementsResponse
{
    PF_ARRAY PlayFabClientItemInstance** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;
} PlayFabClientConsumeMicrosoftStoreEntitlementsResponse;

typedef struct PlayFabClientPlayStation5Payload
{
    PF_ARRAY const char** ids;
    PF_COLLECTION_COUNT uint32_t idsCount;
    const char* serviceLabel;
} PlayFabClientPlayStation5Payload;

typedef struct PlayFabClientConsumePS5EntitlementsRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabClientPlayStation5Payload* marketplaceSpecificData;
} PlayFabClientConsumePS5EntitlementsRequest;

typedef struct PlayFabClientConsumePS5EntitlementsResult
{
    PF_ARRAY PlayFabClientItemInstance** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;
} PlayFabClientConsumePS5EntitlementsResult;

typedef struct PlayFabClientConsumePSNEntitlementsRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t serviceLabel;
} PlayFabClientConsumePSNEntitlementsRequest;

typedef struct PlayFabClientConsumePSNEntitlementsResult
{
    PF_ARRAY PlayFabClientItemInstance** itemsGranted;
    PF_COLLECTION_COUNT uint32_t itemsGrantedCount;
} PlayFabClientConsumePSNEntitlementsResult;

typedef struct PlayFabClientConsumeXboxEntitlementsRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* xboxToken;
} PlayFabClientConsumeXboxEntitlementsRequest;

typedef struct PlayFabClientConsumeXboxEntitlementsResult
{
    PF_ARRAY PlayFabClientItemInstance** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;
} PlayFabClientConsumeXboxEntitlementsResult;

typedef struct PlayFabClientContactEmailInfoModel
{
    const char* emailAddress;
    const char* name;
    PF_OPTIONAL PlayFabClientEmailVerificationStatus* verificationStatus;
} PlayFabClientContactEmailInfoModel;

typedef struct PlayFabClientCreateSharedGroupRequest
{
    const char* sharedGroupId;
} PlayFabClientCreateSharedGroupRequest;

typedef struct PlayFabClientCreateSharedGroupResult
{
    const char* sharedGroupId;
} PlayFabClientCreateSharedGroupResult;

typedef struct PlayFabClientCurrentGamesRequest
{
    const char* buildVersion;
    const char* gameMode;
    PF_OPTIONAL PlayFabClientRegion* region;
    const char* statisticName;
    PF_OPTIONAL PlayFabClientCollectionFilter* tagFilter;
} PlayFabClientCurrentGamesRequest;

typedef struct PlayFabClientGameInfo
{
    const char* buildVersion;
    const char* gameMode;
    const char* gameServerData;
    PF_OPTIONAL PlayFabClientGameInstanceState* gameServerStateEnum;
    PF_OPTIONAL time_t* lastHeartbeat;
    const char* lobbyID;
    PF_OPTIONAL int32_t* maxPlayers;
    PF_ARRAY const char** playerUserIds;
    PF_COLLECTION_COUNT uint32_t playerUserIdsCount;
    PF_OPTIONAL PlayFabClientRegion* region;
    uint32_t runTime;
    const char* serverIPV4Address;
    const char* serverIPV6Address;
    PF_OPTIONAL int32_t* serverPort;
    const char* serverPublicDNSName;
    const char* statisticName;
    PF_MAP struct PlayFabStringDictionaryEntry* tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
} PlayFabClientGameInfo;

typedef struct PlayFabClientCurrentGamesResult
{
    int32_t gameCount;
    PF_ARRAY PlayFabClientGameInfo** games;
    PF_COLLECTION_COUNT uint32_t gamesCount;
    int32_t playerCount;
} PlayFabClientCurrentGamesResult;

typedef struct PlayFabClientDeviceInfoRequest
{
    PlayFabJsonObject info;
} PlayFabClientDeviceInfoRequest;

typedef struct PlayFabClientEntityKey
{
    const char* id;
    const char* type;
} PlayFabClientEntityKey;

typedef struct PlayFabClientEntityTokenResponse
{
    PF_OPTIONAL PlayFabClientEntityKey* entity;
    const char* entityToken;
    PF_OPTIONAL time_t* tokenExpiration;
} PlayFabClientEntityTokenResponse;

typedef struct PlayFabClientExecuteCloudScriptRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* functionName;
    PlayFabJsonObject functionParameter;
    PF_OPTIONAL bool* generatePlayStreamEvent;
    PF_OPTIONAL PlayFabClientCloudScriptRevisionOption* revisionSelection;
    PF_OPTIONAL int32_t* specificRevision;
} PlayFabClientExecuteCloudScriptRequest;

typedef struct PlayFabClientScriptExecutionError
{
    const char* error;
    const char* message;
    const char* stackTrace;
} PlayFabClientScriptExecutionError;

typedef struct PlayFabClientLogStatement
{
    PlayFabJsonObject data;
    const char* level;
    const char* message;
} PlayFabClientLogStatement;

typedef struct PlayFabClientExecuteCloudScriptResult
{
    int32_t aPIRequestsIssued;
    PF_OPTIONAL PlayFabClientScriptExecutionError* error;
    double executionTimeSeconds;
    const char* functionName;
    PlayFabJsonObject functionResult;
    PF_OPTIONAL bool* functionResultTooLarge;
    int32_t httpRequestsIssued;
    PF_ARRAY PlayFabClientLogStatement** logs;
    PF_COLLECTION_COUNT uint32_t logsCount;
    PF_OPTIONAL bool* logsTooLarge;
    uint32_t memoryConsumedBytes;
    double processorTimeSeconds;
    int32_t revision;
} PlayFabClientExecuteCloudScriptResult;

typedef struct PlayFabClientFacebookInstantGamesPlayFabIdPair
{
    const char* facebookInstantGamesId;
    const char* playFabId;
} PlayFabClientFacebookInstantGamesPlayFabIdPair;

typedef struct PlayFabClientFacebookPlayFabIdPair
{
    const char* facebookId;
    const char* playFabId;
} PlayFabClientFacebookPlayFabIdPair;

typedef struct PlayFabClientUserFacebookInfo
{
    const char* facebookId;
    const char* fullName;
} PlayFabClientUserFacebookInfo;

typedef struct PlayFabClientUserGameCenterInfo
{
    const char* gameCenterId;
} PlayFabClientUserGameCenterInfo;

typedef struct PlayFabClientLinkedPlatformAccountModel
{
    const char* email;
    PF_OPTIONAL PlayFabClientLoginIdentityProvider* platform;
    const char* platformUserId;
    const char* username;
} PlayFabClientLinkedPlatformAccountModel;

typedef struct PlayFabClientLocationModel
{
    const char* city;
    PF_OPTIONAL PlayFabClientContinentCode* continentCode;
    PF_OPTIONAL PlayFabClientCountryCode* countryCode;
    PF_OPTIONAL double* latitude;
    PF_OPTIONAL double* longitude;
} PlayFabClientLocationModel;

typedef struct PlayFabClientSubscriptionModel
{
    time_t expiration;
    time_t initialSubscriptionTime;
    bool isActive;
    PF_OPTIONAL PlayFabClientSubscriptionProviderStatus* status;
    const char* subscriptionId;
    const char* subscriptionItemId;
    const char* subscriptionProvider;
} PlayFabClientSubscriptionModel;

typedef struct PlayFabClientMembershipModel
{
    bool isActive;
    time_t membershipExpiration;
    const char* membershipId;
    PF_OPTIONAL time_t* overrideExpiration;
    PF_ARRAY PlayFabClientSubscriptionModel** subscriptions;
    PF_COLLECTION_COUNT uint32_t subscriptionsCount;
} PlayFabClientMembershipModel;

typedef struct PlayFabClientPushNotificationRegistrationModel
{
    const char* notificationEndpointARN;
    PF_OPTIONAL PlayFabClientPushNotificationPlatform* platform;
} PlayFabClientPushNotificationRegistrationModel;

typedef struct PlayFabClientStatisticModel
{
    const char* name;
    int32_t value;
    int32_t version;
} PlayFabClientStatisticModel;

typedef struct PlayFabClientTagModel
{
    const char* tagValue;
} PlayFabClientTagModel;

typedef struct PlayFabClientValueToDateModel
{
    const char* currency;
    uint32_t totalValue;
    const char* totalValueAsDecimal;
} PlayFabClientValueToDateModel;

typedef struct PlayFabClientPlayerProfileModel
{
    PF_ARRAY PlayFabClientAdCampaignAttributionModel** adCampaignAttributions;
    PF_COLLECTION_COUNT uint32_t adCampaignAttributionsCount;
    const char* avatarUrl;
    PF_OPTIONAL time_t* bannedUntil;
    PF_ARRAY PlayFabClientContactEmailInfoModel** contactEmailAddresses;
    PF_COLLECTION_COUNT uint32_t contactEmailAddressesCount;
    PF_OPTIONAL time_t* created;
    const char* displayName;
    PF_ARRAY const char** experimentVariants;
    PF_COLLECTION_COUNT uint32_t experimentVariantsCount;
    PF_OPTIONAL time_t* lastLogin;
    PF_ARRAY PlayFabClientLinkedPlatformAccountModel** linkedAccounts;
    PF_COLLECTION_COUNT uint32_t linkedAccountsCount;
    PF_ARRAY PlayFabClientLocationModel** locations;
    PF_COLLECTION_COUNT uint32_t locationsCount;
    PF_ARRAY PlayFabClientMembershipModel** memberships;
    PF_COLLECTION_COUNT uint32_t membershipsCount;
    PF_OPTIONAL PlayFabClientLoginIdentityProvider* origination;
    const char* playerId;
    const char* publisherId;
    PF_ARRAY PlayFabClientPushNotificationRegistrationModel** pushNotificationRegistrations;
    PF_COLLECTION_COUNT uint32_t pushNotificationRegistrationsCount;
    PF_ARRAY PlayFabClientStatisticModel** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
    PF_ARRAY PlayFabClientTagModel** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    const char* titleId;
    PF_OPTIONAL uint32_t* totalValueToDateInUSD;
    PF_ARRAY PlayFabClientValueToDateModel** valuesToDate;
    PF_COLLECTION_COUNT uint32_t valuesToDateCount;
} PlayFabClientPlayerProfileModel;

typedef struct PlayFabClientUserPsnInfo
{
    const char* psnAccountId;
    const char* psnOnlineId;
} PlayFabClientUserPsnInfo;

typedef struct PlayFabClientUserSteamInfo
{
    PF_OPTIONAL PlayFabClientTitleActivationStatus* steamActivationStatus;
    const char* steamCountry;
    PF_OPTIONAL PlayFabClientCurrency* steamCurrency;
    const char* steamId;
    const char* steamName;
} PlayFabClientUserSteamInfo;

typedef struct PlayFabClientUserXboxInfo
{
    const char* xboxUserId;
} PlayFabClientUserXboxInfo;

typedef struct PlayFabClientFriendInfo
{
    PF_OPTIONAL PlayFabClientUserFacebookInfo* facebookInfo;
    const char* friendPlayFabId;
    PF_OPTIONAL PlayFabClientUserGameCenterInfo* gameCenterInfo;
    PF_OPTIONAL PlayFabClientPlayerProfileModel* profile;
    PF_OPTIONAL PlayFabClientUserPsnInfo* pSNInfo;
    PF_OPTIONAL PlayFabClientUserSteamInfo* steamInfo;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    const char* titleDisplayName;
    const char* username;
    PF_OPTIONAL PlayFabClientUserXboxInfo* xboxInfo;
} PlayFabClientFriendInfo;

typedef struct PlayFabClientGameCenterPlayFabIdPair
{
    const char* gameCenterId;
    const char* playFabId;
} PlayFabClientGameCenterPlayFabIdPair;

typedef struct PlayFabClientGameServerRegionsRequest
{
    const char* buildVersion;
    const char* titleId;
} PlayFabClientGameServerRegionsRequest;

typedef struct PlayFabClientRegionInfo
{
    bool available;
    const char* name;
    const char* pingUrl;
    PF_OPTIONAL PlayFabClientRegion* region;
} PlayFabClientRegionInfo;

typedef struct PlayFabClientGameServerRegionsResult
{
    PF_ARRAY PlayFabClientRegionInfo** regions;
    PF_COLLECTION_COUNT uint32_t regionsCount;
} PlayFabClientGameServerRegionsResult;

typedef struct PlayFabClientGenericPlayFabIdPair
{
    PF_OPTIONAL PlayFabClientGenericServiceId* genericId;
    const char* playFabId;
} PlayFabClientGenericPlayFabIdPair;

typedef struct PlayFabClientGetAccountInfoRequest
{
    const char* email;
    const char* playFabId;
    const char* titleDisplayName;
    const char* username;
} PlayFabClientGetAccountInfoRequest;

typedef struct PlayFabClientUserAndroidDeviceInfo
{
    const char* androidDeviceId;
} PlayFabClientUserAndroidDeviceInfo;

typedef struct PlayFabClientUserAppleIdInfo
{
    const char* appleSubjectId;
} PlayFabClientUserAppleIdInfo;

typedef struct PlayFabClientUserCustomIdInfo
{
    const char* customId;
} PlayFabClientUserCustomIdInfo;

typedef struct PlayFabClientUserFacebookInstantGamesIdInfo
{
    const char* facebookInstantGamesId;
} PlayFabClientUserFacebookInstantGamesIdInfo;

typedef struct PlayFabClientUserGoogleInfo
{
    const char* googleEmail;
    const char* googleGender;
    const char* googleId;
    const char* googleLocale;
    const char* googleName;
} PlayFabClientUserGoogleInfo;

typedef struct PlayFabClientUserIosDeviceInfo
{
    const char* iosDeviceId;
} PlayFabClientUserIosDeviceInfo;

typedef struct PlayFabClientUserKongregateInfo
{
    const char* kongregateId;
    const char* kongregateName;
} PlayFabClientUserKongregateInfo;

typedef struct PlayFabClientUserNintendoSwitchAccountIdInfo
{
    const char* nintendoSwitchAccountSubjectId;
} PlayFabClientUserNintendoSwitchAccountIdInfo;

typedef struct PlayFabClientUserNintendoSwitchDeviceIdInfo
{
    const char* nintendoSwitchDeviceId;
} PlayFabClientUserNintendoSwitchDeviceIdInfo;

typedef struct PlayFabClientUserOpenIdInfo
{
    const char* connectionId;
    const char* issuer;
    const char* subject;
} PlayFabClientUserOpenIdInfo;

typedef struct PlayFabClientUserPrivateAccountInfo
{
    const char* email;
} PlayFabClientUserPrivateAccountInfo;

typedef struct PlayFabClientUserTitleInfo
{
    const char* avatarUrl;
    time_t created;
    const char* displayName;
    PF_OPTIONAL time_t* firstLogin;
    PF_OPTIONAL bool* isBanned;
    PF_OPTIONAL time_t* lastLogin;
    PF_OPTIONAL PlayFabClientUserOrigination* origination;
    PF_OPTIONAL PlayFabClientEntityKey* titlePlayerAccount;
} PlayFabClientUserTitleInfo;

typedef struct PlayFabClientUserTwitchInfo
{
    const char* twitchId;
    const char* twitchUserName;
} PlayFabClientUserTwitchInfo;

typedef struct PlayFabClientUserWindowsHelloInfo
{
    const char* windowsHelloDeviceName;
    const char* windowsHelloPublicKeyHash;
} PlayFabClientUserWindowsHelloInfo;

typedef struct PlayFabClientUserAccountInfo
{
    PF_OPTIONAL PlayFabClientUserAndroidDeviceInfo* androidDeviceInfo;
    PF_OPTIONAL PlayFabClientUserAppleIdInfo* appleAccountInfo;
    time_t created;
    PF_OPTIONAL PlayFabClientUserCustomIdInfo* customIdInfo;
    PF_OPTIONAL PlayFabClientUserFacebookInfo* facebookInfo;
    PF_OPTIONAL PlayFabClientUserFacebookInstantGamesIdInfo* facebookInstantGamesIdInfo;
    PF_OPTIONAL PlayFabClientUserGameCenterInfo* gameCenterInfo;
    PF_OPTIONAL PlayFabClientUserGoogleInfo* googleInfo;
    PF_OPTIONAL PlayFabClientUserIosDeviceInfo* iosDeviceInfo;
    PF_OPTIONAL PlayFabClientUserKongregateInfo* kongregateInfo;
    PF_OPTIONAL PlayFabClientUserNintendoSwitchAccountIdInfo* nintendoSwitchAccountInfo;
    PF_OPTIONAL PlayFabClientUserNintendoSwitchDeviceIdInfo* nintendoSwitchDeviceIdInfo;
    PF_ARRAY PlayFabClientUserOpenIdInfo** openIdInfo;
    PF_COLLECTION_COUNT uint32_t openIdInfoCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabClientUserPrivateAccountInfo* privateInfo;
    PF_OPTIONAL PlayFabClientUserPsnInfo* psnInfo;
    PF_OPTIONAL PlayFabClientUserSteamInfo* steamInfo;
    PF_OPTIONAL PlayFabClientUserTitleInfo* titleInfo;
    PF_OPTIONAL PlayFabClientUserTwitchInfo* twitchInfo;
    const char* username;
    PF_OPTIONAL PlayFabClientUserWindowsHelloInfo* windowsHelloInfo;
    PF_OPTIONAL PlayFabClientUserXboxInfo* xboxInfo;
} PlayFabClientUserAccountInfo;

typedef struct PlayFabClientGetAccountInfoResult
{
    PF_OPTIONAL PlayFabClientUserAccountInfo* accountInfo;
} PlayFabClientGetAccountInfoResult;

typedef struct PlayFabClientNameIdentifier
{
    const char* id;
    const char* name;
} PlayFabClientNameIdentifier;

typedef struct PlayFabClientGetAdPlacementsRequest
{
    const char* appId;
    PF_OPTIONAL PlayFabClientNameIdentifier* identifier;
} PlayFabClientGetAdPlacementsRequest;

typedef struct PlayFabClientGetAdPlacementsResult
{
    PF_ARRAY PlayFabClientAdPlacementDetails** adPlacements;
    PF_COLLECTION_COUNT uint32_t adPlacementsCount;
} PlayFabClientGetAdPlacementsResult;

typedef struct PlayFabClientGetCatalogItemsRequest
{
    const char* catalogVersion;
} PlayFabClientGetCatalogItemsRequest;

typedef struct PlayFabClientGetCatalogItemsResult
{
    PF_ARRAY PlayFabClientCatalogItem** catalog;
    PF_COLLECTION_COUNT uint32_t catalogCount;
} PlayFabClientGetCatalogItemsResult;

typedef struct PlayFabClientGetCharacterDataRequest
{
    const char* characterId;
    PF_OPTIONAL uint32_t* ifChangedFromDataVersion;
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* playFabId;
} PlayFabClientGetCharacterDataRequest;

typedef struct PlayFabClientUserDataRecord
{
    time_t lastUpdated;
    PF_OPTIONAL PlayFabClientUserDataPermission* permission;
    const char* value;
} PlayFabClientUserDataRecord;

typedef struct PlayFabClientGetCharacterDataResult
{
    const char* characterId;
    PF_MAP struct PlayFabClientUserDataRecordDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    uint32_t dataVersion;
} PlayFabClientGetCharacterDataResult;

typedef struct PlayFabClientGetCharacterInventoryRequest
{
    const char* catalogVersion;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientGetCharacterInventoryRequest;

typedef struct PlayFabClientVirtualCurrencyRechargeTime
{
    int32_t rechargeMax;
    time_t rechargeTime;
    int32_t secondsToRecharge;
} PlayFabClientVirtualCurrencyRechargeTime;

typedef struct PlayFabClientGetCharacterInventoryResult
{
    const char* characterId;
    PF_ARRAY PlayFabClientItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
    PF_MAP struct PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry* virtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyRechargeTimesCount;
} PlayFabClientGetCharacterInventoryResult;

typedef struct PlayFabClientGetCharacterLeaderboardRequest
{
    const char* characterType;
    PF_OPTIONAL int32_t* maxResultsCount;
    int32_t startPosition;
    const char* statisticName;
} PlayFabClientGetCharacterLeaderboardRequest;

typedef struct PlayFabClientGetCharacterLeaderboardResult
{
    PF_ARRAY PlayFabClientCharacterLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
} PlayFabClientGetCharacterLeaderboardResult;

typedef struct PlayFabClientGetCharacterStatisticsRequest
{
    const char* characterId;
} PlayFabClientGetCharacterStatisticsRequest;

typedef struct PlayFabClientGetCharacterStatisticsResult
{
    PF_MAP struct PlayFabInt32DictionaryEntry* characterStatistics;
    PF_COLLECTION_COUNT uint32_t characterStatisticsCount;
} PlayFabClientGetCharacterStatisticsResult;

typedef struct PlayFabClientGetContentDownloadUrlRequest
{
    const char* httpMethod;
    const char* key;
    PF_OPTIONAL bool* thruCDN;
} PlayFabClientGetContentDownloadUrlRequest;

typedef struct PlayFabClientGetContentDownloadUrlResult
{
    const char* uRL;
} PlayFabClientGetContentDownloadUrlResult;

typedef struct PlayFabClientPlayerProfileViewConstraints
{
    bool showAvatarUrl;
    bool showBannedUntil;
    bool showCampaignAttributions;
    bool showContactEmailAddresses;
    bool showCreated;
    bool showDisplayName;
    bool showExperimentVariants;
    bool showLastLogin;
    bool showLinkedAccounts;
    bool showLocations;
    bool showMemberships;
    bool showOrigination;
    bool showPushNotificationRegistrations;
    bool showStatistics;
    bool showTags;
    bool showTotalValueToDateInUsd;
    bool showValuesToDate;
} PlayFabClientPlayerProfileViewConstraints;

typedef struct PlayFabClientGetFriendLeaderboardAroundPlayerRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* includeFacebookFriends;
    PF_OPTIONAL bool* includeSteamFriends;
    PF_OPTIONAL int32_t* maxResultsCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabClientPlayerProfileViewConstraints* profileConstraints;
    const char* statisticName;
    PF_OPTIONAL int32_t* version;
    const char* xboxToken;
} PlayFabClientGetFriendLeaderboardAroundPlayerRequest;

typedef struct PlayFabClientPlayerLeaderboardEntry
{
    const char* displayName;
    const char* playFabId;
    int32_t position;
    PF_OPTIONAL PlayFabClientPlayerProfileModel* profile;
    int32_t statValue;
} PlayFabClientPlayerLeaderboardEntry;

typedef struct PlayFabClientGetFriendLeaderboardAroundPlayerResult
{
    PF_ARRAY PlayFabClientPlayerLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
    PF_OPTIONAL time_t* nextReset;
    int32_t version;
} PlayFabClientGetFriendLeaderboardAroundPlayerResult;

typedef struct PlayFabClientGetFriendLeaderboardRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* includeFacebookFriends;
    PF_OPTIONAL bool* includeSteamFriends;
    PF_OPTIONAL int32_t* maxResultsCount;
    PF_OPTIONAL PlayFabClientPlayerProfileViewConstraints* profileConstraints;
    int32_t startPosition;
    const char* statisticName;
    PF_OPTIONAL int32_t* version;
    const char* xboxToken;
} PlayFabClientGetFriendLeaderboardRequest;

typedef struct PlayFabClientGetFriendsListRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* includeFacebookFriends;
    PF_OPTIONAL bool* includeSteamFriends;
    PF_OPTIONAL PlayFabClientPlayerProfileViewConstraints* profileConstraints;
    const char* xboxToken;
} PlayFabClientGetFriendsListRequest;

typedef struct PlayFabClientGetFriendsListResult
{
    PF_ARRAY PlayFabClientFriendInfo** friends;
    PF_COLLECTION_COUNT uint32_t friendsCount;
} PlayFabClientGetFriendsListResult;

typedef struct PlayFabClientGetLeaderboardAroundCharacterRequest
{
    const char* characterId;
    const char* characterType;
    PF_OPTIONAL int32_t* maxResultsCount;
    const char* statisticName;
} PlayFabClientGetLeaderboardAroundCharacterRequest;

typedef struct PlayFabClientGetLeaderboardAroundCharacterResult
{
    PF_ARRAY PlayFabClientCharacterLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
} PlayFabClientGetLeaderboardAroundCharacterResult;

typedef struct PlayFabClientGetLeaderboardAroundPlayerRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* maxResultsCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabClientPlayerProfileViewConstraints* profileConstraints;
    const char* statisticName;
    PF_OPTIONAL int32_t* version;
} PlayFabClientGetLeaderboardAroundPlayerRequest;

typedef struct PlayFabClientGetLeaderboardAroundPlayerResult
{
    PF_ARRAY PlayFabClientPlayerLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
    PF_OPTIONAL time_t* nextReset;
    int32_t version;
} PlayFabClientGetLeaderboardAroundPlayerResult;

typedef struct PlayFabClientGetLeaderboardForUsersCharactersRequest
{
    int32_t maxResultsCount;
    const char* statisticName;
} PlayFabClientGetLeaderboardForUsersCharactersRequest;

typedef struct PlayFabClientGetLeaderboardForUsersCharactersResult
{
    PF_ARRAY PlayFabClientCharacterLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
} PlayFabClientGetLeaderboardForUsersCharactersResult;

typedef struct PlayFabClientGetLeaderboardRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* maxResultsCount;
    PF_OPTIONAL PlayFabClientPlayerProfileViewConstraints* profileConstraints;
    int32_t startPosition;
    const char* statisticName;
    PF_OPTIONAL int32_t* version;
} PlayFabClientGetLeaderboardRequest;

typedef struct PlayFabClientGetLeaderboardResult
{
    PF_ARRAY PlayFabClientPlayerLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
    PF_OPTIONAL time_t* nextReset;
    int32_t version;
} PlayFabClientGetLeaderboardResult;

typedef struct PlayFabClientGetPaymentTokenRequest
{
    const char* tokenProvider;
} PlayFabClientGetPaymentTokenRequest;

typedef struct PlayFabClientGetPaymentTokenResult
{
    const char* orderId;
    const char* providerToken;
} PlayFabClientGetPaymentTokenResult;

typedef struct PlayFabClientGetPhotonAuthenticationTokenRequest
{
    const char* photonApplicationId;
} PlayFabClientGetPhotonAuthenticationTokenRequest;

typedef struct PlayFabClientGetPhotonAuthenticationTokenResult
{
    const char* photonCustomAuthenticationToken;
} PlayFabClientGetPhotonAuthenticationTokenResult;

typedef struct PlayFabClientGetPlayerCombinedInfoRequestParams
{
    bool getCharacterInventories;
    bool getCharacterList;
    bool getPlayerProfile;
    bool getPlayerStatistics;
    bool getTitleData;
    bool getUserAccountInfo;
    bool getUserData;
    bool getUserInventory;
    bool getUserReadOnlyData;
    bool getUserVirtualCurrency;
    PF_ARRAY const char** playerStatisticNames;
    PF_COLLECTION_COUNT uint32_t playerStatisticNamesCount;
    PF_OPTIONAL PlayFabClientPlayerProfileViewConstraints* profileConstraints;
    PF_ARRAY const char** titleDataKeys;
    PF_COLLECTION_COUNT uint32_t titleDataKeysCount;
    PF_ARRAY const char** userDataKeys;
    PF_COLLECTION_COUNT uint32_t userDataKeysCount;
    PF_ARRAY const char** userReadOnlyDataKeys;
    PF_COLLECTION_COUNT uint32_t userReadOnlyDataKeysCount;
} PlayFabClientGetPlayerCombinedInfoRequestParams;

typedef struct PlayFabClientGetPlayerCombinedInfoRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playFabId;
} PlayFabClientGetPlayerCombinedInfoRequest;

typedef struct PlayFabClientStatisticValue
{
    const char* statisticName;
    int32_t value;
    uint32_t version;
} PlayFabClientStatisticValue;

typedef struct PlayFabClientGetPlayerCombinedInfoResultPayload
{
    PF_OPTIONAL PlayFabClientUserAccountInfo* accountInfo;
    PF_ARRAY PlayFabClientCharacterInventory** characterInventories;
    PF_COLLECTION_COUNT uint32_t characterInventoriesCount;
    PF_ARRAY PlayFabClientCharacterResult** characterList;
    PF_COLLECTION_COUNT uint32_t characterListCount;
    PF_OPTIONAL PlayFabClientPlayerProfileModel* playerProfile;
    PF_ARRAY PlayFabClientStatisticValue** playerStatistics;
    PF_COLLECTION_COUNT uint32_t playerStatisticsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* titleData;
    PF_COLLECTION_COUNT uint32_t titleDataCount;
    PF_MAP struct PlayFabClientUserDataRecordDictionaryEntry* userData;
    PF_COLLECTION_COUNT uint32_t userDataCount;
    uint32_t userDataVersion;
    PF_ARRAY PlayFabClientItemInstance** userInventory;
    PF_COLLECTION_COUNT uint32_t userInventoryCount;
    PF_MAP struct PlayFabClientUserDataRecordDictionaryEntry* userReadOnlyData;
    PF_COLLECTION_COUNT uint32_t userReadOnlyDataCount;
    uint32_t userReadOnlyDataVersion;
    PF_MAP struct PlayFabInt32DictionaryEntry* userVirtualCurrency;
    PF_COLLECTION_COUNT uint32_t userVirtualCurrencyCount;
    PF_MAP struct PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry* userVirtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t userVirtualCurrencyRechargeTimesCount;
} PlayFabClientGetPlayerCombinedInfoResultPayload;

typedef struct PlayFabClientGetPlayerCombinedInfoResult
{
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoResultPayload* infoResultPayload;
    const char* playFabId;
} PlayFabClientGetPlayerCombinedInfoResult;

typedef struct PlayFabClientGetPlayerProfileRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabClientPlayerProfileViewConstraints* profileConstraints;
} PlayFabClientGetPlayerProfileRequest;

typedef struct PlayFabClientGetPlayerProfileResult
{
    PF_OPTIONAL PlayFabClientPlayerProfileModel* playerProfile;
} PlayFabClientGetPlayerProfileResult;

typedef struct PlayFabClientGetSegmentResult
{
    const char* aBTestParent;
    const char* id;
    const char* name;
} PlayFabClientGetSegmentResult;

typedef struct PlayFabClientGetPlayerSegmentsResult
{
    PF_ARRAY PlayFabClientGetSegmentResult** segments;
    PF_COLLECTION_COUNT uint32_t segmentsCount;
} PlayFabClientGetPlayerSegmentsResult;

typedef struct PlayFabClientStatisticNameVersion
{
    const char* statisticName;
    uint32_t version;
} PlayFabClientStatisticNameVersion;

typedef struct PlayFabClientGetPlayerStatisticsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY const char** statisticNames;
    PF_COLLECTION_COUNT uint32_t statisticNamesCount;
    PF_ARRAY PlayFabClientStatisticNameVersion** statisticNameVersions;
    PF_COLLECTION_COUNT uint32_t statisticNameVersionsCount;
} PlayFabClientGetPlayerStatisticsRequest;

typedef struct PlayFabClientGetPlayerStatisticsResult
{
    PF_ARRAY PlayFabClientStatisticValue** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
} PlayFabClientGetPlayerStatisticsResult;

typedef struct PlayFabClientGetPlayerStatisticVersionsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* statisticName;
} PlayFabClientGetPlayerStatisticVersionsRequest;

typedef struct PlayFabClientPlayerStatisticVersion
{
    time_t activationTime;
    PF_OPTIONAL time_t* deactivationTime;
    PF_OPTIONAL time_t* scheduledActivationTime;
    PF_OPTIONAL time_t* scheduledDeactivationTime;
    const char* statisticName;
    uint32_t version;
} PlayFabClientPlayerStatisticVersion;

typedef struct PlayFabClientGetPlayerStatisticVersionsResult
{
    PF_ARRAY PlayFabClientPlayerStatisticVersion** statisticVersions;
    PF_COLLECTION_COUNT uint32_t statisticVersionsCount;
} PlayFabClientGetPlayerStatisticVersionsResult;

typedef struct PlayFabClientGetPlayerTagsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playfabNamespace;
    const char* playFabId;
} PlayFabClientGetPlayerTagsRequest;

typedef struct PlayFabClientGetPlayerTagsResult
{
    const char* playFabId;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
} PlayFabClientGetPlayerTagsResult;

typedef struct PlayFabClientGetPlayerTradesRequest
{
    PF_OPTIONAL PlayFabClientTradeStatus* statusFilter;
} PlayFabClientGetPlayerTradesRequest;

typedef struct PlayFabClientGetPlayerTradesResponse
{
    PF_ARRAY PlayFabClientTradeInfo** acceptedTrades;
    PF_COLLECTION_COUNT uint32_t acceptedTradesCount;
    PF_ARRAY PlayFabClientTradeInfo** openedTrades;
    PF_COLLECTION_COUNT uint32_t openedTradesCount;
} PlayFabClientGetPlayerTradesResponse;

typedef struct PlayFabClientGetPlayFabIDsFromFacebookIDsRequest
{
    PF_ARRAY const char** facebookIDs;
    PF_COLLECTION_COUNT uint32_t facebookIDsCount;
} PlayFabClientGetPlayFabIDsFromFacebookIDsRequest;

typedef struct PlayFabClientGetPlayFabIDsFromFacebookIDsResult
{
    PF_ARRAY PlayFabClientFacebookPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromFacebookIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest
{
    PF_ARRAY const char** facebookInstantGamesIds;
    PF_COLLECTION_COUNT uint32_t facebookInstantGamesIdsCount;
} PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest;

typedef struct PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult
{
    PF_ARRAY PlayFabClientFacebookInstantGamesPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsResult;

typedef struct PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest
{
    PF_ARRAY const char** gameCenterIDs;
    PF_COLLECTION_COUNT uint32_t gameCenterIDsCount;
} PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest;

typedef struct PlayFabClientGetPlayFabIDsFromGameCenterIDsResult
{
    PF_ARRAY PlayFabClientGameCenterPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromGameCenterIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromGenericIDsRequest
{
    PF_ARRAY PlayFabClientGenericServiceId** genericIDs;
    PF_COLLECTION_COUNT uint32_t genericIDsCount;
} PlayFabClientGetPlayFabIDsFromGenericIDsRequest;

typedef struct PlayFabClientGetPlayFabIDsFromGenericIDsResult
{
    PF_ARRAY PlayFabClientGenericPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromGenericIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromGoogleIDsRequest
{
    PF_ARRAY const char** googleIDs;
    PF_COLLECTION_COUNT uint32_t googleIDsCount;
} PlayFabClientGetPlayFabIDsFromGoogleIDsRequest;

typedef struct PlayFabClientGooglePlayFabIdPair
{
    const char* googleId;
    const char* playFabId;
} PlayFabClientGooglePlayFabIdPair;

typedef struct PlayFabClientGetPlayFabIDsFromGoogleIDsResult
{
    PF_ARRAY PlayFabClientGooglePlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromGoogleIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromKongregateIDsRequest
{
    PF_ARRAY const char** kongregateIDs;
    PF_COLLECTION_COUNT uint32_t kongregateIDsCount;
} PlayFabClientGetPlayFabIDsFromKongregateIDsRequest;

typedef struct PlayFabClientKongregatePlayFabIdPair
{
    const char* kongregateId;
    const char* playFabId;
} PlayFabClientKongregatePlayFabIdPair;

typedef struct PlayFabClientGetPlayFabIDsFromKongregateIDsResult
{
    PF_ARRAY PlayFabClientKongregatePlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromKongregateIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
{
    PF_ARRAY const char** nintendoSwitchDeviceIds;
    PF_COLLECTION_COUNT uint32_t nintendoSwitchDeviceIdsCount;
} PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;

typedef struct PlayFabClientNintendoSwitchPlayFabIdPair
{
    const char* nintendoSwitchDeviceId;
    const char* playFabId;
} PlayFabClientNintendoSwitchPlayFabIdPair;

typedef struct PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
{
    PF_ARRAY PlayFabClientNintendoSwitchPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;

typedef struct PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest
{
    PF_OPTIONAL int32_t* issuerId;
    PF_ARRAY const char** pSNAccountIDs;
    PF_COLLECTION_COUNT uint32_t pSNAccountIDsCount;
} PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest;

typedef struct PlayFabClientPSNAccountPlayFabIdPair
{
    const char* playFabId;
    const char* pSNAccountId;
} PlayFabClientPSNAccountPlayFabIdPair;

typedef struct PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult
{
    PF_ARRAY PlayFabClientPSNAccountPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromPSNAccountIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromSteamIDsRequest
{
    PF_ARRAY const char** steamStringIDs;
    PF_COLLECTION_COUNT uint32_t steamStringIDsCount;
} PlayFabClientGetPlayFabIDsFromSteamIDsRequest;

typedef struct PlayFabClientSteamPlayFabIdPair
{
    const char* playFabId;
    const char* steamStringId;
} PlayFabClientSteamPlayFabIdPair;

typedef struct PlayFabClientGetPlayFabIDsFromSteamIDsResult
{
    PF_ARRAY PlayFabClientSteamPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromSteamIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromTwitchIDsRequest
{
    PF_ARRAY const char** twitchIds;
    PF_COLLECTION_COUNT uint32_t twitchIdsCount;
} PlayFabClientGetPlayFabIDsFromTwitchIDsRequest;

typedef struct PlayFabClientTwitchPlayFabIdPair
{
    const char* playFabId;
    const char* twitchId;
} PlayFabClientTwitchPlayFabIdPair;

typedef struct PlayFabClientGetPlayFabIDsFromTwitchIDsResult
{
    PF_ARRAY PlayFabClientTwitchPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromTwitchIDsResult;

typedef struct PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest
{
    const char* sandbox;
    PF_ARRAY const char** xboxLiveAccountIDs;
    PF_COLLECTION_COUNT uint32_t xboxLiveAccountIDsCount;
} PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest;

typedef struct PlayFabClientXboxLiveAccountPlayFabIdPair
{
    const char* playFabId;
    const char* xboxLiveAccountId;
} PlayFabClientXboxLiveAccountPlayFabIdPair;

typedef struct PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult
{
    PF_ARRAY PlayFabClientXboxLiveAccountPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPlayFabIDsFromXboxLiveIDsResult;

typedef struct PlayFabClientGetPublisherDataRequest
{
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
} PlayFabClientGetPublisherDataRequest;

typedef struct PlayFabClientGetPublisherDataResult
{
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetPublisherDataResult;

typedef struct PlayFabClientGetPurchaseRequest
{
    const char* orderId;
} PlayFabClientGetPurchaseRequest;

typedef struct PlayFabClientGetPurchaseResult
{
    const char* orderId;
    const char* paymentProvider;
    time_t purchaseDate;
    const char* transactionId;
    const char* transactionStatus;
} PlayFabClientGetPurchaseResult;

typedef struct PlayFabClientGetSharedGroupDataRequest
{
    PF_OPTIONAL bool* getMembers;
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* sharedGroupId;
} PlayFabClientGetSharedGroupDataRequest;

typedef struct PlayFabClientSharedGroupDataRecord
{
    time_t lastUpdated;
    const char* lastUpdatedBy;
    PF_OPTIONAL PlayFabClientUserDataPermission* permission;
    const char* value;
} PlayFabClientSharedGroupDataRecord;

typedef struct PlayFabClientGetSharedGroupDataResult
{
    PF_MAP struct PlayFabClientSharedGroupDataRecordDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
} PlayFabClientGetSharedGroupDataResult;

typedef struct PlayFabClientGetStoreItemsRequest
{
    const char* catalogVersion;
    const char* storeId;
} PlayFabClientGetStoreItemsRequest;

typedef struct PlayFabClientStoreMarketingModel
{
    const char* description;
    const char* displayName;
    PlayFabJsonObject metadata;
} PlayFabClientStoreMarketingModel;

typedef struct PlayFabClientStoreItem
{
    PlayFabJsonObject customData;
    PF_OPTIONAL uint32_t* displayPosition;
    const char* itemId;
    PF_MAP struct PlayFabUint32DictionaryEntry* realCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t realCurrencyPricesCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyPricesCount;
} PlayFabClientStoreItem;

typedef struct PlayFabClientGetStoreItemsResult
{
    const char* catalogVersion;
    PF_OPTIONAL PlayFabClientStoreMarketingModel* marketingData;
    PF_OPTIONAL PlayFabClientSourceType* source;
    PF_ARRAY PlayFabClientStoreItem** store;
    PF_COLLECTION_COUNT uint32_t storeCount;
    const char* storeId;
} PlayFabClientGetStoreItemsResult;

typedef struct PlayFabClientGetTimeResult
{
    time_t time;
} PlayFabClientGetTimeResult;

typedef struct PlayFabClientGetTitleDataRequest
{
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* overrideLabel;
} PlayFabClientGetTitleDataRequest;

typedef struct PlayFabClientGetTitleDataResult
{
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabClientGetTitleDataResult;

typedef struct PlayFabClientGetTitleNewsRequest
{
    PF_OPTIONAL int32_t* count;
} PlayFabClientGetTitleNewsRequest;

typedef struct PlayFabClientTitleNewsItem
{
    const char* body;
    const char* newsId;
    time_t timestamp;
    const char* title;
} PlayFabClientTitleNewsItem;

typedef struct PlayFabClientGetTitleNewsResult
{
    PF_ARRAY PlayFabClientTitleNewsItem** news;
    PF_COLLECTION_COUNT uint32_t newsCount;
} PlayFabClientGetTitleNewsResult;

typedef struct PlayFabClientGetTitlePublicKeyRequest
{
    const char* titleId;
    const char* titleSharedSecret;
} PlayFabClientGetTitlePublicKeyRequest;

typedef struct PlayFabClientGetTitlePublicKeyResult
{
    const char* rSAPublicKey;
} PlayFabClientGetTitlePublicKeyResult;

typedef struct PlayFabClientGetTradeStatusRequest
{
    const char* offeringPlayerId;
    const char* tradeId;
} PlayFabClientGetTradeStatusRequest;

typedef struct PlayFabClientGetTradeStatusResponse
{
    PF_OPTIONAL PlayFabClientTradeInfo* trade;
} PlayFabClientGetTradeStatusResponse;

typedef struct PlayFabClientGetUserDataRequest
{
    PF_OPTIONAL uint32_t* ifChangedFromDataVersion;
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* playFabId;
} PlayFabClientGetUserDataRequest;

typedef struct PlayFabClientGetUserDataResult
{
    PF_MAP struct PlayFabClientUserDataRecordDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    uint32_t dataVersion;
} PlayFabClientGetUserDataResult;

typedef struct PlayFabClientGetUserInventoryRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientGetUserInventoryRequest;

typedef struct PlayFabClientGetUserInventoryResult
{
    PF_ARRAY PlayFabClientItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
    PF_MAP struct PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry* virtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyRechargeTimesCount;
} PlayFabClientGetUserInventoryResult;

typedef struct PlayFabClientGetWindowsHelloChallengeRequest
{
    const char* publicKeyHint;
    const char* titleId;
} PlayFabClientGetWindowsHelloChallengeRequest;

typedef struct PlayFabClientGetWindowsHelloChallengeResponse
{
    const char* challenge;
} PlayFabClientGetWindowsHelloChallengeResponse;

typedef struct PlayFabClientGrantCharacterToUserRequest
{
    const char* catalogVersion;
    const char* characterName;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* itemId;
} PlayFabClientGrantCharacterToUserRequest;

typedef struct PlayFabClientGrantCharacterToUserResult
{
    const char* characterId;
    const char* characterType;
    bool result;
} PlayFabClientGrantCharacterToUserResult;

typedef struct PlayFabClientItemPurchaseRequest
{
    const char* annotation;
    const char* itemId;
    uint32_t quantity;
    PF_ARRAY const char** upgradeFromItems;
    PF_COLLECTION_COUNT uint32_t upgradeFromItemsCount;
} PlayFabClientItemPurchaseRequest;

typedef struct PlayFabClientLinkAndroidDeviceIDRequest
{
    const char* androidDevice;
    const char* androidDeviceId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* oS;
} PlayFabClientLinkAndroidDeviceIDRequest;

typedef struct PlayFabClientLinkAppleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* identityToken;
} PlayFabClientLinkAppleRequest;

typedef struct PlayFabClientLinkCustomIDRequest
{
    const char* customId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
} PlayFabClientLinkCustomIDRequest;

typedef struct PlayFabClientLinkFacebookAccountRequest
{
    const char* accessToken;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
} PlayFabClientLinkFacebookAccountRequest;

typedef struct PlayFabClientLinkFacebookInstantGamesIdRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* facebookInstantGamesSignature;
    PF_OPTIONAL bool* forceLink;
} PlayFabClientLinkFacebookInstantGamesIdRequest;

typedef struct PlayFabClientLinkGameCenterAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* gameCenterId;
    const char* publicKeyUrl;
    const char* salt;
    const char* signature;
    const char* timestamp;
} PlayFabClientLinkGameCenterAccountRequest;

typedef struct PlayFabClientLinkGoogleAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* serverAuthCode;
} PlayFabClientLinkGoogleAccountRequest;

typedef struct PlayFabClientLinkIOSDeviceIDRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* deviceId;
    const char* deviceModel;
    PF_OPTIONAL bool* forceLink;
    const char* oS;
} PlayFabClientLinkIOSDeviceIDRequest;

typedef struct PlayFabClientLinkKongregateAccountRequest
{
    const char* authTicket;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* kongregateId;
} PlayFabClientLinkKongregateAccountRequest;

typedef struct PlayFabClientLinkNintendoServiceAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* identityToken;
} PlayFabClientLinkNintendoServiceAccountRequest;

typedef struct PlayFabClientLinkNintendoSwitchDeviceIdRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* nintendoSwitchDeviceId;
} PlayFabClientLinkNintendoSwitchDeviceIdRequest;

typedef struct PlayFabClientLinkOpenIdConnectRequest
{
    const char* connectionId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* idToken;
} PlayFabClientLinkOpenIdConnectRequest;

typedef struct PlayFabClientLinkPSNAccountRequest
{
    const char* authCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    PF_OPTIONAL int32_t* issuerId;
    const char* redirectUri;
} PlayFabClientLinkPSNAccountRequest;

typedef struct PlayFabClientLinkSteamAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* steamTicket;
} PlayFabClientLinkSteamAccountRequest;

typedef struct PlayFabClientLinkTwitchAccountRequest
{
    const char* accessToken;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
} PlayFabClientLinkTwitchAccountRequest;

typedef struct PlayFabClientLinkWindowsHelloAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* deviceName;
    PF_OPTIONAL bool* forceLink;
    const char* publicKey;
    const char* userName;
} PlayFabClientLinkWindowsHelloAccountRequest;

typedef struct PlayFabClientLinkXboxAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* xboxToken;
} PlayFabClientLinkXboxAccountRequest;

typedef struct PlayFabClientListUsersCharactersRequest
{
    const char* playFabId;
} PlayFabClientListUsersCharactersRequest;

typedef struct PlayFabClientListUsersCharactersResult
{
    PF_ARRAY PlayFabClientCharacterResult** characters;
    PF_COLLECTION_COUNT uint32_t charactersCount;
} PlayFabClientListUsersCharactersResult;

typedef struct PlayFabClientUserSettings
{
    bool gatherDeviceInfo;
    bool gatherFocusInfo;
    bool needsAttribution;
} PlayFabClientUserSettings;

typedef struct PlayFabClientVariable
{
    const char* name;
    const char* value;
} PlayFabClientVariable;

typedef struct PlayFabClientTreatmentAssignment
{
    PF_ARRAY PlayFabClientVariable** variables;
    PF_COLLECTION_COUNT uint32_t variablesCount;
    PF_ARRAY const char** variants;
    PF_COLLECTION_COUNT uint32_t variantsCount;
} PlayFabClientTreatmentAssignment;

typedef struct PlayFabClientLoginResult
{
    PF_OPTIONAL PlayFabClientEntityTokenResponse* entityToken;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoResultPayload* infoResultPayload;
    PF_OPTIONAL time_t* lastLoginTime;
    bool newlyCreated;
    const char* playFabId;
    const char* sessionTicket;
    PF_OPTIONAL PlayFabClientUserSettings* settingsForUser;
    PF_OPTIONAL PlayFabClientTreatmentAssignment* treatmentAssignment;
} PlayFabClientLoginResult;

typedef struct PlayFabClientLoginWithAndroidDeviceIDRequest
{
    const char* androidDevice;
    const char* androidDeviceId;
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* oS;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithAndroidDeviceIDRequest;

typedef struct PlayFabClientLoginWithAppleRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    const char* identityToken;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithAppleRequest;

typedef struct PlayFabClientLoginWithCustomIDRequest
{
    PF_OPTIONAL bool* createAccount;
    const char* customId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithCustomIDRequest;

typedef struct PlayFabClientLoginWithEmailAddressRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* email;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* password;
    const char* titleId;
} PlayFabClientLoginWithEmailAddressRequest;

typedef struct PlayFabClientLoginWithFacebookInstantGamesIdRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    const char* facebookInstantGamesSignature;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithFacebookInstantGamesIdRequest;

typedef struct PlayFabClientLoginWithFacebookRequest
{
    const char* accessToken;
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithFacebookRequest;

typedef struct PlayFabClientLoginWithGameCenterRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerId;
    const char* playerSecret;
    const char* publicKeyUrl;
    const char* salt;
    const char* signature;
    const char* timestamp;
    const char* titleId;
} PlayFabClientLoginWithGameCenterRequest;

typedef struct PlayFabClientLoginWithGoogleAccountRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* serverAuthCode;
    const char* titleId;
} PlayFabClientLoginWithGoogleAccountRequest;

typedef struct PlayFabClientLoginWithIOSDeviceIDRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* deviceId;
    const char* deviceModel;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* oS;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithIOSDeviceIDRequest;

typedef struct PlayFabClientLoginWithKongregateRequest
{
    const char* authTicket;
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* kongregateId;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithKongregateRequest;

typedef struct PlayFabClientLoginWithNintendoServiceAccountRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    const char* identityToken;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithNintendoServiceAccountRequest;

typedef struct PlayFabClientLoginWithNintendoSwitchDeviceIdRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* nintendoSwitchDeviceId;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithNintendoSwitchDeviceIdRequest;

typedef struct PlayFabClientLoginWithOpenIdConnectRequest
{
    const char* connectionId;
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    const char* idToken;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithOpenIdConnectRequest;

typedef struct PlayFabClientLoginWithPlayFabRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* password;
    const char* titleId;
    const char* username;
} PlayFabClientLoginWithPlayFabRequest;

typedef struct PlayFabClientLoginWithPSNRequest
{
    const char* authCode;
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    PF_OPTIONAL int32_t* issuerId;
    const char* playerSecret;
    const char* redirectUri;
    const char* titleId;
} PlayFabClientLoginWithPSNRequest;

typedef struct PlayFabClientLoginWithSteamRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* steamTicket;
    const char* titleId;
} PlayFabClientLoginWithSteamRequest;

typedef struct PlayFabClientLoginWithTwitchRequest
{
    const char* accessToken;
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
} PlayFabClientLoginWithTwitchRequest;

typedef struct PlayFabClientLoginWithWindowsHelloRequest
{
    const char* challengeSignature;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* publicKeyHint;
    const char* titleId;
} PlayFabClientLoginWithWindowsHelloRequest;

typedef struct PlayFabClientLoginWithXboxRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* titleId;
    const char* xboxToken;
} PlayFabClientLoginWithXboxRequest;

typedef struct PlayFabClientMatchmakeRequest
{
    const char* buildVersion;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* gameMode;
    const char* lobbyId;
    PF_OPTIONAL PlayFabClientRegion* region;
    PF_OPTIONAL bool* startNewIfNoneFound;
    const char* statisticName;
    PF_OPTIONAL PlayFabClientCollectionFilter* tagFilter;
} PlayFabClientMatchmakeRequest;

typedef struct PlayFabClientMatchmakeResult
{
    const char* expires;
    const char* lobbyID;
    PF_OPTIONAL int32_t* pollWaitTimeMS;
    const char* serverIPV4Address;
    const char* serverIPV6Address;
    PF_OPTIONAL int32_t* serverPort;
    const char* serverPublicDNSName;
    PF_OPTIONAL PlayFabClientMatchmakeStatus* status;
    const char* ticket;
} PlayFabClientMatchmakeResult;

typedef struct PlayFabClientModifyUserVirtualCurrencyResult
{
    int32_t balance;
    int32_t balanceChange;
    const char* playFabId;
    const char* virtualCurrency;
} PlayFabClientModifyUserVirtualCurrencyResult;

typedef struct PlayFabClientOpenTradeRequest
{
    PF_ARRAY const char** allowedPlayerIds;
    PF_COLLECTION_COUNT uint32_t allowedPlayerIdsCount;
    PF_ARRAY const char** offeredInventoryInstanceIds;
    PF_COLLECTION_COUNT uint32_t offeredInventoryInstanceIdsCount;
    PF_ARRAY const char** requestedCatalogItemIds;
    PF_COLLECTION_COUNT uint32_t requestedCatalogItemIdsCount;
} PlayFabClientOpenTradeRequest;

typedef struct PlayFabClientOpenTradeResponse
{
    PF_OPTIONAL PlayFabClientTradeInfo* trade;
} PlayFabClientOpenTradeResponse;

typedef struct PlayFabClientPayForPurchaseRequest
{
    const char* currency;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* orderId;
    const char* providerName;
    const char* providerTransactionId;
} PlayFabClientPayForPurchaseRequest;

typedef struct PlayFabClientPayForPurchaseResult
{
    uint32_t creditApplied;
    const char* orderId;
    const char* providerData;
    const char* providerToken;
    const char* purchaseConfirmationPageURL;
    const char* purchaseCurrency;
    uint32_t purchasePrice;
    PF_OPTIONAL PlayFabClientTransactionStatus* status;
    PF_MAP struct PlayFabInt32DictionaryEntry* vCAmount;
    PF_COLLECTION_COUNT uint32_t vCAmountCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
} PlayFabClientPayForPurchaseResult;

typedef struct PlayFabClientPaymentOption
{
    const char* currency;
    uint32_t price;
    const char* providerName;
    uint32_t storeCredit;
} PlayFabClientPaymentOption;

typedef struct PlayFabClientPurchaseItemRequest
{
    const char* catalogVersion;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* itemId;
    int32_t price;
    const char* storeId;
    const char* virtualCurrency;
} PlayFabClientPurchaseItemRequest;

typedef struct PlayFabClientPurchaseItemResult
{
    PF_ARRAY PlayFabClientItemInstance** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;
} PlayFabClientPurchaseItemResult;

typedef struct PlayFabClientPurchaseReceiptFulfillment
{
    PF_ARRAY PlayFabClientItemInstance** fulfilledItems;
    PF_COLLECTION_COUNT uint32_t fulfilledItemsCount;
    const char* recordedPriceSource;
    const char* recordedTransactionCurrency;
    PF_OPTIONAL uint32_t* recordedTransactionTotal;
} PlayFabClientPurchaseReceiptFulfillment;

typedef struct PlayFabClientRedeemCouponRequest
{
    const char* catalogVersion;
    const char* characterId;
    const char* couponCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientRedeemCouponRequest;

typedef struct PlayFabClientRedeemCouponResult
{
    PF_ARRAY PlayFabClientItemInstance** grantedItems;
    PF_COLLECTION_COUNT uint32_t grantedItemsCount;
} PlayFabClientRedeemCouponResult;

typedef struct PlayFabClientRefreshPSNAuthTokenRequest
{
    const char* authCode;
    PF_OPTIONAL int32_t* issuerId;
    const char* redirectUri;
} PlayFabClientRefreshPSNAuthTokenRequest;

typedef struct PlayFabClientRegisterForIOSPushNotificationRequest
{
    const char* confirmationMessage;
    const char* deviceToken;
    PF_OPTIONAL bool* sendPushNotificationConfirmation;
} PlayFabClientRegisterForIOSPushNotificationRequest;

typedef struct PlayFabClientRegisterPlayFabUserRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* displayName;
    const char* email;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* password;
    const char* playerSecret;
    PF_OPTIONAL bool* requireBothUsernameAndEmail;
    const char* titleId;
    const char* username;
} PlayFabClientRegisterPlayFabUserRequest;

typedef struct PlayFabClientRegisterPlayFabUserResult
{
    PF_OPTIONAL PlayFabClientEntityTokenResponse* entityToken;
    const char* playFabId;
    const char* sessionTicket;
    PF_OPTIONAL PlayFabClientUserSettings* settingsForUser;
    const char* username;
} PlayFabClientRegisterPlayFabUserResult;

typedef struct PlayFabClientRegisterWithWindowsHelloRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* deviceName;
    const char* encryptedRequest;
    PF_OPTIONAL PlayFabClientGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* publicKey;
    const char* titleId;
    const char* userName;
} PlayFabClientRegisterWithWindowsHelloRequest;

typedef struct PlayFabClientRemoveContactEmailRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientRemoveContactEmailRequest;

typedef struct PlayFabClientRemoveFriendRequest
{
    const char* friendPlayFabId;
} PlayFabClientRemoveFriendRequest;

typedef struct PlayFabClientRemoveGenericIDRequest
{
    PlayFabClientGenericServiceId* genericId;
} PlayFabClientRemoveGenericIDRequest;

typedef struct PlayFabClientRemoveSharedGroupMembersRequest
{
    PF_ARRAY const char** playFabIds;
    PF_COLLECTION_COUNT uint32_t playFabIdsCount;
    const char* sharedGroupId;
} PlayFabClientRemoveSharedGroupMembersRequest;

typedef struct PlayFabClientReportAdActivityRequest
{
    PlayFabClientAdActivity activity;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* placementId;
    const char* rewardId;
} PlayFabClientReportAdActivityRequest;

typedef struct PlayFabClientReportPlayerClientRequest
{
    const char* comment;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* reporteeId;
} PlayFabClientReportPlayerClientRequest;

typedef struct PlayFabClientReportPlayerClientResult
{
    int32_t submissionsRemaining;
} PlayFabClientReportPlayerClientResult;

typedef struct PlayFabClientRestoreIOSPurchasesRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* receiptData;
} PlayFabClientRestoreIOSPurchasesRequest;

typedef struct PlayFabClientRestoreIOSPurchasesResult
{
    PF_ARRAY PlayFabClientPurchaseReceiptFulfillment** fulfillments;
    PF_COLLECTION_COUNT uint32_t fulfillmentsCount;
} PlayFabClientRestoreIOSPurchasesResult;

typedef struct PlayFabClientRewardAdActivityRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* placementId;
    const char* rewardId;
} PlayFabClientRewardAdActivityRequest;

typedef struct PlayFabClientRewardAdActivityResult
{
    const char* adActivityEventId;
    PF_ARRAY const char** debugResults;
    PF_COLLECTION_COUNT uint32_t debugResultsCount;
    const char* placementId;
    const char* placementName;
    PF_OPTIONAL int32_t* placementViewsRemaining;
    PF_OPTIONAL double* placementViewsResetMinutes;
    PF_OPTIONAL PlayFabClientAdRewardResults* rewardResults;
} PlayFabClientRewardAdActivityResult;

typedef struct PlayFabClientSendAccountRecoveryEmailRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* email;
    const char* emailTemplateId;
    const char* titleId;
} PlayFabClientSendAccountRecoveryEmailRequest;

typedef struct PlayFabClientSetFriendTagsRequest
{
    const char* friendPlayFabId;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
} PlayFabClientSetFriendTagsRequest;

typedef struct PlayFabClientSetPlayerSecretRequest
{
    const char* encryptedRequest;
    const char* playerSecret;
} PlayFabClientSetPlayerSecretRequest;

typedef struct PlayFabClientStartGameRequest
{
    const char* buildVersion;
    const char* characterId;
    const char* customCommandLineData;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* gameMode;
    PlayFabClientRegion region;
    const char* statisticName;
} PlayFabClientStartGameRequest;

typedef struct PlayFabClientStartGameResult
{
    const char* expires;
    const char* lobbyID;
    const char* password;
    const char* serverIPV4Address;
    const char* serverIPV6Address;
    PF_OPTIONAL int32_t* serverPort;
    const char* serverPublicDNSName;
    const char* ticket;
} PlayFabClientStartGameResult;

typedef struct PlayFabClientStartPurchaseRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabClientItemPurchaseRequest** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;
    const char* storeId;
} PlayFabClientStartPurchaseRequest;

typedef struct PlayFabClientStartPurchaseResult
{
    PF_ARRAY PlayFabClientCartItem** contents;
    PF_COLLECTION_COUNT uint32_t contentsCount;
    const char* orderId;
    PF_ARRAY PlayFabClientPaymentOption** paymentOptions;
    PF_COLLECTION_COUNT uint32_t paymentOptionsCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrencyBalances;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyBalancesCount;
} PlayFabClientStartPurchaseResult;

typedef struct PlayFabClientStatisticUpdate
{
    const char* statisticName;
    int32_t value;
    PF_OPTIONAL uint32_t* version;
} PlayFabClientStatisticUpdate;

typedef struct PlayFabClientSubtractUserVirtualCurrencyRequest
{
    int32_t amount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* virtualCurrency;
} PlayFabClientSubtractUserVirtualCurrencyRequest;

typedef struct PlayFabClientUnlinkAndroidDeviceIDRequest
{
    const char* androidDeviceId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkAndroidDeviceIDRequest;

typedef struct PlayFabClientUnlinkAppleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkAppleRequest;

typedef struct PlayFabClientUnlinkCustomIDRequest
{
    const char* customId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkCustomIDRequest;

typedef struct PlayFabClientUnlinkFacebookAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkFacebookAccountRequest;

typedef struct PlayFabClientUnlinkFacebookInstantGamesIdRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* facebookInstantGamesId;
} PlayFabClientUnlinkFacebookInstantGamesIdRequest;

typedef struct PlayFabClientUnlinkGameCenterAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkGameCenterAccountRequest;

typedef struct PlayFabClientUnlinkGoogleAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkGoogleAccountRequest;

typedef struct PlayFabClientUnlinkIOSDeviceIDRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* deviceId;
} PlayFabClientUnlinkIOSDeviceIDRequest;

typedef struct PlayFabClientUnlinkKongregateAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkKongregateAccountRequest;

typedef struct PlayFabClientUnlinkNintendoServiceAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkNintendoServiceAccountRequest;

typedef struct PlayFabClientUnlinkNintendoSwitchDeviceIdRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* nintendoSwitchDeviceId;
} PlayFabClientUnlinkNintendoSwitchDeviceIdRequest;

typedef struct PlayFabClientUnlinkOpenIdConnectRequest
{
    const char* connectionId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkOpenIdConnectRequest;

typedef struct PlayFabClientUnlinkPSNAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkPSNAccountRequest;

typedef struct PlayFabClientUnlinkSteamAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkSteamAccountRequest;

typedef struct PlayFabClientUnlinkTwitchAccountRequest
{
    const char* accessToken;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkTwitchAccountRequest;

typedef struct PlayFabClientUnlinkWindowsHelloAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* publicKeyHint;
} PlayFabClientUnlinkWindowsHelloAccountRequest;

typedef struct PlayFabClientUnlinkXboxAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlinkXboxAccountRequest;

typedef struct PlayFabClientUnlockContainerInstanceRequest
{
    const char* catalogVersion;
    const char* characterId;
    const char* containerItemInstanceId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* keyItemInstanceId;
} PlayFabClientUnlockContainerInstanceRequest;

typedef struct PlayFabClientUnlockContainerItemRequest
{
    const char* catalogVersion;
    const char* characterId;
    const char* containerItemId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUnlockContainerItemRequest;

typedef struct PlayFabClientUnlockContainerItemResult
{
    PF_ARRAY PlayFabClientItemInstance** grantedItems;
    PF_COLLECTION_COUNT uint32_t grantedItemsCount;
    const char* unlockedItemInstanceId;
    const char* unlockedWithItemInstanceId;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
} PlayFabClientUnlockContainerItemResult;

typedef struct PlayFabClientUpdateAvatarUrlRequest
{
    const char* imageUrl;
} PlayFabClientUpdateAvatarUrlRequest;

typedef struct PlayFabClientUpdateCharacterDataRequest
{
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    PF_OPTIONAL PlayFabClientUserDataPermission* permission;
} PlayFabClientUpdateCharacterDataRequest;

typedef struct PlayFabClientUpdateCharacterDataResult
{
    uint32_t dataVersion;
} PlayFabClientUpdateCharacterDataResult;

typedef struct PlayFabClientUpdateCharacterStatisticsRequest
{
    const char* characterId;
    PF_MAP struct PlayFabInt32DictionaryEntry* characterStatistics;
    PF_COLLECTION_COUNT uint32_t characterStatisticsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabClientUpdateCharacterStatisticsRequest;

typedef struct PlayFabClientUpdatePlayerStatisticsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabClientStatisticUpdate** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
} PlayFabClientUpdatePlayerStatisticsRequest;

typedef struct PlayFabClientUpdateSharedGroupDataRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    PF_OPTIONAL PlayFabClientUserDataPermission* permission;
    const char* sharedGroupId;
} PlayFabClientUpdateSharedGroupDataRequest;

typedef struct PlayFabClientUpdateUserDataRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    PF_OPTIONAL PlayFabClientUserDataPermission* permission;
} PlayFabClientUpdateUserDataRequest;

typedef struct PlayFabClientUpdateUserDataResult
{
    uint32_t dataVersion;
} PlayFabClientUpdateUserDataResult;

typedef struct PlayFabClientUpdateUserTitleDisplayNameRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* displayName;
} PlayFabClientUpdateUserTitleDisplayNameRequest;

typedef struct PlayFabClientUpdateUserTitleDisplayNameResult
{
    const char* displayName;
} PlayFabClientUpdateUserTitleDisplayNameResult;

typedef struct PlayFabClientValidateAmazonReceiptRequest
{
    const char* catalogVersion;
    const char* currencyCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t purchasePrice;
    const char* receiptId;
    const char* userId;
} PlayFabClientValidateAmazonReceiptRequest;

typedef struct PlayFabClientValidateAmazonReceiptResult
{
    PF_ARRAY PlayFabClientPurchaseReceiptFulfillment** fulfillments;
    PF_COLLECTION_COUNT uint32_t fulfillmentsCount;
} PlayFabClientValidateAmazonReceiptResult;

typedef struct PlayFabClientValidateGooglePlayPurchaseRequest
{
    const char* catalogVersion;
    const char* currencyCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL uint32_t* purchasePrice;
    const char* receiptJson;
    const char* signature;
} PlayFabClientValidateGooglePlayPurchaseRequest;

typedef struct PlayFabClientValidateGooglePlayPurchaseResult
{
    PF_ARRAY PlayFabClientPurchaseReceiptFulfillment** fulfillments;
    PF_COLLECTION_COUNT uint32_t fulfillmentsCount;
} PlayFabClientValidateGooglePlayPurchaseResult;

typedef struct PlayFabClientValidateIOSReceiptRequest
{
    const char* catalogVersion;
    const char* currencyCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t purchasePrice;
    const char* receiptData;
} PlayFabClientValidateIOSReceiptRequest;

typedef struct PlayFabClientValidateIOSReceiptResult
{
    PF_ARRAY PlayFabClientPurchaseReceiptFulfillment** fulfillments;
    PF_COLLECTION_COUNT uint32_t fulfillmentsCount;
} PlayFabClientValidateIOSReceiptResult;

typedef struct PlayFabClientValidateWindowsReceiptRequest
{
    const char* catalogVersion;
    const char* currencyCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    uint32_t purchasePrice;
    const char* receipt;
} PlayFabClientValidateWindowsReceiptRequest;

typedef struct PlayFabClientValidateWindowsReceiptResult
{
    PF_ARRAY PlayFabClientPurchaseReceiptFulfillment** fulfillments;
    PF_COLLECTION_COUNT uint32_t fulfillmentsCount;
} PlayFabClientValidateWindowsReceiptResult;

typedef struct PlayFabClientWriteClientCharacterEventRequest
{
    PlayFabJsonObject body;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* eventName;
    PF_OPTIONAL time_t* timestamp;
} PlayFabClientWriteClientCharacterEventRequest;

typedef struct PlayFabClientWriteClientPlayerEventRequest
{
    PlayFabJsonObject body;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* eventName;
    PF_OPTIONAL time_t* timestamp;
} PlayFabClientWriteClientPlayerEventRequest;

typedef struct PlayFabClientWriteEventResponse
{
    const char* eventId;
} PlayFabClientWriteEventResponse;

typedef struct PlayFabClientWriteTitleEventRequest
{
    PlayFabJsonObject body;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* eventName;
    PF_OPTIONAL time_t* timestamp;
} PlayFabClientWriteTitleEventRequest;


// Client dictionary entry structs
typedef struct PlayFabClientUserDataRecordDictionaryEntry
{
    const char* key;
    PlayFabClientUserDataRecord* value;
} PlayFabClientUserDataRecordDictionaryEntry;

typedef struct PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry
{
    const char* key;
    PlayFabClientVirtualCurrencyRechargeTime* value;
} PlayFabClientVirtualCurrencyRechargeTimeDictionaryEntry;

typedef struct PlayFabClientSharedGroupDataRecordDictionaryEntry
{
    const char* key;
    PlayFabClientSharedGroupDataRecord* value;
} PlayFabClientSharedGroupDataRecordDictionaryEntry;


#pragma pop_macro("IN")

}
