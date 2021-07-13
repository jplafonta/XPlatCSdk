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
/// AuthTokenType enum.
/// </summary>
enum class PlayFabAdminAuthTokenType : uint32_t
{
    Email
};

/// <summary>
/// Conditionals enum.
/// </summary>
enum class PlayFabAdminConditionals : uint32_t
{
    Any,
    True,
    False
};

/// <summary>
/// EffectType enum.
/// </summary>
enum class PlayFabAdminEffectType : uint32_t
{
    Allow,
    Deny
};

/// <summary>
/// GameBuildStatus enum.
/// </summary>
enum class PlayFabAdminGameBuildStatus : uint32_t
{
    Available,
    Validating,
    InvalidBuildPackage,
    Processing,
    FailedToProcess
};

/// <summary>
/// GenericErrorCodes enum.
/// </summary>
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
    PaidInsightsFeaturesNotEnabled,
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
    TenantShardMapperShardNotFound,
    TitleNotEnabledForParty,
    PartyVersionNotFound,
    MultiplayerServerBuildReferencedByMatchmakingQueue,
    MultiplayerServerBuildReferencedByBuildAlias,
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
    AsyncExportNotInFlight,
    AsyncExportNotFound,
    AsyncExportRateLimitExceeded,
    SnapshotNotFound,
    InventoryApiNotImplemented
};

/// <summary>
/// PushSetupPlatform enum.
/// </summary>
enum class PlayFabAdminPushSetupPlatform : uint32_t
{
    GCM,
    APNS,
    APNS_SANDBOX
};

/// <summary>
/// Region enum.
/// </summary>
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

/// <summary>
/// ResolutionOutcome enum.
/// </summary>
enum class PlayFabAdminResolutionOutcome : uint32_t
{
    Revoke,
    Reinstate,
    Manual
};

/// <summary>
/// ResultTableNodeType enum.
/// </summary>
enum class PlayFabAdminResultTableNodeType : uint32_t
{
    ItemId,
    TableId
};

/// <summary>
/// ScheduledTaskType enum.
/// </summary>
enum class PlayFabAdminScheduledTaskType : uint32_t
{
    CloudScript,
    ActionsOnPlayerSegment,
    CloudScriptAzureFunctions,
    InsightsScheduledScaling
};

/// <summary>
/// SegmentCountryCode enum.
/// </summary>
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

/// <summary>
/// SegmentCurrency enum.
/// </summary>
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

/// <summary>
/// SegmentFilterComparison enum.
/// </summary>
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

/// <summary>
/// SegmentLoginIdentityProvider enum.
/// </summary>
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

/// <summary>
/// SegmentPushNotificationDevicePlatform enum.
/// </summary>
enum class PlayFabAdminSegmentPushNotificationDevicePlatform : uint32_t
{
    ApplePushNotificationService,
    GoogleCloudMessaging
};

/// <summary>
/// SourceType enum.
/// </summary>
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

/// <summary>
/// StatisticAggregationMethod enum.
/// </summary>
enum class PlayFabAdminStatisticAggregationMethod : uint32_t
{
    Last,
    Min,
    Max,
    Sum
};

/// <summary>
/// StatisticResetIntervalOption enum.
/// </summary>
enum class PlayFabAdminStatisticResetIntervalOption : uint32_t
{
    Never,
    Hour,
    Day,
    Week,
    Month
};

/// <summary>
/// StatisticVersionArchivalStatus enum.
/// </summary>
enum class PlayFabAdminStatisticVersionArchivalStatus : uint32_t
{
    NotScheduled,
    Scheduled,
    Queued,
    InProgress,
    Complete
};

/// <summary>
/// StatisticVersionStatus enum.
/// </summary>
enum class PlayFabAdminStatisticVersionStatus : uint32_t
{
    Active,
    SnapshotPending,
    Snapshot,
    ArchivalPending,
    Archived
};

/// <summary>
/// TaskInstanceStatus enum.
/// </summary>
enum class PlayFabAdminTaskInstanceStatus : uint32_t
{
    Succeeded,
    Starting,
    InProgress,
    Failed,
    Aborted,
    Stalled
};

/// <summary>
/// PlayFabAdminAbortTaskInstanceRequest data model. If the task instance has already completed, there
/// will be no-op. Request object for PlayFabAdminAbortTaskInstanceAsync.
/// </summary>
typedef struct PlayFabAdminAbortTaskInstanceRequest
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
    /// ID of a task instance that is being aborted.
    /// </summary>
    const char* taskInstanceId;

} PlayFabAdminAbortTaskInstanceRequest;

/// <summary>
/// PlayFabAdminActionsOnPlayersInSegmentTaskParameter data model.
/// </summary>
typedef struct PlayFabAdminActionsOnPlayersInSegmentTaskParameter
{
    /// <summary>
    /// ID of the action to perform on each player in segment.
    /// </summary>
    const char* actionId;

    /// <summary>
    /// ID of the segment to perform actions on.
    /// </summary>
    const char* segmentId;

} PlayFabAdminActionsOnPlayersInSegmentTaskParameter;

/// <summary>
/// PlayFabAdminNameIdentifier data model. Identifier by either name or ID. Note that a name may change
/// due to renaming, or reused after being deleted. ID is immutable and unique.
/// </summary>
typedef struct PlayFabAdminNameIdentifier
{
    /// <summary>
    /// (Optional) Id Identifier, if present.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) Name Identifier, if present.
    /// </summary>
    const char* name;

} PlayFabAdminNameIdentifier;

/// <summary>
/// PlayFabAdminActionsOnPlayersInSegmentTaskSummary data model.
/// </summary>
typedef struct PlayFabAdminActionsOnPlayersInSegmentTaskSummary
{
    /// <summary>
    /// (Optional) UTC timestamp when the task completed.
    /// </summary>
    time_t const* completedAt;

    /// <summary>
    /// (Optional) Error message for last processing attempt, if an error occured.
    /// </summary>
    const char* errorMessage;

    /// <summary>
    /// (Optional) Flag indicating if the error was fatal, if false job will be retried.
    /// </summary>
    bool const* errorWasFatal;

    /// <summary>
    /// (Optional) Estimated time remaining in seconds.
    /// </summary>
    double const* estimatedSecondsRemaining;

    /// <summary>
    /// (Optional) Progress represented as percentage.
    /// </summary>
    double const* percentComplete;

    /// <summary>
    /// (Optional) If manually scheduled, ID of user who scheduled the task.
    /// </summary>
    const char* scheduledByUserId;

    /// <summary>
    /// UTC timestamp when the task started.
    /// </summary>
    time_t startedAt;

    /// <summary>
    /// (Optional) Current status of the task instance.
    /// </summary>
    PlayFabAdminTaskInstanceStatus const* status;

    /// <summary>
    /// (Optional) Identifier of the task this instance belongs to.
    /// </summary>
    PlayFabAdminNameIdentifier const* taskIdentifier;

    /// <summary>
    /// (Optional) ID of the task instance.
    /// </summary>
    const char* taskInstanceId;

    /// <summary>
    /// (Optional) Total players in segment when task was started.
    /// </summary>
    int32_t const* totalPlayersInSegment;

    /// <summary>
    /// (Optional) Total number of players that have had the actions applied to.
    /// </summary>
    int32_t const* totalPlayersProcessed;

} PlayFabAdminActionsOnPlayersInSegmentTaskSummary;

/// <summary>
/// PlayFabAdminAdCampaignAttribution data model.
/// </summary>
typedef struct PlayFabAdminAdCampaignAttribution
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

} PlayFabAdminAdCampaignAttribution;

/// <summary>
/// PlayFabAdminAdCampaignSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminAdCampaignSegmentFilter
{
    /// <summary>
    /// (Optional) Campaign id.
    /// </summary>
    const char* campaignId;

    /// <summary>
    /// (Optional) Campaign source.
    /// </summary>
    const char* campaignSource;

    /// <summary>
    /// (Optional) Campaign comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

} PlayFabAdminAdCampaignSegmentFilter;

/// <summary>
/// PlayFabAdminAddLocalizedNewsRequest data model. Request object for PlayFabAdminAddLocalizedNewsAsync.
/// </summary>
typedef struct PlayFabAdminAddLocalizedNewsRequest
{
    /// <summary>
    /// Localized body text of the news.
    /// </summary>
    const char* body;

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
    /// Language of the news item.
    /// </summary>
    const char* language;

    /// <summary>
    /// Unique id of the updated news item.
    /// </summary>
    const char* newsId;

    /// <summary>
    /// Localized title (headline) of the news item.
    /// </summary>
    const char* title;

} PlayFabAdminAddLocalizedNewsRequest;

/// <summary>
/// PlayFabAdminAddNewsRequest data model. Request object for PlayFabAdminAddNewsAsync.
/// </summary>
typedef struct PlayFabAdminAddNewsRequest
{
    /// <summary>
    /// Default body text of the news.
    /// </summary>
    const char* body;

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
    /// (Optional) Time this news was published. If not set, defaults to now.
    /// </summary>
    time_t const* timestamp;

    /// <summary>
    /// Default title (headline) of the news item.
    /// </summary>
    const char* title;

} PlayFabAdminAddNewsRequest;

/// <summary>
/// PlayFabAdminAddNewsResult data model. Result payload for PlayFabAdminAddNewsAsync.
/// </summary>
typedef struct PlayFabAdminAddNewsResult
{
    /// <summary>
    /// (Optional) Unique id of the new news item.
    /// </summary>
    const char* newsId;

} PlayFabAdminAddNewsResult;

/// <summary>
/// PlayFabAdminAddPlayerTagRequest data model. This API will trigger a player_tag_added event and add
/// a tag with the given TagName and PlayFabID to the corresponding player profile. TagName can be used
/// for segmentation and it is limited to 256 characters. Also there is a limit on the number of tags
/// a title can have. Request object for PlayFabAdminAddPlayerTagAsync.
/// </summary>
typedef struct PlayFabAdminAddPlayerTagRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique tag for player profile.
    /// </summary>
    const char* tagName;

} PlayFabAdminAddPlayerTagRequest;

/// <summary>
/// PlayFabAdminAddServerBuildRequest data model. Request object for PlayFabAdminAddServerBuildAsync.
/// </summary>
typedef struct PlayFabAdminAddServerBuildRequest
{
    /// <summary>
    /// (Optional) Server host regions in which this build should be running and available.
    /// </summary>
    PlayFabAdminRegion const* activeRegions;

    /// <summary>
    /// Count of activeRegions
    /// </summary>
    uint32_t activeRegionsCount;

    /// <summary>
    /// Unique identifier for the build executable.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) Appended to the end of the command line when starting game servers.
    /// </summary>
    const char* commandLineTemplate;

    /// <summary>
    /// (Optional) Developer comment(s) for this build.
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
    /// (Optional) Path to the game server executable. Defaults to gameserver.exe.
    /// </summary>
    const char* executablePath;

    /// <summary>
    /// Maximum number of game server instances that can run on a single host machine.
    /// </summary>
    int32_t maxGamesPerHost;

    /// <summary>
    /// Minimum capacity of additional game server instances that can be started before the autoscaling
    /// service starts new host machines (given the number of current running host machines and game server
    /// instances).
    /// </summary>
    int32_t minFreeGameSlots;

} PlayFabAdminAddServerBuildRequest;

/// <summary>
/// PlayFabAdminAddServerBuildResult data model. Result payload for PlayFabAdminAddServerBuildAsync.
/// </summary>
typedef struct PlayFabAdminAddServerBuildResult
{
    /// <summary>
    /// (Optional) Array of regions where this build can used, when it is active.
    /// </summary>
    PlayFabAdminRegion const* activeRegions;

    /// <summary>
    /// Count of activeRegions
    /// </summary>
    uint32_t activeRegionsCount;

    /// <summary>
    /// (Optional) Unique identifier for this build executable.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) Appended to the end of the command line when starting game servers.
    /// </summary>
    const char* commandLineTemplate;

    /// <summary>
    /// (Optional) Developer comment(s) for this build.
    /// </summary>
    const char* comment;

    /// <summary>
    /// (Optional) Path to the game server executable. Defaults to gameserver.exe.
    /// </summary>
    const char* executablePath;

    /// <summary>
    /// Maximum number of game server instances that can run on a single host machine.
    /// </summary>
    int32_t maxGamesPerHost;

    /// <summary>
    /// Minimum capacity of additional game server instances that can be started before the autoscaling
    /// service starts new host machines (given the number of current running host machines and game server
    /// instances).
    /// </summary>
    int32_t minFreeGameSlots;

    /// <summary>
    /// (Optional) The current status of the build validation and processing steps.
    /// </summary>
    PlayFabAdminGameBuildStatus const* status;

    /// <summary>
    /// Time this build was last modified (or uploaded, if this build has never been modified).
    /// </summary>
    time_t timestamp;

    /// <summary>
    /// (Optional) Unique identifier for the title, found in the Settings > Game Properties section of
    /// the PlayFab developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabAdminAddServerBuildResult;

/// <summary>
/// PlayFabAdminAddUserVirtualCurrencyRequest data model. Request object for PlayFabAdminAddUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabAdminAddUserVirtualCurrencyRequest
{
    /// <summary>
    /// Amount to be added to the user balance of the specified virtual currency. Maximum VC balance
    /// is Int32 (2,147,483,647). Any increase over this value will be discarded.
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
    /// PlayFab unique identifier of the user whose virtual currency balance is to be increased.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Name of the virtual currency which is to be incremented.
    /// </summary>
    const char* virtualCurrency;

} PlayFabAdminAddUserVirtualCurrencyRequest;

/// <summary>
/// PlayFabAdminVirtualCurrencyData data model.
/// </summary>
typedef struct PlayFabAdminVirtualCurrencyData
{
    /// <summary>
    /// Unique two-character identifier for this currency type (e.g.: "CC").
    /// </summary>
    const char* currencyCode;

    /// <summary>
    /// (Optional) Friendly name to show in the developer portal, reports, etc.
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) Amount to automatically grant users upon first login to the title.
    /// </summary>
    int32_t const* initialDeposit;

    /// <summary>
    /// (Optional) Maximum amount to which the currency will recharge (cannot exceed MaxAmount, but can
    /// be less).
    /// </summary>
    int32_t const* rechargeMax;

    /// <summary>
    /// (Optional) Rate at which the currency automatically be added to over time, in units per day (24
    /// hours).
    /// </summary>
    int32_t const* rechargeRate;

} PlayFabAdminVirtualCurrencyData;

/// <summary>
/// PlayFabAdminAddVirtualCurrencyTypesRequest data model. This operation is additive. Any new currencies
/// defined in the array will be added to the set of those available for the title, while any CurrencyCode
/// identifiers matching existing ones in the game will be overwritten with the new values. Request object
/// for PlayFabAdminAddVirtualCurrencyTypesAsync.
/// </summary>
typedef struct PlayFabAdminAddVirtualCurrencyTypesRequest
{
    /// <summary>
    /// List of virtual currencies and their initial deposits (the amount a user is granted when signing
    /// in for the first time) to the title.
    /// </summary>
    PlayFabAdminVirtualCurrencyData const* const* virtualCurrencies;

    /// <summary>
    /// Count of virtualCurrencies
    /// </summary>
    uint32_t virtualCurrenciesCount;

} PlayFabAdminAddVirtualCurrencyTypesRequest;

/// <summary>
/// PlayFabAdminApiCondition data model.
/// </summary>
typedef struct PlayFabAdminApiCondition
{
    /// <summary>
    /// (Optional) Require that API calls contain an RSA encrypted payload or signed headers.
    /// </summary>
    PlayFabAdminConditionals const* hasSignatureOrEncryption;

} PlayFabAdminApiCondition;

/// <summary>
/// PlayFabAdminBanInfo data model. Contains information for a ban.
/// </summary>
typedef struct PlayFabAdminBanInfo
{
    /// <summary>
    /// The active state of this ban. Expired bans may still have this value set to true but they will
    /// have no effect.
    /// </summary>
    bool active;

    /// <summary>
    /// (Optional) The unique Ban Id associated with this ban.
    /// </summary>
    const char* banId;

    /// <summary>
    /// (Optional) The time when this ban was applied.
    /// </summary>
    time_t const* created;

    /// <summary>
    /// (Optional) The time when this ban expires. Permanent bans do not have expiration date.
    /// </summary>
    time_t const* expires;

    /// <summary>
    /// (Optional) The IP address on which the ban was applied. May affect multiple players.
    /// </summary>
    const char* IPAddress;

    /// <summary>
    /// (Optional) The MAC address on which the ban was applied. May affect multiple players.
    /// </summary>
    const char* MACAddress;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) The reason why this ban was applied.
    /// </summary>
    const char* reason;

} PlayFabAdminBanInfo;

/// <summary>
/// PlayFabAdminBanPlayerSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminBanPlayerSegmentAction
{
    /// <summary>
    /// (Optional) Ban hours duration.
    /// </summary>
    uint32_t const* banHours;

    /// <summary>
    /// (Optional) Reason for ban.
    /// </summary>
    const char* reasonForBan;

} PlayFabAdminBanPlayerSegmentAction;

/// <summary>
/// PlayFabAdminBanRequest data model. Represents a single ban request.
/// </summary>
typedef struct PlayFabAdminBanRequest
{
    /// <summary>
    /// (Optional) The duration in hours for the ban. Leave this blank for a permanent ban.
    /// </summary>
    uint32_t const* durationInHours;

    /// <summary>
    /// (Optional) IP address to be banned. May affect multiple players.
    /// </summary>
    const char* IPAddress;

    /// <summary>
    /// (Optional) MAC address to be banned. May affect multiple players.
    /// </summary>
    const char* MACAddress;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) The reason for this ban. Maximum 140 characters.
    /// </summary>
    const char* reason;

} PlayFabAdminBanRequest;

/// <summary>
/// PlayFabAdminBanUsersRequest data model. The existence of each user will not be verified. When banning
/// by IP or MAC address, multiple players may be affected, so use this feature with caution. Returns
/// information about the new bans. Request object for PlayFabAdminBanUsersAsync.
/// </summary>
typedef struct PlayFabAdminBanUsersRequest
{
    /// <summary>
    /// List of ban requests to be applied. Maximum 100.
    /// </summary>
    PlayFabAdminBanRequest const* const* bans;

    /// <summary>
    /// Count of bans
    /// </summary>
    uint32_t bansCount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabAdminBanUsersRequest;

/// <summary>
/// PlayFabAdminBanUsersResult data model. Result payload for PlayFabAdminBanUsersAsync.
/// </summary>
typedef struct PlayFabAdminBanUsersResult
{
    /// <summary>
    /// (Optional) Information on the bans that were applied.
    /// </summary>
    PlayFabAdminBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabAdminBanUsersResult;

/// <summary>
/// PlayFabAdminCatalogItemBundleInfo data model.
/// </summary>
typedef struct PlayFabAdminCatalogItemBundleInfo
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

} PlayFabAdminCatalogItemBundleInfo;

/// <summary>
/// PlayFabAdminCatalogItemConsumableInfo data model.
/// </summary>
typedef struct PlayFabAdminCatalogItemConsumableInfo
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

} PlayFabAdminCatalogItemConsumableInfo;

/// <summary>
/// PlayFabAdminCatalogItemContainerInfo data model. Containers are inventory items that can hold other
/// items defined in the catalog, as well as virtual currency, which is added to the player inventory
/// when the container is unlocked, using the UnlockContainerItem API. The items can be anything defined
/// in the catalog, as well as RandomResultTable objects which will be resolved when the container is
/// unlocked. Containers and their keys should be defined as Consumable (having a limited number of uses)
/// in their catalog defintiions, unless the intent is for the player to be able to re-use them infinitely.
/// </summary>
typedef struct PlayFabAdminCatalogItemContainerInfo
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

} PlayFabAdminCatalogItemContainerInfo;

