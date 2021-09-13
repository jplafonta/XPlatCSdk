// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// Region enum.
/// </summary>
enum class PFRegion : uint32_t
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
/// EmailVerificationStatus enum.
/// </summary>
enum class PFEmailVerificationStatus : uint32_t
{
    Unverified,
    Pending,
    Confirmed
};

/// <summary>
/// LoginIdentityProvider enum.
/// </summary>
enum class PFLoginIdentityProvider : uint32_t
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

/// <summary>
/// ContinentCode enum.
/// </summary>
enum class PFContinentCode : uint32_t
{
    AF,
    AN,
    AS,
    EU,
    NA,
    OC,
    SA
};

/// <summary>
/// CountryCode enum.
/// </summary>
enum class PFCountryCode : uint32_t
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

/// <summary>
/// PushNotificationPlatform enum.
/// </summary>
enum class PFPushNotificationPlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

/// <summary>
/// UserDataPermission enum.
/// </summary>
enum class PFUserDataPermission : uint32_t
{
    Private,
    Public
};

/// <summary>
/// SubscriptionProviderStatus enum.
/// </summary>
enum class PFSubscriptionProviderStatus : uint32_t
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

/// <summary>
/// TitleActivationStatus enum.
/// </summary>
enum class PFTitleActivationStatus : uint32_t
{
    None,
    ActivatedTitleKey,
    PendingSteam,
    ActivatedSteam,
    RevokedSteam
};

/// <summary>
/// Currency enum.
/// </summary>
enum class PFCurrency : uint32_t
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

/// <summary>
/// UserOrigination enum.
/// </summary>
enum class PFUserOrigination : uint32_t
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
    ServerCustomId,
    NintendoSwitchDeviceId,
    FacebookInstantGamesId,
    OpenIdConnect,
    Apple,
    NintendoSwitchAccount
};

/// <summary>
/// ResultTableNodeType enum.
/// </summary>
enum class PFResultTableNodeType : uint32_t
{
    ItemId,
    TableId
};

/// <summary>
/// OperationTypes enum.
/// </summary>
enum class PFOperationTypes : uint32_t
{
    Created,
    Updated,
    Deleted,
    None
};

/// <summary>
/// ProtocolType enum.
/// </summary>
enum class PFProtocolType : uint32_t
{
    TCP,
    UDP
};

/// <summary>
/// EffectType enum.
/// </summary>
enum class PFEffectType : uint32_t
{
    Allow,
    Deny
};

/// <summary>
/// String representation of a Json Object
/// </summary>
typedef struct PFJsonObject
{
    const char* stringValue;
} PFJsonObject;

/// <summary>
/// PFItemInstance data model. A unique instance of an item in a user's inventory. Note, to retrieve
/// additional information for an item such as Tags, Description that are the same across all instances
/// of the item, a call to GetCatalogItems is required. The ItemID of can be matched to a catalog entry,
/// which contains the additional information. Also note that Custom Data is only set when the User's
/// specific instance has updated the CustomData via a call to UpdateUserInventoryItemCustomData. Other
/// fields such as UnitPrice and UnitCurrency are only set when the item was granted via a purchase.
/// </summary>
typedef struct PFItemInstance
{
    /// <summary>
    /// (Optional) Game specific comment associated with this instance when it was added to the user
    /// inventory.
    /// </summary>
    const char* annotation;

    /// <summary>
    /// (Optional) Array of unique items that were awarded when this catalog item was purchased.
    /// </summary>
    const char* const* bundleContents;

    /// <summary>
    /// Count of bundleContents
    /// </summary>
    uint32_t bundleContentsCount;

    /// <summary>
    /// (Optional) Unique identifier for the parent inventory item, as defined in the catalog, for object
    /// which were added from a bundle or container.
    /// </summary>
    const char* bundleParent;

    /// <summary>
    /// (Optional) Catalog version for the inventory item, when this instance was created.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) A set of custom key-value pairs on the instance of the inventory item, which is not
    /// to be confused with the catalog item's custom data.
    /// </summary>
    struct PFStringDictionaryEntry const* customData;

    /// <summary>
    /// Count of customData
    /// </summary>
    uint32_t customDataCount;

    /// <summary>
    /// (Optional) CatalogItem.DisplayName at the time this item was purchased.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) Timestamp for when this instance will expire.
    /// </summary>
    time_t const* expiration;

    /// <summary>
    /// (Optional) Class name for the inventory item, as defined in the catalog.
    /// </summary>
    const char* itemClass;

    /// <summary>
    /// (Optional) Unique identifier for the inventory item, as defined in the catalog.
    /// </summary>
    const char* itemId;

    /// <summary>
    /// (Optional) Unique item identifier for this specific instance of the item.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// (Optional) Timestamp for when this instance was purchased.
    /// </summary>
    time_t const* purchaseDate;

    /// <summary>
    /// (Optional) Total number of remaining uses, if this is a consumable item.
    /// </summary>
    int32_t const* remainingUses;

    /// <summary>
    /// (Optional) Currency type for the cost of the catalog item. Not available when granting items.
    /// </summary>
    const char* unitCurrency;

    /// <summary>
    /// Cost of the catalog item in the given currency. Not available when granting items.
    /// </summary>
    uint32_t unitPrice;

    /// <summary>
    /// (Optional) The number of uses that were added or removed to this item in this call.
    /// </summary>
    int32_t const* usesIncrementedBy;

} PFItemInstance;

