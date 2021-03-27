#pragma once

#include <playfab/PlayFabBaseModel_c.h>

#pragma push_macro("IN")
#undef IN

// Server enums
enum class PlayFabServerCloudScriptRevisionOption : uint32_t
{
    Live,
    Latest,
    Specific
};

enum class PlayFabServerContinentCode : uint32_t
{
    AF,
    AN,
    AS,
    EU,
    NA,
    OC,
    SA
};

enum class PlayFabServerCountryCode : uint32_t
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

enum class PlayFabServerCurrency : uint32_t
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

enum class PlayFabServerEmailVerificationStatus : uint32_t
{
    Unverified,
    Pending,
    Confirmed
};

enum class PlayFabServerGameInstanceState : uint32_t
{
    Open,
    Closed
};

enum class PlayFabServerGenericErrorCodes : uint32_t
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

enum class PlayFabServerLoginIdentityProvider : uint32_t
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

enum class PlayFabServerPlayerConnectionState : uint32_t
{
    Unassigned,
    Connecting,
    Participating,
    Participated
};

enum class PlayFabServerPushNotificationPlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

enum class PlayFabServerRegion : uint32_t
{
    USCentral,
    USEast,
    EUWest,
    Singapore,
    Japan,
    Brazil,
    Australia
};

enum class PlayFabServerResultTableNodeType : uint32_t
{
    ItemId,
    TableId
};

enum class PlayFabServerSourceType : uint32_t
{
    Admin,
    BackEnd,
    GameClient,
    GameServer,
    Partner,
    Custom,
    API
};

enum class PlayFabServerSubscriptionProviderStatus : uint32_t
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

enum class PlayFabServerTitleActivationStatus : uint32_t
{
    None,
    ActivatedTitleKey,
    PendingSteam,
    ActivatedSteam,
    RevokedSteam
};

enum class PlayFabServerUserDataPermission : uint32_t
{
    Private,
    Public
};

enum class PlayFabServerUserOrigination : uint32_t
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


// Server structs
typedef struct PlayFabServerAdCampaignAttribution
{
    time_t attributedAt;
    const char* campaignId;
    const char* platform;

} PlayFabServerAdCampaignAttribution;

typedef struct PlayFabServerAdCampaignAttributionModel
{
    time_t attributedAt;
    const char* campaignId;
    const char* platform;

} PlayFabServerAdCampaignAttributionModel;

typedef struct PlayFabServerAddCharacterVirtualCurrencyRequest
{
    int32_t amount;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* virtualCurrency;

} PlayFabServerAddCharacterVirtualCurrencyRequest;

typedef struct PlayFabServerAddFriendRequest
{
    const char* friendEmail;
    const char* friendPlayFabId;
    const char* friendTitleDisplayName;
    const char* friendUsername;
    const char* playFabId;

} PlayFabServerAddFriendRequest;

typedef struct PlayFabServerGenericServiceId
{
    const char* serviceName;
    const char* userId;

} PlayFabServerGenericServiceId;

typedef struct PlayFabServerAddGenericIDRequest
{
    PlayFabServerGenericServiceId* genericId;
    const char* playFabId;

} PlayFabServerAddGenericIDRequest;

typedef struct PlayFabServerAddPlayerTagRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* tagName;

} PlayFabServerAddPlayerTagRequest;

typedef struct PlayFabServerAddPlayerTagResult
{

} PlayFabServerAddPlayerTagResult;

typedef struct PlayFabServerAddSharedGroupMembersRequest
{
    PF_ARRAY const char** playFabIds;
    PF_COLLECTION_COUNT uint32_t playFabIdsCount;
    const char* sharedGroupId;

} PlayFabServerAddSharedGroupMembersRequest;

typedef struct PlayFabServerAddSharedGroupMembersResult
{

} PlayFabServerAddSharedGroupMembersResult;

typedef struct PlayFabServerAddUserVirtualCurrencyRequest
{
    int32_t amount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* virtualCurrency;

} PlayFabServerAddUserVirtualCurrencyRequest;

typedef struct PlayFabServerAdvancedPushPlatformMsg
{
    PF_OPTIONAL bool* gCMDataOnly;
    const char* json;
    PlayFabServerPushNotificationPlatform platform;

} PlayFabServerAdvancedPushPlatformMsg;

typedef struct PlayFabServerAuthenticateSessionTicketRequest
{
    const char* sessionTicket;

} PlayFabServerAuthenticateSessionTicketRequest;

typedef struct PlayFabServerUserAndroidDeviceInfo
{
    const char* androidDeviceId;

} PlayFabServerUserAndroidDeviceInfo;

typedef struct PlayFabServerUserAppleIdInfo
{
    const char* appleSubjectId;

} PlayFabServerUserAppleIdInfo;

typedef struct PlayFabServerUserCustomIdInfo
{
    const char* customId;

} PlayFabServerUserCustomIdInfo;

typedef struct PlayFabServerUserFacebookInfo
{
    const char* facebookId;
    const char* fullName;

} PlayFabServerUserFacebookInfo;

typedef struct PlayFabServerUserFacebookInstantGamesIdInfo
{
    const char* facebookInstantGamesId;

} PlayFabServerUserFacebookInstantGamesIdInfo;

typedef struct PlayFabServerUserGameCenterInfo
{
    const char* gameCenterId;

} PlayFabServerUserGameCenterInfo;

typedef struct PlayFabServerUserGoogleInfo
{
    const char* googleEmail;
    const char* googleGender;
    const char* googleId;
    const char* googleLocale;
    const char* googleName;

} PlayFabServerUserGoogleInfo;

typedef struct PlayFabServerUserIosDeviceInfo
{
    const char* iosDeviceId;

} PlayFabServerUserIosDeviceInfo;

typedef struct PlayFabServerUserKongregateInfo
{
    const char* kongregateId;
    const char* kongregateName;

} PlayFabServerUserKongregateInfo;

typedef struct PlayFabServerUserNintendoSwitchAccountIdInfo
{
    const char* nintendoSwitchAccountSubjectId;

} PlayFabServerUserNintendoSwitchAccountIdInfo;

typedef struct PlayFabServerUserNintendoSwitchDeviceIdInfo
{
    const char* nintendoSwitchDeviceId;

} PlayFabServerUserNintendoSwitchDeviceIdInfo;

typedef struct PlayFabServerUserOpenIdInfo
{
    const char* connectionId;
    const char* issuer;
    const char* subject;

} PlayFabServerUserOpenIdInfo;

typedef struct PlayFabServerUserPrivateAccountInfo
{
    const char* email;

} PlayFabServerUserPrivateAccountInfo;

typedef struct PlayFabServerUserPsnInfo
{
    const char* psnAccountId;
    const char* psnOnlineId;

} PlayFabServerUserPsnInfo;

typedef struct PlayFabServerUserSteamInfo
{
    PF_OPTIONAL PlayFabServerTitleActivationStatus* steamActivationStatus;
    const char* steamCountry;
    PF_OPTIONAL PlayFabServerCurrency* steamCurrency;
    const char* steamId;
    const char* steamName;

} PlayFabServerUserSteamInfo;

typedef struct PlayFabServerEntityKey
{
    const char* id;
    const char* type;

} PlayFabServerEntityKey;

typedef struct PlayFabServerUserTitleInfo
{
    const char* avatarUrl;
    time_t created;
    const char* displayName;
    PF_OPTIONAL time_t* firstLogin;
    PF_OPTIONAL bool* isBanned;
    PF_OPTIONAL time_t* lastLogin;
    PF_OPTIONAL PlayFabServerUserOrigination* origination;
    PF_OPTIONAL PlayFabServerEntityKey* titlePlayerAccount;

} PlayFabServerUserTitleInfo;

typedef struct PlayFabServerUserTwitchInfo
{
    const char* twitchId;
    const char* twitchUserName;

} PlayFabServerUserTwitchInfo;

typedef struct PlayFabServerUserWindowsHelloInfo
{
    const char* windowsHelloDeviceName;
    const char* windowsHelloPublicKeyHash;

} PlayFabServerUserWindowsHelloInfo;

typedef struct PlayFabServerUserXboxInfo
{
    const char* xboxUserId;

} PlayFabServerUserXboxInfo;

typedef struct PlayFabServerUserAccountInfo
{
    PF_OPTIONAL PlayFabServerUserAndroidDeviceInfo* androidDeviceInfo;
    PF_OPTIONAL PlayFabServerUserAppleIdInfo* appleAccountInfo;
    time_t created;
    PF_OPTIONAL PlayFabServerUserCustomIdInfo* customIdInfo;
    PF_OPTIONAL PlayFabServerUserFacebookInfo* facebookInfo;
    PF_OPTIONAL PlayFabServerUserFacebookInstantGamesIdInfo* facebookInstantGamesIdInfo;
    PF_OPTIONAL PlayFabServerUserGameCenterInfo* gameCenterInfo;
    PF_OPTIONAL PlayFabServerUserGoogleInfo* googleInfo;
    PF_OPTIONAL PlayFabServerUserIosDeviceInfo* iosDeviceInfo;
    PF_OPTIONAL PlayFabServerUserKongregateInfo* kongregateInfo;
    PF_OPTIONAL PlayFabServerUserNintendoSwitchAccountIdInfo* nintendoSwitchAccountInfo;
    PF_OPTIONAL PlayFabServerUserNintendoSwitchDeviceIdInfo* nintendoSwitchDeviceIdInfo;
    PF_ARRAY PlayFabServerUserOpenIdInfo** openIdInfo;
    PF_COLLECTION_COUNT uint32_t openIdInfoCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabServerUserPrivateAccountInfo* privateInfo;
    PF_OPTIONAL PlayFabServerUserPsnInfo* psnInfo;
    PF_OPTIONAL PlayFabServerUserSteamInfo* steamInfo;
    PF_OPTIONAL PlayFabServerUserTitleInfo* titleInfo;
    PF_OPTIONAL PlayFabServerUserTwitchInfo* twitchInfo;
    const char* username;
    PF_OPTIONAL PlayFabServerUserWindowsHelloInfo* windowsHelloInfo;
    PF_OPTIONAL PlayFabServerUserXboxInfo* xboxInfo;

} PlayFabServerUserAccountInfo;

