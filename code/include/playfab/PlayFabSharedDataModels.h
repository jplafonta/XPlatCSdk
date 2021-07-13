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
/// TitleActivationStatus enum.
/// </summary>
enum class PlayFabTitleActivationStatus : uint32_t
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
enum class PlayFabCurrency : uint32_t
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
enum class PlayFabUserOrigination : uint32_t
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

/// <summary>
/// EmailVerificationStatus enum.
/// </summary>
enum class PlayFabEmailVerificationStatus : uint32_t
{
    Unverified,
    Pending,
    Confirmed
};

/// <summary>
/// LoginIdentityProvider enum.
/// </summary>
enum class PlayFabLoginIdentityProvider : uint32_t
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
enum class PlayFabContinentCode : uint32_t
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
enum class PlayFabCountryCode : uint32_t
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
/// SubscriptionProviderStatus enum.
/// </summary>
enum class PlayFabSubscriptionProviderStatus : uint32_t
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
/// PushNotificationPlatform enum.
/// </summary>
enum class PlayFabPushNotificationPlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

/// <summary>
/// UserDataPermission enum.
/// </summary>
enum class PlayFabUserDataPermission : uint32_t
{
    Private,
    Public
};

/// <summary>
/// String representation of a Json Object
/// </summary>
typedef struct PlayFabJsonObject
{
    const char* stringValue;
} PlayFabJsonObject;

/// <summary>
/// PlayFabEntityKey data model. Combined entity type and ID structure which uniquely identifies a single
/// entity.
/// </summary>
typedef struct PlayFabEntityKey
{
    /// <summary>
    /// Unique ID of the entity.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Entity type. See https://docs.microsoft.com/gaming/playfab/features/data/entities/available-built-in-entity-types.
    /// </summary>
    const char* type;

} PlayFabEntityKey;

/// <summary>
/// PlayFabEntityTokenResponse data model.
/// </summary>
typedef struct PlayFabEntityTokenResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) The token used to set X-EntityToken for all entity based API calls.
    /// </summary>
    const char* entityToken;

    /// <summary>
    /// (Optional) The time the token will expire, if it is an expiring token, in UTC.
    /// </summary>
    time_t const* tokenExpiration;

} PlayFabEntityTokenResponse;

/// <summary>
/// PlayFabUserAndroidDeviceInfo data model.
/// </summary>
typedef struct PlayFabUserAndroidDeviceInfo
{
    /// <summary>
    /// (Optional) Android device ID.
    /// </summary>
    const char* androidDeviceId;

} PlayFabUserAndroidDeviceInfo;

/// <summary>
/// PlayFabUserAppleIdInfo data model.
/// </summary>
typedef struct PlayFabUserAppleIdInfo
{
    /// <summary>
    /// (Optional) Apple subject ID.
    /// </summary>
    const char* appleSubjectId;

} PlayFabUserAppleIdInfo;

/// <summary>
/// PlayFabUserCustomIdInfo data model.
/// </summary>
typedef struct PlayFabUserCustomIdInfo
{
    /// <summary>
    /// (Optional) Custom ID.
    /// </summary>
    const char* customId;

} PlayFabUserCustomIdInfo;

/// <summary>
/// PlayFabUserFacebookInfo data model.
/// </summary>
typedef struct PlayFabUserFacebookInfo
{
    /// <summary>
    /// (Optional) Facebook identifier.
    /// </summary>
    const char* facebookId;

    /// <summary>
    /// (Optional) Facebook full name.
    /// </summary>
    const char* fullName;

} PlayFabUserFacebookInfo;

/// <summary>
/// PlayFabUserFacebookInstantGamesIdInfo data model.
/// </summary>
typedef struct PlayFabUserFacebookInstantGamesIdInfo
{
    /// <summary>
    /// (Optional) Facebook Instant Games ID.
    /// </summary>
    const char* facebookInstantGamesId;

} PlayFabUserFacebookInstantGamesIdInfo;

/// <summary>
/// PlayFabUserGameCenterInfo data model.
/// </summary>
typedef struct PlayFabUserGameCenterInfo
{
    /// <summary>
    /// (Optional) Gamecenter identifier.
    /// </summary>
    const char* gameCenterId;

} PlayFabUserGameCenterInfo;

/// <summary>
/// PlayFabUserGoogleInfo data model.
/// </summary>
typedef struct PlayFabUserGoogleInfo
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

} PlayFabUserGoogleInfo;