/// <summary>
/// PFScriptExecutionError data model.
/// </summary>
typedef struct PFScriptExecutionError
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

} PFScriptExecutionError;

/// <summary>
/// PFLogStatement data model.
/// </summary>
typedef struct PFLogStatement
{
    /// <summary>
    /// (Optional) Optional object accompanying the message as contextual information.
    /// </summary>
    PFJsonObject data;

    /// <summary>
    /// (Optional) 'Debug', 'Info', or 'Error'.
    /// </summary>
    const char* level;

    /// <summary>
    /// (Optional) Message property.
    /// </summary>
    const char* message;

} PFLogStatement;

/// <summary>
/// PFExecuteCloudScriptResult data model.
/// </summary>
typedef struct PFExecuteCloudScriptResult
{
    /// <summary>
    /// Number of PlayFab API requests issued by the CloudScript function.
    /// </summary>
    int32_t aPIRequestsIssued;

    /// <summary>
    /// (Optional) Information about the error, if any, that occurred during execution.
    /// </summary>
    PFScriptExecutionError const* error;

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
    PFJsonObject functionResult;

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
    PFLogStatement const* const* logs;

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

} PFExecuteCloudScriptResult;

/// <summary>
/// PFNameIdentifier data model. Identifier by either name or ID. Note that a name may change due to
/// renaming, or reused after being deleted. ID is immutable and unique.
/// </summary>
typedef struct PFNameIdentifier
{
    /// <summary>
    /// (Optional) Id Identifier, if present.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Name Identifier, if present.
    /// </summary>
    const char* name;

} PFNameIdentifier;

/// <summary>
/// PFUserDataRecord data model.
/// </summary>
typedef struct PFUserDataRecord
{
    /// <summary>
    /// Timestamp for when this data was last updated.
    /// </summary>
    time_t lastUpdated;

    /// <summary>
    /// (Optional) Indicates whether this data can be read by all users (public) or only the user (private).
    /// This is used for GetUserData requests being made by one player about another player.
    /// </summary>
    PFUserDataPermission const* permission;

    /// <summary>
    /// (Optional) Data stored for the specified user data key.
    /// </summary>
    const char* value;

} PFUserDataRecord;

/// <summary>
/// PFPlayerProfileViewConstraints data model.
/// </summary>
typedef struct PFPlayerProfileViewConstraints
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

} PFPlayerProfileViewConstraints;

/// <summary>
/// PFAdCampaignAttributionModel data model.
/// </summary>
typedef struct PFAdCampaignAttributionModel
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

} PFAdCampaignAttributionModel;

/// <summary>
/// PFContactEmailInfoModel data model.
/// </summary>
typedef struct PFContactEmailInfoModel
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

} PFContactEmailInfoModel;

/// <summary>
/// PFLinkedPlatformAccountModel data model.
/// </summary>
typedef struct PFLinkedPlatformAccountModel
{
    /// <summary>
    /// (Optional) Linked account email of the user on the platform, if available.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Authentication platform.
    /// </summary>
    PFLoginIdentityProvider const* platform;

    /// <summary>
    /// (Optional) Unique account identifier of the user on the platform.
    /// </summary>
    const char* platformUserId;

    /// <summary>
    /// (Optional) Linked account username of the user on the platform, if available.
    /// </summary>
    const char* username;

} PFLinkedPlatformAccountModel;

/// <summary>
/// PFLocationModel data model.
/// </summary>
typedef struct PFLocationModel
{
    /// <summary>
    /// (Optional) City name.
    /// </summary>
    const char* city;

    /// <summary>
    /// (Optional) The two-character continent code for this location.
    /// </summary>
    PFContinentCode const* continentCode;

    /// <summary>
    /// (Optional) The two-character ISO 3166-1 country code for the country associated with the location.
    /// </summary>
    PFCountryCode const* countryCode;

    /// <summary>
    /// (Optional) Latitude coordinate of the geographic location.
    /// </summary>
    double const* latitude;

    /// <summary>
    /// (Optional) Longitude coordinate of the geographic location.
    /// </summary>
    double const* longitude;

} PFLocationModel;

/// <summary>
/// PFSubscriptionModel data model.
/// </summary>
typedef struct PFSubscriptionModel
{
    /// <summary>
    /// When this subscription expires.
    /// </summary>
    time_t expiration;

    /// <summary>
    /// The time the subscription was orignially purchased.
    /// </summary>
    time_t initialSubscriptionTime;

    /// <summary>
    /// Whether this subscription is currently active. That is, if Expiration > now.
    /// </summary>
    bool isActive;

    /// <summary>
    /// (Optional) The status of this subscription, according to the subscription provider.
    /// </summary>
    PFSubscriptionProviderStatus const* status;

    /// <summary>
    /// (Optional) The id for this subscription.
    /// </summary>
    const char* subscriptionId;

    /// <summary>
    /// (Optional) The item id for this subscription from the primary catalog.
    /// </summary>
    const char* subscriptionItemId;

    /// <summary>
    /// (Optional) The provider for this subscription. Apple or Google Play are supported today.
    /// </summary>
    const char* subscriptionProvider;

} PFSubscriptionModel;

