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

// Admin enums
enum class PlayFabAdminAuthTokenType : uint32_t
{
    Email
};

enum class PlayFabAdminConditionals : uint32_t
{
    Any,
    True,
    False
};

enum class PlayFabAdminContinentCode : uint32_t
{
    AF,
    AN,
    AS,
    EU,
    NA,
    OC,
    SA
};

enum class PlayFabAdminCountryCode : uint32_t
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

enum class PlayFabAdminCurrency : uint32_t
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

enum class PlayFabAdminEffectType : uint32_t
{
    Allow,
    Deny
};

enum class PlayFabAdminEmailVerificationStatus : uint32_t
{
    Unverified,
    Pending,
    Confirmed
};

enum class PlayFabAdminGameBuildStatus : uint32_t
{
    Available,
    Validating,
    InvalidBuildPackage,
    Processing,
    FailedToProcess
};

enum class PlayFabAdminGenericErrorCodes : uint32_t
{
    Success,
    UnkownError,
    InvalidParams,
    AccountNotFound,
    AccountBanned,
    InvalidUsernameOrPassword,
    InvalidTitleId,
    InvalidEmailAddress,
    EmailAddressNotAvailable,
    InvalidUsername,
    InvalidPassword,
    UsernameNotAvailable,
    InvalidSteamTicket,
    AccountAlreadyLinked,
    LinkedAccountAlreadyClaimed,
    InvalidFacebookToken,
    AccountNotLinked,
    FailedByPaymentProvider,
    CouponCodeNotFound,
    InvalidContainerItem,
    ContainerNotOwned,
    KeyNotOwned,
    InvalidItemIdInTable,
    InvalidReceipt,
    ReceiptAlreadyUsed,
    ReceiptCancelled,
    GameNotFound,
    GameModeNotFound,
    InvalidGoogleToken,
    UserIsNotPartOfDeveloper,
    InvalidTitleForDeveloper,
    TitleNameConflicts,
    UserisNotValid,
    ValueAlreadyExists,
    BuildNotFound,
    PlayerNotInGame,
    InvalidTicket,
    InvalidDeveloper,
    InvalidOrderInfo,
    RegistrationIncomplete,
    InvalidPlatform,
    UnknownError,
    SteamApplicationNotOwned,
    WrongSteamAccount,
    TitleNotActivated,
    RegistrationSessionNotFound,
    NoSuchMod,
    FileNotFound,
    DuplicateEmail,
    ItemNotFound,
    ItemNotOwned,
    ItemNotRecycleable,
    ItemNotAffordable,
    InvalidVirtualCurrency,
    WrongVirtualCurrency,
    WrongPrice,
    NonPositiveValue,
    InvalidRegion,
    RegionAtCapacity,
    ServerFailedToStart,
    NameNotAvailable,
    InsufficientFunds,
    InvalidDeviceID,
    InvalidPushNotificationToken,
    NoRemainingUses,
    InvalidPaymentProvider,
    PurchaseInitializationFailure,
    DuplicateUsername,
    InvalidBuyerInfo,
    NoGameModeParamsSet,
    BodyTooLarge,
    ReservedWordInBody,
    InvalidTypeInBody,
    InvalidRequest,
    ReservedEventName,
    InvalidUserStatistics,
    NotAuthenticated,
    StreamAlreadyExists,
    ErrorCreatingStream,
    StreamNotFound,
    InvalidAccount,
    PurchaseDoesNotExist,
    InvalidPurchaseTransactionStatus,
    APINotEnabledForGameClientAccess,
    NoPushNotificationARNForTitle,
    BuildAlreadyExists,
    BuildPackageDoesNotExist,
    CustomAnalyticsEventsNotEnabledForTitle,
    InvalidSharedGroupId,
    NotAuthorized,
    MissingTitleGoogleProperties,
    InvalidItemProperties,
    InvalidPSNAuthCode,
    InvalidItemId,
    PushNotEnabledForAccount,
    PushServiceError,
    ReceiptDoesNotContainInAppItems,
    ReceiptContainsMultipleInAppItems,
    InvalidBundleID,
    JavascriptException,
    InvalidSessionTicket,
    UnableToConnectToDatabase,
    InternalServerError,
    InvalidReportDate,
    ReportNotAvailable,
    DatabaseThroughputExceeded,
    InvalidGameTicket,
    ExpiredGameTicket,
    GameTicketDoesNotMatchLobby,
    LinkedDeviceAlreadyClaimed,
    DeviceAlreadyLinked,
    DeviceNotLinked,
    PartialFailure,
    PublisherNotSet,
    ServiceUnavailable,
    VersionNotFound,
    RevisionNotFound,
    InvalidPublisherId,
    DownstreamServiceUnavailable,
    APINotIncludedInTitleUsageTier,
    DAULimitExceeded,
    APIRequestLimitExceeded,
    InvalidAPIEndpoint,
    BuildNotAvailable,
    ConcurrentEditError,
    ContentNotFound,
    CharacterNotFound,
    CloudScriptNotFound,
    ContentQuotaExceeded,
    InvalidCharacterStatistics,
    PhotonNotEnabledForTitle,
    PhotonApplicationNotFound,
    PhotonApplicationNotAssociatedWithTitle,
    InvalidEmailOrPassword,
    FacebookAPIError,
    InvalidContentType,
    KeyLengthExceeded,
    DataLengthExceeded,
    TooManyKeys,
    FreeTierCannotHaveVirtualCurrency,
    MissingAmazonSharedKey,
    AmazonValidationError,
    InvalidPSNIssuerId,
    PSNInaccessible,
    ExpiredAuthToken,
    FailedToGetEntitlements,
    FailedToConsumeEntitlement,
    TradeAcceptingUserNotAllowed,
    TradeInventoryItemIsAssignedToCharacter,
    TradeInventoryItemIsBundle,
    TradeStatusNotValidForCancelling,
    TradeStatusNotValidForAccepting,
    TradeDoesNotExist,
    TradeCancelled,
    TradeAlreadyFilled,
    TradeWaitForStatusTimeout,
    TradeInventoryItemExpired,
    TradeMissingOfferedAndAcceptedItems,
    TradeAcceptedItemIsBundle,
    TradeAcceptedItemIsStackable,
    TradeInventoryItemInvalidStatus,
    TradeAcceptedCatalogItemInvalid,
    TradeAllowedUsersInvalid,
    TradeInventoryItemDoesNotExist,
    TradeInventoryItemIsConsumed,
    TradeInventoryItemIsStackable,
    TradeAcceptedItemsMismatch,
    InvalidKongregateToken,
    FeatureNotConfiguredForTitle,
    NoMatchingCatalogItemForReceipt,
    InvalidCurrencyCode,
    NoRealMoneyPriceForCatalogItem,
    TradeInventoryItemIsNotTradable,
    TradeAcceptedCatalogItemIsNotTradable,
    UsersAlreadyFriends,
    LinkedIdentifierAlreadyClaimed,
    CustomIdNotLinked,
    TotalDataSizeExceeded,
    DeleteKeyConflict,
    InvalidXboxLiveToken,
    ExpiredXboxLiveToken,
    ResettableStatisticVersionRequired,
    NotAuthorizedByTitle,
    NoPartnerEnabled,
    InvalidPartnerResponse,
    APINotEnabledForGameServerAccess,
    StatisticNotFound,
    StatisticNameConflict,
    StatisticVersionClosedForWrites,
    StatisticVersionInvalid,
    APIClientRequestRateLimitExceeded,
    InvalidJSONContent,
    InvalidDropTable,
    StatisticVersionAlreadyIncrementedForScheduledInterval,
    StatisticCountLimitExceeded,
    StatisticVersionIncrementRateExceeded,
    ContainerKeyInvalid,
    CloudScriptExecutionTimeLimitExceeded,
    NoWritePermissionsForEvent,
    CloudScriptFunctionArgumentSizeExceeded,
    CloudScriptAPIRequestCountExceeded,
    CloudScriptAPIRequestError,
    CloudScriptHTTPRequestError,
    InsufficientGuildRole,
    GuildNotFound,
    OverLimit,
    EventNotFound,
    InvalidEventField,
    InvalidEventName,
    CatalogNotConfigured,
    OperationNotSupportedForPlatform,
    SegmentNotFound,
    StoreNotFound,
    InvalidStatisticName,
    TitleNotQualifiedForLimit,
    InvalidServiceLimitLevel,
    ServiceLimitLevelInTransition,
    CouponAlreadyRedeemed,
    GameServerBuildSizeLimitExceeded,
    GameServerBuildCountLimitExceeded,
    VirtualCurrencyCountLimitExceeded,
    VirtualCurrencyCodeExists,
    TitleNewsItemCountLimitExceeded,
    InvalidTwitchToken,
    TwitchResponseError,
    ProfaneDisplayName,
    UserAlreadyAdded,
    InvalidVirtualCurrencyCode,
    VirtualCurrencyCannotBeDeleted,
    IdentifierAlreadyClaimed,
    IdentifierNotLinked,
    InvalidContinuationToken,
    ExpiredContinuationToken,
    InvalidSegment,
    InvalidSessionId,
    SessionLogNotFound,
    InvalidSearchTerm,
    TwoFactorAuthenticationTokenRequired,
    GameServerHostCountLimitExceeded,
    PlayerTagCountLimitExceeded,
    RequestAlreadyRunning,
    ActionGroupNotFound,
    MaximumSegmentBulkActionJobsRunning,
    NoActionsOnPlayersInSegmentJob,
    DuplicateStatisticName,
    ScheduledTaskNameConflict,
    ScheduledTaskCreateConflict,
    InvalidScheduledTaskName,
    InvalidTaskSchedule,
    SteamNotEnabledForTitle,
    LimitNotAnUpgradeOption,
    NoSecretKeyEnabledForCloudScript,
    TaskNotFound,
    TaskInstanceNotFound,
    InvalidIdentityProviderId,
    MisconfiguredIdentityProvider,
    InvalidScheduledTaskType,
    BillingInformationRequired,
    LimitedEditionItemUnavailable,
    InvalidAdPlacementAndReward,
    AllAdPlacementViewsAlreadyConsumed,
    GoogleOAuthNotConfiguredForTitle,
    GoogleOAuthError,
    UserNotFriend,
    InvalidSignature,
    InvalidPublicKey,
    GoogleOAuthNoIdTokenIncludedInResponse,
    StatisticUpdateInProgress,
    LeaderboardVersionNotAvailable,
    StatisticAlreadyHasPrizeTable,
    PrizeTableHasOverlappingRanks,
    PrizeTableHasMissingRanks,
    PrizeTableRankStartsAtZero,
    InvalidStatistic,
    ExpressionParseFailure,
    ExpressionInvokeFailure,
    ExpressionTooLong,
    DataUpdateRateExceeded,
    RestrictedEmailDomain,
    EncryptionKeyDisabled,
    EncryptionKeyMissing,
    EncryptionKeyBroken,
    NoSharedSecretKeyConfigured,
    SecretKeyNotFound,
    PlayerSecretAlreadyConfigured,
    APIRequestsDisabledForTitle,
    InvalidSharedSecretKey,
    PrizeTableHasNoRanks,
    ProfileDoesNotExist,
    ContentS3OriginBucketNotConfigured,
    InvalidEnvironmentForReceipt,
    EncryptedRequestNotAllowed,
    SignedRequestNotAllowed,
    RequestViewConstraintParamsNotAllowed,
    BadPartnerConfiguration,
    XboxBPCertificateFailure,
    XboxXASSExchangeFailure,
    InvalidEntityId,
    StatisticValueAggregationOverflow,
    EmailMessageFromAddressIsMissing,
    EmailMessageToAddressIsMissing,
    SmtpServerAuthenticationError,
    SmtpServerLimitExceeded,
    SmtpServerInsufficientStorage,
    SmtpServerCommunicationError,
    SmtpServerGeneralFailure,
    EmailClientTimeout,
    EmailClientCanceledTask,
    EmailTemplateMissing,
    InvalidHostForTitleId,
    EmailConfirmationTokenDoesNotExist,
    EmailConfirmationTokenExpired,
    AccountDeleted,
    PlayerSecretNotConfigured,
    InvalidSignatureTime,
    NoContactEmailAddressFound,
    InvalidAuthToken,
    AuthTokenDoesNotExist,
    AuthTokenExpired,
    AuthTokenAlreadyUsedToResetPassword,
    MembershipNameTooLong,
    MembershipNotFound,
    GoogleServiceAccountInvalid,
    GoogleServiceAccountParseFailure,
    EntityTokenMissing,
    EntityTokenInvalid,
    EntityTokenExpired,
    EntityTokenRevoked,
    InvalidProductForSubscription,
    XboxInaccessible,
    SubscriptionAlreadyTaken,
    SmtpAddonNotEnabled,
    APIConcurrentRequestLimitExceeded,
    XboxRejectedXSTSExchangeRequest,
    VariableNotDefined,
    TemplateVersionNotDefined,
    FileTooLarge,
    TitleDeleted,
    TitleContainsUserAccounts,
    TitleDeletionPlayerCleanupFailure,
    EntityFileOperationPending,
    NoEntityFileOperationPending,
    EntityProfileVersionMismatch,
    TemplateVersionTooOld,
    MembershipDefinitionInUse,
    PaymentPageNotConfigured,
    FailedLoginAttemptRateLimitExceeded,
    EntityBlockedByGroup,
    RoleDoesNotExist,
    EntityIsAlreadyMember,
    DuplicateRoleId,
    GroupInvitationNotFound,
    GroupApplicationNotFound,
    OutstandingInvitationAcceptedInstead,
    OutstandingApplicationAcceptedInstead,
    RoleIsGroupDefaultMember,
    RoleIsGroupAdmin,
    RoleNameNotAvailable,
    GroupNameNotAvailable,
    EmailReportAlreadySent,
    EmailReportRecipientBlacklisted,
    EventNamespaceNotAllowed,
    EventEntityNotAllowed,
    InvalidEntityType,
    NullTokenResultFromAad,
    InvalidTokenResultFromAad,
    NoValidCertificateForAad,
    InvalidCertificateForAad,
    DuplicateDropTableId,
    MultiplayerServerError,
    MultiplayerServerTooManyRequests,
    MultiplayerServerNoContent,
    MultiplayerServerBadRequest,
    MultiplayerServerUnauthorized,
    MultiplayerServerForbidden,
    MultiplayerServerNotFound,
    MultiplayerServerConflict,
    MultiplayerServerInternalServerError,
    MultiplayerServerUnavailable,
    ExplicitContentDetected,
    PIIContentDetected,
    InvalidScheduledTaskParameter,
    PerEntityEventRateLimitExceeded,
    TitleDefaultLanguageNotSet,
    EmailTemplateMissingDefaultVersion,
    FacebookInstantGamesIdNotLinked,
    InvalidFacebookInstantGamesSignature,
    FacebookInstantGamesAuthNotConfiguredForTitle,
    EntityProfileConstraintValidationFailed,
    TelemetryIngestionKeyPending,
    TelemetryIngestionKeyNotFound,
    StatisticChildNameInvalid,
    DataIntegrityError,
    VirtualCurrencyCannotBeSetToOlderVersion,
    VirtualCurrencyMustBeWithinIntegerRange,
    EmailTemplateInvalidSyntax,
    EmailTemplateMissingCallback,
    PushNotificationTemplateInvalidPayload,
    InvalidLocalizedPushNotificationLanguage,
    MissingLocalizedPushNotificationMessage,
    PushNotificationTemplateMissingPlatformPayload,
    PushNotificationTemplatePayloadContainsInvalidJson,
    PushNotificationTemplateContainsInvalidIosPayload,
    PushNotificationTemplateContainsInvalidAndroidPayload,
    PushNotificationTemplateIosPayloadMissingNotificationBody,
    PushNotificationTemplateAndroidPayloadMissingNotificationBody,
    PushNotificationTemplateNotFound,
    PushNotificationTemplateMissingDefaultVersion,
    PushNotificationTemplateInvalidSyntax,
    PushNotificationTemplateNoCustomPayloadForV1,
    NoLeaderboardForStatistic,
    TitleNewsMissingDefaultLanguage,
    TitleNewsNotFound,
    TitleNewsDuplicateLanguage,
    TitleNewsMissingTitleOrBody,
    TitleNewsInvalidLanguage,
    EmailRecipientBlacklisted,
    InvalidGameCenterAuthRequest,
    GameCenterAuthenticationFailed,
    CannotEnablePartiesForTitle,
    PartyError,
    PartyRequests,
    PartyNoContent,
    PartyBadRequest,
    PartyUnauthorized,
    PartyForbidden,
    PartyNotFound,
    PartyConflict,
    PartyInternalServerError,
    PartyUnavailable,
    PartyTooManyRequests,
    PushNotificationTemplateMissingName,
    CannotEnableMultiplayerServersForTitle,
    WriteAttemptedDuringExport,
    MultiplayerServerTitleQuotaCoresExceeded,
    AutomationRuleNotFound,
    EntityAPIKeyLimitExceeded,
    EntityAPIKeyNotFound,
    EntityAPIKeyOrSecretInvalid,
    EconomyServiceUnavailable,
    EconomyServiceInternalError,
    QueryRateLimitExceeded,
    EntityAPIKeyCreationDisabledForEntity,
    ForbiddenByEntityPolicy,
    UpdateInventoryRateLimitExceeded,
    StudioCreationRateLimited,
    StudioCreationInProgress,
    DuplicateStudioName,
    StudioNotFound,
    StudioDeleted,
    StudioDeactivated,
    StudioActivated,
    TitleCreationRateLimited,
    TitleCreationInProgress,
    DuplicateTitleName,
    TitleActivationRateLimited,
    TitleActivationInProgress,
    TitleDeactivated,
    TitleActivated,
    CloudScriptAzureFunctionsExecutionTimeLimitExceeded,
    CloudScriptAzureFunctionsArgumentSizeExceeded,
    CloudScriptAzureFunctionsReturnSizeExceeded,
    CloudScriptAzureFunctionsHTTPRequestError,
    VirtualCurrencyBetaGetError,
    VirtualCurrencyBetaCreateError,
    VirtualCurrencyBetaInitialDepositSaveError,
    VirtualCurrencyBetaSaveError,
    VirtualCurrencyBetaDeleteError,
    VirtualCurrencyBetaRestoreError,
    VirtualCurrencyBetaSaveConflict,
    VirtualCurrencyBetaUpdateError,
    InsightsManagementDatabaseNotFound,
    InsightsManagementOperationNotFound,
    InsightsManagementErrorPendingOperationExists,
    InsightsManagementSetPerformanceLevelInvalidParameter,
    InsightsManagementSetStorageRetentionInvalidParameter,
    InsightsManagementGetStorageUsageInvalidParameter,
    InsightsManagementGetOperationStatusInvalidParameter,
    DuplicatePurchaseTransactionId,
    EvaluationModePlayerCountExceeded,
    GetPlayersInSegmentRateLimitExceeded,
    CloudScriptFunctionNameSizeExceeded,
    InsightsManagementTitleInEvaluationMode,
    CloudScriptAzureFunctionsQueueRequestError,
    EvaluationModeTitleCountExceeded,
    InsightsManagementTitleNotInFlight,
    LimitNotFound,
    LimitNotAvailableViaAPI,
    InsightsManagementSetStorageRetentionBelowMinimum,
    InsightsManagementSetStorageRetentionAboveMaximum,
    AppleNotEnabledForTitle,
    InsightsManagementNewActiveEventExportLimitInvalid,
    InsightsManagementSetPerformanceRateLimited,
    PartyRequestsThrottledFromRateLimiter,
    XboxServiceTooManyRequests,
    NintendoSwitchNotEnabledForTitle,
    RequestMultiplayerServersThrottledFromRateLimiter,
    TitleDataOverrideNotFound,
    DuplicateKeys,
    WasNotCreatedWithCloudRoot,
    LegacyMultiplayerServersDeprecated,
    VirtualCurrencyCurrentlyUnavailable,
    SteamUserNotFound,
    ElasticSearchOperationFailed,
    NotImplemented,
    MatchmakingEntityInvalid,
    MatchmakingPlayerAttributesInvalid,
    MatchmakingQueueNotFound,
    MatchmakingMatchNotFound,
    MatchmakingTicketNotFound,
    MatchmakingAlreadyJoinedTicket,
    MatchmakingTicketAlreadyCompleted,
    MatchmakingQueueConfigInvalid,
    MatchmakingMemberProfileInvalid,
    NintendoSwitchDeviceIdNotLinked,
    MatchmakingNotEnabled,
    MatchmakingPlayerAttributesTooLarge,
    MatchmakingNumberOfPlayersInTicketTooLarge,
    MatchmakingAttributeInvalid,
    MatchmakingPlayerHasNotJoinedTicket,
    MatchmakingRateLimitExceeded,
    MatchmakingTicketMembershipLimitExceeded,
    MatchmakingUnauthorized,
    MatchmakingQueueLimitExceeded,
    MatchmakingRequestTypeMismatch,
    MatchmakingBadRequest,
    TitleConfigNotFound,
    TitleConfigUpdateConflict,
    TitleConfigSerializationError,
    CatalogApiNotImplemented,
    CatalogEntityInvalid,
    CatalogTitleIdMissing,
    CatalogPlayerIdMissing,
    CatalogClientIdentityInvalid,
    CatalogOneOrMoreFilesInvalid,
    CatalogItemMetadataInvalid,
    CatalogItemIdInvalid,
    CatalogSearchParameterInvalid,
    CatalogFeatureDisabled,
    CatalogConfigInvalid,
    CatalogItemTypeInvalid,
    CatalogBadRequest,
    CatalogTooManyRequests,
    ExportInvalidStatusUpdate,
    ExportInvalidPrefix,
    ExportBlobContainerDoesNotExist,
    ExportNotFound,
    ExportCouldNotUpdate,
    ExportInvalidStorageType,
    ExportAmazonBucketDoesNotExist,
    ExportInvalidBlobStorage,
    ExportKustoException,
    ExportKustoConnectionFailed,
    ExportUnknownError,
    ExportCantEditPendingExport,
    ExportLimitExports,
    ExportLimitEvents,
    ExportInvalidPartitionStatusModification,
    ExportCouldNotCreate,
    ExportNoBackingDatabaseFound,
    ExportCouldNotDelete,
    ExportCannotDetermineEventQuery,
    ExportInvalidQuerySchemaModification,
    ExportQuerySchemaMissingRequiredColumns,
    ExportCannotParseQuery,
    ExportControlCommandsNotAllowed,
    ExportQueryMissingTableReference,
    ExplorerBasicInvalidQueryName,
    ExplorerBasicInvalidQueryDescription,
    ExplorerBasicInvalidQueryConditions,
    ExplorerBasicInvalidQueryStartDate,
    ExplorerBasicInvalidQueryEndDate,
    ExplorerBasicInvalidQueryGroupBy,
    ExplorerBasicInvalidQueryAggregateType,
    ExplorerBasicInvalidQueryAggregateProperty,
    ExplorerBasicLoadQueriesError,
    ExplorerBasicLoadQueryError,
    ExplorerBasicCreateQueryError,
    ExplorerBasicDeleteQueryError,
    ExplorerBasicUpdateQueryError,
    ExplorerBasicSavedQueriesLimit,
    ExplorerBasicSavedQueryNotFound,
    TitleNotEnabledForParty,
    PartyVersionNotFound,
    MultiplayerServerBuildReferencedByMatchmakingQueue,
    ExperimentationExperimentStopped,
    ExperimentationExperimentRunning,
    ExperimentationExperimentNotFound,
    ExperimentationExperimentNeverStarted,
    ExperimentationExperimentDeleted,
    ExperimentationClientTimeout,
    ExperimentationInvalidVariantConfiguration,
    ExperimentationInvalidVariableConfiguration,
    ExperimentInvalidId,
    ExperimentationNoScorecard,
    ExperimentationTreatmentAssignmentFailed,
    ExperimentationTreatmentAssignmentDisabled,
    ExperimentationInvalidDuration,
    ExperimentationMaxExperimentsReached,
    ExperimentationExperimentSchedulingInProgress,
    ExperimentationInvalidEndDate,
    ExperimentationInvalidStartDate,
    ExperimentationMaxDurationExceeded,
    ExperimentationExclusionGroupNotFound,
    ExperimentationExclusionGroupInsufficientCapacity,
    ExperimentationExclusionGroupCannotDelete,
    ExperimentationExclusionGroupInvalidTrafficAllocation,
    ExperimentationExclusionGroupInvalidName,
    MaxActionDepthExceeded,
    TitleNotOnUpdatedPricingPlan,
    SegmentManagementTitleNotInFlight,
    SegmentManagementNoExpressionTree,
    SegmentManagementTriggerActionCountOverLimit,
    SegmentManagementSegmentCountOverLimit,
    SegmentManagementInvalidSegmentId,
    SegmentManagementInvalidInput,
    SegmentManagementInvalidSegmentName,
    DeleteSegmentRateLimitExceeded,
    CreateSegmentRateLimitExceeded,
    UpdateSegmentRateLimitExceeded,
    GetSegmentsRateLimitExceeded,
    SnapshotNotFound,
    InventoryApiNotImplemented
};