typedef struct PlayFabServerAuthenticateSessionTicketResult
{
    PF_OPTIONAL bool* isSessionTicketExpired;
    PF_OPTIONAL PlayFabServerUserAccountInfo* userInfo;

} PlayFabServerAuthenticateSessionTicketResult;

typedef struct PlayFabServerAwardSteamAchievementItem
{
    const char* achievementName;
    const char* playFabId;
    bool result;

} PlayFabServerAwardSteamAchievementItem;

typedef struct PlayFabServerAwardSteamAchievementRequest
{
    PF_ARRAY PlayFabServerAwardSteamAchievementItem** achievements;
    PF_COLLECTION_COUNT uint32_t achievementsCount;

} PlayFabServerAwardSteamAchievementRequest;

typedef struct PlayFabServerAwardSteamAchievementResult
{
    PF_ARRAY PlayFabServerAwardSteamAchievementItem** achievementResults;
    PF_COLLECTION_COUNT uint32_t achievementResultsCount;

} PlayFabServerAwardSteamAchievementResult;

typedef struct PlayFabServerBanInfo
{
    bool active;
    const char* banId;
    PF_OPTIONAL time_t* created;
    PF_OPTIONAL time_t* expires;
    const char* iPAddress;
    const char* mACAddress;
    const char* playFabId;
    const char* reason;

} PlayFabServerBanInfo;

typedef struct PlayFabServerBanRequest
{
    PF_OPTIONAL uint32_t* durationInHours;
    const char* iPAddress;
    const char* mACAddress;
    const char* playFabId;
    const char* reason;

} PlayFabServerBanRequest;

typedef struct PlayFabServerBanUsersRequest
{
    PF_ARRAY PlayFabServerBanRequest** bans;
    PF_COLLECTION_COUNT uint32_t bansCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;

} PlayFabServerBanUsersRequest;

typedef struct PlayFabServerBanUsersResult
{
    PF_ARRAY PlayFabServerBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;

} PlayFabServerBanUsersResult;

typedef struct PlayFabServerCatalogItemBundleInfo
{
    PF_ARRAY const char** bundledItems;
    PF_COLLECTION_COUNT uint32_t bundledItemsCount;
    PF_ARRAY const char** bundledResultTables;
    PF_COLLECTION_COUNT uint32_t bundledResultTablesCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* bundledVirtualCurrencies;
    PF_COLLECTION_COUNT uint32_t bundledVirtualCurrenciesCount;

} PlayFabServerCatalogItemBundleInfo;

typedef struct PlayFabServerCatalogItemConsumableInfo
{
    PF_OPTIONAL uint32_t* usageCount;
    PF_OPTIONAL uint32_t* usagePeriod;
    const char* usagePeriodGroup;

} PlayFabServerCatalogItemConsumableInfo;

typedef struct PlayFabServerCatalogItemContainerInfo
{
    PF_ARRAY const char** itemContents;
    PF_COLLECTION_COUNT uint32_t itemContentsCount;
    const char* keyItemId;
    PF_ARRAY const char** resultTableContents;
    PF_COLLECTION_COUNT uint32_t resultTableContentsCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyContents;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyContentsCount;

} PlayFabServerCatalogItemContainerInfo;

typedef struct PlayFabServerCatalogItem
{
    PF_OPTIONAL PlayFabServerCatalogItemBundleInfo* bundle;
    bool canBecomeCharacter;
    const char* catalogVersion;
    PF_OPTIONAL PlayFabServerCatalogItemConsumableInfo* consumable;
    PF_OPTIONAL PlayFabServerCatalogItemContainerInfo* container;
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

} PlayFabServerCatalogItem;

typedef struct PlayFabServerItemInstance
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

} PlayFabServerItemInstance;

typedef struct PlayFabServerCharacterInventory
{
    const char* characterId;
    PF_ARRAY PlayFabServerItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;

} PlayFabServerCharacterInventory;

typedef struct PlayFabServerCharacterLeaderboardEntry
{
    const char* characterId;
    const char* characterName;
    const char* characterType;
    const char* displayName;
    const char* playFabId;
    int32_t position;
    int32_t statValue;

} PlayFabServerCharacterLeaderboardEntry;

typedef struct PlayFabServerCharacterResult
{
    const char* characterId;
    const char* characterName;
    const char* characterType;

} PlayFabServerCharacterResult;

typedef struct PlayFabServerConsumeItemRequest
{
    const char* characterId;
    int32_t consumeCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* itemInstanceId;
    const char* playFabId;

} PlayFabServerConsumeItemRequest;

typedef struct PlayFabServerConsumeItemResult
{
    const char* itemInstanceId;
    int32_t remainingUses;

} PlayFabServerConsumeItemResult;

typedef struct PlayFabServerContactEmailInfo
{
    const char* emailAddress;
    const char* name;
    PF_OPTIONAL PlayFabServerEmailVerificationStatus* verificationStatus;

} PlayFabServerContactEmailInfo;

typedef struct PlayFabServerContactEmailInfoModel
{
    const char* emailAddress;
    const char* name;
    PF_OPTIONAL PlayFabServerEmailVerificationStatus* verificationStatus;

} PlayFabServerContactEmailInfoModel;

typedef struct PlayFabServerCreateSharedGroupRequest
{
    const char* sharedGroupId;

} PlayFabServerCreateSharedGroupRequest;

typedef struct PlayFabServerCreateSharedGroupResult
{
    const char* sharedGroupId;

} PlayFabServerCreateSharedGroupResult;

typedef struct PlayFabServerDeleteCharacterFromUserRequest
{
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    bool saveCharacterInventory;

} PlayFabServerDeleteCharacterFromUserRequest;

typedef struct PlayFabServerDeleteCharacterFromUserResult
{

} PlayFabServerDeleteCharacterFromUserResult;

typedef struct PlayFabServerDeletePlayerRequest
{
    const char* playFabId;

} PlayFabServerDeletePlayerRequest;

typedef struct PlayFabServerDeletePlayerResult
{

} PlayFabServerDeletePlayerResult;

typedef struct PlayFabServerDeletePushNotificationTemplateRequest
{
    const char* pushNotificationTemplateId;

} PlayFabServerDeletePushNotificationTemplateRequest;

typedef struct PlayFabServerDeletePushNotificationTemplateResult
{

} PlayFabServerDeletePushNotificationTemplateResult;

typedef struct PlayFabServerDeleteSharedGroupRequest
{
    const char* sharedGroupId;

} PlayFabServerDeleteSharedGroupRequest;

typedef struct PlayFabServerDeregisterGameRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* lobbyId;

} PlayFabServerDeregisterGameRequest;

typedef struct PlayFabServerDeregisterGameResponse
{

} PlayFabServerDeregisterGameResponse;

typedef struct PlayFabServerEmptyResponse
{

} PlayFabServerEmptyResponse;

typedef struct PlayFabServerEmptyResult
{

} PlayFabServerEmptyResult;

typedef struct PlayFabServerEntityTokenResponse
{
    PF_OPTIONAL PlayFabServerEntityKey* entity;
    const char* entityToken;
    PF_OPTIONAL time_t* tokenExpiration;

} PlayFabServerEntityTokenResponse;

typedef struct PlayFabServerEvaluateRandomResultTableRequest
{
    const char* catalogVersion;
    const char* tableId;

} PlayFabServerEvaluateRandomResultTableRequest;

typedef struct PlayFabServerEvaluateRandomResultTableResult
{
    const char* resultItemId;

} PlayFabServerEvaluateRandomResultTableResult;

typedef struct PlayFabServerScriptExecutionError
{
    const char* error;
    const char* message;
    const char* stackTrace;

} PlayFabServerScriptExecutionError;

typedef struct PlayFabServerLogStatement
{
    PlayFabJsonObject data;
    const char* level;
    const char* message;

} PlayFabServerLogStatement;

typedef struct PlayFabServerExecuteCloudScriptResult
{
    int32_t aPIRequestsIssued;
    PF_OPTIONAL PlayFabServerScriptExecutionError* error;
    double executionTimeSeconds;
    const char* functionName;
    PlayFabJsonObject functionResult;
    PF_OPTIONAL bool* functionResultTooLarge;
    int32_t httpRequestsIssued;
    PF_ARRAY PlayFabServerLogStatement** logs;
    PF_COLLECTION_COUNT uint32_t logsCount;
    PF_OPTIONAL bool* logsTooLarge;
    uint32_t memoryConsumedBytes;
    double processorTimeSeconds;
    int32_t revision;

} PlayFabServerExecuteCloudScriptResult;

typedef struct PlayFabServerExecuteCloudScriptServerRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* functionName;
    PlayFabJsonObject functionParameter;
    PF_OPTIONAL bool* generatePlayStreamEvent;
    const char* playFabId;
    PF_OPTIONAL PlayFabServerCloudScriptRevisionOption* revisionSelection;
    PF_OPTIONAL int32_t* specificRevision;

} PlayFabServerExecuteCloudScriptServerRequest;