/// <summary>
/// PlayFabAdminCatalogItem data model. A purchasable item from the item catalog.
/// </summary>
typedef struct PlayFabAdminCatalogItem
{
    /// <summary>
    /// (Optional) Defines the bundle properties for the item - bundles are items which contain other
    /// items, including random drop tables and virtual currencies.
    /// </summary>
    PlayFabAdminCatalogItemBundleInfo const* bundle;

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
    PlayFabAdminCatalogItemConsumableInfo const* consumable;

    /// <summary>
    /// (Optional) Defines the container properties for the item - what items it contains, including
    /// random drop tables and virtual currencies, and what item (if any) is required to open it via the
    /// UnlockContainerItem API.
    /// </summary>
    PlayFabAdminCatalogItemContainerInfo const* container;

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

} PlayFabAdminCatalogItem;

/// <summary>
/// PlayFabAdminCheckLimitedEditionItemAvailabilityRequest data model. This returns the total number
/// of these items available. Request object for PlayFabAdminCheckLimitedEditionItemAvailabilityAsync.
/// </summary>
typedef struct PlayFabAdminCheckLimitedEditionItemAvailabilityRequest
{
    /// <summary>
    /// (Optional) Which catalog is being updated. If null, uses the default catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// The item to check for.
    /// </summary>
    const char* itemId;

} PlayFabAdminCheckLimitedEditionItemAvailabilityRequest;

/// <summary>
/// PlayFabAdminCheckLimitedEditionItemAvailabilityResult data model. Result payload for PlayFabAdminCheckLimitedEditionItemAvailabilityAsync.
/// </summary>
typedef struct PlayFabAdminCheckLimitedEditionItemAvailabilityResult
{
    /// <summary>
    /// The amount of the specified resource remaining.
    /// </summary>
    int32_t amount;

} PlayFabAdminCheckLimitedEditionItemAvailabilityResult;

/// <summary>
/// PlayFabAdminCloudScriptFile data model.
/// </summary>
typedef struct PlayFabAdminCloudScriptFile
{
    /// <summary>
    /// Contents of the Cloud Script javascript. Must be string-escaped javascript.
    /// </summary>
    const char* fileContents;

    /// <summary>
    /// Name of the javascript file. These names are not used internally by the server, they are only
    /// for developer organizational purposes.
    /// </summary>
    const char* filename;

} PlayFabAdminCloudScriptFile;

/// <summary>
/// PlayFabAdminCloudScriptTaskParameter data model.
/// </summary>
typedef struct PlayFabAdminCloudScriptTaskParameter
{
    /// <summary>
    /// (Optional) Argument to pass to the CloudScript function.
    /// </summary>
    PlayFabJsonObject argument;

    /// <summary>
    /// (Optional) Name of the CloudScript function to execute.
    /// </summary>
    const char* functionName;

} PlayFabAdminCloudScriptTaskParameter;

/// <summary>
/// PlayFabAdminScriptExecutionError data model.
/// </summary>
typedef struct PlayFabAdminScriptExecutionError
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

} PlayFabAdminScriptExecutionError;

/// <summary>
/// PlayFabAdminLogStatement data model.
/// </summary>
typedef struct PlayFabAdminLogStatement
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

} PlayFabAdminLogStatement;

/// <summary>
/// PlayFabAdminExecuteCloudScriptResult data model.
/// </summary>
typedef struct PlayFabAdminExecuteCloudScriptResult
{
    /// <summary>
    /// Number of PlayFab API requests issued by the CloudScript function.
    /// </summary>
    int32_t aPIRequestsIssued;

    /// <summary>
    /// (Optional) Information about the error, if any, that occurred during execution.
    /// </summary>
    PlayFabAdminScriptExecutionError const* error;

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
    PlayFabAdminLogStatement const* const* logs;

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

} PlayFabAdminExecuteCloudScriptResult;

/// <summary>
/// PlayFabAdminCloudScriptTaskSummary data model.
/// </summary>
typedef struct PlayFabAdminCloudScriptTaskSummary
{
    /// <summary>
    /// (Optional) UTC timestamp when the task completed.
    /// </summary>
    time_t const* completedAt;

    /// <summary>
    /// (Optional) Estimated time remaining in seconds.
    /// </summary>
    double const* estimatedSecondsRemaining;

    /// <summary>
    /// (Optional) Progress represented as percentage.
    /// </summary>
    double const* percentComplete;

    /// <summary>
    /// (Optional) Result of CloudScript execution.
    /// </summary>
    PlayFabAdminExecuteCloudScriptResult const* result;

    /// <summary>
    /// (Optional) If manually scheduled, ID of user who scheduled the task.
    /// </summary>
    const char* scheduledByUserId;

    /// <summary>
    /// UTC timestamp when the task started.
    /// </summary>
    time_t startedAt;

    /// <summary>
    /// (Optional) Current status of the task instance.
    /// </summary>
    PlayFabAdminTaskInstanceStatus const* status;

    /// <summary>
    /// (Optional) Identifier of the task this instance belongs to.
    /// </summary>
    PlayFabAdminNameIdentifier const* taskIdentifier;

    /// <summary>
    /// (Optional) ID of the task instance.
    /// </summary>
    const char* taskInstanceId;

} PlayFabAdminCloudScriptTaskSummary;

/// <summary>
/// PlayFabAdminCloudScriptVersionStatus data model.
/// </summary>
typedef struct PlayFabAdminCloudScriptVersionStatus
{
    /// <summary>
    /// Most recent revision for this Cloud Script version.
    /// </summary>
    int32_t latestRevision;

    /// <summary>
    /// Published code revision for this Cloud Script version.
    /// </summary>
    int32_t publishedRevision;

    /// <summary>
    /// Version number.
    /// </summary>
    int32_t version;

} PlayFabAdminCloudScriptVersionStatus;

/// <summary>
/// PlayFabAdminContactEmailInfo data model.
/// </summary>
typedef struct PlayFabAdminContactEmailInfo
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

} PlayFabAdminContactEmailInfo;

/// <summary>
/// PlayFabAdminContentInfo data model.
/// </summary>
typedef struct PlayFabAdminContentInfo
{
    /// <summary>
    /// (Optional) Key of the content.
    /// </summary>
    const char* key;

    /// <summary>
    /// Last modified time.
    /// </summary>
    time_t lastModified;

    /// <summary>
    /// Size of the content in bytes.
    /// </summary>
    double size;

} PlayFabAdminContentInfo;

/// <summary>
/// PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest data model. Task name is unique within a title.
/// Using a task name that's already taken will cause a name conflict error. Too many create-task requests
/// within a short time will cause a create conflict error. Request object for PlayFabAdminCreateActionsOnPlayersInSegmentTaskAsync.
/// </summary>
typedef struct PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest
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
    /// (Optional) Description the task.
    /// </summary>
    const char* description;

    /// <summary>
    /// Whether the schedule is active. Inactive schedule will not trigger task execution.
    /// </summary>
    bool isActive;

    /// <summary>
    /// Name of the task. This is a unique identifier for tasks in the title.
    /// </summary>
    const char* name;

    /// <summary>
    /// Task details related to segment and action.
    /// </summary>
    PlayFabAdminActionsOnPlayersInSegmentTaskParameter const* parameter;

    /// <summary>
    /// (Optional) Cron expression for the run schedule of the task. The expression should be in UTC.
    /// </summary>
    const char* schedule;

} PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest;

/// <summary>
/// PlayFabAdminCreateCloudScriptTaskRequest data model. Task name is unique within a title. Using a
/// task name that's already taken will cause a name conflict error. Too many create-task requests within
/// a short time will cause a create conflict error. Request object for PlayFabAdminCreateCloudScriptTaskAsync.
/// </summary>
typedef struct PlayFabAdminCreateCloudScriptTaskRequest
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
    /// (Optional) Description the task.
    /// </summary>
    const char* description;

    /// <summary>
    /// Whether the schedule is active. Inactive schedule will not trigger task execution.
    /// </summary>
    bool isActive;

    /// <summary>
    /// Name of the task. This is a unique identifier for tasks in the title.
    /// </summary>
    const char* name;

    /// <summary>
    /// Task details related to CloudScript.
    /// </summary>
    PlayFabAdminCloudScriptTaskParameter const* parameter;

    /// <summary>
    /// (Optional) Cron expression for the run schedule of the task. The expression should be in UTC.
    /// </summary>
    const char* schedule;

} PlayFabAdminCreateCloudScriptTaskRequest;

/// <summary>
/// PlayFabAdminInsightsScalingTaskParameter data model.
/// </summary>
typedef struct PlayFabAdminInsightsScalingTaskParameter
{
    /// <summary>
    /// Insights Performance Level to scale to.
    /// </summary>
    int32_t level;

} PlayFabAdminInsightsScalingTaskParameter;

/// <summary>
/// PlayFabAdminCreateInsightsScheduledScalingTaskRequest data model. Task name is unique within a title.
/// Using a task name that's already taken will cause a name conflict error. Too many create-task requests
/// within a short time will cause a create conflict error. Request object for PlayFabAdminCreateInsightsScheduledScalingTaskAsync.
/// </summary>
typedef struct PlayFabAdminCreateInsightsScheduledScalingTaskRequest
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
    /// (Optional) Description the task.
    /// </summary>
    const char* description;

    /// <summary>
    /// Whether the schedule is active. Inactive schedule will not trigger task execution.
    /// </summary>
    bool isActive;

    /// <summary>
    /// Name of the task. This is a unique identifier for tasks in the title.
    /// </summary>
    const char* name;

    /// <summary>
    /// Task details related to Insights Scaling.
    /// </summary>
    PlayFabAdminInsightsScalingTaskParameter const* parameter;

    /// <summary>
    /// (Optional) Cron expression for the run schedule of the task. The expression should be in UTC.
    /// </summary>
    const char* schedule;

} PlayFabAdminCreateInsightsScheduledScalingTaskRequest;

/// <summary>
/// PlayFabAdminOpenIdIssuerInformation data model.
/// </summary>
typedef struct PlayFabAdminOpenIdIssuerInformation
{
    /// <summary>
    /// Authorization endpoint URL to direct users to for signin.
    /// </summary>
    const char* authorizationUrl;

    /// <summary>
    /// The URL of the issuer of the tokens. This must match the exact URL of the issuer field in tokens.
    /// </summary>
    const char* issuer;

    /// <summary>
    /// JSON Web Key Set for validating the signature of tokens.
    /// </summary>
    PlayFabJsonObject jsonWebKeySet;

    /// <summary>
    /// Token endpoint URL for code verification.
    /// </summary>
    const char* tokenUrl;

} PlayFabAdminOpenIdIssuerInformation;

/// <summary>
/// PlayFabAdminCreateOpenIdConnectionRequest data model. Request object for PlayFabAdminCreateOpenIdConnectionAsync.
/// </summary>
typedef struct PlayFabAdminCreateOpenIdConnectionRequest
{
    /// <summary>
    /// The client ID given by the ID provider.
    /// </summary>
    const char* clientId;

    /// <summary>
    /// The client secret given by the ID provider.
    /// </summary>
    const char* clientSecret;

    /// <summary>
    /// A name for the connection that identifies it within the title.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) Ignore 'nonce' claim in identity tokens.
    /// </summary>
    bool const* ignoreNonce;

    /// <summary>
    /// (Optional) The discovery document URL to read issuer information from. This must be the absolute
    /// URL to the JSON OpenId Configuration document and must be accessible from the internet. If you
    /// don't know it, try your issuer URL followed by "/.well-known/openid-configuration". For example,
    /// if the issuer is https://example.com, try https://example.com/.well-known/openid-configuration.
    /// </summary>
    const char* issuerDiscoveryUrl;

    /// <summary>
    /// (Optional) Manually specified information for an OpenID Connect issuer.
    /// </summary>
    PlayFabAdminOpenIdIssuerInformation const* issuerInformation;

} PlayFabAdminCreateOpenIdConnectionRequest;

/// <summary>
/// PlayFabAdminCreatePlayerSharedSecretRequest data model. Player Shared Secret Keys are used for the
/// call to Client/GetTitlePublicKey, which exchanges the shared secret for an RSA CSP blob to be used
/// to encrypt the payload of account creation requests when that API requires a signature header. Request
/// object for PlayFabAdminCreatePlayerSharedSecretAsync.
/// </summary>
typedef struct PlayFabAdminCreatePlayerSharedSecretRequest
{
    /// <summary>
    /// (Optional) Friendly name for this key.
    /// </summary>
    const char* friendlyName;

} PlayFabAdminCreatePlayerSharedSecretRequest;

/// <summary>
/// PlayFabAdminCreatePlayerSharedSecretResult data model. Result payload for PlayFabAdminCreatePlayerSharedSecretAsync.
/// </summary>
typedef struct PlayFabAdminCreatePlayerSharedSecretResult
{
    /// <summary>
    /// (Optional) The player shared secret to use when calling Client/GetTitlePublicKey.
    /// </summary>
    const char* secretKey;

} PlayFabAdminCreatePlayerSharedSecretResult;

/// <summary>
/// PlayFabAdminCreatePlayerStatisticDefinitionRequest data model. Statistics are numeric values, with
/// each statistic in the title also generating a leaderboard. The ResetInterval enables automatically
/// resetting leaderboards on a specified interval. Upon reset, the statistic updates to a new version
/// with no values (effectively removing all players from the leaderboard). The previous version's statistic
/// values are also archived for retrieval, if needed (see GetPlayerStatisticVersions). Statistics not
/// created via a call to CreatePlayerStatisticDefinition by default have a VersionChangeInterval of Never,
/// meaning they do not reset on a schedule, but they can be set to do so via a call to UpdatePlayerStatisticDefinition.
/// Once a statistic has been reset (sometimes referred to as versioned or incremented), the now-previous
/// version can still be written to for up a short, pre-defined period (currently 10 seconds), to prevent
/// issues with levels completing around the time of the reset. Also, once reset, the historical statistics
/// for players in the title may be retrieved using the URL specified in the version information (GetPlayerStatisticVersions).
/// The AggregationMethod determines what action is taken when a new statistic value is submitted - always
/// update with the new value (Last), use the highest of the old and new values (Max), use the smallest
/// (Min), or add them together (Sum). Request object for PlayFabAdminCreatePlayerStatisticDefinitionAsync.
/// </summary>
typedef struct PlayFabAdminCreatePlayerStatisticDefinitionRequest
{
    /// <summary>
    /// (Optional) The aggregation method to use in updating the statistic (defaults to last).
    /// </summary>
    PlayFabAdminStatisticAggregationMethod const* aggregationMethod;

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
    /// Unique name of the statistic.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) Interval at which the values of the statistic for all players are reset (resets begin
    /// at the next interval boundary).
    /// </summary>
    PlayFabAdminStatisticResetIntervalOption const* versionChangeInterval;

} PlayFabAdminCreatePlayerStatisticDefinitionRequest;

/// <summary>
/// PlayFabAdminPlayerStatisticDefinition data model.
/// </summary>
typedef struct PlayFabAdminPlayerStatisticDefinition
{
    /// <summary>
    /// (Optional) The aggregation method to use in updating the statistic (defaults to last).
    /// </summary>
    PlayFabAdminStatisticAggregationMethod const* aggregationMethod;

    /// <summary>
    /// Current active version of the statistic, incremented each time the statistic resets.
    /// </summary>
    uint32_t currentVersion;

    /// <summary>
    /// (Optional) Unique name of the statistic.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) Interval at which the values of the statistic for all players are reset automatically.
    /// </summary>
    PlayFabAdminStatisticResetIntervalOption const* versionChangeInterval;

} PlayFabAdminPlayerStatisticDefinition;

/// <summary>
/// PlayFabAdminCreatePlayerStatisticDefinitionResult data model. Result payload for PlayFabAdminCreatePlayerStatisticDefinitionAsync.
/// </summary>
typedef struct PlayFabAdminCreatePlayerStatisticDefinitionResult
{
    /// <summary>
    /// (Optional) Created statistic definition.
    /// </summary>
    PlayFabAdminPlayerStatisticDefinition const* statistic;

} PlayFabAdminCreatePlayerStatisticDefinitionResult;

/// <summary>
/// PlayFabAdminDeletePlayerStatisticSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminDeletePlayerStatisticSegmentAction
{
    /// <summary>
    /// (Optional) Statistic name.
    /// </summary>
    const char* statisticName;

} PlayFabAdminDeletePlayerStatisticSegmentAction;

/// <summary>
/// PlayFabAdminEmailNotificationSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminEmailNotificationSegmentAction
{
    /// <summary>
    /// (Optional) Email template id.
    /// </summary>
    const char* emailTemplateId;

    /// <summary>
    /// (Optional) Email template name.
    /// </summary>
    const char* emailTemplateName;

} PlayFabAdminEmailNotificationSegmentAction;

/// <summary>
/// PlayFabAdminExecuteAzureFunctionSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminExecuteAzureFunctionSegmentAction
{
    /// <summary>
    /// (Optional) Azure function.
    /// </summary>
    const char* azureFunction;

    /// <summary>
    /// (Optional) Azure function parameter.
    /// </summary>
    PlayFabJsonObject functionParameter;

    /// <summary>
    /// Generate play stream event.
    /// </summary>
    bool generateFunctionExecutedEvents;

} PlayFabAdminExecuteAzureFunctionSegmentAction;

/// <summary>
/// PlayFabAdminExecuteCloudScriptSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminExecuteCloudScriptSegmentAction
{
    /// <summary>
    /// (Optional) Cloud script function.
    /// </summary>
    const char* cloudScriptFunction;

    /// <summary>
    /// Generate play stream event.
    /// </summary>
    bool cloudScriptPublishResultsToPlayStream;

    /// <summary>
    /// (Optional) Cloud script function parameter.
    /// </summary>
    PlayFabJsonObject functionParameter;

    /// <summary>
    /// (Optional) Cloud script function parameter json text.
    /// </summary>
    const char* functionParameterJson;

} PlayFabAdminExecuteCloudScriptSegmentAction;

/// <summary>
/// PlayFabAdminGrantItemSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminGrantItemSegmentAction
{
    /// <summary>
    /// (Optional) Item catalog id.
    /// </summary>
    const char* catelogId;

    /// <summary>
    /// (Optional) Item id.
    /// </summary>
    const char* itemId;

    /// <summary>
    /// Item quantity.
    /// </summary>
    uint32_t quantity;

} PlayFabAdminGrantItemSegmentAction;

/// <summary>
/// PlayFabAdminGrantVirtualCurrencySegmentAction data model.
/// </summary>
typedef struct PlayFabAdminGrantVirtualCurrencySegmentAction
{
    /// <summary>
    /// Virtual currency amount.
    /// </summary>
    int32_t amount;

    /// <summary>
    /// (Optional) Virtual currency code.
    /// </summary>
    const char* currencyCode;

} PlayFabAdminGrantVirtualCurrencySegmentAction;

/// <summary>
/// PlayFabAdminIncrementPlayerStatisticSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminIncrementPlayerStatisticSegmentAction
{
    /// <summary>
    /// Increment value.
    /// </summary>
    int32_t incrementValue;

    /// <summary>
    /// (Optional) Statistic name.
    /// </summary>
    const char* statisticName;

} PlayFabAdminIncrementPlayerStatisticSegmentAction;

/// <summary>
/// PlayFabAdminPushNotificationSegmentAction data model.
/// </summary>
typedef struct PlayFabAdminPushNotificationSegmentAction
{
    /// <summary>
    /// (Optional) Push notification template id.
    /// </summary>
    const char* pushNotificationTemplateId;

} PlayFabAdminPushNotificationSegmentAction;

