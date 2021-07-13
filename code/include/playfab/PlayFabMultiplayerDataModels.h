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
/// AzureRegion enum.
/// </summary>
enum class PlayFabMultiplayerAzureRegion : uint32_t
{
    AustraliaEast,
    AustraliaSoutheast,
    BrazilSouth,
    CentralUs,
    EastAsia,
    EastUs,
    EastUs2,
    JapanEast,
    JapanWest,
    NorthCentralUs,
    NorthEurope,
    SouthCentralUs,
    SoutheastAsia,
    WestEurope,
    WestUs,
    SouthAfricaNorth,
    WestCentralUs,
    KoreaCentral,
    FranceCentral,
    WestUs2,
    CentralIndia,
    UaeNorth,
    UkSouth
};

/// <summary>
/// AzureVmFamily enum.
/// </summary>
enum class PlayFabMultiplayerAzureVmFamily : uint32_t
{
    A,
    Av2,
    Dv2,
    Dv3,
    F,
    Fsv2,
    Dasv4,
    Dav4,
    Eav4,
    Easv4,
    Ev4,
    Esv4,
    Dsv3,
    Dsv2,
    NCasT4_v3
};

/// <summary>
/// AzureVmSize enum.
/// </summary>
enum class PlayFabMultiplayerAzureVmSize : uint32_t
{
    Standard_A1,
    Standard_A2,
    Standard_A3,
    Standard_A4,
    Standard_A1_v2,
    Standard_A2_v2,
    Standard_A4_v2,
    Standard_A8_v2,
    Standard_D1_v2,
    Standard_D2_v2,
    Standard_D3_v2,
    Standard_D4_v2,
    Standard_D5_v2,
    Standard_D2_v3,
    Standard_D4_v3,
    Standard_D8_v3,
    Standard_D16_v3,
    Standard_F1,
    Standard_F2,
    Standard_F4,
    Standard_F8,
    Standard_F16,
    Standard_F2s_v2,
    Standard_F4s_v2,
    Standard_F8s_v2,
    Standard_F16s_v2,
    Standard_D2as_v4,
    Standard_D4as_v4,
    Standard_D8as_v4,
    Standard_D16as_v4,
    Standard_D2a_v4,
    Standard_D4a_v4,
    Standard_D8a_v4,
    Standard_D16a_v4,
    Standard_E2a_v4,
    Standard_E4a_v4,
    Standard_E8a_v4,
    Standard_E16a_v4,
    Standard_E2as_v4,
    Standard_E4as_v4,
    Standard_E8as_v4,
    Standard_E16as_v4,
    Standard_D2s_v3,
    Standard_D4s_v3,
    Standard_D8s_v3,
    Standard_D16s_v3,
    Standard_DS1_v2,
    Standard_DS2_v2,
    Standard_DS3_v2,
    Standard_DS4_v2,
    Standard_DS5_v2,
    Standard_NC4as_T4_v3
};

/// <summary>
/// CancellationReason enum.
/// </summary>
enum class PlayFabMultiplayerCancellationReason : uint32_t
{
    Requested,
    Internal,
    Timeout
};

/// <summary>
/// ContainerFlavor enum.
/// </summary>
enum class PlayFabMultiplayerContainerFlavor : uint32_t
{
    ManagedWindowsServerCore,
    CustomLinux,
    ManagedWindowsServerCorePreview,
    Invalid
};

/// <summary>
/// OsPlatform enum.
/// </summary>
enum class PlayFabMultiplayerOsPlatform : uint32_t
{
    Windows,
    Linux
};

/// <summary>
/// ProtocolType enum.
/// </summary>
enum class PlayFabMultiplayerProtocolType : uint32_t
{
    TCP,
    UDP
};

/// <summary>
/// ServerType enum.
/// </summary>
enum class PlayFabMultiplayerServerType : uint32_t
{
    Container,
    Process
};

/// <summary>
/// TitleMultiplayerServerEnabledStatus enum.
/// </summary>
enum class PlayFabMultiplayerTitleMultiplayerServerEnabledStatus : uint32_t
{
    Initializing,
    Enabled,
    Disabled
};

/// <summary>
/// PlayFabMultiplayerAssetReference data model.
/// </summary>
typedef struct PlayFabMultiplayerAssetReference
{
    /// <summary>
    /// (Optional) The asset's file name. This is a filename with the .zip, .tar, or .tar.gz extension.
    /// </summary>
    const char* fileName;

    /// <summary>
    /// (Optional) The asset's mount path.
    /// </summary>
    const char* mountPath;

} PlayFabMultiplayerAssetReference;

/// <summary>
/// PlayFabMultiplayerAssetReferenceParams data model.
/// </summary>
typedef struct PlayFabMultiplayerAssetReferenceParams
{
    /// <summary>
    /// The asset's file name.
    /// </summary>
    const char* fileName;

    /// <summary>
    /// (Optional) The asset's mount path.
    /// </summary>
    const char* mountPath;

} PlayFabMultiplayerAssetReferenceParams;

/// <summary>
/// PlayFabMultiplayerAssetSummary data model.
/// </summary>
typedef struct PlayFabMultiplayerAssetSummary
{
    /// <summary>
    /// (Optional) The asset's file name. This is a filename with the .zip, .tar, or .tar.gz extension.
    /// </summary>
    const char* fileName;

    /// <summary>
    /// (Optional) The metadata associated with the asset.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

} PlayFabMultiplayerAssetSummary;

/// <summary>
/// PlayFabMultiplayerBuildSelectionCriterion data model.
/// </summary>
typedef struct PlayFabMultiplayerBuildSelectionCriterion
{
    /// <summary>
    /// (Optional) Dictionary of build ids and their respective weights for distribution of allocation
    /// requests.
    /// </summary>
    struct PlayFabUint32DictionaryEntry const* buildWeightDistribution;

    /// <summary>
    /// Count of buildWeightDistribution
    /// </summary>
    uint32_t buildWeightDistributionCount;

} PlayFabMultiplayerBuildSelectionCriterion;

/// <summary>
/// PlayFabMultiplayerBuildAliasDetailsResponse data model. Result payload for PlayFabMultiplayerCreateBuildAliasAsync,
/// PlayFabMultiplayerGetBuildAliasAsync, and PlayFabMultiplayerUpdateBuildAliasAsync.
/// </summary>
typedef struct PlayFabMultiplayerBuildAliasDetailsResponse
{
    /// <summary>
    /// (Optional) The guid string alias Id of the alias to be created or updated.
    /// </summary>
    const char* aliasId;

    /// <summary>
    /// (Optional) The alias name.
    /// </summary>
    const char* aliasName;

    /// <summary>
    /// (Optional) Array of build selection criteria.
    /// </summary>
    PlayFabMultiplayerBuildSelectionCriterion const* const* buildSelectionCriteria;

    /// <summary>
    /// Count of buildSelectionCriteria
    /// </summary>
    uint32_t buildSelectionCriteriaCount;

} PlayFabMultiplayerBuildAliasDetailsResponse;

/// <summary>
/// PlayFabMultiplayerBuildAliasParams data model.
/// </summary>
typedef struct PlayFabMultiplayerBuildAliasParams
{
    /// <summary>
    /// The guid string alias ID to use for the request.
    /// </summary>
    const char* aliasId;

} PlayFabMultiplayerBuildAliasParams;

/// <summary>
/// PlayFabMultiplayerCurrentServerStats data model.
/// </summary>
typedef struct PlayFabMultiplayerCurrentServerStats
{
    /// <summary>
    /// The number of active multiplayer servers.
    /// </summary>
    int32_t active;

    /// <summary>
    /// The number of multiplayer servers still downloading game resources (such as assets).
    /// </summary>
    int32_t propping;

    /// <summary>
    /// The number of standingby multiplayer servers.
    /// </summary>
    int32_t standingBy;

    /// <summary>
    /// The total number of multiplayer servers.
    /// </summary>
    int32_t total;

} PlayFabMultiplayerCurrentServerStats;

/// <summary>
/// PlayFabMultiplayerDynamicStandbyThreshold data model.
/// </summary>
typedef struct PlayFabMultiplayerDynamicStandbyThreshold
{
    /// <summary>
    /// When the trigger threshold is reached, multiply by this value.
    /// </summary>
    double multiplier;

    /// <summary>
    /// The multiplier will be applied when the actual standby divided by target standby floor is less
    /// than this value.
    /// </summary>
    double triggerThresholdPercentage;

} PlayFabMultiplayerDynamicStandbyThreshold;

/// <summary>
/// PlayFabMultiplayerDynamicStandbySettings data model.
/// </summary>
typedef struct PlayFabMultiplayerDynamicStandbySettings
{
    /// <summary>
    /// (Optional) List of auto standing by trigger values and corresponding standing by multiplier.
    /// Defaults to 1.5X at 50%, 3X at 25%, and 4X at 5%.
    /// </summary>
    PlayFabMultiplayerDynamicStandbyThreshold const* const* dynamicFloorMultiplierThresholds;

    /// <summary>
    /// Count of dynamicFloorMultiplierThresholds
    /// </summary>
    uint32_t dynamicFloorMultiplierThresholdsCount;

    /// <summary>
    /// When true, dynamic standby will be enabled.
    /// </summary>
    bool isEnabled;

    /// <summary>
    /// (Optional) The time it takes to reduce target standing by to configured floor value after an
    /// increase. Defaults to 30 minutes.
    /// </summary>
    int32_t const* rampDownSeconds;

} PlayFabMultiplayerDynamicStandbySettings;

/// <summary>
/// PlayFabMultiplayerSchedule data model.
/// </summary>
typedef struct PlayFabMultiplayerSchedule
{
    /// <summary>
    /// (Optional) A short description about this schedule. For example, "Game launch on July 15th".
    /// </summary>
    const char* description;

    /// <summary>
    /// The date and time in UTC at which the schedule ends. If IsRecurringWeekly is true, this schedule
    /// will keep renewing for future weeks until disabled or removed.
    /// </summary>
    time_t endTime;

    /// <summary>
    /// Disables the schedule.
    /// </summary>
    bool isDisabled;

    /// <summary>
    /// If true, the StartTime and EndTime will get renewed every week.
    /// </summary>
    bool isRecurringWeekly;

    /// <summary>
    /// The date and time in UTC at which the schedule starts.
    /// </summary>
    time_t startTime;

    /// <summary>
    /// The standby target to maintain for the duration of the schedule.
    /// </summary>
    int32_t targetStandby;

} PlayFabMultiplayerSchedule;

/// <summary>
/// PlayFabMultiplayerScheduledStandbySettings data model.
/// </summary>
typedef struct PlayFabMultiplayerScheduledStandbySettings
{
    /// <summary>
    /// When true, scheduled standby will be enabled.
    /// </summary>
    bool isEnabled;

    /// <summary>
    /// (Optional) A list of non-overlapping schedules.
    /// </summary>
    PlayFabMultiplayerSchedule const* const* scheduleList;

    /// <summary>
    /// Count of scheduleList
    /// </summary>
    uint32_t scheduleListCount;

} PlayFabMultiplayerScheduledStandbySettings;

/// <summary>
/// PlayFabMultiplayerBuildRegion data model.
/// </summary>
typedef struct PlayFabMultiplayerBuildRegion
{
    /// <summary>
    /// (Optional) The current multiplayer server stats for the region.
    /// </summary>
    PlayFabMultiplayerCurrentServerStats const* currentServerStats;

    /// <summary>
    /// (Optional) Optional settings to control dynamic adjustment of standby target.
    /// </summary>
    PlayFabMultiplayerDynamicStandbySettings const* dynamicStandbySettings;

    /// <summary>
    /// The maximum number of multiplayer servers for the region.
    /// </summary>
    int32_t maxServers;

    /// <summary>
    /// (Optional) The build region.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) Optional settings to set the standby target to specified values during the supplied
    /// schedules.
    /// </summary>
    PlayFabMultiplayerScheduledStandbySettings const* scheduledStandbySettings;

    /// <summary>
    /// The target number of standby multiplayer servers for the region.
    /// </summary>
    int32_t standbyServers;

    /// <summary>
    /// (Optional) The status of multiplayer servers in the build region. Valid values are - Unknown,
    /// Initialized, Deploying, Deployed, Unhealthy, Deleting, Deleted.
    /// </summary>
    const char* status;

} PlayFabMultiplayerBuildRegion;

