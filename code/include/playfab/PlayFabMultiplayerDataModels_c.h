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

// Multiplayer enums
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
    ChinaEast2,
    ChinaNorth2,
    SouthAfricaNorth,
    CentralUsEuap,
    WestCentralUs,
    KoreaCentral,
    FranceCentral,
    WestUs2,
    CentralIndia,
    UaeNorth,
    UkSouth
};

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
    Dsv2
};

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
    Standard_DS5_v2
};

enum class PlayFabMultiplayerCancellationReason : uint32_t
{
    Requested,
    Internal,
    Timeout
};

enum class PlayFabMultiplayerContainerFlavor : uint32_t
{
    ManagedWindowsServerCore,
    CustomLinux,
    ManagedWindowsServerCorePreview,
    Invalid
};

enum class PlayFabMultiplayerOsPlatform : uint32_t
{
    Windows,
    Linux
};

enum class PlayFabMultiplayerProtocolType : uint32_t
{
    TCP,
    UDP
};

enum class PlayFabMultiplayerServerType : uint32_t
{
    Container,
    Process
};

enum class PlayFabMultiplayerTitleMultiplayerServerEnabledStatus : uint32_t
{
    Initializing,
    Enabled,
    Disabled
};


// Multiplayer structs
typedef struct PlayFabMultiplayerAssetReference
{
    const char* fileName;
    const char* mountPath;
} PlayFabMultiplayerAssetReference;

typedef struct PlayFabMultiplayerAssetReferenceParams
{
    const char* fileName;
    const char* mountPath;
} PlayFabMultiplayerAssetReferenceParams;

typedef struct PlayFabMultiplayerAssetSummary
{
    const char* fileName;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
} PlayFabMultiplayerAssetSummary;

typedef struct PlayFabMultiplayerBuildSelectionCriterion
{
    PF_MAP struct PlayFabUint32DictionaryEntry* buildWeightDistribution;
    PF_COLLECTION_COUNT uint32_t buildWeightDistributionCount;
} PlayFabMultiplayerBuildSelectionCriterion;

typedef struct PlayFabMultiplayerBuildAliasDetailsResponse
{
    const char* aliasId;
    const char* aliasName;
    PF_ARRAY PlayFabMultiplayerBuildSelectionCriterion** buildSelectionCriteria;
    PF_COLLECTION_COUNT uint32_t buildSelectionCriteriaCount;
    int32_t pageSize;
    const char* skipToken;
} PlayFabMultiplayerBuildAliasDetailsResponse;

typedef struct PlayFabMultiplayerBuildAliasParams
{
    const char* aliasId;
} PlayFabMultiplayerBuildAliasParams;

typedef struct PlayFabMultiplayerCurrentServerStats
{
    int32_t active;
    int32_t propping;
    int32_t standingBy;
    int32_t total;
} PlayFabMultiplayerCurrentServerStats;

typedef struct PlayFabMultiplayerDynamicStandbyThreshold
{
    double multiplier;
    double triggerThresholdPercentage;
} PlayFabMultiplayerDynamicStandbyThreshold;

typedef struct PlayFabMultiplayerDynamicStandbySettings
{
    PF_ARRAY PlayFabMultiplayerDynamicStandbyThreshold** dynamicFloorMultiplierThresholds;
    PF_COLLECTION_COUNT uint32_t dynamicFloorMultiplierThresholdsCount;
    bool isEnabled;
    PF_OPTIONAL int32_t* rampDownSeconds;
} PlayFabMultiplayerDynamicStandbySettings;

typedef struct PlayFabMultiplayerSchedule
{
    const char* description;
    time_t endTime;
    bool isDisabled;
    bool isRecurringWeekly;
    time_t startTime;
    int32_t targetStandby;
} PlayFabMultiplayerSchedule;

typedef struct PlayFabMultiplayerScheduledStandbySettings
{
    bool isEnabled;
    PF_ARRAY PlayFabMultiplayerSchedule** scheduleList;
    PF_COLLECTION_COUNT uint32_t scheduleListCount;
} PlayFabMultiplayerScheduledStandbySettings;

typedef struct PlayFabMultiplayerBuildRegion
{
    PF_OPTIONAL PlayFabMultiplayerCurrentServerStats* currentServerStats;
    PF_OPTIONAL PlayFabMultiplayerDynamicStandbySettings* dynamicStandbySettings;
    int32_t maxServers;
    const char* region;
    PF_OPTIONAL PlayFabMultiplayerScheduledStandbySettings* scheduledStandbySettings;
    int32_t standbyServers;
    const char* status;
} PlayFabMultiplayerBuildRegion;

typedef struct PlayFabMultiplayerBuildRegionParams
{
    PF_OPTIONAL PlayFabMultiplayerDynamicStandbySettings* dynamicStandbySettings;
    int32_t maxServers;
    const char* region;
    PF_OPTIONAL PlayFabMultiplayerScheduledStandbySettings* scheduledStandbySettings;
    int32_t standbyServers;
} PlayFabMultiplayerBuildRegionParams;