/// <summary>
/// PFMembershipModel data model.
/// </summary>
typedef struct PFMembershipModel
{
    /// <summary>
    /// Whether this membership is active. That is, whether the MembershipExpiration time has been reached.
    /// </summary>
    bool isActive;

    /// <summary>
    /// The time this membership expires.
    /// </summary>
    time_t membershipExpiration;

    /// <summary>
    /// (Optional) The id of the membership.
    /// </summary>
    const char* membershipId;

    /// <summary>
    /// (Optional) Membership expirations can be explicitly overridden (via game manager or the admin
    /// api). If this membership has been overridden, this will be the new expiration time.
    /// </summary>
    time_t const* overrideExpiration;

    /// <summary>
    /// (Optional) The list of subscriptions that this player has for this membership.
    /// </summary>
    PFSubscriptionModel const* const* subscriptions;

    /// <summary>
    /// Count of subscriptions
    /// </summary>
    uint32_t subscriptionsCount;

} PFMembershipModel;

/// <summary>
/// PFPushNotificationRegistrationModel data model.
/// </summary>
typedef struct PFPushNotificationRegistrationModel
{
    /// <summary>
    /// (Optional) Notification configured endpoint.
    /// </summary>
    const char* notificationEndpointARN;

    /// <summary>
    /// (Optional) Push notification platform.
    /// </summary>
    PFPushNotificationPlatform const* platform;

} PFPushNotificationRegistrationModel;

/// <summary>
/// PFStatisticModel data model.
/// </summary>
typedef struct PFStatisticModel
{
    /// <summary>
    /// (Optional) Statistic name.
    /// </summary>
    const char* name;

    /// <summary>
    /// Statistic value.
    /// </summary>
    int32_t value;

    /// <summary>
    /// Statistic version (0 if not a versioned statistic).
    /// </summary>
    int32_t version;

} PFStatisticModel;

/// <summary>
/// PFTagModel data model.
/// </summary>
typedef struct PFTagModel
{
    /// <summary>
    /// (Optional) Full value of the tag, including namespace.
    /// </summary>
    const char* tagValue;

} PFTagModel;

/// <summary>
/// PFValueToDateModel data model.
/// </summary>
typedef struct PFValueToDateModel
{
    /// <summary>
    /// (Optional) ISO 4217 code of the currency used in the purchases.
    /// </summary>
    const char* currency;

    /// <summary>
    /// Total value of the purchases in a whole number of 1/100 monetary units. For example, 999 indicates
    /// nine dollars and ninety-nine cents when Currency is 'USD').
    /// </summary>
    uint32_t totalValue;

    /// <summary>
    /// (Optional) Total value of the purchases in a string representation of decimal monetary units.
    /// For example, '9.99' indicates nine dollars and ninety-nine cents when Currency is 'USD'.
    /// </summary>
    const char* totalValueAsDecimal;

} PFValueToDateModel;

/// <summary>
/// PFPlayerProfileModel data model.
/// </summary>
typedef struct PFPlayerProfileModel
{
    /// <summary>
    /// (Optional) List of advertising campaigns the player has been attributed to.
    /// </summary>
    PFAdCampaignAttributionModel const* const* adCampaignAttributions;

    /// <summary>
    /// Count of adCampaignAttributions
    /// </summary>
    uint32_t adCampaignAttributionsCount;

    /// <summary>
    /// (Optional) URL of the player's avatar image.
    /// </summary>
    const char* avatarUrl;

    /// <summary>
    /// (Optional) If the player is currently banned, the UTC Date when the ban expires.
    /// </summary>
    time_t const* bannedUntil;

    /// <summary>
    /// (Optional) List of all contact email info associated with the player account.
    /// </summary>
    PFContactEmailInfoModel const* const* contactEmailAddresses;

    /// <summary>
    /// Count of contactEmailAddresses
    /// </summary>
    uint32_t contactEmailAddressesCount;

    /// <summary>
    /// (Optional) Player record created.
    /// </summary>
    time_t const* created;

    /// <summary>
    /// (Optional) Player display name.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) List of experiment variants for the player. Note that these variants are not guaranteed
    /// to be up-to-date when returned during login because the player profile is updated only after login.
    /// Instead, use the LoginResult.TreatmentAssignment property during login to get the correct variants
    /// and variables.
    /// </summary>
    const char* const* experimentVariants;

    /// <summary>
    /// Count of experimentVariants
    /// </summary>
    uint32_t experimentVariantsCount;

    /// <summary>
    /// (Optional) UTC time when the player most recently logged in to the title.
    /// </summary>
    time_t const* lastLogin;

    /// <summary>
    /// (Optional) List of all authentication systems linked to this player account.
    /// </summary>
    PFLinkedPlatformAccountModel const* const* linkedAccounts;

    /// <summary>
    /// Count of linkedAccounts
    /// </summary>
    uint32_t linkedAccountsCount;

    /// <summary>
    /// (Optional) List of geographic locations from which the player has logged in to the title.
    /// </summary>
    PFLocationModel const* const* locations;

    /// <summary>
    /// Count of locations
    /// </summary>
    uint32_t locationsCount;

    /// <summary>
    /// (Optional) List of memberships for the player, along with whether are expired.
    /// </summary>
    PFMembershipModel const* const* memberships;

    /// <summary>
    /// Count of memberships
    /// </summary>
    uint32_t membershipsCount;

    /// <summary>
    /// (Optional) Player account origination.
    /// </summary>
    PFLoginIdentityProvider const* origination;

    /// <summary>
    /// (Optional) PlayFab player account unique identifier.
    /// </summary>
    const char* playerId;

    /// <summary>
    /// (Optional) Publisher this player belongs to.
    /// </summary>
    const char* publisherId;

    /// <summary>
    /// (Optional) List of configured end points registered for sending the player push notifications.
    /// </summary>
    PFPushNotificationRegistrationModel const* const* pushNotificationRegistrations;

    /// <summary>
    /// Count of pushNotificationRegistrations
    /// </summary>
    uint32_t pushNotificationRegistrationsCount;

    /// <summary>
    /// (Optional) List of leaderboard statistic values for the player.
    /// </summary>
    PFStatisticModel const* const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

    /// <summary>
    /// (Optional) List of player's tags for segmentation.
    /// </summary>
    PFTagModel const* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

    /// <summary>
    /// (Optional) Title ID this player profile applies to.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) Sum of the player's purchases made with real-money currencies, converted to US dollars
    /// equivalent and represented as a whole number of cents (1/100 USD). For example, 999 indicates
    /// nine dollars and ninety-nine cents.
    /// </summary>
    uint32_t const* totalValueToDateInUSD;

    /// <summary>
    /// (Optional) List of the player's lifetime purchase totals, summed by real-money currency.
    /// </summary>
    PFValueToDateModel const* const* valuesToDate;

    /// <summary>
    /// Count of valuesToDate
    /// </summary>
    uint32_t valuesToDateCount;

} PFPlayerProfileModel;