/// <summary>
/// PlayFabMultiplayerBuildRegionParams data model.
/// </summary>
typedef struct PlayFabMultiplayerBuildRegionParams
{
    /// <summary>
    /// (Optional) Optional settings to control dynamic adjustment of standby target. If not specified,
    /// dynamic standby is disabled.
    /// </summary>
    PlayFabMultiplayerDynamicStandbySettings const* dynamicStandbySettings;

    /// <summary>
    /// The maximum number of multiplayer servers for the region.
    /// </summary>
    int32_t maxServers;

    /// <summary>
    /// The build region.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) Optional settings to set the standby target to specified values during the supplied
    /// schedules.
    /// </summary>
    PlayFabMultiplayerScheduledStandbySettings const* scheduledStandbySettings;

    /// <summary>
    /// The number of standby multiplayer servers for the region.
    /// </summary>
    int32_t standbyServers;

} PlayFabMultiplayerBuildRegionParams;

/// <summary>
/// PlayFabMultiplayerBuildSummary data model.
/// </summary>
typedef struct PlayFabMultiplayerBuildSummary
{
    /// <summary>
    /// (Optional) The guid string build ID of the build.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The time the build was created in UTC.
    /// </summary>
    time_t const* creationTime;

    /// <summary>
    /// (Optional) The metadata of the build.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// (Optional) The configuration and status for each region in the build.
    /// </summary>
    PlayFabMultiplayerBuildRegion const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

} PlayFabMultiplayerBuildSummary;

/// <summary>
/// PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest data model. Cancels all tickets of
/// which the player is a member in a given queue that are not cancelled or matched. This API is useful
/// if you lose track of what tickets the player is a member of (if the title crashes for instance) and
/// want to "reset". The Entity field is optional if the caller is a player and defaults to that player.
/// Players may not cancel tickets for other people. The Entity field is required if the caller is a server
/// (authenticated as the title). Request object for PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest
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
    /// (Optional) The entity key of the player whose tickets should be canceled.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The name of the queue from which a player's tickets should be canceled.
    /// </summary>
    const char* queueName;

} PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest;

/// <summary>
/// PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest data model. Cancels all backfill
/// tickets of which the player is a member in a given queue that are not cancelled or matched. This API
/// is useful if you lose track of what tickets the player is a member of (if the server crashes for instance)
/// and want to "reset". Request object for PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest
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
    /// The entity key of the player whose backfill tickets should be canceled.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The name of the queue from which a player's backfill tickets should be canceled.
    /// </summary>
    const char* queueName;

} PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest;

/// <summary>
/// PlayFabMultiplayerCancelMatchmakingTicketRequest data model. Only servers and ticket members can
/// cancel a ticket. The ticket can be in five different states when it is cancelled. 1: the ticket is
/// waiting for members to join it, and it has not started matching. If the ticket is cancelled at this
/// stage, it will never match. 2: the ticket is matching. If the ticket is cancelled, it will stop matching.
/// 3: the ticket is matched. A matched ticket cannot be cancelled. 4: the ticket is already cancelled
/// and nothing happens. 5: the ticket is waiting for a server. If the ticket is cancelled, server allocation
/// will be stopped. A server may still be allocated due to a race condition, but that will not be reflected
/// in the ticket. There may be race conditions between the ticket getting matched and the client making
/// a cancellation request. The client must handle the possibility that the cancel request fails if a
/// match is found before the cancellation request is processed. We do not allow resubmitting a cancelled
/// ticket because players must consent to enter matchmaking again. Create a new ticket instead. Request
/// object for PlayFabMultiplayerCancelMatchmakingTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerCancelMatchmakingTicketRequest
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
    /// The name of the queue the ticket is in.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerCancelMatchmakingTicketRequest;

/// <summary>
/// PlayFabMultiplayerCancelServerBackfillTicketRequest data model. Only servers can cancel a backfill
/// ticket. The ticket can be in three different states when it is cancelled. 1: the ticket is matching.
/// If the ticket is cancelled, it will stop matching. 2: the ticket is matched. A matched ticket cannot
/// be cancelled. 3: the ticket is already cancelled and nothing happens. There may be race conditions
/// between the ticket getting matched and the server making a cancellation request. The server must handle
/// the possibility that the cancel request fails if a match is found before the cancellation request
/// is processed. We do not allow resubmitting a cancelled ticket. Create a new ticket instead. Request
/// object for PlayFabMultiplayerCancelServerBackfillTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerCancelServerBackfillTicketRequest
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
    /// The name of the queue the ticket is in.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerCancelServerBackfillTicketRequest;

/// <summary>
/// PlayFabMultiplayerCertificate data model.
/// </summary>
typedef struct PlayFabMultiplayerCertificate
{
    /// <summary>
    /// Base64 encoded string contents of the certificate.
    /// </summary>
    const char* base64EncodedValue;

    /// <summary>
    /// A name for the certificate. This is used to reference certificates in build configurations.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) If required for your PFX certificate, use this field to provide a password that will
    /// be used to install the certificate on the container.
    /// </summary>
    const char* password;

} PlayFabMultiplayerCertificate;

/// <summary>
/// PlayFabMultiplayerCertificateSummary data model.
/// </summary>
typedef struct PlayFabMultiplayerCertificateSummary
{
    /// <summary>
    /// (Optional) The name of the certificate.
    /// </summary>
    const char* name;

    /// <summary>
    /// (Optional) The thumbprint for the certificate.
    /// </summary>
    const char* thumbprint;

} PlayFabMultiplayerCertificateSummary;

/// <summary>
/// PlayFabMultiplayerConnectedPlayer data model.
/// </summary>
typedef struct PlayFabMultiplayerConnectedPlayer
{
    /// <summary>
    /// (Optional) The player ID of the player connected to the multiplayer server.
    /// </summary>
    const char* playerId;

} PlayFabMultiplayerConnectedPlayer;

/// <summary>
/// PlayFabMultiplayerContainerImageReference data model.
/// </summary>
typedef struct PlayFabMultiplayerContainerImageReference
{
    /// <summary>
    /// The container image name.
    /// </summary>
    const char* imageName;

    /// <summary>
    /// (Optional) The container tag.
    /// </summary>
    const char* tag;

} PlayFabMultiplayerContainerImageReference;

/// <summary>
/// PlayFabMultiplayerCoreCapacity data model.
/// </summary>
typedef struct PlayFabMultiplayerCoreCapacity
{
    /// <summary>
    /// The available core capacity for the (Region, VmFamily).
    /// </summary>
    int32_t available;

    /// <summary>
    /// (Optional) The AzureRegion.
    /// </summary>
    const char* region;

    /// <summary>
    /// The total core capacity for the (Region, VmFamily).
    /// </summary>
    int32_t total;

    /// <summary>
    /// (Optional) The AzureVmFamily.
    /// </summary>
    PlayFabMultiplayerAzureVmFamily const* vmFamily;

} PlayFabMultiplayerCoreCapacity;

/// <summary>
/// PlayFabMultiplayerCoreCapacityChange data model.
/// </summary>
typedef struct PlayFabMultiplayerCoreCapacityChange
{
    /// <summary>
    /// New quota core limit for the given vm family/region.
    /// </summary>
    int32_t newCoreLimit;

    /// <summary>
    /// Region to change.
    /// </summary>
    const char* region;

    /// <summary>
    /// Virtual machine family to change.
    /// </summary>
    PlayFabMultiplayerAzureVmFamily vmFamily;

} PlayFabMultiplayerCoreCapacityChange;

/// <summary>
/// PlayFabMultiplayerCreateBuildAliasRequest data model. Creates a multiplayer server build alias and
/// returns the created alias. Request object for PlayFabMultiplayerCreateBuildAliasAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateBuildAliasRequest
{
    /// <summary>
    /// The alias name.
    /// </summary>
    const char* aliasName;

    /// <summary>
    /// (Optional) Array of build selection criteria.
    /// </summary>
    PlayFabMultiplayerBuildSelectionCriterion const* const* buildSelectionCriteria;

    /// <summary>
    /// Count of buildSelectionCriteria
    /// </summary>
    uint32_t buildSelectionCriteriaCount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerCreateBuildAliasRequest;

/// <summary>
/// PlayFabMultiplayerGameCertificateReferenceParams data model.
/// </summary>
typedef struct PlayFabMultiplayerGameCertificateReferenceParams
{
    /// <summary>
    /// An alias for the game certificate. The game server will reference this alias via GSDK config
    /// to retrieve the game certificate. This alias is used as an identifier in game server code to allow
    /// a new certificate with different Name field to be uploaded without the need to change any game
    /// server code to reference the new Name.
    /// </summary>
    const char* gsdkAlias;

    /// <summary>
    /// The name of the game certificate. This name should match the name of a certificate that was previously
    /// uploaded to this title.
    /// </summary>
    const char* name;

} PlayFabMultiplayerGameCertificateReferenceParams;

/// <summary>
/// PlayFabMultiplayerLinuxInstrumentationConfiguration data model.
/// </summary>
typedef struct PlayFabMultiplayerLinuxInstrumentationConfiguration
{
    /// <summary>
    /// Designates whether Linux instrumentation configuration will be enabled for this Build.
    /// </summary>
    bool isEnabled;

} PlayFabMultiplayerLinuxInstrumentationConfiguration;

/// <summary>
/// PlayFabMultiplayerPort data model.
/// </summary>
typedef struct PlayFabMultiplayerPort
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
    PlayFabMultiplayerProtocolType protocol;

} PlayFabMultiplayerPort;

/// <summary>
/// PlayFabMultiplayerCreateBuildWithCustomContainerRequest data model. Creates a multiplayer server
/// build with a custom container and returns information about the build creation request. Request object
/// for PlayFabMultiplayerCreateBuildWithCustomContainerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateBuildWithCustomContainerRequest
{
    /// <summary>
    /// (Optional) When true, assets will not be copied for each server inside the VM. All serverswill
    /// run from the same set of assets, or will have the same assets mounted in the container.
    /// </summary>
    bool const* areAssetsReadonly;

    /// <summary>
    /// The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The flavor of container to create a build from.
    /// </summary>
    PlayFabMultiplayerContainerFlavor const* containerFlavor;

    /// <summary>
    /// (Optional) The container reference, consisting of the image name and tag.
    /// </summary>
    PlayFabMultiplayerContainerImageReference const* containerImageReference;

    /// <summary>
    /// (Optional) The container command to run when the multiplayer server has been allocated, including
    /// any arguments.
    /// </summary>
    const char* containerRunCommand;

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
    /// (Optional) The list of game assets related to the build.
    /// </summary>
    PlayFabMultiplayerAssetReferenceParams const* const* gameAssetReferences;

    /// <summary>
    /// Count of gameAssetReferences
    /// </summary>
    uint32_t gameAssetReferencesCount;

    /// <summary>
    /// (Optional) The game certificates for the build.
    /// </summary>
    PlayFabMultiplayerGameCertificateReferenceParams const* const* gameCertificateReferences;

    /// <summary>
    /// Count of gameCertificateReferences
    /// </summary>
    uint32_t gameCertificateReferencesCount;

    /// <summary>
    /// (Optional) The Linux instrumentation configuration for the build.
    /// </summary>
    PlayFabMultiplayerLinuxInstrumentationConfiguration const* linuxInstrumentationConfiguration;

    /// <summary>
    /// (Optional) Metadata to tag the build. The keys are case insensitive. The build metadata is made
    /// available to the server through Game Server SDK (GSDK).Constraints: Maximum number of keys: 30,
    /// Maximum key length: 50, Maximum value length: 100.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The number of multiplayer servers to host on a single VM.
    /// </summary>
    int32_t multiplayerServerCountPerVm;

    /// <summary>
    /// The ports to map the build on.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// The region configurations for the build.
    /// </summary>
    PlayFabMultiplayerBuildRegionParams const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

    /// <summary>
    /// (Optional) When true, assets will be downloaded and uncompressed in memory, without the compressedversion
    /// being written first to disc.
    /// </summary>
    bool const* useStreamingForAssetDownloads;

    /// <summary>
    /// (Optional) The VM size to create the build on.
    /// </summary>
    PlayFabMultiplayerAzureVmSize const* vmSize;

} PlayFabMultiplayerCreateBuildWithCustomContainerRequest;

/// <summary>
/// PlayFabMultiplayerGameCertificateReference data model.
/// </summary>
typedef struct PlayFabMultiplayerGameCertificateReference
{
    /// <summary>
    /// (Optional) An alias for the game certificate. The game server will reference this alias via GSDK
    /// config to retrieve the game certificate. This alias is used as an identifier in game server code
    /// to allow a new certificate with different Name field to be uploaded without the need to change
    /// any game server code to reference the new Name.
    /// </summary>
    const char* gsdkAlias;

    /// <summary>
    /// (Optional) The name of the game certificate. This name should match the name of a certificate
    /// that was previously uploaded to this title.
    /// </summary>
    const char* name;

} PlayFabMultiplayerGameCertificateReference;