/// <summary>
/// PlayFabUserIosDeviceInfo data model.
/// </summary>
typedef struct PlayFabUserIosDeviceInfo
{
    /// <summary>
    /// (Optional) IOS device ID.
    /// </summary>
    const char* iosDeviceId;

} PlayFabUserIosDeviceInfo;

/// <summary>
/// PlayFabUserKongregateInfo data model.
/// </summary>
typedef struct PlayFabUserKongregateInfo
{
    /// <summary>
    /// (Optional) Kongregate ID.
    /// </summary>
    const char* kongregateId;

    /// <summary>
    /// (Optional) Kongregate Username.
    /// </summary>
    const char* kongregateName;

} PlayFabUserKongregateInfo;

/// <summary>
/// PlayFabUserNintendoSwitchAccountIdInfo data model.
/// </summary>
typedef struct PlayFabUserNintendoSwitchAccountIdInfo
{
    /// <summary>
    /// (Optional) Nintendo Switch account subject ID.
    /// </summary>
    const char* nintendoSwitchAccountSubjectId;

} PlayFabUserNintendoSwitchAccountIdInfo;

/// <summary>
/// PlayFabUserNintendoSwitchDeviceIdInfo data model.
/// </summary>
typedef struct PlayFabUserNintendoSwitchDeviceIdInfo
{
    /// <summary>
    /// (Optional) Nintendo Switch Device ID.
    /// </summary>
    const char* nintendoSwitchDeviceId;

} PlayFabUserNintendoSwitchDeviceIdInfo;

/// <summary>
/// PlayFabUserOpenIdInfo data model.
/// </summary>
typedef struct PlayFabUserOpenIdInfo
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

} PlayFabUserOpenIdInfo;

/// <summary>
/// PlayFabUserPrivateAccountInfo data model.
/// </summary>
typedef struct PlayFabUserPrivateAccountInfo
{
    /// <summary>
    /// (Optional) User email address.
    /// </summary>
    const char* email;

} PlayFabUserPrivateAccountInfo;

/// <summary>
/// PlayFabUserPsnInfo data model.
/// </summary>
typedef struct PlayFabUserPsnInfo
{
    /// <summary>
    /// (Optional) PSN account ID.
    /// </summary>
    const char* psnAccountId;

    /// <summary>
    /// (Optional) PSN online ID.
    /// </summary>
    const char* psnOnlineId;

} PlayFabUserPsnInfo;

/// <summary>
/// PlayFabUserSteamInfo data model.
/// </summary>
typedef struct PlayFabUserSteamInfo
{
    /// <summary>
    /// (Optional) What stage of game ownership the user is listed as being in, from Steam.
    /// </summary>
    PlayFabTitleActivationStatus const* steamActivationStatus;

    /// <summary>
    /// (Optional) The country in which the player resides, from Steam data.
    /// </summary>
    const char* steamCountry;

    /// <summary>
    /// (Optional) Currency type set in the user Steam account.
    /// </summary>
    PlayFabCurrency const* steamCurrency;

    /// <summary>
    /// (Optional) Steam identifier.
    /// </summary>
    const char* steamId;

    /// <summary>
    /// (Optional) Steam display name.
    /// </summary>
    const char* steamName;

} PlayFabUserSteamInfo;

/// <summary>
/// PlayFabUserTitleInfo data model.
/// </summary>
typedef struct PlayFabUserTitleInfo
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
    PlayFabUserOrigination const* origination;

    /// <summary>
    /// (Optional) Title player account entity for this user.
    /// </summary>
    PlayFabEntityKey const* titlePlayerAccount;

} PlayFabUserTitleInfo;

/// <summary>
/// PlayFabUserTwitchInfo data model.
/// </summary>
typedef struct PlayFabUserTwitchInfo
{
    /// <summary>
    /// (Optional) Twitch ID.
    /// </summary>
    const char* twitchId;

    /// <summary>
    /// (Optional) Twitch Username.
    /// </summary>
    const char* twitchUserName;

} PlayFabUserTwitchInfo;

/// <summary>
/// PlayFabUserWindowsHelloInfo data model.
/// </summary>
typedef struct PlayFabUserWindowsHelloInfo
{
    /// <summary>
    /// (Optional) Windows Hello Device Name.
    /// </summary>
    const char* windowsHelloDeviceName;

    /// <summary>
    /// (Optional) Windows Hello Public Key Hash.
    /// </summary>
    const char* windowsHelloPublicKeyHash;

} PlayFabUserWindowsHelloInfo;

