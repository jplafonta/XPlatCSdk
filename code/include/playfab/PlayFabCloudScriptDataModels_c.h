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

// CloudScript enums
enum class PlayFabCloudScriptCloudScriptRevisionOption : uint32_t
{
    Live,
    Latest,
    Specific
};

enum class PlayFabCloudScriptContinentCode : uint32_t
{
    AF,
    AN,
    AS,
    EU,
    NA,
    OC,
    SA
};

enum class PlayFabCloudScriptCountryCode : uint32_t
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

enum class PlayFabCloudScriptEmailVerificationStatus : uint32_t
{
    Unverified,
    Pending,
    Confirmed
};

enum class PlayFabCloudScriptLoginIdentityProvider : uint32_t
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

enum class PlayFabCloudScriptPushNotificationPlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

enum class PlayFabCloudScriptSubscriptionProviderStatus : uint32_t
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

enum class PlayFabCloudScriptTriggerType : uint32_t
{
    HTTP,
    Queue
};


// CloudScript structs
typedef struct PlayFabCloudScriptAdCampaignAttributionModel
{
    time_t attributedAt;
    const char* campaignId;
    const char* platform;
} PlayFabCloudScriptAdCampaignAttributionModel;

typedef struct PlayFabCloudScriptContactEmailInfoModel
{
    const char* emailAddress;
    const char* name;
    PF_OPTIONAL PlayFabCloudScriptEmailVerificationStatus* verificationStatus;
} PlayFabCloudScriptContactEmailInfoModel;

typedef struct PlayFabCloudScriptEntityKey
{
    const char* id;
    const char* type;
} PlayFabCloudScriptEntityKey;

typedef struct PlayFabCloudScriptScriptExecutionError
{
    const char* error;
    const char* message;
    const char* stackTrace;
} PlayFabCloudScriptScriptExecutionError;

typedef struct PlayFabCloudScriptLogStatement
{
    PlayFabJsonObject data;
    const char* level;
    const char* message;
} PlayFabCloudScriptLogStatement;

typedef struct PlayFabCloudScriptExecuteCloudScriptResult
{
    int32_t aPIRequestsIssued;
    PF_OPTIONAL PlayFabCloudScriptScriptExecutionError* error;
    double executionTimeSeconds;
    const char* functionName;
    PlayFabJsonObject functionResult;
    PF_OPTIONAL bool* functionResultTooLarge;
    int32_t httpRequestsIssued;
    PF_ARRAY PlayFabCloudScriptLogStatement** logs;
    PF_COLLECTION_COUNT uint32_t logsCount;
    PF_OPTIONAL bool* logsTooLarge;
    uint32_t memoryConsumedBytes;
    double processorTimeSeconds;
    int32_t revision;
} PlayFabCloudScriptExecuteCloudScriptResult;

typedef struct PlayFabCloudScriptExecuteEntityCloudScriptRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabCloudScriptEntityKey* entity;
    const char* functionName;
    PlayFabJsonObject functionParameter;
    PF_OPTIONAL bool* generatePlayStreamEvent;
    PF_OPTIONAL PlayFabCloudScriptCloudScriptRevisionOption* revisionSelection;
    PF_OPTIONAL int32_t* specificRevision;
} PlayFabCloudScriptExecuteEntityCloudScriptRequest;

typedef struct PlayFabCloudScriptExecuteFunctionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabCloudScriptEntityKey* entity;
    const char* functionName;
    PlayFabJsonObject functionParameter;
    PF_OPTIONAL bool* generatePlayStreamEvent;
} PlayFabCloudScriptExecuteFunctionRequest;

typedef struct PlayFabCloudScriptFunctionExecutionError
{
    const char* error;
    const char* message;
    const char* stackTrace;
} PlayFabCloudScriptFunctionExecutionError;

typedef struct PlayFabCloudScriptExecuteFunctionResult
{
    PF_OPTIONAL PlayFabCloudScriptFunctionExecutionError* error;
    int32_t executionTimeMilliseconds;
    const char* functionName;
    PlayFabJsonObject functionResult;
    PF_OPTIONAL bool* functionResultTooLarge;
} PlayFabCloudScriptExecuteFunctionResult;