typedef struct PlayFabMultiplayerBuildSummary
{
    const char* buildId;
    const char* buildName;
    PF_OPTIONAL time_t* creationTime;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    PF_ARRAY PlayFabMultiplayerBuildRegion** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
} PlayFabMultiplayerBuildSummary;

typedef struct PlayFabMultiplayerEntityKey
{
    const char* id;
    const char* type;
} PlayFabMultiplayerEntityKey;

typedef struct PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabMultiplayerEntityKey* entity;
    const char* queueName;
} PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest;

typedef struct PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabMultiplayerEntityKey* entity;
    const char* queueName;
} PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest;

typedef struct PlayFabMultiplayerCancelMatchmakingTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* queueName;
    const char* ticketId;
} PlayFabMultiplayerCancelMatchmakingTicketRequest;

typedef struct PlayFabMultiplayerCancelServerBackfillTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* queueName;
    const char* ticketId;
} PlayFabMultiplayerCancelServerBackfillTicketRequest;

typedef struct PlayFabMultiplayerCertificate
{
    const char* base64EncodedValue;
    const char* name;
    const char* password;
} PlayFabMultiplayerCertificate;

typedef struct PlayFabMultiplayerCertificateSummary
{
    const char* name;
    const char* thumbprint;
} PlayFabMultiplayerCertificateSummary;

typedef struct PlayFabMultiplayerConnectedPlayer
{
    const char* playerId;
} PlayFabMultiplayerConnectedPlayer;

typedef struct PlayFabMultiplayerContainerImageReference
{
    const char* imageName;
    const char* tag;
} PlayFabMultiplayerContainerImageReference;

typedef struct PlayFabMultiplayerCoreCapacity
{
    int32_t available;
    const char* region;
    int32_t total;
    PF_OPTIONAL PlayFabMultiplayerAzureVmFamily* vmFamily;
} PlayFabMultiplayerCoreCapacity;

typedef struct PlayFabMultiplayerCoreCapacityChange
{
    int32_t newCoreLimit;
    const char* region;
    PlayFabMultiplayerAzureVmFamily vmFamily;
} PlayFabMultiplayerCoreCapacityChange;