enum class PlayFabAdminLoginIdentityProvider : uint32_t
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

enum class PlayFabAdminPushNotificationPlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

enum class PlayFabAdminPushSetupPlatform : uint32_t
{
    GCM,
    APNS,
    APNS_SANDBOX
};

enum class PlayFabAdminRegion : uint32_t
{
    USCentral,
    USEast,
    EUWest,
    Singapore,
    Japan,
    Brazil,
    Australia
};

enum class PlayFabAdminResolutionOutcome : uint32_t
{
    Revoke,
    Reinstate,
    Manual
};

enum class PlayFabAdminResultTableNodeType : uint32_t
{
    ItemId,
    TableId
};

enum class PlayFabAdminScheduledTaskType : uint32_t
{
    CloudScript,
    ActionsOnPlayerSegment,
    CloudScriptAzureFunctions,
    InsightsScheduledScaling
};

enum class PlayFabAdminSegmentCountryCode : uint32_t
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

enum class PlayFabAdminSegmentCurrency : uint32_t
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

enum class PlayFabAdminSegmentFilterComparison : uint32_t
{
    GreaterThan,
    LessThan,
    EqualTo,
    NotEqualTo,
    GreaterThanOrEqual,
    LessThanOrEqual,
    Exists,
    Contains,
    NotContains
};