/// <summary>
/// PlayFabAdminSegmentTrigger data model.
/// </summary>
typedef struct PlayFabAdminSegmentTrigger
{
    /// <summary>
    /// (Optional) Ban player segment trigger action.
    /// </summary>
    PlayFabAdminBanPlayerSegmentAction const* banPlayerAction;

    /// <summary>
    /// (Optional) Delete player statistic segment trigger action.
    /// </summary>
    PlayFabAdminDeletePlayerStatisticSegmentAction const* deletePlayerStatisticAction;

    /// <summary>
    /// (Optional) Email notification segment trigger action.
    /// </summary>
    PlayFabAdminEmailNotificationSegmentAction const* emailNotificationAction;

    /// <summary>
    /// (Optional) Execute azure function segment trigger action.
    /// </summary>
    PlayFabAdminExecuteAzureFunctionSegmentAction const* executeAzureFunctionAction;

    /// <summary>
    /// (Optional) Execute cloud script segment trigger action.
    /// </summary>
    PlayFabAdminExecuteCloudScriptSegmentAction const* executeCloudScriptAction;

    /// <summary>
    /// (Optional) Grant item segment trigger action.
    /// </summary>
    PlayFabAdminGrantItemSegmentAction const* grantItemAction;

    /// <summary>
    /// (Optional) Grant virtual currency segment trigger action.
    /// </summary>
    PlayFabAdminGrantVirtualCurrencySegmentAction const* grantVirtualCurrencyAction;

    /// <summary>
    /// (Optional) Increment player statistic segment trigger action.
    /// </summary>
    PlayFabAdminIncrementPlayerStatisticSegmentAction const* incrementPlayerStatisticAction;

    /// <summary>
    /// (Optional) Push notification segment trigger action.
    /// </summary>
    PlayFabAdminPushNotificationSegmentAction const* pushNotificationAction;

} PlayFabAdminSegmentTrigger;

/// <summary>
/// PlayFabAdminFirstLoginDateSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminFirstLoginDateSegmentFilter
{
    /// <summary>
    /// (Optional) First player login date comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// First player login date.
    /// </summary>
    time_t logInDate;

} PlayFabAdminFirstLoginDateSegmentFilter;

/// <summary>
/// PlayFabAdminFirstLoginTimespanSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminFirstLoginTimespanSegmentFilter
{
    /// <summary>
    /// (Optional) First player login duration comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// First player login duration.
    /// </summary>
    double durationInMinutes;

} PlayFabAdminFirstLoginTimespanSegmentFilter;

/// <summary>
/// PlayFabAdminLastLoginDateSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminLastLoginDateSegmentFilter
{
    /// <summary>
    /// (Optional) Last player login date comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// Last player login date.
    /// </summary>
    time_t logInDate;

} PlayFabAdminLastLoginDateSegmentFilter;

/// <summary>
/// PlayFabAdminLastLoginTimespanSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminLastLoginTimespanSegmentFilter
{
    /// <summary>
    /// (Optional) Last player login duration comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// Last player login duration.
    /// </summary>
    double durationInMinutes;

} PlayFabAdminLastLoginTimespanSegmentFilter;

/// <summary>
/// PlayFabAdminLinkedUserAccountSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminLinkedUserAccountSegmentFilter
{
    /// <summary>
    /// (Optional) Login provider.
    /// </summary>
    PlayFabAdminSegmentLoginIdentityProvider const* loginProvider;

} PlayFabAdminLinkedUserAccountSegmentFilter;

/// <summary>
/// PlayFabAdminLinkedUserAccountHasEmailSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminLinkedUserAccountHasEmailSegmentFilter
{
    /// <summary>
    /// (Optional) Login provider comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// (Optional) Login provider.
    /// </summary>
    PlayFabAdminSegmentLoginIdentityProvider const* loginProvider;

} PlayFabAdminLinkedUserAccountHasEmailSegmentFilter;

/// <summary>
/// PlayFabAdminLocationSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminLocationSegmentFilter
{
    /// <summary>
    /// (Optional) Segment country code.
    /// </summary>
    PlayFabAdminSegmentCountryCode const* countryCode;

} PlayFabAdminLocationSegmentFilter;

/// <summary>
/// PlayFabAdminPushNotificationSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminPushNotificationSegmentFilter
{
    /// <summary>
    /// (Optional) Push notification device platform.
    /// </summary>
    PlayFabAdminSegmentPushNotificationDevicePlatform const* pushNotificationDevicePlatform;

} PlayFabAdminPushNotificationSegmentFilter;

/// <summary>
/// PlayFabAdminStatisticSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminStatisticSegmentFilter
{
    /// <summary>
    /// (Optional) Statistic filter comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// (Optional) Statistic filter value.
    /// </summary>
    const char* filterValue;

    /// <summary>
    /// (Optional) Statistic name.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Use current version of statistic?.
    /// </summary>
    bool const* useCurrentVersion;

    /// <summary>
    /// (Optional) Statistic version.
    /// </summary>
    int32_t const* version;

} PlayFabAdminStatisticSegmentFilter;

/// <summary>
/// PlayFabAdminTagSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminTagSegmentFilter
{
    /// <summary>
    /// (Optional) Tag comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// (Optional) Tag value.
    /// </summary>
    const char* tagValue;

} PlayFabAdminTagSegmentFilter;

/// <summary>
/// PlayFabAdminTotalValueToDateInUSDSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminTotalValueToDateInUSDSegmentFilter
{
    /// <summary>
    /// (Optional) Total value to date USD amount.
    /// </summary>
    const char* amount;

    /// <summary>
    /// (Optional) Total value to date USD comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

} PlayFabAdminTotalValueToDateInUSDSegmentFilter;

/// <summary>
/// PlayFabAdminUserOriginationSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminUserOriginationSegmentFilter
{
    /// <summary>
    /// (Optional) User login provider.
    /// </summary>
    PlayFabAdminSegmentLoginIdentityProvider const* loginProvider;

} PlayFabAdminUserOriginationSegmentFilter;

/// <summary>
/// PlayFabAdminValueToDateSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminValueToDateSegmentFilter
{
    /// <summary>
    /// (Optional) Value to date amount.
    /// </summary>
    const char* amount;

    /// <summary>
    /// (Optional) Value to date comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// (Optional) Currency using for filter.
    /// </summary>
    PlayFabAdminSegmentCurrency const* currency;

} PlayFabAdminValueToDateSegmentFilter;

/// <summary>
/// PlayFabAdminVirtualCurrencyBalanceSegmentFilter data model.
/// </summary>
typedef struct PlayFabAdminVirtualCurrencyBalanceSegmentFilter
{
    /// <summary>
    /// Total amount.
    /// </summary>
    int32_t amount;

    /// <summary>
    /// (Optional) Amount comparison.
    /// </summary>
    PlayFabAdminSegmentFilterComparison const* comparison;

    /// <summary>
    /// (Optional) Currency code.
    /// </summary>
    const char* currencyCode;

} PlayFabAdminVirtualCurrencyBalanceSegmentFilter;

/// <summary>
/// PlayFabAdminSegmentAndDefinition data model.
/// </summary>
typedef struct PlayFabAdminSegmentAndDefinition
{
    /// <summary>
    /// (Optional) Filter property for ad campaign filter.
    /// </summary>
    PlayFabAdminAdCampaignSegmentFilter const* adCampaignFilter;

    /// <summary>
    /// (Optional) Filter property for first login date.
    /// </summary>
    PlayFabAdminFirstLoginDateSegmentFilter const* firstLoginDateFilter;

    /// <summary>
    /// (Optional) Filter property for first login timespan.
    /// </summary>
    PlayFabAdminFirstLoginTimespanSegmentFilter const* firstLoginFilter;

    /// <summary>
    /// (Optional) Filter property for last login date.
    /// </summary>
    PlayFabAdminLastLoginDateSegmentFilter const* lastLoginDateFilter;

    /// <summary>
    /// (Optional) Filter property for last login timespan.
    /// </summary>
    PlayFabAdminLastLoginTimespanSegmentFilter const* lastLoginFilter;

    /// <summary>
    /// (Optional) Filter property for linked in user account.
    /// </summary>
    PlayFabAdminLinkedUserAccountSegmentFilter const* linkedUserAccountFilter;

    /// <summary>
    /// (Optional) Filter property for linked in user account has email.
    /// </summary>
    PlayFabAdminLinkedUserAccountHasEmailSegmentFilter const* linkedUserAccountHasEmailFilter;

    /// <summary>
    /// (Optional) Filter property for location.
    /// </summary>
    PlayFabAdminLocationSegmentFilter const* locationFilter;

    /// <summary>
    /// (Optional) Filter property for push notification.
    /// </summary>
    PlayFabAdminPushNotificationSegmentFilter const* pushNotificationFilter;

    /// <summary>
    /// (Optional) Filter property for statistics.
    /// </summary>
    PlayFabAdminStatisticSegmentFilter const* statisticFilter;

    /// <summary>
    /// (Optional) Filter property for tags.
    /// </summary>
    PlayFabAdminTagSegmentFilter const* tagFilter;

    /// <summary>
    /// (Optional) Filter property for total value to date in USD.
    /// </summary>
    PlayFabAdminTotalValueToDateInUSDSegmentFilter const* totalValueToDateInUSDFilter;

    /// <summary>
    /// (Optional) Filter property for user origination.
    /// </summary>
    PlayFabAdminUserOriginationSegmentFilter const* userOriginationFilter;

    /// <summary>
    /// (Optional) Filter property for value to date.
    /// </summary>
    PlayFabAdminValueToDateSegmentFilter const* valueToDateFilter;

    /// <summary>
    /// (Optional) Filter property for virtual currency.
    /// </summary>
    PlayFabAdminVirtualCurrencyBalanceSegmentFilter const* virtualCurrencyBalanceFilter;

} PlayFabAdminSegmentAndDefinition;

/// <summary>
/// PlayFabAdminSegmentOrDefinition data model.
/// </summary>
typedef struct PlayFabAdminSegmentOrDefinition
{
    /// <summary>
    /// (Optional) List of segment and definitions.
    /// </summary>
    PlayFabAdminSegmentAndDefinition const* const* segmentAndDefinitions;

    /// <summary>
    /// Count of segmentAndDefinitions
    /// </summary>
    uint32_t segmentAndDefinitionsCount;

} PlayFabAdminSegmentOrDefinition;

/// <summary>
/// PlayFabAdminSegmentModel data model.
/// </summary>
typedef struct PlayFabAdminSegmentModel
{
    /// <summary>
    /// (Optional) Segment description.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) Segment actions for current entered segment players.
    /// </summary>
    PlayFabAdminSegmentTrigger const* const* enteredSegmentActions;

    /// <summary>
    /// Count of enteredSegmentActions
    /// </summary>
    uint32_t enteredSegmentActionsCount;

    /// <summary>
    /// Segment last updated date time.
    /// </summary>
    time_t lastUpdateTime;

    /// <summary>
    /// (Optional) Segment actions for current left segment players.
    /// </summary>
    PlayFabAdminSegmentTrigger const* const* leftSegmentActions;

    /// <summary>
    /// Count of leftSegmentActions
    /// </summary>
    uint32_t leftSegmentActionsCount;

    /// <summary>
    /// (Optional) Segment name.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Segment id in hex.
    /// </summary>
    const char* segmentId;

    /// <summary>
    /// (Optional) Segment or definitions. This includes segment and definitions and filters.
    /// </summary>
    PlayFabAdminSegmentOrDefinition const* const* segmentOrDefinitions;

    /// <summary>
    /// Count of segmentOrDefinitions
    /// </summary>
    uint32_t segmentOrDefinitionsCount;

} PlayFabAdminSegmentModel;

/// <summary>
/// PlayFabAdminCreateSegmentRequest data model. Send all the segment details part of CreateSegmentRequest.
/// Request object for PlayFabAdminCreateSegmentAsync.
/// </summary>
typedef struct PlayFabAdminCreateSegmentRequest
{
    /// <summary>
    /// Segment model with all of the segment properties data.
    /// </summary>
    PlayFabAdminSegmentModel const* segmentModel;

} PlayFabAdminCreateSegmentRequest;

/// <summary>
/// PlayFabAdminCreateSegmentResponse data model. Result payload for PlayFabAdminCreateSegmentAsync.
/// </summary>
typedef struct PlayFabAdminCreateSegmentResponse
{
    /// <summary>
    /// (Optional) Error message.
    /// </summary>
    const char* errorMessage;

    /// <summary>
    /// (Optional) Segment id.
    /// </summary>
    const char* segmentId;

} PlayFabAdminCreateSegmentResponse;

/// <summary>
/// PlayFabAdminCreateTaskResult data model. Result payload for PlayFabAdminCreateActionsOnPlayersInSegmentTaskAsync,
/// PlayFabAdminCreateCloudScriptTaskAsync, and PlayFabAdminCreateInsightsScheduledScalingTaskAsync.
/// </summary>
typedef struct PlayFabAdminCreateTaskResult
{
    /// <summary>
    /// (Optional) ID of the task.
    /// </summary>
    const char* taskId;

} PlayFabAdminCreateTaskResult;

/// <summary>
/// PlayFabAdminDeleteContentRequest data model. Request object for PlayFabAdminDeleteContentAsync.
/// </summary>
typedef struct PlayFabAdminDeleteContentRequest
{
    /// <summary>
    /// Key of the content item to be deleted.
    /// </summary>
    const char* key;

} PlayFabAdminDeleteContentRequest;

/// <summary>
/// PlayFabAdminDeleteMasterPlayerAccountRequest data model. Deletes all data associated with the master
/// player account, including data from all titles the player has played, such as statistics, custom data,
/// inventory, purchases, virtual currency balances, characters, group memberships, publisher data, credential
/// data, account linkages, friends list and PlayStream event history. Removes the player from all leaderboards
/// and player search indexes. Note, this API queues the player for deletion and returns a receipt immediately.
/// Record the receipt ID for future reference. It may take some time before all player data is fully
/// deleted. Upon completion of the deletion, an email will be sent to the notification email address
/// configured for the title confirming the deletion. Until the player data is fully deleted, attempts
/// to recreate the player with the same user account in the same title will fail with the 'AccountDeleted'
/// error. It is highly recommended to know the impact of the deletion by calling GetPlayedTitleList,
/// before calling this API. Request object for PlayFabAdminDeleteMasterPlayerAccountAsync.
/// </summary>
typedef struct PlayFabAdminDeleteMasterPlayerAccountRequest
{
    /// <summary>
    /// (Optional) Developer created string to identify a user without PlayFab ID.
    /// </summary>
    const char* metaData;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminDeleteMasterPlayerAccountRequest;

/// <summary>
/// PlayFabAdminDeleteMasterPlayerAccountResult data model. Result payload for PlayFabAdminDeleteMasterPlayerAccountAsync.
/// </summary>
typedef struct PlayFabAdminDeleteMasterPlayerAccountResult
{
    /// <summary>
    /// (Optional) A notification email with this job receipt Id will be sent to the title notification
    /// email address when deletion is complete.
    /// </summary>
    const char* jobReceiptId;

    /// <summary>
    /// (Optional) List of titles from which the player's data will be deleted.
    /// </summary>
    const char* const* titleIds;

    /// <summary>
    /// Count of titleIds
    /// </summary>
    uint32_t titleIdsCount;

} PlayFabAdminDeleteMasterPlayerAccountResult;

/// <summary>
/// PlayFabAdminDeleteOpenIdConnectionRequest data model. Request object for PlayFabAdminDeleteOpenIdConnectionAsync.
/// </summary>
typedef struct PlayFabAdminDeleteOpenIdConnectionRequest
{
    /// <summary>
    /// Unique name of the connection.
    /// </summary>
    const char* connectionId;

} PlayFabAdminDeleteOpenIdConnectionRequest;

/// <summary>
/// PlayFabAdminDeletePlayerRequest data model. Deletes all data associated with the player, including
/// statistics, custom data, inventory, purchases, virtual currency balances, characters and shared group
/// memberships. Removes the player from all leaderboards and player search indexes. Does not delete PlayStream
/// event history associated with the player. Does not delete the publisher user account that created
/// the player in the title nor associated data such as username, password, email address, account linkages,
/// or friends list. Note, this API queues the player for deletion and returns immediately. It may take
/// several minutes or more before all player data is fully deleted. Until the player data is fully deleted,
/// attempts to recreate the player with the same user account in the same title will fail with the 'AccountDeleted'
/// error. Request object for PlayFabAdminDeletePlayerAsync.
/// </summary>
typedef struct PlayFabAdminDeletePlayerRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminDeletePlayerRequest;

/// <summary>
/// PlayFabAdminDeletePlayerSharedSecretRequest data model. Player Shared Secret Keys are used for the
/// call to Client/GetTitlePublicKey, which exchanges the shared secret for an RSA CSP blob to be used
/// to encrypt the payload of account creation requests when that API requires a signature header. Request
/// object for PlayFabAdminDeletePlayerSharedSecretAsync.
/// </summary>
typedef struct PlayFabAdminDeletePlayerSharedSecretRequest
{
    /// <summary>
    /// (Optional) The shared secret key to delete.
    /// </summary>
    const char* secretKey;

} PlayFabAdminDeletePlayerSharedSecretRequest;

/// <summary>
/// PlayFabAdminDeleteSegmentRequest data model. Send segment id planning to delete part of DeleteSegmentRequest
/// object. Request object for PlayFabAdminDeleteSegmentAsync.
/// </summary>
typedef struct PlayFabAdminDeleteSegmentRequest
{
    /// <summary>
    /// Segment id.
    /// </summary>
    const char* segmentId;

} PlayFabAdminDeleteSegmentRequest;

/// <summary>
/// PlayFabAdminDeleteSegmentsResponse data model. Result payload for PlayFabAdminDeleteSegmentAsync.
/// </summary>
typedef struct PlayFabAdminDeleteSegmentsResponse
{
    /// <summary>
    /// (Optional) Error message.
    /// </summary>
    const char* errorMessage;

} PlayFabAdminDeleteSegmentsResponse;

/// <summary>
/// PlayFabAdminDeleteStoreRequest data model. This non-reversible operation will permanently delete
/// the requested store. Request object for PlayFabAdminDeleteStoreAsync.
/// </summary>
typedef struct PlayFabAdminDeleteStoreRequest
{
    /// <summary>
    /// (Optional) Catalog version of the store to delete. If null, uses the default catalog.
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
    /// Unqiue identifier for the store which is to be deleted.
    /// </summary>
    const char* storeId;

} PlayFabAdminDeleteStoreRequest;

/// <summary>
/// PlayFabAdminDeleteTaskRequest data model. After a task is deleted, for tracking purposes, the task
/// instances belonging to this task will still remain. They will become orphaned and does not belongs
/// to any task. Executions of any in-progress task instances will continue. If the task specified does
/// not exist, the deletion is considered a success. Request object for PlayFabAdminDeleteTaskAsync.
/// </summary>
typedef struct PlayFabAdminDeleteTaskRequest
{
    /// <summary>
    /// (Optional) Specify either the task ID or the name of task to be deleted.
    /// </summary>
    PlayFabAdminNameIdentifier const* identifier;

} PlayFabAdminDeleteTaskRequest;

/// <summary>
/// PlayFabAdminDeleteTitleDataOverrideRequest data model. Will delete all the title data associated
/// with the given override label. Request object for PlayFabAdminDeleteTitleDataOverrideAsync.
/// </summary>
typedef struct PlayFabAdminDeleteTitleDataOverrideRequest
{
    /// <summary>
    /// Name of the override.
    /// </summary>
    const char* overrideLabel;

} PlayFabAdminDeleteTitleDataOverrideRequest;

/// <summary>
/// PlayFabAdminExportMasterPlayerDataRequest data model. Exports all data associated with the master
/// player account, including data from all titles the player has played, such as statistics, custom data,
/// inventory, purchases, virtual currency balances, characters, group memberships, publisher data, credential
/// data, account linkages, friends list and PlayStream event history. Note, this API queues the player
/// for export and returns a receipt immediately. Record the receipt ID for future reference. It may take
/// some time before the export is available for download. Upon completion of the export, an email containing
/// the URL to download the export dump will be sent to the notification email address configured for
/// the title. Request object for PlayFabAdminExportMasterPlayerDataAsync.
/// </summary>
typedef struct PlayFabAdminExportMasterPlayerDataRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminExportMasterPlayerDataRequest;

/// <summary>
/// PlayFabAdminExportMasterPlayerDataResult data model. Result payload for PlayFabAdminExportMasterPlayerDataAsync.
/// </summary>
typedef struct PlayFabAdminExportMasterPlayerDataResult
{
    /// <summary>
    /// (Optional) An email with this job receipt Id containing the export download link will be sent
    /// to the title notification email address when the export is complete.
    /// </summary>
    const char* jobReceiptId;

} PlayFabAdminExportMasterPlayerDataResult;

/// <summary>
/// PlayFabAdminGameModeInfo data model.
/// </summary>
typedef struct PlayFabAdminGameModeInfo
{
    /// <summary>
    /// Specific game mode type.
    /// </summary>
    const char* gamemode;

    /// <summary>
    /// Maximum user count a specific Game Server Instance can support.
    /// </summary>
    uint32_t maxPlayerCount;

    /// <summary>
    /// Minimum user count required for this Game Server Instance to continue (usually 1).
    /// </summary>
    uint32_t minPlayerCount;

    /// <summary>
    /// (Optional) Whether to start as an open session, meaning that players can matchmake into it (defaults
    /// to true).
    /// </summary>
    bool const* startOpen;

} PlayFabAdminGameModeInfo;

/// <summary>
/// PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult data model. Result payload for PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceAsync.
/// </summary>
typedef struct PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult
{
    /// <summary>
    /// (Optional) Parameter of this task instance.
    /// </summary>
    PlayFabAdminActionsOnPlayersInSegmentTaskParameter const* parameter;

    /// <summary>
    /// (Optional) Status summary of the actions-on-players-in-segment task instance.
    /// </summary>
    PlayFabAdminActionsOnPlayersInSegmentTaskSummary const* summary;

} PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult;

/// <summary>
/// PlayFabAdminGetSegmentResult data model.
/// </summary>
typedef struct PlayFabAdminGetSegmentResult
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

} PlayFabAdminGetSegmentResult;