/// <summary>
/// PlayFabUserXboxInfo data model.
/// </summary>
typedef struct PlayFabUserXboxInfo
{
    /// <summary>
    /// (Optional) XBox user ID.
    /// </summary>
    const char* xboxUserId;

} PlayFabUserXboxInfo;

/// <summary>
/// PlayFabUserAccountInfo data model.
/// </summary>
typedef struct PlayFabUserAccountInfo
{
    /// <summary>
    /// (Optional) User Android device information, if an Android device has been linked.
    /// </summary>
    PlayFabUserAndroidDeviceInfo const* androidDeviceInfo;

    /// <summary>
    /// (Optional) Sign in with Apple account information, if an Apple account has been linked.
    /// </summary>
    PlayFabUserAppleIdInfo const* appleAccountInfo;

    /// <summary>
    /// Timestamp indicating when the user account was created.
    /// </summary>
    time_t created;

    /// <summary>
    /// (Optional) Custom ID information, if a custom ID has been assigned.
    /// </summary>
    PlayFabUserCustomIdInfo const* customIdInfo;

    /// <summary>
    /// (Optional) User Facebook information, if a Facebook account has been linked.
    /// </summary>
    PlayFabUserFacebookInfo const* facebookInfo;

    /// <summary>
    /// (Optional) Facebook Instant Games account information, if a Facebook Instant Games account has
    /// been linked.
    /// </summary>
    PlayFabUserFacebookInstantGamesIdInfo const* facebookInstantGamesIdInfo;

    /// <summary>
    /// (Optional) User Gamecenter information, if a Gamecenter account has been linked.
    /// </summary>
    PlayFabUserGameCenterInfo const* gameCenterInfo;

    /// <summary>
    /// (Optional) User Google account information, if a Google account has been linked.
    /// </summary>
    PlayFabUserGoogleInfo const* googleInfo;

    /// <summary>
    /// (Optional) User iOS device information, if an iOS device has been linked.
    /// </summary>
    PlayFabUserIosDeviceInfo const* iosDeviceInfo;

    /// <summary>
    /// (Optional) User Kongregate account information, if a Kongregate account has been linked.
    /// </summary>
    PlayFabUserKongregateInfo const* kongregateInfo;

    /// <summary>
    /// (Optional) Nintendo Switch account information, if a Nintendo Switch account has been linked.
    /// </summary>
    PlayFabUserNintendoSwitchAccountIdInfo const* nintendoSwitchAccountInfo;

    /// <summary>
    /// (Optional) Nintendo Switch device information, if a Nintendo Switch device has been linked.
    /// </summary>
    PlayFabUserNintendoSwitchDeviceIdInfo const* nintendoSwitchDeviceIdInfo;

    /// <summary>
    /// (Optional) OpenID Connect information, if any OpenID Connect accounts have been linked.
    /// </summary>
    PlayFabUserOpenIdInfo const* const* openIdInfo;

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
    PlayFabUserPrivateAccountInfo const* privateInfo;

    /// <summary>
    /// (Optional) User PSN account information, if a PSN account has been linked.
    /// </summary>
    PlayFabUserPsnInfo const* psnInfo;

    /// <summary>
    /// (Optional) User Steam information, if a Steam account has been linked.
    /// </summary>
    PlayFabUserSteamInfo const* steamInfo;

    /// <summary>
    /// (Optional) Title-specific information for the user account.
    /// </summary>
    PlayFabUserTitleInfo const* titleInfo;

    /// <summary>
    /// (Optional) User Twitch account information, if a Twitch account has been linked.
    /// </summary>
    PlayFabUserTwitchInfo const* twitchInfo;

    /// <summary>
    /// (Optional) User account name in the PlayFab service.
    /// </summary>
    const char* username;

    /// <summary>
    /// (Optional) Windows Hello account information, if a Windows Hello account has been linked.
    /// </summary>
    PlayFabUserWindowsHelloInfo const* windowsHelloInfo;

    /// <summary>
    /// (Optional) User XBox account information, if a XBox account has been linked.
    /// </summary>
    PlayFabUserXboxInfo const* xboxInfo;

} PlayFabUserAccountInfo;

