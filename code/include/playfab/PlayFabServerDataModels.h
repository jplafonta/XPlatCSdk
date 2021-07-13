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
/// CloudScriptRevisionOption enum.
/// </summary>
enum class PlayFabServerCloudScriptRevisionOption : uint32_t
{
    Live,
    Latest,
    Specific
};

/// <summary>
/// GameInstanceState enum.
/// </summary>
enum class PlayFabServerGameInstanceState : uint32_t
{
    Open,
    Closed
};

/// <summary>
/// GenericErrorCodes enum.
/// </summary>
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
/// PlayerConnectionState enum.
/// </summary>
enum class PlayFabServerPlayerConnectionState : uint32_t
{
    Unassigned,
    Connecting,
    Participating,
    Participated
};

/// <summary>
/// Region enum.
/// </summary>
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

/// <summary>
/// ResultTableNodeType enum.
/// </summary>
enum class PlayFabServerResultTableNodeType : uint32_t
{
    ItemId,
    TableId
};

/// <summary>
/// SourceType enum.
/// </summary>
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

/// <summary>
/// PlayFabServerAdCampaignAttribution data model.
/// </summary>
typedef struct PlayFabServerAdCampaignAttribution
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

} PlayFabServerAdCampaignAttribution;

/// <summary>
/// PlayFabServerAddCharacterVirtualCurrencyRequest data model. Request object for PlayFabServerAddCharacterVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabServerAddCharacterVirtualCurrencyRequest
{
    /// <summary>
    /// Amount to be added to the character balance of the specified virtual currency. Maximum VC balance
    /// is Int32 (2,147,483,647). Any increase over this value will be discarded.
    /// </summary>
    int32_t amount;

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
    /// PlayFab unique identifier of the user whose virtual currency balance is to be incremented.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Name of the virtual currency which is to be incremented.
    /// </summary>
    const char* virtualCurrency;

} PlayFabServerAddCharacterVirtualCurrencyRequest;

/// <summary>
/// PlayFabServerAddFriendRequest data model. Request object for PlayFabServerAddFriendAsync.
/// </summary>
typedef struct PlayFabServerAddFriendRequest
{
    /// <summary>
    /// (Optional) Email address of the user being added.
    /// </summary>
    const char* friendEmail;

    /// <summary>
    /// (Optional) The PlayFab identifier of the user being added.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// (Optional) Title-specific display name of the user to being added.
    /// </summary>
    const char* friendTitleDisplayName;

    /// <summary>
    /// (Optional) The PlayFab username of the user being added.
    /// </summary>
    const char* friendUsername;

    /// <summary>
    /// PlayFab identifier of the player to add a new friend.
    /// </summary>
    const char* playFabId;

} PlayFabServerAddFriendRequest;

/// <summary>
/// PlayFabServerGenericServiceId data model.
/// </summary>
typedef struct PlayFabServerGenericServiceId
{
    /// <summary>
    /// Name of the service for which the player has a unique identifier.
    /// </summary>
    const char* serviceName;

    /// <summary>
    /// Unique identifier of the player in that service.
    /// </summary>
    const char* userId;

} PlayFabServerGenericServiceId;

/// <summary>
/// PlayFabServerAddGenericIDRequest data model. Request object for PlayFabServerAddGenericIDAsync.
/// </summary>
typedef struct PlayFabServerAddGenericIDRequest
{
    /// <summary>
    /// Generic service identifier to add to the player account.
    /// </summary>
    PlayFabServerGenericServiceId const* genericId;

    /// <summary>
    /// PlayFabId of the user to link.
    /// </summary>
    const char* playFabId;

} PlayFabServerAddGenericIDRequest;

/// <summary>
/// PlayFabServerAddPlayerTagRequest data model. This API will trigger a player_tag_added event and add
/// a tag with the given TagName and PlayFabID to the corresponding player profile. TagName can be used
/// for segmentation and it is limited to 256 characters. Also there is a limit on the number of tags
/// a title can have. Request object for PlayFabServerAddPlayerTagAsync.
/// </summary>
typedef struct PlayFabServerAddPlayerTagRequest
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

} PlayFabServerAddPlayerTagRequest;

/// <summary>
/// PlayFabServerAddSharedGroupMembersRequest data model. Request object for PlayFabServerAddSharedGroupMembersAsync.
/// </summary>
typedef struct PlayFabServerAddSharedGroupMembersRequest
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

} PlayFabServerAddSharedGroupMembersRequest;

/// <summary>
/// PlayFabServerAddUserVirtualCurrencyRequest data model. Request object for PlayFabServerAddUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabServerAddUserVirtualCurrencyRequest
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

} PlayFabServerAddUserVirtualCurrencyRequest;

/// <summary>
/// PlayFabServerAdvancedPushPlatformMsg data model.
/// </summary>
typedef struct PlayFabServerAdvancedPushPlatformMsg
{
    /// <summary>
    /// (Optional) Stops GoogleCloudMessaging notifications from including both notification and data
    /// properties and instead only sends the data property.
    /// </summary>
    bool const* gCMDataOnly;

    /// <summary>
    /// The Json the platform should receive.
    /// </summary>
    const char* json;

    /// <summary>
    /// The platform that should receive the Json.
    /// </summary>
    PlayFabPushNotificationPlatform platform;

} PlayFabServerAdvancedPushPlatformMsg;

/// <summary>
/// PlayFabServerAuthenticateSessionTicketRequest data model. Note that data returned may be Personally
/// Identifying Information (PII), such as email address, and so care should be taken in how this data
/// is stored and managed. Since this call will always return the relevant information for users who have
/// accessed the title, the recommendation is to not store this data locally. Request object for PlayFabServerAuthenticateSessionTicketAsync.
/// </summary>
typedef struct PlayFabServerAuthenticateSessionTicketRequest
{
    /// <summary>
    /// Session ticket as issued by a PlayFab client login API.
    /// </summary>
    const char* sessionTicket;

} PlayFabServerAuthenticateSessionTicketRequest;

/// <summary>
/// PlayFabServerAuthenticateSessionTicketResult data model. Result payload for PlayFabServerAuthenticateSessionTicketAsync.
/// </summary>
typedef struct PlayFabServerAuthenticateSessionTicketResult
{
    /// <summary>
    /// (Optional) Indicates if token was expired at request time.
    /// </summary>
    bool const* isSessionTicketExpired;

    /// <summary>
    /// (Optional) Account info for the user whose session ticket was supplied.
    /// </summary>
    PlayFabUserAccountInfo const* userInfo;

} PlayFabServerAuthenticateSessionTicketResult;

/// <summary>
/// PlayFabServerAwardSteamAchievementItem data model.
/// </summary>
typedef struct PlayFabServerAwardSteamAchievementItem
{
    /// <summary>
    /// Unique Steam achievement name.
    /// </summary>
    const char* achievementName;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Result of the award attempt (only valid on response, not on request).
    /// </summary>
    bool result;

} PlayFabServerAwardSteamAchievementItem;

/// <summary>
/// PlayFabServerAwardSteamAchievementRequest data model. Request object for PlayFabServerAwardSteamAchievementAsync.
/// </summary>
typedef struct PlayFabServerAwardSteamAchievementRequest
{
    /// <summary>
    /// Array of achievements to grant and the users to whom they are to be granted.
    /// </summary>
    PlayFabServerAwardSteamAchievementItem const* const* achievements;

    /// <summary>
    /// Count of achievements
    /// </summary>
    uint32_t achievementsCount;

} PlayFabServerAwardSteamAchievementRequest;

/// <summary>
/// PlayFabServerAwardSteamAchievementResult data model. Result payload for PlayFabServerAwardSteamAchievementAsync.
/// </summary>
typedef struct PlayFabServerAwardSteamAchievementResult
{
    /// <summary>
    /// (Optional) Array of achievements granted.
    /// </summary>
    PlayFabServerAwardSteamAchievementItem const* const* achievementResults;

    /// <summary>
    /// Count of achievementResults
    /// </summary>
    uint32_t achievementResultsCount;

} PlayFabServerAwardSteamAchievementResult;

/// <summary>
/// PlayFabServerBanInfo data model. Contains information for a ban.
/// </summary>
typedef struct PlayFabServerBanInfo
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

} PlayFabServerBanInfo;

/// <summary>
/// PlayFabServerBanRequest data model. Represents a single ban request.
/// </summary>
typedef struct PlayFabServerBanRequest
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

} PlayFabServerBanRequest;

/// <summary>
/// PlayFabServerBanUsersRequest data model. The existence of each user will not be verified. When banning
/// by IP or MAC address, multiple players may be affected, so use this feature with caution. Returns
/// information about the new bans. Request object for PlayFabServerBanUsersAsync.
/// </summary>
typedef struct PlayFabServerBanUsersRequest
{
    /// <summary>
    /// List of ban requests to be applied. Maximum 100.
    /// </summary>
    PlayFabServerBanRequest const* const* bans;

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

} PlayFabServerBanUsersRequest;

/// <summary>
/// PlayFabServerBanUsersResult data model. Result payload for PlayFabServerBanUsersAsync.
/// </summary>
typedef struct PlayFabServerBanUsersResult
{
    /// <summary>
    /// (Optional) Information on the bans that were applied.
    /// </summary>
    PlayFabServerBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabServerBanUsersResult;

/// <summary>
/// PlayFabServerCatalogItemBundleInfo data model.
/// </summary>
typedef struct PlayFabServerCatalogItemBundleInfo
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

} PlayFabServerCatalogItemBundleInfo;

/// <summary>
/// PlayFabServerCatalogItemConsumableInfo data model.
/// </summary>
typedef struct PlayFabServerCatalogItemConsumableInfo
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

} PlayFabServerCatalogItemConsumableInfo;

/// <summary>
/// PlayFabServerCatalogItemContainerInfo data model. Containers are inventory items that can hold other
/// items defined in the catalog, as well as virtual currency, which is added to the player inventory
/// when the container is unlocked, using the UnlockContainerItem API. The items can be anything defined
/// in the catalog, as well as RandomResultTable objects which will be resolved when the container is
/// unlocked. Containers and their keys should be defined as Consumable (having a limited number of uses)
/// in their catalog defintiions, unless the intent is for the player to be able to re-use them infinitely.
/// </summary>
typedef struct PlayFabServerCatalogItemContainerInfo
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

} PlayFabServerCatalogItemContainerInfo;

/// <summary>
/// PlayFabServerCatalogItem data model. A purchasable item from the item catalog.
/// </summary>
typedef struct PlayFabServerCatalogItem
{
    /// <summary>
    /// (Optional) Defines the bundle properties for the item - bundles are items which contain other
    /// items, including random drop tables and virtual currencies.
    /// </summary>
    PlayFabServerCatalogItemBundleInfo const* bundle;

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
    PlayFabServerCatalogItemConsumableInfo const* consumable;

    /// <summary>
    /// (Optional) Defines the container properties for the item - what items it contains, including
    /// random drop tables and virtual currencies, and what item (if any) is required to open it via the
    /// UnlockContainerItem API.
    /// </summary>
    PlayFabServerCatalogItemContainerInfo const* container;

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

} PlayFabServerCatalogItem;

/// <summary>
/// PlayFabServerCharacterLeaderboardEntry data model.
/// </summary>
typedef struct PlayFabServerCharacterLeaderboardEntry
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

} PlayFabServerCharacterLeaderboardEntry;

/// <summary>
/// PlayFabServerConsumeItemRequest data model. Request object for PlayFabServerConsumeItemAsync.
/// </summary>
typedef struct PlayFabServerConsumeItemRequest
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

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerConsumeItemRequest;

/// <summary>
/// PlayFabServerConsumeItemResult data model. Result payload for PlayFabServerConsumeItemAsync.
/// </summary>
typedef struct PlayFabServerConsumeItemResult
{
    /// <summary>
    /// (Optional) Unique instance identifier of the item with uses consumed.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// Number of uses remaining on the item.
    /// </summary>
    int32_t remainingUses;

} PlayFabServerConsumeItemResult;

/// <summary>
/// PlayFabServerContactEmailInfo data model.
/// </summary>
typedef struct PlayFabServerContactEmailInfo
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

} PlayFabServerContactEmailInfo;

/// <summary>
/// PlayFabServerCreateSharedGroupRequest data model. If SharedGroupId is specified, the service will
/// attempt to create a group with that identifier, and will return an error if it is already in use.
/// If no SharedGroupId is specified, a random identifier will be assigned. Request object for PlayFabServerCreateSharedGroupAsync.
/// </summary>
typedef struct PlayFabServerCreateSharedGroupRequest
{
    /// <summary>
    /// (Optional) Unique identifier for the shared group (a random identifier will be assigned, if one
    /// is not specified).
    /// </summary>
    const char* sharedGroupId;

} PlayFabServerCreateSharedGroupRequest;

/// <summary>
/// PlayFabServerCreateSharedGroupResult data model. Result payload for PlayFabServerCreateSharedGroupAsync.
/// </summary>
typedef struct PlayFabServerCreateSharedGroupResult
{
    /// <summary>
    /// (Optional) Unique identifier for the shared group.
    /// </summary>
    const char* sharedGroupId;

} PlayFabServerCreateSharedGroupResult;

/// <summary>
/// PlayFabServerDeleteCharacterFromUserRequest data model. This function will delete the specified character
/// from the list allowed by the user, and will also delete any inventory or VC currently held by that
/// character. It will NOT delete any statistics associated for this character, in order to preserve leaderboard
/// integrity. Request object for PlayFabServerDeleteCharacterFromUserAsync.
/// </summary>
typedef struct PlayFabServerDeleteCharacterFromUserRequest
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

    /// <summary>
    /// If true, the character's inventory will be transferred up to the owning user; otherwise, this
    /// request will purge those items.
    /// </summary>
    bool saveCharacterInventory;

} PlayFabServerDeleteCharacterFromUserRequest;

/// <summary>
/// PlayFabServerDeletePlayerRequest data model. Deletes all data associated with the player, including
/// statistics, custom data, inventory, purchases, virtual currency balances, characters and shared group
/// memberships. Removes the player from all leaderboards and player search indexes. Does not delete PlayStream
/// event history associated with the player. Does not delete the publisher user account that created
/// the player in the title nor associated data such as username, password, email address, account linkages,
/// or friends list. Note, this API queues the player for deletion and returns immediately. It may take
/// several minutes or more before all player data is fully deleted. Until the player data is fully deleted,
/// attempts to recreate the player with the same user account in the same title will fail with the 'AccountDeleted'
/// error. This API must be enabled for use as an option in the game manager website. It is disabled by
/// default. Request object for PlayFabServerDeletePlayerAsync.
/// </summary>
typedef struct PlayFabServerDeletePlayerRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerDeletePlayerRequest;