/// <summary>
/// PlayFabMultiplayerCreateBuildWithCustomContainerResponse data model. Result payload for PlayFabMultiplayerCreateBuildWithCustomContainerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateBuildWithCustomContainerResponse
{
    /// <summary>
    /// (Optional) When true, assets will not be copied for each server inside the VM. All serverswill
    /// run from the same set of assets, or will have the same assets mounted in the container.
    /// </summary>
    bool const* areAssetsReadonly;

    /// <summary>
    /// (Optional) The guid string build ID. Must be unique for every build.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The flavor of container of the build.
    /// </summary>
    PlayFabMultiplayerContainerFlavor const* containerFlavor;

    /// <summary>
    /// (Optional) The container command to run when the multiplayer server has been allocated, including
    /// any arguments.
    /// </summary>
    const char* containerRunCommand;

    /// <summary>
    /// (Optional) The time the build was created in UTC.
    /// </summary>
    time_t const* creationTime;

    /// <summary>
    /// (Optional) The custom game container image reference information.
    /// </summary>
    PlayFabMultiplayerContainerImageReference const* customGameContainerImage;

    /// <summary>
    /// (Optional) The game assets for the build.
    /// </summary>
    PlayFabMultiplayerAssetReference const* const* gameAssetReferences;

    /// <summary>
    /// Count of gameAssetReferences
    /// </summary>
    uint32_t gameAssetReferencesCount;

    /// <summary>
    /// (Optional) The game certificates for the build.
    /// </summary>
    PlayFabMultiplayerGameCertificateReference const* const* gameCertificateReferences;

    /// <summary>
    /// Count of gameCertificateReferences
    /// </summary>
    uint32_t gameCertificateReferencesCount;

    /// <summary>
    /// (Optional) The Linux instrumentation configuration for this build.
    /// </summary>
    PlayFabMultiplayerLinuxInstrumentationConfiguration const* linuxInstrumentationConfiguration;

    /// <summary>
    /// (Optional) The metadata of the build.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The number of multiplayer servers to host on a single VM of the build.
    /// </summary>
    int32_t multiplayerServerCountPerVm;

    /// <summary>
    /// (Optional) The OS platform used for running the game process.
    /// </summary>
    const char* osPlatform;

    /// <summary>
    /// (Optional) The ports the build is mapped on.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// (Optional) The region configuration for the build.
    /// </summary>
    PlayFabMultiplayerBuildRegion const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

    /// <summary>
    /// (Optional) The type of game server being hosted.
    /// </summary>
    const char* serverType;

    /// <summary>
    /// (Optional) When true, assets will be downloaded and uncompressed in memory, without the compressedversion
    /// being written first to disc.
    /// </summary>
    bool const* useStreamingForAssetDownloads;

    /// <summary>
    /// (Optional) The VM size the build was created on.
    /// </summary>
    PlayFabMultiplayerAzureVmSize const* vmSize;

} PlayFabMultiplayerCreateBuildWithCustomContainerResponse;

/// <summary>
/// PlayFabMultiplayerInstrumentationConfiguration data model.
/// </summary>
typedef struct PlayFabMultiplayerInstrumentationConfiguration
{
    /// <summary>
    /// (Optional) The list of processes to be monitored on a VM for this build. Providing processes
    /// will turn on performance metrics collection for this build. Process names should not include extensions.
    /// If the game server process is: GameServer.exe; then, ProcessesToMonitor = [ GameServer ] .
    /// </summary>
    const char* const* processesToMonitor;

    /// <summary>
    /// Count of processesToMonitor
    /// </summary>
    uint32_t processesToMonitorCount;

} PlayFabMultiplayerInstrumentationConfiguration;

/// <summary>
/// PlayFabMultiplayerCreateBuildWithManagedContainerRequest data model. Creates a multiplayer server
/// build with a managed container and returns information about the build creation request. Request
/// object for PlayFabMultiplayerCreateBuildWithManagedContainerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateBuildWithManagedContainerRequest
{
    /// <summary>
    /// (Optional) When true, assets will not be copied for each server inside the VM. All serverswill
    /// run from the same set of assets, or will have the same assets mounted in the container.
    /// </summary>
    bool const* areAssetsReadonly;

    /// <summary>
    /// The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The flavor of container to create a build from.
    /// </summary>
    PlayFabMultiplayerContainerFlavor const* containerFlavor;

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
    /// The list of game assets related to the build.
    /// </summary>
    PlayFabMultiplayerAssetReferenceParams const* const* gameAssetReferences;

    /// <summary>
    /// Count of gameAssetReferences
    /// </summary>
    uint32_t gameAssetReferencesCount;

    /// <summary>
    /// (Optional) The game certificates for the build.
    /// </summary>
    PlayFabMultiplayerGameCertificateReferenceParams const* const* gameCertificateReferences;

    /// <summary>
    /// Count of gameCertificateReferences
    /// </summary>
    uint32_t gameCertificateReferencesCount;

    /// <summary>
    /// (Optional) The directory containing the game executable. This would be the start path of the
    /// game assets that contain the main game server executable. If not provided, a best effort will
    /// be made to extract it from the start game command.
    /// </summary>
    const char* gameWorkingDirectory;

    /// <summary>
    /// (Optional) The instrumentation configuration for the build.
    /// </summary>
    PlayFabMultiplayerInstrumentationConfiguration const* instrumentationConfiguration;

    /// <summary>
    /// (Optional) Metadata to tag the build. The keys are case insensitive. The build metadata is made
    /// available to the server through Game Server SDK (GSDK).Constraints: Maximum number of keys: 30,
    /// Maximum key length: 50, Maximum value length: 100.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The number of multiplayer servers to host on a single VM.
    /// </summary>
    int32_t multiplayerServerCountPerVm;

    /// <summary>
    /// The ports to map the build on.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// The region configurations for the build.
    /// </summary>
    PlayFabMultiplayerBuildRegionParams const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

    /// <summary>
    /// The command to run when the multiplayer server is started, including any arguments.
    /// </summary>
    const char* startMultiplayerServerCommand;

    /// <summary>
    /// (Optional) When true, assets will be downloaded and uncompressed in memory, without the compressedversion
    /// being written first to disc.
    /// </summary>
    bool const* useStreamingForAssetDownloads;

    /// <summary>
    /// (Optional) The VM size to create the build on.
    /// </summary>
    PlayFabMultiplayerAzureVmSize const* vmSize;

} PlayFabMultiplayerCreateBuildWithManagedContainerRequest;

/// <summary>
/// PlayFabMultiplayerCreateBuildWithManagedContainerResponse data model. Result payload for PlayFabMultiplayerCreateBuildWithManagedContainerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateBuildWithManagedContainerResponse
{
    /// <summary>
    /// (Optional) When true, assets will not be copied for each server inside the VM. All serverswill
    /// run from the same set of assets, or will have the same assets mounted in the container.
    /// </summary>
    bool const* areAssetsReadonly;

    /// <summary>
    /// (Optional) The guid string build ID. Must be unique for every build.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The flavor of container of the build.
    /// </summary>
    PlayFabMultiplayerContainerFlavor const* containerFlavor;

    /// <summary>
    /// (Optional) The time the build was created in UTC.
    /// </summary>
    time_t const* creationTime;

    /// <summary>
    /// (Optional) The game assets for the build.
    /// </summary>
    PlayFabMultiplayerAssetReference const* const* gameAssetReferences;

    /// <summary>
    /// Count of gameAssetReferences
    /// </summary>
    uint32_t gameAssetReferencesCount;

    /// <summary>
    /// (Optional) The game certificates for the build.
    /// </summary>
    PlayFabMultiplayerGameCertificateReference const* const* gameCertificateReferences;

    /// <summary>
    /// Count of gameCertificateReferences
    /// </summary>
    uint32_t gameCertificateReferencesCount;

    /// <summary>
    /// (Optional) The directory containing the game executable. This would be the start path of the
    /// game assets that contain the main game server executable. If not provided, a best effort will
    /// be made to extract it from the start game command.
    /// </summary>
    const char* gameWorkingDirectory;

    /// <summary>
    /// (Optional) The instrumentation configuration for this build.
    /// </summary>
    PlayFabMultiplayerInstrumentationConfiguration const* instrumentationConfiguration;

    /// <summary>
    /// (Optional) The metadata of the build.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The number of multiplayer servers to host on a single VM of the build.
    /// </summary>
    int32_t multiplayerServerCountPerVm;

    /// <summary>
    /// (Optional) The OS platform used for running the game process.
    /// </summary>
    const char* osPlatform;

    /// <summary>
    /// (Optional) The ports the build is mapped on.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// (Optional) The region configuration for the build.
    /// </summary>
    PlayFabMultiplayerBuildRegion const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

    /// <summary>
    /// (Optional) The type of game server being hosted.
    /// </summary>
    const char* serverType;

    /// <summary>
    /// (Optional) The command to run when the multiplayer server has been allocated, including any arguments.
    /// </summary>
    const char* startMultiplayerServerCommand;

    /// <summary>
    /// (Optional) When true, assets will be downloaded and uncompressed in memory, without the compressedversion
    /// being written first to disc.
    /// </summary>
    bool const* useStreamingForAssetDownloads;

    /// <summary>
    /// (Optional) The VM size the build was created on.
    /// </summary>
    PlayFabMultiplayerAzureVmSize const* vmSize;

} PlayFabMultiplayerCreateBuildWithManagedContainerResponse;

/// <summary>
/// PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest data model. Creates a multiplayer server
/// build with the game server running as a process and returns information about the build creation request.
/// Request object for PlayFabMultiplayerCreateBuildWithProcessBasedServerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest
{
    /// <summary>
    /// (Optional) When true, assets will not be copied for each server inside the VM. All serverswill
    /// run from the same set of assets, or will have the same assets mounted in the container.
    /// </summary>
    bool const* areAssetsReadonly;

    /// <summary>
    /// The build name.
    /// </summary>
    const char* buildName;

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
    /// The list of game assets related to the build.
    /// </summary>
    PlayFabMultiplayerAssetReferenceParams const* const* gameAssetReferences;

    /// <summary>
    /// Count of gameAssetReferences
    /// </summary>
    uint32_t gameAssetReferencesCount;

    /// <summary>
    /// (Optional) The game certificates for the build.
    /// </summary>
    PlayFabMultiplayerGameCertificateReferenceParams const* const* gameCertificateReferences;

    /// <summary>
    /// Count of gameCertificateReferences
    /// </summary>
    uint32_t gameCertificateReferencesCount;

    /// <summary>
    /// (Optional) The working directory for the game process. If this is not provided, the working directory
    /// will be set based on the mount path of the game server executable.
    /// </summary>
    const char* gameWorkingDirectory;

    /// <summary>
    /// (Optional) The instrumentation configuration for the build.
    /// </summary>
    PlayFabMultiplayerInstrumentationConfiguration const* instrumentationConfiguration;

    /// <summary>
    /// (Optional) Indicates whether this build will be created using the OS Preview versionPreview OS
    /// is recommended for dev builds to detect any breaking changes before they are released to retail.
    /// Retail builds should set this value to false.
    /// </summary>
    bool const* isOSPreview;

    /// <summary>
    /// (Optional) Metadata to tag the build. The keys are case insensitive. The build metadata is made
    /// available to the server through Game Server SDK (GSDK).Constraints: Maximum number of keys: 30,
    /// Maximum key length: 50, Maximum value length: 100.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The number of multiplayer servers to host on a single VM.
    /// </summary>
    int32_t multiplayerServerCountPerVm;

    /// <summary>
    /// (Optional) The OS platform used for running the game process.
    /// </summary>
    const char* osPlatform;

    /// <summary>
    /// The ports to map the build on.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// The region configurations for the build.
    /// </summary>
    PlayFabMultiplayerBuildRegionParams const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

    /// <summary>
    /// The command to run when the multiplayer server is started, including any arguments. The path
    /// to any executable should be relative to the root asset folder when unzipped.
    /// </summary>
    const char* startMultiplayerServerCommand;

    /// <summary>
    /// (Optional) When true, assets will be downloaded and uncompressed in memory, without the compressedversion
    /// being written first to disc.
    /// </summary>
    bool const* useStreamingForAssetDownloads;

    /// <summary>
    /// (Optional) The VM size to create the build on.
    /// </summary>
    PlayFabMultiplayerAzureVmSize const* vmSize;

} PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest;