/// <summary>
/// PlayFabAdminGetAllSegmentsResult data model. Result payload for PlayFabAdminGetAllSegmentsAsync.
/// </summary>
typedef struct PlayFabAdminGetAllSegmentsResult
{
    /// <summary>
    /// (Optional) Array of segments for this title.
    /// </summary>
    PlayFabAdminGetSegmentResult const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PlayFabAdminGetAllSegmentsResult;

/// <summary>
/// PlayFabAdminGetCatalogItemsRequest data model. Request object for PlayFabAdminGetCatalogItemsAsync.
/// </summary>
typedef struct PlayFabAdminGetCatalogItemsRequest
{
    /// <summary>
    /// (Optional) Which catalog is being requested. If null, uses the default catalog.
    /// </summary>
    const char* catalogVersion;

} PlayFabAdminGetCatalogItemsRequest;

/// <summary>
/// PlayFabAdminGetCatalogItemsResult data model. Result payload for PlayFabAdminGetCatalogItemsAsync.
/// </summary>
typedef struct PlayFabAdminGetCatalogItemsResult
{
    /// <summary>
    /// (Optional) Array of items which can be purchased.
    /// </summary>
    PlayFabAdminCatalogItem const* const* catalog;

    /// <summary>
    /// Count of catalog
    /// </summary>
    uint32_t catalogCount;

} PlayFabAdminGetCatalogItemsResult;

/// <summary>
/// PlayFabAdminGetCloudScriptRevisionRequest data model. Request object for PlayFabAdminGetCloudScriptRevisionAsync.
/// </summary>
typedef struct PlayFabAdminGetCloudScriptRevisionRequest
{
    /// <summary>
    /// (Optional) Revision number. If left null, defaults to the latest revision.
    /// </summary>
    int32_t const* revision;

    /// <summary>
    /// (Optional) Version number. If left null, defaults to the latest version.
    /// </summary>
    int32_t const* version;

} PlayFabAdminGetCloudScriptRevisionRequest;

/// <summary>
/// PlayFabAdminGetCloudScriptRevisionResult data model. Result payload for PlayFabAdminGetCloudScriptRevisionAsync.
/// </summary>
typedef struct PlayFabAdminGetCloudScriptRevisionResult
{
    /// <summary>
    /// Time this revision was created.
    /// </summary>
    time_t createdAt;

    /// <summary>
    /// (Optional) List of Cloud Script files in this revision.
    /// </summary>
    PlayFabAdminCloudScriptFile const* const* files;

    /// <summary>
    /// Count of files
    /// </summary>
    uint32_t filesCount;

    /// <summary>
    /// True if this is the currently published revision.
    /// </summary>
    bool isPublished;

    /// <summary>
    /// Revision number.
    /// </summary>
    int32_t revision;

    /// <summary>
    /// Version number.
    /// </summary>
    int32_t version;

} PlayFabAdminGetCloudScriptRevisionResult;

/// <summary>
/// PlayFabAdminGetCloudScriptTaskInstanceResult data model. Result payload for PlayFabAdminGetCloudScriptTaskInstanceAsync.
/// </summary>
typedef struct PlayFabAdminGetCloudScriptTaskInstanceResult
{
    /// <summary>
    /// (Optional) Parameter of this task instance.
    /// </summary>
    PlayFabAdminCloudScriptTaskParameter const* parameter;

    /// <summary>
    /// (Optional) Status summary of the CloudScript task instance.
    /// </summary>
    PlayFabAdminCloudScriptTaskSummary const* summary;

} PlayFabAdminGetCloudScriptTaskInstanceResult;

/// <summary>
/// PlayFabAdminGetCloudScriptVersionsResult data model. Result payload for PlayFabAdminGetCloudScriptVersionsAsync.
/// </summary>
typedef struct PlayFabAdminGetCloudScriptVersionsResult
{
    /// <summary>
    /// (Optional) List of versions.
    /// </summary>
    PlayFabAdminCloudScriptVersionStatus const* const* versions;

    /// <summary>
    /// Count of versions
    /// </summary>
    uint32_t versionsCount;

} PlayFabAdminGetCloudScriptVersionsResult;

/// <summary>
/// PlayFabAdminGetContentListRequest data model. Request object for PlayFabAdminGetContentListAsync.
/// </summary>
typedef struct PlayFabAdminGetContentListRequest
{
    /// <summary>
    /// (Optional) Limits the response to keys that begin with the specified prefix. You can use prefixes
    /// to list contents under a folder, or for a specified version, etc.
    /// </summary>
    const char* prefix;

} PlayFabAdminGetContentListRequest;

/// <summary>
/// PlayFabAdminGetContentListResult data model. Result payload for PlayFabAdminGetContentListAsync.
/// </summary>
typedef struct PlayFabAdminGetContentListResult
{
    /// <summary>
    /// (Optional) List of content items.
    /// </summary>
    PlayFabAdminContentInfo const* const* contents;

    /// <summary>
    /// Count of contents
    /// </summary>
    uint32_t contentsCount;

    /// <summary>
    /// Number of content items returned. We currently have a maximum of 1000 items limit.
    /// </summary>
    int32_t itemCount;

    /// <summary>
    /// The total size of listed contents in bytes.
    /// </summary>
    uint32_t totalSize;

} PlayFabAdminGetContentListResult;

/// <summary>
/// PlayFabAdminGetContentUploadUrlRequest data model. Request object for PlayFabAdminGetContentUploadUrlAsync.
/// </summary>
typedef struct PlayFabAdminGetContentUploadUrlRequest
{
    /// <summary>
    /// (Optional) A standard MIME type describing the format of the contents. The same MIME type has
    /// to be set in the header when uploading the content. If not specified, the MIME type is 'binary/octet-stream'
    /// by default.
    /// </summary>
    const char* contentType;

    /// <summary>
    /// Key of the content item to upload, usually formatted as a path, e.g. images/a.png.
    /// </summary>
    const char* key;

} PlayFabAdminGetContentUploadUrlRequest;

/// <summary>
/// PlayFabAdminGetContentUploadUrlResult data model. Result payload for PlayFabAdminGetContentUploadUrlAsync.
/// </summary>
typedef struct PlayFabAdminGetContentUploadUrlResult
{
    /// <summary>
    /// (Optional) URL for uploading content via HTTP PUT method. The URL requires the 'x-ms-blob-type'
    /// header to have the value 'BlockBlob'. The URL will expire in approximately one hour.
    /// </summary>
    const char* uRL;

} PlayFabAdminGetContentUploadUrlResult;

/// <summary>
/// PlayFabAdminGetDataReportRequest data model. Gets the download URL for the requested report data
/// (in CSV form). The reports available through this API call are those available in the Game Manager,
/// in the Analytics->Reports tab. Request object for PlayFabAdminGetDataReportAsync.
/// </summary>
typedef struct PlayFabAdminGetDataReportRequest
{
    /// <summary>
    /// Reporting year (UTC).
    /// </summary>
    int32_t day;

    /// <summary>
    /// Reporting month (UTC).
    /// </summary>
    int32_t month;

    /// <summary>
    /// Report name.
    /// </summary>
    const char* reportName;

    /// <summary>
    /// Reporting year (UTC).
    /// </summary>
    int32_t year;

} PlayFabAdminGetDataReportRequest;

/// <summary>
/// PlayFabAdminGetDataReportResult data model. Result payload for PlayFabAdminGetDataReportAsync.
/// </summary>
typedef struct PlayFabAdminGetDataReportResult
{
    /// <summary>
    /// (Optional) The URL where the requested report can be downloaded. This can be any PlayFab generated
    /// reports. The full list of reports can be found at: https://docs.microsoft.com/en-us/gaming/playfab/features/analytics/reports/quickstart.
    /// </summary>
    const char* downloadUrl;

} PlayFabAdminGetDataReportResult;

/// <summary>
/// PlayFabAdminGetMatchmakerGameInfoRequest data model. Request object for PlayFabAdminGetMatchmakerGameInfoAsync.
/// </summary>
typedef struct PlayFabAdminGetMatchmakerGameInfoRequest
{
    /// <summary>
    /// Unique identifier of the lobby for which info is being requested.
    /// </summary>
    const char* lobbyId;

} PlayFabAdminGetMatchmakerGameInfoRequest;

/// <summary>
/// PlayFabAdminGetMatchmakerGameInfoResult data model. Result payload for PlayFabAdminGetMatchmakerGameInfoAsync.
/// </summary>
typedef struct PlayFabAdminGetMatchmakerGameInfoResult
{
    /// <summary>
    /// (Optional) Version identifier of the game server executable binary being run.
    /// </summary>
    const char* buildVersion;

    /// <summary>
    /// (Optional) Time when Game Server Instance is currently scheduled to end.
    /// </summary>
    time_t const* endTime;

    /// <summary>
    /// (Optional) Unique identifier of the lobby .
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// (Optional) Game mode for this Game Server Instance.
    /// </summary>
    const char* mode;

    /// <summary>
    /// (Optional) Array of unique PlayFab identifiers for users currently connected to this Game Server
    /// Instance.
    /// </summary>
    const char* const* players;

    /// <summary>
    /// Count of players
    /// </summary>
    uint32_t playersCount;

    /// <summary>
    /// (Optional) Region in which the Game Server Instance is running.
    /// </summary>
    PlayFabAdminRegion const* region;

    /// <summary>
    /// (Optional) IPV4 address of the server.
    /// </summary>
    const char* serverIPV4Address;

    /// <summary>
    /// (Optional) IPV6 address of the server.
    /// </summary>
    const char* serverIPV6Address;

    /// <summary>
    /// Communication port for this Game Server Instance.
    /// </summary>
    uint32_t serverPort;

    /// <summary>
    /// (Optional) Public DNS name (if any) of the server.
    /// </summary>
    const char* serverPublicDNSName;

    /// <summary>
    /// Time when the Game Server Instance was created.
    /// </summary>
    time_t startTime;

    /// <summary>
    /// (Optional) Unique identifier of the Game Server Instance for this lobby.
    /// </summary>
    const char* titleId;

} PlayFabAdminGetMatchmakerGameInfoResult;

/// <summary>
/// PlayFabAdminGetMatchmakerGameModesRequest data model. These details are used by the PlayFab matchmaking
/// service to determine if an existing Game Server Instance has room for additional users, and by the
/// PlayFab game server management service to determine when a new Game Server Host should be created
/// in order to prevent excess load on existing Hosts. Request object for PlayFabAdminGetMatchmakerGameModesAsync.
/// </summary>
typedef struct PlayFabAdminGetMatchmakerGameModesRequest
{
    /// <summary>
    /// Previously uploaded build version for which game modes are being requested.
    /// </summary>
    const char* buildVersion;

} PlayFabAdminGetMatchmakerGameModesRequest;

/// <summary>
/// PlayFabAdminGetMatchmakerGameModesResult data model. Result payload for PlayFabAdminGetMatchmakerGameModesAsync.
/// </summary>
typedef struct PlayFabAdminGetMatchmakerGameModesResult
{
    /// <summary>
    /// (Optional) Array of game modes available for the specified build.
    /// </summary>
    PlayFabAdminGameModeInfo const* const* gameModes;

    /// <summary>
    /// Count of gameModes
    /// </summary>
    uint32_t gameModesCount;

} PlayFabAdminGetMatchmakerGameModesResult;

/// <summary>
/// PlayFabAdminGetPlayedTitleListRequest data model. Useful for identifying titles of which the player's
/// data will be deleted by DeleteMasterPlayer. Request object for PlayFabAdminGetPlayedTitleListAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayedTitleListRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminGetPlayedTitleListRequest;

/// <summary>
/// PlayFabAdminGetPlayedTitleListResult data model. Result payload for PlayFabAdminGetPlayedTitleListAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayedTitleListResult
{
    /// <summary>
    /// (Optional) List of titles the player has played.
    /// </summary>
    const char* const* titleIds;

    /// <summary>
    /// Count of titleIds
    /// </summary>
    uint32_t titleIdsCount;

} PlayFabAdminGetPlayedTitleListResult;

/// <summary>
/// PlayFabAdminGetPlayerIdFromAuthTokenRequest data model. Gets a player ID from an auth token. The
/// token expires after 30 minutes and cannot be used to look up a player when expired. Request object
/// for PlayFabAdminGetPlayerIdFromAuthTokenAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerIdFromAuthTokenRequest
{
    /// <summary>
    /// The auth token of the player requesting the password reset.
    /// </summary>
    const char* token;

    /// <summary>
    /// The type of auth token of the player requesting the password reset.
    /// </summary>
    PlayFabAdminAuthTokenType tokenType;

} PlayFabAdminGetPlayerIdFromAuthTokenRequest;

/// <summary>
/// PlayFabAdminGetPlayerIdFromAuthTokenResult data model. Result payload for PlayFabAdminGetPlayerIdFromAuthTokenAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerIdFromAuthTokenResult
{
    /// <summary>
    /// (Optional) The player ID from the token passed in.
    /// </summary>
    const char* playFabId;

} PlayFabAdminGetPlayerIdFromAuthTokenResult;

/// <summary>
/// PlayFabAdminPlayerProfileViewConstraints data model.
/// </summary>
typedef struct PlayFabAdminPlayerProfileViewConstraints
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

} PlayFabAdminPlayerProfileViewConstraints;

/// <summary>
/// PlayFabAdminGetPlayerProfileRequest data model. This API allows for access to details regarding a
/// user in the PlayFab service, usually for purposes of customer support. Note that data returned may
/// be Personally Identifying Information (PII), such as email address, and so care should be taken in
/// how this data is stored and managed. Since this call will always return the relevant information for
/// users who have accessed the title, the recommendation is to not store this data locally. Request
/// object for PlayFabAdminGetPlayerProfileAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerProfileRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabAdminPlayerProfileViewConstraints const* profileConstraints;

} PlayFabAdminGetPlayerProfileRequest;

/// <summary>
/// PlayFabAdminGetPlayerProfileResult data model. Result payload for PlayFabAdminGetPlayerProfileAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerProfileResult
{
    /// <summary>
    /// (Optional) The profile of the player. This profile is not guaranteed to be up-to-date. For a
    /// new player, this profile will not exist.
    /// </summary>
    PlayFabPlayerProfileModel const* playerProfile;

} PlayFabAdminGetPlayerProfileResult;

/// <summary>
/// PlayFabAdminGetPlayerSegmentsResult data model. Result payload for PlayFabAdminGetPlayerSegmentsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerSegmentsResult
{
    /// <summary>
    /// (Optional) Array of segments the requested player currently belongs to.
    /// </summary>
    PlayFabAdminGetSegmentResult const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PlayFabAdminGetPlayerSegmentsResult;

/// <summary>
/// PlayFabAdminSharedSecret data model.
/// </summary>
typedef struct PlayFabAdminSharedSecret
{
    /// <summary>
    /// Flag to indicate if this key is disabled.
    /// </summary>
    bool disabled;

    /// <summary>
    /// (Optional) Friendly name for this key.
    /// </summary>
    const char* friendlyName;

    /// <summary>
    /// (Optional) The player shared secret to use when calling Client/GetTitlePublicKey.
    /// </summary>
    const char* secretKey;

} PlayFabAdminSharedSecret;

/// <summary>
/// PlayFabAdminGetPlayerSharedSecretsResult data model. Result payload for PlayFabAdminGetPlayerSharedSecretsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerSharedSecretsResult
{
    /// <summary>
    /// (Optional) The player shared secret to use when calling Client/GetTitlePublicKey.
    /// </summary>
    PlayFabAdminSharedSecret const* const* sharedSecrets;

    /// <summary>
    /// Count of sharedSecrets
    /// </summary>
    uint32_t sharedSecretsCount;

} PlayFabAdminGetPlayerSharedSecretsResult;

/// <summary>
/// PlayFabAdminGetPlayersInSegmentRequest data model. Initial request must contain at least a Segment
/// ID. Subsequent requests must contain the Segment ID as well as the Continuation Token. Failure to
/// send the Continuation Token will result in a new player segment list being generated. Each time the
/// Continuation Token is passed in the length of the Total Seconds to Live is refreshed. If too much
/// time passes between requests to the point that a subsequent request is past the Total Seconds to Live
/// an error will be returned and paging will be terminated. This API is resource intensive and should
/// not be used in scenarios which might generate high request volumes. Only one request to this API at
/// a time should be made per title. Concurrent requests to the API may be rejected with the APIConcurrentRequestLimitExceeded
/// error. Request object for PlayFabAdminGetPlayersInSegmentAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayersInSegmentRequest
{
    /// <summary>
    /// (Optional) Continuation token if retrieving subsequent pages of results.
    /// </summary>
    const char* continuationToken;

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

} PlayFabAdminGetPlayersInSegmentRequest;

/// <summary>
/// PlayFabAdminPlayerLinkedAccount data model.
/// </summary>
typedef struct PlayFabAdminPlayerLinkedAccount
{
    /// <summary>
    /// (Optional) Linked account's email.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Authentication platform.
    /// </summary>
    PlayFabLoginIdentityProvider const* platform;

    /// <summary>
    /// (Optional) Platform user identifier.
    /// </summary>
    const char* platformUserId;

    /// <summary>
    /// (Optional) Linked account's username.
    /// </summary>
    const char* username;

} PlayFabAdminPlayerLinkedAccount;

/// <summary>
/// PlayFabAdminPlayerLocation data model.
/// </summary>
typedef struct PlayFabAdminPlayerLocation
{
    /// <summary>
    /// (Optional) City of the player's geographic location.
    /// </summary>
    const char* city;

    /// <summary>
    /// The two-character continent code for this location.
    /// </summary>
    PlayFabContinentCode continentCode;

    /// <summary>
    /// The two-character ISO 3166-1 country code for the country associated with the location.
    /// </summary>
    PlayFabCountryCode countryCode;

    /// <summary>
    /// (Optional) Latitude coordinate of the player's geographic location.
    /// </summary>
    double const* latitude;

    /// <summary>
    /// (Optional) Longitude coordinate of the player's geographic location.
    /// </summary>
    double const* longitude;

} PlayFabAdminPlayerLocation;

/// <summary>
/// PlayFabAdminPlayerStatistic data model.
/// </summary>
typedef struct PlayFabAdminPlayerStatistic
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

} PlayFabAdminPlayerStatistic;

/// <summary>
/// PlayFabAdminPushNotificationRegistration data model.
/// </summary>
typedef struct PlayFabAdminPushNotificationRegistration
{
    /// <summary>
    /// (Optional) Notification configured endpoint.
    /// </summary>
    const char* notificationEndpointARN;

    /// <summary>
    /// (Optional) Push notification platform.
    /// </summary>
    PlayFabPushNotificationPlatform const* platform;

} PlayFabAdminPushNotificationRegistration;