/// <summary>
/// PlayFabServerDeletePushNotificationTemplateRequest data model. Represents the request to delete a
/// push notification template. Request object for PlayFabServerDeletePushNotificationTemplateAsync.
/// </summary>
typedef struct PlayFabServerDeletePushNotificationTemplateRequest
{
    /// <summary>
    /// Id of the push notification template to be deleted.
    /// </summary>
    const char* pushNotificationTemplateId;

} PlayFabServerDeletePushNotificationTemplateRequest;

/// <summary>
/// PlayFabServerDeleteSharedGroupRequest data model. Request object for PlayFabServerDeleteSharedGroupAsync.
/// </summary>
typedef struct PlayFabServerDeleteSharedGroupRequest
{
    /// <summary>
    /// Unique identifier for the shared group.
    /// </summary>
    const char* sharedGroupId;

} PlayFabServerDeleteSharedGroupRequest;

/// <summary>
/// PlayFabServerDeregisterGameRequest data model. Request object for PlayFabServerDeregisterGameAsync.
/// </summary>
typedef struct PlayFabServerDeregisterGameRequest
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
    /// Unique identifier for the Game Server Instance that is being deregistered.
    /// </summary>
    const char* lobbyId;

} PlayFabServerDeregisterGameRequest;

/// <summary>
/// PlayFabServerEvaluateRandomResultTableRequest data model. Request object for PlayFabServerEvaluateRandomResultTableAsync.
/// </summary>
typedef struct PlayFabServerEvaluateRandomResultTableRequest
{
    /// <summary>
    /// (Optional) Specifies the catalog version that should be used to evaluate the Random Result Table.
    /// If unspecified, uses default/primary catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// The unique identifier of the Random Result Table to use.
    /// </summary>
    const char* tableId;

} PlayFabServerEvaluateRandomResultTableRequest;

/// <summary>
/// PlayFabServerEvaluateRandomResultTableResult data model. Note that if the Random Result Table contains
/// no entries, or does not exist for the catalog specified (the Primary catalog if one is not specified),
/// an InvalidDropTable error will be returned. Result payload for PlayFabServerEvaluateRandomResultTableAsync.
/// </summary>
typedef struct PlayFabServerEvaluateRandomResultTableResult
{
    /// <summary>
    /// (Optional) Unique identifier for the item returned from the Random Result Table evaluation, for
    /// the given catalog.
    /// </summary>
    const char* resultItemId;

} PlayFabServerEvaluateRandomResultTableResult;

/// <summary>
/// PlayFabServerScriptExecutionError data model.
/// </summary>
typedef struct PlayFabServerScriptExecutionError
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

} PlayFabServerScriptExecutionError;

/// <summary>
/// PlayFabServerLogStatement data model.
/// </summary>
typedef struct PlayFabServerLogStatement
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

} PlayFabServerLogStatement;

/// <summary>
/// PlayFabServerExecuteCloudScriptResult data model. Result payload for PlayFabServerExecuteCloudScriptAsync.
/// </summary>
typedef struct PlayFabServerExecuteCloudScriptResult
{
    /// <summary>
    /// Number of PlayFab API requests issued by the CloudScript function.
    /// </summary>
    int32_t aPIRequestsIssued;

    /// <summary>
    /// (Optional) Information about the error, if any, that occurred during execution.
    /// </summary>
    PlayFabServerScriptExecutionError const* error;

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
    PlayFabServerLogStatement const* const* logs;

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

} PlayFabServerExecuteCloudScriptResult;

/// <summary>
/// PlayFabServerExecuteCloudScriptServerRequest data model. Request object for PlayFabServerExecuteCloudScriptAsync.
/// </summary>
typedef struct PlayFabServerExecuteCloudScriptServerRequest
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
    /// The unique user identifier for the player on whose behalf the script is being run.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Option for which revision of the CloudScript to execute. 'Latest' executes the most
    /// recently created revision, 'Live' executes the current live, published revision, and 'Specific'
    /// executes the specified revision. The default value is 'Specific', if the SpeificRevision parameter
    /// is specified, otherwise it is 'Live'.
    /// </summary>
    PlayFabServerCloudScriptRevisionOption const* revisionSelection;

    /// <summary>
    /// (Optional) The specivic revision to execute, when RevisionSelection is set to 'Specific'.
    /// </summary>
    int32_t const* specificRevision;

} PlayFabServerExecuteCloudScriptServerRequest;

/// <summary>
/// PlayFabServerFacebookInstantGamesPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabServerFacebookInstantGamesPlayFabIdPair
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

} PlayFabServerFacebookInstantGamesPlayFabIdPair;

/// <summary>
/// PlayFabServerFacebookPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabServerFacebookPlayFabIdPair
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

} PlayFabServerFacebookPlayFabIdPair;

/// <summary>
/// PlayFabServerFriendInfo data model.
/// </summary>
typedef struct PlayFabServerFriendInfo
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

} PlayFabServerFriendInfo;

/// <summary>
/// PlayFabServerGenericPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabServerGenericPlayFabIdPair
{
    /// <summary>
    /// (Optional) Unique generic service identifier for a user.
    /// </summary>
    PlayFabServerGenericServiceId const* genericId;

    /// <summary>
    /// (Optional) Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the
    /// given generic identifier.
    /// </summary>
    const char* playFabId;

} PlayFabServerGenericPlayFabIdPair;

/// <summary>
/// PlayFabServerGetSegmentResult data model.
/// </summary>
typedef struct PlayFabServerGetSegmentResult
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

} PlayFabServerGetSegmentResult;

/// <summary>
/// PlayFabServerGetAllSegmentsResult data model. Result payload for PlayFabServerGetAllSegmentsAsync.
/// </summary>
typedef struct PlayFabServerGetAllSegmentsResult
{
    /// <summary>
    /// (Optional) Array of segments for this title.
    /// </summary>
    PlayFabServerGetSegmentResult const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PlayFabServerGetAllSegmentsResult;

/// <summary>
/// PlayFabServerGetCatalogItemsRequest data model. Request object for PlayFabServerGetCatalogItemsAsync.
/// </summary>
typedef struct PlayFabServerGetCatalogItemsRequest
{
    /// <summary>
    /// (Optional) Which catalog is being requested. If null, uses the default catalog.
    /// </summary>
    const char* catalogVersion;

} PlayFabServerGetCatalogItemsRequest;

/// <summary>
/// PlayFabServerGetCatalogItemsResult data model. Result payload for PlayFabServerGetCatalogItemsAsync.
/// </summary>
typedef struct PlayFabServerGetCatalogItemsResult
{
    /// <summary>
    /// (Optional) Array of items which can be purchased.
    /// </summary>
    PlayFabServerCatalogItem const* const* catalog;

    /// <summary>
    /// Count of catalog
    /// </summary>
    uint32_t catalogCount;

} PlayFabServerGetCatalogItemsResult;

/// <summary>
/// PlayFabServerGetCharacterDataRequest data model. Data is stored as JSON key-value pairs. If the Keys
/// parameter is provided, the data object returned will only contain the data specific to the indicated
/// Keys. Otherwise, the full set of custom user data will be returned. Request object for PlayFabServerGetCharacterDataAsync,
/// PlayFabServerGetCharacterInternalDataAsync, and PlayFabServerGetCharacterReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterDataRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetCharacterDataRequest;

/// <summary>
/// PlayFabServerGetCharacterDataResult data model. Result payload for PlayFabServerGetCharacterDataAsync,
/// PlayFabServerGetCharacterInternalDataAsync, and PlayFabServerGetCharacterReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterDataResult
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

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetCharacterDataResult;

/// <summary>
/// PlayFabServerGetCharacterInventoryRequest data model. All items currently in the character inventory
/// will be returned, irrespective of how they were acquired (via purchasing, grants, coupons, etc.).
/// Items that are expired, fully consumed, or are no longer valid are not considered to be in the user's
/// current inventory, and so will not be not included. Also returns their virtual currency balances.
/// Request object for PlayFabServerGetCharacterInventoryAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterInventoryRequest
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

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetCharacterInventoryRequest;

/// <summary>
/// PlayFabServerGetCharacterInventoryResult data model. Result payload for PlayFabServerGetCharacterInventoryAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterInventoryResult
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
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

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

} PlayFabServerGetCharacterInventoryResult;

/// <summary>
/// PlayFabServerGetCharacterLeaderboardRequest data model. Request object for PlayFabServerGetCharacterLeaderboardAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterLeaderboardRequest
{
    /// <summary>
    /// (Optional) Optional character type on which to filter the leaderboard entries.
    /// </summary>
    const char* characterType;

    /// <summary>
    /// Maximum number of entries to retrieve.
    /// </summary>
    int32_t maxResultsCount;

    /// <summary>
    /// First entry in the leaderboard to be retrieved.
    /// </summary>
    int32_t startPosition;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

} PlayFabServerGetCharacterLeaderboardRequest;

/// <summary>
/// PlayFabServerGetCharacterLeaderboardResult data model. Note that the Position of the character in
/// the results is for the overall leaderboard. Result payload for PlayFabServerGetCharacterLeaderboardAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterLeaderboardResult
{
    /// <summary>
    /// (Optional) Ordered list of leaderboard entries.
    /// </summary>
    PlayFabServerCharacterLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

} PlayFabServerGetCharacterLeaderboardResult;

/// <summary>
/// PlayFabServerGetCharacterStatisticsRequest data model. Character statistics are similar to user statistics
/// in that they are numeric values which may only be updated by a server operation, in order to minimize
/// the opportunity for unauthorized changes. In addition to being available for use by the title, the
/// statistics are used for all leaderboard operations in PlayFab. Request object for PlayFabServerGetCharacterStatisticsAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterStatisticsRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetCharacterStatisticsRequest;

/// <summary>
/// PlayFabServerGetCharacterStatisticsResult data model. Result payload for PlayFabServerGetCharacterStatisticsAsync.
/// </summary>
typedef struct PlayFabServerGetCharacterStatisticsResult
{
    /// <summary>
    /// (Optional) Unique identifier of the character for the statistics.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Character statistics for the requested user.
    /// </summary>
    struct PlayFabInt32DictionaryEntry const* characterStatistics;

    /// <summary>
    /// Count of characterStatistics
    /// </summary>
    uint32_t characterStatisticsCount;

    /// <summary>
    /// (Optional) PlayFab unique identifier of the user whose character statistics are being returned.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetCharacterStatisticsResult;

/// <summary>
/// PlayFabServerGetContentDownloadUrlRequest data model. Request object for PlayFabServerGetContentDownloadUrlAsync.
/// </summary>
typedef struct PlayFabServerGetContentDownloadUrlRequest
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

} PlayFabServerGetContentDownloadUrlRequest;

/// <summary>
/// PlayFabServerGetContentDownloadUrlResult data model. Result payload for PlayFabServerGetContentDownloadUrlAsync.
/// </summary>
typedef struct PlayFabServerGetContentDownloadUrlResult
{
    /// <summary>
    /// (Optional) URL for downloading content via HTTP GET or HEAD method. The URL will expire in approximately
    /// one hour.
    /// </summary>
    const char* uRL;

} PlayFabServerGetContentDownloadUrlResult;

/// <summary>
/// PlayFabServerPlayerProfileViewConstraints data model.
/// </summary>
typedef struct PlayFabServerPlayerProfileViewConstraints
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

} PlayFabServerPlayerProfileViewConstraints;

/// <summary>
/// PlayFabServerGetFriendLeaderboardRequest data model. Request object for PlayFabServerGetFriendLeaderboardAsync.
/// </summary>
typedef struct PlayFabServerGetFriendLeaderboardRequest
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
    /// Maximum number of entries to retrieve.
    /// </summary>
    int32_t maxResultsCount;

    /// <summary>
    /// The player whose friend leaderboard to get.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabServerPlayerProfileViewConstraints const* profileConstraints;

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

} PlayFabServerGetFriendLeaderboardRequest;

/// <summary>
/// PlayFabServerGetFriendsListRequest data model. Request object for PlayFabServerGetFriendsListAsync.
/// </summary>
typedef struct PlayFabServerGetFriendsListRequest
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
    /// PlayFab identifier of the player whose friend list to get.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabServerPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// (Optional) Xbox token if Xbox friends should be included. Requires Xbox be configured on PlayFab.
    /// </summary>
    const char* xboxToken;

} PlayFabServerGetFriendsListRequest;

/// <summary>
/// PlayFabServerGetFriendsListResult data model. If any additional services are queried for the user's
/// friends, those friends who also have a PlayFab account registered for the title will be returned in
/// the results. For Facebook, user has to have logged into the title's Facebook app recently, and only
/// friends who also plays this game will be included. For Xbox Live, user has to have logged into the
/// Xbox Live recently, and only friends who also play this game will be included. Result payload for
/// PlayFabServerGetFriendsListAsync.
/// </summary>
typedef struct PlayFabServerGetFriendsListResult
{
    /// <summary>
    /// (Optional) Array of friends found.
    /// </summary>
    PlayFabServerFriendInfo const* const* friends;

    /// <summary>
    /// Count of friends
    /// </summary>
    uint32_t friendsCount;

} PlayFabServerGetFriendsListResult;

/// <summary>
/// PlayFabServerGetLeaderboardAroundCharacterRequest data model. Request object for PlayFabServerGetLeaderboardAroundCharacterAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardAroundCharacterRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Optional character type on which to filter the leaderboard entries.
    /// </summary>
    const char* characterType;

    /// <summary>
    /// Maximum number of entries to retrieve.
    /// </summary>
    int32_t maxResultsCount;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

} PlayFabServerGetLeaderboardAroundCharacterRequest;

/// <summary>
/// PlayFabServerGetLeaderboardAroundCharacterResult data model. Note: When calling 'GetLeaderboardAround...'
/// APIs, the position of the character defaults to 0 when the character does not have the corresponding
/// statistic. Result payload for PlayFabServerGetLeaderboardAroundCharacterAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardAroundCharacterResult
{
    /// <summary>
    /// (Optional) Ordered list of leaderboard entries.
    /// </summary>
    PlayFabServerCharacterLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

} PlayFabServerGetLeaderboardAroundCharacterResult;