typedef struct PlayFabMultiplayerCreateBuildAliasRequest
{
    const char* aliasName;
    PF_ARRAY PlayFabMultiplayerBuildSelectionCriterion** buildSelectionCriteria;
    PF_COLLECTION_COUNT uint32_t buildSelectionCriteriaCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerCreateBuildAliasRequest;

typedef struct PlayFabMultiplayerGameCertificateReferenceParams
{
    const char* gsdkAlias;
    const char* name;
} PlayFabMultiplayerGameCertificateReferenceParams;

typedef struct PlayFabMultiplayerLinuxInstrumentationConfiguration
{
    bool isEnabled;
} PlayFabMultiplayerLinuxInstrumentationConfiguration;

typedef struct PlayFabMultiplayerPort
{
    const char* name;
    int32_t num;
    PlayFabMultiplayerProtocolType protocol;
} PlayFabMultiplayerPort;

typedef struct PlayFabMultiplayerCreateBuildWithCustomContainerRequest
{
    PF_OPTIONAL bool* areAssetsReadonly;
    const char* buildName;
    PF_OPTIONAL PlayFabMultiplayerContainerFlavor* containerFlavor;
    PF_OPTIONAL PlayFabMultiplayerContainerImageReference* containerImageReference;
    const char* containerRunCommand;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabMultiplayerAssetReferenceParams** gameAssetReferences;
    PF_COLLECTION_COUNT uint32_t gameAssetReferencesCount;
    PF_ARRAY PlayFabMultiplayerGameCertificateReferenceParams** gameCertificateReferences;
    PF_COLLECTION_COUNT uint32_t gameCertificateReferencesCount;
    PF_OPTIONAL PlayFabMultiplayerLinuxInstrumentationConfiguration* linuxInstrumentationConfiguration;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t multiplayerServerCountPerVm;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    PF_ARRAY PlayFabMultiplayerBuildRegionParams** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
    PF_OPTIONAL bool* useStreamingForAssetDownloads;
    PF_OPTIONAL PlayFabMultiplayerAzureVmSize* vmSize;
} PlayFabMultiplayerCreateBuildWithCustomContainerRequest;

typedef struct PlayFabMultiplayerGameCertificateReference
{
    const char* gsdkAlias;
    const char* name;
} PlayFabMultiplayerGameCertificateReference;

typedef struct PlayFabMultiplayerCreateBuildWithCustomContainerResponse
{
    PF_OPTIONAL bool* areAssetsReadonly;
    const char* buildId;
    const char* buildName;
    PF_OPTIONAL PlayFabMultiplayerContainerFlavor* containerFlavor;
    const char* containerRunCommand;
    PF_OPTIONAL time_t* creationTime;
    PF_OPTIONAL PlayFabMultiplayerContainerImageReference* customGameContainerImage;
    PF_ARRAY PlayFabMultiplayerAssetReference** gameAssetReferences;
    PF_COLLECTION_COUNT uint32_t gameAssetReferencesCount;
    PF_ARRAY PlayFabMultiplayerGameCertificateReference** gameCertificateReferences;
    PF_COLLECTION_COUNT uint32_t gameCertificateReferencesCount;
    PF_OPTIONAL PlayFabMultiplayerLinuxInstrumentationConfiguration* linuxInstrumentationConfiguration;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t multiplayerServerCountPerVm;
    const char* osPlatform;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    PF_ARRAY PlayFabMultiplayerBuildRegion** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
    const char* serverType;
    PF_OPTIONAL bool* useStreamingForAssetDownloads;
    PF_OPTIONAL PlayFabMultiplayerAzureVmSize* vmSize;
} PlayFabMultiplayerCreateBuildWithCustomContainerResponse;

typedef struct PlayFabMultiplayerInstrumentationConfiguration
{
    PF_ARRAY const char** processesToMonitor;
    PF_COLLECTION_COUNT uint32_t processesToMonitorCount;
} PlayFabMultiplayerInstrumentationConfiguration;

typedef struct PlayFabMultiplayerCreateBuildWithManagedContainerRequest
{
    PF_OPTIONAL bool* areAssetsReadonly;
    const char* buildName;
    PF_OPTIONAL PlayFabMultiplayerContainerFlavor* containerFlavor;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabMultiplayerAssetReferenceParams** gameAssetReferences;
    PF_COLLECTION_COUNT uint32_t gameAssetReferencesCount;
    PF_ARRAY PlayFabMultiplayerGameCertificateReferenceParams** gameCertificateReferences;
    PF_COLLECTION_COUNT uint32_t gameCertificateReferencesCount;
    const char* gameWorkingDirectory;
    PF_OPTIONAL PlayFabMultiplayerInstrumentationConfiguration* instrumentationConfiguration;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t multiplayerServerCountPerVm;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    PF_ARRAY PlayFabMultiplayerBuildRegionParams** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
    const char* startMultiplayerServerCommand;
    PF_OPTIONAL bool* useStreamingForAssetDownloads;
    PF_OPTIONAL PlayFabMultiplayerAzureVmSize* vmSize;
} PlayFabMultiplayerCreateBuildWithManagedContainerRequest;

typedef struct PlayFabMultiplayerCreateBuildWithManagedContainerResponse
{
    PF_OPTIONAL bool* areAssetsReadonly;
    const char* buildId;
    const char* buildName;
    PF_OPTIONAL PlayFabMultiplayerContainerFlavor* containerFlavor;
    PF_OPTIONAL time_t* creationTime;
    PF_ARRAY PlayFabMultiplayerAssetReference** gameAssetReferences;
    PF_COLLECTION_COUNT uint32_t gameAssetReferencesCount;
    PF_ARRAY PlayFabMultiplayerGameCertificateReference** gameCertificateReferences;
    PF_COLLECTION_COUNT uint32_t gameCertificateReferencesCount;
    const char* gameWorkingDirectory;
    PF_OPTIONAL PlayFabMultiplayerInstrumentationConfiguration* instrumentationConfiguration;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t multiplayerServerCountPerVm;
    const char* osPlatform;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    PF_ARRAY PlayFabMultiplayerBuildRegion** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
    const char* serverType;
    const char* startMultiplayerServerCommand;
    PF_OPTIONAL bool* useStreamingForAssetDownloads;
    PF_OPTIONAL PlayFabMultiplayerAzureVmSize* vmSize;
} PlayFabMultiplayerCreateBuildWithManagedContainerResponse;

typedef struct PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest
{
    PF_OPTIONAL bool* areAssetsReadonly;
    const char* buildName;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY PlayFabMultiplayerAssetReferenceParams** gameAssetReferences;
    PF_COLLECTION_COUNT uint32_t gameAssetReferencesCount;
    PF_ARRAY PlayFabMultiplayerGameCertificateReferenceParams** gameCertificateReferences;
    PF_COLLECTION_COUNT uint32_t gameCertificateReferencesCount;
    const char* gameWorkingDirectory;
    PF_OPTIONAL PlayFabMultiplayerInstrumentationConfiguration* instrumentationConfiguration;
    PF_OPTIONAL bool* isOSPreview;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t multiplayerServerCountPerVm;
    const char* osPlatform;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    PF_ARRAY PlayFabMultiplayerBuildRegionParams** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
    const char* startMultiplayerServerCommand;
    PF_OPTIONAL bool* useStreamingForAssetDownloads;
    PF_OPTIONAL PlayFabMultiplayerAzureVmSize* vmSize;
} PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest;

typedef struct PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse
{
    PF_OPTIONAL bool* areAssetsReadonly;
    const char* buildId;
    const char* buildName;
    PF_OPTIONAL PlayFabMultiplayerContainerFlavor* containerFlavor;
    PF_OPTIONAL time_t* creationTime;
    PF_ARRAY PlayFabMultiplayerAssetReference** gameAssetReferences;
    PF_COLLECTION_COUNT uint32_t gameAssetReferencesCount;
    PF_ARRAY PlayFabMultiplayerGameCertificateReference** gameCertificateReferences;
    PF_COLLECTION_COUNT uint32_t gameCertificateReferencesCount;
    const char* gameWorkingDirectory;
    PF_OPTIONAL PlayFabMultiplayerInstrumentationConfiguration* instrumentationConfiguration;
    PF_OPTIONAL bool* isOSPreview;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t multiplayerServerCountPerVm;
    const char* osPlatform;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    PF_ARRAY PlayFabMultiplayerBuildRegion** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
    const char* serverType;
    const char* startMultiplayerServerCommand;
    PF_OPTIONAL bool* useStreamingForAssetDownloads;
    PF_OPTIONAL PlayFabMultiplayerAzureVmSize* vmSize;
} PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse;

typedef struct PlayFabMultiplayerMatchmakingPlayerAttributes
{
    PlayFabJsonObject dataObject;
    const char* escapedDataObject;
} PlayFabMultiplayerMatchmakingPlayerAttributes;

typedef struct PlayFabMultiplayerMatchmakingPlayer
{
    PF_OPTIONAL PlayFabMultiplayerMatchmakingPlayerAttributes* attributes;
    PlayFabMultiplayerEntityKey* entity;
} PlayFabMultiplayerMatchmakingPlayer;

typedef struct PlayFabMultiplayerCreateMatchmakingTicketRequest
{
    PlayFabMultiplayerMatchmakingPlayer* creator;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t giveUpAfterSeconds;
    PF_ARRAY PlayFabMultiplayerEntityKey** membersToMatchWith;
    PF_COLLECTION_COUNT uint32_t membersToMatchWithCount;
    const char* queueName;
} PlayFabMultiplayerCreateMatchmakingTicketRequest;

typedef struct PlayFabMultiplayerCreateMatchmakingTicketResult
{
    const char* ticketId;
} PlayFabMultiplayerCreateMatchmakingTicketResult;

typedef struct PlayFabMultiplayerCreateRemoteUserRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL time_t* expirationTime;
    const char* region;
    const char* username;
    const char* vmId;
} PlayFabMultiplayerCreateRemoteUserRequest;