typedef struct PlayFabServerFacebookInstantGamesPlayFabIdPair
{
    const char* facebookInstantGamesId;
    const char* playFabId;

} PlayFabServerFacebookInstantGamesPlayFabIdPair;

typedef struct PlayFabServerFacebookPlayFabIdPair
{
    const char* facebookId;
    const char* playFabId;

} PlayFabServerFacebookPlayFabIdPair;

typedef struct PlayFabServerLinkedPlatformAccountModel
{
    const char* email;
    PF_OPTIONAL PlayFabServerLoginIdentityProvider* platform;
    const char* platformUserId;
    const char* username;

} PlayFabServerLinkedPlatformAccountModel;

typedef struct PlayFabServerLocationModel
{
    const char* city;
    PF_OPTIONAL PlayFabServerContinentCode* continentCode;
    PF_OPTIONAL PlayFabServerCountryCode* countryCode;
    PF_OPTIONAL double* latitude;
    PF_OPTIONAL double* longitude;

} PlayFabServerLocationModel;

typedef struct PlayFabServerSubscriptionModel
{
    time_t expiration;
    time_t initialSubscriptionTime;
    bool isActive;
    PF_OPTIONAL PlayFabServerSubscriptionProviderStatus* status;
    const char* subscriptionId;
    const char* subscriptionItemId;
    const char* subscriptionProvider;

} PlayFabServerSubscriptionModel;

typedef struct PlayFabServerMembershipModel
{
    bool isActive;
    time_t membershipExpiration;
    const char* membershipId;
    PF_OPTIONAL time_t* overrideExpiration;
    PF_ARRAY PlayFabServerSubscriptionModel** subscriptions;
    PF_COLLECTION_COUNT uint32_t subscriptionsCount;

} PlayFabServerMembershipModel;

typedef struct PlayFabServerPushNotificationRegistrationModel
{
    const char* notificationEndpointARN;
    PF_OPTIONAL PlayFabServerPushNotificationPlatform* platform;

} PlayFabServerPushNotificationRegistrationModel;

typedef struct PlayFabServerStatisticModel
{
    const char* name;
    int32_t value;
    int32_t version;

} PlayFabServerStatisticModel;

typedef struct PlayFabServerTagModel
{
    const char* tagValue;

} PlayFabServerTagModel;

typedef struct PlayFabServerValueToDateModel
{
    const char* currency;
    uint32_t totalValue;
    const char* totalValueAsDecimal;

} PlayFabServerValueToDateModel;

typedef struct PlayFabServerPlayerProfileModel
{
    PF_ARRAY PlayFabServerAdCampaignAttributionModel** adCampaignAttributions;
    PF_COLLECTION_COUNT uint32_t adCampaignAttributionsCount;
    const char* avatarUrl;
    PF_OPTIONAL time_t* bannedUntil;
    PF_ARRAY PlayFabServerContactEmailInfoModel** contactEmailAddresses;
    PF_COLLECTION_COUNT uint32_t contactEmailAddressesCount;
    PF_OPTIONAL time_t* created;
    const char* displayName;
    PF_ARRAY const char** experimentVariants;
    PF_COLLECTION_COUNT uint32_t experimentVariantsCount;
    PF_OPTIONAL time_t* lastLogin;
    PF_ARRAY PlayFabServerLinkedPlatformAccountModel** linkedAccounts;
    PF_COLLECTION_COUNT uint32_t linkedAccountsCount;
    PF_ARRAY PlayFabServerLocationModel** locations;
    PF_COLLECTION_COUNT uint32_t locationsCount;
    PF_ARRAY PlayFabServerMembershipModel** memberships;
    PF_COLLECTION_COUNT uint32_t membershipsCount;
    PF_OPTIONAL PlayFabServerLoginIdentityProvider* origination;
    const char* playerId;
    const char* publisherId;
    PF_ARRAY PlayFabServerPushNotificationRegistrationModel** pushNotificationRegistrations;
    PF_COLLECTION_COUNT uint32_t pushNotificationRegistrationsCount;
    PF_ARRAY PlayFabServerStatisticModel** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;
    PF_ARRAY PlayFabServerTagModel** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    const char* titleId;
    PF_OPTIONAL uint32_t* totalValueToDateInUSD;
    PF_ARRAY PlayFabServerValueToDateModel** valuesToDate;
    PF_COLLECTION_COUNT uint32_t valuesToDateCount;

} PlayFabServerPlayerProfileModel;

typedef struct PlayFabServerFriendInfo
{
    PF_OPTIONAL PlayFabServerUserFacebookInfo* facebookInfo;
    const char* friendPlayFabId;
    PF_OPTIONAL PlayFabServerUserGameCenterInfo* gameCenterInfo;
    PF_OPTIONAL PlayFabServerPlayerProfileModel* profile;
    PF_OPTIONAL PlayFabServerUserPsnInfo* pSNInfo;
    PF_OPTIONAL PlayFabServerUserSteamInfo* steamInfo;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
    const char* titleDisplayName;
    const char* username;
    PF_OPTIONAL PlayFabServerUserXboxInfo* xboxInfo;

} PlayFabServerFriendInfo;

typedef struct PlayFabServerGenericPlayFabIdPair
{
    PF_OPTIONAL PlayFabServerGenericServiceId* genericId;
    const char* playFabId;

} PlayFabServerGenericPlayFabIdPair;

typedef struct PlayFabServerGetAllSegmentsRequest
{

} PlayFabServerGetAllSegmentsRequest;

typedef struct PlayFabServerGetSegmentResult
{
    const char* aBTestParent;
    const char* id;
    const char* name;

} PlayFabServerGetSegmentResult;

typedef struct PlayFabServerGetAllSegmentsResult
{
    PF_ARRAY PlayFabServerGetSegmentResult** segments;
    PF_COLLECTION_COUNT uint32_t segmentsCount;

} PlayFabServerGetAllSegmentsResult;

typedef struct PlayFabServerGetCatalogItemsRequest
{
    const char* catalogVersion;

} PlayFabServerGetCatalogItemsRequest;

typedef struct PlayFabServerGetCatalogItemsResult
{
    PF_ARRAY PlayFabServerCatalogItem** catalog;
    PF_COLLECTION_COUNT uint32_t catalogCount;

} PlayFabServerGetCatalogItemsResult;

typedef struct PlayFabServerGetCharacterDataRequest
{
    const char* characterId;
    PF_OPTIONAL uint32_t* ifChangedFromDataVersion;
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* playFabId;

} PlayFabServerGetCharacterDataRequest;

typedef struct PlayFabServerUserDataRecord
{
    time_t lastUpdated;
    PF_OPTIONAL PlayFabServerUserDataPermission* permission;
    const char* value;

} PlayFabServerUserDataRecord;

typedef struct PlayFabServerGetCharacterDataResult
{
    const char* characterId;
    PF_MAP struct PlayFabServerUserDataRecordDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    uint32_t dataVersion;
    const char* playFabId;

} PlayFabServerGetCharacterDataResult;

typedef struct PlayFabServerGetCharacterInventoryRequest
{
    const char* catalogVersion;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerGetCharacterInventoryRequest;

typedef struct PlayFabServerVirtualCurrencyRechargeTime
{
    int32_t rechargeMax;
    time_t rechargeTime;
    int32_t secondsToRecharge;

} PlayFabServerVirtualCurrencyRechargeTime;

typedef struct PlayFabServerGetCharacterInventoryResult
{
    const char* characterId;
    PF_ARRAY PlayFabServerItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;
    const char* playFabId;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
    PF_MAP struct PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry* virtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyRechargeTimesCount;

} PlayFabServerGetCharacterInventoryResult;

typedef struct PlayFabServerGetCharacterLeaderboardRequest
{
    const char* characterType;
    int32_t maxResultsCount;
    int32_t startPosition;
    const char* statisticName;

} PlayFabServerGetCharacterLeaderboardRequest;

typedef struct PlayFabServerGetCharacterLeaderboardResult
{
    PF_ARRAY PlayFabServerCharacterLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;

} PlayFabServerGetCharacterLeaderboardResult;

typedef struct PlayFabServerGetCharacterStatisticsRequest
{
    const char* characterId;
    const char* playFabId;

} PlayFabServerGetCharacterStatisticsRequest;

typedef struct PlayFabServerGetCharacterStatisticsResult
{
    const char* characterId;
    PF_MAP struct PlayFabInt32DictionaryEntry* characterStatistics;
    PF_COLLECTION_COUNT uint32_t characterStatisticsCount;
    const char* playFabId;

} PlayFabServerGetCharacterStatisticsResult;

typedef struct PlayFabServerGetContentDownloadUrlRequest
{
    const char* httpMethod;
    const char* key;
    PF_OPTIONAL bool* thruCDN;

} PlayFabServerGetContentDownloadUrlRequest;

typedef struct PlayFabServerGetContentDownloadUrlResult
{
    const char* uRL;

} PlayFabServerGetContentDownloadUrlResult;

typedef struct PlayFabServerPlayerProfileViewConstraints
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

} PlayFabServerPlayerProfileViewConstraints;

typedef struct PlayFabServerGetFriendLeaderboardRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* includeFacebookFriends;
    PF_OPTIONAL bool* includeSteamFriends;
    int32_t maxResultsCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabServerPlayerProfileViewConstraints* profileConstraints;
    int32_t startPosition;
    const char* statisticName;
    PF_OPTIONAL int32_t* version;
    const char* xboxToken;

} PlayFabServerGetFriendLeaderboardRequest;

typedef struct PlayFabServerGetFriendsListRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* includeFacebookFriends;
    PF_OPTIONAL bool* includeSteamFriends;
    const char* playFabId;
    PF_OPTIONAL PlayFabServerPlayerProfileViewConstraints* profileConstraints;
    const char* xboxToken;

} PlayFabServerGetFriendsListRequest;

typedef struct PlayFabServerGetFriendsListResult
{
    PF_ARRAY PlayFabServerFriendInfo** friends;
    PF_COLLECTION_COUNT uint32_t friendsCount;

} PlayFabServerGetFriendsListResult;

typedef struct PlayFabServerGetLeaderboardAroundCharacterRequest
{
    const char* characterId;
    const char* characterType;
    int32_t maxResultsCount;
    const char* playFabId;
    const char* statisticName;

} PlayFabServerGetLeaderboardAroundCharacterRequest;

typedef struct PlayFabServerGetLeaderboardAroundCharacterResult
{
    PF_ARRAY PlayFabServerCharacterLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;

} PlayFabServerGetLeaderboardAroundCharacterResult;

typedef struct PlayFabServerGetLeaderboardAroundUserRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t maxResultsCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabServerPlayerProfileViewConstraints* profileConstraints;
    const char* statisticName;
    PF_OPTIONAL int32_t* version;

} PlayFabServerGetLeaderboardAroundUserRequest;

typedef struct PlayFabServerPlayerLeaderboardEntry
{
    const char* displayName;
    const char* playFabId;
    int32_t position;
    PF_OPTIONAL PlayFabServerPlayerProfileModel* profile;
    int32_t statValue;

} PlayFabServerPlayerLeaderboardEntry;

typedef struct PlayFabServerGetLeaderboardAroundUserResult
{
    PF_ARRAY PlayFabServerPlayerLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
    PF_OPTIONAL time_t* nextReset;
    int32_t version;

} PlayFabServerGetLeaderboardAroundUserResult;

typedef struct PlayFabServerGetLeaderboardForUsersCharactersRequest
{
    int32_t maxResultsCount;
    const char* playFabId;
    const char* statisticName;

} PlayFabServerGetLeaderboardForUsersCharactersRequest;

typedef struct PlayFabServerGetLeaderboardForUsersCharactersResult
{
    PF_ARRAY PlayFabServerCharacterLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;

} PlayFabServerGetLeaderboardForUsersCharactersResult;

typedef struct PlayFabServerGetLeaderboardRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t maxResultsCount;
    PF_OPTIONAL PlayFabServerPlayerProfileViewConstraints* profileConstraints;
    int32_t startPosition;
    const char* statisticName;
    PF_OPTIONAL int32_t* version;

} PlayFabServerGetLeaderboardRequest;

typedef struct PlayFabServerGetLeaderboardResult
{
    PF_ARRAY PlayFabServerPlayerLeaderboardEntry** leaderboard;
    PF_COLLECTION_COUNT uint32_t leaderboardCount;
    PF_OPTIONAL time_t* nextReset;
    int32_t version;

} PlayFabServerGetLeaderboardResult;

typedef struct PlayFabServerGetPlayerCombinedInfoRequestParams
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
    PF_OPTIONAL PlayFabServerPlayerProfileViewConstraints* profileConstraints;
    PF_ARRAY const char** titleDataKeys;
    PF_COLLECTION_COUNT uint32_t titleDataKeysCount;
    PF_ARRAY const char** userDataKeys;
    PF_COLLECTION_COUNT uint32_t userDataKeysCount;
    PF_ARRAY const char** userReadOnlyDataKeys;
    PF_COLLECTION_COUNT uint32_t userReadOnlyDataKeysCount;

} PlayFabServerGetPlayerCombinedInfoRequestParams;

typedef struct PlayFabServerGetPlayerCombinedInfoRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabServerGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playFabId;

} PlayFabServerGetPlayerCombinedInfoRequest;

typedef struct PlayFabServerStatisticValue
{
    const char* statisticName;
    int32_t value;
    uint32_t version;

} PlayFabServerStatisticValue;

typedef struct PlayFabServerGetPlayerCombinedInfoResultPayload
{
    PF_OPTIONAL PlayFabServerUserAccountInfo* accountInfo;
    PF_ARRAY PlayFabServerCharacterInventory** characterInventories;
    PF_COLLECTION_COUNT uint32_t characterInventoriesCount;
    PF_ARRAY PlayFabServerCharacterResult** characterList;
    PF_COLLECTION_COUNT uint32_t characterListCount;
    PF_OPTIONAL PlayFabServerPlayerProfileModel* playerProfile;
    PF_ARRAY PlayFabServerStatisticValue** playerStatistics;
    PF_COLLECTION_COUNT uint32_t playerStatisticsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* titleData;
    PF_COLLECTION_COUNT uint32_t titleDataCount;
    PF_MAP struct PlayFabServerUserDataRecordDictionaryEntry* userData;
    PF_COLLECTION_COUNT uint32_t userDataCount;
    uint32_t userDataVersion;
    PF_ARRAY PlayFabServerItemInstance** userInventory;
    PF_COLLECTION_COUNT uint32_t userInventoryCount;
    PF_MAP struct PlayFabServerUserDataRecordDictionaryEntry* userReadOnlyData;
    PF_COLLECTION_COUNT uint32_t userReadOnlyDataCount;
    uint32_t userReadOnlyDataVersion;
    PF_MAP struct PlayFabInt32DictionaryEntry* userVirtualCurrency;
    PF_COLLECTION_COUNT uint32_t userVirtualCurrencyCount;
    PF_MAP struct PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry* userVirtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t userVirtualCurrencyRechargeTimesCount;

} PlayFabServerGetPlayerCombinedInfoResultPayload;

typedef struct PlayFabServerGetPlayerCombinedInfoResult
{
    PF_OPTIONAL PlayFabServerGetPlayerCombinedInfoResultPayload* infoResultPayload;
    const char* playFabId;

} PlayFabServerGetPlayerCombinedInfoResult;

typedef struct PlayFabServerGetPlayerProfileRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    PF_OPTIONAL PlayFabServerPlayerProfileViewConstraints* profileConstraints;

} PlayFabServerGetPlayerProfileRequest;

typedef struct PlayFabServerGetPlayerProfileResult
{
    PF_OPTIONAL PlayFabServerPlayerProfileModel* playerProfile;

} PlayFabServerGetPlayerProfileResult;

typedef struct PlayFabServerGetPlayerSegmentsResult
{
    PF_ARRAY PlayFabServerGetSegmentResult** segments;
    PF_COLLECTION_COUNT uint32_t segmentsCount;

} PlayFabServerGetPlayerSegmentsResult;

typedef struct PlayFabServerGetPlayersInSegmentRequest
{
    const char* continuationToken;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL uint32_t* maxBatchSize;
    PF_OPTIONAL uint32_t* secondsToLive;
    const char* segmentId;

} PlayFabServerGetPlayersInSegmentRequest;

typedef struct PlayFabServerPlayerLinkedAccount
{
    const char* email;
    PF_OPTIONAL PlayFabServerLoginIdentityProvider* platform;
    const char* platformUserId;
    const char* username;

} PlayFabServerPlayerLinkedAccount;

typedef struct PlayFabServerPlayerLocation
{
    const char* city;
    PlayFabServerContinentCode continentCode;
    PlayFabServerCountryCode countryCode;
    PF_OPTIONAL double* latitude;
    PF_OPTIONAL double* longitude;

} PlayFabServerPlayerLocation;

typedef struct PlayFabServerPlayerStatistic
{
    const char* id;
    const char* name;
    int32_t statisticValue;
    int32_t statisticVersion;

} PlayFabServerPlayerStatistic;

typedef struct PlayFabServerPushNotificationRegistration
{
    const char* notificationEndpointARN;
    PF_OPTIONAL PlayFabServerPushNotificationPlatform* platform;

} PlayFabServerPushNotificationRegistration;

typedef struct PlayFabServerPlayerProfile
{
    PF_ARRAY PlayFabServerAdCampaignAttribution** adCampaignAttributions;
    PF_COLLECTION_COUNT uint32_t adCampaignAttributionsCount;
    const char* avatarUrl;
    PF_OPTIONAL time_t* bannedUntil;
    PF_ARRAY PlayFabServerContactEmailInfo** contactEmailAddresses;
    PF_COLLECTION_COUNT uint32_t contactEmailAddressesCount;
    PF_OPTIONAL time_t* created;
    const char* displayName;
    PF_OPTIONAL time_t* lastLogin;
    PF_ARRAY PlayFabServerPlayerLinkedAccount** linkedAccounts;
    PF_COLLECTION_COUNT uint32_t linkedAccountsCount;
    PF_MAP struct PlayFabServerPlayerLocationDictionaryEntry* locations;
    PF_COLLECTION_COUNT uint32_t locationsCount;
    PF_OPTIONAL PlayFabServerLoginIdentityProvider* origination;
    PF_ARRAY const char** playerExperimentVariants;
    PF_COLLECTION_COUNT uint32_t playerExperimentVariantsCount;
    const char* playerId;
    PF_ARRAY PlayFabServerPlayerStatistic** playerStatistics;
    PF_COLLECTION_COUNT uint32_t playerStatisticsCount;
    const char* publisherId;
    PF_ARRAY PlayFabServerPushNotificationRegistration** pushNotificationRegistrations;
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

} PlayFabServerPlayerProfile;