/// <summary>
/// PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse data model. Result payload for PlayFabMultiplayerCreateBuildWithProcessBasedServerAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse
{
    /// <summary>
    /// (Optional) When true, assets will not be copied for each server inside the VM. All serverswill
    /// run from the same set of assets, or will have the same assets mounted in the container.
    /// </summary>
    bool const* areAssetsReadonly;

    /// <summary>
    /// (Optional) The guid string build ID. Must be unique for every build.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The flavor of container of the build.
    /// </summary>
    PlayFabMultiplayerContainerFlavor const* containerFlavor;

    /// <summary>
    /// (Optional) The time the build was created in UTC.
    /// </summary>
    time_t const* creationTime;

    /// <summary>
    /// (Optional) The game assets for the build.
    /// </summary>
    PlayFabMultiplayerAssetReference const* const* gameAssetReferences;

    /// <summary>
    /// Count of gameAssetReferences
    /// </summary>
    uint32_t gameAssetReferencesCount;

    /// <summary>
    /// (Optional) The game certificates for the build.
    /// </summary>
    PlayFabMultiplayerGameCertificateReference const* const* gameCertificateReferences;

    /// <summary>
    /// Count of gameCertificateReferences
    /// </summary>
    uint32_t gameCertificateReferencesCount;

    /// <summary>
    /// (Optional) The working directory for the game process. If this is not provided, the working directory
    /// will be set based on the mount path of the game server executable.
    /// </summary>
    const char* gameWorkingDirectory;

    /// <summary>
    /// (Optional) The instrumentation configuration for this build.
    /// </summary>
    PlayFabMultiplayerInstrumentationConfiguration const* instrumentationConfiguration;

    /// <summary>
    /// (Optional) Indicates whether this build will be created using the OS Preview versionPreview OS
    /// is recommended for dev builds to detect any breaking changes before they are released to retail.
    /// Retail builds should set this value to false.
    /// </summary>
    bool const* isOSPreview;

    /// <summary>
    /// (Optional) The metadata of the build.
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The number of multiplayer servers to host on a single VM of the build.
    /// </summary>
    int32_t multiplayerServerCountPerVm;

    /// <summary>
    /// (Optional) The OS platform used for running the game process.
    /// </summary>
    const char* osPlatform;

    /// <summary>
    /// (Optional) The ports the build is mapped on.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// (Optional) The region configuration for the build.
    /// </summary>
    PlayFabMultiplayerBuildRegion const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

    /// <summary>
    /// (Optional) The type of game server being hosted.
    /// </summary>
    const char* serverType;

    /// <summary>
    /// (Optional) The command to run when the multiplayer server is started, including any arguments.
    /// The path to any executable is relative to the root asset folder when unzipped.
    /// </summary>
    const char* startMultiplayerServerCommand;

    /// <summary>
    /// (Optional) When true, assets will be downloaded and uncompressed in memory, without the compressedversion
    /// being written first to disc.
    /// </summary>
    bool const* useStreamingForAssetDownloads;

    /// <summary>
    /// (Optional) The VM size the build was created on.
    /// </summary>
    PlayFabMultiplayerAzureVmSize const* vmSize;

} PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse;

/// <summary>
/// PlayFabMultiplayerMatchmakingPlayerAttributes data model. The matchmaking attributes for a user.
/// </summary>
typedef struct PlayFabMultiplayerMatchmakingPlayerAttributes
{
    /// <summary>
    /// (Optional) A data object representing a user's attributes.
    /// </summary>
    PlayFabJsonObject dataObject;

    /// <summary>
    /// (Optional) An escaped data object representing a user's attributes.
    /// </summary>
    const char* escapedDataObject;

} PlayFabMultiplayerMatchmakingPlayerAttributes;

/// <summary>
/// PlayFabMultiplayerMatchmakingPlayer data model. A user in a matchmaking ticket.
/// </summary>
typedef struct PlayFabMultiplayerMatchmakingPlayer
{
    /// <summary>
    /// (Optional) The user's attributes custom to the title.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayerAttributes const* attributes;

    /// <summary>
    /// The entity key of the matchmaking user.
    /// </summary>
    PlayFabEntityKey const* entity;

} PlayFabMultiplayerMatchmakingPlayer;

/// <summary>
/// PlayFabMultiplayerCreateMatchmakingTicketRequest data model. The client specifies the creator's attributes
/// and optionally a list of other users to match with. Request object for PlayFabMultiplayerCreateMatchmakingTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateMatchmakingTicketRequest
{
    /// <summary>
    /// The User who created this ticket.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayer const* creator;

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
    /// How long to attempt matching this ticket in seconds.
    /// </summary>
    int32_t giveUpAfterSeconds;

    /// <summary>
    /// (Optional) A list of Entity Keys of other users to match with.
    /// </summary>
    PlayFabEntityKey const* const* membersToMatchWith;

    /// <summary>
    /// Count of membersToMatchWith
    /// </summary>
    uint32_t membersToMatchWithCount;

    /// <summary>
    /// The Id of a match queue.
    /// </summary>
    const char* queueName;

} PlayFabMultiplayerCreateMatchmakingTicketRequest;

/// <summary>
/// PlayFabMultiplayerCreateMatchmakingTicketResult data model. Result payload for PlayFabMultiplayerCreateMatchmakingTicketAsync
/// and PlayFabMultiplayerCreateServerMatchmakingTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateMatchmakingTicketResult
{
    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerCreateMatchmakingTicketResult;

/// <summary>
/// PlayFabMultiplayerCreateRemoteUserRequest data model. Creates a remote user to log on to a VM for
/// a multiplayer server build in a specific region. Returns user credential information necessary to
/// log on. Request object for PlayFabMultiplayerCreateRemoteUserAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateRemoteUserRequest
{
    /// <summary>
    /// The guid string build ID of to create the remote user for.
    /// </summary>
    const char* buildId;

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
    /// (Optional) The expiration time for the remote user created. Defaults to expiring in one day if
    /// not specified.
    /// </summary>
    time_t const* expirationTime;

    /// <summary>
    /// The region of virtual machine to create the remote user for.
    /// </summary>
    const char* region;

    /// <summary>
    /// The username to create the remote user with.
    /// </summary>
    const char* username;

    /// <summary>
    /// The virtual machine ID the multiplayer server is located on.
    /// </summary>
    const char* vmId;

} PlayFabMultiplayerCreateRemoteUserRequest;

/// <summary>
/// PlayFabMultiplayerCreateRemoteUserResponse data model. Result payload for PlayFabMultiplayerCreateRemoteUserAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateRemoteUserResponse
{
    /// <summary>
    /// (Optional) The expiration time for the remote user created.
    /// </summary>
    time_t const* expirationTime;

    /// <summary>
    /// (Optional) The generated password for the remote user that was created.
    /// </summary>
    const char* password;

    /// <summary>
    /// (Optional) The username for the remote user that was created.
    /// </summary>
    const char* username;

} PlayFabMultiplayerCreateRemoteUserResponse;

/// <summary>
/// PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment data model. A player in a created matchmaking
/// match with a team assignment.
/// </summary>
typedef struct PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment
{
    /// <summary>
    /// (Optional) The user's attributes custom to the title. These attributes will be null unless the
    /// request has ReturnMemberAttributes flag set to true.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayerAttributes const* attributes;

    /// <summary>
    /// The entity key of the matchmaking user.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// (Optional) The Id of the team the User is assigned to.
    /// </summary>
    const char* teamId;

} PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment;

/// <summary>
/// PlayFabMultiplayerServerDetails data model.
/// </summary>
typedef struct PlayFabMultiplayerServerDetails
{
    /// <summary>
    /// (Optional) The fully qualified domain name of the virtual machine that is hosting this multiplayer
    /// server.
    /// </summary>
    const char* fqdn;

    /// <summary>
    /// (Optional) The IPv4 address of the virtual machine that is hosting this multiplayer server.
    /// </summary>
    const char* iPV4Address;

    /// <summary>
    /// (Optional) The ports the multiplayer server uses.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// (Optional) The server's region.
    /// </summary>
    const char* region;

} PlayFabMultiplayerServerDetails;

/// <summary>
/// PlayFabMultiplayerCreateServerBackfillTicketRequest data model. The server specifies all the members,
/// their teams and their attributes, and the server details if applicable. Request object for PlayFabMultiplayerCreateServerBackfillTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateServerBackfillTicketRequest
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
    /// How long to attempt matching this ticket in seconds.
    /// </summary>
    int32_t giveUpAfterSeconds;

    /// <summary>
    /// The users who will be part of this ticket, along with their team assignments.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// The Id of a match queue.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// (Optional) The details of the server the members are connected to.
    /// </summary>
    PlayFabMultiplayerServerDetails const* serverDetails;

} PlayFabMultiplayerCreateServerBackfillTicketRequest;

/// <summary>
/// PlayFabMultiplayerCreateServerBackfillTicketResult data model. Result payload for PlayFabMultiplayerCreateServerBackfillTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateServerBackfillTicketResult
{
    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerCreateServerBackfillTicketResult;

/// <summary>
/// PlayFabMultiplayerCreateServerMatchmakingTicketRequest data model. The server specifies all the members
/// and their attributes. Request object for PlayFabMultiplayerCreateServerMatchmakingTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateServerMatchmakingTicketRequest
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
    /// How long to attempt matching this ticket in seconds.
    /// </summary>
    int32_t giveUpAfterSeconds;

    /// <summary>
    /// The users who will be part of this ticket.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayer const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// The Id of a match queue.
    /// </summary>
    const char* queueName;

} PlayFabMultiplayerCreateServerMatchmakingTicketRequest;

/// <summary>
/// PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest data model. Creates a request to
/// change a title's multiplayer server quotas. Request object for PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest
{
    /// <summary>
    /// (Optional) A brief description of the requested changes.
    /// </summary>
    const char* changeDescription;

    /// <summary>
    /// Changes to make to the titles cores quota.
    /// </summary>
    PlayFabMultiplayerCoreCapacityChange const* const* changes;

    /// <summary>
    /// Count of changes
    /// </summary>
    uint32_t changesCount;

    /// <summary>
    /// (Optional) Email to be contacted by our team about this request. Only required when a request
    /// is not approved.
    /// </summary>
    const char* contactEmail;

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
    /// (Optional) Additional information about this request that our team can use to better understand
    /// the requirements.
    /// </summary>
    const char* notes;

    /// <summary>
    /// (Optional) When these changes would need to be in effect. Only required when a request is not
    /// approved.
    /// </summary>
    time_t const* startDate;

} PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest;

/// <summary>
/// PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse data model. Result payload for
/// PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeAsync.
/// </summary>
typedef struct PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse
{
    /// <summary>
    /// (Optional) Id of the change request that was created.
    /// </summary>
    const char* requestId;

    /// <summary>
    /// Determines if the request was approved or not. When false, our team is reviewing and may respond
    /// within 2 business days.
    /// </summary>
    bool wasApproved;

} PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse;

/// <summary>
/// PlayFabMultiplayerDeleteAssetRequest data model. Deletes a multiplayer server game asset for a title.
/// Request object for PlayFabMultiplayerDeleteAssetAsync.
/// </summary>
typedef struct PlayFabMultiplayerDeleteAssetRequest
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
    /// The filename of the asset to delete.
    /// </summary>
    const char* fileName;

} PlayFabMultiplayerDeleteAssetRequest;

/// <summary>
/// PlayFabMultiplayerDeleteBuildAliasRequest data model. Deletes a multiplayer server build alias. Request
/// object for PlayFabMultiplayerDeleteBuildAliasAsync.
/// </summary>
typedef struct PlayFabMultiplayerDeleteBuildAliasRequest
{
    /// <summary>
    /// The guid string alias ID of the alias to perform the action on.
    /// </summary>
    const char* aliasId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerDeleteBuildAliasRequest;

/// <summary>
/// PlayFabMultiplayerDeleteBuildRegionRequest data model. Removes a multiplayer server build's region.
/// Request object for PlayFabMultiplayerDeleteBuildRegionAsync.
/// </summary>
typedef struct PlayFabMultiplayerDeleteBuildRegionRequest
{
    /// <summary>
    /// The guid string ID of the build we want to update regions for.
    /// </summary>
    const char* buildId;

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
    /// The build region to delete.
    /// </summary>
    const char* region;

} PlayFabMultiplayerDeleteBuildRegionRequest;

/// <summary>
/// PlayFabMultiplayerDeleteBuildRequest data model. Deletes a multiplayer server build. Request object
/// for PlayFabMultiplayerDeleteBuildAsync.
/// </summary>
typedef struct PlayFabMultiplayerDeleteBuildRequest
{
    /// <summary>
    /// The guid string build ID of the build to delete.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerDeleteBuildRequest;

/// <summary>
/// PlayFabMultiplayerDeleteCertificateRequest data model. Deletes a multiplayer server game certificate.
/// Request object for PlayFabMultiplayerDeleteCertificateAsync.
/// </summary>
typedef struct PlayFabMultiplayerDeleteCertificateRequest
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
    /// The name of the certificate.
    /// </summary>
    const char* name;

} PlayFabMultiplayerDeleteCertificateRequest;

/// <summary>
/// PlayFabMultiplayerDeleteContainerImageRequest data model. Removes the specified container image repository.
/// After this operation, a 'docker pull' will fail for all the tags of the specified image. Morever,
/// ListContainerImages will not return the specified image. Request object for PlayFabMultiplayerDeleteContainerImageRepositoryAsync.
/// </summary>
typedef struct PlayFabMultiplayerDeleteContainerImageRequest
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
    /// (Optional) The container image repository we want to delete.
    /// </summary>
    const char* imageName;

} PlayFabMultiplayerDeleteContainerImageRequest;