/// <summary>
/// PFUserFacebookInfo data model.
/// </summary>
typedef struct PFUserFacebookInfo
{
    /// <summary>
    /// (Optional) Facebook identifier.
    /// </summary>
    const char* facebookId;

    /// <summary>
    /// (Optional) Facebook full name.
    /// </summary>
    const char* fullName;

} PFUserFacebookInfo;

/// <summary>
/// PFUserGameCenterInfo data model.
/// </summary>
typedef struct PFUserGameCenterInfo
{
    /// <summary>
    /// (Optional) Gamecenter identifier.
    /// </summary>
    const char* gameCenterId;

} PFUserGameCenterInfo;

/// <summary>
/// PFUserPsnInfo data model.
/// </summary>
typedef struct PFUserPsnInfo
{
    /// <summary>
    /// (Optional) PSN account ID.
    /// </summary>
    const char* psnAccountId;

    /// <summary>
    /// (Optional) PSN online ID.
    /// </summary>
    const char* psnOnlineId;

} PFUserPsnInfo;

/// <summary>
/// PFUserSteamInfo data model.
/// </summary>
typedef struct PFUserSteamInfo
{
    /// <summary>
    /// (Optional) What stage of game ownership the user is listed as being in, from Steam.
    /// </summary>
    PFTitleActivationStatus const* steamActivationStatus;

    /// <summary>
    /// (Optional) The country in which the player resides, from Steam data.
    /// </summary>
    const char* steamCountry;

    /// <summary>
    /// (Optional) Currency type set in the user Steam account.
    /// </summary>
    PFCurrency const* steamCurrency;

    /// <summary>
    /// (Optional) Steam identifier.
    /// </summary>
    const char* steamId;

    /// <summary>
    /// (Optional) Steam display name.
    /// </summary>
    const char* steamName;

} PFUserSteamInfo;

/// <summary>
/// PFUserXboxInfo data model.
/// </summary>
typedef struct PFUserXboxInfo
{
    /// <summary>
    /// (Optional) XBox user ID.
    /// </summary>
    const char* xboxUserId;

} PFUserXboxInfo;

/// <summary>
/// PFCharacterResult data model.
/// </summary>
typedef struct PFCharacterResult
{
    /// <summary>
    /// (Optional) The id for this character on this player.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) The name of this character.
    /// </summary>
    const char* characterName;

    /// <summary>
    /// (Optional) The type-string that was given to this character on creation.
    /// </summary>
    const char* characterType;

} PFCharacterResult;

/// <summary>
/// PFVirtualCurrencyRechargeTime data model.
/// </summary>
typedef struct PFVirtualCurrencyRechargeTime
{
    /// <summary>
    /// Maximum value to which the regenerating currency will automatically increment. Note that it can
    /// exceed this value through use of the AddUserVirtualCurrency API call. However, it will not regenerate
    /// automatically until it has fallen below this value.
    /// </summary>
    int32_t rechargeMax;

    /// <summary>
    /// Server timestamp in UTC indicating the next time the virtual currency will be incremented.
    /// </summary>
    time_t rechargeTime;

    /// <summary>
    /// Time remaining (in seconds) before the next recharge increment of the virtual currency.
    /// </summary>
    int32_t secondsToRecharge;

} PFVirtualCurrencyRechargeTime;