typedef struct PlayFabMultiplayerCreateRemoteUserResponse
{
    PF_OPTIONAL time_t* expirationTime;
    const char* password;
    const char* username;
} PlayFabMultiplayerCreateRemoteUserResponse;

typedef struct PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment
{
    PF_OPTIONAL PlayFabMultiplayerMatchmakingPlayerAttributes* attributes;
    PlayFabMultiplayerEntityKey* entity;
    const char* teamId;
} PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment;

typedef struct PlayFabMultiplayerServerDetails
{
    const char* iPV4Address;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    const char* region;
} PlayFabMultiplayerServerDetails;

typedef struct PlayFabMultiplayerCreateServerBackfillTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t giveUpAfterSeconds;
    PF_ARRAY PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    const char* queueName;
    PF_OPTIONAL PlayFabMultiplayerServerDetails* serverDetails;
} PlayFabMultiplayerCreateServerBackfillTicketRequest;

typedef struct PlayFabMultiplayerCreateServerBackfillTicketResult
{
    const char* ticketId;
} PlayFabMultiplayerCreateServerBackfillTicketResult;

typedef struct PlayFabMultiplayerCreateServerMatchmakingTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    int32_t giveUpAfterSeconds;
    PF_ARRAY PlayFabMultiplayerMatchmakingPlayer** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    const char* queueName;
} PlayFabMultiplayerCreateServerMatchmakingTicketRequest;

typedef struct PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest
{
    const char* changeDescription;
    PF_ARRAY PlayFabMultiplayerCoreCapacityChange** changes;
    PF_COLLECTION_COUNT uint32_t changesCount;
    const char* contactEmail;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* notes;
    PF_OPTIONAL time_t* startDate;
} PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest;

typedef struct PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse
{
    const char* requestId;
    bool wasApproved;
} PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse;

typedef struct PlayFabMultiplayerDeleteAssetRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* fileName;
} PlayFabMultiplayerDeleteAssetRequest;

typedef struct PlayFabMultiplayerDeleteBuildAliasRequest
{
    const char* aliasId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerDeleteBuildAliasRequest;

typedef struct PlayFabMultiplayerDeleteBuildRegionRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* region;
} PlayFabMultiplayerDeleteBuildRegionRequest;