/// <summary>
/// PlayFabMultiplayerDeleteRemoteUserRequest data model. Deletes a remote user to log on to a VM for
/// a multiplayer server build in a specific region. Returns user credential information necessary to
/// log on. Request object for PlayFabMultiplayerDeleteRemoteUserAsync.
/// </summary>
typedef struct PlayFabMultiplayerDeleteRemoteUserRequest
{
    /// <summary>
    /// The guid string build ID of the multiplayer server where the remote user is to delete.
    /// </summary>
    const char* buildId;

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
    /// The region of the multiplayer server where the remote user is to delete.
    /// </summary>
    const char* region;

    /// <summary>
    /// The username of the remote user to delete.
    /// </summary>
    const char* username;

    /// <summary>
    /// The virtual machine ID the multiplayer server is located on.
    /// </summary>
    const char* vmId;

} PlayFabMultiplayerDeleteRemoteUserRequest;

/// <summary>
/// PlayFabMultiplayerEnableMultiplayerServersForTitleRequest data model. Enables the multiplayer server
/// feature for a title and returns the enabled status. The enabled status can be Initializing, Enabled,
/// and Disabled. It can up to 20 minutes or more for the title to be enabled for the feature. On average,
/// it can take up to 20 minutes for the title to be enabled for the feature. Request object for PlayFabMultiplayerEnableMultiplayerServersForTitleAsync.
/// </summary>
typedef struct PlayFabMultiplayerEnableMultiplayerServersForTitleRequest
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

} PlayFabMultiplayerEnableMultiplayerServersForTitleRequest;

/// <summary>
/// PlayFabMultiplayerEnableMultiplayerServersForTitleResponse data model. Result payload for PlayFabMultiplayerEnableMultiplayerServersForTitleAsync.
/// </summary>
typedef struct PlayFabMultiplayerEnableMultiplayerServersForTitleResponse
{
    /// <summary>
    /// (Optional) The enabled status for the multiplayer server features for the title.
    /// </summary>
    PlayFabMultiplayerTitleMultiplayerServerEnabledStatus const* status;

} PlayFabMultiplayerEnableMultiplayerServersForTitleResponse;

/// <summary>
/// PlayFabMultiplayerGetAssetDownloadUrlRequest data model. Gets a URL that can be used to download
/// the specified asset. Request object for PlayFabMultiplayerGetAssetDownloadUrlAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetAssetDownloadUrlRequest
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
    /// The asset's file name to get the download URL for.
    /// </summary>
    const char* fileName;

} PlayFabMultiplayerGetAssetDownloadUrlRequest;

/// <summary>
/// PlayFabMultiplayerGetAssetDownloadUrlResponse data model. Result payload for PlayFabMultiplayerGetAssetDownloadUrlAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetAssetDownloadUrlResponse
{
    /// <summary>
    /// (Optional) The asset's download URL.
    /// </summary>
    const char* assetDownloadUrl;

    /// <summary>
    /// (Optional) The asset's file name to get the download URL for.
    /// </summary>
    const char* fileName;

} PlayFabMultiplayerGetAssetDownloadUrlResponse;

/// <summary>
/// PlayFabMultiplayerGetAssetUploadUrlRequest data model. Gets the URL to upload assets to. Request
/// object for PlayFabMultiplayerGetAssetUploadUrlAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetAssetUploadUrlRequest
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
    /// The asset's file name to get the upload URL for.
    /// </summary>
    const char* fileName;

} PlayFabMultiplayerGetAssetUploadUrlRequest;

/// <summary>
/// PlayFabMultiplayerGetAssetUploadUrlResponse data model. Result payload for PlayFabMultiplayerGetAssetUploadUrlAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetAssetUploadUrlResponse
{
    /// <summary>
    /// (Optional) The asset's upload URL.
    /// </summary>
    const char* assetUploadUrl;

    /// <summary>
    /// (Optional) The asset's file name to get the upload URL for.
    /// </summary>
    const char* fileName;

} PlayFabMultiplayerGetAssetUploadUrlResponse;

/// <summary>
/// PlayFabMultiplayerGetBuildAliasRequest data model. Returns the details about a multiplayer server
/// build alias. Request object for PlayFabMultiplayerGetBuildAliasAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetBuildAliasRequest
{
    /// <summary>
    /// The guid string alias ID of the alias to perform the action on.
    /// </summary>
    const char* aliasId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerGetBuildAliasRequest;

/// <summary>
/// PlayFabMultiplayerGetBuildRequest data model. Returns the details about a multiplayer server build.
/// Request object for PlayFabMultiplayerGetBuildAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetBuildRequest
{
    /// <summary>
    /// The guid string build ID of the build to get.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerGetBuildRequest;

/// <summary>
/// PlayFabMultiplayerGetBuildResponse data model. Result payload for PlayFabMultiplayerGetBuildAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetBuildResponse
{
    /// <summary>
    /// (Optional) When true, assets will not be copied for each server inside the VM. All serverswill
    /// run from the same set of assets, or will have the same assets mounted in the container.
    /// </summary>
    bool const* areAssetsReadonly;

    /// <summary>
    /// (Optional) The guid string build ID of the build.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The current build status. Valid values are - Deploying, Deployed, DeletingRegion,
    /// Unhealthy.
    /// </summary>
    const char* buildStatus;

    /// <summary>
    /// (Optional) The flavor of container of he build.
    /// </summary>
    PlayFabMultiplayerContainerFlavor const* containerFlavor;

    /// <summary>
    /// (Optional) The container command to run when the multiplayer server has been allocated, including
    /// any arguments. This only applies to custom builds. If the build is a managed build, this field
    /// will be null.
    /// </summary>
    const char* containerRunCommand;

    /// <summary>
    /// (Optional) The time the build was created in UTC.
    /// </summary>
    time_t const* creationTime;

    /// <summary>
    /// (Optional) The custom game container image for a custom build.
    /// </summary>
    PlayFabMultiplayerContainerImageReference const* customGameContainerImage;

    /// <summary>
    /// (Optional) The game assets for the build.
    /// </summary>
    PlayFabMultiplayerAssetReference const* const* gameAssetReferences;

    /// <summary>
    /// Count of gameAssetReferences
    /// </summary>
    uint32_t gameAssetReferencesCount;

    /// <summary>
    /// (Optional) The game certificates for the build.
    /// </summary>
    PlayFabMultiplayerGameCertificateReference const* const* gameCertificateReferences;

    /// <summary>
    /// Count of gameCertificateReferences
    /// </summary>
    uint32_t gameCertificateReferencesCount;

    /// <summary>
    /// (Optional) The instrumentation configuration of the build.
    /// </summary>
    PlayFabMultiplayerInstrumentationConfiguration const* instrumentationConfiguration;

    /// <summary>
    /// (Optional) Metadata of the build. The keys are case insensitive. The build metadata is made available
    /// to the server through Game Server SDK (GSDK).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* metadata;

    /// <summary>
    /// Count of metadata
    /// </summary>
    uint32_t metadataCount;

    /// <summary>
    /// The number of multiplayer servers to hosted on a single VM of the build.
    /// </summary>
    int32_t multiplayerServerCountPerVm;

    /// <summary>
    /// (Optional) The OS platform used for running the game process.
    /// </summary>
    const char* osPlatform;

    /// <summary>
    /// (Optional) The ports the build is mapped on.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// (Optional) The region configuration for the build.
    /// </summary>
    PlayFabMultiplayerBuildRegion const* const* regionConfigurations;

    /// <summary>
    /// Count of regionConfigurations
    /// </summary>
    uint32_t regionConfigurationsCount;

    /// <summary>
    /// (Optional) The type of game server being hosted.
    /// </summary>
    const char* serverType;

    /// <summary>
    /// (Optional) The command to run when the multiplayer server has been allocated, including any arguments.
    /// This only applies to managed builds. If the build is a custom build, this field will be null.
    /// </summary>
    const char* startMultiplayerServerCommand;

    /// <summary>
    /// (Optional) When true, assets will be downloaded and uncompressed in memory, without the compressedversion
    /// being written first to disc.
    /// </summary>
    bool const* useStreamingForAssetDownloads;

    /// <summary>
    /// (Optional) The VM size the build was created on.
    /// </summary>
    PlayFabMultiplayerAzureVmSize const* vmSize;

} PlayFabMultiplayerGetBuildResponse;

/// <summary>
/// PlayFabMultiplayerGetContainerRegistryCredentialsRequest data model. Gets credentials to the container
/// registry where game developers can upload custom container images to before creating a new build.
/// Request object for PlayFabMultiplayerGetContainerRegistryCredentialsAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetContainerRegistryCredentialsRequest
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

} PlayFabMultiplayerGetContainerRegistryCredentialsRequest;

/// <summary>
/// PlayFabMultiplayerGetContainerRegistryCredentialsResponse data model. Result payload for PlayFabMultiplayerGetContainerRegistryCredentialsAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetContainerRegistryCredentialsResponse
{
    /// <summary>
    /// (Optional) The url of the container registry.
    /// </summary>
    const char* dnsName;

    /// <summary>
    /// (Optional) The password for accessing the container registry.
    /// </summary>
    const char* password;

    /// <summary>
    /// (Optional) The username for accessing the container registry.
    /// </summary>
    const char* username;

} PlayFabMultiplayerGetContainerRegistryCredentialsResponse;

/// <summary>
/// PlayFabMultiplayerGetMatchmakingTicketRequest data model. The ticket includes the invited players,
/// their attributes if they have joined, the ticket status, the match Id when applicable, etc. Only servers,
/// the ticket creator and the invited players can get the ticket. Request object for PlayFabMultiplayerGetMatchmakingTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMatchmakingTicketRequest
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
    /// Determines whether the matchmaking attributes will be returned as an escaped JSON string or as
    /// an un-escaped JSON object.
    /// </summary>
    bool escapeObject;

    /// <summary>
    /// The name of the queue to find a match for.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerGetMatchmakingTicketRequest;

/// <summary>
/// PlayFabMultiplayerGetMatchmakingTicketResult data model. Result payload for PlayFabMultiplayerGetMatchmakingTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMatchmakingTicketResult
{
    /// <summary>
    /// (Optional) The reason why the current ticket was canceled. This field is only set if the ticket
    /// is in canceled state.
    /// </summary>
    const char* cancellationReasonString;

    /// <summary>
    /// The server date and time at which ticket was created.
    /// </summary>
    time_t created;

    /// <summary>
    /// The Creator's entity key.
    /// </summary>
    PlayFabEntityKey const* creator;

    /// <summary>
    /// How long to attempt matching this ticket in seconds.
    /// </summary>
    int32_t giveUpAfterSeconds;

    /// <summary>
    /// (Optional) The Id of a match.
    /// </summary>
    const char* matchId;

    /// <summary>
    /// A list of Users that have joined this ticket.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayer const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// (Optional) A list of PlayFab Ids of Users to match with.
    /// </summary>
    PlayFabEntityKey const* const* membersToMatchWith;

    /// <summary>
    /// Count of membersToMatchWith
    /// </summary>
    uint32_t membersToMatchWithCount;

    /// <summary>
    /// The Id of a match queue.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// The current ticket status. Possible values are: WaitingForPlayers, WaitingForMatch, WaitingForServer,
    /// Canceled and Matched.
    /// </summary>
    const char* status;

    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerGetMatchmakingTicketResult;

/// <summary>
/// PlayFabMultiplayerGetMatchRequest data model. When matchmaking has successfully matched together
/// a collection of tickets, it produces a 'match' with an Id. The match contains all of the players that
/// were matched together, and their team assigments. Only servers and ticket members can get the match.
/// Request object for PlayFabMultiplayerGetMatchAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMatchRequest
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
    /// Determines whether the matchmaking attributes will be returned as an escaped JSON string or as
    /// an un-escaped JSON object.
    /// </summary>
    bool escapeObject;

    /// <summary>
    /// The Id of a match.
    /// </summary>
    const char* matchId;

    /// <summary>
    /// The name of the queue to join.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// Determines whether the matchmaking attributes for each user should be returned in the response
    /// for match request.
    /// </summary>
    bool returnMemberAttributes;

} PlayFabMultiplayerGetMatchRequest;

/// <summary>
/// PlayFabMultiplayerGetMatchResult data model. Result payload for PlayFabMultiplayerGetMatchAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMatchResult
{
    /// <summary>
    /// The Id of a match.
    /// </summary>
    const char* matchId;

    /// <summary>
    /// A list of Users that are matched together, along with their team assignments.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// (Optional) A list of regions that the match could be played in sorted by preference. This value
    /// is only set if the queue has a region selection rule.
    /// </summary>
    const char* const* regionPreferences;

    /// <summary>
    /// Count of regionPreferences
    /// </summary>
    uint32_t regionPreferencesCount;

    /// <summary>
    /// (Optional) The details of the server that the match has been allocated to.
    /// </summary>
    PlayFabMultiplayerServerDetails const* serverDetails;

} PlayFabMultiplayerGetMatchResult;

/// <summary>
/// PlayFabMultiplayerGetMultiplayerServerDetailsRequest data model. Gets multiplayer server session
/// details for a build in a specific region. Request object for PlayFabMultiplayerGetMultiplayerServerDetailsAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMultiplayerServerDetailsRequest
{
    /// <summary>
    /// The guid string build ID of the multiplayer server to get details for.
    /// </summary>
    const char* buildId;

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
    /// The region the multiplayer server is located in to get details for.
    /// </summary>
    const char* region;

    /// <summary>
    /// The title generated guid string session ID of the multiplayer server to get details for. This
    /// is to keep track of multiplayer server sessions.
    /// </summary>
    const char* sessionId;

} PlayFabMultiplayerGetMultiplayerServerDetailsRequest;

/// <summary>
/// PlayFabMultiplayerGetMultiplayerServerDetailsResponse data model. Result payload for PlayFabMultiplayerGetMultiplayerServerDetailsAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMultiplayerServerDetailsResponse
{
    /// <summary>
    /// (Optional) The identity of the build in which the server was allocated.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The connected players in the multiplayer server.
    /// </summary>
    PlayFabMultiplayerConnectedPlayer const* const* connectedPlayers;

    /// <summary>
    /// Count of connectedPlayers
    /// </summary>
    uint32_t connectedPlayersCount;

    /// <summary>
    /// (Optional) The fully qualified domain name of the virtual machine that is hosting this multiplayer
    /// server.
    /// </summary>
    const char* fQDN;

    /// <summary>
    /// (Optional) The IPv4 address of the virtual machine that is hosting this multiplayer server.
    /// </summary>
    const char* iPV4Address;

    /// <summary>
    /// (Optional) The time (UTC) at which a change in the multiplayer server state was observed.
    /// </summary>
    time_t const* lastStateTransitionTime;

    /// <summary>
    /// (Optional) The ports the multiplayer server uses.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// (Optional) The region the multiplayer server is located in.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) The string server ID of the multiplayer server generated by PlayFab.
    /// </summary>
    const char* serverId;

    /// <summary>
    /// (Optional) The guid string session ID of the multiplayer server.
    /// </summary>
    const char* sessionId;

    /// <summary>
    /// (Optional) The state of the multiplayer server.
    /// </summary>
    const char* state;

    /// <summary>
    /// (Optional) The virtual machine ID that the multiplayer server is located on.
    /// </summary>
    const char* vmId;

} PlayFabMultiplayerGetMultiplayerServerDetailsResponse;

/// <summary>
/// PlayFabMultiplayerGetMultiplayerServerLogsRequest data model. Gets multiplayer server logs for a
/// specific server id in a region. The logs are available only after a server has terminated. Request
/// object for PlayFabMultiplayerGetMultiplayerServerLogsAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMultiplayerServerLogsRequest
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
    /// The server ID of multiplayer server to get logs for.
    /// </summary>
    const char* serverId;

} PlayFabMultiplayerGetMultiplayerServerLogsRequest;