typedef struct PlayFabServerGetPlayersInSegmentResult
{
    const char* continuationToken;
    PF_ARRAY PlayFabServerPlayerProfile** playerProfiles;
    PF_COLLECTION_COUNT uint32_t playerProfilesCount;
    int32_t profilesInSegment;

} PlayFabServerGetPlayersInSegmentResult;

typedef struct PlayFabServerGetPlayersSegmentsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerGetPlayersSegmentsRequest;

typedef struct PlayFabServerStatisticNameVersion
{
    const char* statisticName;
    uint32_t version;

} PlayFabServerStatisticNameVersion;

typedef struct PlayFabServerGetPlayerStatisticsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    PF_ARRAY const char** statisticNames;
    PF_COLLECTION_COUNT uint32_t statisticNamesCount;
    PF_ARRAY PlayFabServerStatisticNameVersion** statisticNameVersions;
    PF_COLLECTION_COUNT uint32_t statisticNameVersionsCount;

} PlayFabServerGetPlayerStatisticsRequest;

typedef struct PlayFabServerGetPlayerStatisticsResult
{
    const char* playFabId;
    PF_ARRAY PlayFabServerStatisticValue** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;

} PlayFabServerGetPlayerStatisticsResult;

typedef struct PlayFabServerGetPlayerStatisticVersionsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* statisticName;

} PlayFabServerGetPlayerStatisticVersionsRequest;

typedef struct PlayFabServerPlayerStatisticVersion
{
    time_t activationTime;
    PF_OPTIONAL time_t* deactivationTime;
    PF_OPTIONAL time_t* scheduledActivationTime;
    PF_OPTIONAL time_t* scheduledDeactivationTime;
    const char* statisticName;
    uint32_t version;

} PlayFabServerPlayerStatisticVersion;

typedef struct PlayFabServerGetPlayerStatisticVersionsResult
{
    PF_ARRAY PlayFabServerPlayerStatisticVersion** statisticVersions;
    PF_COLLECTION_COUNT uint32_t statisticVersionsCount;

} PlayFabServerGetPlayerStatisticVersionsResult;

typedef struct PlayFabServerGetPlayerTagsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playfabNamespace;
    const char* playFabId;

} PlayFabServerGetPlayerTagsRequest;

typedef struct PlayFabServerGetPlayerTagsResult
{
    const char* playFabId;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;

} PlayFabServerGetPlayerTagsResult;

typedef struct PlayFabServerGetPlayFabIDsFromFacebookIDsRequest
{
    PF_ARRAY const char** facebookIDs;
    PF_COLLECTION_COUNT uint32_t facebookIDsCount;

} PlayFabServerGetPlayFabIDsFromFacebookIDsRequest;