/// <summary>
/// PlayFabItemInstance data model. A unique instance of an item in a user's inventory. Note, to retrieve
/// additional information for an item such as Tags, Description that are the same across all instances
/// of the item, a call to GetCatalogItems is required. The ItemID of can be matched to a catalog entry,
/// which contains the additional information. Also note that Custom Data is only set when the User's
/// specific instance has updated the CustomData via a call to UpdateUserInventoryItemCustomData. Other
/// fields such as UnitPrice and UnitCurrency are only set when the item was granted via a purchase.
/// </summary>
typedef struct PlayFabItemInstance
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
    struct PlayFabStringDictionaryEntry const* customData;

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

} PlayFabItemInstance;

/// <summary>
/// PlayFabCharacterInventory data model.
/// </summary>
typedef struct PlayFabCharacterInventory
{
    /// <summary>
    /// (Optional) The id of this character.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) The inventory of this character.
    /// </summary>
    PlayFabItemInstance const* const* inventory;

    /// <summary>
    /// Count of inventory
    /// </summary>
    uint32_t inventoryCount;

} PlayFabCharacterInventory;

/// <summary>
/// PlayFabCharacterResult data model.
/// </summary>
typedef struct PlayFabCharacterResult
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

} PlayFabCharacterResult;

/// <summary>
/// PlayFabAdCampaignAttributionModel data model.
/// </summary>
typedef struct PlayFabAdCampaignAttributionModel
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

} PlayFabAdCampaignAttributionModel;

/// <summary>
/// PlayFabContactEmailInfoModel data model.
/// </summary>
typedef struct PlayFabContactEmailInfoModel
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
    PlayFabEmailVerificationStatus const* verificationStatus;

} PlayFabContactEmailInfoModel;

/// <summary>
/// PlayFabLinkedPlatformAccountModel data model.
/// </summary>
typedef struct PlayFabLinkedPlatformAccountModel
{
    /// <summary>
    /// (Optional) Linked account email of the user on the platform, if available.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Authentication platform.
    /// </summary>
    PlayFabLoginIdentityProvider const* platform;

    /// <summary>
    /// (Optional) Unique account identifier of the user on the platform.
    /// </summary>
    const char* platformUserId;

    /// <summary>
    /// (Optional) Linked account username of the user on the platform, if available.
    /// </summary>
    const char* username;

} PlayFabLinkedPlatformAccountModel;

/// <summary>
/// PlayFabLocationModel data model.
/// </summary>
typedef struct PlayFabLocationModel
{
    /// <summary>
    /// (Optional) City name.
    /// </summary>
    const char* city;

    /// <summary>
    /// (Optional) The two-character continent code for this location.
    /// </summary>
    PlayFabContinentCode const* continentCode;

    /// <summary>
    /// (Optional) The two-character ISO 3166-1 country code for the country associated with the location.
    /// </summary>
    PlayFabCountryCode const* countryCode;

    /// <summary>
    /// (Optional) Latitude coordinate of the geographic location.
    /// </summary>
    double const* latitude;

    /// <summary>
    /// (Optional) Longitude coordinate of the geographic location.
    /// </summary>
    double const* longitude;

} PlayFabLocationModel;

/// <summary>
/// PlayFabSubscriptionModel data model.
/// </summary>
typedef struct PlayFabSubscriptionModel
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
    PlayFabSubscriptionProviderStatus const* status;

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

} PlayFabSubscriptionModel;

/// <summary>
/// PlayFabMembershipModel data model.
/// </summary>
typedef struct PlayFabMembershipModel
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
    PlayFabSubscriptionModel const* const* subscriptions;

    /// <summary>
    /// Count of subscriptions
    /// </summary>
    uint32_t subscriptionsCount;

} PlayFabMembershipModel;

/// <summary>
/// PlayFabPushNotificationRegistrationModel data model.
/// </summary>
typedef struct PlayFabPushNotificationRegistrationModel
{
    /// <summary>
    /// (Optional) Notification configured endpoint.
    /// </summary>
    const char* notificationEndpointARN;

    /// <summary>
    /// (Optional) Push notification platform.
    /// </summary>
    PlayFabPushNotificationPlatform const* platform;

} PlayFabPushNotificationRegistrationModel;

/// <summary>
/// PlayFabStatisticModel data model.
/// </summary>
typedef struct PlayFabStatisticModel
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

} PlayFabStatisticModel;