typedef struct PlayFabMultiplayerDeleteBuildRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerDeleteBuildRequest;

typedef struct PlayFabMultiplayerDeleteCertificateRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* name;
} PlayFabMultiplayerDeleteCertificateRequest;

typedef struct PlayFabMultiplayerDeleteContainerImageRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* imageName;
} PlayFabMultiplayerDeleteContainerImageRequest;

typedef struct PlayFabMultiplayerDeleteRemoteUserRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* region;
    const char* username;
    const char* vmId;
} PlayFabMultiplayerDeleteRemoteUserRequest;

typedef struct PlayFabMultiplayerEnableMultiplayerServersForTitleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerEnableMultiplayerServersForTitleRequest;

typedef struct PlayFabMultiplayerEnableMultiplayerServersForTitleResponse
{
    PF_OPTIONAL PlayFabMultiplayerTitleMultiplayerServerEnabledStatus* status;
} PlayFabMultiplayerEnableMultiplayerServersForTitleResponse;

typedef struct PlayFabMultiplayerGetAssetUploadUrlRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* fileName;
} PlayFabMultiplayerGetAssetUploadUrlRequest;

typedef struct PlayFabMultiplayerGetAssetUploadUrlResponse
{
    const char* assetUploadUrl;
    const char* fileName;
} PlayFabMultiplayerGetAssetUploadUrlResponse;

typedef struct PlayFabMultiplayerGetBuildAliasRequest
{
    const char* aliasId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerGetBuildAliasRequest;

typedef struct PlayFabMultiplayerGetBuildRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerGetBuildRequest;

typedef struct PlayFabMultiplayerGetBuildResponse
{
    PF_OPTIONAL bool* areAssetsReadonly;
    const char* buildId;
    const char* buildName;
    const char* buildStatus;
    PF_OPTIONAL PlayFabMultiplayerContainerFlavor* containerFlavor;
    const char* containerRunCommand;
    PF_OPTIONAL time_t* creationTime;
    PF_OPTIONAL PlayFabMultiplayerContainerImageReference* customGameContainerImage;
    PF_ARRAY PlayFabMultiplayerAssetReference** gameAssetReferences;
    PF_COLLECTION_COUNT uint32_t gameAssetReferencesCount;
    PF_ARRAY PlayFabMultiplayerGameCertificateReference** gameCertificateReferences;
    PF_COLLECTION_COUNT uint32_t gameCertificateReferencesCount;
    PF_OPTIONAL PlayFabMultiplayerInstrumentationConfiguration* instrumentationConfiguration;
    PF_MAP struct PlayFabStringDictionaryEntry* metadata;
    PF_COLLECTION_COUNT uint32_t metadataCount;
    int32_t multiplayerServerCountPerVm;
    const char* osPlatform;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    PF_ARRAY PlayFabMultiplayerBuildRegion** regionConfigurations;
    PF_COLLECTION_COUNT uint32_t regionConfigurationsCount;
    const char* serverType;
    const char* startMultiplayerServerCommand;
    PF_OPTIONAL bool* useStreamingForAssetDownloads;
    PF_OPTIONAL PlayFabMultiplayerAzureVmSize* vmSize;
} PlayFabMultiplayerGetBuildResponse;

typedef struct PlayFabMultiplayerGetContainerRegistryCredentialsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerGetContainerRegistryCredentialsRequest;

typedef struct PlayFabMultiplayerGetContainerRegistryCredentialsResponse
{
    const char* dnsName;
    const char* password;
    const char* username;
} PlayFabMultiplayerGetContainerRegistryCredentialsResponse;

typedef struct PlayFabMultiplayerGetMatchmakingTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    bool escapeObject;
    const char* queueName;
    const char* ticketId;
} PlayFabMultiplayerGetMatchmakingTicketRequest;

typedef struct PlayFabMultiplayerGetMatchmakingTicketResult
{
    const char* cancellationReasonString;
    time_t created;
    PlayFabMultiplayerEntityKey* creator;
    int32_t giveUpAfterSeconds;
    const char* matchId;
    PF_ARRAY PlayFabMultiplayerMatchmakingPlayer** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    PF_ARRAY PlayFabMultiplayerEntityKey** membersToMatchWith;
    PF_COLLECTION_COUNT uint32_t membersToMatchWithCount;
    const char* queueName;
    const char* status;
    const char* ticketId;
} PlayFabMultiplayerGetMatchmakingTicketResult;

typedef struct PlayFabMultiplayerGetMatchRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    bool escapeObject;
    const char* matchId;
    const char* queueName;
    bool returnMemberAttributes;
} PlayFabMultiplayerGetMatchRequest;

typedef struct PlayFabMultiplayerGetMatchResult
{
    const char* matchId;
    PF_ARRAY PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    PF_ARRAY const char** regionPreferences;
    PF_COLLECTION_COUNT uint32_t regionPreferencesCount;
    PF_OPTIONAL PlayFabMultiplayerServerDetails* serverDetails;
} PlayFabMultiplayerGetMatchResult;