enum class PlayFabAdminSegmentLoginIdentityProvider : uint32_t
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

enum class PlayFabAdminSegmentPushNotificationDevicePlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

enum class PlayFabAdminSourceType : uint32_t
{
    Admin,
    BackEnd,
    GameClient,
    GameServer,
    Partner,
    Custom,
    API
};

enum class PlayFabAdminStatisticAggregationMethod : uint32_t
{
    Last,
    Min,
    Max,
    Sum
};

enum class PlayFabAdminStatisticResetIntervalOption : uint32_t
{
    Never,
    Hour,
    Day,
    Week,
    Month
};

enum class PlayFabAdminStatisticVersionArchivalStatus : uint32_t
{
    NotScheduled,
    Scheduled,
    Queued,
    InProgress,
    Complete
};

enum class PlayFabAdminStatisticVersionStatus : uint32_t
{
    Active,
    SnapshotPending,
    Snapshot,
    ArchivalPending,
    Archived
};

enum class PlayFabAdminSubscriptionProviderStatus : uint32_t
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

enum class PlayFabAdminTaskInstanceStatus : uint32_t
{
    Succeeded,
    Starting,
    InProgress,
    Failed,
    Aborted,
    Stalled
};

enum class PlayFabAdminTitleActivationStatus : uint32_t
{
    None,
    ActivatedTitleKey,
    PendingSteam,
    ActivatedSteam,
    RevokedSteam
};

enum class PlayFabAdminUserDataPermission : uint32_t
{
    Private,
    Public
};

enum class PlayFabAdminUserOrigination : uint32_t
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


// Admin structs
typedef struct PlayFabAdminAbortTaskInstanceRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* taskInstanceId;
} PlayFabAdminAbortTaskInstanceRequest;

typedef struct PlayFabAdminActionsOnPlayersInSegmentTaskParameter
{
    const char* actionId;
    const char* segmentId;
} PlayFabAdminActionsOnPlayersInSegmentTaskParameter;

typedef struct PlayFabAdminNameIdentifier
{
    const char* id;
    const char* name;
} PlayFabAdminNameIdentifier;

typedef struct PlayFabAdminActionsOnPlayersInSegmentTaskSummary
{
    PF_OPTIONAL time_t* completedAt;
    const char* errorMessage;
    PF_OPTIONAL bool* errorWasFatal;
    PF_OPTIONAL double* estimatedSecondsRemaining;
    PF_OPTIONAL double* percentComplete;
    const char* scheduledByUserId;
    time_t startedAt;
    PF_OPTIONAL PlayFabAdminTaskInstanceStatus* status;
    PF_OPTIONAL PlayFabAdminNameIdentifier* taskIdentifier;
    const char* taskInstanceId;
    PF_OPTIONAL int32_t* totalPlayersInSegment;
    PF_OPTIONAL int32_t* totalPlayersProcessed;
} PlayFabAdminActionsOnPlayersInSegmentTaskSummary;

typedef struct PlayFabAdminAdCampaignAttribution
{
    time_t attributedAt;
    const char* campaignId;
    const char* platform;
} PlayFabAdminAdCampaignAttribution;

typedef struct PlayFabAdminAdCampaignAttributionModel
{
    time_t attributedAt;
    const char* campaignId;
    const char* platform;
} PlayFabAdminAdCampaignAttributionModel;

typedef struct PlayFabAdminAdCampaignSegmentFilter
{
    const char* campaignId;
    const char* campaignSource;
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
} PlayFabAdminAdCampaignSegmentFilter;

typedef struct PlayFabAdminAddLocalizedNewsRequest
{
    const char* body;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* language;
    const char* newsId;
    const char* title;
} PlayFabAdminAddLocalizedNewsRequest;

typedef struct PlayFabAdminAddNewsRequest
{
    const char* body;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL time_t* timestamp;
    const char* title;
} PlayFabAdminAddNewsRequest;

typedef struct PlayFabAdminAddNewsResult
{
    const char* newsId;
} PlayFabAdminAddNewsResult;

typedef struct PlayFabAdminAddPlayerTagRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* tagName;
} PlayFabAdminAddPlayerTagRequest;

typedef struct PlayFabAdminAddServerBuildRequest
{
    PF_ARRAY PlayFabAdminRegion* activeRegions;
    PF_COLLECTION_COUNT uint32_t activeRegionsCount;
    const char* buildId;
    const char* commandLineTemplate;
    const char* comment;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* executablePath;
    int32_t maxGamesPerHost;
    int32_t minFreeGameSlots;
} PlayFabAdminAddServerBuildRequest;

typedef struct PlayFabAdminAddServerBuildResult
{
    PF_ARRAY PlayFabAdminRegion* activeRegions;
    PF_COLLECTION_COUNT uint32_t activeRegionsCount;
    const char* buildId;
    const char* commandLineTemplate;
    const char* comment;
    const char* executablePath;
    int32_t maxGamesPerHost;
    int32_t minFreeGameSlots;
    PF_OPTIONAL PlayFabAdminGameBuildStatus* status;
    time_t timestamp;
    const char* titleId;
} PlayFabAdminAddServerBuildResult;

typedef struct PlayFabAdminAddUserVirtualCurrencyRequest
{
    int32_t amount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* virtualCurrency;
} PlayFabAdminAddUserVirtualCurrencyRequest;

typedef struct PlayFabAdminVirtualCurrencyData
{
    const char* currencyCode;
    const char* displayName;
    PF_OPTIONAL int32_t* initialDeposit;
    PF_OPTIONAL int32_t* rechargeMax;
    PF_OPTIONAL int32_t* rechargeRate;
} PlayFabAdminVirtualCurrencyData;

typedef struct PlayFabAdminAddVirtualCurrencyTypesRequest
{
    PF_ARRAY PlayFabAdminVirtualCurrencyData** virtualCurrencies;
    PF_COLLECTION_COUNT uint32_t virtualCurrenciesCount;
} PlayFabAdminAddVirtualCurrencyTypesRequest;

typedef struct PlayFabAdminApiCondition
{
    PF_OPTIONAL PlayFabAdminConditionals* hasSignatureOrEncryption;
} PlayFabAdminApiCondition;

typedef struct PlayFabAdminBanInfo
{
    bool active;
    const char* banId;
    PF_OPTIONAL time_t* created;
    PF_OPTIONAL time_t* expires;
    const char* iPAddress;
    const char* mACAddress;
    const char* playFabId;
    const char* reason;
} PlayFabAdminBanInfo;

typedef struct PlayFabAdminBanPlayerSegmentAction
{
    PF_OPTIONAL uint32_t* banHours;
    const char* reasonForBan;
} PlayFabAdminBanPlayerSegmentAction;

typedef struct PlayFabAdminBanRequest
{
    PF_OPTIONAL uint32_t* durationInHours;
    const char* iPAddress;
    const char* mACAddress;
    const char* playFabId;
    const char* reason;
} PlayFabAdminBanRequest;

typedef struct PlayFabAdminBanUsersRequest
{
    PF_ARRAY PlayFabAdminBanRequest** bans;
    PF_COLLECTION_COUNT uint32_t bansCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabAdminBanUsersRequest;

typedef struct PlayFabAdminBanUsersResult
{
    PF_ARRAY PlayFabAdminBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;
} PlayFabAdminBanUsersResult;

typedef struct PlayFabAdminCatalogItemBundleInfo
{
    PF_ARRAY const char** bundledItems;
    PF_COLLECTION_COUNT uint32_t bundledItemsCount;
    PF_ARRAY const char** bundledResultTables;
    PF_COLLECTION_COUNT uint32_t bundledResultTablesCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* bundledVirtualCurrencies;
    PF_COLLECTION_COUNT uint32_t bundledVirtualCurrenciesCount;
} PlayFabAdminCatalogItemBundleInfo;

typedef struct PlayFabAdminCatalogItemConsumableInfo
{
    PF_OPTIONAL uint32_t* usageCount;
    PF_OPTIONAL uint32_t* usagePeriod;
    const char* usagePeriodGroup;
} PlayFabAdminCatalogItemConsumableInfo;

typedef struct PlayFabAdminCatalogItemContainerInfo
{
    PF_ARRAY const char** itemContents;
    PF_COLLECTION_COUNT uint32_t itemContentsCount;
    const char* keyItemId;
    PF_ARRAY const char** resultTableContents;
    PF_COLLECTION_COUNT uint32_t resultTableContentsCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyContents;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyContentsCount;
} PlayFabAdminCatalogItemContainerInfo;

typedef struct PlayFabAdminCatalogItem
{
    PF_OPTIONAL PlayFabAdminCatalogItemBundleInfo* bundle;
    bool canBecomeCharacter;
    const char* catalogVersion;
    PF_OPTIONAL PlayFabAdminCatalogItemConsumableInfo* consumable;
    PF_OPTIONAL PlayFabAdminCatalogItemContainerInfo* container;
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
} PlayFabAdminCatalogItem;

typedef struct PlayFabAdminCheckLimitedEditionItemAvailabilityRequest
{
    const char* catalogVersion;
    const char* itemId;
} PlayFabAdminCheckLimitedEditionItemAvailabilityRequest;

typedef struct PlayFabAdminCheckLimitedEditionItemAvailabilityResult
{
    int32_t amount;
} PlayFabAdminCheckLimitedEditionItemAvailabilityResult;

typedef struct PlayFabAdminCloudScriptFile
{
    const char* fileContents;
    const char* filename;
} PlayFabAdminCloudScriptFile;

typedef struct PlayFabAdminCloudScriptTaskParameter
{
    PlayFabJsonObject argument;
    const char* functionName;
} PlayFabAdminCloudScriptTaskParameter;

typedef struct PlayFabAdminScriptExecutionError
{
    const char* error;
    const char* message;
    const char* stackTrace;
} PlayFabAdminScriptExecutionError;

typedef struct PlayFabAdminLogStatement
{
    PlayFabJsonObject data;
    const char* level;
    const char* message;
} PlayFabAdminLogStatement;

typedef struct PlayFabAdminExecuteCloudScriptResult
{
    int32_t aPIRequestsIssued;
    PF_OPTIONAL PlayFabAdminScriptExecutionError* error;
    double executionTimeSeconds;
    const char* functionName;
    PlayFabJsonObject functionResult;
    PF_OPTIONAL bool* functionResultTooLarge;
    int32_t httpRequestsIssued;
    PF_ARRAY PlayFabAdminLogStatement** logs;
    PF_COLLECTION_COUNT uint32_t logsCount;
    PF_OPTIONAL bool* logsTooLarge;
    uint32_t memoryConsumedBytes;
    double processorTimeSeconds;
    int32_t revision;
} PlayFabAdminExecuteCloudScriptResult;

typedef struct PlayFabAdminCloudScriptTaskSummary
{
    PF_OPTIONAL time_t* completedAt;
    PF_OPTIONAL double* estimatedSecondsRemaining;
    PF_OPTIONAL double* percentComplete;
    PF_OPTIONAL PlayFabAdminExecuteCloudScriptResult* result;
    const char* scheduledByUserId;
    time_t startedAt;
    PF_OPTIONAL PlayFabAdminTaskInstanceStatus* status;
    PF_OPTIONAL PlayFabAdminNameIdentifier* taskIdentifier;
    const char* taskInstanceId;
} PlayFabAdminCloudScriptTaskSummary;

typedef struct PlayFabAdminCloudScriptVersionStatus
{
    int32_t latestRevision;
    int32_t publishedRevision;
    int32_t version;
} PlayFabAdminCloudScriptVersionStatus;

typedef struct PlayFabAdminContactEmailInfo
{
    const char* emailAddress;
    const char* name;
    PF_OPTIONAL PlayFabAdminEmailVerificationStatus* verificationStatus;
} PlayFabAdminContactEmailInfo;

typedef struct PlayFabAdminContactEmailInfoModel
{
    const char* emailAddress;
    const char* name;
    PF_OPTIONAL PlayFabAdminEmailVerificationStatus* verificationStatus;
} PlayFabAdminContactEmailInfoModel;

typedef struct PlayFabAdminContentInfo
{
    const char* key;
    time_t lastModified;
    uint32_t size;
} PlayFabAdminContentInfo;

typedef struct PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    bool isActive;
    const char* name;
    PlayFabAdminActionsOnPlayersInSegmentTaskParameter* parameter;
    const char* schedule;
} PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest;