/// <summary>
/// PlayFabServerGetLeaderboardAroundUserRequest data model. Request object for PlayFabServerGetLeaderboardAroundUserAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardAroundUserRequest
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
    /// Maximum number of entries to retrieve.
    /// </summary>
    int32_t maxResultsCount;

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
    PlayFabServerPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) The version of the leaderboard to get.
    /// </summary>
    int32_t const* version;

} PlayFabServerGetLeaderboardAroundUserRequest;

/// <summary>
/// PlayFabServerPlayerLeaderboardEntry data model.
/// </summary>
typedef struct PlayFabServerPlayerLeaderboardEntry
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

} PlayFabServerPlayerLeaderboardEntry;

/// <summary>
/// PlayFabServerGetLeaderboardAroundUserResult data model. Note: When calling 'GetLeaderboardAround...'
/// APIs, the position of the user defaults to 0 when the user does not have the corresponding statistic.
/// Result payload for PlayFabServerGetLeaderboardAroundUserAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardAroundUserResult
{
    /// <summary>
    /// (Optional) Ordered listing of users and their positions in the requested leaderboard.
    /// </summary>
    PlayFabServerPlayerLeaderboardEntry const* const* leaderboard;

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

} PlayFabServerGetLeaderboardAroundUserResult;

/// <summary>
/// PlayFabServerGetLeaderboardForUsersCharactersRequest data model. Request object for PlayFabServerGetLeaderboardForUserCharactersAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardForUsersCharactersRequest
{
    /// <summary>
    /// Maximum number of entries to retrieve.
    /// </summary>
    int32_t maxResultsCount;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

} PlayFabServerGetLeaderboardForUsersCharactersRequest;

/// <summary>
/// PlayFabServerGetLeaderboardForUsersCharactersResult data model. NOTE: The position of the character
/// in the results is relative to the other characters for that specific user. This mean the values will
/// always be between 0 and one less than the number of characters returned regardless of the size of
/// the actual leaderboard. Result payload for PlayFabServerGetLeaderboardForUserCharactersAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardForUsersCharactersResult
{
    /// <summary>
    /// (Optional) Ordered list of leaderboard entries.
    /// </summary>
    PlayFabServerCharacterLeaderboardEntry const* const* leaderboard;

    /// <summary>
    /// Count of leaderboard
    /// </summary>
    uint32_t leaderboardCount;

} PlayFabServerGetLeaderboardForUsersCharactersResult;

/// <summary>
/// PlayFabServerGetLeaderboardRequest data model. Request object for PlayFabServerGetLeaderboardAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardRequest
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
    /// Maximum number of entries to retrieve.
    /// </summary>
    int32_t maxResultsCount;

    /// <summary>
    /// (Optional) If non-null, this determines which properties of the resulting player profiles to
    /// return. For API calls from the client, only the allowed client profile properties for the title
    /// may be requested. These allowed properties are configured in the Game Manager "Client Profile
    /// Options" tab in the "Settings" section.
    /// </summary>
    PlayFabServerPlayerProfileViewConstraints const* profileConstraints;

    /// <summary>
    /// First entry in the leaderboard to be retrieved.
    /// </summary>
    int32_t startPosition;

    /// <summary>
    /// Unique identifier for the title-specific statistic for the leaderboard.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// (Optional) The version of the leaderboard to get.
    /// </summary>
    int32_t const* version;

} PlayFabServerGetLeaderboardRequest;

/// <summary>
/// PlayFabServerGetLeaderboardResult data model. Note that the Position of the user in the results is
/// for the overall leaderboard. Result payload for PlayFabServerGetFriendLeaderboardAsync and PlayFabServerGetLeaderboardAsync.
/// </summary>
typedef struct PlayFabServerGetLeaderboardResult
{
    /// <summary>
    /// (Optional) Ordered listing of users and their positions in the requested leaderboard.
    /// </summary>
    PlayFabServerPlayerLeaderboardEntry const* const* leaderboard;

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

} PlayFabServerGetLeaderboardResult;

/// <summary>
/// PlayFabServerGetPlayerCombinedInfoRequestParams data model.
/// </summary>
typedef struct PlayFabServerGetPlayerCombinedInfoRequestParams
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
    PlayFabServerPlayerProfileViewConstraints const* profileConstraints;

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

} PlayFabServerGetPlayerCombinedInfoRequestParams;

/// <summary>
/// PlayFabServerGetPlayerCombinedInfoRequest data model. Request object for PlayFabServerGetPlayerCombinedInfoAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerCombinedInfoRequest
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
    PlayFabServerGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// PlayFabId of the user whose data will be returned.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetPlayerCombinedInfoRequest;

/// <summary>
/// PlayFabServerGetPlayerCombinedInfoResult data model. Result payload for PlayFabServerGetPlayerCombinedInfoAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerCombinedInfoResult
{
    /// <summary>
    /// (Optional) Results for requested info.
    /// </summary>
    PlayFabGetPlayerCombinedInfoResultPayload const* infoResultPayload;

    /// <summary>
    /// (Optional) Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetPlayerCombinedInfoResult;

/// <summary>
/// PlayFabServerGetPlayerProfileRequest data model. This API allows for access to details regarding
/// a user in the PlayFab service, usually for purposes of customer support. Note that data returned may
/// be Personally Identifying Information (PII), such as email address, and so care should be taken in
/// how this data is stored and managed. Since this call will always return the relevant information for
/// users who have accessed the title, the recommendation is to not store this data locally. Request
/// object for PlayFabServerGetPlayerProfileAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerProfileRequest
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
    PlayFabServerPlayerProfileViewConstraints const* profileConstraints;

} PlayFabServerGetPlayerProfileRequest;

/// <summary>
/// PlayFabServerGetPlayerProfileResult data model. Result payload for PlayFabServerGetPlayerProfileAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerProfileResult
{
    /// <summary>
    /// (Optional) The profile of the player. This profile is not guaranteed to be up-to-date. For a
    /// new player, this profile will not exist.
    /// </summary>
    PlayFabPlayerProfileModel const* playerProfile;

} PlayFabServerGetPlayerProfileResult;

/// <summary>
/// PlayFabServerGetPlayerSegmentsResult data model. Result payload for PlayFabServerGetPlayerSegmentsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerSegmentsResult
{
    /// <summary>
    /// (Optional) Array of segments the requested player currently belongs to.
    /// </summary>
    PlayFabServerGetSegmentResult const* const* segments;

    /// <summary>
    /// Count of segments
    /// </summary>
    uint32_t segmentsCount;

} PlayFabServerGetPlayerSegmentsResult;

/// <summary>
/// PlayFabServerGetPlayersInSegmentRequest data model. Initial request must contain at least a Segment
/// ID. Subsequent requests must contain the Segment ID as well as the Continuation Token. Failure to
/// send the Continuation Token will result in a new player segment list being generated. Each time the
/// Continuation Token is passed in the length of the Total Seconds to Live is refreshed. If too much
/// time passes between requests to the point that a subsequent request is past the Total Seconds to Live
/// an error will be returned and paging will be terminated. This API is resource intensive and should
/// not be used in scenarios which might generate high request volumes. Only one request to this API at
/// a time should be made per title. Concurrent requests to the API may be rejected with the APIConcurrentRequestLimitExceeded
/// error. Request object for PlayFabServerGetPlayersInSegmentAsync.
/// </summary>
typedef struct PlayFabServerGetPlayersInSegmentRequest
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

} PlayFabServerGetPlayersInSegmentRequest;

/// <summary>
/// PlayFabServerPlayerLinkedAccount data model.
/// </summary>
typedef struct PlayFabServerPlayerLinkedAccount
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

} PlayFabServerPlayerLinkedAccount;

/// <summary>
/// PlayFabServerPlayerLocation data model.
/// </summary>
typedef struct PlayFabServerPlayerLocation
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

} PlayFabServerPlayerLocation;

/// <summary>
/// PlayFabServerPlayerStatistic data model.
/// </summary>
typedef struct PlayFabServerPlayerStatistic
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

} PlayFabServerPlayerStatistic;

/// <summary>
/// PlayFabServerPushNotificationRegistration data model.
/// </summary>
typedef struct PlayFabServerPushNotificationRegistration
{
    /// <summary>
    /// (Optional) Notification configured endpoint.
    /// </summary>
    const char* notificationEndpointARN;

    /// <summary>
    /// (Optional) Push notification platform.
    /// </summary>
    PlayFabPushNotificationPlatform const* platform;

} PlayFabServerPushNotificationRegistration;

/// <summary>
/// PlayFabServerPlayerProfile data model.
/// </summary>
typedef struct PlayFabServerPlayerProfile
{
    /// <summary>
    /// (Optional) Array of ad campaigns player has been attributed to.
    /// </summary>
    PlayFabServerAdCampaignAttribution const* const* adCampaignAttributions;

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
    PlayFabServerContactEmailInfo const* const* contactEmailAddresses;

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
    PlayFabServerPlayerLinkedAccount const* const* linkedAccounts;

    /// <summary>
    /// Count of linkedAccounts
    /// </summary>
    uint32_t linkedAccountsCount;

    /// <summary>
    /// (Optional) Dictionary of player's locations by type.
    /// </summary>
    struct PlayFabServerPlayerLocationDictionaryEntry const* locations;

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
    PlayFabServerPlayerStatistic const* const* playerStatistics;

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
    PlayFabServerPushNotificationRegistration const* const* pushNotificationRegistrations;

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

} PlayFabServerPlayerProfile;

/// <summary>
/// PlayFabServerGetPlayersInSegmentResult data model. Result payload for PlayFabServerGetPlayersInSegmentAsync.
/// </summary>
typedef struct PlayFabServerGetPlayersInSegmentResult
{
    /// <summary>
    /// (Optional) Continuation token to use to retrieve subsequent pages of results. If token returns
    /// null there are no more results.
    /// </summary>
    const char* continuationToken;

    /// <summary>
    /// (Optional) Array of player profiles in this segment.
    /// </summary>
    PlayFabServerPlayerProfile const* const* playerProfiles;

    /// <summary>
    /// Count of playerProfiles
    /// </summary>
    uint32_t playerProfilesCount;

    /// <summary>
    /// Count of profiles matching this segment.
    /// </summary>
    int32_t profilesInSegment;

} PlayFabServerGetPlayersInSegmentResult;

/// <summary>
/// PlayFabServerGetPlayersSegmentsRequest data model. Request object for PlayFabServerGetPlayerSegmentsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayersSegmentsRequest
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

} PlayFabServerGetPlayersSegmentsRequest;

/// <summary>
/// PlayFabServerStatisticNameVersion data model.
/// </summary>
typedef struct PlayFabServerStatisticNameVersion
{
    /// <summary>
    /// Unique name of the statistic.
    /// </summary>
    const char* statisticName;

    /// <summary>
    /// The version of the statistic to be returned.
    /// </summary>
    uint32_t version;

} PlayFabServerStatisticNameVersion;

/// <summary>
/// PlayFabServerGetPlayerStatisticsRequest data model. Request object for PlayFabServerGetPlayerStatisticsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerStatisticsRequest
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
    /// User for whom statistics are being requested.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Statistics to return.
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
    PlayFabServerStatisticNameVersion const* const* statisticNameVersions;

    /// <summary>
    /// Count of statisticNameVersions
    /// </summary>
    uint32_t statisticNameVersionsCount;

} PlayFabServerGetPlayerStatisticsRequest;

/// <summary>
/// PlayFabServerGetPlayerStatisticsResult data model. In addition to being available for use by the
/// title, the statistics are used for all leaderboard operations in PlayFab. Result payload for PlayFabServerGetPlayerStatisticsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerStatisticsResult
{
    /// <summary>
    /// (Optional) PlayFab unique identifier of the user whose statistics are being returned.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) User statistics for the requested user.
    /// </summary>
    PlayFabStatisticValue const* const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

} PlayFabServerGetPlayerStatisticsResult;

/// <summary>
/// PlayFabServerGetPlayerStatisticVersionsRequest data model. Request object for PlayFabServerGetPlayerStatisticVersionsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerStatisticVersionsRequest
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

} PlayFabServerGetPlayerStatisticVersionsRequest;

/// <summary>
/// PlayFabServerPlayerStatisticVersion data model.
/// </summary>
typedef struct PlayFabServerPlayerStatisticVersion
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

} PlayFabServerPlayerStatisticVersion;

/// <summary>
/// PlayFabServerGetPlayerStatisticVersionsResult data model. Result payload for PlayFabServerGetPlayerStatisticVersionsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerStatisticVersionsResult
{
    /// <summary>
    /// (Optional) Version change history of the statistic.
    /// </summary>
    PlayFabServerPlayerStatisticVersion const* const* statisticVersions;

    /// <summary>
    /// Count of statisticVersions
    /// </summary>
    uint32_t statisticVersionsCount;

} PlayFabServerGetPlayerStatisticVersionsResult;

/// <summary>
/// PlayFabServerGetPlayerTagsRequest data model. This API will return a list of canonical tags which
/// includes both namespace and tag's name. If namespace is not provided, the result is a list of all
/// canonical tags. TagName can be used for segmentation and Namespace is limited to 128 characters.
/// Request object for PlayFabServerGetPlayerTagsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerTagsRequest
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

} PlayFabServerGetPlayerTagsRequest;