typedef struct PlayFabMultiplayerGetMultiplayerServerDetailsRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* region;
    const char* sessionId;
} PlayFabMultiplayerGetMultiplayerServerDetailsRequest;

typedef struct PlayFabMultiplayerGetMultiplayerServerDetailsResponse
{
    PF_ARRAY PlayFabMultiplayerConnectedPlayer** connectedPlayers;
    PF_COLLECTION_COUNT uint32_t connectedPlayersCount;
    const char* fQDN;
    const char* iPV4Address;
    PF_OPTIONAL time_t* lastStateTransitionTime;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    const char* region;
    const char* serverId;
    const char* sessionId;
    const char* state;
    const char* vmId;
} PlayFabMultiplayerGetMultiplayerServerDetailsResponse;

typedef struct PlayFabMultiplayerGetMultiplayerServerLogsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* serverId;
} PlayFabMultiplayerGetMultiplayerServerLogsRequest;

typedef struct PlayFabMultiplayerGetMultiplayerServerLogsResponse
{
    const char* logDownloadUrl;
} PlayFabMultiplayerGetMultiplayerServerLogsResponse;

typedef struct PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* sessionId;
} PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest;

typedef struct PlayFabMultiplayerGetQueueStatisticsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* queueName;
} PlayFabMultiplayerGetQueueStatisticsRequest;

typedef struct PlayFabMultiplayerStatistics
{
    double average;
    double percentile50;
    double percentile90;
    double percentile99;
} PlayFabMultiplayerStatistics;

typedef struct PlayFabMultiplayerGetQueueStatisticsResult
{
    PF_OPTIONAL uint32_t* numberOfPlayersMatching;
    PF_OPTIONAL PlayFabMultiplayerStatistics* timeToMatchStatisticsInSeconds;
} PlayFabMultiplayerGetQueueStatisticsResult;

typedef struct PlayFabMultiplayerGetRemoteLoginEndpointRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* region;
    const char* vmId;
} PlayFabMultiplayerGetRemoteLoginEndpointRequest;

typedef struct PlayFabMultiplayerGetRemoteLoginEndpointResponse
{
    const char* iPV4Address;
    int32_t port;
} PlayFabMultiplayerGetRemoteLoginEndpointResponse;

typedef struct PlayFabMultiplayerGetServerBackfillTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    bool escapeObject;
    const char* queueName;
    const char* ticketId;
} PlayFabMultiplayerGetServerBackfillTicketRequest;

typedef struct PlayFabMultiplayerGetServerBackfillTicketResult
{
    const char* cancellationReasonString;
    time_t created;
    int32_t giveUpAfterSeconds;
    const char* matchId;
    PF_ARRAY PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment** members;
    PF_COLLECTION_COUNT uint32_t membersCount;
    const char* queueName;
    PlayFabMultiplayerServerDetails* serverDetails;
    const char* status;
    const char* ticketId;
} PlayFabMultiplayerGetServerBackfillTicketResult;

typedef struct PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest;

typedef struct PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
{
    PF_OPTIONAL PlayFabMultiplayerTitleMultiplayerServerEnabledStatus* status;
} PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse;

typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* requestId;
} PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest;

typedef struct PlayFabMultiplayerQuotaChange
{
    const char* changeDescription;
    PF_ARRAY PlayFabMultiplayerCoreCapacityChange** changes;
    PF_COLLECTION_COUNT uint32_t changesCount;
    bool isPendingReview;
    const char* notes;
    const char* requestId;
    const char* reviewComments;
    bool wasApproved;
} PlayFabMultiplayerQuotaChange;

typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse
{
    PF_OPTIONAL PlayFabMultiplayerQuotaChange* change;
} PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse;

typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest;

typedef struct PlayFabMultiplayerTitleMultiplayerServersQuotas
{
    PF_ARRAY PlayFabMultiplayerCoreCapacity** coreCapacities;
    PF_COLLECTION_COUNT uint32_t coreCapacitiesCount;
} PlayFabMultiplayerTitleMultiplayerServersQuotas;

typedef struct PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse
{
    PF_OPTIONAL PlayFabMultiplayerTitleMultiplayerServersQuotas* quotas;
} PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse;

typedef struct PlayFabMultiplayerJoinMatchmakingTicketRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabMultiplayerMatchmakingPlayer* member;
    const char* queueName;
    const char* ticketId;
} PlayFabMultiplayerJoinMatchmakingTicketRequest;

typedef struct PlayFabMultiplayerListAssetSummariesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* pageSize;
    const char* skipToken;
} PlayFabMultiplayerListAssetSummariesRequest;

typedef struct PlayFabMultiplayerListAssetSummariesResponse
{
    PF_ARRAY PlayFabMultiplayerAssetSummary** assetSummaries;
    PF_COLLECTION_COUNT uint32_t assetSummariesCount;
    int32_t pageSize;
    const char* skipToken;
} PlayFabMultiplayerListAssetSummariesResponse;