typedef struct PlayFabServerGetPlayFabIDsFromFacebookIDsResult
{
    PF_ARRAY PlayFabServerFacebookPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromFacebookIDsResult;

typedef struct PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest
{
    PF_ARRAY const char** facebookInstantGamesIds;
    PF_COLLECTION_COUNT uint32_t facebookInstantGamesIdsCount;

} PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest;

typedef struct PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult
{
    PF_ARRAY PlayFabServerFacebookInstantGamesPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult;

typedef struct PlayFabServerGetPlayFabIDsFromGenericIDsRequest
{
    PF_ARRAY PlayFabServerGenericServiceId** genericIDs;
    PF_COLLECTION_COUNT uint32_t genericIDsCount;

} PlayFabServerGetPlayFabIDsFromGenericIDsRequest;

typedef struct PlayFabServerGetPlayFabIDsFromGenericIDsResult
{
    PF_ARRAY PlayFabServerGenericPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromGenericIDsResult;

typedef struct PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
{
    PF_ARRAY const char** nintendoSwitchDeviceIds;
    PF_COLLECTION_COUNT uint32_t nintendoSwitchDeviceIdsCount;

} PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;

typedef struct PlayFabServerNintendoSwitchPlayFabIdPair
{
    const char* nintendoSwitchDeviceId;
    const char* playFabId;

} PlayFabServerNintendoSwitchPlayFabIdPair;

typedef struct PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
{
    PF_ARRAY PlayFabServerNintendoSwitchPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;

typedef struct PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest
{
    PF_OPTIONAL int32_t* issuerId;
    PF_ARRAY const char** pSNAccountIDs;
    PF_COLLECTION_COUNT uint32_t pSNAccountIDsCount;

} PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest;

typedef struct PlayFabServerPSNAccountPlayFabIdPair
{
    const char* playFabId;
    const char* pSNAccountId;

} PlayFabServerPSNAccountPlayFabIdPair;

typedef struct PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult
{
    PF_ARRAY PlayFabServerPSNAccountPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult;

typedef struct PlayFabServerGetPlayFabIDsFromSteamIDsRequest
{
    PF_ARRAY const char** steamStringIDs;
    PF_COLLECTION_COUNT uint32_t steamStringIDsCount;

} PlayFabServerGetPlayFabIDsFromSteamIDsRequest;

typedef struct PlayFabServerSteamPlayFabIdPair
{
    const char* playFabId;
    const char* steamStringId;

} PlayFabServerSteamPlayFabIdPair;

typedef struct PlayFabServerGetPlayFabIDsFromSteamIDsResult
{
    PF_ARRAY PlayFabServerSteamPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromSteamIDsResult;

typedef struct PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest
{
    const char* sandbox;
    PF_ARRAY const char** xboxLiveAccountIDs;
    PF_COLLECTION_COUNT uint32_t xboxLiveAccountIDsCount;

} PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest;

typedef struct PlayFabServerXboxLiveAccountPlayFabIdPair
{
    const char* playFabId;
    const char* xboxLiveAccountId;

} PlayFabServerXboxLiveAccountPlayFabIdPair;

typedef struct PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult
{
    PF_ARRAY PlayFabServerXboxLiveAccountPlayFabIdPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult;

typedef struct PlayFabServerGetPublisherDataRequest
{
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;

} PlayFabServerGetPublisherDataRequest;

typedef struct PlayFabServerGetPublisherDataResult
{
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetPublisherDataResult;

typedef struct PlayFabServerGetRandomResultTablesRequest
{
    const char* catalogVersion;
    PF_ARRAY const char** tableIDs;
    PF_COLLECTION_COUNT uint32_t tableIDsCount;

} PlayFabServerGetRandomResultTablesRequest;

typedef struct PlayFabServerResultTableNode
{
    const char* resultItem;
    PlayFabServerResultTableNodeType resultItemType;
    int32_t weight;

} PlayFabServerResultTableNode;

typedef struct PlayFabServerRandomResultTableListing
{
    const char* catalogVersion;
    PF_ARRAY PlayFabServerResultTableNode** nodes;
    PF_COLLECTION_COUNT uint32_t nodesCount;
    const char* tableId;

} PlayFabServerRandomResultTableListing;

typedef struct PlayFabServerGetRandomResultTablesResult
{
    PF_MAP struct PlayFabServerRandomResultTableListingDictionaryEntry* tables;
    PF_COLLECTION_COUNT uint32_t tablesCount;

} PlayFabServerGetRandomResultTablesResult;

typedef struct PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest
{
    PF_ARRAY const char** playFabIDs;
    PF_COLLECTION_COUNT uint32_t playFabIDsCount;

} PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest;

typedef struct PlayFabServerServerCustomIDPlayFabIDPair
{
    const char* playFabId;
    const char* serverCustomId;

} PlayFabServerServerCustomIDPlayFabIDPair;

typedef struct PlayFabServerGetServerCustomIDsFromPlayFabIDsResult
{
    PF_ARRAY PlayFabServerServerCustomIDPlayFabIDPair** data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetServerCustomIDsFromPlayFabIDsResult;

typedef struct PlayFabServerGetSharedGroupDataRequest
{
    PF_OPTIONAL bool* getMembers;
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* sharedGroupId;

} PlayFabServerGetSharedGroupDataRequest;

typedef struct PlayFabServerSharedGroupDataRecord
{
    time_t lastUpdated;
    const char* lastUpdatedBy;
    PF_OPTIONAL PlayFabServerUserDataPermission* permission;
    const char* value;

} PlayFabServerSharedGroupDataRecord;

typedef struct PlayFabServerGetSharedGroupDataResult
{
    PF_MAP struct PlayFabServerSharedGroupDataRecordDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** members;
    PF_COLLECTION_COUNT uint32_t membersCount;

} PlayFabServerGetSharedGroupDataResult;

typedef struct PlayFabServerStoreMarketingModel
{
    const char* description;
    const char* displayName;
    PlayFabJsonObject metadata;

} PlayFabServerStoreMarketingModel;

typedef struct PlayFabServerStoreItem
{
    PlayFabJsonObject customData;
    PF_OPTIONAL uint32_t* displayPosition;
    const char* itemId;
    PF_MAP struct PlayFabUint32DictionaryEntry* realCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t realCurrencyPricesCount;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrencyPrices;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyPricesCount;

} PlayFabServerStoreItem;

typedef struct PlayFabServerGetStoreItemsResult
{
    const char* catalogVersion;
    PF_OPTIONAL PlayFabServerStoreMarketingModel* marketingData;
    PF_OPTIONAL PlayFabServerSourceType* source;
    PF_ARRAY PlayFabServerStoreItem** store;
    PF_COLLECTION_COUNT uint32_t storeCount;
    const char* storeId;

} PlayFabServerGetStoreItemsResult;

typedef struct PlayFabServerGetStoreItemsServerRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* storeId;

} PlayFabServerGetStoreItemsServerRequest;

typedef struct PlayFabServerGetTimeRequest
{

} PlayFabServerGetTimeRequest;

typedef struct PlayFabServerGetTimeResult
{
    time_t time;

} PlayFabServerGetTimeResult;

typedef struct PlayFabServerGetTitleDataRequest
{
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* overrideLabel;

} PlayFabServerGetTitleDataRequest;

typedef struct PlayFabServerGetTitleDataResult
{
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;

} PlayFabServerGetTitleDataResult;

typedef struct PlayFabServerGetTitleNewsRequest
{
    PF_OPTIONAL int32_t* count;

} PlayFabServerGetTitleNewsRequest;

typedef struct PlayFabServerTitleNewsItem
{
    const char* body;
    const char* newsId;
    time_t timestamp;
    const char* title;

} PlayFabServerTitleNewsItem;

typedef struct PlayFabServerGetTitleNewsResult
{
    PF_ARRAY PlayFabServerTitleNewsItem** news;
    PF_COLLECTION_COUNT uint32_t newsCount;

} PlayFabServerGetTitleNewsResult;

typedef struct PlayFabServerGetUserAccountInfoRequest
{
    const char* playFabId;

} PlayFabServerGetUserAccountInfoRequest;

typedef struct PlayFabServerGetUserAccountInfoResult
{
    PF_OPTIONAL PlayFabServerUserAccountInfo* userInfo;

} PlayFabServerGetUserAccountInfoResult;

typedef struct PlayFabServerGetUserBansRequest
{
    const char* playFabId;

} PlayFabServerGetUserBansRequest;

typedef struct PlayFabServerGetUserBansResult
{
    PF_ARRAY PlayFabServerBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;

} PlayFabServerGetUserBansResult;

typedef struct PlayFabServerGetUserDataRequest
{
    PF_OPTIONAL uint32_t* ifChangedFromDataVersion;
    PF_ARRAY const char** keys;
    PF_COLLECTION_COUNT uint32_t keysCount;
    const char* playFabId;

} PlayFabServerGetUserDataRequest;

typedef struct PlayFabServerGetUserDataResult
{
    PF_MAP struct PlayFabServerUserDataRecordDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    uint32_t dataVersion;
    const char* playFabId;

} PlayFabServerGetUserDataResult;

typedef struct PlayFabServerGetUserInventoryRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerGetUserInventoryRequest;

typedef struct PlayFabServerGetUserInventoryResult
{
    PF_ARRAY PlayFabServerItemInstance** inventory;
    PF_COLLECTION_COUNT uint32_t inventoryCount;
    const char* playFabId;
    PF_MAP struct PlayFabInt32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;
    PF_MAP struct PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry* virtualCurrencyRechargeTimes;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyRechargeTimesCount;

} PlayFabServerGetUserInventoryResult;

typedef struct PlayFabServerGrantCharacterToUserRequest
{
    const char* characterName;
    const char* characterType;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerGrantCharacterToUserRequest;

typedef struct PlayFabServerGrantCharacterToUserResult
{
    const char* characterId;

} PlayFabServerGrantCharacterToUserResult;

typedef struct PlayFabServerGrantedItemInstance
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

} PlayFabServerGrantedItemInstance;

typedef struct PlayFabServerGrantItemsToCharacterRequest
{
    const char* annotation;
    const char* catalogVersion;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY const char** itemIds;
    PF_COLLECTION_COUNT uint32_t itemIdsCount;
    const char* playFabId;

} PlayFabServerGrantItemsToCharacterRequest;

typedef struct PlayFabServerGrantItemsToCharacterResult
{
    PF_ARRAY PlayFabServerGrantedItemInstance** itemGrantResults;
    PF_COLLECTION_COUNT uint32_t itemGrantResultsCount;

} PlayFabServerGrantItemsToCharacterResult;

typedef struct PlayFabServerGrantItemsToUserRequest
{
    const char* annotation;
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY const char** itemIds;
    PF_COLLECTION_COUNT uint32_t itemIdsCount;
    const char* playFabId;

} PlayFabServerGrantItemsToUserRequest;

typedef struct PlayFabServerGrantItemsToUserResult
{
    PF_ARRAY PlayFabServerGrantedItemInstance** itemGrantResults;
    PF_COLLECTION_COUNT uint32_t itemGrantResultsCount;

} PlayFabServerGrantItemsToUserResult;

typedef struct PlayFabServerItemGrant
{
    const char* annotation;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    const char* itemId;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    const char* playFabId;

} PlayFabServerItemGrant;

typedef struct PlayFabServerGrantItemsToUsersRequest
{
    const char* catalogVersion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabServerItemGrant** itemGrants;
    PF_COLLECTION_COUNT uint32_t itemGrantsCount;

} PlayFabServerGrantItemsToUsersRequest;

typedef struct PlayFabServerGrantItemsToUsersResult
{
    PF_ARRAY PlayFabServerGrantedItemInstance** itemGrantResults;
    PF_COLLECTION_COUNT uint32_t itemGrantResultsCount;

} PlayFabServerGrantItemsToUsersResult;

typedef struct PlayFabServerLinkPSNAccountRequest
{
    const char* authCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    PF_OPTIONAL int32_t* issuerId;
    const char* playFabId;
    const char* redirectUri;

} PlayFabServerLinkPSNAccountRequest;

typedef struct PlayFabServerLinkPSNAccountResult
{

} PlayFabServerLinkPSNAccountResult;

typedef struct PlayFabServerLinkServerCustomIdRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* playFabId;
    const char* serverCustomId;

} PlayFabServerLinkServerCustomIdRequest;

typedef struct PlayFabServerLinkServerCustomIdResult
{

} PlayFabServerLinkServerCustomIdResult;

typedef struct PlayFabServerLinkXboxAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceLink;
    const char* playFabId;
    const char* xboxToken;

} PlayFabServerLinkXboxAccountRequest;

typedef struct PlayFabServerLinkXboxAccountResult
{

} PlayFabServerLinkXboxAccountResult;

typedef struct PlayFabServerListUsersCharactersRequest
{
    const char* playFabId;

} PlayFabServerListUsersCharactersRequest;

typedef struct PlayFabServerListUsersCharactersResult
{
    PF_ARRAY PlayFabServerCharacterResult** characters;
    PF_COLLECTION_COUNT uint32_t charactersCount;

} PlayFabServerListUsersCharactersResult;

typedef struct PlayFabServerLocalizedPushNotificationProperties
{
    const char* message;
    const char* subject;

} PlayFabServerLocalizedPushNotificationProperties;

typedef struct PlayFabServerLoginWithServerCustomIdRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabServerGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* playerSecret;
    const char* serverCustomId;

} PlayFabServerLoginWithServerCustomIdRequest;

typedef struct PlayFabServerLoginWithSteamIdRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabServerGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* steamId;

} PlayFabServerLoginWithSteamIdRequest;

typedef struct PlayFabServerLoginWithXboxIdRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabServerGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* sandbox;
    const char* xboxId;

} PlayFabServerLoginWithXboxIdRequest;

typedef struct PlayFabServerLoginWithXboxRequest
{
    PF_OPTIONAL bool* createAccount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabServerGetPlayerCombinedInfoRequestParams* infoRequestParameters;
    const char* xboxToken;

} PlayFabServerLoginWithXboxRequest;

typedef struct PlayFabServerModifyCharacterVirtualCurrencyResult
{
    int32_t balance;
    const char* virtualCurrency;

} PlayFabServerModifyCharacterVirtualCurrencyResult;

typedef struct PlayFabServerModifyItemUsesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* itemInstanceId;
    const char* playFabId;
    int32_t usesToAdd;

} PlayFabServerModifyItemUsesRequest;

typedef struct PlayFabServerModifyItemUsesResult
{
    const char* itemInstanceId;
    int32_t remainingUses;

} PlayFabServerModifyItemUsesResult;

typedef struct PlayFabServerModifyUserVirtualCurrencyResult
{
    int32_t balance;
    int32_t balanceChange;
    const char* playFabId;
    const char* virtualCurrency;

} PlayFabServerModifyUserVirtualCurrencyResult;

typedef struct PlayFabServerMoveItemToCharacterFromCharacterRequest
{
    const char* givingCharacterId;
    const char* itemInstanceId;
    const char* playFabId;
    const char* receivingCharacterId;

} PlayFabServerMoveItemToCharacterFromCharacterRequest;

typedef struct PlayFabServerMoveItemToCharacterFromCharacterResult
{

} PlayFabServerMoveItemToCharacterFromCharacterResult;

typedef struct PlayFabServerMoveItemToCharacterFromUserRequest
{
    const char* characterId;
    const char* itemInstanceId;
    const char* playFabId;

} PlayFabServerMoveItemToCharacterFromUserRequest;

typedef struct PlayFabServerMoveItemToCharacterFromUserResult
{

} PlayFabServerMoveItemToCharacterFromUserResult;

typedef struct PlayFabServerMoveItemToUserFromCharacterRequest
{
    const char* characterId;
    const char* itemInstanceId;
    const char* playFabId;

} PlayFabServerMoveItemToUserFromCharacterRequest;

typedef struct PlayFabServerMoveItemToUserFromCharacterResult
{

} PlayFabServerMoveItemToUserFromCharacterResult;

typedef struct PlayFabServerNotifyMatchmakerPlayerLeftRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* lobbyId;
    const char* playFabId;

} PlayFabServerNotifyMatchmakerPlayerLeftRequest;

typedef struct PlayFabServerNotifyMatchmakerPlayerLeftResult
{
    PF_OPTIONAL PlayFabServerPlayerConnectionState* playerState;

} PlayFabServerNotifyMatchmakerPlayerLeftResult;

typedef struct PlayFabServerPushNotificationPackage
{
    int32_t badge;
    const char* customData;
    const char* icon;
    const char* message;
    const char* sound;
    const char* title;

} PlayFabServerPushNotificationPackage;

typedef struct PlayFabServerRedeemCouponRequest
{
    const char* catalogVersion;
    const char* characterId;
    const char* couponCode;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerRedeemCouponRequest;

typedef struct PlayFabServerRedeemCouponResult
{
    PF_ARRAY PlayFabServerItemInstance** grantedItems;
    PF_COLLECTION_COUNT uint32_t grantedItemsCount;

} PlayFabServerRedeemCouponResult;

typedef struct PlayFabServerRedeemMatchmakerTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* lobbyId;
    const char* ticket;

} PlayFabServerRedeemMatchmakerTicketRequest;

typedef struct PlayFabServerRedeemMatchmakerTicketResult
{
    const char* error;
    bool ticketIsValid;
    PF_OPTIONAL PlayFabServerUserAccountInfo* userInfo;

} PlayFabServerRedeemMatchmakerTicketResult;

typedef struct PlayFabServerRefreshGameServerInstanceHeartbeatRequest
{
    const char* lobbyId;

} PlayFabServerRefreshGameServerInstanceHeartbeatRequest;

typedef struct PlayFabServerRefreshGameServerInstanceHeartbeatResult
{

} PlayFabServerRefreshGameServerInstanceHeartbeatResult;

typedef struct PlayFabServerRegisterGameRequest
{
    const char* build;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* gameMode;
    const char* lobbyId;
    PlayFabServerRegion region;
    const char* serverIPV4Address;
    const char* serverIPV6Address;
    const char* serverPort;
    const char* serverPublicDNSName;
    PF_MAP struct PlayFabStringDictionaryEntry* tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;

} PlayFabServerRegisterGameRequest;

typedef struct PlayFabServerRegisterGameResponse
{
    const char* lobbyId;

} PlayFabServerRegisterGameResponse;

typedef struct PlayFabServerRemoveFriendRequest
{
    const char* friendPlayFabId;
    const char* playFabId;

} PlayFabServerRemoveFriendRequest;

typedef struct PlayFabServerRemoveGenericIDRequest
{
    PlayFabServerGenericServiceId* genericId;
    const char* playFabId;

} PlayFabServerRemoveGenericIDRequest;

typedef struct PlayFabServerRemovePlayerTagRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* tagName;

} PlayFabServerRemovePlayerTagRequest;