/// <summary>
/// PlayFabServerGetPlayerTagsResult data model. Result payload for PlayFabServerGetPlayerTagsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayerTagsResult
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

} PlayFabServerGetPlayerTagsResult;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromFacebookIDsRequest data model. Request object for PlayFabServerGetPlayFabIDsFromFacebookIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromFacebookIDsRequest
{
    /// <summary>
    /// Array of unique Facebook identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* facebookIDs;

    /// <summary>
    /// Count of facebookIDs
    /// </summary>
    uint32_t facebookIDsCount;

} PlayFabServerGetPlayFabIDsFromFacebookIDsRequest;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromFacebookIDsResult data model. For Facebook identifiers which have not
/// been linked to PlayFab accounts, null will be returned. Result payload for PlayFabServerGetPlayFabIDsFromFacebookIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromFacebookIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Facebook identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerFacebookPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromFacebookIDsResult;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest data model. Request object for PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest
{
    /// <summary>
    /// Array of unique Facebook Instant Games identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* facebookInstantGamesIds;

    /// <summary>
    /// Count of facebookInstantGamesIds
    /// </summary>
    uint32_t facebookInstantGamesIdsCount;

} PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult data model. For Facebook Instant Games
/// identifiers which have not been linked to PlayFab accounts, null will be returned. Result payload
/// for PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult
{
    /// <summary>
    /// (Optional) Mapping of Facebook Instant Games identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerFacebookInstantGamesPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromFacebookInstantGamesIdsResult;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromGenericIDsRequest data model. Request object for PlayFabServerGetPlayFabIDsFromGenericIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromGenericIDsRequest
{
    /// <summary>
    /// Array of unique generic service identifiers for which the title needs to get PlayFab identifiers.
    /// Currently limited to a maximum of 10 in a single request.
    /// </summary>
    PlayFabServerGenericServiceId const* const* genericIDs;

    /// <summary>
    /// Count of genericIDs
    /// </summary>
    uint32_t genericIDsCount;

} PlayFabServerGetPlayFabIDsFromGenericIDsRequest;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromGenericIDsResult data model. For generic service identifiers which
/// have not been linked to PlayFab accounts, null will be returned. Result payload for PlayFabServerGetPlayFabIDsFromGenericIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromGenericIDsResult
{
    /// <summary>
    /// (Optional) Mapping of generic service identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerGenericPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromGenericIDsResult;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest data model. Request object for PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest
{
    /// <summary>
    /// Array of unique Nintendo Switch Device identifiers for which the title needs to get PlayFab identifiers.
    /// </summary>
    const char* const* nintendoSwitchDeviceIds;

    /// <summary>
    /// Count of nintendoSwitchDeviceIds
    /// </summary>
    uint32_t nintendoSwitchDeviceIdsCount;

} PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest;

/// <summary>
/// PlayFabServerNintendoSwitchPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabServerNintendoSwitchPlayFabIdPair
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

} PlayFabServerNintendoSwitchPlayFabIdPair;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult data model. For Nintendo Switch Device
/// identifiers which have not been linked to PlayFab accounts, null will be returned. Result payload
/// for PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult
{
    /// <summary>
    /// (Optional) Mapping of Nintendo Switch Device identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerNintendoSwitchPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest data model. Request object for PlayFabServerGetPlayFabIDsFromPSNAccountIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest
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

} PlayFabServerGetPlayFabIDsFromPSNAccountIDsRequest;

/// <summary>
/// PlayFabServerPSNAccountPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabServerPSNAccountPlayFabIdPair
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

} PlayFabServerPSNAccountPlayFabIdPair;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult data model. For PlayStation Network identifiers
/// which have not been linked to PlayFab accounts, null will be returned. Result payload for PlayFabServerGetPlayFabIDsFromPSNAccountIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult
{
    /// <summary>
    /// (Optional) Mapping of PlayStation Network identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerPSNAccountPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromPSNAccountIDsResult;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromSteamIDsRequest data model. Request object for PlayFabServerGetPlayFabIDsFromSteamIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromSteamIDsRequest
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

} PlayFabServerGetPlayFabIDsFromSteamIDsRequest;

/// <summary>
/// PlayFabServerSteamPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabServerSteamPlayFabIdPair
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

} PlayFabServerSteamPlayFabIdPair;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromSteamIDsResult data model. For Steam identifiers which have not been
/// linked to PlayFab accounts, null will be returned. Result payload for PlayFabServerGetPlayFabIDsFromSteamIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromSteamIDsResult
{
    /// <summary>
    /// (Optional) Mapping of Steam identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerSteamPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromSteamIDsResult;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest data model. Request object for PlayFabServerGetPlayFabIDsFromXboxLiveIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest
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

} PlayFabServerGetPlayFabIDsFromXboxLiveIDsRequest;

/// <summary>
/// PlayFabServerXboxLiveAccountPlayFabIdPair data model.
/// </summary>
typedef struct PlayFabServerXboxLiveAccountPlayFabIdPair
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

} PlayFabServerXboxLiveAccountPlayFabIdPair;

/// <summary>
/// PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult data model. For XboxLive identifiers which have not
/// been linked to PlayFab accounts, null will be returned. Result payload for PlayFabServerGetPlayFabIDsFromXboxLiveIDsAsync.
/// </summary>
typedef struct PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult
{
    /// <summary>
    /// (Optional) Mapping of PlayStation Network identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerXboxLiveAccountPlayFabIdPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPlayFabIDsFromXboxLiveIDsResult;

/// <summary>
/// PlayFabServerGetPublisherDataRequest data model. This API is designed to return publisher-specific
/// values which can be read, but not written to, by the client. This data is shared across all titles
/// assigned to a particular publisher, and can be used for cross-game coordination. Only titles assigned
/// to a publisher can use this API. For more information email helloplayfab@microsoft.com. Note that
/// there may up to a minute delay in between updating title data and this API call returning the newest
/// value. Request object for PlayFabServerGetPublisherDataAsync.
/// </summary>
typedef struct PlayFabServerGetPublisherDataRequest
{
    /// <summary>
    ///  array of keys to get back data from the Publisher data blob, set by the admin tools.
    /// </summary>
    const char* const* keys;

    /// <summary>
    /// Count of keys
    /// </summary>
    uint32_t keysCount;

} PlayFabServerGetPublisherDataRequest;

/// <summary>
/// PlayFabServerGetPublisherDataResult data model. Result payload for PlayFabServerGetPublisherDataAsync.
/// </summary>
typedef struct PlayFabServerGetPublisherDataResult
{
    /// <summary>
    /// (Optional) A dictionary object of key / value pairs.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetPublisherDataResult;

/// <summary>
/// PlayFabServerGetRandomResultTablesRequest data model. Request object for PlayFabServerGetRandomResultTablesAsync.
/// </summary>
typedef struct PlayFabServerGetRandomResultTablesRequest
{
    /// <summary>
    /// (Optional) Specifies the catalog version that should be used to retrieve the Random Result Tables.
    /// If unspecified, uses default/primary catalog.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// The unique identifier of the Random Result Table to use.
    /// </summary>
    const char* const* tableIDs;

    /// <summary>
    /// Count of tableIDs
    /// </summary>
    uint32_t tableIDsCount;

} PlayFabServerGetRandomResultTablesRequest;

/// <summary>
/// PlayFabServerResultTableNode data model.
/// </summary>
typedef struct PlayFabServerResultTableNode
{
    /// <summary>
    /// Either an ItemId, or the TableId of another random result table.
    /// </summary>
    const char* resultItem;

    /// <summary>
    /// Whether this entry in the table is an item or a link to another table.
    /// </summary>
    PlayFabServerResultTableNodeType resultItemType;

    /// <summary>
    /// How likely this is to be rolled - larger numbers add more weight.
    /// </summary>
    int32_t weight;

} PlayFabServerResultTableNode;

/// <summary>
/// PlayFabServerRandomResultTableListing data model.
/// </summary>
typedef struct PlayFabServerRandomResultTableListing
{
    /// <summary>
    /// (Optional) Catalog version this table is associated with.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// Child nodes that indicate what kind of drop table item this actually is.
    /// </summary>
    PlayFabServerResultTableNode const* const* nodes;

    /// <summary>
    /// Count of nodes
    /// </summary>
    uint32_t nodesCount;

    /// <summary>
    /// Unique name for this drop table.
    /// </summary>
    const char* tableId;

} PlayFabServerRandomResultTableListing;

/// <summary>
/// PlayFabServerGetRandomResultTablesResult data model. Note that if a specified Random Result Table
/// contains no entries, or does not exist in the catalog, an InvalidDropTable error will be returned.
/// Result payload for PlayFabServerGetRandomResultTablesAsync.
/// </summary>
typedef struct PlayFabServerGetRandomResultTablesResult
{
    /// <summary>
    /// (Optional) Array of random result tables currently available.
    /// </summary>
    struct PlayFabServerRandomResultTableListingDictionaryEntry const* tables;

    /// <summary>
    /// Count of tables
    /// </summary>
    uint32_t tablesCount;

} PlayFabServerGetRandomResultTablesResult;

/// <summary>
/// PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest data model. Request object for PlayFabServerGetServerCustomIDsFromPlayFabIDsAsync.
/// </summary>
typedef struct PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest
{
    /// <summary>
    /// Array of unique PlayFab player identifiers for which the title needs to get server custom identifiers.
    /// Cannot contain more than 25 identifiers.
    /// </summary>
    const char* const* playFabIDs;

    /// <summary>
    /// Count of playFabIDs
    /// </summary>
    uint32_t playFabIDsCount;

} PlayFabServerGetServerCustomIDsFromPlayFabIDsRequest;

/// <summary>
/// PlayFabServerServerCustomIDPlayFabIDPair data model.
/// </summary>
typedef struct PlayFabServerServerCustomIDPlayFabIDPair
{
    /// <summary>
    /// (Optional) Unique PlayFab identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) Unique server custom identifier for this player.
    /// </summary>
    const char* serverCustomId;

} PlayFabServerServerCustomIDPlayFabIDPair;

/// <summary>
/// PlayFabServerGetServerCustomIDsFromPlayFabIDsResult data model. For a PlayFab account that isn't
/// associated with a server custom identity, ServerCustomId will be null. Result payload for PlayFabServerGetServerCustomIDsFromPlayFabIDsAsync.
/// </summary>
typedef struct PlayFabServerGetServerCustomIDsFromPlayFabIDsResult
{
    /// <summary>
    /// (Optional) Mapping of server custom player identifiers to PlayFab identifiers.
    /// </summary>
    PlayFabServerServerCustomIDPlayFabIDPair const* const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetServerCustomIDsFromPlayFabIDsResult;

/// <summary>
/// PlayFabServerGetSharedGroupDataRequest data model. Request object for PlayFabServerGetSharedGroupDataAsync.
/// </summary>
typedef struct PlayFabServerGetSharedGroupDataRequest
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

} PlayFabServerGetSharedGroupDataRequest;

/// <summary>
/// PlayFabServerSharedGroupDataRecord data model.
/// </summary>
typedef struct PlayFabServerSharedGroupDataRecord
{
    /// <summary>
    /// Timestamp for when this data was last updated.
    /// </summary>
    time_t lastUpdated;

    /// <summary>
    /// (Optional) PlayFabId of the user to last update this value.
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

} PlayFabServerSharedGroupDataRecord;

/// <summary>
/// PlayFabServerGetSharedGroupDataResult data model. Result payload for PlayFabServerGetSharedGroupDataAsync.
/// </summary>
typedef struct PlayFabServerGetSharedGroupDataResult
{
    /// <summary>
    /// (Optional) Data for the requested keys.
    /// </summary>
    struct PlayFabServerSharedGroupDataRecordDictionaryEntry const* data;

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

} PlayFabServerGetSharedGroupDataResult;

/// <summary>
/// PlayFabServerStoreMarketingModel data model. Marketing data about a specific store.
/// </summary>
typedef struct PlayFabServerStoreMarketingModel
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

} PlayFabServerStoreMarketingModel;

/// <summary>
/// PlayFabServerStoreItem data model. A store entry that list a catalog item at a particular price.
/// </summary>
typedef struct PlayFabServerStoreItem
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

} PlayFabServerStoreItem;

/// <summary>
/// PlayFabServerGetStoreItemsResult data model. Result payload for PlayFabServerGetStoreItemsAsync.
/// </summary>
typedef struct PlayFabServerGetStoreItemsResult
{
    /// <summary>
    /// (Optional) The base catalog that this store is a part of.
    /// </summary>
    const char* catalogVersion;

    /// <summary>
    /// (Optional) Additional data about the store.
    /// </summary>
    PlayFabServerStoreMarketingModel const* marketingData;

    /// <summary>
    /// (Optional) How the store was last updated (Admin or a third party).
    /// </summary>
    PlayFabServerSourceType const* source;

    /// <summary>
    /// (Optional) Array of items which can be purchased from this store.
    /// </summary>
    PlayFabServerStoreItem const* const* store;

    /// <summary>
    /// Count of store
    /// </summary>
    uint32_t storeCount;

    /// <summary>
    /// (Optional) The ID of this store.
    /// </summary>
    const char* storeId;

} PlayFabServerGetStoreItemsResult;

/// <summary>
/// PlayFabServerGetStoreItemsServerRequest data model. A store contains an array of references to items
/// defined in one or more catalog versions of the game, along with the prices for the item, in both real
/// world and virtual currencies. These prices act as an override to any prices defined in the catalog.
/// In this way, the base definitions of the items may be defined in the catalog, with all associated
/// properties, while the pricing can be set for each store, as needed. This allows for subsets of goods
/// to be defined for different purposes (in order to simplify showing some, but not all catalog items
/// to users, based upon different characteristics), along with unique prices. Note that all prices defined
/// in the catalog and store definitions for the item are considered valid, and that a compromised client
/// can be made to send a request for an item based upon any of these definitions. If no price is specified
/// in the store for an item, the price set in the catalog should be displayed to the user. Request object
/// for PlayFabServerGetStoreItemsAsync.
/// </summary>
typedef struct PlayFabServerGetStoreItemsServerRequest
{
    /// <summary>
    /// (Optional) Catalog version to store items from. Use default catalog version if null.
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
    /// (Optional) Optional identifier for the player to use in requesting the store information - if
    /// used, segment overrides will be applied.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unqiue identifier for the store which is being requested.
    /// </summary>
    const char* storeId;

} PlayFabServerGetStoreItemsServerRequest;

/// <summary>
/// PlayFabServerGetTimeResult data model. Time is always returned as Coordinated Universal Time (UTC).
/// Result payload for PlayFabServerGetTimeAsync.
/// </summary>
typedef struct PlayFabServerGetTimeResult
{
    /// <summary>
    /// Current server time when the request was received, in UTC.
    /// </summary>
    time_t time;

} PlayFabServerGetTimeResult;

/// <summary>
/// PlayFabServerGetTitleDataRequest data model. This API is designed to return title specific values
/// which can be read, but not written to, by the client. For example, a developer could choose to store
/// values which modify the user experience, such as enemy spawn rates, weapon strengths, movement speeds,
/// etc. This allows a developer to update the title without the need to create, test, and ship a new
/// build. If an override label is specified in the request, the overrides are applied automatically and
/// returned with the title data. Note that there may up to a minute delay in between updating title data
/// and this API call returning the newest value. Request object for PlayFabServerGetTitleDataAsync and
/// PlayFabServerGetTitleInternalDataAsync.
/// </summary>
typedef struct PlayFabServerGetTitleDataRequest
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

} PlayFabServerGetTitleDataRequest;

/// <summary>
/// PlayFabServerGetTitleDataResult data model. Result payload for PlayFabServerGetTitleDataAsync and
/// PlayFabServerGetTitleInternalDataAsync.
/// </summary>
typedef struct PlayFabServerGetTitleDataResult
{
    /// <summary>
    /// (Optional) A dictionary object of key / value pairs.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

} PlayFabServerGetTitleDataResult;