/// <summary>
/// PlayFabAdminPlayerProfile data model.
/// </summary>
typedef struct PlayFabAdminPlayerProfile
{
    /// <summary>
    /// (Optional) Array of ad campaigns player has been attributed to.
    /// </summary>
    PlayFabAdminAdCampaignAttribution const* const* adCampaignAttributions;

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
    PlayFabAdminContactEmailInfo const* const* contactEmailAddresses;

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
    PlayFabAdminPlayerLinkedAccount const* const* linkedAccounts;

    /// <summary>
    /// Count of linkedAccounts
    /// </summary>
    uint32_t linkedAccountsCount;

    /// <summary>
    /// (Optional) Dictionary of player's locations by type.
    /// </summary>
    struct PlayFabAdminPlayerLocationDictionaryEntry const* locations;

    /// <summary>
    /// Count of locations
    /// </summary>
    uint32_t locationsCount;

    /// <summary>
    /// (Optional) Player account origination.
    /// </summary>
    PlayFabLoginIdentityProvider const* origination;

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
    PlayFabAdminPlayerStatistic const* const* playerStatistics;

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
    PlayFabAdminPushNotificationRegistration const* const* pushNotificationRegistrations;

    /// <summary>
    /// Count of pushNotificationRegistrations
    /// </summary>
    uint32_t pushNotificationRegistrationsCount;

    /// <summary>
    /// (Optional) Dictionary of player's statistics using only the latest version's value.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* statistics;

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
    struct PlayFabUint32DictionaryEntry const* valuesToDate;

    /// <summary>
    /// Count of valuesToDate
    /// </summary>
    uint32_t valuesToDateCount;

    /// <summary>
    /// (Optional) Dictionary of player's virtual currency balances.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* virtualCurrencyBalances;

    /// <summary>
    /// Count of virtualCurrencyBalances
    /// </summary>
    uint32_t virtualCurrencyBalancesCount;

} PlayFabAdminPlayerProfile;

/// <summary>
/// PlayFabAdminGetPlayersInSegmentResult data model. Result payload for PlayFabAdminGetPlayersInSegmentAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayersInSegmentResult
{
    /// <summary>
    /// (Optional) Continuation token to use to retrieve subsequent pages of results. If token returns
    /// null there are no more results.
    /// </summary>
    const char* continuationToken;

    /// <summary>
    /// (Optional) Array of player profiles in this segment.
    /// </summary>
    PlayFabAdminPlayerProfile const* const* playerProfiles;

    /// <summary>
    /// Count of playerProfiles
    /// </summary>
    uint32_t playerProfilesCount;

    /// <summary>
    /// Count of profiles matching this segment.
    /// </summary>
    int32_t profilesInSegment;

} PlayFabAdminGetPlayersInSegmentResult;

/// <summary>
/// PlayFabAdminGetPlayersSegmentsRequest data model. Request object for PlayFabAdminGetPlayerSegmentsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayersSegmentsRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminGetPlayersSegmentsRequest;

/// <summary>
/// PlayFabAdminGetPlayerStatisticDefinitionsResult data model. Statistics are numeric values, with each
/// statistic in the title also generating a leaderboard. The ResetInterval defines the period of time
/// at which the leaderboard for the statistic will automatically reset. Upon reset, the statistic updates
/// to a new version with no values (effectively removing all players from the leaderboard). The previous
/// version's statistic values are also archived for retrieval, if needed (see GetPlayerStatisticVersions).
/// Statistics not created via a call to CreatePlayerStatisticDefinition by default have a VersionChangeInterval
/// of Never, meaning they do not reset on a schedule, but they can be set to do so via a call to UpdatePlayerStatisticDefinition.
/// Once a statistic has been reset (sometimes referred to as versioned or incremented), the previous
/// version can still be written to for up a short, pre-defined period (currently 10 seconds), to prevent
/// issues with levels completing around the time of the reset. Also, once reset, the historical statistics
/// for players in the title may be retrieved using the URL specified in the version information (GetPlayerStatisticVersions).
/// The AggregationMethod defines what action is taken when a new statistic value is submitted - always
/// update with the new value (Last), use the highest of the old and new values (Max), use the smallest
/// (Min), or add them together (Sum). Result payload for PlayFabAdminGetPlayerStatisticDefinitionsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerStatisticDefinitionsResult
{
    /// <summary>
    /// (Optional) The player statistic definitions for the title.
    /// </summary>
    PlayFabAdminPlayerStatisticDefinition const* const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

} PlayFabAdminGetPlayerStatisticDefinitionsResult;

/// <summary>
/// PlayFabAdminGetPlayerStatisticVersionsRequest data model. Request object for PlayFabAdminGetPlayerStatisticVersionsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerStatisticVersionsRequest
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

} PlayFabAdminGetPlayerStatisticVersionsRequest;

/// <summary>
/// PlayFabAdminPlayerStatisticVersion data model.
/// </summary>
typedef struct PlayFabAdminPlayerStatisticVersion
{
    /// <summary>
    /// Time when the statistic version became active.
    /// </summary>
    time_t activationTime;

    /// <summary>
    /// (Optional) URL for the downloadable archive of player statistic values, if available.
    /// </summary>
    const char* archiveDownloadUrl;

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
    /// (Optional) Status of the statistic version.
    /// </summary>
    PlayFabAdminStatisticVersionStatus const* status;

    /// <summary>
    /// Version of the statistic.
    /// </summary>
    uint32_t version;

} PlayFabAdminPlayerStatisticVersion;

/// <summary>
/// PlayFabAdminGetPlayerStatisticVersionsResult data model. Statistics are numeric values, with each
/// statistic in the title also generating a leaderboard. The information returned in the results defines
/// the state of a specific version of a statistic, including when it was or will become the currently
/// active version, when it will (or did) become a previous version, and its archival state if it is no
/// longer the active version. For a statistic which has been reset, once the archival status is Complete,
/// the full set of statistics for all players in the leaderboard for that version may be retrieved via
/// the ArchiveDownloadUrl. Statistics which have not been reset (incremented/versioned) will only have
/// a single version which is not scheduled to reset. Result payload for PlayFabAdminGetPlayerStatisticVersionsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerStatisticVersionsResult
{
    /// <summary>
    /// (Optional) Version change history of the statistic.
    /// </summary>
    PlayFabAdminPlayerStatisticVersion const* const* statisticVersions;

    /// <summary>
    /// Count of statisticVersions
    /// </summary>
    uint32_t statisticVersionsCount;

} PlayFabAdminGetPlayerStatisticVersionsResult;

/// <summary>
/// PlayFabAdminGetPlayerTagsRequest data model. This API will return a list of canonical tags which
/// includes both namespace and tag's name. If namespace is not provided, the result is a list of all
/// canonical tags. TagName can be used for segmentation and Namespace is limited to 128 characters.
/// Request object for PlayFabAdminGetPlayerTagsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerTagsRequest
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

} PlayFabAdminGetPlayerTagsRequest;

/// <summary>
/// PlayFabAdminGetPlayerTagsResult data model. Result payload for PlayFabAdminGetPlayerTagsAsync.
/// </summary>
typedef struct PlayFabAdminGetPlayerTagsResult
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

} PlayFabAdminGetPlayerTagsResult;

/// <summary>
/// PlayFabAdminGetPolicyRequest data model. Views the requested policy. Today, the only supported policy
/// is 'ApiPolicy'. Request object for PlayFabAdminGetPolicyAsync.
/// </summary>
typedef struct PlayFabAdminGetPolicyRequest
{
    /// <summary>
    /// (Optional) The name of the policy to read. Only supported name is 'ApiPolicy'.
    /// </summary>
    const char* policyName;

} PlayFabAdminGetPolicyRequest;

/// <summary>
/// PlayFabAdminPermissionStatement data model.
/// </summary>
typedef struct PlayFabAdminPermissionStatement
{
    /// <summary>
    /// The action this statement effects. The only supported action is 'Execute'.
    /// </summary>
    const char* action;

    /// <summary>
    /// (Optional) Additional conditions to be applied for API Resources.
    /// </summary>
    PlayFabAdminApiCondition const* apiConditions;

    /// <summary>
    /// (Optional) A comment about the statement. Intended solely for bookkeeping and debugging.
    /// </summary>
    const char* comment;

    /// <summary>
    /// The effect this statement will have. It could be either Allow or Deny.
    /// </summary>
    PlayFabAdminEffectType effect;

    /// <summary>
    /// The principal this statement will effect. The only supported principal is '*'.
    /// </summary>
    const char* principal;

    /// <summary>
    /// The resource this statements effects. The only supported resources look like 'pfrn:api--*' for
    /// all apis, or 'pfrn:api--/Client/ConfirmPurchase' for specific apis.
    /// </summary>
    const char* resource;

} PlayFabAdminPermissionStatement;

/// <summary>
/// PlayFabAdminGetPolicyResponse data model. Result payload for PlayFabAdminGetPolicyAsync.
/// </summary>
typedef struct PlayFabAdminGetPolicyResponse
{
    /// <summary>
    /// (Optional) The name of the policy read.
    /// </summary>
    const char* policyName;

    /// <summary>
    /// Policy version.
    /// </summary>
    int32_t policyVersion;

    /// <summary>
    /// (Optional) The statements in the requested policy.
    /// </summary>
    PlayFabAdminPermissionStatement const* const* statements;

    /// <summary>
    /// Count of statements
    /// </summary>
    uint32_t statementsCount;

} PlayFabAdminGetPolicyResponse;

/// <summary>
/// PlayFabAdminGetPublisherDataRequest data model. This API is designed to return publisher-specific
/// values which can be read, but not written to, by the client. This data is shared across all titles
/// assigned to a particular publisher, and can be used for cross-game coordination. Only titles assigned
/// to a publisher can use this API. For more information email helloplayfab@microsoft.com. This AdminAPI
/// call for getting title data guarantees no delay in between update and retrieval of newly set data.
/// Request object for PlayFabAdminGetPublisherDataAsync.
/// </summary>
typedef struct PlayFabAdminGetPublisherDataRequest
{
    /// <summary>
    ///  array of keys to get back data from the Publisher data blob, set by the admin tools.
    /// </summary>
    const char* const* keys;

    /// <summary>
    /// Count of keys
    /// </summary>
    uint32_t keysCount;

} PlayFabAdminGetPublisherDataRequest;

/// <summary>
/// PlayFabAdminGetPublisherDataResult data model. Result payload for PlayFabAdminGetPublisherDataAsync.
/// </summary>
typedef struct PlayFabAdminGetPublisherDataResult
{
    /// <summary>
    /// (Optional) A dictionary object of key / value pairs.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabAdminGetPublisherDataResult;

/// <summary>
/// PlayFabAdminGetRandomResultTablesRequest data model. Request object for PlayFabAdminGetRandomResultTablesAsync.
/// </summary>
typedef struct PlayFabAdminGetRandomResultTablesRequest
{
    /// <summary>
    /// (Optional) Catalog version to fetch tables from. Use default catalog version if null.
    /// </summary>
    const char* catalogVersion;

} PlayFabAdminGetRandomResultTablesRequest;

/// <summary>
/// PlayFabAdminResultTableNode data model.
/// </summary>
typedef struct PlayFabAdminResultTableNode
{
    /// <summary>
    /// Either an ItemId, or the TableId of another random result table.
    /// </summary>
    const char* resultItem;

    /// <summary>
    /// Whether this entry in the table is an item or a link to another table.
    /// </summary>
    PlayFabAdminResultTableNodeType resultItemType;

    /// <summary>
    /// How likely this is to be rolled - larger numbers add more weight.
    /// </summary>
    int32_t weight;

} PlayFabAdminResultTableNode;

/// <summary>
/// PlayFabAdminRandomResultTableListing data model.
/// </summary>
typedef struct PlayFabAdminRandomResultTableListing
{
    /// <summary>
    /// (Optional) Catalog version this table is associated with.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Child nodes that indicate what kind of drop table item this actually is.
    /// </summary>
    PlayFabAdminResultTableNode const* const* nodes;

    /// <summary>
    /// Count of nodes
    /// </summary>
    uint32_t nodesCount;

    /// <summary>
    /// Unique name for this drop table.
    /// </summary>
    const char* tableId;

} PlayFabAdminRandomResultTableListing;

/// <summary>
/// PlayFabAdminGetRandomResultTablesResult data model. Result payload for PlayFabAdminGetRandomResultTablesAsync.
/// </summary>
typedef struct PlayFabAdminGetRandomResultTablesResult
{
    /// <summary>
    /// (Optional) Array of random result tables currently available.
    /// </summary>
    struct PlayFabAdminRandomResultTableListingDictionaryEntry const* tables;

    /// <summary>
    /// Count of tables
    /// </summary>
    uint32_t tablesCount;

} PlayFabAdminGetRandomResultTablesResult;

/// <summary>
/// PlayFabAdminGetSegmentsRequest data model. Given input segment ids, return list of segments. Request
/// object for PlayFabAdminGetSegmentsAsync.
/// </summary>
typedef struct PlayFabAdminGetSegmentsRequest
{
    /// <summary>
    /// Segment ids to filter title segments.
    /// </summary>
    const char* const* segmentIds;

    /// <summary>
    /// Count of segmentIds
    /// </summary>
    uint32_t segmentIdsCount;

} PlayFabAdminGetSegmentsRequest;

/// <summary>
/// PlayFabAdminGetSegmentsResponse data model. Result payload for PlayFabAdminGetSegmentsAsync.
/// </summary>
typedef struct PlayFabAdminGetSegmentsResponse
{
    /// <summary>
    /// (Optional) Error message.
    /// </summary>
    const char* errorMessage;

    /// <summary>
    /// (Optional) List of title segments.
    /// </summary>
    PlayFabAdminSegmentModel const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PlayFabAdminGetSegmentsResponse;

/// <summary>
/// PlayFabAdminGetServerBuildInfoRequest data model. Request object for PlayFabAdminGetServerBuildInfoAsync.
/// </summary>
typedef struct PlayFabAdminGetServerBuildInfoRequest
{
    /// <summary>
    /// Unique identifier of the previously uploaded build executable for which information is being
    /// requested.
    /// </summary>
    const char* buildId;

} PlayFabAdminGetServerBuildInfoRequest;

/// <summary>
/// PlayFabAdminGetServerBuildInfoResult data model. Information about a particular server build. Result
/// payload for PlayFabAdminGetServerBuildInfoAsync.
/// </summary>
typedef struct PlayFabAdminGetServerBuildInfoResult
{
    /// <summary>
    /// (Optional) Array of regions where this build can used, when it is active.
    /// </summary>
    PlayFabAdminRegion const* activeRegions;

    /// <summary>
    /// Count of activeRegions
    /// </summary>
    uint32_t activeRegionsCount;

    /// <summary>
    /// (Optional) Unique identifier for this build executable.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) Developer comment(s) for this build.
    /// </summary>
    const char* comment;

    /// <summary>
    /// (Optional) Error message, if any, about this build.
    /// </summary>
    const char* errorMessage;

    /// <summary>
    /// Maximum number of game server instances that can run on a single host machine.
    /// </summary>
    int32_t maxGamesPerHost;

    /// <summary>
    /// Minimum capacity of additional game server instances that can be started before the autoscaling
    /// service starts new host machines (given the number of current running host machines and game server
    /// instances).
    /// </summary>
    int32_t minFreeGameSlots;

    /// <summary>
    /// (Optional) The current status of the build validation and processing steps.
    /// </summary>
    PlayFabAdminGameBuildStatus const* status;

    /// <summary>
    /// Time this build was last modified (or uploaded, if this build has never been modified).
    /// </summary>
    time_t timestamp;

    /// <summary>
    /// (Optional) Unique identifier for the title, found in the Settings > Game Properties section of
    /// the PlayFab developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabAdminGetServerBuildInfoResult;

/// <summary>
/// PlayFabAdminGetServerBuildUploadURLRequest data model. Request object for PlayFabAdminGetServerBuildUploadUrlAsync.
/// </summary>
typedef struct PlayFabAdminGetServerBuildUploadURLRequest
{
    /// <summary>
    /// Unique identifier of the game server build to upload.
    /// </summary>
    const char* buildId;

} PlayFabAdminGetServerBuildUploadURLRequest;

/// <summary>
/// PlayFabAdminGetServerBuildUploadURLResult data model. Result payload for PlayFabAdminGetServerBuildUploadUrlAsync.
/// </summary>
typedef struct PlayFabAdminGetServerBuildUploadURLResult
{
    /// <summary>
    /// (Optional) Pre-authorized URL for uploading the game server build package.
    /// </summary>
    const char* uRL;

} PlayFabAdminGetServerBuildUploadURLResult;

/// <summary>
/// PlayFabAdminGetStoreItemsRequest data model. A store contains an array of references to items defined
/// in the catalog, along with the prices for the item, in both real world and virtual currencies. These
/// prices act as an override to any prices defined in the catalog. In this way, the base definitions
/// of the items may be defined in the catalog, with all associated properties, while the pricing can
/// be set for each store, as needed. This allows for subsets of goods to be defined for different purposes
/// (in order to simplify showing some, but not all catalog items to users, based upon different characteristics),
/// along with unique prices. Note that all prices defined in the catalog and store definitions for the
/// item are considered valid, and that a compromised client can be made to send a request for an item
/// based upon any of these definitions. If no price is specified in the store for an item, the price
/// set in the catalog should be displayed to the user. Request object for PlayFabAdminGetStoreItemsAsync.
/// </summary>
typedef struct PlayFabAdminGetStoreItemsRequest
{
    /// <summary>
    /// (Optional) Catalog version to store items from. Use default catalog version if null.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Unqiue identifier for the store which is being requested.
    /// </summary>
    const char* storeId;

} PlayFabAdminGetStoreItemsRequest;

/// <summary>
/// PlayFabAdminStoreMarketingModel data model. Marketing data about a specific store.
/// </summary>
typedef struct PlayFabAdminStoreMarketingModel
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

} PlayFabAdminStoreMarketingModel;

/// <summary>
/// PlayFabAdminStoreItem data model. A store entry that list a catalog item at a particular price.
/// </summary>
typedef struct PlayFabAdminStoreItem
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

} PlayFabAdminStoreItem;

/// <summary>
/// PlayFabAdminGetStoreItemsResult data model. Result payload for PlayFabAdminGetStoreItemsAsync.
/// </summary>
typedef struct PlayFabAdminGetStoreItemsResult
{
    /// <summary>
    /// (Optional) The base catalog that this store is a part of.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Additional data about the store.
    /// </summary>
    PlayFabAdminStoreMarketingModel const* marketingData;

    /// <summary>
    /// (Optional) How the store was last updated (Admin or a third party).
    /// </summary>
    PlayFabAdminSourceType const* source;

    /// <summary>
    /// (Optional) Array of items which can be purchased from this store.
    /// </summary>
    PlayFabAdminStoreItem const* const* store;

    /// <summary>
    /// Count of store
    /// </summary>
    uint32_t storeCount;

    /// <summary>
    /// (Optional) The ID of this store.
    /// </summary>
    const char* storeId;

} PlayFabAdminGetStoreItemsResult;

/// <summary>
/// PlayFabAdminGetTaskInstanceRequest data model. The result includes detail information that's specific
/// to a CloudScript task. Only CloudScript tasks configured as "Run Cloud Script function once" will
/// be retrieved. To get a list of task instances by task, status, or time range, use GetTaskInstances.
/// Request object for PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceAsync and PlayFabAdminGetCloudScriptTaskInstanceAsync.
/// </summary>
typedef struct PlayFabAdminGetTaskInstanceRequest
{
    /// <summary>
    /// ID of the requested task instance.
    /// </summary>
    const char* taskInstanceId;

} PlayFabAdminGetTaskInstanceRequest;

/// <summary>
/// PlayFabAdminGetTaskInstancesRequest data model. Only the most recent 100 task instances are returned,
/// ordered by start time descending. The results are generic basic information for task instances. To
/// get detail information specific to each task type, use Get*TaskInstance based on its corresponding
/// task type. Request object for PlayFabAdminGetTaskInstancesAsync.
/// </summary>
typedef struct PlayFabAdminGetTaskInstancesRequest
{
    /// <summary>
    /// (Optional) Optional range-from filter for task instances' StartedAt timestamp.
    /// </summary>
    time_t const* startedAtRangeFrom;

    /// <summary>
    /// (Optional) Optional range-to filter for task instances' StartedAt timestamp.
    /// </summary>
    time_t const* startedAtRangeTo;

    /// <summary>
    /// (Optional) Optional filter for task instances that are of a specific status.
    /// </summary>
    PlayFabAdminTaskInstanceStatus const* statusFilter;

    /// <summary>
    /// (Optional) Name or ID of the task whose instances are being queried. If not specified, return
    /// all task instances that satisfy conditions set by other filters.
    /// </summary>
    PlayFabAdminNameIdentifier const* taskIdentifier;

} PlayFabAdminGetTaskInstancesRequest;

/// <summary>
/// PlayFabAdminTaskInstanceBasicSummary data model.
/// </summary>
typedef struct PlayFabAdminTaskInstanceBasicSummary
{
    /// <summary>
    /// (Optional) UTC timestamp when the task completed.
    /// </summary>
    time_t const* completedAt;

    /// <summary>
    /// (Optional) Error message for last processing attempt, if an error occured.
    /// </summary>
    const char* errorMessage;

    /// <summary>
    /// (Optional) Estimated time remaining in seconds.
    /// </summary>
    double const* estimatedSecondsRemaining;

    /// <summary>
    /// (Optional) Progress represented as percentage.
    /// </summary>
    double const* percentComplete;

    /// <summary>
    /// (Optional) If manually scheduled, ID of user who scheduled the task.
    /// </summary>
    const char* scheduledByUserId;

    /// <summary>
    /// UTC timestamp when the task started.
    /// </summary>
    time_t startedAt;

    /// <summary>
    /// (Optional) Current status of the task instance.
    /// </summary>
    PlayFabAdminTaskInstanceStatus const* status;

    /// <summary>
    /// (Optional) Identifier of the task this instance belongs to.
    /// </summary>
    PlayFabAdminNameIdentifier const* taskIdentifier;

    /// <summary>
    /// (Optional) ID of the task instance.
    /// </summary>
    const char* taskInstanceId;

    /// <summary>
    /// (Optional) Type of the task.
    /// </summary>
    PlayFabAdminScheduledTaskType const* type;

} PlayFabAdminTaskInstanceBasicSummary;

/// <summary>
/// PlayFabAdminGetTaskInstancesResult data model. Result payload for PlayFabAdminGetTaskInstancesAsync.
/// </summary>
typedef struct PlayFabAdminGetTaskInstancesResult
{
    /// <summary>
    /// (Optional) Basic status summaries of the queried task instances. Empty If no task instances meets
    /// the filter criteria. To get detailed status summary, use Get*TaskInstance API according to task
    /// type (e.g. GetActionsOnPlayersInSegmentTaskInstance).
    /// </summary>
    PlayFabAdminTaskInstanceBasicSummary const* const* summaries;

    /// <summary>
    /// Count of summaries
    /// </summary>
    uint32_t summariesCount;

} PlayFabAdminGetTaskInstancesResult;

/// <summary>
/// PlayFabAdminGetTasksRequest data model. Request object for PlayFabAdminGetTasksAsync.
/// </summary>
typedef struct PlayFabAdminGetTasksRequest
{
    /// <summary>
    /// (Optional) Provide either the task ID or the task name to get a specific task. If not specified,
    /// return all defined tasks.
    /// </summary>
    PlayFabAdminNameIdentifier const* identifier;

} PlayFabAdminGetTasksRequest;

/// <summary>
/// PlayFabAdminScheduledTask data model.
/// </summary>
typedef struct PlayFabAdminScheduledTask
{
    /// <summary>
    /// (Optional) Description the task.
    /// </summary>
    const char* description;

    /// <summary>
    /// Whether the schedule is active. Inactive schedule will not trigger task execution.
    /// </summary>
    bool isActive;

    /// <summary>
    /// (Optional) UTC time of last run.
    /// </summary>
    time_t const* lastRunTime;

    /// <summary>
    /// Name of the task. This is a unique identifier for tasks in the title.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) UTC time of next run.
    /// </summary>
    time_t const* nextRunTime;

    /// <summary>
    /// (Optional) Task parameter. Different types of task have different parameter structure. See each
    /// task type's create API documentation for the details.
    /// </summary>
    PlayFabJsonObject parameter;

    /// <summary>
    /// (Optional) Cron expression for the run schedule of the task. The expression should be in UTC.
    /// </summary>
    const char* schedule;

    /// <summary>
    /// (Optional) ID of the task.
    /// </summary>
    const char* taskId;

    /// <summary>
    /// (Optional) Task type.
    /// </summary>
    PlayFabAdminScheduledTaskType const* type;

} PlayFabAdminScheduledTask;

/// <summary>
/// PlayFabAdminGetTasksResult data model. Result payload for PlayFabAdminGetTasksAsync.
/// </summary>
typedef struct PlayFabAdminGetTasksResult
{
    /// <summary>
    /// (Optional) Result tasks. Empty if there is no task found.
    /// </summary>
    PlayFabAdminScheduledTask const* const* tasks;

    /// <summary>
    /// Count of tasks
    /// </summary>
    uint32_t tasksCount;

} PlayFabAdminGetTasksResult;

/// <summary>
/// PlayFabAdminGetTitleDataRequest data model. This API method is designed to return title specific
/// values which can be read by the client. For example, a developer could choose to store values which
/// modify the user experience, such as enemy spawn rates, weapon strengths, movement speeds, etc. This
/// allows a developer to update the title without the need to create, test, and ship a new build. If
/// an override label is specified in the request, the overrides are applied automatically and returned
/// with the title data. Note that due to caching, there may up to a minute delay in between updating
/// title data and a query returning the newest value. Request object for PlayFabAdminGetTitleDataAsync
/// and PlayFabAdminGetTitleInternalDataAsync.
/// </summary>
typedef struct PlayFabAdminGetTitleDataRequest
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

} PlayFabAdminGetTitleDataRequest;