typedef struct PlayFabServerRemovePlayerTagResult
{

} PlayFabServerRemovePlayerTagResult;

typedef struct PlayFabServerRemoveSharedGroupMembersRequest
{
    PF_ARRAY const char** playFabIds;
    PF_COLLECTION_COUNT uint32_t playFabIdsCount;
    const char* sharedGroupId;

} PlayFabServerRemoveSharedGroupMembersRequest;

typedef struct PlayFabServerRemoveSharedGroupMembersResult
{

} PlayFabServerRemoveSharedGroupMembersResult;

typedef struct PlayFabServerReportPlayerServerRequest
{
    const char* comment;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* reporteeId;
    const char* reporterId;

} PlayFabServerReportPlayerServerRequest;

typedef struct PlayFabServerReportPlayerServerResult
{
    int32_t submissionsRemaining;

} PlayFabServerReportPlayerServerResult;

typedef struct PlayFabServerRevokeAllBansForUserRequest
{
    const char* playFabId;

} PlayFabServerRevokeAllBansForUserRequest;

typedef struct PlayFabServerRevokeAllBansForUserResult
{
    PF_ARRAY PlayFabServerBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;

} PlayFabServerRevokeAllBansForUserResult;

typedef struct PlayFabServerRevokeBansRequest
{
    PF_ARRAY const char** banIds;
    PF_COLLECTION_COUNT uint32_t banIdsCount;

} PlayFabServerRevokeBansRequest;

typedef struct PlayFabServerRevokeBansResult
{
    PF_ARRAY PlayFabServerBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;

} PlayFabServerRevokeBansResult;

typedef struct PlayFabServerRevokeInventoryItem
{
    const char* characterId;
    const char* itemInstanceId;
    const char* playFabId;

} PlayFabServerRevokeInventoryItem;

typedef struct PlayFabServerRevokeInventoryItemRequest
{
    const char* characterId;
    const char* itemInstanceId;
    const char* playFabId;

} PlayFabServerRevokeInventoryItemRequest;

typedef struct PlayFabServerRevokeInventoryItemsRequest
{
    PF_ARRAY PlayFabServerRevokeInventoryItem** items;
    PF_COLLECTION_COUNT uint32_t itemsCount;

} PlayFabServerRevokeInventoryItemsRequest;

typedef struct PlayFabServerRevokeItemError
{
    PF_OPTIONAL PlayFabServerGenericErrorCodes* error;
    PF_OPTIONAL PlayFabServerRevokeInventoryItem* item;

} PlayFabServerRevokeItemError;

typedef struct PlayFabServerRevokeInventoryItemsResult
{
    PF_ARRAY PlayFabServerRevokeItemError** errors;
    PF_COLLECTION_COUNT uint32_t errorsCount;

} PlayFabServerRevokeInventoryItemsResult;

typedef struct PlayFabServerRevokeInventoryResult
{

} PlayFabServerRevokeInventoryResult;

typedef struct PlayFabServerSavePushNotificationTemplateRequest
{
    const char* androidPayload;
    const char* id;
    const char* iOSPayload;
    PF_MAP struct PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry* localizedPushNotificationTemplates;
    PF_COLLECTION_COUNT uint32_t localizedPushNotificationTemplatesCount;
    const char* name;

} PlayFabServerSavePushNotificationTemplateRequest;

typedef struct PlayFabServerSavePushNotificationTemplateResult
{
    const char* pushNotificationTemplateId;

} PlayFabServerSavePushNotificationTemplateResult;

typedef struct PlayFabServerSendCustomAccountRecoveryEmailRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* email;
    const char* emailTemplateId;
    const char* username;

} PlayFabServerSendCustomAccountRecoveryEmailRequest;

typedef struct PlayFabServerSendCustomAccountRecoveryEmailResult
{

} PlayFabServerSendCustomAccountRecoveryEmailResult;

typedef struct PlayFabServerSendEmailFromTemplateRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* emailTemplateId;
    const char* playFabId;

} PlayFabServerSendEmailFromTemplateRequest;

typedef struct PlayFabServerSendEmailFromTemplateResult
{

} PlayFabServerSendEmailFromTemplateResult;

typedef struct PlayFabServerSendPushNotificationFromTemplateRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* pushNotificationTemplateId;
    const char* recipient;

} PlayFabServerSendPushNotificationFromTemplateRequest;

typedef struct PlayFabServerSendPushNotificationRequest
{
    PF_ARRAY PlayFabServerAdvancedPushPlatformMsg** advancedPlatformDelivery;
    PF_COLLECTION_COUNT uint32_t advancedPlatformDeliveryCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* message;
    PF_OPTIONAL PlayFabServerPushNotificationPackage* package;
    const char* recipient;
    const char* subject;
    PF_ARRAY PlayFabServerPushNotificationPlatform* targetPlatforms;
    PF_COLLECTION_COUNT uint32_t targetPlatformsCount;

} PlayFabServerSendPushNotificationRequest;

typedef struct PlayFabServerSendPushNotificationResult
{

} PlayFabServerSendPushNotificationResult;

typedef struct PlayFabServerUserSettings
{
    bool gatherDeviceInfo;
    bool gatherFocusInfo;
    bool needsAttribution;

} PlayFabServerUserSettings;

typedef struct PlayFabServerVariable
{
    const char* name;
    const char* value;

} PlayFabServerVariable;

typedef struct PlayFabServerTreatmentAssignment
{
    PF_ARRAY PlayFabServerVariable** variables;
    PF_COLLECTION_COUNT uint32_t variablesCount;
    PF_ARRAY const char** variants;
    PF_COLLECTION_COUNT uint32_t variantsCount;

} PlayFabServerTreatmentAssignment;

typedef struct PlayFabServerServerLoginResult
{
    PF_OPTIONAL PlayFabServerEntityTokenResponse* entityToken;
    PF_OPTIONAL PlayFabServerGetPlayerCombinedInfoResultPayload* infoResultPayload;
    PF_OPTIONAL time_t* lastLoginTime;
    bool newlyCreated;
    const char* playFabId;
    const char* sessionTicket;
    PF_OPTIONAL PlayFabServerUserSettings* settingsForUser;
    PF_OPTIONAL PlayFabServerTreatmentAssignment* treatmentAssignment;

} PlayFabServerServerLoginResult;

typedef struct PlayFabServerSetFriendTagsRequest
{
    const char* friendPlayFabId;
    const char* playFabId;
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;

} PlayFabServerSetFriendTagsRequest;

typedef struct PlayFabServerSetGameServerInstanceDataRequest
{
    const char* gameServerData;
    const char* lobbyId;

} PlayFabServerSetGameServerInstanceDataRequest;

typedef struct PlayFabServerSetGameServerInstanceDataResult
{

} PlayFabServerSetGameServerInstanceDataResult;