/// <summary>
/// PlayFabServerGetTitleNewsRequest data model. Request object for PlayFabServerGetTitleNewsAsync.
/// </summary>
typedef struct PlayFabServerGetTitleNewsRequest
{
    /// <summary>
    /// (Optional) Limits the results to the last n entries. Defaults to 10 if not set.
    /// </summary>
    int32_t const* count;

} PlayFabServerGetTitleNewsRequest;

/// <summary>
/// PlayFabServerTitleNewsItem data model.
/// </summary>
typedef struct PlayFabServerTitleNewsItem
{
    /// <summary>
    /// (Optional) News item body.
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

} PlayFabServerTitleNewsItem;

/// <summary>
/// PlayFabServerGetTitleNewsResult data model. Result payload for PlayFabServerGetTitleNewsAsync.
/// </summary>
typedef struct PlayFabServerGetTitleNewsResult
{
    /// <summary>
    /// (Optional) Array of localized news items.
    /// </summary>
    PlayFabServerTitleNewsItem const* const* news;

    /// <summary>
    /// Count of news
    /// </summary>
    uint32_t newsCount;

} PlayFabServerGetTitleNewsResult;

/// <summary>
/// PlayFabServerGetUserAccountInfoRequest data model. This API allows for access to details regarding
/// a user in the PlayFab service, usually for purposes of customer support. Note that data returned may
/// be Personally Identifying Information (PII), such as email address, and so care should be taken in
/// how this data is stored and managed. Since this call will always return the relevant information for
/// users who have accessed the title, the recommendation is to not store this data locally. Request
/// object for PlayFabServerGetUserAccountInfoAsync.
/// </summary>
typedef struct PlayFabServerGetUserAccountInfoRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetUserAccountInfoRequest;

/// <summary>
/// PlayFabServerGetUserAccountInfoResult data model. Result payload for PlayFabServerGetUserAccountInfoAsync.
/// </summary>
typedef struct PlayFabServerGetUserAccountInfoResult
{
    /// <summary>
    /// (Optional) Account details for the user whose information was requested.
    /// </summary>
    PlayFabUserAccountInfo const* userInfo;

} PlayFabServerGetUserAccountInfoResult;

/// <summary>
/// PlayFabServerGetUserBansRequest data model. Get all bans for a user, including inactive and expired
/// bans. . Request object for PlayFabServerGetUserBansAsync.
/// </summary>
typedef struct PlayFabServerGetUserBansRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGetUserBansRequest;

/// <summary>
/// PlayFabServerGetUserBansResult data model. Result payload for PlayFabServerGetUserBansAsync.
/// </summary>
typedef struct PlayFabServerGetUserBansResult
{
    /// <summary>
    /// (Optional) Information about the bans.
    /// </summary>
    PlayFabServerBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabServerGetUserBansResult;

/// <summary>
/// PlayFabServerGetUserDataRequest data model. Data is stored as JSON key-value pairs. If the Keys parameter
/// is provided, the data object returned will only contain the data specific to the indicated Keys. Otherwise,
/// the full set of custom user data will be returned. Request object for PlayFabServerGetUserDataAsync,
/// PlayFabServerGetUserInternalDataAsync, PlayFabServerGetUserPublisherDataAsync, PlayFabServerGetUserPublisherInternalDataAsync,
/// PlayFabServerGetUserPublisherReadOnlyDataAsync, and PlayFabServerGetUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerGetUserDataRequest
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

} PlayFabServerGetUserDataRequest;

/// <summary>
/// PlayFabServerGetUserDataResult data model. Result payload for PlayFabServerGetUserDataAsync, PlayFabServerGetUserInternalDataAsync,
/// PlayFabServerGetUserPublisherDataAsync, PlayFabServerGetUserPublisherInternalDataAsync, PlayFabServerGetUserPublisherReadOnlyDataAsync,
/// and PlayFabServerGetUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerGetUserDataResult
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

} PlayFabServerGetUserDataResult;

/// <summary>
/// PlayFabServerGetUserInventoryRequest data model. All items currently in the user inventory will be
/// returned, irrespective of how they were acquired (via purchasing, grants, coupons, etc.). Items that
/// are expired, fully consumed, or are no longer valid are not considered to be in the user's current
/// inventory, and so will not be not included. Request object for PlayFabServerGetUserInventoryAsync.
/// </summary>
typedef struct PlayFabServerGetUserInventoryRequest
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

} PlayFabServerGetUserInventoryRequest;

/// <summary>
/// PlayFabServerGetUserInventoryResult data model. Result payload for PlayFabServerGetUserInventoryAsync.
/// </summary>
typedef struct PlayFabServerGetUserInventoryResult
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

} PlayFabServerGetUserInventoryResult;

/// <summary>
/// PlayFabServerGrantCharacterToUserRequest data model. Grants a character to the user of the type and
/// name specified in the request. Request object for PlayFabServerGrantCharacterToUserAsync.
/// </summary>
typedef struct PlayFabServerGrantCharacterToUserRequest
{
    /// <summary>
    /// Non-unique display name of the character being granted (1-40 characters in length).
    /// </summary>
    const char* characterName;

    /// <summary>
    /// Type of the character being granted; statistics can be sliced based on this value.
    /// </summary>
    const char* characterType;

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

} PlayFabServerGrantCharacterToUserRequest;

/// <summary>
/// PlayFabServerGrantCharacterToUserResult data model. Result payload for PlayFabServerGrantCharacterToUserAsync.
/// </summary>
typedef struct PlayFabServerGrantCharacterToUserResult
{
    /// <summary>
    /// (Optional) Unique identifier tagged to this character.
    /// </summary>
    const char* characterId;

} PlayFabServerGrantCharacterToUserResult;

/// <summary>
/// PlayFabServerGrantedItemInstance data model. Result of granting an item to a user. Note, to retrieve
/// additional information for an item such as Tags, Description that are the same across all instances
/// of the item, a call to GetCatalogItems is required. The ItemID of can be matched to a catalog entry,
/// which contains the additional information. Also note that Custom Data is only set when the User's
/// specific instance has updated the CustomData via a call to UpdateUserInventoryItemCustomData. Other
/// fields such as UnitPrice and UnitCurrency are only set when the item was granted via a purchase.
/// </summary>
typedef struct PlayFabServerGrantedItemInstance
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

} PlayFabServerGrantedItemInstance;

/// <summary>
/// PlayFabServerGrantItemsToCharacterRequest data model. This function directly adds inventory items
/// to the character's inventories. As a result of this operations, the user will not be charged any transaction
/// fee, regardless of the inventory item catalog definition. Please note that the processing time for
/// inventory grants and purchases increases fractionally the more items are in the inventory, and the
/// more items are in the grant/purchase operation. Request object for PlayFabServerGrantItemsToCharacterAsync.
/// </summary>
typedef struct PlayFabServerGrantItemsToCharacterRequest
{
    /// <summary>
    /// (Optional) String detailing any additional information concerning this operation.
    /// </summary>
    const char* annotation;

    /// <summary>
    /// (Optional) Catalog version from which items are to be granted.
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

    /// <summary>
    /// (Optional) Array of itemIds to grant to the user.
    /// </summary>
    const char* const* itemIds;

    /// <summary>
    /// Count of itemIds
    /// </summary>
    uint32_t itemIdsCount;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGrantItemsToCharacterRequest;

/// <summary>
/// PlayFabServerGrantItemsToCharacterResult data model. Result payload for PlayFabServerGrantItemsToCharacterAsync.
/// </summary>
typedef struct PlayFabServerGrantItemsToCharacterResult
{
    /// <summary>
    /// (Optional) Array of items granted to users.
    /// </summary>
    PlayFabServerGrantedItemInstance const* const* itemGrantResults;

    /// <summary>
    /// Count of itemGrantResults
    /// </summary>
    uint32_t itemGrantResultsCount;

} PlayFabServerGrantItemsToCharacterResult;

/// <summary>
/// PlayFabServerGrantItemsToUserRequest data model. This function directly adds inventory items to the
/// user's inventories. As a result of this operations, the user will not be charged any transaction fee,
/// regardless of the inventory item catalog definition. Please note that the processing time for inventory
/// grants and purchases increases fractionally the more items are in the inventory, and the more items
/// are in the grant/purchase operation. Request object for PlayFabServerGrantItemsToUserAsync.
/// </summary>
typedef struct PlayFabServerGrantItemsToUserRequest
{
    /// <summary>
    /// (Optional) String detailing any additional information concerning this operation.
    /// </summary>
    const char* annotation;

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
    /// Array of itemIds to grant to the user.
    /// </summary>
    const char* const* itemIds;

    /// <summary>
    /// Count of itemIds
    /// </summary>
    uint32_t itemIdsCount;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerGrantItemsToUserRequest;

/// <summary>
/// PlayFabServerGrantItemsToUserResult data model. Please note that the order of the items in the response
/// may not match the order of items in the request. Result payload for PlayFabServerGrantItemsToUserAsync.
/// </summary>
typedef struct PlayFabServerGrantItemsToUserResult
{
    /// <summary>
    /// (Optional) Array of items granted to users.
    /// </summary>
    PlayFabServerGrantedItemInstance const* const* itemGrantResults;

    /// <summary>
    /// Count of itemGrantResults
    /// </summary>
    uint32_t itemGrantResultsCount;

} PlayFabServerGrantItemsToUserResult;

/// <summary>
/// PlayFabServerItemGrant data model.
/// </summary>
typedef struct PlayFabServerItemGrant
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

} PlayFabServerItemGrant;

/// <summary>
/// PlayFabServerGrantItemsToUsersRequest data model. This function directly adds inventory items to
/// user inventories. As a result of this operations, the user will not be charged any transaction fee,
/// regardless of the inventory item catalog definition. Please note that the processing time for inventory
/// grants and purchases increases fractionally the more items are in the inventory, and the more items
/// are in the grant/purchase operation. Request object for PlayFabServerGrantItemsToUsersAsync.
/// </summary>
typedef struct PlayFabServerGrantItemsToUsersRequest
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
    PlayFabServerItemGrant const* const* itemGrants;

    /// <summary>
    /// Count of itemGrants
    /// </summary>
    uint32_t itemGrantsCount;

} PlayFabServerGrantItemsToUsersRequest;

/// <summary>
/// PlayFabServerGrantItemsToUsersResult data model. Please note that the order of the items in the response
/// may not match the order of items in the request. Result payload for PlayFabServerGrantItemsToUsersAsync.
/// </summary>
typedef struct PlayFabServerGrantItemsToUsersResult
{
    /// <summary>
    /// (Optional) Array of items granted to users.
    /// </summary>
    PlayFabServerGrantedItemInstance const* const* itemGrantResults;

    /// <summary>
    /// Count of itemGrantResults
    /// </summary>
    uint32_t itemGrantResultsCount;

} PlayFabServerGrantItemsToUsersResult;

/// <summary>
/// PlayFabServerLinkPSNAccountRequest data model. Request object for PlayFabServerLinkPSNAccountAsync.
/// </summary>
typedef struct PlayFabServerLinkPSNAccountRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Redirect URI supplied to PSN when requesting an auth code.
    /// </summary>
    const char* redirectUri;

} PlayFabServerLinkPSNAccountRequest;

/// <summary>
/// PlayFabServerLinkServerCustomIdRequest data model. Request object for PlayFabServerLinkServerCustomIdAsync.
/// </summary>
typedef struct PlayFabServerLinkServerCustomIdRequest
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
    /// (Optional) If another user is already linked to the custom ID, unlink the other user and re-link.
    /// </summary>
    bool const* forceLink;

    /// <summary>
    /// Unique PlayFab identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique server custom identifier for this player.
    /// </summary>
    const char* serverCustomId;

} PlayFabServerLinkServerCustomIdRequest;

/// <summary>
/// PlayFabServerLinkXboxAccountRequest data model. Request object for PlayFabServerLinkXboxAccountAsync.
/// </summary>
typedef struct PlayFabServerLinkXboxAccountRequest
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
    /// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Xbox Live
    /// identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// "").
    /// </summary>
    const char* xboxToken;

} PlayFabServerLinkXboxAccountRequest;

/// <summary>
/// PlayFabServerListUsersCharactersRequest data model. Returns a list of every character that currently
/// belongs to a user. Request object for PlayFabServerGetAllUsersCharactersAsync.
/// </summary>
typedef struct PlayFabServerListUsersCharactersRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerListUsersCharactersRequest;

/// <summary>
/// PlayFabServerListUsersCharactersResult data model. Result payload for PlayFabServerGetAllUsersCharactersAsync.
/// </summary>
typedef struct PlayFabServerListUsersCharactersResult
{
    /// <summary>
    /// (Optional) The requested list of characters.
    /// </summary>
    PlayFabCharacterResult const* const* characters;

    /// <summary>
    /// Count of characters
    /// </summary>
    uint32_t charactersCount;

} PlayFabServerListUsersCharactersResult;

/// <summary>
/// PlayFabServerLocalizedPushNotificationProperties data model. Contains the localized push notification
/// content.
/// </summary>
typedef struct PlayFabServerLocalizedPushNotificationProperties
{
    /// <summary>
    /// (Optional) Message of the localized push notification template.
    /// </summary>
    const char* message;

    /// <summary>
    /// (Optional) Subject of the localized push notification template.
    /// </summary>
    const char* subject;

} PlayFabServerLocalizedPushNotificationProperties;

/// <summary>
/// PlayFabServerLoginWithServerCustomIdRequest data model. Request object for PlayFabServerLoginWithServerCustomIdAsync.
/// </summary>
typedef struct PlayFabServerLoginWithServerCustomIdRequest
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
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabServerGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) The backend server identifier for this player.
    /// </summary>
    const char* serverCustomId;

} PlayFabServerLoginWithServerCustomIdRequest;

/// <summary>
/// PlayFabServerLoginWithSteamIdRequest data model. If this is the first time a user has signed in with
/// the Steam ID and CreateAccount is set to true, a new PlayFab account will be created and linked to
/// the Steam account. In this case, no email or username will be associated with the PlayFab account.
/// Otherwise, if no PlayFab account is linked to the Steam account, an error indicating this will be
/// returned, so that the title can guide the user through creation of a PlayFab account. Steam users
/// that are not logged into the Steam Client app will only have their Steam username synced, other data,
/// such as currency and country will not be available until they login while the Client is open. Request
/// object for PlayFabServerLoginWithSteamIdAsync.
/// </summary>
typedef struct PlayFabServerLoginWithSteamIdRequest
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
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabServerGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Unique Steam identifier for a user.
    /// </summary>
    const char* steamId;

} PlayFabServerLoginWithSteamIdRequest;