/// <summary>
/// PlayFabAdminGetTitleDataResult data model. Result payload for PlayFabAdminGetTitleDataAsync and PlayFabAdminGetTitleInternalDataAsync.
/// </summary>
typedef struct PlayFabAdminGetTitleDataResult
{
    /// <summary>
    /// (Optional) A dictionary object of key / value pairs.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabAdminGetTitleDataResult;

/// <summary>
/// PlayFabAdminGetUserBansRequest data model. Get all bans for a user, including inactive and expired
/// bans. . Request object for PlayFabAdminGetUserBansAsync.
/// </summary>
typedef struct PlayFabAdminGetUserBansRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminGetUserBansRequest;

/// <summary>
/// PlayFabAdminGetUserBansResult data model. Result payload for PlayFabAdminGetUserBansAsync.
/// </summary>
typedef struct PlayFabAdminGetUserBansResult
{
    /// <summary>
    /// (Optional) Information about the bans.
    /// </summary>
    PlayFabAdminBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabAdminGetUserBansResult;

/// <summary>
/// PlayFabAdminGetUserDataRequest data model. Data is stored as JSON key-value pairs. If the Keys parameter
/// is provided, the data object returned will only contain the data specific to the indicated Keys. Otherwise,
/// the full set of custom user data will be returned. Request object for PlayFabAdminGetUserDataAsync,
/// PlayFabAdminGetUserInternalDataAsync, PlayFabAdminGetUserPublisherDataAsync, PlayFabAdminGetUserPublisherInternalDataAsync,
/// PlayFabAdminGetUserPublisherReadOnlyDataAsync, and PlayFabAdminGetUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabAdminGetUserDataRequest
{
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminGetUserDataRequest;

/// <summary>
/// PlayFabAdminGetUserDataResult data model. Result payload for PlayFabAdminGetUserDataAsync, PlayFabAdminGetUserInternalDataAsync,
/// PlayFabAdminGetUserPublisherDataAsync, PlayFabAdminGetUserPublisherInternalDataAsync, PlayFabAdminGetUserPublisherReadOnlyDataAsync,
/// and PlayFabAdminGetUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabAdminGetUserDataResult
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

    /// <summary>
    /// (Optional) PlayFab unique identifier of the user whose custom data is being returned.
    /// </summary>
    const char* playFabId;

} PlayFabAdminGetUserDataResult;

/// <summary>
/// PlayFabAdminGetUserInventoryRequest data model. All items currently in the user inventory will be
/// returned, irrespective of how they were acquired (via purchasing, grants, coupons, etc.). Items that
/// are expired, fully consumed, or are no longer valid are not considered to be in the user's current
/// inventory, and so will not be not included. Request object for PlayFabAdminGetUserInventoryAsync.
/// </summary>
typedef struct PlayFabAdminGetUserInventoryRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminGetUserInventoryRequest;

/// <summary>
/// PlayFabAdminGetUserInventoryResult data model. Result payload for PlayFabAdminGetUserInventoryAsync.
/// </summary>
typedef struct PlayFabAdminGetUserInventoryResult
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
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

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

} PlayFabAdminGetUserInventoryResult;

/// <summary>
/// PlayFabAdminGrantedItemInstance data model. Result of granting an item to a user. Note, to retrieve
/// additional information for an item such as Tags, Description that are the same across all instances
/// of the item, a call to GetCatalogItems is required. The ItemID of can be matched to a catalog entry,
/// which contains the additional information. Also note that Custom Data is only set when the User's
/// specific instance has updated the CustomData via a call to UpdateUserInventoryItemCustomData. Other
/// fields such as UnitPrice and UnitCurrency are only set when the item was granted via a purchase.
/// </summary>
typedef struct PlayFabAdminGrantedItemInstance
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
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

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
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Timestamp for when this instance was purchased.
    /// </summary>
    time_t const* purchaseDate;

    /// <summary>
    /// (Optional) Total number of remaining uses, if this is a consumable item.
    /// </summary>
    int32_t const* remainingUses;

    /// <summary>
    /// Result of this operation.
    /// </summary>
    bool result;

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

} PlayFabAdminGrantedItemInstance;

/// <summary>
/// PlayFabAdminItemGrant data model.
/// </summary>
typedef struct PlayFabAdminItemGrant
{
    /// <summary>
    /// (Optional) String detailing any additional information concerning this operation.
    /// </summary>
    const char* annotation;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

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
    /// Unique identifier of the catalog item to be granted to the user.
    /// </summary>
    const char* itemId;

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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminItemGrant;

/// <summary>
/// PlayFabAdminGrantItemsToUsersRequest data model. This function directly adds inventory items to user
/// inventories. As a result of this operations, the user will not be charged any transaction fee, regardless
/// of the inventory item catalog definition. Please note that the processing time for inventory grants
/// and purchases increases fractionally the more items are in the inventory, and the more items are in
/// the grant/purchase operation. Request object for PlayFabAdminGrantItemsToUsersAsync.
/// </summary>
typedef struct PlayFabAdminGrantItemsToUsersRequest
{
    /// <summary>
    /// (Optional) Catalog version from which items are to be granted.
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
    /// Array of items to grant and the users to whom the items are to be granted.
    /// </summary>
    PlayFabAdminItemGrant const* const* itemGrants;

    /// <summary>
    /// Count of itemGrants
    /// </summary>
    uint32_t itemGrantsCount;

} PlayFabAdminGrantItemsToUsersRequest;

/// <summary>
/// PlayFabAdminGrantItemsToUsersResult data model. Please note that the order of the items in the response
/// may not match the order of items in the request. Result payload for PlayFabAdminGrantItemsToUsersAsync.
/// </summary>
typedef struct PlayFabAdminGrantItemsToUsersResult
{
    /// <summary>
    /// (Optional) Array of items granted to users.
    /// </summary>
    PlayFabAdminGrantedItemInstance const* const* itemGrantResults;

    /// <summary>
    /// Count of itemGrantResults
    /// </summary>
    uint32_t itemGrantResultsCount;

} PlayFabAdminGrantItemsToUsersResult;

/// <summary>
/// PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest data model. This operation will increment
/// the global counter for the number of these items available. This number cannot be decremented, except
/// by actual grants. Request object for PlayFabAdminIncrementLimitedEditionItemAvailabilityAsync.
/// </summary>
typedef struct PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest
{
    /// <summary>
    /// Amount to increase availability by.
    /// </summary>
    int32_t amount;

    /// <summary>
    /// (Optional) Which catalog is being updated. If null, uses the default catalog.
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
    /// The item which needs more availability.
    /// </summary>
    const char* itemId;

} PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest;

/// <summary>
/// PlayFabAdminIncrementPlayerStatisticVersionRequest data model. Statistics are numeric values, with
/// each statistic in the title also generating a leaderboard. When this call is made on a given statistic,
/// this forces a reset of that statistic. Upon reset, the statistic updates to a new version with no
/// values (effectively removing all players from the leaderboard). The previous version's statistic values
/// are also archived for retrieval, if needed (see GetPlayerStatisticVersions). Statistics not created
/// via a call to CreatePlayerStatisticDefinition by default have a VersionChangeInterval of Never, meaning
/// they do not reset on a schedule, but they can be set to do so via a call to UpdatePlayerStatisticDefinition.
/// Once a statistic has been reset (sometimes referred to as versioned or incremented), the now-previous
/// version can still be written to for up a short, pre-defined period (currently 10 seconds), to prevent
/// issues with levels completing around the time of the reset. Also, once reset, the historical statistics
/// for players in the title may be retrieved using the URL specified in the version information (GetPlayerStatisticVersions).
/// Request object for PlayFabAdminIncrementPlayerStatisticVersionAsync.
/// </summary>
typedef struct PlayFabAdminIncrementPlayerStatisticVersionRequest
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

} PlayFabAdminIncrementPlayerStatisticVersionRequest;

/// <summary>
/// PlayFabAdminIncrementPlayerStatisticVersionResult data model. Result payload for PlayFabAdminIncrementPlayerStatisticVersionAsync.
/// </summary>
typedef struct PlayFabAdminIncrementPlayerStatisticVersionResult
{
    /// <summary>
    /// (Optional) Version change history of the statistic.
    /// </summary>
    PlayFabAdminPlayerStatisticVersion const* statisticVersion;

} PlayFabAdminIncrementPlayerStatisticVersionResult;

/// <summary>
/// PlayFabAdminListBuildsResult data model. Result payload for PlayFabAdminListServerBuildsAsync.
/// </summary>
typedef struct PlayFabAdminListBuildsResult
{
    /// <summary>
    /// (Optional) Array of uploaded game server builds.
    /// </summary>
    PlayFabAdminGetServerBuildInfoResult const* const* builds;

    /// <summary>
    /// Count of builds
    /// </summary>
    uint32_t buildsCount;

} PlayFabAdminListBuildsResult;

/// <summary>
/// PlayFabAdminOpenIdConnection data model.
/// </summary>
typedef struct PlayFabAdminOpenIdConnection
{
    /// <summary>
    /// (Optional) The client ID given by the ID provider.
    /// </summary>
    const char* clientId;

    /// <summary>
    /// (Optional) The client secret given by the ID provider.
    /// </summary>
    const char* clientSecret;

    /// <summary>
    /// (Optional) A name for the connection to identify it within the title.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// Shows if data about the connection will be loaded from the issuer's discovery document.
    /// </summary>
    bool discoverConfiguration;

    /// <summary>
    /// (Optional) Information for an OpenID Connect provider.
    /// </summary>
    PlayFabAdminOpenIdIssuerInformation const* issuerInformation;

} PlayFabAdminOpenIdConnection;

/// <summary>
/// PlayFabAdminListOpenIdConnectionResponse data model. Result payload for PlayFabAdminListOpenIdConnectionAsync.
/// </summary>
typedef struct PlayFabAdminListOpenIdConnectionResponse
{
    /// <summary>
    /// (Optional) The list of Open ID Connections.
    /// </summary>
    PlayFabAdminOpenIdConnection const* const* connections;

    /// <summary>
    /// Count of connections
    /// </summary>
    uint32_t connectionsCount;

} PlayFabAdminListOpenIdConnectionResponse;

/// <summary>
/// PlayFabAdminListVirtualCurrencyTypesResult data model. Result payload for PlayFabAdminListVirtualCurrencyTypesAsync.
/// </summary>
typedef struct PlayFabAdminListVirtualCurrencyTypesResult
{
    /// <summary>
    /// (Optional) List of virtual currency names defined for this title.
    /// </summary>
    PlayFabAdminVirtualCurrencyData const* const* virtualCurrencies;

    /// <summary>
    /// Count of virtualCurrencies
    /// </summary>
    uint32_t virtualCurrenciesCount;

} PlayFabAdminListVirtualCurrencyTypesResult;

/// <summary>
/// PlayFabAdminLookupUserAccountInfoRequest data model. This API allows for access to details regarding
/// a user in the PlayFab service, usually for purposes of customer support. Note that data returned may
/// be Personally Identifying Information (PII), such as email address, and so care should be taken in
/// how this data is stored and managed. Since this call will always return the relevant information for
/// users who have accessed the title, the recommendation is to not store this data locally. Request
/// object for PlayFabAdminGetUserAccountInfoAsync.
/// </summary>
typedef struct PlayFabAdminLookupUserAccountInfoRequest
{
    /// <summary>
    /// (Optional) User email address attached to their account.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Title specific username to match against existing user accounts.
    /// </summary>
    const char* titleDisplayName;

    /// <summary>
    /// (Optional) PlayFab username for the account (3-20 characters).
    /// </summary>
    const char* username;

} PlayFabAdminLookupUserAccountInfoRequest;

/// <summary>
/// PlayFabAdminLookupUserAccountInfoResult data model. Result payload for PlayFabAdminGetUserAccountInfoAsync.
/// </summary>
typedef struct PlayFabAdminLookupUserAccountInfoResult
{
    /// <summary>
    /// (Optional) User info for the user matching the request.
    /// </summary>
    PlayFabUserAccountInfo const* userInfo;

} PlayFabAdminLookupUserAccountInfoResult;

/// <summary>
/// PlayFabAdminModifyMatchmakerGameModesRequest data model. These details are used by the PlayFab matchmaking
/// service to determine if an existing Game Server Instance has room for additional users, and by the
/// PlayFab game server management service to determine when a new Game Server Host should be created
/// in order to prevent excess load on existing Hosts. This operation is not additive. Using it will cause
/// the game mode definition for the game server executable in question to be created from scratch. If
/// there is an existing game server mode definition for the given BuildVersion, it will be deleted and
/// replaced with the data specified in this call. Request object for PlayFabAdminModifyMatchmakerGameModesAsync.
/// </summary>
typedef struct PlayFabAdminModifyMatchmakerGameModesRequest
{
    /// <summary>
    /// Previously uploaded build version for which game modes are being specified.
    /// </summary>
    const char* buildVersion;

    /// <summary>
    /// Array of game modes (Note: this will replace all game modes for the indicated build version).
    /// </summary>
    PlayFabAdminGameModeInfo const* const* gameModes;

    /// <summary>
    /// Count of gameModes
    /// </summary>
    uint32_t gameModesCount;

} PlayFabAdminModifyMatchmakerGameModesRequest;

/// <summary>
/// PlayFabAdminModifyServerBuildRequest data model. Request object for PlayFabAdminModifyServerBuildAsync.
/// </summary>
typedef struct PlayFabAdminModifyServerBuildRequest
{
    /// <summary>
    /// (Optional) Array of regions where this build can used, when it is active.
    /// </summary>
    PlayFabAdminRegion const* activeRegions;

    /// <summary>
    /// Count of activeRegions
    /// </summary>
    uint32_t activeRegionsCount;

    /// <summary>
    /// Unique identifier of the previously uploaded build executable to be updated.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) Appended to the end of the command line when starting game servers.
    /// </summary>
    const char* commandLineTemplate;

    /// <summary>
    /// (Optional) Developer comment(s) for this build.
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
    /// (Optional) Path to the game server executable. Defaults to gameserver.exe.
    /// </summary>
    const char* executablePath;

    /// <summary>
    /// Maximum number of game server instances that can run on a single host machine.
    /// </summary>
    int32_t maxGamesPerHost;

    /// <summary>
    /// Minimum capacity of additional game server instances that can be started before the autoscaling
    /// service starts new host machines (given the number of current running host machines and game server
    /// instances).
    /// </summary>
    int32_t minFreeGameSlots;

    /// <summary>
    /// (Optional) New timestamp.
    /// </summary>
    time_t const* timestamp;

} PlayFabAdminModifyServerBuildRequest;