/// <summary>
/// PlayFabMultiplayerGetMultiplayerServerLogsResponse data model. Result payload for PlayFabMultiplayerGetMultiplayerServerLogsAsync
/// and PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMultiplayerServerLogsResponse
{
    /// <summary>
    /// (Optional) URL for logs download.
    /// </summary>
    const char* logDownloadUrl;

} PlayFabMultiplayerGetMultiplayerServerLogsResponse;

/// <summary>
/// PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest data model. Gets multiplayer server
/// logs for a specific server id in a region. The logs are available only after a server has terminated.
/// Request object for PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest
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
    /// The server ID of multiplayer server to get logs for.
    /// </summary>
    const char* sessionId;

} PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest;

/// <summary>
/// PlayFabMultiplayerGetQueueStatisticsRequest data model. Returns the matchmaking statistics for a
/// queue. These include the number of players matching and the statistics related to the time to match
/// statistics in seconds (average and percentiles). Statistics are refreshed once every 5 minutes. Servers
/// can access all statistics no matter what the ClientStatisticsVisibility is configured to. Clients
/// can access statistics according to the ClientStatisticsVisibility. Client requests are forbidden if
/// all visibility fields are false. Request object for PlayFabMultiplayerGetQueueStatisticsAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetQueueStatisticsRequest
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
    /// The name of the queue.
    /// </summary>
    const char* queueName;

} PlayFabMultiplayerGetQueueStatisticsRequest;

/// <summary>
/// PlayFabMultiplayerStatistics data model.
/// </summary>
typedef struct PlayFabMultiplayerStatistics
{
    /// <summary>
    /// The average.
    /// </summary>
    double average;

    /// <summary>
    /// The 50th percentile.
    /// </summary>
    double percentile50;

    /// <summary>
    /// The 90th percentile.
    /// </summary>
    double percentile90;

    /// <summary>
    /// The 99th percentile.
    /// </summary>
    double percentile99;

} PlayFabMultiplayerStatistics;

/// <summary>
/// PlayFabMultiplayerGetQueueStatisticsResult data model. Result payload for PlayFabMultiplayerGetQueueStatisticsAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetQueueStatisticsResult
{
    /// <summary>
    /// (Optional) The current number of players in the matchmaking queue, who are waiting to be matched.
    /// </summary>
    uint32_t const* numberOfPlayersMatching;

    /// <summary>
    /// (Optional) Statistics representing the time (in seconds) it takes for tickets to find a match.
    /// </summary>
    PlayFabMultiplayerStatistics const* timeToMatchStatisticsInSeconds;

} PlayFabMultiplayerGetQueueStatisticsResult;

/// <summary>
/// PlayFabMultiplayerGetRemoteLoginEndpointRequest data model. Gets a remote login endpoint to a VM
/// that is hosting a multiplayer server build in a specific region. Request object for PlayFabMultiplayerGetRemoteLoginEndpointAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetRemoteLoginEndpointRequest
{
    /// <summary>
    /// The guid string build ID of the multiplayer server to get remote login information for.
    /// </summary>
    const char* buildId;

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
    /// The region of the multiplayer server to get remote login information for.
    /// </summary>
    const char* region;

    /// <summary>
    /// The virtual machine ID the multiplayer server is located on.
    /// </summary>
    const char* vmId;

} PlayFabMultiplayerGetRemoteLoginEndpointRequest;

/// <summary>
/// PlayFabMultiplayerGetRemoteLoginEndpointResponse data model. Result payload for PlayFabMultiplayerGetRemoteLoginEndpointAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetRemoteLoginEndpointResponse
{
    /// <summary>
    /// (Optional) The remote login IPV4 address of multiplayer server.
    /// </summary>
    const char* iPV4Address;

    /// <summary>
    /// The remote login port of multiplayer server.
    /// </summary>
    int32_t port;

} PlayFabMultiplayerGetRemoteLoginEndpointResponse;

/// <summary>
/// PlayFabMultiplayerGetServerBackfillTicketRequest data model. The ticket includes the players, their
/// attributes, their teams, the ticket status, the match Id and the server details when applicable, etc.
/// Only servers can get the ticket. Request object for PlayFabMultiplayerGetServerBackfillTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetServerBackfillTicketRequest
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
    /// Determines whether the matchmaking attributes will be returned as an escaped JSON string or as
    /// an un-escaped JSON object.
    /// </summary>
    bool escapeObject;

    /// <summary>
    /// The name of the queue to find a match for.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerGetServerBackfillTicketRequest;

/// <summary>
/// PlayFabMultiplayerGetServerBackfillTicketResult data model. Result payload for PlayFabMultiplayerGetServerBackfillTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetServerBackfillTicketResult
{
    /// <summary>
    /// (Optional) The reason why the current ticket was canceled. This field is only set if the ticket
    /// is in canceled state.
    /// </summary>
    const char* cancellationReasonString;

    /// <summary>
    /// The server date and time at which ticket was created.
    /// </summary>
    time_t created;

    /// <summary>
    /// How long to attempt matching this ticket in seconds.
    /// </summary>
    int32_t giveUpAfterSeconds;

    /// <summary>
    /// (Optional) The Id of a match.
    /// </summary>
    const char* matchId;

    /// <summary>
    /// A list of Users that are part of this ticket, along with their team assignments.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment const* const* members;

    /// <summary>
    /// Count of members
    /// </summary>
    uint32_t membersCount;

    /// <summary>
    /// The Id of a match queue.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// The details of the server the members are connected to.
    /// </summary>
    PlayFabMultiplayerServerDetails const* serverDetails;

    /// <summary>
    /// The current ticket status. Possible values are: WaitingForMatch, Canceled and Matched.
    /// </summary>
    const char* status;

    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerGetServerBackfillTicketResult;

/// <summary>
/// PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest data model. Gets the status of
/// whether a title is enabled for the multiplayer server feature. The enabled status can be Initializing,
/// Enabled, and Disabled. Request object for PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest
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

} PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest;

/// <summary>
/// PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse data model. Result payload for
/// PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
{
    /// <summary>
    /// (Optional) The enabled status for the multiplayer server features for the title.
    /// </summary>
    PlayFabMultiplayerTitleMultiplayerServerEnabledStatus const* status;

} PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;

/// <summary>
/// PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest data model. Gets a title's server
/// quota change request. Request object for PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest
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
    /// Id of the change request to get.
    /// </summary>
    const char* requestId;

} PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest;

/// <summary>
/// PlayFabMultiplayerQuotaChange data model.
/// </summary>
typedef struct PlayFabMultiplayerQuotaChange
{
    /// <summary>
    /// (Optional) A brief description of the requested changes.
    /// </summary>
    const char* changeDescription;

    /// <summary>
    /// (Optional) Requested changes to make to the titles cores quota.
    /// </summary>
    PlayFabMultiplayerCoreCapacityChange const* const* changes;

    /// <summary>
    /// Count of changes
    /// </summary>
    uint32_t changesCount;

    /// <summary>
    /// Whether or not this request is pending a review.
    /// </summary>
    bool isPendingReview;

    /// <summary>
    /// (Optional) Additional information about this request that our team can use to better understand
    /// the requirements.
    /// </summary>
    const char* notes;

    /// <summary>
    /// (Optional) Id of the change request.
    /// </summary>
    const char* requestId;

    /// <summary>
    /// (Optional) Comments by our team when a request is reviewed.
    /// </summary>
    const char* reviewComments;

    /// <summary>
    /// Whether or not this request was approved.
    /// </summary>
    bool wasApproved;

} PlayFabMultiplayerQuotaChange;

/// <summary>
/// PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse data model. Result payload for PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse
{
    /// <summary>
    /// (Optional) The change request for this title.
    /// </summary>
    PlayFabMultiplayerQuotaChange const* change;

} PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse;

/// <summary>
/// PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest data model. Gets the quotas for a title
/// in relation to multiplayer servers. Request object for PlayFabMultiplayerGetTitleMultiplayerServersQuotasAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest
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

} PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest;

/// <summary>
/// PlayFabMultiplayerTitleMultiplayerServersQuotas data model.
/// </summary>
typedef struct PlayFabMultiplayerTitleMultiplayerServersQuotas
{
    /// <summary>
    /// (Optional) The core capacity for the various regions and VM Family.
    /// </summary>
    PlayFabMultiplayerCoreCapacity const* const* coreCapacities;

    /// <summary>
    /// Count of coreCapacities
    /// </summary>
    uint32_t coreCapacitiesCount;

} PlayFabMultiplayerTitleMultiplayerServersQuotas;

/// <summary>
/// PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse data model. Result payload for PlayFabMultiplayerGetTitleMultiplayerServersQuotasAsync.
/// </summary>
typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse
{
    /// <summary>
    /// (Optional) The various quotas for multiplayer servers for the title.
    /// </summary>
    PlayFabMultiplayerTitleMultiplayerServersQuotas const* quotas;

} PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse;