/// <summary>
/// PlayFabServerLoginWithXboxIdRequest data model. If this is the first time a user has signed in with
/// the Xbox ID and CreateAccount is set to true, a new PlayFab account will be created and linked to
/// the Xbox Live account. In this case, no email or username will be associated with the PlayFab account.
/// Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating this will
/// be returned, so that the title can guide the user through creation of a PlayFab account. Request
/// object for PlayFabServerLoginWithXboxIdAsync.
/// </summary>
typedef struct PlayFabServerLoginWithXboxIdRequest
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
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabServerGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// The id of Xbox Live sandbox.
    /// </summary>
    const char* sandbox;

    /// <summary>
    /// Unique Xbox identifier for a user.
    /// </summary>
    const char* xboxId;

} PlayFabServerLoginWithXboxIdRequest;

/// <summary>
/// PlayFabServerLoginWithXboxRequest data model. If this is the first time a user has signed in with
/// the Xbox Live account and CreateAccount is set to true, a new PlayFab account will be created and
/// linked to the Xbox Live account. In this case, no email or username will be associated with the PlayFab
/// account. Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating
/// this will be returned, so that the title can guide the user through creation of a PlayFab account.
/// Request object for PlayFabServerLoginWithXboxAsync.
/// </summary>
typedef struct PlayFabServerLoginWithXboxRequest
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
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PlayFabServerGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// "").
    /// </summary>
    const char* xboxToken;

} PlayFabServerLoginWithXboxRequest;

/// <summary>
/// PlayFabServerModifyCharacterVirtualCurrencyResult data model. Result payload for PlayFabServerAddCharacterVirtualCurrencyAsync
/// and PlayFabServerSubtractCharacterVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabServerModifyCharacterVirtualCurrencyResult
{
    /// <summary>
    /// Balance of the virtual currency after modification.
    /// </summary>
    int32_t balance;

    /// <summary>
    /// (Optional) Name of the virtual currency which was modified.
    /// </summary>
    const char* virtualCurrency;

} PlayFabServerModifyCharacterVirtualCurrencyResult;

/// <summary>
/// PlayFabServerModifyItemUsesRequest data model. This function can both add and remove uses of an inventory
/// item. If the number of uses drops below zero, the item will be removed from active inventory. Request
/// object for PlayFabServerModifyItemUsesAsync.
/// </summary>
typedef struct PlayFabServerModifyItemUsesRequest
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
    /// Unique instance identifier of the item to be modified.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// PlayFab unique identifier of the user whose item is being modified.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Number of uses to add to the item. Can be negative to remove uses.
    /// </summary>
    int32_t usesToAdd;

} PlayFabServerModifyItemUsesRequest;

/// <summary>
/// PlayFabServerModifyItemUsesResult data model. Result payload for PlayFabServerModifyItemUsesAsync.
/// </summary>
typedef struct PlayFabServerModifyItemUsesResult
{
    /// <summary>
    /// (Optional) Unique instance identifier of the item with uses consumed.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// Number of uses remaining on the item.
    /// </summary>
    int32_t remainingUses;

} PlayFabServerModifyItemUsesResult;

/// <summary>
/// PlayFabServerModifyUserVirtualCurrencyResult data model. Result payload for PlayFabServerAddUserVirtualCurrencyAsync
/// and PlayFabServerSubtractUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabServerModifyUserVirtualCurrencyResult
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

} PlayFabServerModifyUserVirtualCurrencyResult;

/// <summary>
/// PlayFabServerMoveItemToCharacterFromCharacterRequest data model. Transfers an item from a character
/// to another character that is owned by the same user. This will remove the item from the character's
/// inventory (until and unless it is moved back), and will enable the other character to make use of
/// the item instead. Request object for PlayFabServerMoveItemToCharacterFromCharacterAsync.
/// </summary>
typedef struct PlayFabServerMoveItemToCharacterFromCharacterRequest
{
    /// <summary>
    /// Unique identifier of the character that currently has the item.
    /// </summary>
    const char* givingCharacterId;

    /// <summary>
    /// Unique PlayFab assigned instance identifier of the item.
    /// </summary>
    const char* itemInstanceId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique identifier of the character that will be receiving the item.
    /// </summary>
    const char* receivingCharacterId;

} PlayFabServerMoveItemToCharacterFromCharacterRequest;

/// <summary>
/// PlayFabServerMoveItemToCharacterFromUserRequest data model. Transfers an item from a user to a character
/// she owns. This will remove the item from the user's inventory (until and unless it is moved back),
/// and will enable the character to make use of the item instead. Request object for PlayFabServerMoveItemToCharacterFromUserAsync.
/// </summary>
typedef struct PlayFabServerMoveItemToCharacterFromUserRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
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

} PlayFabServerMoveItemToCharacterFromUserRequest;

/// <summary>
/// PlayFabServerMoveItemToUserFromCharacterRequest data model. Transfers an item from a character to
/// the owning user. This will remove the item from the character's inventory (until and unless it is
/// moved back), and will enable the user to make use of the item instead. Request object for PlayFabServerMoveItemToUserFromCharacterAsync.
/// </summary>
typedef struct PlayFabServerMoveItemToUserFromCharacterRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
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

} PlayFabServerMoveItemToUserFromCharacterRequest;

/// <summary>
/// PlayFabServerNotifyMatchmakerPlayerLeftRequest data model. Request object for PlayFabServerNotifyMatchmakerPlayerLeftAsync.
/// </summary>
typedef struct PlayFabServerNotifyMatchmakerPlayerLeftRequest
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
    /// Unique identifier of the Game Instance the user is leaving.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerNotifyMatchmakerPlayerLeftRequest;

/// <summary>
/// PlayFabServerNotifyMatchmakerPlayerLeftResult data model. Result payload for PlayFabServerNotifyMatchmakerPlayerLeftAsync.
/// </summary>
typedef struct PlayFabServerNotifyMatchmakerPlayerLeftResult
{
    /// <summary>
    /// (Optional) State of user leaving the Game Server Instance.
    /// </summary>
    PlayFabServerPlayerConnectionState const* playerState;

} PlayFabServerNotifyMatchmakerPlayerLeftResult;

/// <summary>
/// PlayFabServerPushNotificationPackage data model.
/// </summary>
typedef struct PlayFabServerPushNotificationPackage
{
    /// <summary>
    /// Numerical badge to display on App icon (iOS only).
    /// </summary>
    int32_t badge;

    /// <summary>
    /// (Optional) This must be a JSON formatted object. For use with developer-created custom Push Notification
    /// plugins.
    /// </summary>
    const char* customData;

    /// <summary>
    /// (Optional) Icon file to display with the message (Not supported for iOS).
    /// </summary>
    const char* icon;

    /// <summary>
    /// Content of the message (all platforms).
    /// </summary>
    const char* message;

    /// <summary>
    /// (Optional) Sound file to play with the message (all platforms).
    /// </summary>
    const char* sound;

    /// <summary>
    /// Title/Subject of the message. Not supported for iOS.
    /// </summary>
    const char* title;

} PlayFabServerPushNotificationPackage;

/// <summary>
/// PlayFabServerRedeemCouponRequest data model. Coupon codes can be created for any item, or set of
/// items, in the catalog for the title. This operation causes the coupon to be consumed, and the specific
/// items to be awarded to the user. Attempting to re-use an already consumed code, or a code which has
/// not yet been created in the service, will result in an error. Request object for PlayFabServerRedeemCouponAsync.
/// </summary>
typedef struct PlayFabServerRedeemCouponRequest
{
    /// <summary>
    /// (Optional) Catalog version of the coupon.
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

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerRedeemCouponRequest;

/// <summary>
/// PlayFabServerRedeemCouponResult data model. Result payload for PlayFabServerRedeemCouponAsync.
/// </summary>
typedef struct PlayFabServerRedeemCouponResult
{
    /// <summary>
    /// (Optional) Items granted to the player as a result of redeeming the coupon.
    /// </summary>
    PlayFabItemInstance const* const* grantedItems;

    /// <summary>
    /// Count of grantedItems
    /// </summary>
    uint32_t grantedItemsCount;

} PlayFabServerRedeemCouponResult;

/// <summary>
/// PlayFabServerRedeemMatchmakerTicketRequest data model. This function is used by a Game Server Instance
/// to validate with the PlayFab service that a user has been registered as connected to the server. The
/// Ticket is provided to the client either as a result of a call to StartGame or Matchmake, each of which
/// return a Ticket specific to the Game Server Instance. This function will fail in any case where the
/// Ticket presented is not valid for the specific Game Server Instance making the call. Note that data
/// returned may be Personally Identifying Information (PII), such as email address, and so care should
/// be taken in how this data is stored and managed. Since this call will always return the relevant information
/// for users who have accessed the title, the recommendation is to not store this data locally. Request
/// object for PlayFabServerRedeemMatchmakerTicketAsync.
/// </summary>
typedef struct PlayFabServerRedeemMatchmakerTicketRequest
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
    /// Unique identifier of the Game Server Instance that is asking for validation of the authorization
    /// ticket.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// Server authorization ticket passed back from a call to Matchmake or StartGame.
    /// </summary>
    const char* ticket;

} PlayFabServerRedeemMatchmakerTicketRequest;

/// <summary>
/// PlayFabServerRedeemMatchmakerTicketResult data model. Result payload for PlayFabServerRedeemMatchmakerTicketAsync.
/// </summary>
typedef struct PlayFabServerRedeemMatchmakerTicketResult
{
    /// <summary>
    /// (Optional) Error value if the ticket was not validated.
    /// </summary>
    const char* error;

    /// <summary>
    /// Boolean indicating whether the ticket was validated by the PlayFab service.
    /// </summary>
    bool ticketIsValid;

    /// <summary>
    /// (Optional) User account information for the user validated.
    /// </summary>
    PlayFabUserAccountInfo const* userInfo;

} PlayFabServerRedeemMatchmakerTicketResult;

/// <summary>
/// PlayFabServerRefreshGameServerInstanceHeartbeatRequest data model. Request object for PlayFabServerRefreshGameServerInstanceHeartbeatAsync.
/// </summary>
typedef struct PlayFabServerRefreshGameServerInstanceHeartbeatRequest
{
    /// <summary>
    /// Unique identifier of the Game Server Instance for which the heartbeat is updated.
    /// </summary>
    const char* lobbyId;

} PlayFabServerRefreshGameServerInstanceHeartbeatRequest;

/// <summary>
/// PlayFabServerRegisterGameRequest data model. Request object for PlayFabServerRegisterGameAsync.
/// </summary>
typedef struct PlayFabServerRegisterGameRequest
{
    /// <summary>
    /// Unique identifier of the build running on the Game Server Instance.
    /// </summary>
    const char* build;

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
    /// Game Mode the Game Server instance is running. Note that this must be defined in the Game Modes
    /// tab in the PlayFab Game Manager, along with the Build ID (the same Game Mode can be defined for
    /// multiple Build IDs).
    /// </summary>
    const char* gameMode;

    /// <summary>
    /// (Optional) Previous lobby id if re-registering an existing game.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// Region in which the Game Server Instance is running. For matchmaking using non-AWS region names,
    /// set this to any AWS region and use Tags (below) to specify your custom region.
    /// </summary>
    PlayFabServerRegion region;

    /// <summary>
    /// (Optional) IPV4 address of the game server instance.
    /// </summary>
    const char* serverIPV4Address;

    /// <summary>
    /// (Optional) IPV6 address (if any) of the game server instance.
    /// </summary>
    const char* serverIPV6Address;

    /// <summary>
    /// Port number for communication with the Game Server Instance.
    /// </summary>
    const char* serverPort;

    /// <summary>
    /// (Optional) Public DNS name (if any) of the server.
    /// </summary>
    const char* serverPublicDNSName;

    /// <summary>
    /// (Optional) Tags for the Game Server Instance.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PlayFabServerRegisterGameRequest;

/// <summary>
/// PlayFabServerRegisterGameResponse data model. Result payload for PlayFabServerRegisterGameAsync.
/// </summary>
typedef struct PlayFabServerRegisterGameResponse
{
    /// <summary>
    /// (Optional) Unique identifier generated for the Game Server Instance that is registered. If LobbyId
    /// is specified in request and the game still exists in PlayFab, the LobbyId in request is returned.
    /// Otherwise a new lobby id will be returned.
    /// </summary>
    const char* lobbyId;

} PlayFabServerRegisterGameResponse;

/// <summary>
/// PlayFabServerRemoveFriendRequest data model. Request object for PlayFabServerRemoveFriendAsync.
/// </summary>
typedef struct PlayFabServerRemoveFriendRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account which is to be removed.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerRemoveFriendRequest;

/// <summary>
/// PlayFabServerRemoveGenericIDRequest data model. Request object for PlayFabServerRemoveGenericIDAsync.
/// </summary>
typedef struct PlayFabServerRemoveGenericIDRequest
{
    /// <summary>
    /// Generic service identifier to be removed from the player.
    /// </summary>
    PlayFabServerGenericServiceId const* genericId;

    /// <summary>
    /// PlayFabId of the user to remove.
    /// </summary>
    const char* playFabId;

} PlayFabServerRemoveGenericIDRequest;

/// <summary>
/// PlayFabServerRemovePlayerTagRequest data model. This API will trigger a player_tag_removed event
/// and remove a tag with the given TagName and PlayFabID from the corresponding player profile. TagName
/// can be used for segmentation and it is limited to 256 characters. Request object for PlayFabServerRemovePlayerTagAsync.
/// </summary>
typedef struct PlayFabServerRemovePlayerTagRequest
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

} PlayFabServerRemovePlayerTagRequest;

/// <summary>
/// PlayFabServerRemoveSharedGroupMembersRequest data model. Request object for PlayFabServerRemoveSharedGroupMembersAsync.
/// </summary>
typedef struct PlayFabServerRemoveSharedGroupMembersRequest
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

} PlayFabServerRemoveSharedGroupMembersRequest;

/// <summary>
/// PlayFabServerReportPlayerServerRequest data model. Request object for PlayFabServerReportPlayerAsync.
/// </summary>
typedef struct PlayFabServerReportPlayerServerRequest
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

    /// <summary>
    /// PlayFabId of the reporting player.
    /// </summary>
    const char* reporterId;

} PlayFabServerReportPlayerServerRequest;