/// <summary>
/// PlayFabAdminModifyServerBuildResult data model. Result payload for PlayFabAdminModifyServerBuildAsync.
/// </summary>
typedef struct PlayFabAdminModifyServerBuildResult
{
    /// <summary>
    /// (Optional) Array of regions where this build can used, when it is active.
    /// </summary>
    PlayFabAdminRegion const* activeRegions;

    /// <summary>
    /// Count of activeRegions
    /// </summary>
    uint32_t activeRegionsCount;

    /// <summary>
    /// (Optional) Unique identifier for this build executable.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) Appended to the end of the command line when starting game servers.
    /// </summary>
    const char* commandLineTemplate;

    /// <summary>
    /// (Optional) Developer comment(s) for this build.
    /// </summary>
    const char* comment;

    /// <summary>
    /// (Optional) Path to the game server executable. Defaults to gameserver.exe.
    /// </summary>
    const char* executablePath;

    /// <summary>
    /// Maximum number of game server instances that can run on a single host machine.
    /// </summary>
    int32_t maxGamesPerHost;

    /// <summary>
    /// Minimum capacity of additional game server instances that can be started before the autoscaling
    /// service starts new host machines (given the number of current running host machines and game server
    /// instances).
    /// </summary>
    int32_t minFreeGameSlots;

    /// <summary>
    /// (Optional) The current status of the build validation and processing steps.
    /// </summary>
    PlayFabAdminGameBuildStatus const* status;

    /// <summary>
    /// Time this build was last modified (or uploaded, if this build has never been modified).
    /// </summary>
    time_t timestamp;

    /// <summary>
    /// (Optional) Unique identifier for the title, found in the Settings > Game Properties section of
    /// the PlayFab developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PlayFabAdminModifyServerBuildResult;

/// <summary>
/// PlayFabAdminModifyUserVirtualCurrencyResult data model. Result payload for PlayFabAdminAddUserVirtualCurrencyAsync
/// and PlayFabAdminSubtractUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabAdminModifyUserVirtualCurrencyResult
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

} PlayFabAdminModifyUserVirtualCurrencyResult;

/// <summary>
/// PlayFabAdminRandomResultTable data model.
/// </summary>
typedef struct PlayFabAdminRandomResultTable
{
    /// <summary>
    /// Child nodes that indicate what kind of drop table item this actually is.
    /// </summary>
    PlayFabAdminResultTableNode const* const* nodes;

    /// <summary>
    /// Count of nodes
    /// </summary>
    uint32_t nodesCount;

    /// <summary>
    /// Unique name for this drop table.
    /// </summary>
    const char* tableId;

} PlayFabAdminRandomResultTable;

/// <summary>
/// PlayFabAdminRefundPurchaseRequest data model. Request object for PlayFabAdminRefundPurchaseAsync.
/// </summary>
typedef struct PlayFabAdminRefundPurchaseRequest
{
    /// <summary>
    /// Unique order ID for the purchase in question.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) The Reason parameter should correspond with the payment providers reason field, if
    /// they require one such as Facebook. In the case of Facebook this must match one of their refund
    /// or dispute resolution enums (See: https://developers.facebook.com/docs/payments/implementation-guide/handling-disputes-refunds).
    /// </summary>
    const char* reason;

} PlayFabAdminRefundPurchaseRequest;

/// <summary>
/// PlayFabAdminRefundPurchaseResponse data model. Result payload for PlayFabAdminRefundPurchaseAsync.
/// </summary>
typedef struct PlayFabAdminRefundPurchaseResponse
{
    /// <summary>
    /// (Optional) The order's updated purchase status.
    /// </summary>
    const char* purchaseStatus;

} PlayFabAdminRefundPurchaseResponse;

/// <summary>
/// PlayFabAdminRemovePlayerTagRequest data model. This API will trigger a player_tag_removed event and
/// remove a tag with the given TagName and PlayFabID from the corresponding player profile. TagName can
/// be used for segmentation and it is limited to 256 characters. Request object for PlayFabAdminRemovePlayerTagAsync.
/// </summary>
typedef struct PlayFabAdminRemovePlayerTagRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique tag for player profile.
    /// </summary>
    const char* tagName;

} PlayFabAdminRemovePlayerTagRequest;

/// <summary>
/// PlayFabAdminRemoveServerBuildRequest data model. Request object for PlayFabAdminRemoveServerBuildAsync.
/// </summary>
typedef struct PlayFabAdminRemoveServerBuildRequest
{
    /// <summary>
    /// Unique identifier of the previously uploaded build executable to be removed.
    /// </summary>
    const char* buildId;

} PlayFabAdminRemoveServerBuildRequest;

/// <summary>
/// PlayFabAdminRemoveVirtualCurrencyTypesRequest data model. Virtual currencies to be removed cannot
/// have entries in any catalog nor store for the title. Note that this operation will not remove player
/// balances for the removed currencies; if a deleted currency is recreated at any point, user balances
/// will be in an undefined state. Request object for PlayFabAdminRemoveVirtualCurrencyTypesAsync.
/// </summary>
typedef struct PlayFabAdminRemoveVirtualCurrencyTypesRequest
{
    /// <summary>
    /// List of virtual currencies to delete.
    /// </summary>
    PlayFabAdminVirtualCurrencyData const* const* virtualCurrencies;

    /// <summary>
    /// Count of virtualCurrencies
    /// </summary>
    uint32_t virtualCurrenciesCount;

} PlayFabAdminRemoveVirtualCurrencyTypesRequest;

/// <summary>
/// PlayFabAdminResetCharacterStatisticsRequest data model. Note that this action cannot be un-done.
/// All statistics for this character will be deleted, removing the user from all leaderboards for the
/// game. Request object for PlayFabAdminResetCharacterStatisticsAsync.
/// </summary>
typedef struct PlayFabAdminResetCharacterStatisticsRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminResetCharacterStatisticsRequest;

/// <summary>
/// PlayFabAdminResetPasswordRequest data model. Resets a player's password taking in a new password
/// based and validating the user based off of a token sent to the playerto their email. The token expires
/// after 30 minutes. Request object for PlayFabAdminResetPasswordAsync.
/// </summary>
typedef struct PlayFabAdminResetPasswordRequest
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
    /// The new password for the player.
    /// </summary>
    const char* password;

    /// <summary>
    /// The token of the player requesting the password reset.
    /// </summary>
    const char* token;

} PlayFabAdminResetPasswordRequest;

/// <summary>
/// PlayFabAdminResetUserStatisticsRequest data model. Note that this action cannot be un-done. All statistics
/// for this user will be deleted, removing the user from all leaderboards for the game. Request object
/// for PlayFabAdminResetUserStatisticsAsync.
/// </summary>
typedef struct PlayFabAdminResetUserStatisticsRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminResetUserStatisticsRequest;

/// <summary>
/// PlayFabAdminResolvePurchaseDisputeRequest data model. Request object for PlayFabAdminResolvePurchaseDisputeAsync.
/// </summary>
typedef struct PlayFabAdminResolvePurchaseDisputeRequest
{
    /// <summary>
    /// Unique order ID for the purchase in question.
    /// </summary>
    const char* orderId;

    /// <summary>
    /// Enum for the desired purchase result state after notifying the payment provider. Valid values
    /// are Revoke, Reinstate and Manual. Manual will cause no change to the order state.
    /// </summary>
    PlayFabAdminResolutionOutcome outcome;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) The Reason parameter should correspond with the payment providers reason field, if
    /// they require one such as Facebook. In the case of Facebook this must match one of their refund
    /// or dispute resolution enums (See: https://developers.facebook.com/docs/payments/implementation-guide/handling-disputes-refunds).
    /// </summary>
    const char* reason;

} PlayFabAdminResolvePurchaseDisputeRequest;

/// <summary>
/// PlayFabAdminResolvePurchaseDisputeResponse data model. Result payload for PlayFabAdminResolvePurchaseDisputeAsync.
/// </summary>
typedef struct PlayFabAdminResolvePurchaseDisputeResponse
{
    /// <summary>
    /// (Optional) The order's updated purchase status.
    /// </summary>
    const char* purchaseStatus;

} PlayFabAdminResolvePurchaseDisputeResponse;

/// <summary>
/// PlayFabAdminRevokeAllBansForUserRequest data model. Setting the active state of all non-expired bans
/// for a user to Inactive. Expired bans with an Active state will be ignored, however. Returns information
/// about applied updates only. Request object for PlayFabAdminRevokeAllBansForUserAsync.
/// </summary>
typedef struct PlayFabAdminRevokeAllBansForUserRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminRevokeAllBansForUserRequest;

/// <summary>
/// PlayFabAdminRevokeAllBansForUserResult data model. Result payload for PlayFabAdminRevokeAllBansForUserAsync.
/// </summary>
typedef struct PlayFabAdminRevokeAllBansForUserResult
{
    /// <summary>
    /// (Optional) Information on the bans that were revoked.
    /// </summary>
    PlayFabAdminBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabAdminRevokeAllBansForUserResult;

/// <summary>
/// PlayFabAdminRevokeBansRequest data model. Setting the active state of all bans requested to Inactive
/// regardless of whether that ban has already expired. BanIds that do not exist will be skipped. Returns
/// information about applied updates only. . Request object for PlayFabAdminRevokeBansAsync.
/// </summary>
typedef struct PlayFabAdminRevokeBansRequest
{
    /// <summary>
    /// Ids of the bans to be revoked. Maximum 100.
    /// </summary>
    const char* const* banIds;

    /// <summary>
    /// Count of banIds
    /// </summary>
    uint32_t banIdsCount;

} PlayFabAdminRevokeBansRequest;

/// <summary>
/// PlayFabAdminRevokeBansResult data model. Result payload for PlayFabAdminRevokeBansAsync.
/// </summary>
typedef struct PlayFabAdminRevokeBansResult
{
    /// <summary>
    /// (Optional) Information on the bans that were revoked.
    /// </summary>
    PlayFabAdminBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabAdminRevokeBansResult;

/// <summary>
/// PlayFabAdminRevokeInventoryItem data model.
/// </summary>
typedef struct PlayFabAdminRevokeInventoryItem
{
    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// Unique PlayFab assigned instance identifier of the item.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminRevokeInventoryItem;

/// <summary>
/// PlayFabAdminRevokeInventoryItemRequest data model. In cases where the inventory item in question
/// is a "crate", and the items it contained have already been dispensed, this will not revoke access
/// or otherwise remove the items which were dispensed. Request object for PlayFabAdminRevokeInventoryItemAsync.
/// </summary>
typedef struct PlayFabAdminRevokeInventoryItemRequest
{
    /// <summary>
    /// (Optional) Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// Unique PlayFab assigned instance identifier of the item.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminRevokeInventoryItemRequest;

/// <summary>
/// PlayFabAdminRevokeInventoryItemsRequest data model. In cases where the inventory item in question
/// is a "crate", and the items it contained have already been dispensed, this will not revoke access
/// or otherwise remove the items which were dispensed. Request object for PlayFabAdminRevokeInventoryItemsAsync.
/// </summary>
typedef struct PlayFabAdminRevokeInventoryItemsRequest
{
    /// <summary>
    /// Array of player items to revoke, between 1 and 25 items.
    /// </summary>
    PlayFabAdminRevokeInventoryItem const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

} PlayFabAdminRevokeInventoryItemsRequest;

/// <summary>
/// PlayFabAdminRevokeItemError data model.
/// </summary>
typedef struct PlayFabAdminRevokeItemError
{
    /// <summary>
    /// (Optional) Specific error that was encountered.
    /// </summary>
    PlayFabAdminGenericErrorCodes const* error;

    /// <summary>
    /// (Optional) Item information that failed to be revoked.
    /// </summary>
    PlayFabAdminRevokeInventoryItem const* item;

} PlayFabAdminRevokeItemError;

/// <summary>
/// PlayFabAdminRevokeInventoryItemsResult data model. Result payload for PlayFabAdminRevokeInventoryItemsAsync.
/// </summary>
typedef struct PlayFabAdminRevokeInventoryItemsResult
{
    /// <summary>
    /// (Optional) Collection of any errors that occurred during processing.
    /// </summary>
    PlayFabAdminRevokeItemError const* const* errors;

    /// <summary>
    /// Count of errors
    /// </summary>
    uint32_t errorsCount;

} PlayFabAdminRevokeInventoryItemsResult;

/// <summary>
/// PlayFabAdminRunTaskRequest data model. The returned task instance ID can be used to query for task
/// execution status. Request object for PlayFabAdminRunTaskAsync.
/// </summary>
typedef struct PlayFabAdminRunTaskRequest
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
    /// (Optional) Provide either the task ID or the task name to run a task.
    /// </summary>
    PlayFabAdminNameIdentifier const* identifier;

} PlayFabAdminRunTaskRequest;

/// <summary>
/// PlayFabAdminRunTaskResult data model. Result payload for PlayFabAdminRunTaskAsync.
/// </summary>
typedef struct PlayFabAdminRunTaskResult
{
    /// <summary>
    /// (Optional) ID of the task instance that is started. This can be used in Get*TaskInstance (e.g.
    /// GetCloudScriptTaskInstance) API call to retrieve status for the task instance.
    /// </summary>
    const char* taskInstanceId;

} PlayFabAdminRunTaskResult;

/// <summary>
/// PlayFabAdminSendAccountRecoveryEmailRequest data model. If the account in question is a "temporary"
/// account (for example, one that was created via a call to LoginFromIOSDeviceID), thisfunction will
/// have no effect. Only PlayFab accounts which have valid email addresses will be able to receive a password
/// reset email using this API. Request object for PlayFabAdminSendAccountRecoveryEmailAsync.
/// </summary>
typedef struct PlayFabAdminSendAccountRecoveryEmailRequest
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

} PlayFabAdminSendAccountRecoveryEmailRequest;

/// <summary>
/// PlayFabAdminSetPlayerSecretRequest data model. APIs that require signatures require that the player
/// have a configured Player Secret Key that is used to sign all requests. Players that don't have a secret
/// will be blocked from making API calls until it is configured. To create a signature header add a SHA256
/// hashed string containing UTF8 encoded JSON body as it will be sent to the server, the current time
/// in UTC formatted to ISO 8601, and the players secret formatted as 'body.date.secret'. Place the resulting
/// hash into the header X-PlayFab-Signature, along with a header X-PlayFab-Timestamp of the same UTC
/// timestamp used in the signature. Request object for PlayFabAdminSetPlayerSecretAsync.
/// </summary>
typedef struct PlayFabAdminSetPlayerSecretRequest
{
    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminSetPlayerSecretRequest;

/// <summary>
/// PlayFabAdminSetPublishedRevisionRequest data model. Request object for PlayFabAdminSetPublishedRevisionAsync.
/// </summary>
typedef struct PlayFabAdminSetPublishedRevisionRequest
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
    /// Revision to make the current published revision.
    /// </summary>
    int32_t revision;

    /// <summary>
    /// Version number.
    /// </summary>
    int32_t version;

} PlayFabAdminSetPublishedRevisionRequest;

/// <summary>
/// PlayFabAdminSetPublisherDataRequest data model. This API is designed to store publisher-specific
/// values which can be read, but not written to, by the client. This data is shared across all titles
/// assigned to a particular publisher, and can be used for cross-game coordination. Only titles assigned
/// to a publisher can use this API. This operation is additive. If a Key does not exist in the current
/// dataset, it will be added with the specified Value. If it already exists, the Value for that key will
/// be overwritten with the new Value. For more information email helloplayfab@microsoft.com. Request
/// object for PlayFabAdminSetPublisherDataAsync.
/// </summary>
typedef struct PlayFabAdminSetPublisherDataRequest
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

} PlayFabAdminSetPublisherDataRequest;

/// <summary>
/// PlayFabAdminTitleDataKeyValue data model.
/// </summary>
typedef struct PlayFabAdminTitleDataKeyValue
{
    /// <summary>
    /// (Optional) Key we want to set a value on (note, this is additive - will only replace an existing
    /// key's value if they are the same name.) Keys are trimmed of whitespace. Keys may not begin with
    /// the '!' character.
    /// </summary>
    const char* key;

    /// <summary>
    /// (Optional) New value to set. Set to null to remove a value.
    /// </summary>
    const char* value;

} PlayFabAdminTitleDataKeyValue;

/// <summary>
/// PlayFabAdminSetTitleDataAndOverridesRequest data model. Will set the given key values in the specified
/// override or the primary title data based on whether the label is provided or not. Request object
/// for PlayFabAdminSetTitleDataAndOverridesAsync.
/// </summary>
typedef struct PlayFabAdminSetTitleDataAndOverridesRequest
{
    /// <summary>
    /// List of titleData key-value pairs to set/delete. Use an empty value to delete an existing key;
    /// use a non-empty value to create/update a key.
    /// </summary>
    PlayFabAdminTitleDataKeyValue const* const* keyValues;

    /// <summary>
    /// Count of keyValues
    /// </summary>
    uint32_t keyValuesCount;

    /// <summary>
    /// (Optional) Name of the override.
    /// </summary>
    const char* overrideLabel;

} PlayFabAdminSetTitleDataAndOverridesRequest;

/// <summary>
/// PlayFabAdminSetTitleDataRequest data model. This API method is designed to store title specific values
/// which can be read by the client. For example, a developer could choose to store values which modify
/// the user experience, such as enemy spawn rates, weapon strengths, movement speeds, etc. This allows
/// a developer to update the title without the need to create, test, and ship a new build. This operation
/// is additive. If a Key does not exist in the current dataset, it will be added with the specified Value.
/// If it already exists, the Value for that key will be overwritten with the new Value. Request object
/// for PlayFabAdminSetTitleDataAsync and PlayFabAdminSetTitleInternalDataAsync.
/// </summary>
typedef struct PlayFabAdminSetTitleDataRequest
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

} PlayFabAdminSetTitleDataRequest;

/// <summary>
/// PlayFabAdminSetupPushNotificationRequest data model. When using the Apple Push Notification service
/// (APNS) or the development version (APNS_SANDBOX), the APNS Private Key should be used as the Credential
/// in this call. With Google Cloud Messaging (GCM), the Android API Key should be used. The current ARN
/// (if one exists) can be overwritten by setting the OverwriteOldARN boolean to true. Request object
/// for PlayFabAdminSetupPushNotificationAsync.
/// </summary>
typedef struct PlayFabAdminSetupPushNotificationRequest
{
    /// <summary>
    /// Credential is the Private Key for APNS/APNS_SANDBOX, and the API Key for GCM.
    /// </summary>
    const char* credential;

    /// <summary>
    /// (Optional) For APNS, this is the PlatformPrincipal (SSL Certificate).
    /// </summary>
    const char* key;

    /// <summary>
    /// (Optional) This field is deprecated and any usage of this will cause the API to fail.
    /// </summary>
    const char* name;

    /// <summary>
    /// Replace any existing ARN with the newly generated one. If this is set to false, an error will
    /// be returned if notifications have already setup for this platform.
    /// </summary>
    bool overwriteOldARN;

    /// <summary>
    /// Supported notification platforms are Apple Push Notification Service (APNS and APNS_SANDBOX)
    /// for iOS and Google Cloud Messaging (GCM) for Android.
    /// </summary>
    PlayFabAdminPushSetupPlatform platform;

} PlayFabAdminSetupPushNotificationRequest;

/// <summary>
/// PlayFabAdminSetupPushNotificationResult data model. Result payload for PlayFabAdminSetupPushNotificationAsync.
/// </summary>
typedef struct PlayFabAdminSetupPushNotificationResult
{
    /// <summary>
    /// (Optional) Amazon Resource Name for the created notification topic.
    /// </summary>
    const char* aRN;

} PlayFabAdminSetupPushNotificationResult;