typedef struct PlayFabCloudScriptFunctionModel
{
    const char* functionAddress;
    const char* functionName;
    const char* triggerType;
} PlayFabCloudScriptFunctionModel;

typedef struct PlayFabCloudScriptHttpFunctionModel
{
    const char* functionName;
    const char* functionUrl;
} PlayFabCloudScriptHttpFunctionModel;

typedef struct PlayFabCloudScriptLinkedPlatformAccountModel
{
    const char* email;
    PF_OPTIONAL PlayFabCloudScriptLoginIdentityProvider* platform;
    const char* platformUserId;
    const char* username;
} PlayFabCloudScriptLinkedPlatformAccountModel;

typedef struct PlayFabCloudScriptListFunctionsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabCloudScriptListFunctionsRequest;

typedef struct PlayFabCloudScriptListFunctionsResult
{
    PF_ARRAY PlayFabCloudScriptFunctionModel** functions;
    PF_COLLECTION_COUNT uint32_t functionsCount;
} PlayFabCloudScriptListFunctionsResult;

typedef struct PlayFabCloudScriptListHttpFunctionsResult
{
    PF_ARRAY PlayFabCloudScriptHttpFunctionModel** functions;
    PF_COLLECTION_COUNT uint32_t functionsCount;
} PlayFabCloudScriptListHttpFunctionsResult;

typedef struct PlayFabCloudScriptQueuedFunctionModel
{
    const char* connectionString;
    const char* functionName;
    const char* queueName;
} PlayFabCloudScriptQueuedFunctionModel;

typedef struct PlayFabCloudScriptListQueuedFunctionsResult
{
    PF_ARRAY PlayFabCloudScriptQueuedFunctionModel** functions;
    PF_COLLECTION_COUNT uint32_t functionsCount;
} PlayFabCloudScriptListQueuedFunctionsResult;

typedef struct PlayFabCloudScriptLocationModel
{
    const char* city;
    PF_OPTIONAL PlayFabCloudScriptContinentCode* continentCode;
    PF_OPTIONAL PlayFabCloudScriptCountryCode* countryCode;
    PF_OPTIONAL double* latitude;
    PF_OPTIONAL double* longitude;
} PlayFabCloudScriptLocationModel;

typedef struct PlayFabCloudScriptSubscriptionModel
{
    time_t expiration;
    time_t initialSubscriptionTime;
    bool isActive;
    PF_OPTIONAL PlayFabCloudScriptSubscriptionProviderStatus* status;
    const char* subscriptionId;
    const char* subscriptionItemId;
    const char* subscriptionProvider;
} PlayFabCloudScriptSubscriptionModel;

typedef struct PlayFabCloudScriptMembershipModel
{
    bool isActive;
    time_t membershipExpiration;
    const char* membershipId;
    PF_OPTIONAL time_t* overrideExpiration;
    PF_ARRAY PlayFabCloudScriptSubscriptionModel** subscriptions;
    PF_COLLECTION_COUNT uint32_t subscriptionsCount;
} PlayFabCloudScriptMembershipModel;

typedef struct PlayFabCloudScriptNameIdentifier
{
    const char* id;
    const char* name;
} PlayFabCloudScriptNameIdentifier;

typedef struct PlayFabCloudScriptPushNotificationRegistrationModel
{
    const char* notificationEndpointARN;
    PF_OPTIONAL PlayFabCloudScriptPushNotificationPlatform* platform;
} PlayFabCloudScriptPushNotificationRegistrationModel;

typedef struct PlayFabCloudScriptStatisticModel
{
    const char* name;
    int32_t value;
    int32_t version;
} PlayFabCloudScriptStatisticModel;

typedef struct PlayFabCloudScriptTagModel
{
    const char* tagValue;
} PlayFabCloudScriptTagModel;