/// <summary>
/// PFStatisticValue data model.
/// </summary>
typedef struct PFStatisticValue
{
    /// <summary>
    /// (Optional) Unique name of the statistic.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// Statistic value for the player.
    /// </summary>
    int32_t value;

    /// <summary>
    /// For updates to an existing statistic value for a player, the version of the statistic when it
    /// was loaded.
    /// </summary>
    uint32_t version;

} PFStatisticValue;

/// <summary>
/// PFGetPlayerCombinedInfoRequestParams data model.
/// </summary>
typedef struct PFGetPlayerCombinedInfoRequestParams
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
    PFPlayerProfileViewConstraints const* profileConstraints;

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

} PFGetPlayerCombinedInfoRequestParams;

/// <summary>
/// PFEntityKey data model. Combined entity type and ID structure which uniquely identifies a single
/// entity.
/// </summary>
typedef struct PFEntityKey
{
    /// <summary>
    /// Unique ID of the entity.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Entity type. See https://docs.microsoft.com/gaming/playfab/features/data/entities/available-built-in-entity-types.
    /// </summary>
    const char* type;

} PFEntityKey;

/// <summary>
/// PFUserAndroidDeviceInfo data model.
/// </summary>
typedef struct PFUserAndroidDeviceInfo
{
    /// <summary>
    /// (Optional) Android device ID.
    /// </summary>
    const char* androidDeviceId;

} PFUserAndroidDeviceInfo;

/// <summary>
/// PFUserAppleIdInfo data model.
/// </summary>
typedef struct PFUserAppleIdInfo
{
    /// <summary>
    /// (Optional) Apple subject ID.
    /// </summary>
    const char* appleSubjectId;

} PFUserAppleIdInfo;

/// <summary>
/// PFUserCustomIdInfo data model.
/// </summary>
typedef struct PFUserCustomIdInfo
{
    /// <summary>
    /// (Optional) Custom ID.
    /// </summary>
    const char* customId;

} PFUserCustomIdInfo;

/// <summary>
/// PFUserFacebookInstantGamesIdInfo data model.
/// </summary>
typedef struct PFUserFacebookInstantGamesIdInfo
{
    /// <summary>
    /// (Optional) Facebook Instant Games ID.
    /// </summary>
    const char* facebookInstantGamesId;

} PFUserFacebookInstantGamesIdInfo;

/// <summary>
/// PFUserGoogleInfo data model.
/// </summary>
typedef struct PFUserGoogleInfo
{
    /// <summary>
    /// (Optional) Email address of the Google account.
    /// </summary>
    const char* googleEmail;

    /// <summary>
    /// (Optional) Gender information of the Google account.
    /// </summary>
    const char* googleGender;

    /// <summary>
    /// (Optional) Google ID.
    /// </summary>
    const char* googleId;

    /// <summary>
    /// (Optional) Locale of the Google account.
    /// </summary>
    const char* googleLocale;

    /// <summary>
    /// (Optional) Name of the Google account user.
    /// </summary>
    const char* googleName;

} PFUserGoogleInfo;

/// <summary>
/// PFUserIosDeviceInfo data model.
/// </summary>
typedef struct PFUserIosDeviceInfo
{
    /// <summary>
    /// (Optional) IOS device ID.
    /// </summary>
    const char* iosDeviceId;

} PFUserIosDeviceInfo;

/// <summary>
/// PFUserKongregateInfo data model.
/// </summary>
typedef struct PFUserKongregateInfo
{
    /// <summary>
    /// (Optional) Kongregate ID.
    /// </summary>
    const char* kongregateId;

    /// <summary>
    /// (Optional) Kongregate Username.
    /// </summary>
    const char* kongregateName;

} PFUserKongregateInfo;

/// <summary>
/// PFUserNintendoSwitchAccountIdInfo data model.
/// </summary>
typedef struct PFUserNintendoSwitchAccountIdInfo
{
    /// <summary>
    /// (Optional) Nintendo Switch account subject ID.
    /// </summary>
    const char* nintendoSwitchAccountSubjectId;

} PFUserNintendoSwitchAccountIdInfo;

/// <summary>
/// PFUserNintendoSwitchDeviceIdInfo data model.
/// </summary>
typedef struct PFUserNintendoSwitchDeviceIdInfo
{
    /// <summary>
    /// (Optional) Nintendo Switch Device ID.
    /// </summary>
    const char* nintendoSwitchDeviceId;

} PFUserNintendoSwitchDeviceIdInfo;

/// <summary>
/// PFUserOpenIdInfo data model.
/// </summary>
typedef struct PFUserOpenIdInfo
{
    /// <summary>
    /// (Optional) OpenID Connection ID.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) OpenID Issuer.
    /// </summary>
    const char* issuer;

    /// <summary>
    /// (Optional) OpenID Subject.
    /// </summary>
    const char* subject;

} PFUserOpenIdInfo;

/// <summary>
/// PFUserPrivateAccountInfo data model.
/// </summary>
typedef struct PFUserPrivateAccountInfo
{
    /// <summary>
    /// (Optional) User email address.
    /// </summary>
    const char* email;

} PFUserPrivateAccountInfo;