/// <summary>
/// PlayFabServerReportPlayerServerResult data model. Players are currently limited to five reports per
/// day. Attempts by a single user account to submit reports beyond five will result in Updated being
/// returned as false. Result payload for PlayFabServerReportPlayerAsync.
/// </summary>
typedef struct PlayFabServerReportPlayerServerResult
{
    /// <summary>
    /// The number of remaining reports which may be filed today by this reporting player.
    /// </summary>
    int32_t submissionsRemaining;

} PlayFabServerReportPlayerServerResult;

/// <summary>
/// PlayFabServerRevokeAllBansForUserRequest data model. Setting the active state of all non-expired
/// bans for a user to Inactive. Expired bans with an Active state will be ignored, however. Returns information
/// about applied updates only. Request object for PlayFabServerRevokeAllBansForUserAsync.
/// </summary>
typedef struct PlayFabServerRevokeAllBansForUserRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerRevokeAllBansForUserRequest;

/// <summary>
/// PlayFabServerRevokeAllBansForUserResult data model. Result payload for PlayFabServerRevokeAllBansForUserAsync.
/// </summary>
typedef struct PlayFabServerRevokeAllBansForUserResult
{
    /// <summary>
    /// (Optional) Information on the bans that were revoked.
    /// </summary>
    PlayFabServerBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabServerRevokeAllBansForUserResult;

/// <summary>
/// PlayFabServerRevokeBansRequest data model. Setting the active state of all bans requested to Inactive
/// regardless of whether that ban has already expired. BanIds that do not exist will be skipped. Returns
/// information about applied updates only. . Request object for PlayFabServerRevokeBansAsync.
/// </summary>
typedef struct PlayFabServerRevokeBansRequest
{
    /// <summary>
    /// Ids of the bans to be revoked. Maximum 100.
    /// </summary>
    const char* const* banIds;

    /// <summary>
    /// Count of banIds
    /// </summary>
    uint32_t banIdsCount;

} PlayFabServerRevokeBansRequest;

/// <summary>
/// PlayFabServerRevokeBansResult data model. Result payload for PlayFabServerRevokeBansAsync.
/// </summary>
typedef struct PlayFabServerRevokeBansResult
{
    /// <summary>
    /// (Optional) Information on the bans that were revoked.
    /// </summary>
    PlayFabServerBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabServerRevokeBansResult;

/// <summary>
/// PlayFabServerRevokeInventoryItem data model.
/// </summary>
typedef struct PlayFabServerRevokeInventoryItem
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

} PlayFabServerRevokeInventoryItem;

/// <summary>
/// PlayFabServerRevokeInventoryItemRequest data model. In cases where the inventory item in question
/// is a "crate", and the items it contained have already been dispensed, this will not revoke access
/// or otherwise remove the items which were dispensed. Request object for PlayFabServerRevokeInventoryItemAsync.
/// </summary>
typedef struct PlayFabServerRevokeInventoryItemRequest
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

} PlayFabServerRevokeInventoryItemRequest;

/// <summary>
/// PlayFabServerRevokeInventoryItemsRequest data model. In cases where the inventory item in question
/// is a "crate", and the items it contained have already been dispensed, this will not revoke access
/// or otherwise remove the items which were dispensed. Request object for PlayFabServerRevokeInventoryItemsAsync.
/// </summary>
typedef struct PlayFabServerRevokeInventoryItemsRequest
{
    /// <summary>
    /// Array of player items to revoke, between 1 and 25 items.
    /// </summary>
    PlayFabServerRevokeInventoryItem const* const* items;

    /// <summary>
    /// Count of items
    /// </summary>
    uint32_t itemsCount;

} PlayFabServerRevokeInventoryItemsRequest;

/// <summary>
/// PlayFabServerRevokeItemError data model.
/// </summary>
typedef struct PlayFabServerRevokeItemError
{
    /// <summary>
    /// (Optional) Specific error that was encountered.
    /// </summary>
    PlayFabServerGenericErrorCodes const* error;

    /// <summary>
    /// (Optional) Item information that failed to be revoked.
    /// </summary>
    PlayFabServerRevokeInventoryItem const* item;

} PlayFabServerRevokeItemError;

/// <summary>
/// PlayFabServerRevokeInventoryItemsResult data model. Result payload for PlayFabServerRevokeInventoryItemsAsync.
/// </summary>
typedef struct PlayFabServerRevokeInventoryItemsResult
{
    /// <summary>
    /// (Optional) Collection of any errors that occurred during processing.
    /// </summary>
    PlayFabServerRevokeItemError const* const* errors;

    /// <summary>
    /// Count of errors
    /// </summary>
    uint32_t errorsCount;

} PlayFabServerRevokeInventoryItemsResult;

/// <summary>
/// PlayFabServerSavePushNotificationTemplateRequest data model. Represents the save push notification
/// template request. Request object for PlayFabServerSavePushNotificationTemplateAsync.
/// </summary>
typedef struct PlayFabServerSavePushNotificationTemplateRequest
{
    /// <summary>
    /// (Optional) Android JSON for the notification template.
    /// </summary>
    const char* androidPayload;

    /// <summary>
    /// (Optional) Id of the push notification template.
    /// </summary>
    const char* id;

    /// <summary>
    /// (Optional) IOS JSON for the notification template.
    /// </summary>
    const char* iOSPayload;

    /// <summary>
    /// (Optional) Dictionary of localized push notification templates with the language as the key.
    /// </summary>
    struct PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry const* localizedPushNotificationTemplates;

    /// <summary>
    /// Count of localizedPushNotificationTemplates
    /// </summary>
    uint32_t localizedPushNotificationTemplatesCount;

    /// <summary>
    /// Name of the push notification template.
    /// </summary>
    const char* name;

} PlayFabServerSavePushNotificationTemplateRequest;

/// <summary>
/// PlayFabServerSavePushNotificationTemplateResult data model. Represents the save push notification
/// template result. Result payload for PlayFabServerSavePushNotificationTemplateAsync.
/// </summary>
typedef struct PlayFabServerSavePushNotificationTemplateResult
{
    /// <summary>
    /// (Optional) Id of the push notification template that was saved.
    /// </summary>
    const char* pushNotificationTemplateId;

} PlayFabServerSavePushNotificationTemplateResult;

/// <summary>
/// PlayFabServerSendCustomAccountRecoveryEmailRequest data model. PlayFab accounts which have valid
/// email address or username will be able to receive a password reset email using this API.The email
/// sent must be an account recovery email template. The username or email can be passed in to send the
/// email. Request object for PlayFabServerSendCustomAccountRecoveryEmailAsync.
/// </summary>
typedef struct PlayFabServerSendCustomAccountRecoveryEmailRequest
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
    /// (Optional) User email address attached to their account.
    /// </summary>
    const char* email;

    /// <summary>
    /// The email template id of the account recovery email template to send.
    /// </summary>
    const char* emailTemplateId;

    /// <summary>
    /// (Optional) The user's username requesting an account recovery.
    /// </summary>
    const char* username;

} PlayFabServerSendCustomAccountRecoveryEmailRequest;

/// <summary>
/// PlayFabServerSendEmailFromTemplateRequest data model. Sends an email for only players that have contact
/// emails associated with them. Takes in an email template ID specifyingthe email template to send.
/// Request object for PlayFabServerSendEmailFromTemplateAsync.
/// </summary>
typedef struct PlayFabServerSendEmailFromTemplateRequest
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
    /// The email template id of the email template to send.
    /// </summary>
    const char* emailTemplateId;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerSendEmailFromTemplateRequest;

/// <summary>
/// PlayFabServerSendPushNotificationFromTemplateRequest data model. Represents the request for sending
/// a push notification template to a recipient. Request object for PlayFabServerSendPushNotificationFromTemplateAsync.
/// </summary>
typedef struct PlayFabServerSendPushNotificationFromTemplateRequest
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
    /// Id of the push notification template.
    /// </summary>
    const char* pushNotificationTemplateId;

    /// <summary>
    /// PlayFabId of the push notification recipient.
    /// </summary>
    const char* recipient;

} PlayFabServerSendPushNotificationFromTemplateRequest;

/// <summary>
/// PlayFabServerSendPushNotificationRequest data model. Request object for PlayFabServerSendPushNotificationAsync.
/// </summary>
typedef struct PlayFabServerSendPushNotificationRequest
{
    /// <summary>
    /// (Optional) Allows you to provide precisely formatted json to target devices. This is an advanced
    /// feature, allowing you to deliver to custom plugin logic, fields, or functionality not natively
    /// supported by PlayFab.
    /// </summary>
    PlayFabServerAdvancedPushPlatformMsg const* const* advancedPlatformDelivery;

    /// <summary>
    /// Count of advancedPlatformDelivery
    /// </summary>
    uint32_t advancedPlatformDeliveryCount;

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
    /// (Optional) Text of message to send.
    /// </summary>
    const char* message;

    /// <summary>
    /// (Optional) Defines all possible push attributes like message, title, icon, etc. Some parameters
    /// are device specific - please see the PushNotificationPackage documentation for details.
    /// </summary>
    PlayFabServerPushNotificationPackage const* package;

    /// <summary>
    /// PlayFabId of the recipient of the push notification.
    /// </summary>
    const char* recipient;

    /// <summary>
    /// (Optional) Subject of message to send (may not be displayed in all platforms).
    /// </summary>
    const char* subject;

    /// <summary>
    /// (Optional) Target Platforms that should receive the Message or Package. If omitted, we will send
    /// to all available platforms.
    /// </summary>
    PlayFabPushNotificationPlatform const* targetPlatforms;

    /// <summary>
    /// Count of targetPlatforms
    /// </summary>
    uint32_t targetPlatformsCount;

} PlayFabServerSendPushNotificationRequest;

/// <summary>
/// PlayFabServerSetFriendTagsRequest data model. This operation is not additive. It will completely
/// replace the tag list for the specified user. Please note that only users in the PlayFab friends list
/// can be assigned tags. Attempting to set a tag on a friend only included in the friends list from a
/// social site integration (such as Facebook or Steam) will return the AccountNotFound error. Request
/// object for PlayFabServerSetFriendTagsAsync.
/// </summary>
typedef struct PlayFabServerSetFriendTagsRequest
{
    /// <summary>
    /// PlayFab identifier of the friend account to which the tag(s) should be applied.
    /// </summary>
    const char* friendPlayFabId;

    /// <summary>
    /// PlayFab identifier of the player whose friend is to be updated.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Array of tags to set on the friend account.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PlayFabServerSetFriendTagsRequest;

/// <summary>
/// PlayFabServerSetGameServerInstanceDataRequest data model. Request object for PlayFabServerSetGameServerInstanceDataAsync.
/// </summary>
typedef struct PlayFabServerSetGameServerInstanceDataRequest
{
    /// <summary>
    /// Custom data to set for the specified game server instance.
    /// </summary>
    const char* gameServerData;

    /// <summary>
    /// Unique identifier of the Game Instance to be updated, in decimal format.
    /// </summary>
    const char* lobbyId;

} PlayFabServerSetGameServerInstanceDataRequest;

/// <summary>
/// PlayFabServerSetGameServerInstanceStateRequest data model. Request object for PlayFabServerSetGameServerInstanceStateAsync.
/// </summary>
typedef struct PlayFabServerSetGameServerInstanceStateRequest
{
    /// <summary>
    /// Unique identifier of the Game Instance to be updated, in decimal format.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// State to set for the specified game server instance.
    /// </summary>
    PlayFabServerGameInstanceState state;

} PlayFabServerSetGameServerInstanceStateRequest;

/// <summary>
/// PlayFabServerSetGameServerInstanceTagsRequest data model. Request object for PlayFabServerSetGameServerInstanceTagsAsync.
/// </summary>
typedef struct PlayFabServerSetGameServerInstanceTagsRequest
{
    /// <summary>
    /// Unique identifier of the Game Server Instance to be updated.
    /// </summary>
    const char* lobbyId;

    /// <summary>
    /// Tags to set for the specified Game Server Instance. Note that this is the complete list of tags
    /// to be associated with the Game Server Instance.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PlayFabServerSetGameServerInstanceTagsRequest;

/// <summary>
/// PlayFabServerSetPlayerSecretRequest data model. APIs that require signatures require that the player
/// have a configured Player Secret Key that is used to sign all requests. Players that don't have a secret
/// will be blocked from making API calls until it is configured. To create a signature header add a SHA256
/// hashed string containing UTF8 encoded JSON body as it will be sent to the server, the current time
/// in UTC formatted to ISO 8601, and the players secret formatted as 'body.date.secret'. Place the resulting
/// hash into the header X-PlayFab-Signature, along with a header X-PlayFab-Timestamp of the same UTC
/// timestamp used in the signature. Request object for PlayFabServerSetPlayerSecretAsync.
/// </summary>
typedef struct PlayFabServerSetPlayerSecretRequest
{
    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerSetPlayerSecretRequest;

/// <summary>
/// PlayFabServerSetPublisherDataRequest data model. This API is designed to store publisher-specific
/// values which can be read, but not written to, by the client. This data is shared across all titles
/// assigned to a particular publisher, and can be used for cross-game coordination. Only titles assigned
/// to a publisher can use this API. This operation is additive. If a Key does not exist in the current
/// dataset, it will be added with the specified Value. If it already exists, the Value for that key will
/// be overwritten with the new Value. For more information email helloplayfab@microsoft.com. Request
/// object for PlayFabServerSetPublisherDataAsync.
/// </summary>
typedef struct PlayFabServerSetPublisherDataRequest
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

} PlayFabServerSetPublisherDataRequest;

/// <summary>
/// PlayFabServerSetTitleDataRequest data model. This API is designed to store title specific values
/// which can be read, but not written to, by the client. For example, a developer could choose to store
/// values which modify the user experience, such as enemy spawn rates, weapon strengths, movement speeds,
/// etc. This allows a developer to update the title without the need to create, test, and ship a new
/// build. This operation is additive. If a Key does not exist in the current dataset, it will be added
/// with the specified Value. If it already exists, the Value for that key will be overwritten with the
/// new Value. Request object for PlayFabServerSetTitleDataAsync and PlayFabServerSetTitleInternalDataAsync.
/// </summary>
typedef struct PlayFabServerSetTitleDataRequest
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

} PlayFabServerSetTitleDataRequest;

/// <summary>
/// PlayFabServerStatisticUpdate data model.
/// </summary>
typedef struct PlayFabServerStatisticUpdate
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

} PlayFabServerStatisticUpdate;