typedef struct PlayFabAdminCreateCloudScriptTaskRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    bool isActive;
    const char* name;
    PlayFabAdminCloudScriptTaskParameter* parameter;
    const char* schedule;
} PlayFabAdminCreateCloudScriptTaskRequest;

typedef struct PlayFabAdminInsightsScalingTaskParameter
{
    int32_t level;
} PlayFabAdminInsightsScalingTaskParameter;

typedef struct PlayFabAdminCreateInsightsScheduledScalingTaskRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    bool isActive;
    const char* name;
    PlayFabAdminInsightsScalingTaskParameter* parameter;
    const char* schedule;
} PlayFabAdminCreateInsightsScheduledScalingTaskRequest;

typedef struct PlayFabAdminOpenIdIssuerInformation
{
    const char* authorizationUrl;
    const char* issuer;
    PlayFabJsonObject jsonWebKeySet;
    const char* tokenUrl;
} PlayFabAdminOpenIdIssuerInformation;

typedef struct PlayFabAdminCreateOpenIdConnectionRequest
{
    const char* clientId;
    const char* clientSecret;
    const char* connectionId;
    PF_OPTIONAL bool* ignoreNonce;
    const char* issuerDiscoveryUrl;
    PF_OPTIONAL PlayFabAdminOpenIdIssuerInformation* issuerInformation;
} PlayFabAdminCreateOpenIdConnectionRequest;

typedef struct PlayFabAdminCreatePlayerSharedSecretRequest
{
    const char* friendlyName;
} PlayFabAdminCreatePlayerSharedSecretRequest;

typedef struct PlayFabAdminCreatePlayerSharedSecretResult
{
    const char* secretKey;
} PlayFabAdminCreatePlayerSharedSecretResult;

typedef struct PlayFabAdminCreatePlayerStatisticDefinitionRequest
{
    PF_OPTIONAL PlayFabAdminStatisticAggregationMethod* aggregationMethod;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* statisticName;
    PF_OPTIONAL PlayFabAdminStatisticResetIntervalOption* versionChangeInterval;
} PlayFabAdminCreatePlayerStatisticDefinitionRequest;

typedef struct PlayFabAdminPlayerStatisticDefinition
{
    PF_OPTIONAL PlayFabAdminStatisticAggregationMethod* aggregationMethod;
    uint32_t currentVersion;
    const char* statisticName;
    PF_OPTIONAL PlayFabAdminStatisticResetIntervalOption* versionChangeInterval;
} PlayFabAdminPlayerStatisticDefinition;

typedef struct PlayFabAdminCreatePlayerStatisticDefinitionResult
{
    PF_OPTIONAL PlayFabAdminPlayerStatisticDefinition* statistic;
} PlayFabAdminCreatePlayerStatisticDefinitionResult;

typedef struct PlayFabAdminDeletePlayerStatisticSegmentAction
{
    const char* statisticName;
} PlayFabAdminDeletePlayerStatisticSegmentAction;

typedef struct PlayFabAdminEmailNotificationSegmentAction
{
    const char* emailTemplateId;
    const char* emailTemplateName;
} PlayFabAdminEmailNotificationSegmentAction;

typedef struct PlayFabAdminExecuteAzureFunctionSegmentAction
{
    const char* azureFunction;
    PlayFabJsonObject functionParameter;
    bool generateFunctionExecutedEvents;
} PlayFabAdminExecuteAzureFunctionSegmentAction;

typedef struct PlayFabAdminExecuteCloudScriptSegmentAction
{
    const char* cloudScriptFunction;
    bool cloudScriptPublishResultsToPlayStream;
    PlayFabJsonObject functionParameter;
    const char* functionParameterJson;
} PlayFabAdminExecuteCloudScriptSegmentAction;

typedef struct PlayFabAdminGrantItemSegmentAction
{
    const char* catelogId;
    const char* itemId;
    uint32_t quantity;
} PlayFabAdminGrantItemSegmentAction;

typedef struct PlayFabAdminGrantVirtualCurrencySegmentAction
{
    int32_t amount;
    const char* currencyCode;
} PlayFabAdminGrantVirtualCurrencySegmentAction;

typedef struct PlayFabAdminIncrementPlayerStatisticSegmentAction
{
    int32_t incrementValue;
    const char* statisticName;
} PlayFabAdminIncrementPlayerStatisticSegmentAction;

typedef struct PlayFabAdminPushNotificationSegmentAction
{
    const char* pushNotificationTemplateId;
} PlayFabAdminPushNotificationSegmentAction;

typedef struct PlayFabAdminSegmentTrigger
{
    PF_OPTIONAL PlayFabAdminBanPlayerSegmentAction* banPlayerAction;
    PF_OPTIONAL PlayFabAdminDeletePlayerStatisticSegmentAction* deletePlayerStatisticAction;
    PF_OPTIONAL PlayFabAdminEmailNotificationSegmentAction* emailNotificationAction;
    PF_OPTIONAL PlayFabAdminExecuteAzureFunctionSegmentAction* executeAzureFunctionAction;
    PF_OPTIONAL PlayFabAdminExecuteCloudScriptSegmentAction* executeCloudScriptAction;
    PF_OPTIONAL PlayFabAdminGrantItemSegmentAction* grantItemAction;
    PF_OPTIONAL PlayFabAdminGrantVirtualCurrencySegmentAction* grantVirtualCurrencyAction;
    PF_OPTIONAL PlayFabAdminIncrementPlayerStatisticSegmentAction* incrementPlayerStatisticAction;
    PF_OPTIONAL PlayFabAdminPushNotificationSegmentAction* pushNotificationAction;
} PlayFabAdminSegmentTrigger;

typedef struct PlayFabAdminFirstLoginDateSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    time_t logInDate;
} PlayFabAdminFirstLoginDateSegmentFilter;

typedef struct PlayFabAdminFirstLoginTimespanSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    double durationInMinutes;
} PlayFabAdminFirstLoginTimespanSegmentFilter;

typedef struct PlayFabAdminLastLoginDateSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    time_t logInDate;
} PlayFabAdminLastLoginDateSegmentFilter;

typedef struct PlayFabAdminLastLoginTimespanSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    double durationInMinutes;
} PlayFabAdminLastLoginTimespanSegmentFilter;

typedef struct PlayFabAdminLinkedUserAccountSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentLoginIdentityProvider* loginProvider;
} PlayFabAdminLinkedUserAccountSegmentFilter;

typedef struct PlayFabAdminLinkedUserAccountHasEmailSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    PF_OPTIONAL PlayFabAdminSegmentLoginIdentityProvider* loginProvider;
} PlayFabAdminLinkedUserAccountHasEmailSegmentFilter;

typedef struct PlayFabAdminLocationSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentCountryCode* countryCode;
} PlayFabAdminLocationSegmentFilter;

typedef struct PlayFabAdminPushNotificationSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentPushNotificationDevicePlatform* pushNotificationDevicePlatform;
} PlayFabAdminPushNotificationSegmentFilter;

typedef struct PlayFabAdminStatisticSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    const char* filterValue;
    const char* name;
    PF_OPTIONAL bool* useCurrentVersion;
    PF_OPTIONAL int32_t* version;
} PlayFabAdminStatisticSegmentFilter;

typedef struct PlayFabAdminTagSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    const char* tagValue;
} PlayFabAdminTagSegmentFilter;

typedef struct PlayFabAdminTotalValueToDateInUSDSegmentFilter
{
    const char* amount;
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
} PlayFabAdminTotalValueToDateInUSDSegmentFilter;

typedef struct PlayFabAdminUserOriginationSegmentFilter
{
    PF_OPTIONAL PlayFabAdminSegmentLoginIdentityProvider* loginProvider;
} PlayFabAdminUserOriginationSegmentFilter;

typedef struct PlayFabAdminValueToDateSegmentFilter
{
    const char* amount;
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    PF_OPTIONAL PlayFabAdminSegmentCurrency* currency;
} PlayFabAdminValueToDateSegmentFilter;

typedef struct PlayFabAdminVirtualCurrencyBalanceSegmentFilter
{
    int32_t amount;
    PF_OPTIONAL PlayFabAdminSegmentFilterComparison* comparison;
    const char* currencyCode;
} PlayFabAdminVirtualCurrencyBalanceSegmentFilter;

typedef struct PlayFabAdminSegmentAndDefinition
{
    PF_OPTIONAL PlayFabAdminAdCampaignSegmentFilter* adCampaignFilter;
    PF_OPTIONAL PlayFabAdminFirstLoginDateSegmentFilter* firstLoginDateFilter;
    PF_OPTIONAL PlayFabAdminFirstLoginTimespanSegmentFilter* firstLoginFilter;
    PF_OPTIONAL PlayFabAdminLastLoginDateSegmentFilter* lastLoginDateFilter;
    PF_OPTIONAL PlayFabAdminLastLoginTimespanSegmentFilter* lastLoginFilter;
    PF_OPTIONAL PlayFabAdminLinkedUserAccountSegmentFilter* linkedUserAccountFilter;
    PF_OPTIONAL PlayFabAdminLinkedUserAccountHasEmailSegmentFilter* linkedUserAccountHasEmailFilter;
    PF_OPTIONAL PlayFabAdminLocationSegmentFilter* locationFilter;
    PF_OPTIONAL PlayFabAdminPushNotificationSegmentFilter* pushNotificationFilter;
    PF_OPTIONAL PlayFabAdminStatisticSegmentFilter* statisticFilter;
    PF_OPTIONAL PlayFabAdminTagSegmentFilter* tagFilter;
    PF_OPTIONAL PlayFabAdminTotalValueToDateInUSDSegmentFilter* totalValueToDateInUSDFilter;
    PF_OPTIONAL PlayFabAdminUserOriginationSegmentFilter* userOriginationFilter;
    PF_OPTIONAL PlayFabAdminValueToDateSegmentFilter* valueToDateFilter;
    PF_OPTIONAL PlayFabAdminVirtualCurrencyBalanceSegmentFilter* virtualCurrencyBalanceFilter;
} PlayFabAdminSegmentAndDefinition;

typedef struct PlayFabAdminSegmentOrDefinition
{
    PF_ARRAY PlayFabAdminSegmentAndDefinition** segmentAndDefinitions;
    PF_COLLECTION_COUNT uint32_t segmentAndDefinitionsCount;
} PlayFabAdminSegmentOrDefinition;

typedef struct PlayFabAdminSegmentModel
{
    const char* description;
    PF_ARRAY PlayFabAdminSegmentTrigger** enteredSegmentActions;
    PF_COLLECTION_COUNT uint32_t enteredSegmentActionsCount;
    time_t lastUpdateTime;
    PF_ARRAY PlayFabAdminSegmentTrigger** leftSegmentActions;
    PF_COLLECTION_COUNT uint32_t leftSegmentActionsCount;
    const char* name;
    const char* segmentId;
    PF_ARRAY PlayFabAdminSegmentOrDefinition** segmentOrDefinitions;
    PF_COLLECTION_COUNT uint32_t segmentOrDefinitionsCount;
} PlayFabAdminSegmentModel;

typedef struct PlayFabAdminCreateSegmentRequest
{
    PlayFabAdminSegmentModel* segmentModel;
} PlayFabAdminCreateSegmentRequest;

typedef struct PlayFabAdminCreateSegmentResponse
{
    const char* errorMessage;
    const char* segmentId;
} PlayFabAdminCreateSegmentResponse;

typedef struct PlayFabAdminCreateTaskResult
{
    const char* taskId;
} PlayFabAdminCreateTaskResult;

typedef struct PlayFabAdminDeleteContentRequest
{
    const char* key;
} PlayFabAdminDeleteContentRequest;

typedef struct PlayFabAdminDeleteMasterPlayerAccountRequest
{
    const char* metaData;
    const char* playFabId;
} PlayFabAdminDeleteMasterPlayerAccountRequest;