/// <summary>
/// PlayFabAdminSubtractUserVirtualCurrencyRequest data model. Request object for PlayFabAdminSubtractUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabAdminSubtractUserVirtualCurrencyRequest
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
    /// PlayFab unique identifier of the user whose virtual currency balance is to be decreased.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Name of the virtual currency which is to be decremented.
    /// </summary>
    const char* virtualCurrency;

} PlayFabAdminSubtractUserVirtualCurrencyRequest;

/// <summary>
/// PlayFabAdminUpdateBanRequest data model. Represents a single update ban request.
/// </summary>
typedef struct PlayFabAdminUpdateBanRequest
{
    /// <summary>
    /// (Optional) The updated active state for the ban. Null for no change.
    /// </summary>
    bool const* active;

    /// <summary>
    /// The id of the ban to be updated.
    /// </summary>
    const char* banId;

    /// <summary>
    /// (Optional) The updated expiration date for the ban. Null for no change.
    /// </summary>
    time_t const* expires;

    /// <summary>
    /// (Optional) The updated IP address for the ban. Null for no change.
    /// </summary>
    const char* IPAddress;

    /// <summary>
    /// (Optional) The updated MAC address for the ban. Null for no change.
    /// </summary>
    const char* MACAddress;

    /// <summary>
    /// (Optional) Whether to make this ban permanent. Set to true to make this ban permanent. This will
    /// not modify Active state.
    /// </summary>
    bool const* permanent;

    /// <summary>
    /// (Optional) The updated reason for the ban to be updated. Maximum 140 characters. Null for no
    /// change.
    /// </summary>
    const char* reason;

} PlayFabAdminUpdateBanRequest;

/// <summary>
/// PlayFabAdminUpdateBansRequest data model. For each ban, only updates the values that are set. Leave
/// any value to null for no change. If a ban could not be found, the rest are still applied. Returns
/// information about applied updates only. Request object for PlayFabAdminUpdateBansAsync.
/// </summary>
typedef struct PlayFabAdminUpdateBansRequest
{
    /// <summary>
    /// List of bans to be updated. Maximum 100.
    /// </summary>
    PlayFabAdminUpdateBanRequest const* const* bans;

    /// <summary>
    /// Count of bans
    /// </summary>
    uint32_t bansCount;

} PlayFabAdminUpdateBansRequest;

/// <summary>
/// PlayFabAdminUpdateBansResult data model. Result payload for PlayFabAdminUpdateBansAsync.
/// </summary>
typedef struct PlayFabAdminUpdateBansResult
{
    /// <summary>
    /// (Optional) Information on the bans that were updated.
    /// </summary>
    PlayFabAdminBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabAdminUpdateBansResult;

/// <summary>
/// PlayFabAdminUpdateCatalogItemsRequest data model. This operation is not additive. Using it will cause
/// the indicated catalog version to be created from scratch. If there is an existing catalog with the
/// version number in question, it will be deleted and replaced with only the items specified in this
/// call. Request object for PlayFabAdminSetCatalogItemsAsync and PlayFabAdminUpdateCatalogItemsAsync.
/// </summary>
typedef struct PlayFabAdminUpdateCatalogItemsRequest
{
    /// <summary>
    /// (Optional) Array of catalog items to be submitted. Note that while CatalogItem has a parameter
    /// for CatalogVersion, it is not required and ignored in this call.
    /// </summary>
    PlayFabAdminCatalogItem const* const* catalog;

    /// <summary>
    /// Count of catalog
    /// </summary>
    uint32_t catalogCount;

    /// <summary>
    /// (Optional) Which catalog is being updated. If null, uses the default catalog.
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
    /// (Optional) Should this catalog be set as the default catalog. Defaults to true. If there is currently
    /// no default catalog, this will always set it.
    /// </summary>
    bool const* setAsDefaultCatalog;

} PlayFabAdminUpdateCatalogItemsRequest;

/// <summary>
/// PlayFabAdminUpdateCloudScriptRequest data model. Request object for PlayFabAdminUpdateCloudScriptAsync.
/// </summary>
typedef struct PlayFabAdminUpdateCloudScriptRequest
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
    /// (Optional) PlayFab user ID of the developer initiating the request.
    /// </summary>
    const char* developerPlayFabId;

    /// <summary>
    /// List of Cloud Script files to upload to create the new revision. Must have at least one file.
    /// </summary>
    PlayFabAdminCloudScriptFile const* const* files;

    /// <summary>
    /// Count of files
    /// </summary>
    uint32_t filesCount;

    /// <summary>
    /// Immediately publish the new revision.
    /// </summary>
    bool publish;

} PlayFabAdminUpdateCloudScriptRequest;

/// <summary>
/// PlayFabAdminUpdateCloudScriptResult data model. Result payload for PlayFabAdminUpdateCloudScriptAsync.
/// </summary>
typedef struct PlayFabAdminUpdateCloudScriptResult
{
    /// <summary>
    /// New revision number created.
    /// </summary>
    int32_t revision;

    /// <summary>
    /// Cloud Script version updated.
    /// </summary>
    int32_t version;

} PlayFabAdminUpdateCloudScriptResult;

/// <summary>
/// PlayFabAdminUpdateOpenIdConnectionRequest data model. Request object for PlayFabAdminUpdateOpenIdConnectionAsync.
/// </summary>
typedef struct PlayFabAdminUpdateOpenIdConnectionRequest
{
    /// <summary>
    /// (Optional) The client ID given by the ID provider.
    /// </summary>
    const char* clientId;

    /// <summary>
    /// (Optional) The client secret given by the ID provider.
    /// </summary>
    const char* clientSecret;

    /// <summary>
    /// A name for the connection that identifies it within the title.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) The issuer URL or discovery document URL to read issuer information from.
    /// </summary>
    const char* issuerDiscoveryUrl;

    /// <summary>
    /// (Optional) Manually specified information for an OpenID Connect issuer.
    /// </summary>
    PlayFabAdminOpenIdIssuerInformation const* issuerInformation;

} PlayFabAdminUpdateOpenIdConnectionRequest;

/// <summary>
/// PlayFabAdminUpdatePlayerSharedSecretRequest data model. Player Shared Secret Keys are used for the
/// call to Client/GetTitlePublicKey, which exchanges the shared secret for an RSA CSP blob to be used
/// to encrypt the payload of account creation requests when that API requires a signature header. Request
/// object for PlayFabAdminUpdatePlayerSharedSecretAsync.
/// </summary>
typedef struct PlayFabAdminUpdatePlayerSharedSecretRequest
{
    /// <summary>
    /// Disable or Enable this key.
    /// </summary>
    bool disabled;

    /// <summary>
    /// (Optional) Friendly name for this key.
    /// </summary>
    const char* friendlyName;

    /// <summary>
    /// (Optional) The shared secret key to update.
    /// </summary>
    const char* secretKey;

} PlayFabAdminUpdatePlayerSharedSecretRequest;

/// <summary>
/// PlayFabAdminUpdatePlayerStatisticDefinitionRequest data model. Statistics are numeric values, with
/// each statistic in the title also generating a leaderboard. The ResetInterval enables automatically
/// resetting leaderboards on a specified interval. Upon reset, the statistic updates to a new version
/// with no values (effectively removing all players from the leaderboard). The previous version's statistic
/// values are also archived for retrieval, if needed (see GetPlayerStatisticVersions). Statistics not
/// created via a call to CreatePlayerStatisticDefinition by default have a VersionChangeInterval of Never,
/// meaning they do not reset on a schedule, but they can be set to do so via a call to UpdatePlayerStatisticDefinition.
/// Once a statistic has been reset (sometimes referred to as versioned or incremented), the now-previous
/// version can still be written to for up a short, pre-defined period (currently 10 seconds), to prevent
/// issues with levels completing around the time of the reset. Also, once reset, the historical statistics
/// for players in the title may be retrieved using the URL specified in the version information (GetPlayerStatisticVersions).
/// The AggregationMethod determines what action is taken when a new statistic value is submitted - always
/// update with the new value (Last), use the highest of the old and new values (Max), use the smallest
/// (Min), or add them together (Sum). Request object for PlayFabAdminUpdatePlayerStatisticDefinitionAsync.
/// </summary>
typedef struct PlayFabAdminUpdatePlayerStatisticDefinitionRequest
{
    /// <summary>
    /// (Optional) The aggregation method to use in updating the statistic (defaults to last).
    /// </summary>
    PlayFabAdminStatisticAggregationMethod const* aggregationMethod;

    /// <summary>
    /// Unique name of the statistic.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) Interval at which the values of the statistic for all players are reset (changes are
    /// effective at the next occurance of the new interval boundary).
    /// </summary>
    PlayFabAdminStatisticResetIntervalOption const* versionChangeInterval;

} PlayFabAdminUpdatePlayerStatisticDefinitionRequest;

/// <summary>
/// PlayFabAdminUpdatePlayerStatisticDefinitionResult data model. Result payload for PlayFabAdminUpdatePlayerStatisticDefinitionAsync.
/// </summary>
typedef struct PlayFabAdminUpdatePlayerStatisticDefinitionResult
{
    /// <summary>
    /// (Optional) Updated statistic definition.
    /// </summary>
    PlayFabAdminPlayerStatisticDefinition const* statistic;

} PlayFabAdminUpdatePlayerStatisticDefinitionResult;

/// <summary>
/// PlayFabAdminUpdatePolicyRequest data model. Updates permissions for your title. Policies affect what
/// is allowed to happen on your title. Your policy is a collection of statements that, together, govern
/// particular area for your title. Today, the only allowed policy is called 'ApiPolicy' and it governs
/// what API calls are allowed. To verify that you have the latest version always download the current
/// policy from GetPolicy before uploading a new policy. PlayFab updates the base policy periodically
/// and will automatically apply it to the uploaded policy. Overwriting the combined policy blindly may
/// result in unexpected API errors. Request object for PlayFabAdminUpdatePolicyAsync.
/// </summary>
typedef struct PlayFabAdminUpdatePolicyRequest
{
    /// <summary>
    /// Whether to overwrite or append to the existing policy.
    /// </summary>
    bool overwritePolicy;

    /// <summary>
    /// The name of the policy being updated. Only supported name is 'ApiPolicy'.
    /// </summary>
    const char* policyName;

    /// <summary>
    /// Version of the policy to update. Must be the latest (as returned by GetPolicy).
    /// </summary>
    int32_t policyVersion;

    /// <summary>
    /// The new statements to include in the policy.
    /// </summary>
    PlayFabAdminPermissionStatement const* const* statements;

    /// <summary>
    /// Count of statements
    /// </summary>
    uint32_t statementsCount;

} PlayFabAdminUpdatePolicyRequest;

/// <summary>
/// PlayFabAdminUpdatePolicyResponse data model. Result payload for PlayFabAdminUpdatePolicyAsync.
/// </summary>
typedef struct PlayFabAdminUpdatePolicyResponse
{
    /// <summary>
    /// (Optional) The name of the policy that was updated.
    /// </summary>
    const char* policyName;

    /// <summary>
    /// (Optional) The statements included in the new version of the policy.
    /// </summary>
    PlayFabAdminPermissionStatement const* const* statements;

    /// <summary>
    /// Count of statements
    /// </summary>
    uint32_t statementsCount;

} PlayFabAdminUpdatePolicyResponse;

/// <summary>
/// PlayFabAdminUpdateRandomResultTablesRequest data model. This operation is additive. Tables with TableId
/// values not currently defined will be added, while those with TableId values matching Tables currently
/// in the catalog will be overwritten with the given values. Request object for PlayFabAdminUpdateRandomResultTablesAsync.
/// </summary>
typedef struct PlayFabAdminUpdateRandomResultTablesRequest
{
    /// <summary>
    /// (Optional) Which catalog is being updated. If null, update the current default catalog version.
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
    /// (Optional) Array of random result tables to make available (Note: specifying an existing TableId
    /// will result in overwriting that table, while any others will be added to the available set).
    /// </summary>
    PlayFabAdminRandomResultTable const* const* tables;

    /// <summary>
    /// Count of tables
    /// </summary>
    uint32_t tablesCount;

} PlayFabAdminUpdateRandomResultTablesRequest;

/// <summary>
/// PlayFabAdminUpdateSegmentRequest data model. Update segment properties data which are planning to
/// update. Request object for PlayFabAdminUpdateSegmentAsync.
/// </summary>
typedef struct PlayFabAdminUpdateSegmentRequest
{
    /// <summary>
    /// Segment model with all of the segment properties data.
    /// </summary>
    PlayFabAdminSegmentModel const* segmentModel;

} PlayFabAdminUpdateSegmentRequest;

/// <summary>
/// PlayFabAdminUpdateSegmentResponse data model. Result payload for PlayFabAdminUpdateSegmentAsync.
/// </summary>
typedef struct PlayFabAdminUpdateSegmentResponse
{
    /// <summary>
    /// (Optional) Error message.
    /// </summary>
    const char* errorMessage;

    /// <summary>
    /// (Optional) Segment id.
    /// </summary>
    const char* segmentId;

} PlayFabAdminUpdateSegmentResponse;

/// <summary>
/// PlayFabAdminUpdateStoreItemsRequest data model. This operation is not additive. Using it will cause
/// the indicated virtual store to be created from scratch. If there is an existing store with the same
/// storeId, it will be deleted and replaced with only the items specified in this call. A store contains
/// an array of references to items defined inthe catalog, along with the prices for the item, in both
/// real world and virtual currencies. These prices act as an override to any prices defined in the catalog.
/// In this way, the base definitions of the items may be defined in the catalog, with all associated
/// properties, while the pricing can be set for each store, as needed. This allows for subsets of goods
/// to be defined for different purposes (in order to simplify showing some, but not all catalog items
/// to users, based upon different characteristics), along with unique prices. Note that all prices defined
/// in the catalog and store definitions for the item are considered valid, and that a compromised client
/// can be made to send a request for an item based upon any of these definitions. If no price is specified
/// in the store for an item, the price set in the catalog should be displayed to the user. Request object
/// for PlayFabAdminSetStoreItemsAsync and PlayFabAdminUpdateStoreItemsAsync.
/// </summary>
typedef struct PlayFabAdminUpdateStoreItemsRequest
{
    /// <summary>
    /// (Optional) Catalog version of the store to update. If null, uses the default catalog.
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
    /// (Optional) Additional data about the store.
    /// </summary>
    PlayFabAdminStoreMarketingModel const* marketingData;

    /// <summary>
    /// (Optional) Array of store items - references to catalog items, with specific pricing - to be
    /// added.
    /// </summary>
    PlayFabAdminStoreItem const* const* store;

    /// <summary>
    /// Count of store
    /// </summary>
    uint32_t storeCount;

    /// <summary>
    /// Unique identifier for the store which is to be updated.
    /// </summary>
    const char* storeId;

} PlayFabAdminUpdateStoreItemsRequest;

/// <summary>
/// PlayFabAdminUpdateTaskRequest data model. Note that when calling this API, all properties of the
/// task have to be provided, including properties that you do not want to change. Parameters not specified
/// would be set to default value. If the task name in the update request is new, a task rename operation
/// will be executed before updating other fields of the task. WARNING: Renaming of a task may break logics
/// where the task name is used as an identifier. Request object for PlayFabAdminUpdateTaskAsync.
/// </summary>
typedef struct PlayFabAdminUpdateTaskRequest
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
    /// (Optional) Description the task.
    /// </summary>
    const char* description;

    /// <summary>
    /// (Optional) Specify either the task ID or the name of the task to be updated.
    /// </summary>
    PlayFabAdminNameIdentifier const* identifier;

    /// <summary>
    /// Whether the schedule is active. Inactive schedule will not trigger task execution.
    /// </summary>
    bool isActive;

    /// <summary>
    /// Name of the task. This is a unique identifier for tasks in the title.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) Parameter object specific to the task type. See each task type's create API documentation
    /// for details.
    /// </summary>
    PlayFabJsonObject parameter;

    /// <summary>
    /// (Optional) Cron expression for the run schedule of the task. The expression should be in UTC.
    /// </summary>
    const char* schedule;

    /// <summary>
    /// Task type.
    /// </summary>
    PlayFabAdminScheduledTaskType type;

} PlayFabAdminUpdateTaskRequest;

/// <summary>
/// PlayFabAdminUpdateUserDataRequest data model. This function performs an additive update of the arbitrary
/// JSON object containing the custom data for the user. In updating the custom data object, keys which
/// already exist in the object will have their values overwritten, while keys with null values will be
/// removed. No other key-value pairs will be changed apart from those specified in the call. Request
/// object for PlayFabAdminUpdateUserDataAsync, PlayFabAdminUpdateUserPublisherDataAsync, PlayFabAdminUpdateUserPublisherReadOnlyDataAsync,
/// and PlayFabAdminUpdateUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabAdminUpdateUserDataRequest
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
    /// "private" if not set.
    /// </summary>
    PlayFabUserDataPermission const* permission;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminUpdateUserDataRequest;

/// <summary>
/// PlayFabAdminUpdateUserDataResult data model. Result payload for PlayFabAdminUpdateUserDataAsync,
/// PlayFabAdminUpdateUserInternalDataAsync, PlayFabAdminUpdateUserPublisherDataAsync, PlayFabAdminUpdateUserPublisherInternalDataAsync,
/// PlayFabAdminUpdateUserPublisherReadOnlyDataAsync, and PlayFabAdminUpdateUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabAdminUpdateUserDataResult
{
    /// <summary>
    /// Indicates the current version of the data that has been set. This is incremented with every set
    /// call for that type of data (read-only, internal, etc). This version can be provided in Get calls
    /// to find updated data.
    /// </summary>
    uint32_t dataVersion;

} PlayFabAdminUpdateUserDataResult;

/// <summary>
/// PlayFabAdminUpdateUserInternalDataRequest data model. This function performs an additive update of
/// the arbitrary JSON object containing the custom data for the user. In updating the custom data object,
/// keys which already exist in the object will have their values overwritten, keys with null values will
/// be removed. No other key-value pairs will be changed apart from those specified in the call. Request
/// object for PlayFabAdminUpdateUserInternalDataAsync and PlayFabAdminUpdateUserPublisherInternalDataAsync.
/// </summary>
typedef struct PlayFabAdminUpdateUserInternalDataRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminUpdateUserInternalDataRequest;

/// <summary>
/// PlayFabAdminUpdateUserTitleDisplayNameRequest data model. In addition to the PlayFab username, titles
/// can make use of a DisplayName which is also a unique identifier, but specific to the title. This allows
/// for unique names which more closely match the theme or genre of a title, for example. This API enables
/// changing that name, whether due to a customer request, an offensive name choice, etc. Request object
/// for PlayFabAdminUpdateUserTitleDisplayNameAsync.
/// </summary>
typedef struct PlayFabAdminUpdateUserTitleDisplayNameRequest
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

    /// <summary>
    /// PlayFab unique identifier of the user whose title specific display name is to be changed.
    /// </summary>
    const char* playFabId;

} PlayFabAdminUpdateUserTitleDisplayNameRequest;

/// <summary>
/// PlayFabAdminUpdateUserTitleDisplayNameResult data model. Result payload for PlayFabAdminUpdateUserTitleDisplayNameAsync.
/// </summary>
typedef struct PlayFabAdminUpdateUserTitleDisplayNameResult
{
    /// <summary>
    /// (Optional) Current title display name for the user (this will be the original display name if
    /// the rename attempt failed).
    /// </summary>
    const char* displayName;

} PlayFabAdminUpdateUserTitleDisplayNameResult;

/// <summary>
/// Dictionary entry for an associative array with PlayFabAdminRandomResultTableListing values.
/// </summary>
typedef struct PlayFabAdminRandomResultTableListingDictionaryEntry
{
    const char* key;
    PlayFabAdminRandomResultTableListing* value;
} PlayFabAdminRandomResultTableListingDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabAdminPlayerLocation values.
/// </summary>
typedef struct PlayFabAdminPlayerLocationDictionaryEntry
{
    const char* key;
    PlayFabAdminPlayerLocation* value;
} PlayFabAdminPlayerLocationDictionaryEntry;

#pragma pop_macro("IN")

}