typedef struct PlayFabMultiplayerListBuildAliasesForTitleResponse
{
    PF_ARRAY PlayFabMultiplayerBuildAliasDetailsResponse** buildAliases;
    PF_COLLECTION_COUNT uint32_t buildAliasesCount;
} PlayFabMultiplayerListBuildAliasesForTitleResponse;

typedef struct PlayFabMultiplayerListBuildSummariesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* pageSize;
    const char* skipToken;
} PlayFabMultiplayerListBuildSummariesRequest;

typedef struct PlayFabMultiplayerListBuildSummariesResponse
{
    PF_ARRAY PlayFabMultiplayerBuildSummary** buildSummaries;
    PF_COLLECTION_COUNT uint32_t buildSummariesCount;
    int32_t pageSize;
    const char* skipToken;
} PlayFabMultiplayerListBuildSummariesResponse;

typedef struct PlayFabMultiplayerListCertificateSummariesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* pageSize;
    const char* skipToken;
} PlayFabMultiplayerListCertificateSummariesRequest;

typedef struct PlayFabMultiplayerListCertificateSummariesResponse
{
    PF_ARRAY PlayFabMultiplayerCertificateSummary** certificateSummaries;
    PF_COLLECTION_COUNT uint32_t certificateSummariesCount;
    int32_t pageSize;
    const char* skipToken;
} PlayFabMultiplayerListCertificateSummariesResponse;

typedef struct PlayFabMultiplayerListContainerImagesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* pageSize;
    const char* skipToken;
} PlayFabMultiplayerListContainerImagesRequest;

typedef struct PlayFabMultiplayerListContainerImagesResponse
{
    PF_ARRAY const char** images;
    PF_COLLECTION_COUNT uint32_t imagesCount;
    int32_t pageSize;
    const char* skipToken;
} PlayFabMultiplayerListContainerImagesResponse;

typedef struct PlayFabMultiplayerListContainerImageTagsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* imageName;
} PlayFabMultiplayerListContainerImageTagsRequest;

typedef struct PlayFabMultiplayerListContainerImageTagsResponse
{
    PF_ARRAY const char** tags;
    PF_COLLECTION_COUNT uint32_t tagsCount;
} PlayFabMultiplayerListContainerImageTagsResponse;

typedef struct PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL PlayFabMultiplayerEntityKey* entity;
    const char* queueName;
} PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest;

typedef struct PlayFabMultiplayerListMatchmakingTicketsForPlayerResult
{
    PF_ARRAY const char** ticketIds;
    PF_COLLECTION_COUNT uint32_t ticketIdsCount;
} PlayFabMultiplayerListMatchmakingTicketsForPlayerResult;

typedef struct PlayFabMultiplayerListMultiplayerServersRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* pageSize;
    const char* region;
    const char* skipToken;
} PlayFabMultiplayerListMultiplayerServersRequest;

typedef struct PlayFabMultiplayerMultiplayerServerSummary
{
    PF_ARRAY PlayFabMultiplayerConnectedPlayer** connectedPlayers;
    PF_COLLECTION_COUNT uint32_t connectedPlayersCount;
    PF_OPTIONAL time_t* lastStateTransitionTime;
    const char* region;
    const char* serverId;
    const char* sessionId;
    const char* state;
    const char* vmId;
} PlayFabMultiplayerMultiplayerServerSummary;

typedef struct PlayFabMultiplayerListMultiplayerServersResponse
{
    PF_ARRAY PlayFabMultiplayerMultiplayerServerSummary** multiplayerServerSummaries;
    PF_COLLECTION_COUNT uint32_t multiplayerServerSummariesCount;
    int32_t pageSize;
    const char* skipToken;
} PlayFabMultiplayerListMultiplayerServersResponse;

typedef struct PlayFabMultiplayerListPartyQosServersRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerListPartyQosServersRequest;

typedef struct PlayFabMultiplayerQosServer
{
    const char* region;
    const char* serverUrl;
} PlayFabMultiplayerQosServer;

typedef struct PlayFabMultiplayerListPartyQosServersResponse
{
    int32_t pageSize;
    PF_ARRAY PlayFabMultiplayerQosServer** qosServers;
    PF_COLLECTION_COUNT uint32_t qosServersCount;
    const char* skipToken;
} PlayFabMultiplayerListPartyQosServersResponse;

typedef struct PlayFabMultiplayerListQosServersForTitleRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL bool* includeAllRegions;
} PlayFabMultiplayerListQosServersForTitleRequest;

typedef struct PlayFabMultiplayerListQosServersForTitleResponse
{
    int32_t pageSize;
    PF_ARRAY PlayFabMultiplayerQosServer** qosServers;
    PF_COLLECTION_COUNT uint32_t qosServersCount;
    const char* skipToken;
} PlayFabMultiplayerListQosServersForTitleResponse;