/// <summary>
/// PlayFabMultiplayerJoinMatchmakingTicketRequest data model. Add the player to a matchmaking ticket
/// and specify all of its matchmaking attributes. Players can join a ticket if and only if their EntityKeys
/// are already listed in the ticket's Members list. The matchmaking service automatically starts matching
/// the ticket against other matchmaking tickets once all players have joined the ticket. It is not possible
/// to join a ticket once it has started matching. Request object for PlayFabMultiplayerJoinMatchmakingTicketAsync.
/// </summary>
typedef struct PlayFabMultiplayerJoinMatchmakingTicketRequest
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
    /// The User who wants to join the ticket. Their Id must be listed in PlayFabIdsToMatchWith.
    /// </summary>
    PlayFabMultiplayerMatchmakingPlayer const* member;

    /// <summary>
    /// The name of the queue to join.
    /// </summary>
    const char* queueName;

    /// <summary>
    /// The Id of the ticket to find a match for.
    /// </summary>
    const char* ticketId;

} PlayFabMultiplayerJoinMatchmakingTicketRequest;

/// <summary>
/// PlayFabMultiplayerListAssetSummariesRequest data model. Returns a list of multiplayer server game
/// asset summaries for a title. Request object for PlayFabMultiplayerListAssetSummariesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListAssetSummariesRequest
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
    /// (Optional) The page size for the request.
    /// </summary>
    int32_t const* pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged request.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListAssetSummariesRequest;