/// <summary>
/// PlayFabServerSubtractCharacterVirtualCurrencyRequest data model. Request object for PlayFabServerSubtractCharacterVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabServerSubtractCharacterVirtualCurrencyRequest
{
    /// <summary>
    /// Amount to be subtracted from the user balance of the specified virtual currency.
    /// </summary>
    int32_t amount;

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

    /// <summary>
    /// Name of the virtual currency which is to be decremented.
    /// </summary>
    const char* virtualCurrency;

} PlayFabServerSubtractCharacterVirtualCurrencyRequest;

/// <summary>
/// PlayFabServerSubtractUserVirtualCurrencyRequest data model. Request object for PlayFabServerSubtractUserVirtualCurrencyAsync.
/// </summary>
typedef struct PlayFabServerSubtractUserVirtualCurrencyRequest
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

} PlayFabServerSubtractUserVirtualCurrencyRequest;

/// <summary>
/// PlayFabServerUnlinkPSNAccountRequest data model. Request object for PlayFabServerUnlinkPSNAccountAsync.
/// </summary>
typedef struct PlayFabServerUnlinkPSNAccountRequest
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

} PlayFabServerUnlinkPSNAccountRequest;

/// <summary>
/// PlayFabServerUnlinkServerCustomIdRequest data model. Request object for PlayFabServerUnlinkServerCustomIdAsync.
/// </summary>
typedef struct PlayFabServerUnlinkServerCustomIdRequest
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
    /// Unique PlayFab identifier.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Unique server custom identifier for this player.
    /// </summary>
    const char* serverCustomId;

} PlayFabServerUnlinkServerCustomIdRequest;

/// <summary>
/// PlayFabServerUnlinkXboxAccountRequest data model. Request object for PlayFabServerUnlinkXboxAccountAsync.
/// </summary>
typedef struct PlayFabServerUnlinkXboxAccountRequest
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
    /// Unique PlayFab identifier for a user, or null if no PlayFab account is linked to the Xbox Live
    /// identifier.
    /// </summary>
    const char* playFabId;

} PlayFabServerUnlinkXboxAccountRequest;

/// <summary>
/// PlayFabServerUnlockContainerInstanceRequest data model. Specify the container and optionally the
/// catalogVersion for the container to open. Request object for PlayFabServerUnlockContainerInstanceAsync.
/// </summary>
typedef struct PlayFabServerUnlockContainerInstanceRequest
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

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerUnlockContainerInstanceRequest;

/// <summary>
/// PlayFabServerUnlockContainerItemRequest data model. Specify the type of container to open and optionally
/// the catalogVersion for the container to open. Request object for PlayFabServerUnlockContainerItemAsync.
/// </summary>
typedef struct PlayFabServerUnlockContainerItemRequest
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

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerUnlockContainerItemRequest;

/// <summary>
/// PlayFabServerUnlockContainerItemResult data model. The items and vc found within the container. These
/// will be added and stacked in your inventory as appropriate. Result payload for PlayFabServerUnlockContainerInstanceAsync
/// and PlayFabServerUnlockContainerItemAsync.
/// </summary>
typedef struct PlayFabServerUnlockContainerItemResult
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

} PlayFabServerUnlockContainerItemResult;

/// <summary>
/// PlayFabServerUpdateAvatarUrlRequest data model. Request object for PlayFabServerUpdateAvatarUrlAsync.
/// </summary>
typedef struct PlayFabServerUpdateAvatarUrlRequest
{
    /// <summary>
    /// URL of the avatar image. If empty, it removes the existing avatar URL.
    /// </summary>
    const char* imageUrl;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerUpdateAvatarUrlRequest;

/// <summary>
/// PlayFabServerUpdateBanRequest data model. Represents a single update ban request.
/// </summary>
typedef struct PlayFabServerUpdateBanRequest
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

} PlayFabServerUpdateBanRequest;

/// <summary>
/// PlayFabServerUpdateBansRequest data model. For each ban, only updates the values that are set. Leave
/// any value to null for no change. If a ban could not be found, the rest are still applied. Returns
/// information about applied updates only. Request object for PlayFabServerUpdateBansAsync.
/// </summary>
typedef struct PlayFabServerUpdateBansRequest
{
    /// <summary>
    /// List of bans to be updated. Maximum 100.
    /// </summary>
    PlayFabServerUpdateBanRequest const* const* bans;

    /// <summary>
    /// Count of bans
    /// </summary>
    uint32_t bansCount;

} PlayFabServerUpdateBansRequest;

/// <summary>
/// PlayFabServerUpdateBansResult data model. Result payload for PlayFabServerUpdateBansAsync.
/// </summary>
typedef struct PlayFabServerUpdateBansResult
{
    /// <summary>
    /// (Optional) Information on the bans that were updated.
    /// </summary>
    PlayFabServerBanInfo const* const* banData;

    /// <summary>
    /// Count of banData
    /// </summary>
    uint32_t banDataCount;

} PlayFabServerUpdateBansResult;

/// <summary>
/// PlayFabServerUpdateCharacterDataRequest data model. This function performs an additive update of
/// the arbitrary JSON object containing the custom data for the user. In updating the custom data object,
/// keys which already exist in the object will have their values overwritten, while keys with null values
/// will be removed. No other key-value pairs will be changed apart from those specified in the call.
/// Request object for PlayFabServerUpdateCharacterDataAsync, PlayFabServerUpdateCharacterInternalDataAsync,
/// and PlayFabServerUpdateCharacterReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerUpdateCharacterDataRequest
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

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerUpdateCharacterDataRequest;

/// <summary>
/// PlayFabServerUpdateCharacterDataResult data model. Result payload for PlayFabServerUpdateCharacterDataAsync,
/// PlayFabServerUpdateCharacterInternalDataAsync, and PlayFabServerUpdateCharacterReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerUpdateCharacterDataResult
{
    /// <summary>
    /// Indicates the current version of the data that has been set. This is incremented with every set
    /// call for that type of data (read-only, internal, etc). This version can be provided in Get calls
    /// to find updated data.
    /// </summary>
    uint32_t dataVersion;

} PlayFabServerUpdateCharacterDataResult;

/// <summary>
/// PlayFabServerUpdateCharacterStatisticsRequest data model. Character statistics are similar to user
/// statistics in that they are numeric values which may only be updated by a server operation, in order
/// to minimize the opportunity for unauthorized changes. In addition to being available for use by the
/// title, the statistics are used for all leaderboard operations in PlayFab. Request object for PlayFabServerUpdateCharacterStatisticsAsync.
/// </summary>
typedef struct PlayFabServerUpdateCharacterStatisticsRequest
{
    /// <summary>
    /// Unique PlayFab assigned ID for a specific character owned by a user.
    /// </summary>
    const char* characterId;

    /// <summary>
    /// (Optional) Statistics to be updated with the provided values.
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

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PlayFabServerUpdateCharacterStatisticsRequest;

/// <summary>
/// PlayFabServerUpdatePlayerStatisticsRequest data model. This operation is additive. Statistics not
/// currently defined will be added, while those already defined will be updated with the given values.
/// All other user statistics will remain unchanged. Request object for PlayFabServerUpdatePlayerStatisticsAsync.
/// </summary>
typedef struct PlayFabServerUpdatePlayerStatisticsRequest
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
    /// (Optional) Indicates whether the statistics provided should be set, regardless of the aggregation
    /// method set on the statistic. Default is false.
    /// </summary>
    bool const* forceUpdate;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// Statistics to be updated with the provided values.
    /// </summary>
    PlayFabServerStatisticUpdate const* const* statistics;

    /// <summary>
    /// Count of statistics
    /// </summary>
    uint32_t statisticsCount;

} PlayFabServerUpdatePlayerStatisticsRequest;

/// <summary>
/// PlayFabServerUpdateSharedGroupDataRequest data model. Note that in the case of multiple calls to
/// write to the same shared group data keys, the last write received by the PlayFab service will determine
/// the value available to subsequent read operations. For scenarios requiring coordination of data updates,
/// it is recommended that titles make use of user data with read permission set to public, or a combination
/// of user data and shared group data. Request object for PlayFabServerUpdateSharedGroupDataAsync.
/// </summary>
typedef struct PlayFabServerUpdateSharedGroupDataRequest
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

} PlayFabServerUpdateSharedGroupDataRequest;

/// <summary>
/// PlayFabServerUpdateUserDataRequest data model. This function performs an additive update of the arbitrary
/// JSON object containing the custom data for the user. In updating the custom data object, keys which
/// already exist in the object will have their values overwritten, while keys with null values will be
/// removed. No other key-value pairs will be changed apart from those specified in the call. Request
/// object for PlayFabServerUpdateUserDataAsync, PlayFabServerUpdateUserPublisherDataAsync, PlayFabServerUpdateUserPublisherReadOnlyDataAsync,
/// and PlayFabServerUpdateUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerUpdateUserDataRequest
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

} PlayFabServerUpdateUserDataRequest;

/// <summary>
/// PlayFabServerUpdateUserDataResult data model. Result payload for PlayFabServerUpdateUserDataAsync,
/// PlayFabServerUpdateUserInternalDataAsync, PlayFabServerUpdateUserPublisherDataAsync, PlayFabServerUpdateUserPublisherInternalDataAsync,
/// PlayFabServerUpdateUserPublisherReadOnlyDataAsync, and PlayFabServerUpdateUserReadOnlyDataAsync.
/// </summary>
typedef struct PlayFabServerUpdateUserDataResult
{
    /// <summary>
    /// Indicates the current version of the data that has been set. This is incremented with every set
    /// call for that type of data (read-only, internal, etc). This version can be provided in Get calls
    /// to find updated data.
    /// </summary>
    uint32_t dataVersion;

} PlayFabServerUpdateUserDataResult;

/// <summary>
/// PlayFabServerUpdateUserInternalDataRequest data model. This function performs an additive update
/// of the arbitrary JSON object containing the custom data for the user. In updating the custom data
/// object, keys which already exist in the object will have their values overwritten, keys with null
/// values will be removed. No other key-value pairs will be changed apart from those specified in the
/// call. Request object for PlayFabServerUpdateUserInternalDataAsync and PlayFabServerUpdateUserPublisherInternalDataAsync.
/// </summary>
typedef struct PlayFabServerUpdateUserInternalDataRequest
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

} PlayFabServerUpdateUserInternalDataRequest;

/// <summary>
/// PlayFabServerUpdateUserInventoryItemDataRequest data model. This function performs an additive update
/// of the arbitrary JSON object containing the custom data for the item instance which belongs to the
/// specified user. In updating the custom data object, keys which already exist in the object will have
/// their values overwritten, while keys with null values will be removed. No other key-value pairs will
/// be changed apart from those specified in the call. Request object for PlayFabServerUpdateUserInventoryItemCustomDataAsync.
/// </summary>
typedef struct PlayFabServerUpdateUserInventoryItemDataRequest
{
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
    /// (Optional) Key-value pairs to be written to the custom data. Note that keys are trimmed of whitespace,
    /// are limited in size, and may not begin with a '!' character or be null.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* data;

    /// <summary>
    /// Count of data
    /// </summary>
    uint32_t dataCount;

    /// <summary>
    /// Unique PlayFab assigned instance identifier of the item.
    /// </summary>
    const char* itemInstanceId;

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

} PlayFabServerUpdateUserInventoryItemDataRequest;

/// <summary>
/// PlayFabServerWriteEventResponse data model. Result payload for PlayFabServerWriteCharacterEventAsync,
/// PlayFabServerWritePlayerEventAsync, and PlayFabServerWriteTitleEventAsync.
/// </summary>
typedef struct PlayFabServerWriteEventResponse
{
    /// <summary>
    /// (Optional) The unique identifier of the event. The values of this identifier consist of ASCII
    /// characters and are not constrained to any particular format.
    /// </summary>
    const char* eventId;

} PlayFabServerWriteEventResponse;

/// <summary>
/// PlayFabServerWriteServerCharacterEventRequest data model. This API is designed to write a multitude
/// of different event types into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary
/// key-value pairs to describe any character-based event. The created event will be locked to the authenticated
/// title. . Request object for PlayFabServerWriteCharacterEventAsync.
/// </summary>
typedef struct PlayFabServerWriteServerCharacterEventRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) The time (in UTC) associated with this event. The value defaults to the current time.
    /// </summary>
    time_t const* timestamp;

} PlayFabServerWriteServerCharacterEventRequest;

/// <summary>
/// PlayFabServerWriteServerPlayerEventRequest data model. This API is designed to write a multitude
/// of different event types into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary
/// key-value pairs to describe any player-based event. The created event will be locked to the authenticated
/// title. . Request object for PlayFabServerWritePlayerEventAsync.
/// </summary>
typedef struct PlayFabServerWriteServerPlayerEventRequest
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
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

    /// <summary>
    /// (Optional) The time (in UTC) associated with this event. The value defaults to the current time.
    /// </summary>
    time_t const* timestamp;

} PlayFabServerWriteServerPlayerEventRequest;

/// <summary>
/// PlayFabServerWriteTitleEventRequest data model. This API is designed to write a multitude of different
/// event types into PlayStream. It supports a flexible JSON schema, which allowsfor arbitrary key-value
/// pairs to describe any title-based event. The created event will be locked to the authenticated title.
/// . Request object for PlayFabServerWriteTitleEventAsync.
/// </summary>
typedef struct PlayFabServerWriteTitleEventRequest
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

} PlayFabServerWriteTitleEventRequest;

/// <summary>
/// Dictionary entry for an associative array with PlayFabServerRandomResultTableListing values.
/// </summary>
typedef struct PlayFabServerRandomResultTableListingDictionaryEntry
{
    const char* key;
    PlayFabServerRandomResultTableListing* value;
} PlayFabServerRandomResultTableListingDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabServerSharedGroupDataRecord values.
/// </summary>
typedef struct PlayFabServerSharedGroupDataRecordDictionaryEntry
{
    const char* key;
    PlayFabServerSharedGroupDataRecord* value;
} PlayFabServerSharedGroupDataRecordDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabServerPlayerLocation values.
/// </summary>
typedef struct PlayFabServerPlayerLocationDictionaryEntry
{
    const char* key;
    PlayFabServerPlayerLocation* value;
} PlayFabServerPlayerLocationDictionaryEntry;

/// <summary>
/// Dictionary entry for an associative array with PlayFabServerLocalizedPushNotificationProperties values.
/// </summary>
typedef struct PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry
{
    const char* key;
    PlayFabServerLocalizedPushNotificationProperties* value;
} PlayFabServerLocalizedPushNotificationPropertiesDictionaryEntry;

#pragma pop_macro("IN")

}