/// <summary>
/// PFUserTitleInfo data model.
/// </summary>
typedef struct PFUserTitleInfo
{
    /// <summary>
    /// (Optional) URL to the player's avatar.
    /// </summary>
    const char* avatarUrl;

    /// <summary>
    /// Timestamp indicating when the user was first associated with this game (this can differ significantly
    /// from when the user first registered with PlayFab).
    /// </summary>
    time_t created;

    /// <summary>
    /// (Optional) Name of the user, as it is displayed in-game.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) Timestamp indicating when the user first signed into this game (this can differ from
    /// the Created timestamp, as other events, such as issuing a beta key to the user, can associate
    /// the title to the user).
    /// </summary>
    time_t const* firstLogin;

    /// <summary>
    /// (Optional) Boolean indicating whether or not the user is currently banned for a title.
    /// </summary>
    bool const* isBanned;

    /// <summary>
    /// (Optional) Timestamp for the last user login for this title.
    /// </summary>
    time_t const* lastLogin;

    /// <summary>
    /// (Optional) Source by which the user first joined the game, if known.
    /// </summary>
    PFUserOrigination const* origination;

    /// <summary>
    /// (Optional) Title player account entity for this user.
    /// </summary>
    PFEntityKey const* titlePlayerAccount;

} PFUserTitleInfo;

/// <summary>
/// PFUserTwitchInfo data model.
/// </summary>
typedef struct PFUserTwitchInfo
{
    /// <summary>
    /// (Optional) Twitch ID.
    /// </summary>
    const char* twitchId;

    /// <summary>
    /// (Optional) Twitch Username.
    /// </summary>
    const char* twitchUserName;

} PFUserTwitchInfo;

/// <summary>
/// PFUserAccountInfo data model.
/// </summary>
typedef struct PFUserAccountInfo
{
    /// <summary>
    /// (Optional) User Android device information, if an Android device has been linked.
    /// </summary>
    PFUserAndroidDeviceInfo const* androidDeviceInfo;

    /// <summary>
    /// (Optional) Sign in with Apple account information, if an Apple account has been linked.
    /// </summary>
    PFUserAppleIdInfo const* appleAccountInfo;

    /// <summary>
    /// Timestamp indicating when the user account was created.
    /// </summary>
    time_t created;

    /// <summary>
    /// (Optional) Custom ID information, if a custom ID has been assigned.
    /// </summary>
    PFUserCustomIdInfo const* customIdInfo;

    /// <summary>
    /// (Optional) User Facebook information, if a Facebook account has been linked.
    /// </summary>
    PFUserFacebookInfo const* facebookInfo;

    /// <summary>
    /// (Optional) Facebook Instant Games account information, if a Facebook Instant Games account has
    /// been linked.
    /// </summary>
    PFUserFacebookInstantGamesIdInfo const* facebookInstantGamesIdInfo;

    /// <summary>
    /// (Optional) User Gamecenter information, if a Gamecenter account has been linked.
    /// </summary>
    PFUserGameCenterInfo const* gameCenterInfo;

    /// <summary>
    /// (Optional) User Google account information, if a Google account has been linked.
    /// </summary>
    PFUserGoogleInfo const* googleInfo;

    /// <summary>
    /// (Optional) User iOS device information, if an iOS device has been linked.
    /// </summary>
    PFUserIosDeviceInfo const* iosDeviceInfo;

    /// <summary>
    /// (Optional) User Kongregate account information, if a Kongregate account has been linked.
    /// </summary>
    PFUserKongregateInfo const* kongregateInfo;

    /// <summary>
    /// (Optional) Nintendo Switch account information, if a Nintendo Switch account has been linked.
    /// </summary>
    PFUserNintendoSwitchAccountIdInfo const* nintendoSwitchAccountInfo;

    /// <summary>
    /// (Optional) Nintendo Switch device information, if a Nintendo Switch device has been linked.
    /// </summary>
    PFUserNintendoSwitchDeviceIdInfo const* nintendoSwitchDeviceIdInfo;

    /// <summary>
    /// (Optional) OpenID Connect information, if any OpenID Connect accounts have been linked.
    /// </summary>
    PFUserOpenIdInfo const* const* openIdInfo;

    /// <summary>
    /// Count of openIdInfo
    /// </summary>
    uint32_t openIdInfoCount;

    /// <summary>
    /// (Optional) Unique identifier for the user account.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Personal information for the user which is considered more sensitive.
    /// </summary>
    PFUserPrivateAccountInfo const* privateInfo;

    /// <summary>
    /// (Optional) User PSN account information, if a PSN account has been linked.
    /// </summary>
    PFUserPsnInfo const* psnInfo;

    /// <summary>
    /// (Optional) User Steam information, if a Steam account has been linked.
    /// </summary>
    PFUserSteamInfo const* steamInfo;

    /// <summary>
    /// (Optional) Title-specific information for the user account.
    /// </summary>
    PFUserTitleInfo const* titleInfo;

    /// <summary>
    /// (Optional) User Twitch account information, if a Twitch account has been linked.
    /// </summary>
    PFUserTwitchInfo const* twitchInfo;

    /// <summary>
    /// (Optional) User account name in the PlayFab service.
    /// </summary>
    const char* username;

    /// <summary>
    /// (Optional) User XBox account information, if a XBox account has been linked.
    /// </summary>
    PFUserXboxInfo const* xboxInfo;

} PFUserAccountInfo;