/// <summary>
/// PlayFabMultiplayerListAssetSummariesResponse data model. Result payload for PlayFabMultiplayerListAssetSummariesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListAssetSummariesResponse
{
    /// <summary>
    /// (Optional) The list of asset summaries.
    /// </summary>
    PlayFabMultiplayerAssetSummary const* const* assetSummaries;

    /// <summary>
    /// Count of assetSummaries
    /// </summary>
    uint32_t assetSummariesCount;

    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListAssetSummariesResponse;

/// <summary>
/// PlayFabMultiplayerListBuildAliasesRequest data model. Returns a list of summarized details of all
/// multiplayer server builds for a title. Request object for PlayFabMultiplayerListBuildAliasesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListBuildAliasesRequest
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
    /// (Optional) The page size for the request.
    /// </summary>
    int32_t const* pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged request.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListBuildAliasesRequest;

/// <summary>
/// PlayFabMultiplayerListBuildAliasesResponse data model. Result payload for PlayFabMultiplayerListBuildAliasesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListBuildAliasesResponse
{
    /// <summary>
    /// (Optional) The list of build aliases for the title.
    /// </summary>
    PlayFabMultiplayerBuildAliasDetailsResponse const* const* buildAliases;

    /// <summary>
    /// Count of buildAliases
    /// </summary>
    uint32_t buildAliasesCount;

    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListBuildAliasesResponse;

/// <summary>
/// PlayFabMultiplayerListBuildSummariesRequest data model. Returns a list of summarized details of all
/// multiplayer server builds for a title. Request object for PlayFabMultiplayerListBuildSummariesV2Async.
/// </summary>
typedef struct PlayFabMultiplayerListBuildSummariesRequest
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
    /// (Optional) The page size for the request.
    /// </summary>
    int32_t const* pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged request.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListBuildSummariesRequest;

/// <summary>
/// PlayFabMultiplayerListBuildSummariesResponse data model. Result payload for PlayFabMultiplayerListBuildSummariesV2Async.
/// </summary>
typedef struct PlayFabMultiplayerListBuildSummariesResponse
{
    /// <summary>
    /// (Optional) The list of build summaries for a title.
    /// </summary>
    PlayFabMultiplayerBuildSummary const* const* buildSummaries;

    /// <summary>
    /// Count of buildSummaries
    /// </summary>
    uint32_t buildSummariesCount;

    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListBuildSummariesResponse;

/// <summary>
/// PlayFabMultiplayerListCertificateSummariesRequest data model. Returns a list of multiplayer server
/// game certificates for a title. Request object for PlayFabMultiplayerListCertificateSummariesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListCertificateSummariesRequest
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
    /// (Optional) The page size for the request.
    /// </summary>
    int32_t const* pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged request.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListCertificateSummariesRequest;

/// <summary>
/// PlayFabMultiplayerListCertificateSummariesResponse data model. Result payload for PlayFabMultiplayerListCertificateSummariesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListCertificateSummariesResponse
{
    /// <summary>
    /// (Optional) The list of game certificates.
    /// </summary>
    PlayFabMultiplayerCertificateSummary const* const* certificateSummaries;

    /// <summary>
    /// Count of certificateSummaries
    /// </summary>
    uint32_t certificateSummariesCount;

    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListCertificateSummariesResponse;

/// <summary>
/// PlayFabMultiplayerListContainerImagesRequest data model. Returns a list of the container images that
/// have been uploaded to the container registry for a title. Request object for PlayFabMultiplayerListContainerImagesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListContainerImagesRequest
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
    /// (Optional) The page size for the request.
    /// </summary>
    int32_t const* pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged request.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListContainerImagesRequest;

/// <summary>
/// PlayFabMultiplayerListContainerImagesResponse data model. Result payload for PlayFabMultiplayerListContainerImagesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListContainerImagesResponse
{
    /// <summary>
    /// (Optional) The list of container images.
    /// </summary>
    const char* const* images;

    /// <summary>
    /// Count of images
    /// </summary>
    uint32_t imagesCount;

    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListContainerImagesResponse;

/// <summary>
/// PlayFabMultiplayerListContainerImageTagsRequest data model. Returns a list of the tags for a particular
/// container image that exists in the container registry for a title. Request object for PlayFabMultiplayerListContainerImageTagsAsync.
/// </summary>
typedef struct PlayFabMultiplayerListContainerImageTagsRequest
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
    /// (Optional) The container images we want to list tags for.
    /// </summary>
    const char* imageName;

} PlayFabMultiplayerListContainerImageTagsRequest;

/// <summary>
/// PlayFabMultiplayerListContainerImageTagsResponse data model. Result payload for PlayFabMultiplayerListContainerImageTagsAsync.
/// </summary>
typedef struct PlayFabMultiplayerListContainerImageTagsResponse
{
    /// <summary>
    /// (Optional) The list of tags for a particular container image.
    /// </summary>
    const char* const* tags;

    /// <summary>
    /// Count of tags
    /// </summary>
    uint32_t tagsCount;

} PlayFabMultiplayerListContainerImageTagsResponse;

/// <summary>
/// PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest data model. If the caller is a title, the
/// EntityKey in the request is required. If the caller is a player, then it is optional. If it is provided
/// it must match the caller's entity. Request object for PlayFabMultiplayerListMatchmakingTicketsForPlayerAsync.
/// </summary>
typedef struct PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest
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
    /// (Optional) The entity key for which to find the ticket Ids.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The name of the queue to find a match for.
    /// </summary>
    const char* queueName;

} PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest;

/// <summary>
/// PlayFabMultiplayerListMatchmakingTicketsForPlayerResult data model. Result payload for PlayFabMultiplayerListMatchmakingTicketsForPlayerAsync.
/// </summary>
typedef struct PlayFabMultiplayerListMatchmakingTicketsForPlayerResult
{
    /// <summary>
    /// The list of ticket Ids the user is a member of.
    /// </summary>
    const char* const* ticketIds;

    /// <summary>
    /// Count of ticketIds
    /// </summary>
    uint32_t ticketIdsCount;

} PlayFabMultiplayerListMatchmakingTicketsForPlayerResult;

/// <summary>
/// PlayFabMultiplayerListMultiplayerServersRequest data model. Returns a list of multiplayer servers
/// for a build in a specific region. Request object for PlayFabMultiplayerListArchivedMultiplayerServersAsync
/// and PlayFabMultiplayerListMultiplayerServersAsync.
/// </summary>
typedef struct PlayFabMultiplayerListMultiplayerServersRequest
{
    /// <summary>
    /// The guid string build ID of the multiplayer servers to list.
    /// </summary>
    const char* buildId;

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
    /// (Optional) The page size for the request.
    /// </summary>
    int32_t const* pageSize;

    /// <summary>
    /// The region the multiplayer servers to list.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) The skip token for the paged request.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListMultiplayerServersRequest;

/// <summary>
/// PlayFabMultiplayerMultiplayerServerSummary data model.
/// </summary>
typedef struct PlayFabMultiplayerMultiplayerServerSummary
{
    /// <summary>
    /// (Optional) The connected players in the multiplayer server.
    /// </summary>
    PlayFabMultiplayerConnectedPlayer const* const* connectedPlayers;

    /// <summary>
    /// Count of connectedPlayers
    /// </summary>
    uint32_t connectedPlayersCount;

    /// <summary>
    /// (Optional) The time (UTC) at which a change in the multiplayer server state was observed.
    /// </summary>
    time_t const* lastStateTransitionTime;

    /// <summary>
    /// (Optional) The region the multiplayer server is located in.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) The string server ID of the multiplayer server generated by PlayFab.
    /// </summary>
    const char* serverId;

    /// <summary>
    /// (Optional) The title generated guid string session ID of the multiplayer server.
    /// </summary>
    const char* sessionId;

    /// <summary>
    /// (Optional) The state of the multiplayer server.
    /// </summary>
    const char* state;

    /// <summary>
    /// (Optional) The virtual machine ID that the multiplayer server is located on.
    /// </summary>
    const char* vmId;

} PlayFabMultiplayerMultiplayerServerSummary;

/// <summary>
/// PlayFabMultiplayerListMultiplayerServersResponse data model. Result payload for PlayFabMultiplayerListArchivedMultiplayerServersAsync
/// and PlayFabMultiplayerListMultiplayerServersAsync.
/// </summary>
typedef struct PlayFabMultiplayerListMultiplayerServersResponse
{
    /// <summary>
    /// (Optional) The list of multiplayer server summary details.
    /// </summary>
    PlayFabMultiplayerMultiplayerServerSummary const* const* multiplayerServerSummaries;

    /// <summary>
    /// Count of multiplayerServerSummaries
    /// </summary>
    uint32_t multiplayerServerSummariesCount;

    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListMultiplayerServersResponse;

/// <summary>
/// PlayFabMultiplayerListPartyQosServersRequest data model. Returns a list of quality of service servers
/// for party. Request object for PlayFabMultiplayerListPartyQosServersAsync.
/// </summary>
typedef struct PlayFabMultiplayerListPartyQosServersRequest
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

} PlayFabMultiplayerListPartyQosServersRequest;

/// <summary>
/// PlayFabMultiplayerQosServer data model.
/// </summary>
typedef struct PlayFabMultiplayerQosServer
{
    /// <summary>
    /// (Optional) The region the QoS server is located in.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) The QoS server URL.
    /// </summary>
    const char* serverUrl;

} PlayFabMultiplayerQosServer;

/// <summary>
/// PlayFabMultiplayerListPartyQosServersResponse data model. Result payload for PlayFabMultiplayerListPartyQosServersAsync.
/// </summary>
typedef struct PlayFabMultiplayerListPartyQosServersResponse
{
    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The list of QoS servers.
    /// </summary>
    PlayFabMultiplayerQosServer const* const* qosServers;

    /// <summary>
    /// Count of qosServers
    /// </summary>
    uint32_t qosServersCount;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListPartyQosServersResponse;

/// <summary>
/// PlayFabMultiplayerListQosServersForTitleRequest data model. Returns a list of quality of service
/// servers for a title. Request object for PlayFabMultiplayerListQosServersForTitleAsync.
/// </summary>
typedef struct PlayFabMultiplayerListQosServersForTitleRequest
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
    /// (Optional) Indicates that the response should contain Qos servers for all regions, including
    /// those where there are no builds deployed for the title.
    /// </summary>
    bool const* includeAllRegions;

} PlayFabMultiplayerListQosServersForTitleRequest;

/// <summary>
/// PlayFabMultiplayerListQosServersForTitleResponse data model. Result payload for PlayFabMultiplayerListQosServersForTitleAsync.
/// </summary>
typedef struct PlayFabMultiplayerListQosServersForTitleResponse
{
    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The list of QoS servers.
    /// </summary>
    PlayFabMultiplayerQosServer const* const* qosServers;

    /// <summary>
    /// Count of qosServers
    /// </summary>
    uint32_t qosServersCount;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListQosServersForTitleResponse;

/// <summary>
/// PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest data model. List all server backfill
/// ticket Ids the user is a member of. Request object for PlayFabMultiplayerListServerBackfillTicketsForPlayerAsync.
/// </summary>
typedef struct PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest
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
    /// The entity key for which to find the ticket Ids.
    /// </summary>
    PlayFabEntityKey const* entity;

    /// <summary>
    /// The name of the queue the tickets are in.
    /// </summary>
    const char* queueName;

} PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest;

/// <summary>
/// PlayFabMultiplayerListServerBackfillTicketsForPlayerResult data model. Result payload for PlayFabMultiplayerListServerBackfillTicketsForPlayerAsync.
/// </summary>
typedef struct PlayFabMultiplayerListServerBackfillTicketsForPlayerResult
{
    /// <summary>
    /// The list of backfill ticket Ids the user is a member of.
    /// </summary>
    const char* const* ticketIds;

    /// <summary>
    /// Count of ticketIds
    /// </summary>
    uint32_t ticketIdsCount;

} PlayFabMultiplayerListServerBackfillTicketsForPlayerResult;

/// <summary>
/// PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest data model. List all server quota
/// change requests for a title. Request object for PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest
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

} PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest;

/// <summary>
/// PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse data model. Result payload for
/// PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse
{
    /// <summary>
    /// (Optional) All change requests for this title.
    /// </summary>
    PlayFabMultiplayerQuotaChange const* const* changes;

    /// <summary>
    /// Count of changes
    /// </summary>
    uint32_t changesCount;

} PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse;

/// <summary>
/// PlayFabMultiplayerListVirtualMachineSummariesRequest data model. Returns a list of virtual machines
/// for a title. Request object for PlayFabMultiplayerListVirtualMachineSummariesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListVirtualMachineSummariesRequest
{
    /// <summary>
    /// The guid string build ID of the virtual machines to list.
    /// </summary>
    const char* buildId;

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
    /// (Optional) The page size for the request.
    /// </summary>
    int32_t const* pageSize;

    /// <summary>
    /// The region of the virtual machines to list.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) The skip token for the paged request.
    /// </summary>
    const char* skipToken;

} PlayFabMultiplayerListVirtualMachineSummariesRequest;

/// <summary>
/// PlayFabMultiplayerVirtualMachineSummary data model.
/// </summary>
typedef struct PlayFabMultiplayerVirtualMachineSummary
{
    /// <summary>
    /// (Optional) The virtual machine health status.
    /// </summary>
    const char* healthStatus;

    /// <summary>
    /// (Optional) The virtual machine state.
    /// </summary>
    const char* state;

    /// <summary>
    /// (Optional) The virtual machine ID.
    /// </summary>
    const char* vmId;

} PlayFabMultiplayerVirtualMachineSummary;

/// <summary>
/// PlayFabMultiplayerListVirtualMachineSummariesResponse data model. Result payload for PlayFabMultiplayerListVirtualMachineSummariesAsync.
/// </summary>
typedef struct PlayFabMultiplayerListVirtualMachineSummariesResponse
{
    /// <summary>
    /// The page size on the response.
    /// </summary>
    int32_t pageSize;

    /// <summary>
    /// (Optional) The skip token for the paged response.
    /// </summary>
    const char* skipToken;

    /// <summary>
    /// (Optional) The list of virtual machine summaries.
    /// </summary>
    PlayFabMultiplayerVirtualMachineSummary const* const* virtualMachines;

    /// <summary>
    /// Count of virtualMachines
    /// </summary>
    uint32_t virtualMachinesCount;

} PlayFabMultiplayerListVirtualMachineSummariesResponse;

/// <summary>
/// PlayFabMultiplayerRequestMultiplayerServerRequest data model. Requests a multiplayer server session
/// from a particular build in any of the given preferred regions. Request object for PlayFabMultiplayerRequestMultiplayerServerAsync.
/// </summary>
typedef struct PlayFabMultiplayerRequestMultiplayerServerRequest
{
    /// <summary>
    /// (Optional) The identifiers of the build alias to use for the request.
    /// </summary>
    PlayFabMultiplayerBuildAliasParams const* buildAliasParams;

    /// <summary>
    /// (Optional) The guid string build ID of the multiplayer server to request.
    /// </summary>
    const char* buildId;

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
    /// (Optional) Initial list of players (potentially matchmade) allowed to connect to the game. This
    /// list is passed to the game server when requested (via GSDK) and can be used to validate players
    /// connecting to it.
    /// </summary>
    const char* const* initialPlayers;

    /// <summary>
    /// Count of initialPlayers
    /// </summary>
    uint32_t initialPlayersCount;

    /// <summary>
    /// The preferred regions to request a multiplayer server from. The Multiplayer Service will iterate
    /// through the regions in the specified order and allocate a server from the first one that has servers
    /// available.
    /// </summary>
    const char* const* preferredRegions;

    /// <summary>
    /// Count of preferredRegions
    /// </summary>
    uint32_t preferredRegionsCount;

    /// <summary>
    /// (Optional) Data encoded as a string that is passed to the game server when requested. This can
    /// be used to to communicate information such as game mode or map through the request flow.
    /// </summary>
    const char* sessionCookie;

    /// <summary>
    /// A guid string session ID created track the multiplayer server session over its life.
    /// </summary>
    const char* sessionId;

} PlayFabMultiplayerRequestMultiplayerServerRequest;

/// <summary>
/// PlayFabMultiplayerRequestMultiplayerServerResponse data model. Result payload for PlayFabMultiplayerRequestMultiplayerServerAsync.
/// </summary>
typedef struct PlayFabMultiplayerRequestMultiplayerServerResponse
{
    /// <summary>
    /// (Optional) The identity of the build in which the server was allocated.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// (Optional) The connected players in the multiplayer server.
    /// </summary>
    PlayFabMultiplayerConnectedPlayer const* const* connectedPlayers;

    /// <summary>
    /// Count of connectedPlayers
    /// </summary>
    uint32_t connectedPlayersCount;

    /// <summary>
    /// (Optional) The fully qualified domain name of the virtual machine that is hosting this multiplayer
    /// server.
    /// </summary>
    const char* fQDN;

    /// <summary>
    /// (Optional) The IPv4 address of the virtual machine that is hosting this multiplayer server.
    /// </summary>
    const char* iPV4Address;

    /// <summary>
    /// (Optional) The time (UTC) at which a change in the multiplayer server state was observed.
    /// </summary>
    time_t const* lastStateTransitionTime;

    /// <summary>
    /// (Optional) The ports the multiplayer server uses.
    /// </summary>
    PlayFabMultiplayerPort const* const* ports;

    /// <summary>
    /// Count of ports
    /// </summary>
    uint32_t portsCount;

    /// <summary>
    /// (Optional) The region the multiplayer server is located in.
    /// </summary>
    const char* region;

    /// <summary>
    /// (Optional) The string server ID of the multiplayer server generated by PlayFab.
    /// </summary>
    const char* serverId;

    /// <summary>
    /// (Optional) The guid string session ID of the multiplayer server.
    /// </summary>
    const char* sessionId;

    /// <summary>
    /// (Optional) The state of the multiplayer server.
    /// </summary>
    const char* state;

    /// <summary>
    /// (Optional) The virtual machine ID that the multiplayer server is located on.
    /// </summary>
    const char* vmId;

} PlayFabMultiplayerRequestMultiplayerServerResponse;

/// <summary>
/// PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest data model. Gets new credentials to
/// the container registry where game developers can upload custom container images to before creating
/// a new build. Request object for PlayFabMultiplayerRolloverContainerRegistryCredentialsAsync.
/// </summary>
typedef struct PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest
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

} PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest;

/// <summary>
/// PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse data model. Result payload for PlayFabMultiplayerRolloverContainerRegistryCredentialsAsync.
/// </summary>
typedef struct PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse
{
    /// <summary>
    /// (Optional) The url of the container registry.
    /// </summary>
    const char* dnsName;

    /// <summary>
    /// (Optional) The password for accessing the container registry.
    /// </summary>
    const char* password;

    /// <summary>
    /// (Optional) The username for accessing the container registry.
    /// </summary>
    const char* username;

} PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse;

/// <summary>
/// PlayFabMultiplayerShutdownMultiplayerServerRequest data model. Executes the shutdown callback from
/// the GSDK and terminates the multiplayer server session. The callback in the GSDK will allow for graceful
/// shutdown with a 15 minute timeoutIf graceful shutdown has not been completed before 15 minutes have
/// elapsed, the multiplayer server session will be forcefully terminated on it's own. Request object
/// for PlayFabMultiplayerShutdownMultiplayerServerAsync.
/// </summary>
typedef struct PlayFabMultiplayerShutdownMultiplayerServerRequest
{
    /// <summary>
    /// The guid string build ID of the multiplayer server to delete.
    /// </summary>
    const char* buildId;

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
    /// The region of the multiplayer server to shut down.
    /// </summary>
    const char* region;

    /// <summary>
    /// A guid string session ID of the multiplayer server to shut down.
    /// </summary>
    const char* sessionId;

} PlayFabMultiplayerShutdownMultiplayerServerRequest;

/// <summary>
/// PlayFabMultiplayerUntagContainerImageRequest data model. Removes the specified tag from the image.
/// After this operation, a 'docker pull' will fail for the specified image and tag combination. Morever,
/// ListContainerImageTags will not return the specified tag. Request object for PlayFabMultiplayerUntagContainerImageAsync.
/// </summary>
typedef struct PlayFabMultiplayerUntagContainerImageRequest
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
    /// (Optional) The container image which tag we want to remove.
    /// </summary>
    const char* imageName;

    /// <summary>
    /// (Optional) The tag we want to remove.
    /// </summary>
    const char* tag;

} PlayFabMultiplayerUntagContainerImageRequest;

/// <summary>
/// PlayFabMultiplayerUpdateBuildAliasRequest data model. Creates a multiplayer server build alias and
/// returns the created alias. Request object for PlayFabMultiplayerUpdateBuildAliasAsync.
/// </summary>
typedef struct PlayFabMultiplayerUpdateBuildAliasRequest
{
    /// <summary>
    /// The guid string alias Id of the alias to be updated.
    /// </summary>
    const char* aliasId;

    /// <summary>
    /// (Optional) The alias name.
    /// </summary>
    const char* aliasName;

    /// <summary>
    /// (Optional) Array of build selection criteria.
    /// </summary>
    PlayFabMultiplayerBuildSelectionCriterion const* const* buildSelectionCriteria;

    /// <summary>
    /// Count of buildSelectionCriteria
    /// </summary>
    uint32_t buildSelectionCriteriaCount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerUpdateBuildAliasRequest;

/// <summary>
/// PlayFabMultiplayerUpdateBuildNameRequest data model. Updates a multiplayer server build's name. Request
/// object for PlayFabMultiplayerUpdateBuildNameAsync.
/// </summary>
typedef struct PlayFabMultiplayerUpdateBuildNameRequest
{
    /// <summary>
    /// The guid string ID of the build we want to update the name of.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// The build name.
    /// </summary>
    const char* buildName;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerUpdateBuildNameRequest;

/// <summary>
/// PlayFabMultiplayerUpdateBuildRegionRequest data model. Updates a multiplayer server build's region.
/// Request object for PlayFabMultiplayerUpdateBuildRegionAsync.
/// </summary>
typedef struct PlayFabMultiplayerUpdateBuildRegionRequest
{
    /// <summary>
    /// The guid string ID of the build we want to update regions for.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// The updated region configuration that should be applied to the specified build.
    /// </summary>
    PlayFabMultiplayerBuildRegionParams const* buildRegion;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerUpdateBuildRegionRequest;

/// <summary>
/// PlayFabMultiplayerUpdateBuildRegionsRequest data model. Updates a multiplayer server build's regions.
/// Request object for PlayFabMultiplayerUpdateBuildRegionsAsync.
/// </summary>
typedef struct PlayFabMultiplayerUpdateBuildRegionsRequest
{
    /// <summary>
    /// The guid string ID of the build we want to update regions for.
    /// </summary>
    const char* buildId;

    /// <summary>
    /// The updated region configuration that should be applied to the specified build.
    /// </summary>
    PlayFabMultiplayerBuildRegionParams const* const* buildRegions;

    /// <summary>
    /// Count of buildRegions
    /// </summary>
    uint32_t buildRegionsCount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PlayFabStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

} PlayFabMultiplayerUpdateBuildRegionsRequest;

/// <summary>
/// PlayFabMultiplayerUploadCertificateRequest data model. Uploads a multiplayer server game certificate.
/// Request object for PlayFabMultiplayerUploadCertificateAsync.
/// </summary>
typedef struct PlayFabMultiplayerUploadCertificateRequest
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
    /// The game certificate to upload.
    /// </summary>
    PlayFabMultiplayerCertificate const* gameCertificate;

} PlayFabMultiplayerUploadCertificateRequest;

#pragma pop_macro("IN")

}