/// <summary>
/// PlayFabTagModel data model.
/// </summary>
typedef struct PlayFabTagModel
{
    /// <summary>
    /// (Optional) Full value of the tag, including namespace.
    /// </summary>
    const char* tagValue;

} PlayFabTagModel;

/// <summary>
/// PlayFabValueToDateModel data model.
/// </summary>
typedef struct PlayFabValueToDateModel
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

} PlayFabValueToDateModel;

/// <summary>
/// PlayFabPlayerProfileModel data model.
/// </summary>
typedef struct PlayFabPlayerProfileModel
{
    /// <summary>
    /// (Optional) List of advertising campaigns the player has been attributed to.
    /// </summary>
    PlayFabAdCampaignAttributionModel const* const* adCampaignAttributions;

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
    PlayFabContactEmailInfoModel const* const* contactEmailAddresses;

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
    /// (Optional) List of experiment variants for the player.
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
    PlayFabLinkedPlatformAccountModel const* const* linkedAccounts;

    /// <summary>
    /// Count of linkedAccounts
    /// </summary>
    uint32_t linkedAccountsCount;

    /// <summary>
    /// (Optional) List of geographic locations from which the player has logged in to the title.
    /// </summary>
    PlayFabLocationModel const* const* locations;

    /// <summary>
    /// Count of locations
    /// </summary>
    uint32_t locationsCount;

    /// <summary>
    /// (Optional) List of memberships for the player, along with whether are expired.
    /// </summary>
    PlayFabMembershipModel const* const* memberships;

    /// <summary>
    /// Count of memberships
    /// </summary>
    uint32_t membershipsCount;

    /// <summary>
    /// (Optional) Player account origination.
    /// </summary>
    PlayFabLoginIdentityProvider const* origination;

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
    PlayFabPushNotificationRegistrationModel const* const* pushNotificationRegistrations;

    /// <summary>
    /// Count of pushNotificationRegistrations
    /// </summary>
    uint32_t pushNotificationRegistrationsCount;

    /// <summary>
    /// (Optional) List of leaderboard statistic values for the player.
    /// </summary>
    PlayFabStatisticModel const* const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

    /// <summary>
    /// (Optional) List of player's tags for segmentation.
    /// </summary>
    PlayFabTagModel const* const* tags;

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
    PlayFabValueToDateModel const* const* valuesToDate;

    /// <summary>
    /// Count of valuesToDate
    /// </summary>
    uint32_t valuesToDateCount;

} PlayFabPlayerProfileModel;

/// <summary>
/// PlayFabStatisticValue data model.
/// </summary>
typedef struct PlayFabStatisticValue
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

} PlayFabStatisticValue;

/// <summary>
/// PlayFabUserDataRecord data model.
/// </summary>
typedef struct PlayFabUserDataRecord
{
    /// <summary>
    /// Timestamp for when this data was last updated.
    /// </summary>
    time_t lastUpdated;

    /// <summary>
    /// (Optional) Indicates whether this data can be read by all users (public) or only the user (private).
    /// This is used for GetUserData requests being made by one player about another player.
    /// </summary>
    PlayFabUserDataPermission const* permission;

    /// <summary>
    /// (Optional) Data stored for the specified user data key.
    /// </summary>
    const char* value;

} PlayFabUserDataRecord;

/// <summary>
/// PlayFabVirtualCurrencyRechargeTime data model.
/// </summary>
typedef struct PlayFabVirtualCurrencyRechargeTime
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

} PlayFabVirtualCurrencyRechargeTime;