/// <summary>
/// PFCharacterInventory data model.
/// </summary>
typedef struct PFCharacterInventory
{
    /// <summary>
    /// (Optional) The id of this character.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) The inventory of this character.
    /// </summary>
    PFItemInstance const* const* inventory;

    /// <summary>
    /// Count of inventory
    /// </summary>
    uint32_t inventoryCount;

} PFCharacterInventory;

/// <summary>
/// PFGetPlayerCombinedInfoResultPayload data model.
/// </summary>
typedef struct PFGetPlayerCombinedInfoResultPayload
{
    /// <summary>
    /// (Optional) Account information for the user. This is always retrieved.
    /// </summary>
    PFUserAccountInfo const* accountInfo;

    /// <summary>
    /// (Optional) Inventories for each character for the user.
    /// </summary>
    PFCharacterInventory const* const* characterInventories;

    /// <summary>
    /// Count of characterInventories
    /// </summary>
    uint32_t characterInventoriesCount;

    /// <summary>
    /// (Optional) List of characters for the user.
    /// </summary>
    PFCharacterResult const* const* characterList;

    /// <summary>
    /// Count of characterList
    /// </summary>
    uint32_t characterListCount;

    /// <summary>
    /// (Optional) The profile of the players. This profile is not guaranteed to be up-to-date. For a
    /// new player, this profile will not exist.
    /// </summary>
    PFPlayerProfileModel const* playerProfile;

    /// <summary>
    /// (Optional) List of statistics for this player.
    /// </summary>
    PFStatisticValue const* const* playerStatistics;

    /// <summary>
    /// Count of playerStatistics
    /// </summary>
    uint32_t playerStatisticsCount;

    /// <summary>
    /// (Optional) Title data for this title.
    /// </summary>
    struct PFStringDictionaryEntry const* titleData;

    /// <summary>
    /// Count of titleData
    /// </summary>
    uint32_t titleDataCount;

    /// <summary>
    /// (Optional) User specific custom data.
    /// </summary>
    struct PFUserDataRecordDictionaryEntry const* userData;

    /// <summary>
    /// Count of userData
    /// </summary>
    uint32_t userDataCount;

    /// <summary>
    /// The version of the UserData that was returned.
    /// </summary>
    uint32_t userDataVersion;

    /// <summary>
    /// (Optional) Array of inventory items in the user's current inventory.
    /// </summary>
    PFItemInstance const* const* userInventory;

    /// <summary>
    /// Count of userInventory
    /// </summary>
    uint32_t userInventoryCount;

    /// <summary>
    /// (Optional) User specific read-only data.
    /// </summary>
    struct PFUserDataRecordDictionaryEntry const* userReadOnlyData;

    /// <summary>
    /// Count of userReadOnlyData
    /// </summary>
    uint32_t userReadOnlyDataCount;

    /// <summary>
    /// The version of the Read-Only UserData that was returned.
    /// </summary>
    uint32_t userReadOnlyDataVersion;

    /// <summary>
    /// (Optional) Dictionary of virtual currency balance(s) belonging to the user.
    /// </summary>
    struct PFInt32DictionaryEntry const* userVirtualCurrency;

    /// <summary>
    /// Count of userVirtualCurrency
    /// </summary>
    uint32_t userVirtualCurrencyCount;

    /// <summary>
    /// (Optional) Dictionary of remaining times and timestamps for virtual currencies.
    /// </summary>
    struct PFVirtualCurrencyRechargeTimeDictionaryEntry const* userVirtualCurrencyRechargeTimes;

    /// <summary>
    /// Count of userVirtualCurrencyRechargeTimes
    /// </summary>
    uint32_t userVirtualCurrencyRechargeTimesCount;

} PFGetPlayerCombinedInfoResultPayload;

/// <summary>
/// PFGetPlayerCombinedInfoRequest data model.
/// </summary>
typedef struct PFGetPlayerCombinedInfoRequest
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
    /// Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// PlayFabId of the user whose data will be returned.
    /// </summary>
    const char* playFabId;

} PFGetPlayerCombinedInfoRequest;