typedef struct PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabMultiplayerEntityKey* entity;
    const char* queueName;
} PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest;

typedef struct PlayFabMultiplayerListServerBackfillTicketsForPlayerResult
{
    PF_ARRAY const char** ticketIds;
    PF_COLLECTION_COUNT uint32_t ticketIdsCount;
} PlayFabMultiplayerListServerBackfillTicketsForPlayerResult;

typedef struct PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest;

typedef struct PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse
{
    PF_ARRAY PlayFabMultiplayerQuotaChange** changes;
    PF_COLLECTION_COUNT uint32_t changesCount;
} PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse;

typedef struct PlayFabMultiplayerListVirtualMachineSummariesRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_OPTIONAL int32_t* pageSize;
    const char* region;
    const char* skipToken;
} PlayFabMultiplayerListVirtualMachineSummariesRequest;

typedef struct PlayFabMultiplayerVirtualMachineSummary
{
    const char* healthStatus;
    const char* state;
    const char* vmId;
} PlayFabMultiplayerVirtualMachineSummary;

typedef struct PlayFabMultiplayerListVirtualMachineSummariesResponse
{
    int32_t pageSize;
    const char* skipToken;
    PF_ARRAY PlayFabMultiplayerVirtualMachineSummary** virtualMachines;
    PF_COLLECTION_COUNT uint32_t virtualMachinesCount;
} PlayFabMultiplayerListVirtualMachineSummariesResponse;

typedef struct PlayFabMultiplayerMultiplayerEmptyRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerMultiplayerEmptyRequest;

typedef struct PlayFabMultiplayerRequestMultiplayerServerRequest
{
    PF_OPTIONAL PlayFabMultiplayerBuildAliasParams* buildAliasParams;
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PF_ARRAY const char** initialPlayers;
    PF_COLLECTION_COUNT uint32_t initialPlayersCount;
    PF_ARRAY const char** preferredRegions;
    PF_COLLECTION_COUNT uint32_t preferredRegionsCount;
    const char* sessionCookie;
    const char* sessionId;
} PlayFabMultiplayerRequestMultiplayerServerRequest;

typedef struct PlayFabMultiplayerRequestMultiplayerServerResponse
{
    PF_ARRAY PlayFabMultiplayerConnectedPlayer** connectedPlayers;
    PF_COLLECTION_COUNT uint32_t connectedPlayersCount;
    const char* fQDN;
    const char* iPV4Address;
    PF_OPTIONAL time_t* lastStateTransitionTime;
    PF_ARRAY PlayFabMultiplayerPort** ports;
    PF_COLLECTION_COUNT uint32_t portsCount;
    const char* region;
    const char* serverId;
    const char* sessionId;
    const char* state;
    const char* vmId;
} PlayFabMultiplayerRequestMultiplayerServerResponse;

typedef struct PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest;

typedef struct PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse
{
    const char* dnsName;
    const char* password;
    const char* username;
} PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse;

typedef struct PlayFabMultiplayerShutdownMultiplayerServerRequest
{
    const char* buildId;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* region;
    const char* sessionId;
} PlayFabMultiplayerShutdownMultiplayerServerRequest;

typedef struct PlayFabMultiplayerUntagContainerImageRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    const char* imageName;
    const char* tag;
} PlayFabMultiplayerUntagContainerImageRequest;

typedef struct PlayFabMultiplayerUpdateBuildAliasRequest
{
    const char* aliasId;
    const char* aliasName;
    PF_ARRAY PlayFabMultiplayerBuildSelectionCriterion** buildSelectionCriteria;
    PF_COLLECTION_COUNT uint32_t buildSelectionCriteriaCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerUpdateBuildAliasRequest;

typedef struct PlayFabMultiplayerUpdateBuildNameRequest
{
    const char* buildId;
    const char* buildName;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerUpdateBuildNameRequest;

typedef struct PlayFabMultiplayerUpdateBuildRegionRequest
{
    const char* buildId;
    PlayFabMultiplayerBuildRegionParams* buildRegion;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerUpdateBuildRegionRequest;

typedef struct PlayFabMultiplayerUpdateBuildRegionsRequest
{
    const char* buildId;
    PF_ARRAY PlayFabMultiplayerBuildRegionParams** buildRegions;
    PF_COLLECTION_COUNT uint32_t buildRegionsCount;
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
} PlayFabMultiplayerUpdateBuildRegionsRequest;

typedef struct PlayFabMultiplayerUploadCertificateRequest
{
    PF_MAP struct PlayFabStringDictionaryEntry* customTags;
    PF_COLLECTION_COUNT uint32_t customTagsCount;
    PlayFabMultiplayerCertificate* gameCertificate;
} PlayFabMultiplayerUploadCertificateRequest;


// Multiplayer dictionary entry structs

#pragma pop_macro("IN")

}