typedef struct PlayFabAdminDeleteMasterPlayerAccountResult
{
    const char* jobReceiptId;
    PF_ARRAY const char** titleIds;
    PF_COLLECTION_COUNT uint32_t titleIdsCount;
} PlayFabAdminDeleteMasterPlayerAccountResult;

typedef struct PlayFabAdminDeleteOpenIdConnectionRequest
{
    const char* connectionId;
} PlayFabAdminDeleteOpenIdConnectionRequest;

typedef struct PlayFabAdminDeletePlayerRequest
{
    const char* playFabId;
} PlayFabAdminDeletePlayerRequest;

typedef struct PlayFabAdminDeletePlayerSharedSecretRequest
{
    const char* secretKey;
} PlayFabAdminDeletePlayerSharedSecretRequest;

typedef struct PlayFabAdminDeleteSegmentRequest
{
    const char* segmentId;
} PlayFabAdminDeleteSegmentRequest;

typedef struct PlayFabAdminDeleteSegmentsResponse
{
    const char* errorMessage;
} PlayFabAdminDeleteSegmentsResponse;

typedef struct PlayFabAdminDeleteStoreRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* storeId;
} PlayFabAdminDeleteStoreRequest;

typedef struct PlayFabAdminDeleteTaskRequest
{
    PF_OPTIONAL PlayFabAdminNameIdentifier* identifier;
} PlayFabAdminDeleteTaskRequest;

typedef struct PlayFabAdminDeleteTitleDataOverrideRequest
{
    const char* overrideLabel;
} PlayFabAdminDeleteTitleDataOverrideRequest;

typedef struct PlayFabAdminEntityKey
{
    const char* id;
    const char* type;
} PlayFabAdminEntityKey;

typedef struct PlayFabAdminExportMasterPlayerDataRequest
{
    const char* playFabId;
} PlayFabAdminExportMasterPlayerDataRequest;

typedef struct PlayFabAdminExportMasterPlayerDataResult
{
    const char* jobReceiptId;
} PlayFabAdminExportMasterPlayerDataResult;

typedef struct PlayFabAdminGameModeInfo
{
    const char* gamemode;
    uint32_t maxPlayerCount;
    uint32_t minPlayerCount;
    PF_OPTIONAL bool* startOpen;
} PlayFabAdminGameModeInfo;

typedef struct PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult
{
    PF_OPTIONAL PlayFabAdminActionsOnPlayersInSegmentTaskParameter* parameter;
    PF_OPTIONAL PlayFabAdminActionsOnPlayersInSegmentTaskSummary* summary;
} PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult;

typedef struct PlayFabAdminGetSegmentResult
{
    const char* aBTestParent;
    const char* id;
    const char* name;
} PlayFabAdminGetSegmentResult;

typedef struct PlayFabAdminGetAllSegmentsResult
{
    PF_ARRAY PlayFabAdminGetSegmentResult** segments;
    PF_COLLECTION_COUNT uint32_t segmentsCount;
} PlayFabAdminGetAllSegmentsResult;

typedef struct PlayFabAdminGetCatalogItemsRequest
{
    const char* catalogVersion;
} PlayFabAdminGetCatalogItemsRequest;

typedef struct PlayFabAdminGetCatalogItemsResult
{
    PF_ARRAY PlayFabAdminCatalogItem** catalog;
    PF_COLLECTION_COUNT uint32_t catalogCount;
} PlayFabAdminGetCatalogItemsResult;

typedef struct PlayFabAdminGetCloudScriptRevisionRequest
{
    PF_OPTIONAL int32_t* revision;
    PF_OPTIONAL int32_t* version;
} PlayFabAdminGetCloudScriptRevisionRequest;

typedef struct PlayFabAdminGetCloudScriptRevisionResult
{
    time_t createdAt;
    PF_ARRAY PlayFabAdminCloudScriptFile** files;
    PF_COLLECTION_COUNT uint32_t filesCount;
    bool isPublished;
    int32_t revision;
    int32_t version;
} PlayFabAdminGetCloudScriptRevisionResult;

typedef struct PlayFabAdminGetCloudScriptTaskInstanceResult
{
    PF_OPTIONAL PlayFabAdminCloudScriptTaskParameter* parameter;
    PF_OPTIONAL PlayFabAdminCloudScriptTaskSummary* summary;
} PlayFabAdminGetCloudScriptTaskInstanceResult;

typedef struct PlayFabAdminGetCloudScriptVersionsResult
{
    PF_ARRAY PlayFabAdminCloudScriptVersionStatus** versions;
    PF_COLLECTION_COUNT uint32_t versionsCount;
} PlayFabAdminGetCloudScriptVersionsResult;

typedef struct PlayFabAdminGetContentListRequest
{
    const char* prefix;
} PlayFabAdminGetContentListRequest;

typedef struct PlayFabAdminGetContentListResult
{
    PF_ARRAY PlayFabAdminContentInfo** contents;
    PF_COLLECTION_COUNT uint32_t contentsCount;
    int32_t itemCount;
    uint32_t totalSize;
} PlayFabAdminGetContentListResult;

typedef struct PlayFabAdminGetContentUploadUrlRequest
{
    const char* contentType;
    const char* key;
} PlayFabAdminGetContentUploadUrlRequest;

typedef struct PlayFabAdminGetContentUploadUrlResult
{
    const char* uRL;
} PlayFabAdminGetContentUploadUrlResult;

typedef struct PlayFabAdminGetDataReportRequest
{
    int32_t day;
    int32_t month;
    const char* reportName;
    int32_t year;
} PlayFabAdminGetDataReportRequest;

typedef struct PlayFabAdminGetDataReportResult
{
    const char* downloadUrl;
} PlayFabAdminGetDataReportResult;

typedef struct PlayFabAdminGetMatchmakerGameInfoRequest
{
    const char* lobbyId;
} PlayFabAdminGetMatchmakerGameInfoRequest;

typedef struct PlayFabAdminGetMatchmakerGameInfoResult
{
    const char* buildVersion;
    PF_OPTIONAL time_t* endTime;
    const char* lobbyId;
    const char* mode;
    PF_ARRAY const char** players;
    PF_COLLECTION_COUNT uint32_t playersCount;
    PF_OPTIONAL PlayFabAdminRegion* region;
    const char* serverIPV4Address;
    const char* serverIPV6Address;
    uint32_t serverPort;
    const char* serverPublicDNSName;
    time_t startTime;
    const char* titleId;
} PlayFabAdminGetMatchmakerGameInfoResult;

typedef struct PlayFabAdminGetMatchmakerGameModesRequest
{
    const char* buildVersion;
} PlayFabAdminGetMatchmakerGameModesRequest;

typedef struct PlayFabAdminGetMatchmakerGameModesResult
{
    PF_ARRAY PlayFabAdminGameModeInfo** gameModes;
    PF_COLLECTION_COUNT uint32_t gameModesCount;
} PlayFabAdminGetMatchmakerGameModesResult;

typedef struct PlayFabAdminGetPlayedTitleListRequest
{
    const char* playFabId;
} PlayFabAdminGetPlayedTitleListRequest;

typedef struct PlayFabAdminGetPlayedTitleListResult
{
    PF_ARRAY const char** titleIds;
    PF_COLLECTION_COUNT uint32_t titleIdsCount;
} PlayFabAdminGetPlayedTitleListResult;

typedef struct PlayFabAdminGetPlayerIdFromAuthTokenRequest
{
    const char* token;
    PlayFabAdminAuthTokenType tokenType;
} PlayFabAdminGetPlayerIdFromAuthTokenRequest;

typedef struct PlayFabAdminGetPlayerIdFromAuthTokenResult
{
    const char* playFabId;
} PlayFabAdminGetPlayerIdFromAuthTokenResult;

typedef struct PlayFabAdminPlayerProfileViewConstraints
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
} PlayFabAdminPlayerProfileViewConstraints;

typedef struct PlayFabAdminGetPlayerProfileRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabAdminPlayerProfileViewConstraints* profileConstraints;
} PlayFabAdminGetPlayerProfileRequest;

typedef struct PlayFabAdminLinkedPlatformAccountModel
{
    const char* email;
    PF_OPTIONAL PlayFabAdminLoginIdentityProvider* platform;
    const char* platformUserId;
    const char* username;
} PlayFabAdminLinkedPlatformAccountModel;

typedef struct PlayFabAdminLocationModel
{
    const char* city;
    PF_OPTIONAL PlayFabAdminContinentCode* continentCode;
    PF_OPTIONAL PlayFabAdminCountryCode* countryCode;
    PF_OPTIONAL double* latitude;
    PF_OPTIONAL double* longitude;
} PlayFabAdminLocationModel;

typedef struct PlayFabAdminSubscriptionModel
{
    time_t expiration;
    time_t initialSubscriptionTime;
    bool isActive;
    PF_OPTIONAL PlayFabAdminSubscriptionProviderStatus* status;
    const char* subscriptionId;
    const char* subscriptionItemId;
    const char* subscriptionProvider;
} PlayFabAdminSubscriptionModel;

typedef struct PlayFabAdminMembershipModel
{
    bool isActive;
    time_t membershipExpiration;
    const char* membershipId;
    PF_OPTIONAL time_t* overrideExpiration;
    PF_ARRAY PlayFabAdminSubscriptionModel** subscriptions;
    PF_COLLECTION_COUNT uint32_t subscriptionsCount;
} PlayFabAdminMembershipModel;

typedef struct PlayFabAdminPushNotificationRegistrationModel
{
    const char* notificationEndpointARN;
    PF_OPTIONAL PlayFabAdminPushNotificationPlatform* platform;
} PlayFabAdminPushNotificationRegistrationModel;

typedef struct PlayFabAdminStatisticModel
{
    const char* name;
    int32_t value;
    int32_t version;
} PlayFabAdminStatisticModel;

typedef struct PlayFabAdminTagModel
{
    const char* tagValue;
} PlayFabAdminTagModel;

typedef struct PlayFabAdminValueToDateModel
{
    const char* currency;
    uint32_t totalValue;
    const char* totalValueAsDecimal;
} PlayFabAdminValueToDateModel;

typedef struct PlayFabAdminPlayerProfileModel
{
    PF_ARRAY PlayFabAdminAdCampaignAttributionModel** adCampaignAttributions;
    PF_COLLECTION_COUNT uint32_t adCampaignAttributionsCount;
    const char* avatarUrl;
    PF_OPTIONAL time_t* bannedUntil;
    PF_ARRAY PlayFabAdminContactEmailInfoModel** contactEmailAddresses;
    PF_COLLECTION_COUNT uint32_t contactEmailAddressesCount;
    PF_OPTIONAL time_t* created;
    const char* displayName;
    PF_ARRAY const char** experimentVariants;
    PF_COLLECTION_COUNT uint32_t experimentVariantsCount;
    PF_OPTIONAL time_t* lastLogin;
    PF_ARRAY PlayFabAdminLinkedPlatformAccountModel** linkedAccounts;
    PF_COLLECTION_COUNT uint32_t linkedAccountsCount;
    PF_ARRAY PlayFabAdminLocationModel** locations;
    PF_COLLECTION_COUNT uint32_t locationsCount;
    PF_ARRAY PlayFabAdminMembershipModel** memberships;
    PF_COLLECTION_COUNT uint32_t membershipsCount;
    PF_OPTIONAL PlayFabAdminLoginIdentityProvider* origination;
    const char* playerId;
    const char* publisherId;
    PF_ARRAY PlayFabAdminPushNotificationRegistrationModel** pushNotificationRegistrations;
    PF_COLLECTION_COUNT uint32_t pushNotificationRegistrationsCount;
    PF_ARRAY PlayFabAdminStatisticModel** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
    PF_ARRAY PlayFabAdminTagModel** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    const char* titleId;
    PF_OPTIONAL uint32_t* totalValueToDateInUSD;
    PF_ARRAY PlayFabAdminValueToDateModel** valuesToDate;
    PF_COLLECTION_COUNT uint32_t valuesToDateCount;
} PlayFabAdminPlayerProfileModel;

typedef struct PlayFabAdminGetPlayerProfileResult
{
    PF_OPTIONAL PlayFabAdminPlayerProfileModel* playerProfile;
} PlayFabAdminGetPlayerProfileResult;

typedef struct PlayFabAdminGetPlayerSegmentsResult
{
    PF_ARRAY PlayFabAdminGetSegmentResult** segments;
    PF_COLLECTION_COUNT uint32_t segmentsCount;
} PlayFabAdminGetPlayerSegmentsResult;

typedef struct PlayFabAdminSharedSecret
{
    bool disabled;
    const char* friendlyName;
    const char* secretKey;
} PlayFabAdminSharedSecret;