/// <summary>
/// PFGetPlayerCombinedInfoResult data model.
/// </summary>
typedef struct PFGetPlayerCombinedInfoResult
{
    /// <summary>
    /// (Optional) Results for requested info.
    /// </summary>
    PFGetPlayerCombinedInfoResultPayload const* infoResultPayload;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PFGetPlayerCombinedInfoResult;

/// <summary>
/// PFResultTableNode data model.
/// </summary>
typedef struct PFResultTableNode
{
    /// <summary>
    /// Either an ItemId, or the TableId of another random result table.
    /// </summary>
    const char* resultItem;

    /// <summary>
    /// Whether this entry in the table is an item or a link to another table.
    /// </summary>
    PFResultTableNodeType resultItemType;

    /// <summary>
    /// How likely this is to be rolled - larger numbers add more weight.
    /// </summary>
    int32_t weight;

} PFResultTableNode;

/// <summary>
/// PFRandomResultTableListing data model.
/// </summary>
typedef struct PFRandomResultTableListing
{
    /// <summary>
    /// (Optional) Catalog version this table is associated with.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Child nodes that indicate what kind of drop table item this actually is.
    /// </summary>
    PFResultTableNode const* const* nodes;

    /// <summary>
    /// Count of nodes
    /// </summary>
    uint32_t nodesCount;

    /// <summary>
    /// Unique name for this drop table.
    /// </summary>
    const char* tableId;

} PFRandomResultTableListing;

/// <summary>
/// PFGetRandomResultTablesResult data model. Note that if a specified Random Result Table contains no
/// entries, or does not exist in the catalog, an InvalidDropTable error will be returned.
/// </summary>
typedef struct PFGetRandomResultTablesResult
{
    /// <summary>
    /// (Optional) Array of random result tables currently available.
    /// </summary>
    struct PFRandomResultTableListingDictionaryEntry const* tables;

    /// <summary>
    /// Count of tables
    /// </summary>
    uint32_t tablesCount;

} PFGetRandomResultTablesResult;

/// <summary>
/// PFSetPublisherDataRequest data model. This API is designed to store publisher-specific values which
/// can be read, but not written to, by the client. This data is shared across all titles assigned to
/// a particular publisher, and can be used for cross-game coordination. Only titles assigned to a publisher
/// can use this API. This operation is additive. If a Key does not exist in the current dataset, it will
/// be added with the specified Value. If it already exists, the Value for that key will be overwritten
/// with the new Value. For more information email helloplayfab@microsoft.com.
/// </summary>
typedef struct PFSetPublisherDataRequest
{
    /// <summary>
    /// Key we want to set a value on (note, this is additive - will only replace an existing key's value
    /// if they are the same name.) Keys are trimmed of whitespace. Keys may not begin with the '!' character.
    /// </summary>
    const char* key;

    /// <summary>
    /// (Optional) New value to set. Set to null to remove a value.
    /// </summary>
    const char* value;

} PFSetPublisherDataRequest;

/// <summary>
/// PFVariable data model.
/// </summary>
typedef struct PFVariable
{
    /// <summary>
    /// Name of the variable.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Value of the variable.
    /// </summary>
    const char* value;

} PFVariable;

/// <summary>
/// PFTreatmentAssignment data model.
/// </summary>
typedef struct PFTreatmentAssignment
{
    /// <summary>
    /// (Optional) List of the experiment variables.
    /// </summary>
    PFVariable const* const* variables;

    /// <summary>
    /// Count of variables
    /// </summary>
    uint32_t variablesCount;

    /// <summary>
    /// (Optional) List of the experiment variants.
    /// </summary>
    const char* const* variants;

    /// <summary>
    /// Count of variants
    /// </summary>
    uint32_t variantsCount;

} PFTreatmentAssignment;

/// <summary>
/// PFPort data model.
/// </summary>
typedef struct PFPort
{
    /// <summary>
    /// The name for the port.
    /// </summary>
    const char* name;

    /// <summary>
    /// The number for the port.
    /// </summary>
    int32_t num;

    /// <summary>
    /// The protocol for the port.
    /// </summary>
    PFProtocolType protocol;

} PFPort;

/// <summary>
/// PFEntityLineage data model.
/// </summary>
typedef struct PFEntityLineage
{
    /// <summary>
    /// (Optional) The Character Id of the associated entity.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) The Group Id of the associated entity.
    /// </summary>
    const char* groupId;

    /// <summary>
    /// (Optional) The Master Player Account Id of the associated entity.
    /// </summary>
    const char* masterPlayerAccountId;

    /// <summary>
    /// (Optional) The Namespace Id of the associated entity.
    /// </summary>
    const char* namespaceId;

    /// <summary>
    /// (Optional) The Title Id of the associated entity.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) The Title Player Account Id of the associated entity.
    /// </summary>
    const char* titlePlayerAccountId;

} PFEntityLineage;

/// <summary>
/// Dictionary entry for an associative array with string values.
/// </summary>
typedef struct PFStringDictionaryEntry
{
    const char* key;
    const char* value;
} PFStringDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with int32_t values.
/// </summary>
typedef struct PFInt32DictionaryEntry
{
    const char* key;
    int32_t value;
} PFInt32DictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with uint32_t values.
/// </summary>
typedef struct PFUint32DictionaryEntry
{
    const char* key;
    uint32_t value;
} PFUint32DictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with time_t values.
/// </summary>
typedef struct PFDateTimeDictionaryEntry
{
    const char* key;
    time_t value;
} PFDateTimeDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PFUserDataRecord values.
/// </summary>
typedef struct PFUserDataRecordDictionaryEntry
{
    const char* key;
    PFUserDataRecord const* value;
} PFUserDataRecordDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PFVirtualCurrencyRechargeTime values.
/// </summary>
typedef struct PFVirtualCurrencyRechargeTimeDictionaryEntry
{
    const char* key;
    PFVirtualCurrencyRechargeTime const* value;
} PFVirtualCurrencyRechargeTimeDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PFRandomResultTableListing values.
/// </summary>
typedef struct PFRandomResultTableListingDictionaryEntry
{
    const char* key;
    PFRandomResultTableListing const* value;
} PFRandomResultTableListingDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PFEntityKey values.
/// </summary>
typedef struct PFEntityKeyDictionaryEntry
{
    const char* key;
    PFEntityKey const* value;
} PFEntityKeyDictionaryEntry;

#pragma pop_macro("IN")

}