typedef struct PlayFabServerSetGameServerInstanceStateRequest
{
    const char* lobbyId;
    PlayFabServerGameInstanceState state;

} PlayFabServerSetGameServerInstanceStateRequest;

typedef struct PlayFabServerSetGameServerInstanceStateResult
{

} PlayFabServerSetGameServerInstanceStateResult;

typedef struct PlayFabServerSetGameServerInstanceTagsRequest
{
    const char* lobbyId;
    PF_MAP struct PlayFabStringDictionaryEntry* tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;

} PlayFabServerSetGameServerInstanceTagsRequest;

typedef struct PlayFabServerSetGameServerInstanceTagsResult
{

} PlayFabServerSetGameServerInstanceTagsResult;

typedef struct PlayFabServerSetPlayerSecretRequest
{
    const char* playerSecret;
    const char* playFabId;

} PlayFabServerSetPlayerSecretRequest;

typedef struct PlayFabServerSetPlayerSecretResult
{

} PlayFabServerSetPlayerSecretResult;

typedef struct PlayFabServerSetPublisherDataRequest
{
    const char* key;
    const char* value;

} PlayFabServerSetPublisherDataRequest;

typedef struct PlayFabServerSetPublisherDataResult
{

} PlayFabServerSetPublisherDataResult;

typedef struct PlayFabServerSetTitleDataRequest
{
    const char* key;
    const char* value;

} PlayFabServerSetTitleDataRequest;

typedef struct PlayFabServerSetTitleDataResult
{

} PlayFabServerSetTitleDataResult;

typedef struct PlayFabServerStatisticUpdate
{
    const char* statisticName;
    int32_t value;
    PF_OPTIONAL uint32_t* version;

} PlayFabServerStatisticUpdate;

typedef struct PlayFabServerSubtractCharacterVirtualCurrencyRequest
{
    int32_t amount;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* virtualCurrency;

} PlayFabServerSubtractCharacterVirtualCurrencyRequest;

typedef struct PlayFabServerSubtractUserVirtualCurrencyRequest
{
    int32_t amount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* virtualCurrency;

} PlayFabServerSubtractUserVirtualCurrencyRequest;

typedef struct PlayFabServerUnlinkPSNAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerUnlinkPSNAccountRequest;

typedef struct PlayFabServerUnlinkPSNAccountResult
{

} PlayFabServerUnlinkPSNAccountResult;

typedef struct PlayFabServerUnlinkServerCustomIdRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;
    const char* serverCustomId;

} PlayFabServerUnlinkServerCustomIdRequest;

typedef struct PlayFabServerUnlinkServerCustomIdResult
{

} PlayFabServerUnlinkServerCustomIdResult;

typedef struct PlayFabServerUnlinkXboxAccountRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerUnlinkXboxAccountRequest;

typedef struct PlayFabServerUnlinkXboxAccountResult
{

} PlayFabServerUnlinkXboxAccountResult;

typedef struct PlayFabServerUnlockContainerInstanceRequest
{
    const char* catalogVersion;
    const char* characterId;
    const char* containerItemInstanceId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* keyItemInstanceId;
    const char* playFabId;

} PlayFabServerUnlockContainerInstanceRequest;

typedef struct PlayFabServerUnlockContainerItemRequest
{
    const char* catalogVersion;
    const char* characterId;
    const char* containerItemId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerUnlockContainerItemRequest;

typedef struct PlayFabServerUnlockContainerItemResult
{
    PF_ARRAY PlayFabServerItemInstance** grantedItems;
    PF_COLLECTION_COUNT uint32_t grantedItemsCount;
    const char* unlockedItemInstanceId;
    const char* unlockedWithItemInstanceId;
    PF_MAP struct PlayFabUint32DictionaryEntry* virtualCurrency;
    PF_COLLECTION_COUNT uint32_t virtualCurrencyCount;

} PlayFabServerUnlockContainerItemResult;

typedef struct PlayFabServerUpdateAvatarUrlRequest
{
    const char* imageUrl;
    const char* playFabId;

} PlayFabServerUpdateAvatarUrlRequest;

typedef struct PlayFabServerUpdateBanRequest
{
    PF_OPTIONAL bool* active;
    const char* banId;
    PF_OPTIONAL time_t* expires;
    const char* iPAddress;
    const char* mACAddress;
    PF_OPTIONAL bool* permanent;
    const char* reason;

} PlayFabServerUpdateBanRequest;

typedef struct PlayFabServerUpdateBansRequest
{
    PF_ARRAY PlayFabServerUpdateBanRequest** bans;
    PF_COLLECTION_COUNT uint32_t bansCount;

} PlayFabServerUpdateBansRequest;

typedef struct PlayFabServerUpdateBansResult
{
    PF_ARRAY PlayFabServerBanInfo** banData;
    PF_COLLECTION_COUNT uint32_t banDataCount;

} PlayFabServerUpdateBansResult;

typedef struct PlayFabServerUpdateCharacterDataRequest
{
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    PF_OPTIONAL PlayFabServerUserDataPermission* permission;
    const char* playFabId;

} PlayFabServerUpdateCharacterDataRequest;

typedef struct PlayFabServerUpdateCharacterDataResult
{
    uint32_t dataVersion;

} PlayFabServerUpdateCharacterDataResult;

typedef struct PlayFabServerUpdateCharacterStatisticsRequest
{
    const char* characterId;
    PF_MAP struct PlayFabInt32DictionaryEntry* characterStatistics;
    PF_COLLECTION_COUNT uint32_t characterStatisticsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* playFabId;

} PlayFabServerUpdateCharacterStatisticsRequest;

typedef struct PlayFabServerUpdateCharacterStatisticsResult
{

} PlayFabServerUpdateCharacterStatisticsResult;

typedef struct PlayFabServerUpdatePlayerStatisticsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* forceUpdate;
    const char* playFabId;
    PF_ARRAY PlayFabServerStatisticUpdate** statistics;
    PF_COLLECTION_COUNT uint32_t statisticsCount;

} PlayFabServerUpdatePlayerStatisticsRequest;

typedef struct PlayFabServerUpdatePlayerStatisticsResult
{

} PlayFabServerUpdatePlayerStatisticsResult;

typedef struct PlayFabServerUpdateSharedGroupDataRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    PF_OPTIONAL PlayFabServerUserDataPermission* permission;
    const char* sharedGroupId;

} PlayFabServerUpdateSharedGroupDataRequest;

typedef struct PlayFabServerUpdateSharedGroupDataResult
{

} PlayFabServerUpdateSharedGroupDataResult;

typedef struct PlayFabServerUpdateUserDataRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    PF_OPTIONAL PlayFabServerUserDataPermission* permission;
    const char* playFabId;

} PlayFabServerUpdateUserDataRequest;

typedef struct PlayFabServerUpdateUserDataResult
{
    uint32_t dataVersion;

} PlayFabServerUpdateUserDataResult;

typedef struct PlayFabServerUpdateUserInternalDataRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    const char* playFabId;

} PlayFabServerUpdateUserInternalDataRequest;

typedef struct PlayFabServerUpdateUserInventoryItemDataRequest
{
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* data;
    PF_COLLECTION_COUNT uint32_t dataCount;
    const char* itemInstanceId;
    PF_ARRAY const char** keysToRemove;
    PF_COLLECTION_COUNT uint32_t keysToRemoveCount;
    const char* playFabId;

} PlayFabServerUpdateUserInventoryItemDataRequest;

typedef struct PlayFabServerWriteEventResponse
{
    const char* eventId;

} PlayFabServerWriteEventResponse;

typedef struct PlayFabServerWriteServerCharacterEventRequest
{
    PlayFabJsonObject body;
    const char* characterId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* eventName;
    const char* playFabId;
    PF_OPTIONAL time_t* timestamp;

} PlayFabServerWriteServerCharacterEventRequest;

typedef struct PlayFabServerWriteServerPlayerEventRequest
{
    PlayFabJsonObject body;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* eventName;
    const char* playFabId;
    PF_OPTIONAL time_t* timestamp;

} PlayFabServerWriteServerPlayerEventRequest;

typedef struct PlayFabServerWriteTitleEventRequest
{
    PlayFabJsonObject body;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* eventName;
    PF_OPTIONAL time_t* timestamp;

} PlayFabServerWriteTitleEventRequest;


// Server dictionary entry structs
typedef struct PlayFabServerUserDataRecordDictionaryEntry
{
    const char* key;
    PlayFabServerUserDataRecord* value;
} PlayFabServerUserDataRecordDictionaryEntry;

typedef struct PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry
{
    const char* key;
    PlayFabServerVirtualCurrencyRechargeTime* value;
} PlayFabServerVirtualCurrencyRechargeTimeDictionaryEntry;

typedef struct PlayFabServerRandomResultTableListingDictionaryEntry
{
    const char* key;
    PlayFabServerRandomResultTableListing* value;
} PlayFabServerRandomResultTableListingDictionaryEntry;

typedef struct PlayFabServerSharedGroupDataRecordDictionaryEntry
{
    const char* key;
    PlayFabServerSharedGroupDataRecord* value;
} PlayFabServerSharedGroupDataRecordDictionaryEntry;

typedef struct PlayFabServerPlayerLocationDictionaryEntry
{
    const char* key;
    PlayFabServerPlayerLocation* value;
} PlayFabServerPlayerLocationDictionaryEntry;

typedef struct PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry
{
    const char* key;
    PlayFabServerLocalizedPushNotificationProperties* value;
} PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry;


#pragma pop_macro("IN")