typedef struct PlayFabCloudScriptValueToDateModel
{
    const char* currency;
    uint32_t totalValue;
    const char* totalValueAsDecimal;
} PlayFabCloudScriptValueToDateModel;

typedef struct PlayFabCloudScriptPlayerProfileModel
{
    PF_ARRAY PlayFabCloudScriptAdCampaignAttributionModel** adCampaignAttributions;
    PF_COLLECTION_COUNT uint32_t adCampaignAttributionsCount;
    const char* avatarUrl;
    PF_OPTIONAL time_t* bannedUntil;
    PF_ARRAY PlayFabCloudScriptContactEmailInfoModel** contactEmailAddresses;
    PF_COLLECTION_COUNT uint32_t contactEmailAddressesCount;
    PF_OPTIONAL time_t* created;
    const char* displayName;
    PF_ARRAY const char** experimentVariants;
    PF_COLLECTION_COUNT uint32_t experimentVariantsCount;
    PF_OPTIONAL time_t* lastLogin;
    PF_ARRAY PlayFabCloudScriptLinkedPlatformAccountModel** linkedAccounts;
    PF_COLLECTION_COUNT uint32_t linkedAccountsCount;
    PF_ARRAY PlayFabCloudScriptLocationModel** locations;
    PF_COLLECTION_COUNT uint32_t locationsCount;
    PF_ARRAY PlayFabCloudScriptMembershipModel** memberships;
    PF_COLLECTION_COUNT uint32_t membershipsCount;
    PF_OPTIONAL PlayFabCloudScriptLoginIdentityProvider* origination;
    const char* playerId;
    const char* publisherId;
    PF_ARRAY PlayFabCloudScriptPushNotificationRegistrationModel** pushNotificationRegistrations;
    PF_COLLECTION_COUNT uint32_t pushNotificationRegistrationsCount;
    PF_ARRAY PlayFabCloudScriptStatisticModel** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
    PF_ARRAY PlayFabCloudScriptTagModel** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    const char* titleId;
    PF_OPTIONAL uint32_t* totalValueToDateInUSD;
    PF_ARRAY PlayFabCloudScriptValueToDateModel** valuesToDate;
    PF_COLLECTION_COUNT uint32_t valuesToDateCount;
} PlayFabCloudScriptPlayerProfileModel;

typedef struct PlayFabCloudScriptPlayStreamEventEnvelopeModel
{
    const char* entityId;
    const char* entityType;
    const char* eventData;
    const char* eventName;
    const char* eventNamespace;
    const char* eventSettings;
} PlayFabCloudScriptPlayStreamEventEnvelopeModel;

typedef struct PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabCloudScriptEntityKey* entity;
    PlayFabCloudScriptExecuteFunctionResult* functionResult;
} PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest;

typedef struct PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabCloudScriptEntityKey* entity;
    PlayFabCloudScriptExecuteFunctionResult* functionResult;
} PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest;

typedef struct PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabCloudScriptEntityKey* entity;
    PlayFabCloudScriptExecuteFunctionResult* functionResult;
    PlayFabCloudScriptPlayerProfileModel* playerProfile;
    PF_OPTIONAL PlayFabCloudScriptPlayStreamEventEnvelopeModel* playStreamEventEnvelope;
} PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest;

typedef struct PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabCloudScriptEntityKey* entity;
    PlayFabCloudScriptExecuteFunctionResult* functionResult;
    PlayFabCloudScriptNameIdentifier* scheduledTaskId;
} PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest;

typedef struct PlayFabCloudScriptRegisterHttpFunctionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* functionName;
    const char* functionUrl;
} PlayFabCloudScriptRegisterHttpFunctionRequest;

typedef struct PlayFabCloudScriptRegisterQueuedFunctionRequest
{
    const char* connectionString;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* functionName;
    const char* queueName;
} PlayFabCloudScriptRegisterQueuedFunctionRequest;

typedef struct PlayFabCloudScriptUnregisterFunctionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* functionName;
} PlayFabCloudScriptUnregisterFunctionRequest;


// CloudScript dictionary entry structs

#pragma pop_macro("IN")

}