typedef struct PlayFabAdminGetPlayerSharedSecretsResult
{
    PF_ARRAY PlayFabAdminSharedSecret** sharedSecrets;
    PF_COLLECTION_COUNT uint32_t sharedSecretsCount;
} PlayFabAdminGetPlayerSharedSecretsResult;

typedef struct PlayFabAdminGetPlayersInSegmentRequest
{
    const char* continuationToken;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL uint32_t* maxBatchSize;
    PF_OPTIONAL uint32_t* secondsToLive;
    const char* segmentId;
} PlayFabAdminGetPlayersInSegmentRequest;

typedef struct PlayFabAdminPlayerLinkedAccount
{
    const char* email;
    PF_OPTIONAL PlayFabAdminLoginIdentityProvider* platform;
    const char* platformUserId;
    const char* username;
} PlayFabAdminPlayerLinkedAccount;

typedef struct PlayFabAdminPlayerLocation
{
    const char* city;
    PlayFabAdminContinentCode continentCode;
    PlayFabAdminCountryCode countryCode;
    PF_OPTIONAL double* latitude;
    PF_OPTIONAL double* longitude;
} PlayFabAdminPlayerLocation;

typedef struct PlayFabAdminPlayerStatistic
{
    const char* id;
    const char* name;
    int32_t statisticValue;
    int32_t statisticVersion;
} PlayFabAdminPlayerStatistic;

typedef struct PlayFabAdminPushNotificationRegistration
{
    const char* notificationEndpointARN;
    PF_OPTIONAL PlayFabAdminPushNotificationPlatform* platform;
} PlayFabAdminPushNotificationRegistration;

typedef struct PlayFabAdminPlayerProfile
{
    PF_ARRAY PlayFabAdminAdCampaignAttribution** adCampaignAttributions;
    PF_COLLECTION_COUNT uint32_t adCampaignAttributionsCount;
    const char* avatarUrl;
    PF_OPTIONAL time_t* bannedUntil;
    PF_ARRAY PlayFabAdminContactEmailInfo** contactEmailAddresses;
    PF_COLLECTION_COUNT uint32_t contactEmailAddressesCount;
    PF_OPTIONAL time_t* created;
    const char* displayName;
    PF_OPTIONAL time_t* lastLogin;
    PF_ARRAY PlayFabAdminPlayerLinkedAccount** linkedAccounts;
    PF_COLLECTION_COUNT uint32_t linkedAccountsCount;
    PF_MAP struct PlayFabAdminPlayerLocationDictionaryEntry* locations;
    PF_COLLECTION_COUNT uint32_t locationsCount;
    PF_OPTIONAL PlayFabAdminLoginIdentityProvider* origination;
    PF_ARRAY const char** playerExperimentVariants;
    PF_COLLECTION_COUNT uint32_t playerExperimentVariantsCount;
    const char* playerId;
    PF_ARRAY PlayFabAdminPlayerStatistic** playerStatistics;
    PF_COLLECTION_COUNT uint32_t playerStatisticsCount;
    const char* publisherId;
    PF_ARRAY PlayFabAdminPushNotificationRegistration** pushNotificationRegistrations;
    PF_COLLECTION_COUNT uint32_t pushNotificationRegistrationsCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    const char* titleId;
    PF_OPTIONAL uint32_t* totalValueToDateInUSD;
    PF_MAP struct PlayFabUint32DictionaryEntry* valuesToDate;
    PF_COLLECTION_COUNT uint32_t valuesToDateCount;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrencyBalances;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyBalancesCount;
} PlayFabAdminPlayerProfile;

typedef struct PlayFabAdminGetPlayersInSegmentResult
{
    const char* continuationToken;
    PF_ARRAY PlayFabAdminPlayerProfile** playerProfiles;
    PF_COLLECTION_COUNT uint32_t playerProfilesCount;
    int32_t profilesInSegment;
} PlayFabAdminGetPlayersInSegmentResult;

typedef struct PlayFabAdminGetPlayersSegmentsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
} PlayFabAdminGetPlayersSegmentsRequest;

typedef struct PlayFabAdminGetPlayerStatisticDefinitionsResult
{
    PF_ARRAY PlayFabAdminPlayerStatisticDefinition** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
} PlayFabAdminGetPlayerStatisticDefinitionsResult;

typedef struct PlayFabAdminGetPlayerStatisticVersionsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* statisticName;
} PlayFabAdminGetPlayerStatisticVersionsRequest;

typedef struct PlayFabAdminPlayerStatisticVersion
{
    time_t activationTime;
    const char* archiveDownloadUrl;
    PF_OPTIONAL time_t* deactivationTime;
    PF_OPTIONAL time_t* scheduledActivationTime;
    PF_OPTIONAL time_t* scheduledDeactivationTime;
    const char* statisticName;
    PF_OPTIONAL PlayFabAdminStatisticVersionStatus* status;
    uint32_t version;
} PlayFabAdminPlayerStatisticVersion;

typedef struct PlayFabAdminGetPlayerStatisticVersionsResult
{
    PF_ARRAY PlayFabAdminPlayerStatisticVersion** statisticVersions;
    PF_COLLECTION_COUNT uint32_t statisticVersionsCount;
} PlayFabAdminGetPlayerStatisticVersionsResult;

typedef struct PlayFabAdminGetPlayerTagsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playfabNamespace;
    const char* playFabId;
} PlayFabAdminGetPlayerTagsRequest;

typedef struct PlayFabAdminGetPlayerTagsResult
{
    const char* playFabId;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
} PlayFabAdminGetPlayerTagsResult;

typedef struct PlayFabAdminGetPolicyRequest
{
    const char* policyName;
} PlayFabAdminGetPolicyRequest;

typedef struct PlayFabAdminPermissionStatement
{
    const char* action;
    PF_OPTIONAL PlayFabAdminApiCondition* apiConditions;
    const char* comment;
    PlayFabAdminEffectType effect;
    const char* principal;
    const char* resource;
} PlayFabAdminPermissionStatement;

typedef struct PlayFabAdminGetPolicyResponse
{
    const char* policyName;
    int32_t policyVersion;
    PF_ARRAY PlayFabAdminPermissionStatement** statements;
    PF_COLLECTION_COUNT uint32_t statementsCount;
} PlayFabAdminGetPolicyResponse;

typedef struct PlayFabAdminGetPublisherDataRequest
{
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
} PlayFabAdminGetPublisherDataRequest;

typedef struct PlayFabAdminGetPublisherDataResult
{
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabAdminGetPublisherDataResult;

typedef struct PlayFabAdminGetRandomResultTablesRequest
{
    const char* catalogVersion;
} PlayFabAdminGetRandomResultTablesRequest;

typedef struct PlayFabAdminResultTableNode
{
    const char* resultItem;
    PlayFabAdminResultTableNodeType resultItemType;
    int32_t weight;
} PlayFabAdminResultTableNode;

typedef struct PlayFabAdminRandomResultTableListing
{
    const char* catalogVersion;
    PF_ARRAY PlayFabAdminResultTableNode** nodes;
    PF_COLLECTION_COUNT uint32_t nodesCount;
    const char* tableId;
} PlayFabAdminRandomResultTableListing;

typedef struct PlayFabAdminGetRandomResultTablesResult
{
    PF_MAP struct PlayFabAdminRandomResultTableListingDictionaryEntry* tables;
    PF_COLLECTION_COUNT uint32_t tablesCount;
} PlayFabAdminGetRandomResultTablesResult;

typedef struct PlayFabAdminGetSegmentsRequest
{
    PF_ARRAY const char** segmentIds;
    PF_COLLECTION_COUNT uint32_t segmentIdsCount;
} PlayFabAdminGetSegmentsRequest;

typedef struct PlayFabAdminGetSegmentsResponse
{
    const char* errorMessage;
    PF_ARRAY PlayFabAdminSegmentModel** segments;
    PF_COLLECTION_COUNT uint32_t segmentsCount;
} PlayFabAdminGetSegmentsResponse;

typedef struct PlayFabAdminGetServerBuildInfoRequest
{
    const char* buildId;
} PlayFabAdminGetServerBuildInfoRequest;

typedef struct PlayFabAdminGetServerBuildInfoResult
{
    PF_ARRAY PlayFabAdminRegion* activeRegions;
    PF_COLLECTION_COUNT uint32_t activeRegionsCount;
    const char* buildId;
    const char* comment;
    const char* errorMessage;
    int32_t maxGamesPerHost;
    int32_t minFreeGameSlots;
    PF_OPTIONAL PlayFabAdminGameBuildStatus* status;
    time_t timestamp;
    const char* titleId;
} PlayFabAdminGetServerBuildInfoResult;

typedef struct PlayFabAdminGetServerBuildUploadURLRequest
{
    const char* buildId;
} PlayFabAdminGetServerBuildUploadURLRequest;

typedef struct PlayFabAdminGetServerBuildUploadURLResult
{
    const char* uRL;
} PlayFabAdminGetServerBuildUploadURLResult;

typedef struct PlayFabAdminGetStoreItemsRequest
{
    const char* catalogVersion;
    const char* storeId;
} PlayFabAdminGetStoreItemsRequest;

typedef struct PlayFabAdminStoreMarketingModel
{
    const char* description;
    const char* displayName;
    PlayFabJsonObject metadata;
} PlayFabAdminStoreMarketingModel;

typedef struct PlayFabAdminStoreItem
{
    PlayFabJsonObject customData;
    PF_OPTIONAL uint32_t* displayPosition;
    const char* itemId;
    PF_MAP struct PlayFabUint32DictionaryEntry* realCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t realCurrencyPricesCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyPricesCount;
} PlayFabAdminStoreItem;

typedef struct PlayFabAdminGetStoreItemsResult
{
    const char* catalogVersion;
    PF_OPTIONAL PlayFabAdminStoreMarketingModel* marketingData;
    PF_OPTIONAL PlayFabAdminSourceType* source;
    PF_ARRAY PlayFabAdminStoreItem** store;
    PF_COLLECTION_COUNT uint32_t storeCount;
    const char* storeId;
} PlayFabAdminGetStoreItemsResult;

typedef struct PlayFabAdminGetTaskInstanceRequest
{
    const char* taskInstanceId;
} PlayFabAdminGetTaskInstanceRequest;

typedef struct PlayFabAdminGetTaskInstancesRequest
{
    PF_OPTIONAL time_t* startedAtRangeFrom;
    PF_OPTIONAL time_t* startedAtRangeTo;
    PF_OPTIONAL PlayFabAdminTaskInstanceStatus* statusFilter;
    PF_OPTIONAL PlayFabAdminNameIdentifier* taskIdentifier;
} PlayFabAdminGetTaskInstancesRequest;

typedef struct PlayFabAdminTaskInstanceBasicSummary
{
    PF_OPTIONAL time_t* completedAt;
    const char* errorMessage;
    PF_OPTIONAL double* estimatedSecondsRemaining;
    PF_OPTIONAL double* percentComplete;
    const char* scheduledByUserId;
    time_t startedAt;
    PF_OPTIONAL PlayFabAdminTaskInstanceStatus* status;
    PF_OPTIONAL PlayFabAdminNameIdentifier* taskIdentifier;
    const char* taskInstanceId;
    PF_OPTIONAL PlayFabAdminScheduledTaskType* type;
} PlayFabAdminTaskInstanceBasicSummary;

typedef struct PlayFabAdminGetTaskInstancesResult
{
    PF_ARRAY PlayFabAdminTaskInstanceBasicSummary** summaries;
    PF_COLLECTION_COUNT uint32_t summariesCount;
} PlayFabAdminGetTaskInstancesResult;

typedef struct PlayFabAdminGetTasksRequest
{
    PF_OPTIONAL PlayFabAdminNameIdentifier* identifier;
} PlayFabAdminGetTasksRequest;

typedef struct PlayFabAdminScheduledTask
{
    const char* description;
    bool isActive;
    PF_OPTIONAL time_t* lastRunTime;
    const char* name;
    PF_OPTIONAL time_t* nextRunTime;
    PlayFabJsonObject parameter;
    const char* schedule;
    const char* taskId;
    PF_OPTIONAL PlayFabAdminScheduledTaskType* type;
} PlayFabAdminScheduledTask;

typedef struct PlayFabAdminGetTasksResult
{
    PF_ARRAY PlayFabAdminScheduledTask** tasks;
    PF_COLLECTION_COUNT uint32_t tasksCount;
} PlayFabAdminGetTasksResult;

typedef struct PlayFabAdminGetTitleDataRequest
{
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* overrideLabel;
} PlayFabAdminGetTitleDataRequest;

typedef struct PlayFabAdminGetTitleDataResult
{
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
} PlayFabAdminGetTitleDataResult;

typedef struct PlayFabAdminGetUserBansRequest
{
    const char* playFabId;
} PlayFabAdminGetUserBansRequest;

typedef struct PlayFabAdminGetUserBansResult
{
    PF_ARRAY PlayFabAdminBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;
} PlayFabAdminGetUserBansResult;

typedef struct PlayFabAdminGetUserDataRequest
{
    PF_OPTIONAL uint32_t* ifChangedFromDataVersion;
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* playFabId;
} PlayFabAdminGetUserDataRequest;

typedef struct PlayFabAdminUserDataRecord
{
    time_t lastUpdated;
    PF_OPTIONAL PlayFabAdminUserDataPermission* permission;
    const char* value;
} PlayFabAdminUserDataRecord;

typedef struct PlayFabAdminGetUserDataResult
{
    PF_MAP struct PlayFabAdminUserDataRecordDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    uint32_t dataVersion;
    const char* playFabId;
} PlayFabAdminGetUserDataResult;

typedef struct PlayFabAdminGetUserInventoryRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
} PlayFabAdminGetUserInventoryRequest;