/// <summary>
/// PlayFabGetPlayerCombinedInfoResultPayload data model.
/// </summary>
typedef struct PlayFabGetPlayerCombinedInfoResultPayload
{
    /// <summary>
    /// (Optional) Account information for the user. This is always retrieved.
    /// </summary>
    PlayFabUserAccountInfo const* accountInfo;

    /// <summary>
    /// (Optional) Inventories for each character for the user.
    /// </summary>
    PlayFabCharacterInventory const* const* characterInventories;

    /// <summary>
    /// Count of characterInventories
    /// </summary>
    uint32_t characterInventoriesCount;

    /// <summary>
    /// (Optional) List of characters for the user.
    /// </summary>
    PlayFabCharacterResult const* const* characterList;

    /// <summary>
    /// Count of characterList
    /// </summary>
    uint32_t characterListCount;

    /// <summary>
    /// (Optional) The profile of the players. This profile is not guaranteed to be up-to-date. For a
    /// new player, this profile will not exist.
    /// </summary>
    PlayFabPlayerProfileModel const* playerProfile;

    /// <summary>
    /// (Optional) List of statistics for this player.
    /// </summary>
    PlayFabStatisticValue const* const* playerStatistics;

    /// <summary>
    /// Count of playerStatistics
    /// </summary>
    uint32_t playerStatisticsCount;

    /// <summary>
    /// (Optional) Title data for this title.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* titleData;

    /// <summary>
    /// Count of titleData
    /// </summary>
    uint32_t titleDataCount;

    /// <summary>
    /// (Optional) User specific custom data.
    /// </summary>
    struct PlayFabUserDataRecordDictionaryEntry const* userData;

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
    PlayFabItemInstance const* const* userInventory;

    /// <summary>
    /// Count of userInventory
    /// </summary>
    uint32_t userInventoryCount;

    /// <summary>
    /// (Optional) User specific read-only data.
    /// </summary>
    struct PlayFabUserDataRecordDictionaryEntry const* userReadOnlyData;

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
    struct PlayFabInt32DictionaryEntry const* userVirtualCurrency;

    /// <summary>
    /// Count of userVirtualCurrency
    /// </summary>
    uint32_t userVirtualCurrencyCount;

    /// <summary>
    /// (Optional) Dictionary of remaining times and timestamps for virtual currencies.
    /// </summary>
    struct PlayFabVirtualCurrencyRechargeTimeDictionaryEntry const* userVirtualCurrencyRechargeTimes;

    /// <summary>
    /// Count of userVirtualCurrencyRechargeTimes
    /// </summary>
    uint32_t userVirtualCurrencyRechargeTimesCount;

} PlayFabGetPlayerCombinedInfoResultPayload;

/// <summary>
/// PlayFabUserSettings data model.
/// </summary>
typedef struct PlayFabUserSettings
{
    /// <summary>
    /// Boolean for whether this player is eligible for gathering device info.
    /// </summary>
    bool gatherDeviceInfo;

    /// <summary>
    /// Boolean for whether this player should report OnFocus play-time tracking.
    /// </summary>
    bool gatherFocusInfo;

    /// <summary>
    /// Boolean for whether this player is eligible for ad tracking.
    /// </summary>
    bool needsAttribution;

} PlayFabUserSettings;

/// <summary>
/// PlayFabVariable data model.
/// </summary>
typedef struct PlayFabVariable
{
    /// <summary>
    /// Name of the variable.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Value of the variable.
    /// </summary>
    const char* value;

} PlayFabVariable;

/// <summary>
/// PlayFabTreatmentAssignment data model.
/// </summary>
typedef struct PlayFabTreatmentAssignment
{
    /// <summary>
    /// (Optional) List of the experiment variables.
    /// </summary>
    PlayFabVariable const* const* variables;

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

} PlayFabTreatmentAssignment;

/// <summary>
/// Dictionary entry for an associative array with string values.
/// </summary>
typedef struct PlayFabStringDictionaryEntry
{
    const char* key;
    const char* value;
} PlayFabStringDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with int32_t values.
/// </summary>
typedef struct PlayFabInt32DictionaryEntry
{
    const char* key;
    int32_t value;
} PlayFabInt32DictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with uint32_t values.
/// </summary>
typedef struct PlayFabUint32DictionaryEntry
{
    const char* key;
    uint32_t value;
} PlayFabUint32DictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with time_t values.
/// </summary>
typedef struct PlayFabDateTimeDictionaryEntry
{
    const char* key;
    time_t value;
} PlayFabDateTimeDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabUserDataRecord values.
/// </summary>
typedef struct PlayFabUserDataRecordDictionaryEntry
{
    const char* key;
    PlayFabUserDataRecord* value;
} PlayFabUserDataRecordDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabVirtualCurrencyRechargeTime values.
/// </summary>
typedef struct PlayFabVirtualCurrencyRechargeTimeDictionaryEntry
{
    const char* key;
    PlayFabVirtualCurrencyRechargeTime* value;
} PlayFabVirtualCurrencyRechargeTimeDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabEntityKey values.
/// </summary>
typedef struct PlayFabEntityKeyDictionaryEntry
{
    const char* key;
    PlayFabEntityKey* value;
} PlayFabEntityKeyDictionaryEntry;

#pragma pop_macro("IN")

}