typedef struct PlayFabAdminItemInstance
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
} PlayFabAdminItemInstance;

typedef struct PlayFabAdminVirtualCurrencyRechargeTime
{
    int32_t rechargeMax;
    time_t rechargeTime;
    int32_t secondsToRecharge;
} PlayFabAdminVirtualCurrencyRechargeTime;

typedef struct PlayFabAdminGetUserInventoryResult
{
    PF_ARRAY PlayFabAdminItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;
    const char* playFabId;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
    PF_MAP struct PlayFabAdminVirtualCurrencyRechargeTimeDictionaryEntry* virtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyRechargeTimesCount;
} PlayFabAdminGetUserInventoryResult;

typedef struct PlayFabAdminGrantedItemInstance
{
    const char* annotation;
    PF_ARRAY const char** bundleContents;
    PF_COLLECTION_COUNT uint32_t bundleContentsCount;
    const char* bundleParent;
    const char* catalogVersion;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customData;
    PF_COLLECTION_COUNT uint32_t customDataCount;
    const char* displayName;
    PF_OPTIONAL time_t* expiration;
    const char* itemClass;
    const char* itemId;
    const char* itemInstanceId;
    const char* playFabId;
    PF_OPTIONAL time_t* purchaseDate;
    PF_OPTIONAL int32_t* remainingUses;
    bool result;
    const char* unitCurrency;
    uint32_t unitPrice;
    PF_OPTIONAL int32_t* usesIncrementedBy;
} PlayFabAdminGrantedItemInstance;

typedef struct PlayFabAdminItemGrant
{
    const char* annotation;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    const char* itemId;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    const char* playFabId;
} PlayFabAdminItemGrant;

typedef struct PlayFabAdminGrantItemsToUsersRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabAdminItemGrant** itemGrants;
    PF_COLLECTION_COUNT uint32_t itemGrantsCount;
} PlayFabAdminGrantItemsToUsersRequest;

typedef struct PlayFabAdminGrantItemsToUsersResult
{
    PF_ARRAY PlayFabAdminGrantedItemInstance** itemGrantResults;
    PF_COLLECTION_COUNT uint32_t itemGrantResultsCount;
} PlayFabAdminGrantItemsToUsersResult;

typedef struct PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest
{
    int32_t amount;
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* itemId;
} PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest;

typedef struct PlayFabAdminIncrementPlayerStatisticVersionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* statisticName;
} PlayFabAdminIncrementPlayerStatisticVersionRequest;

typedef struct PlayFabAdminIncrementPlayerStatisticVersionResult
{
    PF_OPTIONAL PlayFabAdminPlayerStatisticVersion* statisticVersion;
} PlayFabAdminIncrementPlayerStatisticVersionResult;

typedef struct PlayFabAdminListBuildsResult
{
    PF_ARRAY PlayFabAdminGetServerBuildInfoResult** builds;
    PF_COLLECTION_COUNT uint32_t buildsCount;
} PlayFabAdminListBuildsResult;

typedef struct PlayFabAdminOpenIdConnection
{
    const char* clientId;
    const char* clientSecret;
    const char* connectionId;
    bool discoverConfiguration;
    PF_OPTIONAL PlayFabAdminOpenIdIssuerInformation* issuerInformation;
} PlayFabAdminOpenIdConnection;

typedef struct PlayFabAdminListOpenIdConnectionResponse
{
    PF_ARRAY PlayFabAdminOpenIdConnection** connections;
    PF_COLLECTION_COUNT uint32_t connectionsCount;
} PlayFabAdminListOpenIdConnectionResponse;

typedef struct PlayFabAdminListVirtualCurrencyTypesResult
{
    PF_ARRAY PlayFabAdminVirtualCurrencyData** virtualCurrencies;
    PF_COLLECTION_COUNT uint32_t virtualCurrenciesCount;
} PlayFabAdminListVirtualCurrencyTypesResult;

typedef struct PlayFabAdminLookupUserAccountInfoRequest
{
    const char* email;
    const char* playFabId;
    const char* titleDisplayName;
    const char* username;
} PlayFabAdminLookupUserAccountInfoRequest;

typedef struct PlayFabAdminUserAndroidDeviceInfo
{
    const char* androidDeviceId;
} PlayFabAdminUserAndroidDeviceInfo;

typedef struct PlayFabAdminUserAppleIdInfo
{
    const char* appleSubjectId;
} PlayFabAdminUserAppleIdInfo;

typedef struct PlayFabAdminUserCustomIdInfo
{
    const char* customId;
} PlayFabAdminUserCustomIdInfo;

typedef struct PlayFabAdminUserFacebookInfo
{
    const char* facebookId;
    const char* fullName;
} PlayFabAdminUserFacebookInfo;

typedef struct PlayFabAdminUserFacebookInstantGamesIdInfo
{
    const char* facebookInstantGamesId;
} PlayFabAdminUserFacebookInstantGamesIdInfo;

typedef struct PlayFabAdminUserGameCenterInfo
{
    const char* gameCenterId;
} PlayFabAdminUserGameCenterInfo;

typedef struct PlayFabAdminUserGoogleInfo
{
    const char* googleEmail;
    const char* googleGender;
    const char* googleId;
    const char* googleLocale;
    const char* googleName;
} PlayFabAdminUserGoogleInfo;

typedef struct PlayFabAdminUserIosDeviceInfo
{
    const char* iosDeviceId;
} PlayFabAdminUserIosDeviceInfo;

typedef struct PlayFabAdminUserKongregateInfo
{
    const char* kongregateId;
    const char* kongregateName;
} PlayFabAdminUserKongregateInfo;

typedef struct PlayFabAdminUserNintendoSwitchAccountIdInfo
{
    const char* nintendoSwitchAccountSubjectId;
} PlayFabAdminUserNintendoSwitchAccountIdInfo;

typedef struct PlayFabAdminUserNintendoSwitchDeviceIdInfo
{
    const char* nintendoSwitchDeviceId;
} PlayFabAdminUserNintendoSwitchDeviceIdInfo;

typedef struct PlayFabAdminUserOpenIdInfo
{
    const char* connectionId;
    const char* issuer;
    const char* subject;
} PlayFabAdminUserOpenIdInfo;

typedef struct PlayFabAdminUserPrivateAccountInfo
{
    const char* email;
} PlayFabAdminUserPrivateAccountInfo;

typedef struct PlayFabAdminUserPsnInfo
{
    const char* psnAccountId;
    const char* psnOnlineId;
} PlayFabAdminUserPsnInfo;

typedef struct PlayFabAdminUserSteamInfo
{
    PF_OPTIONAL PlayFabAdminTitleActivationStatus* steamActivationStatus;
    const char* steamCountry;
    PF_OPTIONAL PlayFabAdminCurrency* steamCurrency;
    const char* steamId;
    const char* steamName;
} PlayFabAdminUserSteamInfo;

typedef struct PlayFabAdminUserTitleInfo
{
    const char* avatarUrl;
    time_t created;
    const char* displayName;
    PF_OPTIONAL time_t* firstLogin;
    PF_OPTIONAL bool* isBanned;
    PF_OPTIONAL time_t* lastLogin;
    PF_OPTIONAL PlayFabAdminUserOrigination* origination;
    PF_OPTIONAL PlayFabAdminEntityKey* titlePlayerAccount;
} PlayFabAdminUserTitleInfo;

typedef struct PlayFabAdminUserTwitchInfo
{
    const char* twitchId;
    const char* twitchUserName;
} PlayFabAdminUserTwitchInfo;

typedef struct PlayFabAdminUserWindowsHelloInfo
{
    const char* windowsHelloDeviceName;
    const char* windowsHelloPublicKeyHash;
} PlayFabAdminUserWindowsHelloInfo;

typedef struct PlayFabAdminUserXboxInfo
{
    const char* xboxUserId;
} PlayFabAdminUserXboxInfo;

typedef struct PlayFabAdminUserAccountInfo
{
    PF_OPTIONAL PlayFabAdminUserAndroidDeviceInfo* androidDeviceInfo;
    PF_OPTIONAL PlayFabAdminUserAppleIdInfo* appleAccountInfo;
    time_t created;
    PF_OPTIONAL PlayFabAdminUserCustomIdInfo* customIdInfo;
    PF_OPTIONAL PlayFabAdminUserFacebookInfo* facebookInfo;
    PF_OPTIONAL PlayFabAdminUserFacebookInstantGamesIdInfo* facebookInstantGamesIdInfo;
    PF_OPTIONAL PlayFabAdminUserGameCenterInfo* gameCenterInfo;
    PF_OPTIONAL PlayFabAdminUserGoogleInfo* googleInfo;
    PF_OPTIONAL PlayFabAdminUserIosDeviceInfo* iosDeviceInfo;
    PF_OPTIONAL PlayFabAdminUserKongregateInfo* kongregateInfo;
    PF_OPTIONAL PlayFabAdminUserNintendoSwitchAccountIdInfo* nintendoSwitchAccountInfo;
    PF_OPTIONAL PlayFabAdminUserNintendoSwitchDeviceIdInfo* nintendoSwitchDeviceIdInfo;
    PF_ARRAY PlayFabAdminUserOpenIdInfo** openIdInfo;
    PF_COLLECTION_COUNT uint32_t openIdInfoCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabAdminUserPrivateAccountInfo* privateInfo;
    PF_OPTIONAL PlayFabAdminUserPsnInfo* psnInfo;
    PF_OPTIONAL PlayFabAdminUserSteamInfo* steamInfo;
    PF_OPTIONAL PlayFabAdminUserTitleInfo* titleInfo;
    PF_OPTIONAL PlayFabAdminUserTwitchInfo* twitchInfo;
    const char* username;
    PF_OPTIONAL PlayFabAdminUserWindowsHelloInfo* windowsHelloInfo;
    PF_OPTIONAL PlayFabAdminUserXboxInfo* xboxInfo;
} PlayFabAdminUserAccountInfo;

typedef struct PlayFabAdminLookupUserAccountInfoResult
{
    PF_OPTIONAL PlayFabAdminUserAccountInfo* userInfo;
} PlayFabAdminLookupUserAccountInfoResult;

typedef struct PlayFabAdminModifyMatchmakerGameModesRequest
{
    const char* buildVersion;
    PF_ARRAY PlayFabAdminGameModeInfo** gameModes;
    PF_COLLECTION_COUNT uint32_t gameModesCount;
} PlayFabAdminModifyMatchmakerGameModesRequest;

typedef struct PlayFabAdminModifyServerBuildRequest
{
    PF_ARRAY PlayFabAdminRegion* activeRegions;
    PF_COLLECTION_COUNT uint32_t activeRegionsCount;
    const char* buildId;
    const char* commandLineTemplate;
    const char* comment;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* executablePath;
    int32_t maxGamesPerHost;
    int32_t minFreeGameSlots;
    PF_OPTIONAL time_t* timestamp;
} PlayFabAdminModifyServerBuildRequest;

typedef struct PlayFabAdminModifyServerBuildResult
{
    PF_ARRAY PlayFabAdminRegion* activeRegions;
    PF_COLLECTION_COUNT uint32_t activeRegionsCount;
    const char* buildId;
    const char* commandLineTemplate;
    const char* comment;
    const char* executablePath;
    int32_t maxGamesPerHost;
    int32_t minFreeGameSlots;
    PF_OPTIONAL PlayFabAdminGameBuildStatus* status;
    time_t timestamp;
    const char* titleId;
} PlayFabAdminModifyServerBuildResult;

typedef struct PlayFabAdminModifyUserVirtualCurrencyResult
{
    int32_t balance;
    int32_t balanceChange;
    const char* playFabId;
    const char* virtualCurrency;
} PlayFabAdminModifyUserVirtualCurrencyResult;

typedef struct PlayFabAdminRandomResultTable
{
    PF_ARRAY PlayFabAdminResultTableNode** nodes;
    PF_COLLECTION_COUNT uint32_t nodesCount;
    const char* tableId;
} PlayFabAdminRandomResultTable;

typedef struct PlayFabAdminRefundPurchaseRequest
{
    const char* orderId;
    const char* playFabId;
    const char* reason;
} PlayFabAdminRefundPurchaseRequest;

typedef struct PlayFabAdminRefundPurchaseResponse
{
    const char* purchaseStatus;
} PlayFabAdminRefundPurchaseResponse;

typedef struct PlayFabAdminRemovePlayerTagRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* tagName;
} PlayFabAdminRemovePlayerTagRequest;

typedef struct PlayFabAdminRemoveServerBuildRequest
{
    const char* buildId;
} PlayFabAdminRemoveServerBuildRequest;

typedef struct PlayFabAdminRemoveVirtualCurrencyTypesRequest
{
    PF_ARRAY PlayFabAdminVirtualCurrencyData** virtualCurrencies;
    PF_COLLECTION_COUNT uint32_t virtualCurrenciesCount;
} PlayFabAdminRemoveVirtualCurrencyTypesRequest;

typedef struct PlayFabAdminResetCharacterStatisticsRequest
{
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
} PlayFabAdminResetCharacterStatisticsRequest;

typedef struct PlayFabAdminResetPasswordRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* password;
    const char* token;
} PlayFabAdminResetPasswordRequest;

typedef struct PlayFabAdminResetUserStatisticsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
} PlayFabAdminResetUserStatisticsRequest;

typedef struct PlayFabAdminResolvePurchaseDisputeRequest
{
    const char* orderId;
    PlayFabAdminResolutionOutcome outcome;
    const char* playFabId;
    const char* reason;
} PlayFabAdminResolvePurchaseDisputeRequest;

typedef struct PlayFabAdminResolvePurchaseDisputeResponse
{
    const char* purchaseStatus;
} PlayFabAdminResolvePurchaseDisputeResponse;

typedef struct PlayFabAdminRevokeAllBansForUserRequest
{
    const char* playFabId;
} PlayFabAdminRevokeAllBansForUserRequest;

typedef struct PlayFabAdminRevokeAllBansForUserResult
{
    PF_ARRAY PlayFabAdminBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;
} PlayFabAdminRevokeAllBansForUserResult;

typedef struct PlayFabAdminRevokeBansRequest
{
    PF_ARRAY const char** banIds;
    PF_COLLECTION_COUNT uint32_t banIdsCount;
} PlayFabAdminRevokeBansRequest;

typedef struct PlayFabAdminRevokeBansResult
{
    PF_ARRAY PlayFabAdminBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;
} PlayFabAdminRevokeBansResult;

typedef struct PlayFabAdminRevokeInventoryItem
{
    const char* characterId;
    const char* itemInstanceId;
    const char* playFabId;
} PlayFabAdminRevokeInventoryItem;

typedef struct PlayFabAdminRevokeInventoryItemRequest
{
    const char* characterId;
    const char* itemInstanceId;
    const char* playFabId;
} PlayFabAdminRevokeInventoryItemRequest;

typedef struct PlayFabAdminRevokeInventoryItemsRequest
{
    PF_ARRAY PlayFabAdminRevokeInventoryItem** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;
} PlayFabAdminRevokeInventoryItemsRequest;

typedef struct PlayFabAdminRevokeItemError
{
    PF_OPTIONAL PlayFabAdminGenericErrorCodes* error;
    PF_OPTIONAL PlayFabAdminRevokeInventoryItem* item;
} PlayFabAdminRevokeItemError;

typedef struct PlayFabAdminRevokeInventoryItemsResult
{
    PF_ARRAY PlayFabAdminRevokeItemError** errors;
    PF_COLLECTION_COUNT uint32_t errorsCount;
} PlayFabAdminRevokeInventoryItemsResult;

typedef struct PlayFabAdminRunTaskRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabAdminNameIdentifier* identifier;
} PlayFabAdminRunTaskRequest;

typedef struct PlayFabAdminRunTaskResult
{
    const char* taskInstanceId;
} PlayFabAdminRunTaskResult;

typedef struct PlayFabAdminSendAccountRecoveryEmailRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* email;
    const char* emailTemplateId;
} PlayFabAdminSendAccountRecoveryEmailRequest;

typedef struct PlayFabAdminSetPlayerSecretRequest
{
    const char* playerSecret;
    const char* playFabId;
} PlayFabAdminSetPlayerSecretRequest;

typedef struct PlayFabAdminSetPublishedRevisionRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t revision;
    int32_t version;
} PlayFabAdminSetPublishedRevisionRequest;

typedef struct PlayFabAdminSetPublisherDataRequest
{
    const char* key;
    const char* value;
} PlayFabAdminSetPublisherDataRequest;

typedef struct PlayFabAdminTitleDataKeyValue
{
    const char* key;
    const char* value;
} PlayFabAdminTitleDataKeyValue;

typedef struct PlayFabAdminSetTitleDataAndOverridesRequest
{
    PF_ARRAY PlayFabAdminTitleDataKeyValue** keyValues;
    PF_COLLECTION_COUNT uint32_t keyValuesCount;
    const char* overrideLabel;
} PlayFabAdminSetTitleDataAndOverridesRequest;

typedef struct PlayFabAdminSetTitleDataRequest
{
    const char* key;
    const char* value;
} PlayFabAdminSetTitleDataRequest;

typedef struct PlayFabAdminSetupPushNotificationRequest
{
    const char* credential;
    const char* key;
    const char* name;
    bool overwriteOldARN;
    PlayFabAdminPushSetupPlatform platform;
} PlayFabAdminSetupPushNotificationRequest;

typedef struct PlayFabAdminSetupPushNotificationResult
{
    const char* aRN;
} PlayFabAdminSetupPushNotificationResult;

typedef struct PlayFabAdminSubtractUserVirtualCurrencyRequest
{
    int32_t amount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* virtualCurrency;
} PlayFabAdminSubtractUserVirtualCurrencyRequest;

typedef struct PlayFabAdminUpdateBanRequest
{
    PF_OPTIONAL bool* active;
    const char* banId;
    PF_OPTIONAL time_t* expires;
    const char* iPAddress;
    const char* mACAddress;
    PF_OPTIONAL bool* permanent;
    const char* reason;
} PlayFabAdminUpdateBanRequest;

typedef struct PlayFabAdminUpdateBansRequest
{
    PF_ARRAY PlayFabAdminUpdateBanRequest** bans;
    PF_COLLECTION_COUNT uint32_t bansCount;
} PlayFabAdminUpdateBansRequest;

typedef struct PlayFabAdminUpdateBansResult
{
    PF_ARRAY PlayFabAdminBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;
} PlayFabAdminUpdateBansResult;

typedef struct PlayFabAdminUpdateCatalogItemsRequest
{
    PF_ARRAY PlayFabAdminCatalogItem** catalog;
    PF_COLLECTION_COUNT uint32_t catalogCount;
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* setAsDefaultCatalog;
} PlayFabAdminUpdateCatalogItemsRequest;

typedef struct PlayFabAdminUpdateCloudScriptRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* developerPlayFabId;
    PF_ARRAY PlayFabAdminCloudScriptFile** files;
    PF_COLLECTION_COUNT uint32_t filesCount;
    bool publish;
} PlayFabAdminUpdateCloudScriptRequest;

typedef struct PlayFabAdminUpdateCloudScriptResult
{
    int32_t revision;
    int32_t version;
} PlayFabAdminUpdateCloudScriptResult;

typedef struct PlayFabAdminUpdateOpenIdConnectionRequest
{
    const char* clientId;
    const char* clientSecret;
    const char* connectionId;
    const char* issuerDiscoveryUrl;
    PF_OPTIONAL PlayFabAdminOpenIdIssuerInformation* issuerInformation;
} PlayFabAdminUpdateOpenIdConnectionRequest;

typedef struct PlayFabAdminUpdatePlayerSharedSecretRequest
{
    bool disabled;
    const char* friendlyName;
    const char* secretKey;
} PlayFabAdminUpdatePlayerSharedSecretRequest;

typedef struct PlayFabAdminUpdatePlayerStatisticDefinitionRequest
{
    PF_OPTIONAL PlayFabAdminStatisticAggregationMethod* aggregationMethod;
    const char* statisticName;
    PF_OPTIONAL PlayFabAdminStatisticResetIntervalOption* versionChangeInterval;
} PlayFabAdminUpdatePlayerStatisticDefinitionRequest;

typedef struct PlayFabAdminUpdatePlayerStatisticDefinitionResult
{
    PF_OPTIONAL PlayFabAdminPlayerStatisticDefinition* statistic;
} PlayFabAdminUpdatePlayerStatisticDefinitionResult;

typedef struct PlayFabAdminUpdatePolicyRequest
{
    bool overwritePolicy;
    const char* policyName;
    int32_t policyVersion;
    PF_ARRAY PlayFabAdminPermissionStatement** statements;
    PF_COLLECTION_COUNT uint32_t statementsCount;
} PlayFabAdminUpdatePolicyRequest;

typedef struct PlayFabAdminUpdatePolicyResponse
{
    const char* policyName;
    PF_ARRAY PlayFabAdminPermissionStatement** statements;
    PF_COLLECTION_COUNT uint32_t statementsCount;
} PlayFabAdminUpdatePolicyResponse;

typedef struct PlayFabAdminUpdateRandomResultTablesRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabAdminRandomResultTable** tables;
    PF_COLLECTION_COUNT uint32_t tablesCount;
} PlayFabAdminUpdateRandomResultTablesRequest;

typedef struct PlayFabAdminUpdateSegmentRequest
{
    PlayFabAdminSegmentModel* segmentModel;
} PlayFabAdminUpdateSegmentRequest;

typedef struct PlayFabAdminUpdateSegmentResponse
{
    const char* errorMessage;
    const char* segmentId;
} PlayFabAdminUpdateSegmentResponse;

typedef struct PlayFabAdminUpdateStoreItemsRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabAdminStoreMarketingModel* marketingData;
    PF_ARRAY PlayFabAdminStoreItem** store;
    PF_COLLECTION_COUNT uint32_t storeCount;
    const char* storeId;
} PlayFabAdminUpdateStoreItemsRequest;

typedef struct PlayFabAdminUpdateTaskRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* description;
    PF_OPTIONAL PlayFabAdminNameIdentifier* identifier;
    bool isActive;
    const char* name;
    PlayFabJsonObject parameter;
    const char* schedule;
    PlayFabAdminScheduledTaskType type;
} PlayFabAdminUpdateTaskRequest;

typedef struct PlayFabAdminUpdateUserDataRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    PF_OPTIONAL PlayFabAdminUserDataPermission* permission;
    const char* playFabId;
} PlayFabAdminUpdateUserDataRequest;

typedef struct PlayFabAdminUpdateUserDataResult
{
    uint32_t dataVersion;
} PlayFabAdminUpdateUserDataResult;

typedef struct PlayFabAdminUpdateUserInternalDataRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    const char* playFabId;
} PlayFabAdminUpdateUserInternalDataRequest;

typedef struct PlayFabAdminUpdateUserTitleDisplayNameRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* displayName;
    const char* playFabId;
} PlayFabAdminUpdateUserTitleDisplayNameRequest;

typedef struct PlayFabAdminUpdateUserTitleDisplayNameResult
{
    const char* displayName;
} PlayFabAdminUpdateUserTitleDisplayNameResult;


// Admin dictionary entry structs
typedef struct PlayFabAdminRandomResultTableListingDictionaryEntry
{
    const char* key;
    PlayFabAdminRandomResultTableListing* value;
} PlayFabAdminRandomResultTableListingDictionaryEntry;

typedef struct PlayFabAdminUserDataRecordDictionaryEntry
{
    const char* key;
    PlayFabAdminUserDataRecord* value;
} PlayFabAdminUserDataRecordDictionaryEntry;

typedef struct PlayFabAdminVirtualCurrencyRechargeTimeDictionaryEntry
{
    const char* key;
    PlayFabAdminVirtualCurrencyRechargeTime* value;
} PlayFabAdminVirtualCurrencyRechargeTimeDictionaryEntry;

typedef struct PlayFabAdminPlayerLocationDictionaryEntry
{
    const char* key;
    PlayFabAdminPlayerLocation* value;
} PlayFabAdminPlayerLocationDictionaryEntry;


#pragma pop_macro("IN")

}
