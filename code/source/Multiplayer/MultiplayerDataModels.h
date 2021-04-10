#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabMultiplayerDataModels_c.h>
#include "BaseModel.h"
#include "JsonUtils.h"

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerAssetReference& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            JsonUtils::ObjectAddMember(output, "MountPath", input.mountPath);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerAssetReferenceParams& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            JsonUtils::ObjectAddMember(output, "MountPath", input.mountPath);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerAssetSummary& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerBuildSelectionCriterion& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildWeightDistribution", input.buildWeightDistribution, input.buildWeightDistributionCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerBuildAliasDetailsResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
            JsonUtils::ObjectAddMember(output, "AliasName", input.aliasName);
            JsonUtils::ObjectAddMember(output, "BuildSelectionCriteria", input.buildSelectionCriteria, input.buildSelectionCriteriaCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerBuildAliasParams& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCurrentServerStats& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Active", input.active);
            JsonUtils::ObjectAddMember(output, "Propping", input.propping);
            JsonUtils::ObjectAddMember(output, "StandingBy", input.standingBy);
            JsonUtils::ObjectAddMember(output, "Total", input.total);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDynamicStandbyThreshold& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Multiplier", input.multiplier);
            JsonUtils::ObjectAddMember(output, "TriggerThresholdPercentage", input.triggerThresholdPercentage);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDynamicStandbySettings& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DynamicFloorMultiplierThresholds", input.dynamicFloorMultiplierThresholds, input.dynamicFloorMultiplierThresholdsCount);
            JsonUtils::ObjectAddMember(output, "IsEnabled", input.isEnabled);
            JsonUtils::ObjectAddMember(output, "RampDownSeconds", input.rampDownSeconds);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerSchedule& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Description", input.description);
            JsonUtils::ObjectAddMember(output, "EndTime", input.endTime, true);
            JsonUtils::ObjectAddMember(output, "IsDisabled", input.isDisabled);
            JsonUtils::ObjectAddMember(output, "IsRecurringWeekly", input.isRecurringWeekly);
            JsonUtils::ObjectAddMember(output, "StartTime", input.startTime, true);
            JsonUtils::ObjectAddMember(output, "TargetStandby", input.targetStandby);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerScheduledStandbySettings& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IsEnabled", input.isEnabled);
            JsonUtils::ObjectAddMember(output, "ScheduleList", input.scheduleList, input.scheduleListCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerBuildRegion& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CurrentServerStats", input.currentServerStats);
            JsonUtils::ObjectAddMember(output, "DynamicStandbySettings", input.dynamicStandbySettings);
            JsonUtils::ObjectAddMember(output, "MaxServers", input.maxServers);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "ScheduledStandbySettings", input.scheduledStandbySettings);
            JsonUtils::ObjectAddMember(output, "StandbyServers", input.standbyServers);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerBuildRegionParams& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DynamicStandbySettings", input.dynamicStandbySettings);
            JsonUtils::ObjectAddMember(output, "MaxServers", input.maxServers);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "ScheduledStandbySettings", input.scheduledStandbySettings);
            JsonUtils::ObjectAddMember(output, "StandbyServers", input.standbyServers);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerBuildSummary& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "CreationTime", input.creationTime, true);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerEntityKey& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCancelMatchmakingTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCancelServerBackfillTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCertificate& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Base64EncodedValue", input.base64EncodedValue);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCertificateSummary& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Thumbprint", input.thumbprint);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerConnectedPlayer& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerContainerImageReference& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
            JsonUtils::ObjectAddMember(output, "Tag", input.tag);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCoreCapacity& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Available", input.available);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "Total", input.total);
            JsonUtils::ObjectAddMember(output, "VmFamily", input.vmFamily);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCoreCapacityChange& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NewCoreLimit", input.newCoreLimit);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "VmFamily", input.vmFamily);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildAliasRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AliasName", input.aliasName);
            JsonUtils::ObjectAddMember(output, "BuildSelectionCriteria", input.buildSelectionCriteria, input.buildSelectionCriteriaCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGameCertificateReferenceParams& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GsdkAlias", input.gsdkAlias);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerLinuxInstrumentationConfiguration& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IsEnabled", input.isEnabled);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerPort& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Num", input.num);
            JsonUtils::ObjectAddMember(output, "Protocol", input.protocol);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AreAssetsReadonly", input.areAssetsReadonly);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "ContainerFlavor", input.containerFlavor);
            JsonUtils::ObjectAddMember(output, "ContainerImageReference", input.containerImageReference);
            JsonUtils::ObjectAddMember(output, "ContainerRunCommand", input.containerRunCommand);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GameAssetReferences", input.gameAssetReferences, input.gameAssetReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameCertificateReferences", input.gameCertificateReferences, input.gameCertificateReferencesCount);
            JsonUtils::ObjectAddMember(output, "LinuxInstrumentationConfiguration", input.linuxInstrumentationConfiguration);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "MultiplayerServerCountPerVm", input.multiplayerServerCountPerVm);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            JsonUtils::ObjectAddMember(output, "UseStreamingForAssetDownloads", input.useStreamingForAssetDownloads);
            JsonUtils::ObjectAddMember(output, "VmSize", input.vmSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGameCertificateReference& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "GsdkAlias", input.gsdkAlias);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithCustomContainerResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AreAssetsReadonly", input.areAssetsReadonly);
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "ContainerFlavor", input.containerFlavor);
            JsonUtils::ObjectAddMember(output, "ContainerRunCommand", input.containerRunCommand);
            JsonUtils::ObjectAddMember(output, "CreationTime", input.creationTime, true);
            JsonUtils::ObjectAddMember(output, "CustomGameContainerImage", input.customGameContainerImage);
            JsonUtils::ObjectAddMember(output, "GameAssetReferences", input.gameAssetReferences, input.gameAssetReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameCertificateReferences", input.gameCertificateReferences, input.gameCertificateReferencesCount);
            JsonUtils::ObjectAddMember(output, "LinuxInstrumentationConfiguration", input.linuxInstrumentationConfiguration);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "MultiplayerServerCountPerVm", input.multiplayerServerCountPerVm);
            JsonUtils::ObjectAddMember(output, "OsPlatform", input.osPlatform);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            JsonUtils::ObjectAddMember(output, "ServerType", input.serverType);
            JsonUtils::ObjectAddMember(output, "UseStreamingForAssetDownloads", input.useStreamingForAssetDownloads);
            JsonUtils::ObjectAddMember(output, "VmSize", input.vmSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerInstrumentationConfiguration& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ProcessesToMonitor", input.processesToMonitor, input.processesToMonitorCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AreAssetsReadonly", input.areAssetsReadonly);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "ContainerFlavor", input.containerFlavor);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GameAssetReferences", input.gameAssetReferences, input.gameAssetReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameCertificateReferences", input.gameCertificateReferences, input.gameCertificateReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameWorkingDirectory", input.gameWorkingDirectory);
            JsonUtils::ObjectAddMember(output, "InstrumentationConfiguration", input.instrumentationConfiguration);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "MultiplayerServerCountPerVm", input.multiplayerServerCountPerVm);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            JsonUtils::ObjectAddMember(output, "StartMultiplayerServerCommand", input.startMultiplayerServerCommand);
            JsonUtils::ObjectAddMember(output, "UseStreamingForAssetDownloads", input.useStreamingForAssetDownloads);
            JsonUtils::ObjectAddMember(output, "VmSize", input.vmSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithManagedContainerResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AreAssetsReadonly", input.areAssetsReadonly);
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "ContainerFlavor", input.containerFlavor);
            JsonUtils::ObjectAddMember(output, "CreationTime", input.creationTime, true);
            JsonUtils::ObjectAddMember(output, "GameAssetReferences", input.gameAssetReferences, input.gameAssetReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameCertificateReferences", input.gameCertificateReferences, input.gameCertificateReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameWorkingDirectory", input.gameWorkingDirectory);
            JsonUtils::ObjectAddMember(output, "InstrumentationConfiguration", input.instrumentationConfiguration);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "MultiplayerServerCountPerVm", input.multiplayerServerCountPerVm);
            JsonUtils::ObjectAddMember(output, "OsPlatform", input.osPlatform);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            JsonUtils::ObjectAddMember(output, "ServerType", input.serverType);
            JsonUtils::ObjectAddMember(output, "StartMultiplayerServerCommand", input.startMultiplayerServerCommand);
            JsonUtils::ObjectAddMember(output, "UseStreamingForAssetDownloads", input.useStreamingForAssetDownloads);
            JsonUtils::ObjectAddMember(output, "VmSize", input.vmSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AreAssetsReadonly", input.areAssetsReadonly);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GameAssetReferences", input.gameAssetReferences, input.gameAssetReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameCertificateReferences", input.gameCertificateReferences, input.gameCertificateReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameWorkingDirectory", input.gameWorkingDirectory);
            JsonUtils::ObjectAddMember(output, "InstrumentationConfiguration", input.instrumentationConfiguration);
            JsonUtils::ObjectAddMember(output, "IsOSPreview", input.isOSPreview);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "MultiplayerServerCountPerVm", input.multiplayerServerCountPerVm);
            JsonUtils::ObjectAddMember(output, "OsPlatform", input.osPlatform);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            JsonUtils::ObjectAddMember(output, "StartMultiplayerServerCommand", input.startMultiplayerServerCommand);
            JsonUtils::ObjectAddMember(output, "UseStreamingForAssetDownloads", input.useStreamingForAssetDownloads);
            JsonUtils::ObjectAddMember(output, "VmSize", input.vmSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AreAssetsReadonly", input.areAssetsReadonly);
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "ContainerFlavor", input.containerFlavor);
            JsonUtils::ObjectAddMember(output, "CreationTime", input.creationTime, true);
            JsonUtils::ObjectAddMember(output, "GameAssetReferences", input.gameAssetReferences, input.gameAssetReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameCertificateReferences", input.gameCertificateReferences, input.gameCertificateReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameWorkingDirectory", input.gameWorkingDirectory);
            JsonUtils::ObjectAddMember(output, "InstrumentationConfiguration", input.instrumentationConfiguration);
            JsonUtils::ObjectAddMember(output, "IsOSPreview", input.isOSPreview);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "MultiplayerServerCountPerVm", input.multiplayerServerCountPerVm);
            JsonUtils::ObjectAddMember(output, "OsPlatform", input.osPlatform);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            JsonUtils::ObjectAddMember(output, "ServerType", input.serverType);
            JsonUtils::ObjectAddMember(output, "StartMultiplayerServerCommand", input.startMultiplayerServerCommand);
            JsonUtils::ObjectAddMember(output, "UseStreamingForAssetDownloads", input.useStreamingForAssetDownloads);
            JsonUtils::ObjectAddMember(output, "VmSize", input.vmSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerMatchmakingPlayerAttributes& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
            JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerMatchmakingPlayer& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Attributes", input.attributes);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateMatchmakingTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Creator", input.creator);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
            JsonUtils::ObjectAddMember(output, "MembersToMatchWith", input.membersToMatchWith, input.membersToMatchWithCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateMatchmakingTicketResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateRemoteUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ExpirationTime", input.expirationTime, true);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateRemoteUserResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ExpirationTime", input.expirationTime, true);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Attributes", input.attributes);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "TeamId", input.teamId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerServerDetails& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Fqdn", input.fqdn);
            JsonUtils::ObjectAddMember(output, "IPV4Address", input.iPV4Address);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateServerBackfillTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "ServerDetails", input.serverDetails);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateServerBackfillTicketResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ChangeDescription", input.changeDescription);
            JsonUtils::ObjectAddMember(output, "Changes", input.changes, input.changesCount);
            JsonUtils::ObjectAddMember(output, "ContactEmail", input.contactEmail);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Notes", input.notes);
            JsonUtils::ObjectAddMember(output, "StartDate", input.startDate, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "RequestId", input.requestId);
            JsonUtils::ObjectAddMember(output, "WasApproved", input.wasApproved);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteAssetRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteBuildAliasRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteBuildRegionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteBuildRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteCertificateRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteContainerImageRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteRemoteUserRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerEnableMultiplayerServersForTitleResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetUploadUrlRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetUploadUrlResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AssetUploadUrl", input.assetUploadUrl);
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetBuildAliasRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetBuildRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetBuildResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AreAssetsReadonly", input.areAssetsReadonly);
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "BuildStatus", input.buildStatus);
            JsonUtils::ObjectAddMember(output, "ContainerFlavor", input.containerFlavor);
            JsonUtils::ObjectAddMember(output, "ContainerRunCommand", input.containerRunCommand);
            JsonUtils::ObjectAddMember(output, "CreationTime", input.creationTime, true);
            JsonUtils::ObjectAddMember(output, "CustomGameContainerImage", input.customGameContainerImage);
            JsonUtils::ObjectAddMember(output, "GameAssetReferences", input.gameAssetReferences, input.gameAssetReferencesCount);
            JsonUtils::ObjectAddMember(output, "GameCertificateReferences", input.gameCertificateReferences, input.gameCertificateReferencesCount);
            JsonUtils::ObjectAddMember(output, "InstrumentationConfiguration", input.instrumentationConfiguration);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
            JsonUtils::ObjectAddMember(output, "MultiplayerServerCountPerVm", input.multiplayerServerCountPerVm);
            JsonUtils::ObjectAddMember(output, "OsPlatform", input.osPlatform);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "RegionConfigurations", input.regionConfigurations, input.regionConfigurationsCount);
            JsonUtils::ObjectAddMember(output, "ServerType", input.serverType);
            JsonUtils::ObjectAddMember(output, "StartMultiplayerServerCommand", input.startMultiplayerServerCommand);
            JsonUtils::ObjectAddMember(output, "UseStreamingForAssetDownloads", input.useStreamingForAssetDownloads);
            JsonUtils::ObjectAddMember(output, "VmSize", input.vmSize);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetContainerRegistryCredentialsResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DnsName", input.dnsName);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchmakingTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchmakingTicketResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CancellationReasonString", input.cancellationReasonString);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "Creator", input.creator);
            JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
            JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "MembersToMatchWith", input.membersToMatchWith, input.membersToMatchWithCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
            JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "ReturnMemberAttributes", input.returnMemberAttributes);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "RegionPreferences", input.regionPreferences, input.regionPreferencesCount);
            JsonUtils::ObjectAddMember(output, "ServerDetails", input.serverDetails);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerDetailsResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "ConnectedPlayers", input.connectedPlayers, input.connectedPlayersCount);
            JsonUtils::ObjectAddMember(output, "FQDN", input.fQDN);
            JsonUtils::ObjectAddMember(output, "IPV4Address", input.iPV4Address);
            JsonUtils::ObjectAddMember(output, "LastStateTransitionTime", input.lastStateTransitionTime, true);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "ServerId", input.serverId);
            JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
            JsonUtils::ObjectAddMember(output, "State", input.state);
            JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerLogsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ServerId", input.serverId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerLogsResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "LogDownloadUrl", input.logDownloadUrl);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetQueueStatisticsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerStatistics& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Average", input.average);
            JsonUtils::ObjectAddMember(output, "Percentile50", input.percentile50);
            JsonUtils::ObjectAddMember(output, "Percentile90", input.percentile90);
            JsonUtils::ObjectAddMember(output, "Percentile99", input.percentile99);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetQueueStatisticsResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "NumberOfPlayersMatching", input.numberOfPlayersMatching);
            JsonUtils::ObjectAddMember(output, "TimeToMatchStatisticsInSeconds", input.timeToMatchStatisticsInSeconds);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetRemoteLoginEndpointRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetRemoteLoginEndpointResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IPV4Address", input.iPV4Address);
            JsonUtils::ObjectAddMember(output, "Port", input.port);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetServerBackfillTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EscapeObject", input.escapeObject);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetServerBackfillTicketResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CancellationReasonString", input.cancellationReasonString);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "GiveUpAfterSeconds", input.giveUpAfterSeconds);
            JsonUtils::ObjectAddMember(output, "MatchId", input.matchId);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "ServerDetails", input.serverDetails);
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Status", input.status);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "RequestId", input.requestId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerQuotaChange& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ChangeDescription", input.changeDescription);
            JsonUtils::ObjectAddMember(output, "Changes", input.changes, input.changesCount);
            JsonUtils::ObjectAddMember(output, "IsPendingReview", input.isPendingReview);
            JsonUtils::ObjectAddMember(output, "Notes", input.notes);
            JsonUtils::ObjectAddMember(output, "RequestId", input.requestId);
            JsonUtils::ObjectAddMember(output, "ReviewComments", input.reviewComments);
            JsonUtils::ObjectAddMember(output, "WasApproved", input.wasApproved);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Change", input.change);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerTitleMultiplayerServersQuotas& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CoreCapacities", input.coreCapacities, input.coreCapacitiesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Quotas", input.quotas);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerJoinMatchmakingTicketRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Member", input.member);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            JsonUtils::ObjectAddMember(output, "TicketId", input.ticketId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListAssetSummariesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListAssetSummariesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AssetSummaries", input.assetSummaries, input.assetSummariesCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildAliasesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildAliasesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildAliases", input.buildAliases, input.buildAliasesCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildSummariesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildSummariesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildSummaries", input.buildSummaries, input.buildSummariesCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListCertificateSummariesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListCertificateSummariesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CertificateSummaries", input.certificateSummaries, input.certificateSummariesCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImagesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImagesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Images", input.images, input.imagesCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImageTagsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImageTagsResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListMatchmakingTicketsForPlayerResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TicketIds", input.ticketIds, input.ticketIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListMultiplayerServersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerMultiplayerServerSummary& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ConnectedPlayers", input.connectedPlayers, input.connectedPlayersCount);
            JsonUtils::ObjectAddMember(output, "LastStateTransitionTime", input.lastStateTransitionTime, true);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "ServerId", input.serverId);
            JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
            JsonUtils::ObjectAddMember(output, "State", input.state);
            JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListMultiplayerServersResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "MultiplayerServerSummaries", input.multiplayerServerSummaries, input.multiplayerServerSummariesCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListPartyQosServersRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerQosServer& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "ServerUrl", input.serverUrl);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListPartyQosServersResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "QosServers", input.qosServers, input.qosServersCount);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListQosServersForTitleRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "IncludeAllRegions", input.includeAllRegions);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListQosServersForTitleResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "QosServers", input.qosServers, input.qosServersCount);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "QueueName", input.queueName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListServerBackfillTicketsForPlayerResult& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TicketIds", input.ticketIds, input.ticketIdsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Changes", input.changes, input.changesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListVirtualMachineSummariesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerVirtualMachineSummary& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "HealthStatus", input.healthStatus);
            JsonUtils::ObjectAddMember(output, "State", input.state);
            JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerListVirtualMachineSummariesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
            JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
            JsonUtils::ObjectAddMember(output, "VirtualMachines", input.virtualMachines, input.virtualMachinesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerRequestMultiplayerServerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildAliasParams", input.buildAliasParams);
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "InitialPlayers", input.initialPlayers, input.initialPlayersCount);
            JsonUtils::ObjectAddMember(output, "PreferredRegions", input.preferredRegions, input.preferredRegionsCount);
            JsonUtils::ObjectAddMember(output, "SessionCookie", input.sessionCookie);
            JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerRequestMultiplayerServerResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "ConnectedPlayers", input.connectedPlayers, input.connectedPlayersCount);
            JsonUtils::ObjectAddMember(output, "FQDN", input.fQDN);
            JsonUtils::ObjectAddMember(output, "IPV4Address", input.iPV4Address);
            JsonUtils::ObjectAddMember(output, "LastStateTransitionTime", input.lastStateTransitionTime, true);
            JsonUtils::ObjectAddMember(output, "Ports", input.ports, input.portsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "ServerId", input.serverId);
            JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
            JsonUtils::ObjectAddMember(output, "State", input.state);
            JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DnsName", input.dnsName);
            JsonUtils::ObjectAddMember(output, "Password", input.password);
            JsonUtils::ObjectAddMember(output, "Username", input.username);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerShutdownMultiplayerServerRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Region", input.region);
            JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerUntagContainerImageRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
            JsonUtils::ObjectAddMember(output, "Tag", input.tag);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildAliasRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
            JsonUtils::ObjectAddMember(output, "AliasName", input.aliasName);
            JsonUtils::ObjectAddMember(output, "BuildSelectionCriteria", input.buildSelectionCriteria, input.buildSelectionCriteriaCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildNameRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildRegionRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildRegion", input.buildRegion);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildRegionsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
            JsonUtils::ObjectAddMember(output, "BuildRegions", input.buildRegions, input.buildRegionsCount);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabMultiplayerUploadCertificateRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "GameCertificate", input.gameCertificate);
            return output;
        }

    }

    namespace MultiplayerModels
    {
        // Multiplayer Classes
        struct AssetReference : public PlayFabMultiplayerAssetReference, public BaseModel
        {
            AssetReference() : PlayFabMultiplayerAssetReference{}
            {
            }

            AssetReference(const AssetReference& src) :
                PlayFabMultiplayerAssetReference{ src },
                m_fileName{ src.m_fileName },
                m_mountPath{ src.m_mountPath }
            {
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
                mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
            }

            ~AssetReference() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
                JsonUtils:: ObjectGetMember(input, "MountPath", m_mountPath, mountPath);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerAssetReference>(*this);
            }

        private:
            String m_fileName;
            String m_mountPath;
        };

        struct AssetReferenceParams : public PlayFabMultiplayerAssetReferenceParams, public BaseModel
        {
            AssetReferenceParams() : PlayFabMultiplayerAssetReferenceParams{}
            {
            }

            AssetReferenceParams(const AssetReferenceParams& src) :
                PlayFabMultiplayerAssetReferenceParams{ src },
                m_fileName{ src.m_fileName },
                m_mountPath{ src.m_mountPath }
            {
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
                mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
            }

            ~AssetReferenceParams() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
                JsonUtils:: ObjectGetMember(input, "MountPath", m_mountPath, mountPath);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerAssetReferenceParams>(*this);
            }

        private:
            String m_fileName;
            String m_mountPath;
        };

        struct AssetSummary : public PlayFabMultiplayerAssetSummary, public BaseModel
        {
            AssetSummary() : PlayFabMultiplayerAssetSummary{}
            {
            }

            AssetSummary(const AssetSummary& src) :
                PlayFabMultiplayerAssetSummary{ src },
                m_fileName{ src.m_fileName },
                m_metadata{ src.m_metadata }
            {
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
            }

            ~AssetSummary() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerAssetSummary>(*this);
            }

        private:
            String m_fileName;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
        };

        struct BuildSelectionCriterion : public PlayFabMultiplayerBuildSelectionCriterion, public BaseModel
        {
            BuildSelectionCriterion() : PlayFabMultiplayerBuildSelectionCriterion{}
            {
            }

            BuildSelectionCriterion(const BuildSelectionCriterion& src) :
                PlayFabMultiplayerBuildSelectionCriterion{ src },
                m_buildWeightDistribution{ src.m_buildWeightDistribution }
            {
                buildWeightDistribution = m_buildWeightDistribution.Empty() ? nullptr : m_buildWeightDistribution.Data();
            }

            ~BuildSelectionCriterion() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildWeightDistribution", m_buildWeightDistribution, buildWeightDistribution, buildWeightDistributionCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerBuildSelectionCriterion>(*this);
            }

        private:
            AssociativeArray<PlayFabUint32DictionaryEntry, void> m_buildWeightDistribution;
        };

        struct BuildAliasDetailsResponse : public PlayFabMultiplayerBuildAliasDetailsResponse, public BaseResult
        {
            BuildAliasDetailsResponse() : PlayFabMultiplayerBuildAliasDetailsResponse{}
            {
            }

            BuildAliasDetailsResponse(const BuildAliasDetailsResponse& src) :
                PlayFabMultiplayerBuildAliasDetailsResponse{ src },
                m_aliasId{ src.m_aliasId },
                m_aliasName{ src.m_aliasName },
                m_buildSelectionCriteria{ src.m_buildSelectionCriteria }
            {
                aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
                aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
                buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
            }

            ~BuildAliasDetailsResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
                JsonUtils:: ObjectGetMember(input, "AliasName", m_aliasName, aliasName);
                JsonUtils:: ObjectGetMember(input, "BuildSelectionCriteria", m_buildSelectionCriteria, buildSelectionCriteria, buildSelectionCriteriaCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerBuildAliasDetailsResponse>(*this);
            }

        private:
            String m_aliasId;
            String m_aliasName;
            PointerArray<PlayFabMultiplayerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
        };

        struct BuildAliasParams : public PlayFabMultiplayerBuildAliasParams, public BaseModel
        {
            BuildAliasParams() : PlayFabMultiplayerBuildAliasParams{}
            {
            }

            BuildAliasParams(const BuildAliasParams& src) :
                PlayFabMultiplayerBuildAliasParams{ src },
                m_aliasId{ src.m_aliasId }
            {
                aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
            }

            ~BuildAliasParams() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerBuildAliasParams>(*this);
            }

        private:
            String m_aliasId;
        };

        struct CurrentServerStats : public PlayFabMultiplayerCurrentServerStats, public BaseModel
        {
            CurrentServerStats() : PlayFabMultiplayerCurrentServerStats{}
            {
            }

            CurrentServerStats(const CurrentServerStats&) = default;

            ~CurrentServerStats() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Active", active);
                JsonUtils:: ObjectGetMember(input, "Propping", propping);
                JsonUtils:: ObjectGetMember(input, "StandingBy", standingBy);
                JsonUtils:: ObjectGetMember(input, "Total", total);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCurrentServerStats>(*this);
            }

        private:
        };

        struct DynamicStandbyThreshold : public PlayFabMultiplayerDynamicStandbyThreshold, public BaseModel
        {
            DynamicStandbyThreshold() : PlayFabMultiplayerDynamicStandbyThreshold{}
            {
            }

            DynamicStandbyThreshold(const DynamicStandbyThreshold&) = default;

            ~DynamicStandbyThreshold() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Multiplier", multiplier);
                JsonUtils:: ObjectGetMember(input, "TriggerThresholdPercentage", triggerThresholdPercentage);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDynamicStandbyThreshold>(*this);
            }

        private:
        };

        struct DynamicStandbySettings : public PlayFabMultiplayerDynamicStandbySettings, public BaseModel
        {
            DynamicStandbySettings() : PlayFabMultiplayerDynamicStandbySettings{}
            {
            }

            DynamicStandbySettings(const DynamicStandbySettings& src) :
                PlayFabMultiplayerDynamicStandbySettings{ src },
                m_dynamicFloorMultiplierThresholds{ src.m_dynamicFloorMultiplierThresholds },
                m_rampDownSeconds{ src.m_rampDownSeconds }
            {
                dynamicFloorMultiplierThresholds = m_dynamicFloorMultiplierThresholds.Empty() ? nullptr : m_dynamicFloorMultiplierThresholds.Data();
                rampDownSeconds = m_rampDownSeconds ? m_rampDownSeconds.operator->() : nullptr;
            }

            ~DynamicStandbySettings() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DynamicFloorMultiplierThresholds", m_dynamicFloorMultiplierThresholds, dynamicFloorMultiplierThresholds, dynamicFloorMultiplierThresholdsCount);
                JsonUtils:: ObjectGetMember(input, "IsEnabled", isEnabled);
                JsonUtils:: ObjectGetMember(input, "RampDownSeconds", m_rampDownSeconds, rampDownSeconds);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDynamicStandbySettings>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerDynamicStandbyThreshold, DynamicStandbyThreshold> m_dynamicFloorMultiplierThresholds;
            StdExtra::optional<int32_t> m_rampDownSeconds;
        };

        struct Schedule : public PlayFabMultiplayerSchedule, public BaseModel
        {
            Schedule() : PlayFabMultiplayerSchedule{}
            {
            }

            Schedule(const Schedule& src) :
                PlayFabMultiplayerSchedule{ src },
                m_description{ src.m_description }
            {
                description = m_description.empty() ? nullptr : m_description.data();
            }

            ~Schedule() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Description", m_description, description);
                JsonUtils:: ObjectGetMember(input, "EndTime", endTime, true);
                JsonUtils:: ObjectGetMember(input, "IsDisabled", isDisabled);
                JsonUtils:: ObjectGetMember(input, "IsRecurringWeekly", isRecurringWeekly);
                JsonUtils:: ObjectGetMember(input, "StartTime", startTime, true);
                JsonUtils:: ObjectGetMember(input, "TargetStandby", targetStandby);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerSchedule>(*this);
            }

        private:
            String m_description;
        };

        struct ScheduledStandbySettings : public PlayFabMultiplayerScheduledStandbySettings, public BaseModel
        {
            ScheduledStandbySettings() : PlayFabMultiplayerScheduledStandbySettings{}
            {
            }

            ScheduledStandbySettings(const ScheduledStandbySettings& src) :
                PlayFabMultiplayerScheduledStandbySettings{ src },
                m_scheduleList{ src.m_scheduleList }
            {
                scheduleList = m_scheduleList.Empty() ? nullptr : m_scheduleList.Data();
            }

            ~ScheduledStandbySettings() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IsEnabled", isEnabled);
                JsonUtils:: ObjectGetMember(input, "ScheduleList", m_scheduleList, scheduleList, scheduleListCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerScheduledStandbySettings>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerSchedule, Schedule> m_scheduleList;
        };

        struct BuildRegion : public PlayFabMultiplayerBuildRegion, public BaseModel
        {
            BuildRegion() : PlayFabMultiplayerBuildRegion{}
            {
            }

            BuildRegion(const BuildRegion& src) :
                PlayFabMultiplayerBuildRegion{ src },
                m_currentServerStats{ src.m_currentServerStats },
                m_dynamicStandbySettings{ src.m_dynamicStandbySettings },
                m_region{ src.m_region },
                m_scheduledStandbySettings{ src.m_scheduledStandbySettings },
                m_status{ src.m_status }
            {
                currentServerStats = m_currentServerStats ? m_currentServerStats.operator->() : nullptr;
                dynamicStandbySettings = m_dynamicStandbySettings ? m_dynamicStandbySettings.operator->() : nullptr;
                region = m_region.empty() ? nullptr : m_region.data();
                scheduledStandbySettings = m_scheduledStandbySettings ? m_scheduledStandbySettings.operator->() : nullptr;
                status = m_status.empty() ? nullptr : m_status.data();
            }

            ~BuildRegion() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CurrentServerStats", m_currentServerStats, currentServerStats);
                JsonUtils:: ObjectGetMember(input, "DynamicStandbySettings", m_dynamicStandbySettings, dynamicStandbySettings);
                JsonUtils:: ObjectGetMember(input, "MaxServers", maxServers);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "ScheduledStandbySettings", m_scheduledStandbySettings, scheduledStandbySettings);
                JsonUtils:: ObjectGetMember(input, "StandbyServers", standbyServers);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerBuildRegion>(*this);
            }

        private:
            StdExtra::optional<CurrentServerStats> m_currentServerStats;
            StdExtra::optional<DynamicStandbySettings> m_dynamicStandbySettings;
            String m_region;
            StdExtra::optional<ScheduledStandbySettings> m_scheduledStandbySettings;
            String m_status;
        };

        struct BuildRegionParams : public PlayFabMultiplayerBuildRegionParams, public BaseModel
        {
            BuildRegionParams() : PlayFabMultiplayerBuildRegionParams{}
            {
            }

            BuildRegionParams(const BuildRegionParams& src) :
                PlayFabMultiplayerBuildRegionParams{ src },
                m_dynamicStandbySettings{ src.m_dynamicStandbySettings },
                m_region{ src.m_region },
                m_scheduledStandbySettings{ src.m_scheduledStandbySettings }
            {
                dynamicStandbySettings = m_dynamicStandbySettings ? m_dynamicStandbySettings.operator->() : nullptr;
                region = m_region.empty() ? nullptr : m_region.data();
                scheduledStandbySettings = m_scheduledStandbySettings ? m_scheduledStandbySettings.operator->() : nullptr;
            }

            ~BuildRegionParams() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DynamicStandbySettings", m_dynamicStandbySettings, dynamicStandbySettings);
                JsonUtils:: ObjectGetMember(input, "MaxServers", maxServers);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "ScheduledStandbySettings", m_scheduledStandbySettings, scheduledStandbySettings);
                JsonUtils:: ObjectGetMember(input, "StandbyServers", standbyServers);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerBuildRegionParams>(*this);
            }

        private:
            StdExtra::optional<DynamicStandbySettings> m_dynamicStandbySettings;
            String m_region;
            StdExtra::optional<ScheduledStandbySettings> m_scheduledStandbySettings;
        };

        struct BuildSummary : public PlayFabMultiplayerBuildSummary, public BaseModel
        {
            BuildSummary() : PlayFabMultiplayerBuildSummary{}
            {
            }

            BuildSummary(const BuildSummary& src) :
                PlayFabMultiplayerBuildSummary{ src },
                m_buildId{ src.m_buildId },
                m_buildName{ src.m_buildName },
                m_creationTime{ src.m_creationTime },
                m_metadata{ src.m_metadata },
                m_regionConfigurations{ src.m_regionConfigurations }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                creationTime = m_creationTime ? m_creationTime.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
            }

            ~BuildSummary() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerBuildSummary>(*this);
            }

        private:
            String m_buildId;
            String m_buildName;
            StdExtra::optional<time_t> m_creationTime;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            PointerArray<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
        };

        struct EntityKey : public PlayFabMultiplayerEntityKey, public BaseModel
        {
            EntityKey() : PlayFabMultiplayerEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabMultiplayerEntityKey{ src },
                m_id{ src.m_id },
                m_type{ src.m_type }
            {
                id = m_id.empty() ? nullptr : m_id.data();
                type = m_type.empty() ? nullptr : m_type.data();
            }

            ~EntityKey() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct CancelAllMatchmakingTicketsForPlayerRequest : public PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest, public BaseRequest
        {
            CancelAllMatchmakingTicketsForPlayerRequest() : PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest{}
            {
            }

            CancelAllMatchmakingTicketsForPlayerRequest(const CancelAllMatchmakingTicketsForPlayerRequest& src) :
                PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_queueName{ src.m_queueName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~CancelAllMatchmakingTicketsForPlayerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            String m_queueName;
        };

        struct CancelAllServerBackfillTicketsForPlayerRequest : public PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest, public BaseRequest
        {
            CancelAllServerBackfillTicketsForPlayerRequest() : PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest{}
            {
            }

            CancelAllServerBackfillTicketsForPlayerRequest(const CancelAllServerBackfillTicketsForPlayerRequest& src) :
                PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_queueName{ src.m_queueName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabMultiplayerEntityKey*)&m_entity;
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~CancelAllServerBackfillTicketsForPlayerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            String m_queueName;
        };

        struct CancelMatchmakingTicketRequest : public PlayFabMultiplayerCancelMatchmakingTicketRequest, public BaseRequest
        {
            CancelMatchmakingTicketRequest() : PlayFabMultiplayerCancelMatchmakingTicketRequest{}
            {
            }

            CancelMatchmakingTicketRequest(const CancelMatchmakingTicketRequest& src) :
                PlayFabMultiplayerCancelMatchmakingTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_queueName{ src.m_queueName },
                m_ticketId{ src.m_ticketId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~CancelMatchmakingTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCancelMatchmakingTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_queueName;
            String m_ticketId;
        };

        struct CancelServerBackfillTicketRequest : public PlayFabMultiplayerCancelServerBackfillTicketRequest, public BaseRequest
        {
            CancelServerBackfillTicketRequest() : PlayFabMultiplayerCancelServerBackfillTicketRequest{}
            {
            }

            CancelServerBackfillTicketRequest(const CancelServerBackfillTicketRequest& src) :
                PlayFabMultiplayerCancelServerBackfillTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_queueName{ src.m_queueName },
                m_ticketId{ src.m_ticketId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~CancelServerBackfillTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCancelServerBackfillTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_queueName;
            String m_ticketId;
        };

        struct Certificate : public PlayFabMultiplayerCertificate, public BaseModel
        {
            Certificate() : PlayFabMultiplayerCertificate{}
            {
            }

            Certificate(const Certificate& src) :
                PlayFabMultiplayerCertificate{ src },
                m_base64EncodedValue{ src.m_base64EncodedValue },
                m_name{ src.m_name },
                m_password{ src.m_password }
            {
                base64EncodedValue = m_base64EncodedValue.empty() ? nullptr : m_base64EncodedValue.data();
                name = m_name.empty() ? nullptr : m_name.data();
                password = m_password.empty() ? nullptr : m_password.data();
            }

            ~Certificate() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Base64EncodedValue", m_base64EncodedValue, base64EncodedValue);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCertificate>(*this);
            }

        private:
            String m_base64EncodedValue;
            String m_name;
            String m_password;
        };

        struct CertificateSummary : public PlayFabMultiplayerCertificateSummary, public BaseModel
        {
            CertificateSummary() : PlayFabMultiplayerCertificateSummary{}
            {
            }

            CertificateSummary(const CertificateSummary& src) :
                PlayFabMultiplayerCertificateSummary{ src },
                m_name{ src.m_name },
                m_thumbprint{ src.m_thumbprint }
            {
                name = m_name.empty() ? nullptr : m_name.data();
                thumbprint = m_thumbprint.empty() ? nullptr : m_thumbprint.data();
            }

            ~CertificateSummary() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Thumbprint", m_thumbprint, thumbprint);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCertificateSummary>(*this);
            }

        private:
            String m_name;
            String m_thumbprint;
        };

        struct ConnectedPlayer : public PlayFabMultiplayerConnectedPlayer, public BaseModel
        {
            ConnectedPlayer() : PlayFabMultiplayerConnectedPlayer{}
            {
            }

            ConnectedPlayer(const ConnectedPlayer& src) :
                PlayFabMultiplayerConnectedPlayer{ src },
                m_playerId{ src.m_playerId }
            {
                playerId = m_playerId.empty() ? nullptr : m_playerId.data();
            }

            ~ConnectedPlayer() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PlayerId", m_playerId, playerId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerConnectedPlayer>(*this);
            }

        private:
            String m_playerId;
        };

        struct ContainerImageReference : public PlayFabMultiplayerContainerImageReference, public BaseModel
        {
            ContainerImageReference() : PlayFabMultiplayerContainerImageReference{}
            {
            }

            ContainerImageReference(const ContainerImageReference& src) :
                PlayFabMultiplayerContainerImageReference{ src },
                m_imageName{ src.m_imageName },
                m_tag{ src.m_tag }
            {
                imageName = m_imageName.empty() ? nullptr : m_imageName.data();
                tag = m_tag.empty() ? nullptr : m_tag.data();
            }

            ~ContainerImageReference() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ImageName", m_imageName, imageName);
                JsonUtils:: ObjectGetMember(input, "Tag", m_tag, tag);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerContainerImageReference>(*this);
            }

        private:
            String m_imageName;
            String m_tag;
        };

        struct CoreCapacity : public PlayFabMultiplayerCoreCapacity, public BaseModel
        {
            CoreCapacity() : PlayFabMultiplayerCoreCapacity{}
            {
            }

            CoreCapacity(const CoreCapacity& src) :
                PlayFabMultiplayerCoreCapacity{ src },
                m_region{ src.m_region },
                m_vmFamily{ src.m_vmFamily }
            {
                region = m_region.empty() ? nullptr : m_region.data();
                vmFamily = m_vmFamily ? m_vmFamily.operator->() : nullptr;
            }

            ~CoreCapacity() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Available", available);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "Total", total);
                JsonUtils:: ObjectGetMember(input, "VmFamily", m_vmFamily, vmFamily);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCoreCapacity>(*this);
            }

        private:
            String m_region;
            StdExtra::optional<PlayFabMultiplayerAzureVmFamily> m_vmFamily;
        };

        struct CoreCapacityChange : public PlayFabMultiplayerCoreCapacityChange, public BaseModel
        {
            CoreCapacityChange() : PlayFabMultiplayerCoreCapacityChange{}
            {
            }

            CoreCapacityChange(const CoreCapacityChange& src) :
                PlayFabMultiplayerCoreCapacityChange{ src },
                m_region{ src.m_region }
            {
                region = m_region.empty() ? nullptr : m_region.data();
            }

            ~CoreCapacityChange() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NewCoreLimit", newCoreLimit);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "VmFamily", vmFamily);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCoreCapacityChange>(*this);
            }

        private:
            String m_region;
        };

        struct CreateBuildAliasRequest : public PlayFabMultiplayerCreateBuildAliasRequest, public BaseRequest
        {
            CreateBuildAliasRequest() : PlayFabMultiplayerCreateBuildAliasRequest{}
            {
            }

            CreateBuildAliasRequest(const CreateBuildAliasRequest& src) :
                PlayFabMultiplayerCreateBuildAliasRequest{ src },
                m_aliasName{ src.m_aliasName },
                m_buildSelectionCriteria{ src.m_buildSelectionCriteria },
                m_customTags{ src.m_customTags }
            {
                aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
                buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~CreateBuildAliasRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AliasName", m_aliasName, aliasName);
                JsonUtils:: ObjectGetMember(input, "BuildSelectionCriteria", m_buildSelectionCriteria, buildSelectionCriteria, buildSelectionCriteriaCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildAliasRequest>(*this);
            }

        private:
            String m_aliasName;
            PointerArray<PlayFabMultiplayerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GameCertificateReferenceParams : public PlayFabMultiplayerGameCertificateReferenceParams, public BaseModel
        {
            GameCertificateReferenceParams() : PlayFabMultiplayerGameCertificateReferenceParams{}
            {
            }

            GameCertificateReferenceParams(const GameCertificateReferenceParams& src) :
                PlayFabMultiplayerGameCertificateReferenceParams{ src },
                m_gsdkAlias{ src.m_gsdkAlias },
                m_name{ src.m_name }
            {
                gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~GameCertificateReferenceParams() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GsdkAlias", m_gsdkAlias, gsdkAlias);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGameCertificateReferenceParams>(*this);
            }

        private:
            String m_gsdkAlias;
            String m_name;
        };

        struct LinuxInstrumentationConfiguration : public PlayFabMultiplayerLinuxInstrumentationConfiguration, public BaseModel
        {
            LinuxInstrumentationConfiguration() : PlayFabMultiplayerLinuxInstrumentationConfiguration{}
            {
            }

            LinuxInstrumentationConfiguration(const LinuxInstrumentationConfiguration&) = default;

            ~LinuxInstrumentationConfiguration() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IsEnabled", isEnabled);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerLinuxInstrumentationConfiguration>(*this);
            }

        private:
        };

        struct Port : public PlayFabMultiplayerPort, public BaseModel
        {
            Port() : PlayFabMultiplayerPort{}
            {
            }

            Port(const Port& src) :
                PlayFabMultiplayerPort{ src },
                m_name{ src.m_name }
            {
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~Port() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Num", num);
                JsonUtils:: ObjectGetMember(input, "Protocol", protocol);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerPort>(*this);
            }

        private:
            String m_name;
        };

        struct CreateBuildWithCustomContainerRequest : public PlayFabMultiplayerCreateBuildWithCustomContainerRequest, public BaseRequest
        {
            CreateBuildWithCustomContainerRequest() : PlayFabMultiplayerCreateBuildWithCustomContainerRequest{}
            {
            }

            CreateBuildWithCustomContainerRequest(const CreateBuildWithCustomContainerRequest& src) :
                PlayFabMultiplayerCreateBuildWithCustomContainerRequest{ src },
                m_areAssetsReadonly{ src.m_areAssetsReadonly },
                m_buildName{ src.m_buildName },
                m_containerFlavor{ src.m_containerFlavor },
                m_containerImageReference{ src.m_containerImageReference },
                m_containerRunCommand{ src.m_containerRunCommand },
                m_customTags{ src.m_customTags },
                m_gameAssetReferences{ src.m_gameAssetReferences },
                m_gameCertificateReferences{ src.m_gameCertificateReferences },
                m_linuxInstrumentationConfiguration{ src.m_linuxInstrumentationConfiguration },
                m_metadata{ src.m_metadata },
                m_ports{ src.m_ports },
                m_regionConfigurations{ src.m_regionConfigurations },
                m_useStreamingForAssetDownloads{ src.m_useStreamingForAssetDownloads },
                m_vmSize{ src.m_vmSize }
            {
                areAssetsReadonly = m_areAssetsReadonly ? m_areAssetsReadonly.operator->() : nullptr;
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                containerFlavor = m_containerFlavor ? m_containerFlavor.operator->() : nullptr;
                containerImageReference = m_containerImageReference ? m_containerImageReference.operator->() : nullptr;
                containerRunCommand = m_containerRunCommand.empty() ? nullptr : m_containerRunCommand.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                gameAssetReferences = m_gameAssetReferences.Empty() ? nullptr : m_gameAssetReferences.Data();
                gameCertificateReferences = m_gameCertificateReferences.Empty() ? nullptr : m_gameCertificateReferences.Data();
                linuxInstrumentationConfiguration = m_linuxInstrumentationConfiguration ? m_linuxInstrumentationConfiguration.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
                useStreamingForAssetDownloads = m_useStreamingForAssetDownloads ? m_useStreamingForAssetDownloads.operator->() : nullptr;
                vmSize = m_vmSize ? m_vmSize.operator->() : nullptr;
            }

            ~CreateBuildWithCustomContainerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
                JsonUtils:: ObjectGetMember(input, "ContainerImageReference", m_containerImageReference, containerImageReference);
                JsonUtils:: ObjectGetMember(input, "ContainerRunCommand", m_containerRunCommand, containerRunCommand);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
                JsonUtils:: ObjectGetMember(input, "LinuxInstrumentationConfiguration", m_linuxInstrumentationConfiguration, linuxInstrumentationConfiguration);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
                JsonUtils:: ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
                JsonUtils:: ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithCustomContainerRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_areAssetsReadonly;
            String m_buildName;
            StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
            StdExtra::optional<ContainerImageReference> m_containerImageReference;
            String m_containerRunCommand;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabMultiplayerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
            PointerArray<PlayFabMultiplayerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
            StdExtra::optional<LinuxInstrumentationConfiguration> m_linuxInstrumentationConfiguration;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            PointerArray<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
            StdExtra::optional<bool> m_useStreamingForAssetDownloads;
            StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
        };

        struct GameCertificateReference : public PlayFabMultiplayerGameCertificateReference, public BaseModel
        {
            GameCertificateReference() : PlayFabMultiplayerGameCertificateReference{}
            {
            }

            GameCertificateReference(const GameCertificateReference& src) :
                PlayFabMultiplayerGameCertificateReference{ src },
                m_gsdkAlias{ src.m_gsdkAlias },
                m_name{ src.m_name }
            {
                gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~GameCertificateReference() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "GsdkAlias", m_gsdkAlias, gsdkAlias);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGameCertificateReference>(*this);
            }

        private:
            String m_gsdkAlias;
            String m_name;
        };

        struct CreateBuildWithCustomContainerResponse : public PlayFabMultiplayerCreateBuildWithCustomContainerResponse, public BaseResult
        {
            CreateBuildWithCustomContainerResponse() : PlayFabMultiplayerCreateBuildWithCustomContainerResponse{}
            {
            }

            CreateBuildWithCustomContainerResponse(const CreateBuildWithCustomContainerResponse& src) :
                PlayFabMultiplayerCreateBuildWithCustomContainerResponse{ src },
                m_areAssetsReadonly{ src.m_areAssetsReadonly },
                m_buildId{ src.m_buildId },
                m_buildName{ src.m_buildName },
                m_containerFlavor{ src.m_containerFlavor },
                m_containerRunCommand{ src.m_containerRunCommand },
                m_creationTime{ src.m_creationTime },
                m_customGameContainerImage{ src.m_customGameContainerImage },
                m_gameAssetReferences{ src.m_gameAssetReferences },
                m_gameCertificateReferences{ src.m_gameCertificateReferences },
                m_linuxInstrumentationConfiguration{ src.m_linuxInstrumentationConfiguration },
                m_metadata{ src.m_metadata },
                m_osPlatform{ src.m_osPlatform },
                m_ports{ src.m_ports },
                m_regionConfigurations{ src.m_regionConfigurations },
                m_serverType{ src.m_serverType },
                m_useStreamingForAssetDownloads{ src.m_useStreamingForAssetDownloads },
                m_vmSize{ src.m_vmSize }
            {
                areAssetsReadonly = m_areAssetsReadonly ? m_areAssetsReadonly.operator->() : nullptr;
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                containerFlavor = m_containerFlavor ? m_containerFlavor.operator->() : nullptr;
                containerRunCommand = m_containerRunCommand.empty() ? nullptr : m_containerRunCommand.data();
                creationTime = m_creationTime ? m_creationTime.operator->() : nullptr;
                customGameContainerImage = m_customGameContainerImage ? m_customGameContainerImage.operator->() : nullptr;
                gameAssetReferences = m_gameAssetReferences.Empty() ? nullptr : m_gameAssetReferences.Data();
                gameCertificateReferences = m_gameCertificateReferences.Empty() ? nullptr : m_gameCertificateReferences.Data();
                linuxInstrumentationConfiguration = m_linuxInstrumentationConfiguration ? m_linuxInstrumentationConfiguration.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                osPlatform = m_osPlatform.empty() ? nullptr : m_osPlatform.data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
                serverType = m_serverType.empty() ? nullptr : m_serverType.data();
                useStreamingForAssetDownloads = m_useStreamingForAssetDownloads ? m_useStreamingForAssetDownloads.operator->() : nullptr;
                vmSize = m_vmSize ? m_vmSize.operator->() : nullptr;
            }

            ~CreateBuildWithCustomContainerResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
                JsonUtils:: ObjectGetMember(input, "ContainerRunCommand", m_containerRunCommand, containerRunCommand);
                JsonUtils:: ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
                JsonUtils:: ObjectGetMember(input, "CustomGameContainerImage", m_customGameContainerImage, customGameContainerImage);
                JsonUtils:: ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
                JsonUtils:: ObjectGetMember(input, "LinuxInstrumentationConfiguration", m_linuxInstrumentationConfiguration, linuxInstrumentationConfiguration);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
                JsonUtils:: ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
                JsonUtils:: ObjectGetMember(input, "ServerType", m_serverType, serverType);
                JsonUtils:: ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
                JsonUtils:: ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithCustomContainerResponse>(*this);
            }

        private:
            StdExtra::optional<bool> m_areAssetsReadonly;
            String m_buildId;
            String m_buildName;
            StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
            String m_containerRunCommand;
            StdExtra::optional<time_t> m_creationTime;
            StdExtra::optional<ContainerImageReference> m_customGameContainerImage;
            PointerArray<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
            PointerArray<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
            StdExtra::optional<LinuxInstrumentationConfiguration> m_linuxInstrumentationConfiguration;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            String m_osPlatform;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            PointerArray<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
            String m_serverType;
            StdExtra::optional<bool> m_useStreamingForAssetDownloads;
            StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
        };

        struct InstrumentationConfiguration : public PlayFabMultiplayerInstrumentationConfiguration, public BaseModel
        {
            InstrumentationConfiguration() : PlayFabMultiplayerInstrumentationConfiguration{}
            {
            }

            InstrumentationConfiguration(const InstrumentationConfiguration& src) :
                PlayFabMultiplayerInstrumentationConfiguration{ src },
                m_processesToMonitor{ src.m_processesToMonitor }
            {
                processesToMonitor = m_processesToMonitor.Empty() ? nullptr : m_processesToMonitor.Data();
            }

            ~InstrumentationConfiguration() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ProcessesToMonitor", m_processesToMonitor, processesToMonitor, processesToMonitorCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerInstrumentationConfiguration>(*this);
            }

        private:
            PointerArray<const char, String> m_processesToMonitor;
        };

        struct CreateBuildWithManagedContainerRequest : public PlayFabMultiplayerCreateBuildWithManagedContainerRequest, public BaseRequest
        {
            CreateBuildWithManagedContainerRequest() : PlayFabMultiplayerCreateBuildWithManagedContainerRequest{}
            {
            }

            CreateBuildWithManagedContainerRequest(const CreateBuildWithManagedContainerRequest& src) :
                PlayFabMultiplayerCreateBuildWithManagedContainerRequest{ src },
                m_areAssetsReadonly{ src.m_areAssetsReadonly },
                m_buildName{ src.m_buildName },
                m_containerFlavor{ src.m_containerFlavor },
                m_customTags{ src.m_customTags },
                m_gameAssetReferences{ src.m_gameAssetReferences },
                m_gameCertificateReferences{ src.m_gameCertificateReferences },
                m_gameWorkingDirectory{ src.m_gameWorkingDirectory },
                m_instrumentationConfiguration{ src.m_instrumentationConfiguration },
                m_metadata{ src.m_metadata },
                m_ports{ src.m_ports },
                m_regionConfigurations{ src.m_regionConfigurations },
                m_startMultiplayerServerCommand{ src.m_startMultiplayerServerCommand },
                m_useStreamingForAssetDownloads{ src.m_useStreamingForAssetDownloads },
                m_vmSize{ src.m_vmSize }
            {
                areAssetsReadonly = m_areAssetsReadonly ? m_areAssetsReadonly.operator->() : nullptr;
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                containerFlavor = m_containerFlavor ? m_containerFlavor.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                gameAssetReferences = m_gameAssetReferences.Empty() ? nullptr : m_gameAssetReferences.Data();
                gameCertificateReferences = m_gameCertificateReferences.Empty() ? nullptr : m_gameCertificateReferences.Data();
                gameWorkingDirectory = m_gameWorkingDirectory.empty() ? nullptr : m_gameWorkingDirectory.data();
                instrumentationConfiguration = m_instrumentationConfiguration ? m_instrumentationConfiguration.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
                startMultiplayerServerCommand = m_startMultiplayerServerCommand.empty() ? nullptr : m_startMultiplayerServerCommand.data();
                useStreamingForAssetDownloads = m_useStreamingForAssetDownloads ? m_useStreamingForAssetDownloads.operator->() : nullptr;
                vmSize = m_vmSize ? m_vmSize.operator->() : nullptr;
            }

            ~CreateBuildWithManagedContainerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
                JsonUtils:: ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
                JsonUtils:: ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
                JsonUtils:: ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
                JsonUtils:: ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithManagedContainerRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_areAssetsReadonly;
            String m_buildName;
            StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabMultiplayerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
            PointerArray<PlayFabMultiplayerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
            String m_gameWorkingDirectory;
            StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            PointerArray<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
            String m_startMultiplayerServerCommand;
            StdExtra::optional<bool> m_useStreamingForAssetDownloads;
            StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
        };

        struct CreateBuildWithManagedContainerResponse : public PlayFabMultiplayerCreateBuildWithManagedContainerResponse, public BaseResult
        {
            CreateBuildWithManagedContainerResponse() : PlayFabMultiplayerCreateBuildWithManagedContainerResponse{}
            {
            }

            CreateBuildWithManagedContainerResponse(const CreateBuildWithManagedContainerResponse& src) :
                PlayFabMultiplayerCreateBuildWithManagedContainerResponse{ src },
                m_areAssetsReadonly{ src.m_areAssetsReadonly },
                m_buildId{ src.m_buildId },
                m_buildName{ src.m_buildName },
                m_containerFlavor{ src.m_containerFlavor },
                m_creationTime{ src.m_creationTime },
                m_gameAssetReferences{ src.m_gameAssetReferences },
                m_gameCertificateReferences{ src.m_gameCertificateReferences },
                m_gameWorkingDirectory{ src.m_gameWorkingDirectory },
                m_instrumentationConfiguration{ src.m_instrumentationConfiguration },
                m_metadata{ src.m_metadata },
                m_osPlatform{ src.m_osPlatform },
                m_ports{ src.m_ports },
                m_regionConfigurations{ src.m_regionConfigurations },
                m_serverType{ src.m_serverType },
                m_startMultiplayerServerCommand{ src.m_startMultiplayerServerCommand },
                m_useStreamingForAssetDownloads{ src.m_useStreamingForAssetDownloads },
                m_vmSize{ src.m_vmSize }
            {
                areAssetsReadonly = m_areAssetsReadonly ? m_areAssetsReadonly.operator->() : nullptr;
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                containerFlavor = m_containerFlavor ? m_containerFlavor.operator->() : nullptr;
                creationTime = m_creationTime ? m_creationTime.operator->() : nullptr;
                gameAssetReferences = m_gameAssetReferences.Empty() ? nullptr : m_gameAssetReferences.Data();
                gameCertificateReferences = m_gameCertificateReferences.Empty() ? nullptr : m_gameCertificateReferences.Data();
                gameWorkingDirectory = m_gameWorkingDirectory.empty() ? nullptr : m_gameWorkingDirectory.data();
                instrumentationConfiguration = m_instrumentationConfiguration ? m_instrumentationConfiguration.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                osPlatform = m_osPlatform.empty() ? nullptr : m_osPlatform.data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
                serverType = m_serverType.empty() ? nullptr : m_serverType.data();
                startMultiplayerServerCommand = m_startMultiplayerServerCommand.empty() ? nullptr : m_startMultiplayerServerCommand.data();
                useStreamingForAssetDownloads = m_useStreamingForAssetDownloads ? m_useStreamingForAssetDownloads.operator->() : nullptr;
                vmSize = m_vmSize ? m_vmSize.operator->() : nullptr;
            }

            ~CreateBuildWithManagedContainerResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
                JsonUtils:: ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
                JsonUtils:: ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
                JsonUtils:: ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
                JsonUtils:: ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
                JsonUtils:: ObjectGetMember(input, "ServerType", m_serverType, serverType);
                JsonUtils:: ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
                JsonUtils:: ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
                JsonUtils:: ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithManagedContainerResponse>(*this);
            }

        private:
            StdExtra::optional<bool> m_areAssetsReadonly;
            String m_buildId;
            String m_buildName;
            StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
            StdExtra::optional<time_t> m_creationTime;
            PointerArray<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
            PointerArray<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
            String m_gameWorkingDirectory;
            StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            String m_osPlatform;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            PointerArray<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
            String m_serverType;
            String m_startMultiplayerServerCommand;
            StdExtra::optional<bool> m_useStreamingForAssetDownloads;
            StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
        };

        struct CreateBuildWithProcessBasedServerRequest : public PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest, public BaseRequest
        {
            CreateBuildWithProcessBasedServerRequest() : PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest{}
            {
            }

            CreateBuildWithProcessBasedServerRequest(const CreateBuildWithProcessBasedServerRequest& src) :
                PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest{ src },
                m_areAssetsReadonly{ src.m_areAssetsReadonly },
                m_buildName{ src.m_buildName },
                m_customTags{ src.m_customTags },
                m_gameAssetReferences{ src.m_gameAssetReferences },
                m_gameCertificateReferences{ src.m_gameCertificateReferences },
                m_gameWorkingDirectory{ src.m_gameWorkingDirectory },
                m_instrumentationConfiguration{ src.m_instrumentationConfiguration },
                m_isOSPreview{ src.m_isOSPreview },
                m_metadata{ src.m_metadata },
                m_osPlatform{ src.m_osPlatform },
                m_ports{ src.m_ports },
                m_regionConfigurations{ src.m_regionConfigurations },
                m_startMultiplayerServerCommand{ src.m_startMultiplayerServerCommand },
                m_useStreamingForAssetDownloads{ src.m_useStreamingForAssetDownloads },
                m_vmSize{ src.m_vmSize }
            {
                areAssetsReadonly = m_areAssetsReadonly ? m_areAssetsReadonly.operator->() : nullptr;
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                gameAssetReferences = m_gameAssetReferences.Empty() ? nullptr : m_gameAssetReferences.Data();
                gameCertificateReferences = m_gameCertificateReferences.Empty() ? nullptr : m_gameCertificateReferences.Data();
                gameWorkingDirectory = m_gameWorkingDirectory.empty() ? nullptr : m_gameWorkingDirectory.data();
                instrumentationConfiguration = m_instrumentationConfiguration ? m_instrumentationConfiguration.operator->() : nullptr;
                isOSPreview = m_isOSPreview ? m_isOSPreview.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                osPlatform = m_osPlatform.empty() ? nullptr : m_osPlatform.data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
                startMultiplayerServerCommand = m_startMultiplayerServerCommand.empty() ? nullptr : m_startMultiplayerServerCommand.data();
                useStreamingForAssetDownloads = m_useStreamingForAssetDownloads ? m_useStreamingForAssetDownloads.operator->() : nullptr;
                vmSize = m_vmSize ? m_vmSize.operator->() : nullptr;
            }

            ~CreateBuildWithProcessBasedServerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
                JsonUtils:: ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
                JsonUtils:: ObjectGetMember(input, "IsOSPreview", m_isOSPreview, isOSPreview);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
                JsonUtils:: ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
                JsonUtils:: ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
                JsonUtils:: ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
                JsonUtils:: ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_areAssetsReadonly;
            String m_buildName;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabMultiplayerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
            PointerArray<PlayFabMultiplayerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
            String m_gameWorkingDirectory;
            StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
            StdExtra::optional<bool> m_isOSPreview;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            String m_osPlatform;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            PointerArray<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
            String m_startMultiplayerServerCommand;
            StdExtra::optional<bool> m_useStreamingForAssetDownloads;
            StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
        };

        struct CreateBuildWithProcessBasedServerResponse : public PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse, public BaseResult
        {
            CreateBuildWithProcessBasedServerResponse() : PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse{}
            {
            }

            CreateBuildWithProcessBasedServerResponse(const CreateBuildWithProcessBasedServerResponse& src) :
                PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse{ src },
                m_areAssetsReadonly{ src.m_areAssetsReadonly },
                m_buildId{ src.m_buildId },
                m_buildName{ src.m_buildName },
                m_containerFlavor{ src.m_containerFlavor },
                m_creationTime{ src.m_creationTime },
                m_gameAssetReferences{ src.m_gameAssetReferences },
                m_gameCertificateReferences{ src.m_gameCertificateReferences },
                m_gameWorkingDirectory{ src.m_gameWorkingDirectory },
                m_instrumentationConfiguration{ src.m_instrumentationConfiguration },
                m_isOSPreview{ src.m_isOSPreview },
                m_metadata{ src.m_metadata },
                m_osPlatform{ src.m_osPlatform },
                m_ports{ src.m_ports },
                m_regionConfigurations{ src.m_regionConfigurations },
                m_serverType{ src.m_serverType },
                m_startMultiplayerServerCommand{ src.m_startMultiplayerServerCommand },
                m_useStreamingForAssetDownloads{ src.m_useStreamingForAssetDownloads },
                m_vmSize{ src.m_vmSize }
            {
                areAssetsReadonly = m_areAssetsReadonly ? m_areAssetsReadonly.operator->() : nullptr;
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                containerFlavor = m_containerFlavor ? m_containerFlavor.operator->() : nullptr;
                creationTime = m_creationTime ? m_creationTime.operator->() : nullptr;
                gameAssetReferences = m_gameAssetReferences.Empty() ? nullptr : m_gameAssetReferences.Data();
                gameCertificateReferences = m_gameCertificateReferences.Empty() ? nullptr : m_gameCertificateReferences.Data();
                gameWorkingDirectory = m_gameWorkingDirectory.empty() ? nullptr : m_gameWorkingDirectory.data();
                instrumentationConfiguration = m_instrumentationConfiguration ? m_instrumentationConfiguration.operator->() : nullptr;
                isOSPreview = m_isOSPreview ? m_isOSPreview.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                osPlatform = m_osPlatform.empty() ? nullptr : m_osPlatform.data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
                serverType = m_serverType.empty() ? nullptr : m_serverType.data();
                startMultiplayerServerCommand = m_startMultiplayerServerCommand.empty() ? nullptr : m_startMultiplayerServerCommand.data();
                useStreamingForAssetDownloads = m_useStreamingForAssetDownloads ? m_useStreamingForAssetDownloads.operator->() : nullptr;
                vmSize = m_vmSize ? m_vmSize.operator->() : nullptr;
            }

            ~CreateBuildWithProcessBasedServerResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
                JsonUtils:: ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
                JsonUtils:: ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
                JsonUtils:: ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
                JsonUtils:: ObjectGetMember(input, "IsOSPreview", m_isOSPreview, isOSPreview);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
                JsonUtils:: ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
                JsonUtils:: ObjectGetMember(input, "ServerType", m_serverType, serverType);
                JsonUtils:: ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
                JsonUtils:: ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
                JsonUtils:: ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse>(*this);
            }

        private:
            StdExtra::optional<bool> m_areAssetsReadonly;
            String m_buildId;
            String m_buildName;
            StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
            StdExtra::optional<time_t> m_creationTime;
            PointerArray<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
            PointerArray<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
            String m_gameWorkingDirectory;
            StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
            StdExtra::optional<bool> m_isOSPreview;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            String m_osPlatform;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            PointerArray<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
            String m_serverType;
            String m_startMultiplayerServerCommand;
            StdExtra::optional<bool> m_useStreamingForAssetDownloads;
            StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
        };

        struct MatchmakingPlayerAttributes : public PlayFabMultiplayerMatchmakingPlayerAttributes, public BaseModel
        {
            MatchmakingPlayerAttributes() : PlayFabMultiplayerMatchmakingPlayerAttributes{}
            {
            }

            MatchmakingPlayerAttributes(const MatchmakingPlayerAttributes& src) :
                PlayFabMultiplayerMatchmakingPlayerAttributes{ src },
                m_dataObject{ src.m_dataObject },
                m_escapedDataObject{ src.m_escapedDataObject }
            {
                dataObject.stringValue = m_dataObject.StringValue();
                escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
            }

            ~MatchmakingPlayerAttributes() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
                JsonUtils:: ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerMatchmakingPlayerAttributes>(*this);
            }

        private:
            JsonObject m_dataObject;
            String m_escapedDataObject;
        };

        struct MatchmakingPlayer : public PlayFabMultiplayerMatchmakingPlayer, public BaseModel
        {
            MatchmakingPlayer() : PlayFabMultiplayerMatchmakingPlayer{}
            {
            }

            MatchmakingPlayer(const MatchmakingPlayer& src) :
                PlayFabMultiplayerMatchmakingPlayer{ src },
                m_attributes{ src.m_attributes },
                m_entity{ src.m_entity }
            {
                attributes = m_attributes ? m_attributes.operator->() : nullptr;
                entity = (PlayFabMultiplayerEntityKey*)&m_entity;
            }

            ~MatchmakingPlayer() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Attributes", m_attributes, attributes);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerMatchmakingPlayer>(*this);
            }

        private:
            StdExtra::optional<MatchmakingPlayerAttributes> m_attributes;
            EntityKey m_entity;
        };

        struct CreateMatchmakingTicketRequest : public PlayFabMultiplayerCreateMatchmakingTicketRequest, public BaseRequest
        {
            CreateMatchmakingTicketRequest() : PlayFabMultiplayerCreateMatchmakingTicketRequest{}
            {
            }

            CreateMatchmakingTicketRequest(const CreateMatchmakingTicketRequest& src) :
                PlayFabMultiplayerCreateMatchmakingTicketRequest{ src },
                m_creator{ src.m_creator },
                m_customTags{ src.m_customTags },
                m_membersToMatchWith{ src.m_membersToMatchWith },
                m_queueName{ src.m_queueName }
            {
                creator = (PlayFabMultiplayerMatchmakingPlayer*)&m_creator;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~CreateMatchmakingTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Creator", m_creator, creator);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
                JsonUtils:: ObjectGetMember(input, "MembersToMatchWith", m_membersToMatchWith, membersToMatchWith, membersToMatchWithCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateMatchmakingTicketRequest>(*this);
            }

        private:
            MatchmakingPlayer m_creator;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabMultiplayerEntityKey, EntityKey> m_membersToMatchWith;
            String m_queueName;
        };

        struct CreateMatchmakingTicketResult : public PlayFabMultiplayerCreateMatchmakingTicketResult, public BaseResult
        {
            CreateMatchmakingTicketResult() : PlayFabMultiplayerCreateMatchmakingTicketResult{}
            {
            }

            CreateMatchmakingTicketResult(const CreateMatchmakingTicketResult& src) :
                PlayFabMultiplayerCreateMatchmakingTicketResult{ src },
                m_ticketId{ src.m_ticketId }
            {
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~CreateMatchmakingTicketResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateMatchmakingTicketResult>(*this);
            }

        private:
            String m_ticketId;
        };

        struct CreateRemoteUserRequest : public PlayFabMultiplayerCreateRemoteUserRequest, public BaseRequest
        {
            CreateRemoteUserRequest() : PlayFabMultiplayerCreateRemoteUserRequest{}
            {
            }

            CreateRemoteUserRequest(const CreateRemoteUserRequest& src) :
                PlayFabMultiplayerCreateRemoteUserRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_expirationTime{ src.m_expirationTime },
                m_region{ src.m_region },
                m_username{ src.m_username },
                m_vmId{ src.m_vmId }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                expirationTime = m_expirationTime ? m_expirationTime.operator->() : nullptr;
                region = m_region.empty() ? nullptr : m_region.data();
                username = m_username.empty() ? nullptr : m_username.data();
                vmId = m_vmId.empty() ? nullptr : m_vmId.data();
            }

            ~CreateRemoteUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExpirationTime", m_expirationTime, expirationTime, true);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
                JsonUtils:: ObjectGetMember(input, "VmId", m_vmId, vmId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateRemoteUserRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<time_t> m_expirationTime;
            String m_region;
            String m_username;
            String m_vmId;
        };

        struct CreateRemoteUserResponse : public PlayFabMultiplayerCreateRemoteUserResponse, public BaseResult
        {
            CreateRemoteUserResponse() : PlayFabMultiplayerCreateRemoteUserResponse{}
            {
            }

            CreateRemoteUserResponse(const CreateRemoteUserResponse& src) :
                PlayFabMultiplayerCreateRemoteUserResponse{ src },
                m_expirationTime{ src.m_expirationTime },
                m_password{ src.m_password },
                m_username{ src.m_username }
            {
                expirationTime = m_expirationTime ? m_expirationTime.operator->() : nullptr;
                password = m_password.empty() ? nullptr : m_password.data();
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~CreateRemoteUserResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ExpirationTime", m_expirationTime, expirationTime, true);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateRemoteUserResponse>(*this);
            }

        private:
            StdExtra::optional<time_t> m_expirationTime;
            String m_password;
            String m_username;
        };

        struct MatchmakingPlayerWithTeamAssignment : public PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, public BaseModel
        {
            MatchmakingPlayerWithTeamAssignment() : PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment{}
            {
            }

            MatchmakingPlayerWithTeamAssignment(const MatchmakingPlayerWithTeamAssignment& src) :
                PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment{ src },
                m_attributes{ src.m_attributes },
                m_entity{ src.m_entity },
                m_teamId{ src.m_teamId }
            {
                attributes = m_attributes ? m_attributes.operator->() : nullptr;
                entity = (PlayFabMultiplayerEntityKey*)&m_entity;
                teamId = m_teamId.empty() ? nullptr : m_teamId.data();
            }

            ~MatchmakingPlayerWithTeamAssignment() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Attributes", m_attributes, attributes);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "TeamId", m_teamId, teamId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment>(*this);
            }

        private:
            StdExtra::optional<MatchmakingPlayerAttributes> m_attributes;
            EntityKey m_entity;
            String m_teamId;
        };

        struct ServerDetails : public PlayFabMultiplayerServerDetails, public BaseModel
        {
            ServerDetails() : PlayFabMultiplayerServerDetails{}
            {
            }

            ServerDetails(const ServerDetails& src) :
                PlayFabMultiplayerServerDetails{ src },
                m_fqdn{ src.m_fqdn },
                m_iPV4Address{ src.m_iPV4Address },
                m_ports{ src.m_ports },
                m_region{ src.m_region }
            {
                fqdn = m_fqdn.empty() ? nullptr : m_fqdn.data();
                iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                region = m_region.empty() ? nullptr : m_region.data();
            }

            ~ServerDetails() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Fqdn", m_fqdn, fqdn);
                JsonUtils:: ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerServerDetails>(*this);
            }

        private:
            String m_fqdn;
            String m_iPV4Address;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            String m_region;
        };

        struct CreateServerBackfillTicketRequest : public PlayFabMultiplayerCreateServerBackfillTicketRequest, public BaseRequest
        {
            CreateServerBackfillTicketRequest() : PlayFabMultiplayerCreateServerBackfillTicketRequest{}
            {
            }

            CreateServerBackfillTicketRequest(const CreateServerBackfillTicketRequest& src) :
                PlayFabMultiplayerCreateServerBackfillTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_members{ src.m_members },
                m_queueName{ src.m_queueName },
                m_serverDetails{ src.m_serverDetails }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                members = m_members.Empty() ? nullptr : m_members.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
            }

            ~CreateServerBackfillTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateServerBackfillTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
            String m_queueName;
            StdExtra::optional<ServerDetails> m_serverDetails;
        };

        struct CreateServerBackfillTicketResult : public PlayFabMultiplayerCreateServerBackfillTicketResult, public BaseResult
        {
            CreateServerBackfillTicketResult() : PlayFabMultiplayerCreateServerBackfillTicketResult{}
            {
            }

            CreateServerBackfillTicketResult(const CreateServerBackfillTicketResult& src) :
                PlayFabMultiplayerCreateServerBackfillTicketResult{ src },
                m_ticketId{ src.m_ticketId }
            {
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~CreateServerBackfillTicketResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateServerBackfillTicketResult>(*this);
            }

        private:
            String m_ticketId;
        };

        struct CreateServerMatchmakingTicketRequest : public PlayFabMultiplayerCreateServerMatchmakingTicketRequest, public BaseRequest
        {
            CreateServerMatchmakingTicketRequest() : PlayFabMultiplayerCreateServerMatchmakingTicketRequest{}
            {
            }

            CreateServerMatchmakingTicketRequest(const CreateServerMatchmakingTicketRequest& src) :
                PlayFabMultiplayerCreateServerMatchmakingTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_members{ src.m_members },
                m_queueName{ src.m_queueName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                members = m_members.Empty() ? nullptr : m_members.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~CreateServerMatchmakingTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateServerMatchmakingTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabMultiplayerMatchmakingPlayer, MatchmakingPlayer> m_members;
            String m_queueName;
        };

        struct CreateTitleMultiplayerServersQuotaChangeRequest : public PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, public BaseRequest
        {
            CreateTitleMultiplayerServersQuotaChangeRequest() : PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest{}
            {
            }

            CreateTitleMultiplayerServersQuotaChangeRequest(const CreateTitleMultiplayerServersQuotaChangeRequest& src) :
                PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest{ src },
                m_changeDescription{ src.m_changeDescription },
                m_changes{ src.m_changes },
                m_contactEmail{ src.m_contactEmail },
                m_customTags{ src.m_customTags },
                m_notes{ src.m_notes },
                m_startDate{ src.m_startDate }
            {
                changeDescription = m_changeDescription.empty() ? nullptr : m_changeDescription.data();
                changes = m_changes.Empty() ? nullptr : m_changes.Data();
                contactEmail = m_contactEmail.empty() ? nullptr : m_contactEmail.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                notes = m_notes.empty() ? nullptr : m_notes.data();
                startDate = m_startDate ? m_startDate.operator->() : nullptr;
            }

            ~CreateTitleMultiplayerServersQuotaChangeRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ChangeDescription", m_changeDescription, changeDescription);
                JsonUtils:: ObjectGetMember(input, "Changes", m_changes, changes, changesCount);
                JsonUtils:: ObjectGetMember(input, "ContactEmail", m_contactEmail, contactEmail);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Notes", m_notes, notes);
                JsonUtils:: ObjectGetMember(input, "StartDate", m_startDate, startDate, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest>(*this);
            }

        private:
            String m_changeDescription;
            PointerArray<PlayFabMultiplayerCoreCapacityChange, CoreCapacityChange> m_changes;
            String m_contactEmail;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_notes;
            StdExtra::optional<time_t> m_startDate;
        };

        struct CreateTitleMultiplayerServersQuotaChangeResponse : public PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse, public BaseResult
        {
            CreateTitleMultiplayerServersQuotaChangeResponse() : PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse{}
            {
            }

            CreateTitleMultiplayerServersQuotaChangeResponse(const CreateTitleMultiplayerServersQuotaChangeResponse& src) :
                PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse{ src },
                m_requestId{ src.m_requestId }
            {
                requestId = m_requestId.empty() ? nullptr : m_requestId.data();
            }

            ~CreateTitleMultiplayerServersQuotaChangeResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "RequestId", m_requestId, requestId);
                JsonUtils:: ObjectGetMember(input, "WasApproved", wasApproved);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse>(*this);
            }

        private:
            String m_requestId;
        };

        struct DeleteAssetRequest : public PlayFabMultiplayerDeleteAssetRequest, public BaseRequest
        {
            DeleteAssetRequest() : PlayFabMultiplayerDeleteAssetRequest{}
            {
            }

            DeleteAssetRequest(const DeleteAssetRequest& src) :
                PlayFabMultiplayerDeleteAssetRequest{ src },
                m_customTags{ src.m_customTags },
                m_fileName{ src.m_fileName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
            }

            ~DeleteAssetRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDeleteAssetRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_fileName;
        };

        struct DeleteBuildAliasRequest : public PlayFabMultiplayerDeleteBuildAliasRequest, public BaseRequest
        {
            DeleteBuildAliasRequest() : PlayFabMultiplayerDeleteBuildAliasRequest{}
            {
            }

            DeleteBuildAliasRequest(const DeleteBuildAliasRequest& src) :
                PlayFabMultiplayerDeleteBuildAliasRequest{ src },
                m_aliasId{ src.m_aliasId },
                m_customTags{ src.m_customTags }
            {
                aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~DeleteBuildAliasRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDeleteBuildAliasRequest>(*this);
            }

        private:
            String m_aliasId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct DeleteBuildRegionRequest : public PlayFabMultiplayerDeleteBuildRegionRequest, public BaseRequest
        {
            DeleteBuildRegionRequest() : PlayFabMultiplayerDeleteBuildRegionRequest{}
            {
            }

            DeleteBuildRegionRequest(const DeleteBuildRegionRequest& src) :
                PlayFabMultiplayerDeleteBuildRegionRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_region{ src.m_region }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                region = m_region.empty() ? nullptr : m_region.data();
            }

            ~DeleteBuildRegionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDeleteBuildRegionRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_region;
        };

        struct DeleteBuildRequest : public PlayFabMultiplayerDeleteBuildRequest, public BaseRequest
        {
            DeleteBuildRequest() : PlayFabMultiplayerDeleteBuildRequest{}
            {
            }

            DeleteBuildRequest(const DeleteBuildRequest& src) :
                PlayFabMultiplayerDeleteBuildRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~DeleteBuildRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDeleteBuildRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct DeleteCertificateRequest : public PlayFabMultiplayerDeleteCertificateRequest, public BaseRequest
        {
            DeleteCertificateRequest() : PlayFabMultiplayerDeleteCertificateRequest{}
            {
            }

            DeleteCertificateRequest(const DeleteCertificateRequest& src) :
                PlayFabMultiplayerDeleteCertificateRequest{ src },
                m_customTags{ src.m_customTags },
                m_name{ src.m_name }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                name = m_name.empty() ? nullptr : m_name.data();
            }

            ~DeleteCertificateRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDeleteCertificateRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_name;
        };

        struct DeleteContainerImageRequest : public PlayFabMultiplayerDeleteContainerImageRequest, public BaseRequest
        {
            DeleteContainerImageRequest() : PlayFabMultiplayerDeleteContainerImageRequest{}
            {
            }

            DeleteContainerImageRequest(const DeleteContainerImageRequest& src) :
                PlayFabMultiplayerDeleteContainerImageRequest{ src },
                m_customTags{ src.m_customTags },
                m_imageName{ src.m_imageName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                imageName = m_imageName.empty() ? nullptr : m_imageName.data();
            }

            ~DeleteContainerImageRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ImageName", m_imageName, imageName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDeleteContainerImageRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_imageName;
        };

        struct DeleteRemoteUserRequest : public PlayFabMultiplayerDeleteRemoteUserRequest, public BaseRequest
        {
            DeleteRemoteUserRequest() : PlayFabMultiplayerDeleteRemoteUserRequest{}
            {
            }

            DeleteRemoteUserRequest(const DeleteRemoteUserRequest& src) :
                PlayFabMultiplayerDeleteRemoteUserRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_region{ src.m_region },
                m_username{ src.m_username },
                m_vmId{ src.m_vmId }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                region = m_region.empty() ? nullptr : m_region.data();
                username = m_username.empty() ? nullptr : m_username.data();
                vmId = m_vmId.empty() ? nullptr : m_vmId.data();
            }

            ~DeleteRemoteUserRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
                JsonUtils:: ObjectGetMember(input, "VmId", m_vmId, vmId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerDeleteRemoteUserRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_region;
            String m_username;
            String m_vmId;
        };

        struct EnableMultiplayerServersForTitleRequest : public PlayFabMultiplayerEnableMultiplayerServersForTitleRequest, public BaseRequest
        {
            EnableMultiplayerServersForTitleRequest() : PlayFabMultiplayerEnableMultiplayerServersForTitleRequest{}
            {
            }

            EnableMultiplayerServersForTitleRequest(const EnableMultiplayerServersForTitleRequest& src) :
                PlayFabMultiplayerEnableMultiplayerServersForTitleRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~EnableMultiplayerServersForTitleRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerEnableMultiplayerServersForTitleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct EnableMultiplayerServersForTitleResponse : public PlayFabMultiplayerEnableMultiplayerServersForTitleResponse, public BaseResult
        {
            EnableMultiplayerServersForTitleResponse() : PlayFabMultiplayerEnableMultiplayerServersForTitleResponse{}
            {
            }

            EnableMultiplayerServersForTitleResponse(const EnableMultiplayerServersForTitleResponse& src) :
                PlayFabMultiplayerEnableMultiplayerServersForTitleResponse{ src },
                m_status{ src.m_status }
            {
                status = m_status ? m_status.operator->() : nullptr;
            }

            ~EnableMultiplayerServersForTitleResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerEnableMultiplayerServersForTitleResponse>(*this);
            }

        private:
            StdExtra::optional<PlayFabMultiplayerTitleMultiplayerServerEnabledStatus> m_status;
        };

        struct GetAssetUploadUrlRequest : public PlayFabMultiplayerGetAssetUploadUrlRequest, public BaseRequest
        {
            GetAssetUploadUrlRequest() : PlayFabMultiplayerGetAssetUploadUrlRequest{}
            {
            }

            GetAssetUploadUrlRequest(const GetAssetUploadUrlRequest& src) :
                PlayFabMultiplayerGetAssetUploadUrlRequest{ src },
                m_customTags{ src.m_customTags },
                m_fileName{ src.m_fileName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
            }

            ~GetAssetUploadUrlRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetAssetUploadUrlRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_fileName;
        };

        struct GetAssetUploadUrlResponse : public PlayFabMultiplayerGetAssetUploadUrlResponse, public BaseResult
        {
            GetAssetUploadUrlResponse() : PlayFabMultiplayerGetAssetUploadUrlResponse{}
            {
            }

            GetAssetUploadUrlResponse(const GetAssetUploadUrlResponse& src) :
                PlayFabMultiplayerGetAssetUploadUrlResponse{ src },
                m_assetUploadUrl{ src.m_assetUploadUrl },
                m_fileName{ src.m_fileName }
            {
                assetUploadUrl = m_assetUploadUrl.empty() ? nullptr : m_assetUploadUrl.data();
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
            }

            ~GetAssetUploadUrlResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AssetUploadUrl", m_assetUploadUrl, assetUploadUrl);
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetAssetUploadUrlResponse>(*this);
            }

        private:
            String m_assetUploadUrl;
            String m_fileName;
        };

        struct GetBuildAliasRequest : public PlayFabMultiplayerGetBuildAliasRequest, public BaseRequest
        {
            GetBuildAliasRequest() : PlayFabMultiplayerGetBuildAliasRequest{}
            {
            }

            GetBuildAliasRequest(const GetBuildAliasRequest& src) :
                PlayFabMultiplayerGetBuildAliasRequest{ src },
                m_aliasId{ src.m_aliasId },
                m_customTags{ src.m_customTags }
            {
                aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetBuildAliasRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetBuildAliasRequest>(*this);
            }

        private:
            String m_aliasId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetBuildRequest : public PlayFabMultiplayerGetBuildRequest, public BaseRequest
        {
            GetBuildRequest() : PlayFabMultiplayerGetBuildRequest{}
            {
            }

            GetBuildRequest(const GetBuildRequest& src) :
                PlayFabMultiplayerGetBuildRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetBuildRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetBuildRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetBuildResponse : public PlayFabMultiplayerGetBuildResponse, public BaseResult
        {
            GetBuildResponse() : PlayFabMultiplayerGetBuildResponse{}
            {
            }

            GetBuildResponse(const GetBuildResponse& src) :
                PlayFabMultiplayerGetBuildResponse{ src },
                m_areAssetsReadonly{ src.m_areAssetsReadonly },
                m_buildId{ src.m_buildId },
                m_buildName{ src.m_buildName },
                m_buildStatus{ src.m_buildStatus },
                m_containerFlavor{ src.m_containerFlavor },
                m_containerRunCommand{ src.m_containerRunCommand },
                m_creationTime{ src.m_creationTime },
                m_customGameContainerImage{ src.m_customGameContainerImage },
                m_gameAssetReferences{ src.m_gameAssetReferences },
                m_gameCertificateReferences{ src.m_gameCertificateReferences },
                m_instrumentationConfiguration{ src.m_instrumentationConfiguration },
                m_metadata{ src.m_metadata },
                m_osPlatform{ src.m_osPlatform },
                m_ports{ src.m_ports },
                m_regionConfigurations{ src.m_regionConfigurations },
                m_serverType{ src.m_serverType },
                m_startMultiplayerServerCommand{ src.m_startMultiplayerServerCommand },
                m_useStreamingForAssetDownloads{ src.m_useStreamingForAssetDownloads },
                m_vmSize{ src.m_vmSize }
            {
                areAssetsReadonly = m_areAssetsReadonly ? m_areAssetsReadonly.operator->() : nullptr;
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                buildStatus = m_buildStatus.empty() ? nullptr : m_buildStatus.data();
                containerFlavor = m_containerFlavor ? m_containerFlavor.operator->() : nullptr;
                containerRunCommand = m_containerRunCommand.empty() ? nullptr : m_containerRunCommand.data();
                creationTime = m_creationTime ? m_creationTime.operator->() : nullptr;
                customGameContainerImage = m_customGameContainerImage ? m_customGameContainerImage.operator->() : nullptr;
                gameAssetReferences = m_gameAssetReferences.Empty() ? nullptr : m_gameAssetReferences.Data();
                gameCertificateReferences = m_gameCertificateReferences.Empty() ? nullptr : m_gameCertificateReferences.Data();
                instrumentationConfiguration = m_instrumentationConfiguration ? m_instrumentationConfiguration.operator->() : nullptr;
                metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
                osPlatform = m_osPlatform.empty() ? nullptr : m_osPlatform.data();
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
                serverType = m_serverType.empty() ? nullptr : m_serverType.data();
                startMultiplayerServerCommand = m_startMultiplayerServerCommand.empty() ? nullptr : m_startMultiplayerServerCommand.data();
                useStreamingForAssetDownloads = m_useStreamingForAssetDownloads ? m_useStreamingForAssetDownloads.operator->() : nullptr;
                vmSize = m_vmSize ? m_vmSize.operator->() : nullptr;
            }

            ~GetBuildResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "BuildStatus", m_buildStatus, buildStatus);
                JsonUtils:: ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
                JsonUtils:: ObjectGetMember(input, "ContainerRunCommand", m_containerRunCommand, containerRunCommand);
                JsonUtils:: ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
                JsonUtils:: ObjectGetMember(input, "CustomGameContainerImage", m_customGameContainerImage, customGameContainerImage);
                JsonUtils:: ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
                JsonUtils:: ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
                JsonUtils:: ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
                JsonUtils:: ObjectGetMember(input, "ServerType", m_serverType, serverType);
                JsonUtils:: ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
                JsonUtils:: ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
                JsonUtils:: ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetBuildResponse>(*this);
            }

        private:
            StdExtra::optional<bool> m_areAssetsReadonly;
            String m_buildId;
            String m_buildName;
            String m_buildStatus;
            StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
            String m_containerRunCommand;
            StdExtra::optional<time_t> m_creationTime;
            StdExtra::optional<ContainerImageReference> m_customGameContainerImage;
            PointerArray<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
            PointerArray<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
            StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_metadata;
            String m_osPlatform;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            PointerArray<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
            String m_serverType;
            String m_startMultiplayerServerCommand;
            StdExtra::optional<bool> m_useStreamingForAssetDownloads;
            StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
        };

        struct GetContainerRegistryCredentialsRequest : public PlayFabMultiplayerGetContainerRegistryCredentialsRequest, public BaseRequest
        {
            GetContainerRegistryCredentialsRequest() : PlayFabMultiplayerGetContainerRegistryCredentialsRequest{}
            {
            }

            GetContainerRegistryCredentialsRequest(const GetContainerRegistryCredentialsRequest& src) :
                PlayFabMultiplayerGetContainerRegistryCredentialsRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetContainerRegistryCredentialsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetContainerRegistryCredentialsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetContainerRegistryCredentialsResponse : public PlayFabMultiplayerGetContainerRegistryCredentialsResponse, public BaseResult
        {
            GetContainerRegistryCredentialsResponse() : PlayFabMultiplayerGetContainerRegistryCredentialsResponse{}
            {
            }

            GetContainerRegistryCredentialsResponse(const GetContainerRegistryCredentialsResponse& src) :
                PlayFabMultiplayerGetContainerRegistryCredentialsResponse{ src },
                m_dnsName{ src.m_dnsName },
                m_password{ src.m_password },
                m_username{ src.m_username }
            {
                dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
                password = m_password.empty() ? nullptr : m_password.data();
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~GetContainerRegistryCredentialsResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DnsName", m_dnsName, dnsName);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetContainerRegistryCredentialsResponse>(*this);
            }

        private:
            String m_dnsName;
            String m_password;
            String m_username;
        };

        struct GetMatchmakingTicketRequest : public PlayFabMultiplayerGetMatchmakingTicketRequest, public BaseRequest
        {
            GetMatchmakingTicketRequest() : PlayFabMultiplayerGetMatchmakingTicketRequest{}
            {
            }

            GetMatchmakingTicketRequest(const GetMatchmakingTicketRequest& src) :
                PlayFabMultiplayerGetMatchmakingTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_queueName{ src.m_queueName },
                m_ticketId{ src.m_ticketId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~GetMatchmakingTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EscapeObject", escapeObject);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMatchmakingTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_queueName;
            String m_ticketId;
        };

        struct GetMatchmakingTicketResult : public PlayFabMultiplayerGetMatchmakingTicketResult, public BaseResult
        {
            GetMatchmakingTicketResult() : PlayFabMultiplayerGetMatchmakingTicketResult{}
            {
            }

            GetMatchmakingTicketResult(const GetMatchmakingTicketResult& src) :
                PlayFabMultiplayerGetMatchmakingTicketResult{ src },
                m_cancellationReasonString{ src.m_cancellationReasonString },
                m_creator{ src.m_creator },
                m_matchId{ src.m_matchId },
                m_members{ src.m_members },
                m_membersToMatchWith{ src.m_membersToMatchWith },
                m_queueName{ src.m_queueName },
                m_status{ src.m_status },
                m_ticketId{ src.m_ticketId }
            {
                cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
                creator = (PlayFabMultiplayerEntityKey*)&m_creator;
                matchId = m_matchId.empty() ? nullptr : m_matchId.data();
                members = m_members.Empty() ? nullptr : m_members.Data();
                membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                status = m_status.empty() ? nullptr : m_status.data();
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~GetMatchmakingTicketResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CancellationReasonString", m_cancellationReasonString, cancellationReasonString);
                JsonUtils:: ObjectGetMember(input, "Created", created, true);
                JsonUtils:: ObjectGetMember(input, "Creator", m_creator, creator);
                JsonUtils:: ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
                JsonUtils:: ObjectGetMember(input, "MatchId", m_matchId, matchId);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "MembersToMatchWith", m_membersToMatchWith, membersToMatchWith, membersToMatchWithCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMatchmakingTicketResult>(*this);
            }

        private:
            String m_cancellationReasonString;
            EntityKey m_creator;
            String m_matchId;
            PointerArray<PlayFabMultiplayerMatchmakingPlayer, MatchmakingPlayer> m_members;
            PointerArray<PlayFabMultiplayerEntityKey, EntityKey> m_membersToMatchWith;
            String m_queueName;
            String m_status;
            String m_ticketId;
        };

        struct GetMatchRequest : public PlayFabMultiplayerGetMatchRequest, public BaseRequest
        {
            GetMatchRequest() : PlayFabMultiplayerGetMatchRequest{}
            {
            }

            GetMatchRequest(const GetMatchRequest& src) :
                PlayFabMultiplayerGetMatchRequest{ src },
                m_customTags{ src.m_customTags },
                m_matchId{ src.m_matchId },
                m_queueName{ src.m_queueName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                matchId = m_matchId.empty() ? nullptr : m_matchId.data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~GetMatchRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EscapeObject", escapeObject);
                JsonUtils:: ObjectGetMember(input, "MatchId", m_matchId, matchId);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "ReturnMemberAttributes", returnMemberAttributes);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMatchRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_matchId;
            String m_queueName;
        };

        struct GetMatchResult : public PlayFabMultiplayerGetMatchResult, public BaseResult
        {
            GetMatchResult() : PlayFabMultiplayerGetMatchResult{}
            {
            }

            GetMatchResult(const GetMatchResult& src) :
                PlayFabMultiplayerGetMatchResult{ src },
                m_matchId{ src.m_matchId },
                m_members{ src.m_members },
                m_regionPreferences{ src.m_regionPreferences },
                m_serverDetails{ src.m_serverDetails }
            {
                matchId = m_matchId.empty() ? nullptr : m_matchId.data();
                members = m_members.Empty() ? nullptr : m_members.Data();
                regionPreferences = m_regionPreferences.Empty() ? nullptr : m_regionPreferences.Data();
                serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
            }

            ~GetMatchResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "MatchId", m_matchId, matchId);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "RegionPreferences", m_regionPreferences, regionPreferences, regionPreferencesCount);
                JsonUtils:: ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMatchResult>(*this);
            }

        private:
            String m_matchId;
            PointerArray<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
            PointerArray<const char, String> m_regionPreferences;
            StdExtra::optional<ServerDetails> m_serverDetails;
        };

        struct GetMultiplayerServerDetailsRequest : public PlayFabMultiplayerGetMultiplayerServerDetailsRequest, public BaseRequest
        {
            GetMultiplayerServerDetailsRequest() : PlayFabMultiplayerGetMultiplayerServerDetailsRequest{}
            {
            }

            GetMultiplayerServerDetailsRequest(const GetMultiplayerServerDetailsRequest& src) :
                PlayFabMultiplayerGetMultiplayerServerDetailsRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_region{ src.m_region },
                m_sessionId{ src.m_sessionId }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                region = m_region.empty() ? nullptr : m_region.data();
                sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
            }

            ~GetMultiplayerServerDetailsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerDetailsRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_region;
            String m_sessionId;
        };

        struct GetMultiplayerServerDetailsResponse : public PlayFabMultiplayerGetMultiplayerServerDetailsResponse, public BaseResult
        {
            GetMultiplayerServerDetailsResponse() : PlayFabMultiplayerGetMultiplayerServerDetailsResponse{}
            {
            }

            GetMultiplayerServerDetailsResponse(const GetMultiplayerServerDetailsResponse& src) :
                PlayFabMultiplayerGetMultiplayerServerDetailsResponse{ src },
                m_buildId{ src.m_buildId },
                m_connectedPlayers{ src.m_connectedPlayers },
                m_fQDN{ src.m_fQDN },
                m_iPV4Address{ src.m_iPV4Address },
                m_lastStateTransitionTime{ src.m_lastStateTransitionTime },
                m_ports{ src.m_ports },
                m_region{ src.m_region },
                m_serverId{ src.m_serverId },
                m_sessionId{ src.m_sessionId },
                m_state{ src.m_state },
                m_vmId{ src.m_vmId }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                connectedPlayers = m_connectedPlayers.Empty() ? nullptr : m_connectedPlayers.Data();
                fQDN = m_fQDN.empty() ? nullptr : m_fQDN.data();
                iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
                lastStateTransitionTime = m_lastStateTransitionTime ? m_lastStateTransitionTime.operator->() : nullptr;
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                region = m_region.empty() ? nullptr : m_region.data();
                serverId = m_serverId.empty() ? nullptr : m_serverId.data();
                sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
                state = m_state.empty() ? nullptr : m_state.data();
                vmId = m_vmId.empty() ? nullptr : m_vmId.data();
            }

            ~GetMultiplayerServerDetailsResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "ConnectedPlayers", m_connectedPlayers, connectedPlayers, connectedPlayersCount);
                JsonUtils:: ObjectGetMember(input, "FQDN", m_fQDN, fQDN);
                JsonUtils:: ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
                JsonUtils:: ObjectGetMember(input, "LastStateTransitionTime", m_lastStateTransitionTime, lastStateTransitionTime, true);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "ServerId", m_serverId, serverId);
                JsonUtils:: ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
                JsonUtils:: ObjectGetMember(input, "State", m_state, state);
                JsonUtils:: ObjectGetMember(input, "VmId", m_vmId, vmId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerDetailsResponse>(*this);
            }

        private:
            String m_buildId;
            PointerArray<PlayFabMultiplayerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
            String m_fQDN;
            String m_iPV4Address;
            StdExtra::optional<time_t> m_lastStateTransitionTime;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            String m_region;
            String m_serverId;
            String m_sessionId;
            String m_state;
            String m_vmId;
        };

        struct GetMultiplayerServerLogsRequest : public PlayFabMultiplayerGetMultiplayerServerLogsRequest, public BaseRequest
        {
            GetMultiplayerServerLogsRequest() : PlayFabMultiplayerGetMultiplayerServerLogsRequest{}
            {
            }

            GetMultiplayerServerLogsRequest(const GetMultiplayerServerLogsRequest& src) :
                PlayFabMultiplayerGetMultiplayerServerLogsRequest{ src },
                m_customTags{ src.m_customTags },
                m_serverId{ src.m_serverId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                serverId = m_serverId.empty() ? nullptr : m_serverId.data();
            }

            ~GetMultiplayerServerLogsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ServerId", m_serverId, serverId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerLogsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_serverId;
        };

        struct GetMultiplayerServerLogsResponse : public PlayFabMultiplayerGetMultiplayerServerLogsResponse, public BaseResult
        {
            GetMultiplayerServerLogsResponse() : PlayFabMultiplayerGetMultiplayerServerLogsResponse{}
            {
            }

            GetMultiplayerServerLogsResponse(const GetMultiplayerServerLogsResponse& src) :
                PlayFabMultiplayerGetMultiplayerServerLogsResponse{ src },
                m_logDownloadUrl{ src.m_logDownloadUrl }
            {
                logDownloadUrl = m_logDownloadUrl.empty() ? nullptr : m_logDownloadUrl.data();
            }

            ~GetMultiplayerServerLogsResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "LogDownloadUrl", m_logDownloadUrl, logDownloadUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerLogsResponse>(*this);
            }

        private:
            String m_logDownloadUrl;
        };

        struct GetMultiplayerSessionLogsBySessionIdRequest : public PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest, public BaseRequest
        {
            GetMultiplayerSessionLogsBySessionIdRequest() : PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest{}
            {
            }

            GetMultiplayerSessionLogsBySessionIdRequest(const GetMultiplayerSessionLogsBySessionIdRequest& src) :
                PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest{ src },
                m_customTags{ src.m_customTags },
                m_sessionId{ src.m_sessionId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
            }

            ~GetMultiplayerSessionLogsBySessionIdRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_sessionId;
        };

        struct GetQueueStatisticsRequest : public PlayFabMultiplayerGetQueueStatisticsRequest, public BaseRequest
        {
            GetQueueStatisticsRequest() : PlayFabMultiplayerGetQueueStatisticsRequest{}
            {
            }

            GetQueueStatisticsRequest(const GetQueueStatisticsRequest& src) :
                PlayFabMultiplayerGetQueueStatisticsRequest{ src },
                m_customTags{ src.m_customTags },
                m_queueName{ src.m_queueName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~GetQueueStatisticsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetQueueStatisticsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_queueName;
        };

        struct Statistics : public PlayFabMultiplayerStatistics, public BaseModel
        {
            Statistics() : PlayFabMultiplayerStatistics{}
            {
            }

            Statistics(const Statistics&) = default;

            ~Statistics() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Average", average);
                JsonUtils:: ObjectGetMember(input, "Percentile50", percentile50);
                JsonUtils:: ObjectGetMember(input, "Percentile90", percentile90);
                JsonUtils:: ObjectGetMember(input, "Percentile99", percentile99);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerStatistics>(*this);
            }

        private:
        };

        struct GetQueueStatisticsResult : public PlayFabMultiplayerGetQueueStatisticsResult, public BaseResult
        {
            GetQueueStatisticsResult() : PlayFabMultiplayerGetQueueStatisticsResult{}
            {
            }

            GetQueueStatisticsResult(const GetQueueStatisticsResult& src) :
                PlayFabMultiplayerGetQueueStatisticsResult{ src },
                m_numberOfPlayersMatching{ src.m_numberOfPlayersMatching },
                m_timeToMatchStatisticsInSeconds{ src.m_timeToMatchStatisticsInSeconds }
            {
                numberOfPlayersMatching = m_numberOfPlayersMatching ? m_numberOfPlayersMatching.operator->() : nullptr;
                timeToMatchStatisticsInSeconds = m_timeToMatchStatisticsInSeconds ? m_timeToMatchStatisticsInSeconds.operator->() : nullptr;
            }

            ~GetQueueStatisticsResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "NumberOfPlayersMatching", m_numberOfPlayersMatching, numberOfPlayersMatching);
                JsonUtils:: ObjectGetMember(input, "TimeToMatchStatisticsInSeconds", m_timeToMatchStatisticsInSeconds, timeToMatchStatisticsInSeconds);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetQueueStatisticsResult>(*this);
            }

        private:
            StdExtra::optional<uint32_t> m_numberOfPlayersMatching;
            StdExtra::optional<Statistics> m_timeToMatchStatisticsInSeconds;
        };

        struct GetRemoteLoginEndpointRequest : public PlayFabMultiplayerGetRemoteLoginEndpointRequest, public BaseRequest
        {
            GetRemoteLoginEndpointRequest() : PlayFabMultiplayerGetRemoteLoginEndpointRequest{}
            {
            }

            GetRemoteLoginEndpointRequest(const GetRemoteLoginEndpointRequest& src) :
                PlayFabMultiplayerGetRemoteLoginEndpointRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_region{ src.m_region },
                m_vmId{ src.m_vmId }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                region = m_region.empty() ? nullptr : m_region.data();
                vmId = m_vmId.empty() ? nullptr : m_vmId.data();
            }

            ~GetRemoteLoginEndpointRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "VmId", m_vmId, vmId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetRemoteLoginEndpointRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_region;
            String m_vmId;
        };

        struct GetRemoteLoginEndpointResponse : public PlayFabMultiplayerGetRemoteLoginEndpointResponse, public BaseResult
        {
            GetRemoteLoginEndpointResponse() : PlayFabMultiplayerGetRemoteLoginEndpointResponse{}
            {
            }

            GetRemoteLoginEndpointResponse(const GetRemoteLoginEndpointResponse& src) :
                PlayFabMultiplayerGetRemoteLoginEndpointResponse{ src },
                m_iPV4Address{ src.m_iPV4Address }
            {
                iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
            }

            ~GetRemoteLoginEndpointResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
                JsonUtils:: ObjectGetMember(input, "Port", port);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetRemoteLoginEndpointResponse>(*this);
            }

        private:
            String m_iPV4Address;
        };

        struct GetServerBackfillTicketRequest : public PlayFabMultiplayerGetServerBackfillTicketRequest, public BaseRequest
        {
            GetServerBackfillTicketRequest() : PlayFabMultiplayerGetServerBackfillTicketRequest{}
            {
            }

            GetServerBackfillTicketRequest(const GetServerBackfillTicketRequest& src) :
                PlayFabMultiplayerGetServerBackfillTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_queueName{ src.m_queueName },
                m_ticketId{ src.m_ticketId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~GetServerBackfillTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EscapeObject", escapeObject);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetServerBackfillTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_queueName;
            String m_ticketId;
        };

        struct GetServerBackfillTicketResult : public PlayFabMultiplayerGetServerBackfillTicketResult, public BaseResult
        {
            GetServerBackfillTicketResult() : PlayFabMultiplayerGetServerBackfillTicketResult{}
            {
            }

            GetServerBackfillTicketResult(const GetServerBackfillTicketResult& src) :
                PlayFabMultiplayerGetServerBackfillTicketResult{ src },
                m_cancellationReasonString{ src.m_cancellationReasonString },
                m_matchId{ src.m_matchId },
                m_members{ src.m_members },
                m_queueName{ src.m_queueName },
                m_serverDetails{ src.m_serverDetails },
                m_status{ src.m_status },
                m_ticketId{ src.m_ticketId }
            {
                cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
                matchId = m_matchId.empty() ? nullptr : m_matchId.data();
                members = m_members.Empty() ? nullptr : m_members.Data();
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                serverDetails = (PlayFabMultiplayerServerDetails*)&m_serverDetails;
                status = m_status.empty() ? nullptr : m_status.data();
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~GetServerBackfillTicketResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CancellationReasonString", m_cancellationReasonString, cancellationReasonString);
                JsonUtils:: ObjectGetMember(input, "Created", created, true);
                JsonUtils:: ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
                JsonUtils:: ObjectGetMember(input, "MatchId", m_matchId, matchId);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetServerBackfillTicketResult>(*this);
            }

        private:
            String m_cancellationReasonString;
            String m_matchId;
            PointerArray<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
            String m_queueName;
            ServerDetails m_serverDetails;
            String m_status;
            String m_ticketId;
        };

        struct GetTitleEnabledForMultiplayerServersStatusRequest : public PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest, public BaseRequest
        {
            GetTitleEnabledForMultiplayerServersStatusRequest() : PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest{}
            {
            }

            GetTitleEnabledForMultiplayerServersStatusRequest(const GetTitleEnabledForMultiplayerServersStatusRequest& src) :
                PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetTitleEnabledForMultiplayerServersStatusRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetTitleEnabledForMultiplayerServersStatusResponse : public PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse, public BaseResult
        {
            GetTitleEnabledForMultiplayerServersStatusResponse() : PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse{}
            {
            }

            GetTitleEnabledForMultiplayerServersStatusResponse(const GetTitleEnabledForMultiplayerServersStatusResponse& src) :
                PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse{ src },
                m_status{ src.m_status }
            {
                status = m_status ? m_status.operator->() : nullptr;
            }

            ~GetTitleEnabledForMultiplayerServersStatusResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Status", m_status, status);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse>(*this);
            }

        private:
            StdExtra::optional<PlayFabMultiplayerTitleMultiplayerServerEnabledStatus> m_status;
        };

        struct GetTitleMultiplayerServersQuotaChangeRequest : public PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest, public BaseRequest
        {
            GetTitleMultiplayerServersQuotaChangeRequest() : PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest{}
            {
            }

            GetTitleMultiplayerServersQuotaChangeRequest(const GetTitleMultiplayerServersQuotaChangeRequest& src) :
                PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest{ src },
                m_customTags{ src.m_customTags },
                m_requestId{ src.m_requestId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                requestId = m_requestId.empty() ? nullptr : m_requestId.data();
            }

            ~GetTitleMultiplayerServersQuotaChangeRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "RequestId", m_requestId, requestId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_requestId;
        };

        struct QuotaChange : public PlayFabMultiplayerQuotaChange, public BaseModel
        {
            QuotaChange() : PlayFabMultiplayerQuotaChange{}
            {
            }

            QuotaChange(const QuotaChange& src) :
                PlayFabMultiplayerQuotaChange{ src },
                m_changeDescription{ src.m_changeDescription },
                m_changes{ src.m_changes },
                m_notes{ src.m_notes },
                m_requestId{ src.m_requestId },
                m_reviewComments{ src.m_reviewComments }
            {
                changeDescription = m_changeDescription.empty() ? nullptr : m_changeDescription.data();
                changes = m_changes.Empty() ? nullptr : m_changes.Data();
                notes = m_notes.empty() ? nullptr : m_notes.data();
                requestId = m_requestId.empty() ? nullptr : m_requestId.data();
                reviewComments = m_reviewComments.empty() ? nullptr : m_reviewComments.data();
            }

            ~QuotaChange() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ChangeDescription", m_changeDescription, changeDescription);
                JsonUtils:: ObjectGetMember(input, "Changes", m_changes, changes, changesCount);
                JsonUtils:: ObjectGetMember(input, "IsPendingReview", isPendingReview);
                JsonUtils:: ObjectGetMember(input, "Notes", m_notes, notes);
                JsonUtils:: ObjectGetMember(input, "RequestId", m_requestId, requestId);
                JsonUtils:: ObjectGetMember(input, "ReviewComments", m_reviewComments, reviewComments);
                JsonUtils:: ObjectGetMember(input, "WasApproved", wasApproved);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerQuotaChange>(*this);
            }

        private:
            String m_changeDescription;
            PointerArray<PlayFabMultiplayerCoreCapacityChange, CoreCapacityChange> m_changes;
            String m_notes;
            String m_requestId;
            String m_reviewComments;
        };

        struct GetTitleMultiplayerServersQuotaChangeResponse : public PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse, public BaseResult
        {
            GetTitleMultiplayerServersQuotaChangeResponse() : PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse{}
            {
            }

            GetTitleMultiplayerServersQuotaChangeResponse(const GetTitleMultiplayerServersQuotaChangeResponse& src) :
                PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse{ src },
                m_change{ src.m_change }
            {
                change = m_change ? m_change.operator->() : nullptr;
            }

            ~GetTitleMultiplayerServersQuotaChangeResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Change", m_change, change);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse>(*this);
            }

        private:
            StdExtra::optional<QuotaChange> m_change;
        };

        struct GetTitleMultiplayerServersQuotasRequest : public PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest, public BaseRequest
        {
            GetTitleMultiplayerServersQuotasRequest() : PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest{}
            {
            }

            GetTitleMultiplayerServersQuotasRequest(const GetTitleMultiplayerServersQuotasRequest& src) :
                PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetTitleMultiplayerServersQuotasRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct TitleMultiplayerServersQuotas : public PlayFabMultiplayerTitleMultiplayerServersQuotas, public BaseModel
        {
            TitleMultiplayerServersQuotas() : PlayFabMultiplayerTitleMultiplayerServersQuotas{}
            {
            }

            TitleMultiplayerServersQuotas(const TitleMultiplayerServersQuotas& src) :
                PlayFabMultiplayerTitleMultiplayerServersQuotas{ src },
                m_coreCapacities{ src.m_coreCapacities }
            {
                coreCapacities = m_coreCapacities.Empty() ? nullptr : m_coreCapacities.Data();
            }

            ~TitleMultiplayerServersQuotas() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CoreCapacities", m_coreCapacities, coreCapacities, coreCapacitiesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerTitleMultiplayerServersQuotas>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerCoreCapacity, CoreCapacity> m_coreCapacities;
        };

        struct GetTitleMultiplayerServersQuotasResponse : public PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse, public BaseResult
        {
            GetTitleMultiplayerServersQuotasResponse() : PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse{}
            {
            }

            GetTitleMultiplayerServersQuotasResponse(const GetTitleMultiplayerServersQuotasResponse& src) :
                PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse{ src },
                m_quotas{ src.m_quotas }
            {
                quotas = m_quotas ? m_quotas.operator->() : nullptr;
            }

            ~GetTitleMultiplayerServersQuotasResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Quotas", m_quotas, quotas);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse>(*this);
            }

        private:
            StdExtra::optional<TitleMultiplayerServersQuotas> m_quotas;
        };

        struct JoinMatchmakingTicketRequest : public PlayFabMultiplayerJoinMatchmakingTicketRequest, public BaseRequest
        {
            JoinMatchmakingTicketRequest() : PlayFabMultiplayerJoinMatchmakingTicketRequest{}
            {
            }

            JoinMatchmakingTicketRequest(const JoinMatchmakingTicketRequest& src) :
                PlayFabMultiplayerJoinMatchmakingTicketRequest{ src },
                m_customTags{ src.m_customTags },
                m_member{ src.m_member },
                m_queueName{ src.m_queueName },
                m_ticketId{ src.m_ticketId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                member = (PlayFabMultiplayerMatchmakingPlayer*)&m_member;
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
                ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
            }

            ~JoinMatchmakingTicketRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Member", m_member, member);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
                JsonUtils:: ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerJoinMatchmakingTicketRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            MatchmakingPlayer m_member;
            String m_queueName;
            String m_ticketId;
        };

        struct ListAssetSummariesRequest : public PlayFabMultiplayerListAssetSummariesRequest, public BaseRequest
        {
            ListAssetSummariesRequest() : PlayFabMultiplayerListAssetSummariesRequest{}
            {
            }

            ListAssetSummariesRequest(const ListAssetSummariesRequest& src) :
                PlayFabMultiplayerListAssetSummariesRequest{ src },
                m_customTags{ src.m_customTags },
                m_pageSize{ src.m_pageSize },
                m_skipToken{ src.m_skipToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListAssetSummariesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListAssetSummariesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_pageSize;
            String m_skipToken;
        };

        struct ListAssetSummariesResponse : public PlayFabMultiplayerListAssetSummariesResponse, public BaseResult
        {
            ListAssetSummariesResponse() : PlayFabMultiplayerListAssetSummariesResponse{}
            {
            }

            ListAssetSummariesResponse(const ListAssetSummariesResponse& src) :
                PlayFabMultiplayerListAssetSummariesResponse{ src },
                m_assetSummaries{ src.m_assetSummaries },
                m_skipToken{ src.m_skipToken }
            {
                assetSummaries = m_assetSummaries.Empty() ? nullptr : m_assetSummaries.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListAssetSummariesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AssetSummaries", m_assetSummaries, assetSummaries, assetSummariesCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListAssetSummariesResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerAssetSummary, AssetSummary> m_assetSummaries;
            String m_skipToken;
        };

        struct ListBuildAliasesRequest : public PlayFabMultiplayerListBuildAliasesRequest, public BaseRequest
        {
            ListBuildAliasesRequest() : PlayFabMultiplayerListBuildAliasesRequest{}
            {
            }

            ListBuildAliasesRequest(const ListBuildAliasesRequest& src) :
                PlayFabMultiplayerListBuildAliasesRequest{ src },
                m_customTags{ src.m_customTags },
                m_pageSize{ src.m_pageSize },
                m_skipToken{ src.m_skipToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListBuildAliasesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListBuildAliasesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_pageSize;
            String m_skipToken;
        };

        struct ListBuildAliasesResponse : public PlayFabMultiplayerListBuildAliasesResponse, public BaseResult
        {
            ListBuildAliasesResponse() : PlayFabMultiplayerListBuildAliasesResponse{}
            {
            }

            ListBuildAliasesResponse(const ListBuildAliasesResponse& src) :
                PlayFabMultiplayerListBuildAliasesResponse{ src },
                m_buildAliases{ src.m_buildAliases },
                m_skipToken{ src.m_skipToken }
            {
                buildAliases = m_buildAliases.Empty() ? nullptr : m_buildAliases.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListBuildAliasesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildAliases", m_buildAliases, buildAliases, buildAliasesCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListBuildAliasesResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerBuildAliasDetailsResponse, BuildAliasDetailsResponse> m_buildAliases;
            String m_skipToken;
        };

        struct ListBuildSummariesRequest : public PlayFabMultiplayerListBuildSummariesRequest, public BaseRequest
        {
            ListBuildSummariesRequest() : PlayFabMultiplayerListBuildSummariesRequest{}
            {
            }

            ListBuildSummariesRequest(const ListBuildSummariesRequest& src) :
                PlayFabMultiplayerListBuildSummariesRequest{ src },
                m_customTags{ src.m_customTags },
                m_pageSize{ src.m_pageSize },
                m_skipToken{ src.m_skipToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListBuildSummariesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListBuildSummariesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_pageSize;
            String m_skipToken;
        };

        struct ListBuildSummariesResponse : public PlayFabMultiplayerListBuildSummariesResponse, public BaseResult
        {
            ListBuildSummariesResponse() : PlayFabMultiplayerListBuildSummariesResponse{}
            {
            }

            ListBuildSummariesResponse(const ListBuildSummariesResponse& src) :
                PlayFabMultiplayerListBuildSummariesResponse{ src },
                m_buildSummaries{ src.m_buildSummaries },
                m_skipToken{ src.m_skipToken }
            {
                buildSummaries = m_buildSummaries.Empty() ? nullptr : m_buildSummaries.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListBuildSummariesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildSummaries", m_buildSummaries, buildSummaries, buildSummariesCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListBuildSummariesResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerBuildSummary, BuildSummary> m_buildSummaries;
            String m_skipToken;
        };

        struct ListCertificateSummariesRequest : public PlayFabMultiplayerListCertificateSummariesRequest, public BaseRequest
        {
            ListCertificateSummariesRequest() : PlayFabMultiplayerListCertificateSummariesRequest{}
            {
            }

            ListCertificateSummariesRequest(const ListCertificateSummariesRequest& src) :
                PlayFabMultiplayerListCertificateSummariesRequest{ src },
                m_customTags{ src.m_customTags },
                m_pageSize{ src.m_pageSize },
                m_skipToken{ src.m_skipToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListCertificateSummariesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListCertificateSummariesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_pageSize;
            String m_skipToken;
        };

        struct ListCertificateSummariesResponse : public PlayFabMultiplayerListCertificateSummariesResponse, public BaseResult
        {
            ListCertificateSummariesResponse() : PlayFabMultiplayerListCertificateSummariesResponse{}
            {
            }

            ListCertificateSummariesResponse(const ListCertificateSummariesResponse& src) :
                PlayFabMultiplayerListCertificateSummariesResponse{ src },
                m_certificateSummaries{ src.m_certificateSummaries },
                m_skipToken{ src.m_skipToken }
            {
                certificateSummaries = m_certificateSummaries.Empty() ? nullptr : m_certificateSummaries.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListCertificateSummariesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CertificateSummaries", m_certificateSummaries, certificateSummaries, certificateSummariesCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListCertificateSummariesResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerCertificateSummary, CertificateSummary> m_certificateSummaries;
            String m_skipToken;
        };

        struct ListContainerImagesRequest : public PlayFabMultiplayerListContainerImagesRequest, public BaseRequest
        {
            ListContainerImagesRequest() : PlayFabMultiplayerListContainerImagesRequest{}
            {
            }

            ListContainerImagesRequest(const ListContainerImagesRequest& src) :
                PlayFabMultiplayerListContainerImagesRequest{ src },
                m_customTags{ src.m_customTags },
                m_pageSize{ src.m_pageSize },
                m_skipToken{ src.m_skipToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListContainerImagesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListContainerImagesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_pageSize;
            String m_skipToken;
        };

        struct ListContainerImagesResponse : public PlayFabMultiplayerListContainerImagesResponse, public BaseResult
        {
            ListContainerImagesResponse() : PlayFabMultiplayerListContainerImagesResponse{}
            {
            }

            ListContainerImagesResponse(const ListContainerImagesResponse& src) :
                PlayFabMultiplayerListContainerImagesResponse{ src },
                m_images{ src.m_images },
                m_skipToken{ src.m_skipToken }
            {
                images = m_images.Empty() ? nullptr : m_images.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListContainerImagesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Images", m_images, images, imagesCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListContainerImagesResponse>(*this);
            }

        private:
            PointerArray<const char, String> m_images;
            String m_skipToken;
        };

        struct ListContainerImageTagsRequest : public PlayFabMultiplayerListContainerImageTagsRequest, public BaseRequest
        {
            ListContainerImageTagsRequest() : PlayFabMultiplayerListContainerImageTagsRequest{}
            {
            }

            ListContainerImageTagsRequest(const ListContainerImageTagsRequest& src) :
                PlayFabMultiplayerListContainerImageTagsRequest{ src },
                m_customTags{ src.m_customTags },
                m_imageName{ src.m_imageName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                imageName = m_imageName.empty() ? nullptr : m_imageName.data();
            }

            ~ListContainerImageTagsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ImageName", m_imageName, imageName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListContainerImageTagsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_imageName;
        };

        struct ListContainerImageTagsResponse : public PlayFabMultiplayerListContainerImageTagsResponse, public BaseResult
        {
            ListContainerImageTagsResponse() : PlayFabMultiplayerListContainerImageTagsResponse{}
            {
            }

            ListContainerImageTagsResponse(const ListContainerImageTagsResponse& src) :
                PlayFabMultiplayerListContainerImageTagsResponse{ src },
                m_tags{ src.m_tags }
            {
                tags = m_tags.Empty() ? nullptr : m_tags.Data();
            }

            ~ListContainerImageTagsResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListContainerImageTagsResponse>(*this);
            }

        private:
            PointerArray<const char, String> m_tags;
        };

        struct ListMatchmakingTicketsForPlayerRequest : public PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest, public BaseRequest
        {
            ListMatchmakingTicketsForPlayerRequest() : PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest{}
            {
            }

            ListMatchmakingTicketsForPlayerRequest(const ListMatchmakingTicketsForPlayerRequest& src) :
                PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_queueName{ src.m_queueName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~ListMatchmakingTicketsForPlayerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            String m_queueName;
        };

        struct ListMatchmakingTicketsForPlayerResult : public PlayFabMultiplayerListMatchmakingTicketsForPlayerResult, public BaseResult
        {
            ListMatchmakingTicketsForPlayerResult() : PlayFabMultiplayerListMatchmakingTicketsForPlayerResult{}
            {
            }

            ListMatchmakingTicketsForPlayerResult(const ListMatchmakingTicketsForPlayerResult& src) :
                PlayFabMultiplayerListMatchmakingTicketsForPlayerResult{ src },
                m_ticketIds{ src.m_ticketIds }
            {
                ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
            }

            ~ListMatchmakingTicketsForPlayerResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TicketIds", m_ticketIds, ticketIds, ticketIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListMatchmakingTicketsForPlayerResult>(*this);
            }

        private:
            PointerArray<const char, String> m_ticketIds;
        };

        struct ListMultiplayerServersRequest : public PlayFabMultiplayerListMultiplayerServersRequest, public BaseRequest
        {
            ListMultiplayerServersRequest() : PlayFabMultiplayerListMultiplayerServersRequest{}
            {
            }

            ListMultiplayerServersRequest(const ListMultiplayerServersRequest& src) :
                PlayFabMultiplayerListMultiplayerServersRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_pageSize{ src.m_pageSize },
                m_region{ src.m_region },
                m_skipToken{ src.m_skipToken }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
                region = m_region.empty() ? nullptr : m_region.data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListMultiplayerServersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListMultiplayerServersRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_pageSize;
            String m_region;
            String m_skipToken;
        };

        struct MultiplayerServerSummary : public PlayFabMultiplayerMultiplayerServerSummary, public BaseModel
        {
            MultiplayerServerSummary() : PlayFabMultiplayerMultiplayerServerSummary{}
            {
            }

            MultiplayerServerSummary(const MultiplayerServerSummary& src) :
                PlayFabMultiplayerMultiplayerServerSummary{ src },
                m_connectedPlayers{ src.m_connectedPlayers },
                m_lastStateTransitionTime{ src.m_lastStateTransitionTime },
                m_region{ src.m_region },
                m_serverId{ src.m_serverId },
                m_sessionId{ src.m_sessionId },
                m_state{ src.m_state },
                m_vmId{ src.m_vmId }
            {
                connectedPlayers = m_connectedPlayers.Empty() ? nullptr : m_connectedPlayers.Data();
                lastStateTransitionTime = m_lastStateTransitionTime ? m_lastStateTransitionTime.operator->() : nullptr;
                region = m_region.empty() ? nullptr : m_region.data();
                serverId = m_serverId.empty() ? nullptr : m_serverId.data();
                sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
                state = m_state.empty() ? nullptr : m_state.data();
                vmId = m_vmId.empty() ? nullptr : m_vmId.data();
            }

            ~MultiplayerServerSummary() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ConnectedPlayers", m_connectedPlayers, connectedPlayers, connectedPlayersCount);
                JsonUtils:: ObjectGetMember(input, "LastStateTransitionTime", m_lastStateTransitionTime, lastStateTransitionTime, true);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "ServerId", m_serverId, serverId);
                JsonUtils:: ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
                JsonUtils:: ObjectGetMember(input, "State", m_state, state);
                JsonUtils:: ObjectGetMember(input, "VmId", m_vmId, vmId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerMultiplayerServerSummary>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
            StdExtra::optional<time_t> m_lastStateTransitionTime;
            String m_region;
            String m_serverId;
            String m_sessionId;
            String m_state;
            String m_vmId;
        };

        struct ListMultiplayerServersResponse : public PlayFabMultiplayerListMultiplayerServersResponse, public BaseResult
        {
            ListMultiplayerServersResponse() : PlayFabMultiplayerListMultiplayerServersResponse{}
            {
            }

            ListMultiplayerServersResponse(const ListMultiplayerServersResponse& src) :
                PlayFabMultiplayerListMultiplayerServersResponse{ src },
                m_multiplayerServerSummaries{ src.m_multiplayerServerSummaries },
                m_skipToken{ src.m_skipToken }
            {
                multiplayerServerSummaries = m_multiplayerServerSummaries.Empty() ? nullptr : m_multiplayerServerSummaries.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListMultiplayerServersResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "MultiplayerServerSummaries", m_multiplayerServerSummaries, multiplayerServerSummaries, multiplayerServerSummariesCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListMultiplayerServersResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerMultiplayerServerSummary, MultiplayerServerSummary> m_multiplayerServerSummaries;
            String m_skipToken;
        };

        struct ListPartyQosServersRequest : public PlayFabMultiplayerListPartyQosServersRequest, public BaseRequest
        {
            ListPartyQosServersRequest() : PlayFabMultiplayerListPartyQosServersRequest{}
            {
            }

            ListPartyQosServersRequest(const ListPartyQosServersRequest& src) :
                PlayFabMultiplayerListPartyQosServersRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~ListPartyQosServersRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListPartyQosServersRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct QosServer : public PlayFabMultiplayerQosServer, public BaseModel
        {
            QosServer() : PlayFabMultiplayerQosServer{}
            {
            }

            QosServer(const QosServer& src) :
                PlayFabMultiplayerQosServer{ src },
                m_region{ src.m_region },
                m_serverUrl{ src.m_serverUrl }
            {
                region = m_region.empty() ? nullptr : m_region.data();
                serverUrl = m_serverUrl.empty() ? nullptr : m_serverUrl.data();
            }

            ~QosServer() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "ServerUrl", m_serverUrl, serverUrl);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerQosServer>(*this);
            }

        private:
            String m_region;
            String m_serverUrl;
        };

        struct ListPartyQosServersResponse : public PlayFabMultiplayerListPartyQosServersResponse, public BaseResult
        {
            ListPartyQosServersResponse() : PlayFabMultiplayerListPartyQosServersResponse{}
            {
            }

            ListPartyQosServersResponse(const ListPartyQosServersResponse& src) :
                PlayFabMultiplayerListPartyQosServersResponse{ src },
                m_qosServers{ src.m_qosServers },
                m_skipToken{ src.m_skipToken }
            {
                qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListPartyQosServersResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "QosServers", m_qosServers, qosServers, qosServersCount);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListPartyQosServersResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerQosServer, QosServer> m_qosServers;
            String m_skipToken;
        };

        struct ListQosServersForTitleRequest : public PlayFabMultiplayerListQosServersForTitleRequest, public BaseRequest
        {
            ListQosServersForTitleRequest() : PlayFabMultiplayerListQosServersForTitleRequest{}
            {
            }

            ListQosServersForTitleRequest(const ListQosServersForTitleRequest& src) :
                PlayFabMultiplayerListQosServersForTitleRequest{ src },
                m_customTags{ src.m_customTags },
                m_includeAllRegions{ src.m_includeAllRegions }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                includeAllRegions = m_includeAllRegions ? m_includeAllRegions.operator->() : nullptr;
            }

            ~ListQosServersForTitleRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "IncludeAllRegions", m_includeAllRegions, includeAllRegions);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListQosServersForTitleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_includeAllRegions;
        };

        struct ListQosServersForTitleResponse : public PlayFabMultiplayerListQosServersForTitleResponse, public BaseResult
        {
            ListQosServersForTitleResponse() : PlayFabMultiplayerListQosServersForTitleResponse{}
            {
            }

            ListQosServersForTitleResponse(const ListQosServersForTitleResponse& src) :
                PlayFabMultiplayerListQosServersForTitleResponse{ src },
                m_qosServers{ src.m_qosServers },
                m_skipToken{ src.m_skipToken }
            {
                qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListQosServersForTitleResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "QosServers", m_qosServers, qosServers, qosServersCount);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListQosServersForTitleResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerQosServer, QosServer> m_qosServers;
            String m_skipToken;
        };

        struct ListServerBackfillTicketsForPlayerRequest : public PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest, public BaseRequest
        {
            ListServerBackfillTicketsForPlayerRequest() : PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest{}
            {
            }

            ListServerBackfillTicketsForPlayerRequest(const ListServerBackfillTicketsForPlayerRequest& src) :
                PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_queueName{ src.m_queueName }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabMultiplayerEntityKey*)&m_entity;
                queueName = m_queueName.empty() ? nullptr : m_queueName.data();
            }

            ~ListServerBackfillTicketsForPlayerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "QueueName", m_queueName, queueName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            String m_queueName;
        };

        struct ListServerBackfillTicketsForPlayerResult : public PlayFabMultiplayerListServerBackfillTicketsForPlayerResult, public BaseResult
        {
            ListServerBackfillTicketsForPlayerResult() : PlayFabMultiplayerListServerBackfillTicketsForPlayerResult{}
            {
            }

            ListServerBackfillTicketsForPlayerResult(const ListServerBackfillTicketsForPlayerResult& src) :
                PlayFabMultiplayerListServerBackfillTicketsForPlayerResult{ src },
                m_ticketIds{ src.m_ticketIds }
            {
                ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
            }

            ~ListServerBackfillTicketsForPlayerResult() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TicketIds", m_ticketIds, ticketIds, ticketIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListServerBackfillTicketsForPlayerResult>(*this);
            }

        private:
            PointerArray<const char, String> m_ticketIds;
        };

        struct ListTitleMultiplayerServersQuotaChangesRequest : public PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest, public BaseRequest
        {
            ListTitleMultiplayerServersQuotaChangesRequest() : PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest{}
            {
            }

            ListTitleMultiplayerServersQuotaChangesRequest(const ListTitleMultiplayerServersQuotaChangesRequest& src) :
                PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~ListTitleMultiplayerServersQuotaChangesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct ListTitleMultiplayerServersQuotaChangesResponse : public PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse, public BaseResult
        {
            ListTitleMultiplayerServersQuotaChangesResponse() : PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse{}
            {
            }

            ListTitleMultiplayerServersQuotaChangesResponse(const ListTitleMultiplayerServersQuotaChangesResponse& src) :
                PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse{ src },
                m_changes{ src.m_changes }
            {
                changes = m_changes.Empty() ? nullptr : m_changes.Data();
            }

            ~ListTitleMultiplayerServersQuotaChangesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Changes", m_changes, changes, changesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse>(*this);
            }

        private:
            PointerArray<PlayFabMultiplayerQuotaChange, QuotaChange> m_changes;
        };

        struct ListVirtualMachineSummariesRequest : public PlayFabMultiplayerListVirtualMachineSummariesRequest, public BaseRequest
        {
            ListVirtualMachineSummariesRequest() : PlayFabMultiplayerListVirtualMachineSummariesRequest{}
            {
            }

            ListVirtualMachineSummariesRequest(const ListVirtualMachineSummariesRequest& src) :
                PlayFabMultiplayerListVirtualMachineSummariesRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_pageSize{ src.m_pageSize },
                m_region{ src.m_region },
                m_skipToken{ src.m_skipToken }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
                region = m_region.empty() ? nullptr : m_region.data();
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
            }

            ~ListVirtualMachineSummariesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListVirtualMachineSummariesRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_pageSize;
            String m_region;
            String m_skipToken;
        };

        struct VirtualMachineSummary : public PlayFabMultiplayerVirtualMachineSummary, public BaseModel
        {
            VirtualMachineSummary() : PlayFabMultiplayerVirtualMachineSummary{}
            {
            }

            VirtualMachineSummary(const VirtualMachineSummary& src) :
                PlayFabMultiplayerVirtualMachineSummary{ src },
                m_healthStatus{ src.m_healthStatus },
                m_state{ src.m_state },
                m_vmId{ src.m_vmId }
            {
                healthStatus = m_healthStatus.empty() ? nullptr : m_healthStatus.data();
                state = m_state.empty() ? nullptr : m_state.data();
                vmId = m_vmId.empty() ? nullptr : m_vmId.data();
            }

            ~VirtualMachineSummary() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "HealthStatus", m_healthStatus, healthStatus);
                JsonUtils:: ObjectGetMember(input, "State", m_state, state);
                JsonUtils:: ObjectGetMember(input, "VmId", m_vmId, vmId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerVirtualMachineSummary>(*this);
            }

        private:
            String m_healthStatus;
            String m_state;
            String m_vmId;
        };

        struct ListVirtualMachineSummariesResponse : public PlayFabMultiplayerListVirtualMachineSummariesResponse, public BaseResult
        {
            ListVirtualMachineSummariesResponse() : PlayFabMultiplayerListVirtualMachineSummariesResponse{}
            {
            }

            ListVirtualMachineSummariesResponse(const ListVirtualMachineSummariesResponse& src) :
                PlayFabMultiplayerListVirtualMachineSummariesResponse{ src },
                m_skipToken{ src.m_skipToken },
                m_virtualMachines{ src.m_virtualMachines }
            {
                skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
                virtualMachines = m_virtualMachines.Empty() ? nullptr : m_virtualMachines.Data();
            }

            ~ListVirtualMachineSummariesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "PageSize", pageSize);
                JsonUtils:: ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
                JsonUtils:: ObjectGetMember(input, "VirtualMachines", m_virtualMachines, virtualMachines, virtualMachinesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerListVirtualMachineSummariesResponse>(*this);
            }

        private:
            String m_skipToken;
            PointerArray<PlayFabMultiplayerVirtualMachineSummary, VirtualMachineSummary> m_virtualMachines;
        };

        struct RequestMultiplayerServerRequest : public PlayFabMultiplayerRequestMultiplayerServerRequest, public BaseRequest
        {
            RequestMultiplayerServerRequest() : PlayFabMultiplayerRequestMultiplayerServerRequest{}
            {
            }

            RequestMultiplayerServerRequest(const RequestMultiplayerServerRequest& src) :
                PlayFabMultiplayerRequestMultiplayerServerRequest{ src },
                m_buildAliasParams{ src.m_buildAliasParams },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_initialPlayers{ src.m_initialPlayers },
                m_preferredRegions{ src.m_preferredRegions },
                m_sessionCookie{ src.m_sessionCookie },
                m_sessionId{ src.m_sessionId }
            {
                buildAliasParams = m_buildAliasParams ? m_buildAliasParams.operator->() : nullptr;
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                initialPlayers = m_initialPlayers.Empty() ? nullptr : m_initialPlayers.Data();
                preferredRegions = m_preferredRegions.Empty() ? nullptr : m_preferredRegions.Data();
                sessionCookie = m_sessionCookie.empty() ? nullptr : m_sessionCookie.data();
                sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
            }

            ~RequestMultiplayerServerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildAliasParams", m_buildAliasParams, buildAliasParams);
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "InitialPlayers", m_initialPlayers, initialPlayers, initialPlayersCount);
                JsonUtils:: ObjectGetMember(input, "PreferredRegions", m_preferredRegions, preferredRegions, preferredRegionsCount);
                JsonUtils:: ObjectGetMember(input, "SessionCookie", m_sessionCookie, sessionCookie);
                JsonUtils:: ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerRequestMultiplayerServerRequest>(*this);
            }

        private:
            StdExtra::optional<BuildAliasParams> m_buildAliasParams;
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<const char, String> m_initialPlayers;
            PointerArray<const char, String> m_preferredRegions;
            String m_sessionCookie;
            String m_sessionId;
        };

        struct RequestMultiplayerServerResponse : public PlayFabMultiplayerRequestMultiplayerServerResponse, public BaseResult
        {
            RequestMultiplayerServerResponse() : PlayFabMultiplayerRequestMultiplayerServerResponse{}
            {
            }

            RequestMultiplayerServerResponse(const RequestMultiplayerServerResponse& src) :
                PlayFabMultiplayerRequestMultiplayerServerResponse{ src },
                m_buildId{ src.m_buildId },
                m_connectedPlayers{ src.m_connectedPlayers },
                m_fQDN{ src.m_fQDN },
                m_iPV4Address{ src.m_iPV4Address },
                m_lastStateTransitionTime{ src.m_lastStateTransitionTime },
                m_ports{ src.m_ports },
                m_region{ src.m_region },
                m_serverId{ src.m_serverId },
                m_sessionId{ src.m_sessionId },
                m_state{ src.m_state },
                m_vmId{ src.m_vmId }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                connectedPlayers = m_connectedPlayers.Empty() ? nullptr : m_connectedPlayers.Data();
                fQDN = m_fQDN.empty() ? nullptr : m_fQDN.data();
                iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
                lastStateTransitionTime = m_lastStateTransitionTime ? m_lastStateTransitionTime.operator->() : nullptr;
                ports = m_ports.Empty() ? nullptr : m_ports.Data();
                region = m_region.empty() ? nullptr : m_region.data();
                serverId = m_serverId.empty() ? nullptr : m_serverId.data();
                sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
                state = m_state.empty() ? nullptr : m_state.data();
                vmId = m_vmId.empty() ? nullptr : m_vmId.data();
            }

            ~RequestMultiplayerServerResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "ConnectedPlayers", m_connectedPlayers, connectedPlayers, connectedPlayersCount);
                JsonUtils:: ObjectGetMember(input, "FQDN", m_fQDN, fQDN);
                JsonUtils:: ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
                JsonUtils:: ObjectGetMember(input, "LastStateTransitionTime", m_lastStateTransitionTime, lastStateTransitionTime, true);
                JsonUtils:: ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "ServerId", m_serverId, serverId);
                JsonUtils:: ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
                JsonUtils:: ObjectGetMember(input, "State", m_state, state);
                JsonUtils:: ObjectGetMember(input, "VmId", m_vmId, vmId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerRequestMultiplayerServerResponse>(*this);
            }

        private:
            String m_buildId;
            PointerArray<PlayFabMultiplayerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
            String m_fQDN;
            String m_iPV4Address;
            StdExtra::optional<time_t> m_lastStateTransitionTime;
            PointerArray<PlayFabMultiplayerPort, Port> m_ports;
            String m_region;
            String m_serverId;
            String m_sessionId;
            String m_state;
            String m_vmId;
        };

        struct RolloverContainerRegistryCredentialsRequest : public PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest, public BaseRequest
        {
            RolloverContainerRegistryCredentialsRequest() : PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest{}
            {
            }

            RolloverContainerRegistryCredentialsRequest(const RolloverContainerRegistryCredentialsRequest& src) :
                PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~RolloverContainerRegistryCredentialsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct RolloverContainerRegistryCredentialsResponse : public PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse, public BaseResult
        {
            RolloverContainerRegistryCredentialsResponse() : PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse{}
            {
            }

            RolloverContainerRegistryCredentialsResponse(const RolloverContainerRegistryCredentialsResponse& src) :
                PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse{ src },
                m_dnsName{ src.m_dnsName },
                m_password{ src.m_password },
                m_username{ src.m_username }
            {
                dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
                password = m_password.empty() ? nullptr : m_password.data();
                username = m_username.empty() ? nullptr : m_username.data();
            }

            ~RolloverContainerRegistryCredentialsResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DnsName", m_dnsName, dnsName);
                JsonUtils:: ObjectGetMember(input, "Password", m_password, password);
                JsonUtils:: ObjectGetMember(input, "Username", m_username, username);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse>(*this);
            }

        private:
            String m_dnsName;
            String m_password;
            String m_username;
        };

        struct ShutdownMultiplayerServerRequest : public PlayFabMultiplayerShutdownMultiplayerServerRequest, public BaseRequest
        {
            ShutdownMultiplayerServerRequest() : PlayFabMultiplayerShutdownMultiplayerServerRequest{}
            {
            }

            ShutdownMultiplayerServerRequest(const ShutdownMultiplayerServerRequest& src) :
                PlayFabMultiplayerShutdownMultiplayerServerRequest{ src },
                m_buildId{ src.m_buildId },
                m_customTags{ src.m_customTags },
                m_region{ src.m_region },
                m_sessionId{ src.m_sessionId }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                region = m_region.empty() ? nullptr : m_region.data();
                sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
            }

            ~ShutdownMultiplayerServerRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Region", m_region, region);
                JsonUtils:: ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerShutdownMultiplayerServerRequest>(*this);
            }

        private:
            String m_buildId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_region;
            String m_sessionId;
        };

        struct UntagContainerImageRequest : public PlayFabMultiplayerUntagContainerImageRequest, public BaseRequest
        {
            UntagContainerImageRequest() : PlayFabMultiplayerUntagContainerImageRequest{}
            {
            }

            UntagContainerImageRequest(const UntagContainerImageRequest& src) :
                PlayFabMultiplayerUntagContainerImageRequest{ src },
                m_customTags{ src.m_customTags },
                m_imageName{ src.m_imageName },
                m_tag{ src.m_tag }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                imageName = m_imageName.empty() ? nullptr : m_imageName.data();
                tag = m_tag.empty() ? nullptr : m_tag.data();
            }

            ~UntagContainerImageRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ImageName", m_imageName, imageName);
                JsonUtils:: ObjectGetMember(input, "Tag", m_tag, tag);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerUntagContainerImageRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_imageName;
            String m_tag;
        };

        struct UpdateBuildAliasRequest : public PlayFabMultiplayerUpdateBuildAliasRequest, public BaseRequest
        {
            UpdateBuildAliasRequest() : PlayFabMultiplayerUpdateBuildAliasRequest{}
            {
            }

            UpdateBuildAliasRequest(const UpdateBuildAliasRequest& src) :
                PlayFabMultiplayerUpdateBuildAliasRequest{ src },
                m_aliasId{ src.m_aliasId },
                m_aliasName{ src.m_aliasName },
                m_buildSelectionCriteria{ src.m_buildSelectionCriteria },
                m_customTags{ src.m_customTags }
            {
                aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
                aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
                buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UpdateBuildAliasRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
                JsonUtils:: ObjectGetMember(input, "AliasName", m_aliasName, aliasName);
                JsonUtils:: ObjectGetMember(input, "BuildSelectionCriteria", m_buildSelectionCriteria, buildSelectionCriteria, buildSelectionCriteriaCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildAliasRequest>(*this);
            }

        private:
            String m_aliasId;
            String m_aliasName;
            PointerArray<PlayFabMultiplayerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UpdateBuildNameRequest : public PlayFabMultiplayerUpdateBuildNameRequest, public BaseRequest
        {
            UpdateBuildNameRequest() : PlayFabMultiplayerUpdateBuildNameRequest{}
            {
            }

            UpdateBuildNameRequest(const UpdateBuildNameRequest& src) :
                PlayFabMultiplayerUpdateBuildNameRequest{ src },
                m_buildId{ src.m_buildId },
                m_buildName{ src.m_buildName },
                m_customTags{ src.m_customTags }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildName = m_buildName.empty() ? nullptr : m_buildName.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UpdateBuildNameRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildName", m_buildName, buildName);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildNameRequest>(*this);
            }

        private:
            String m_buildId;
            String m_buildName;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UpdateBuildRegionRequest : public PlayFabMultiplayerUpdateBuildRegionRequest, public BaseRequest
        {
            UpdateBuildRegionRequest() : PlayFabMultiplayerUpdateBuildRegionRequest{}
            {
            }

            UpdateBuildRegionRequest(const UpdateBuildRegionRequest& src) :
                PlayFabMultiplayerUpdateBuildRegionRequest{ src },
                m_buildId{ src.m_buildId },
                m_buildRegion{ src.m_buildRegion },
                m_customTags{ src.m_customTags }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildRegion = (PlayFabMultiplayerBuildRegionParams*)&m_buildRegion;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UpdateBuildRegionRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildRegion", m_buildRegion, buildRegion);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildRegionRequest>(*this);
            }

        private:
            String m_buildId;
            BuildRegionParams m_buildRegion;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UpdateBuildRegionsRequest : public PlayFabMultiplayerUpdateBuildRegionsRequest, public BaseRequest
        {
            UpdateBuildRegionsRequest() : PlayFabMultiplayerUpdateBuildRegionsRequest{}
            {
            }

            UpdateBuildRegionsRequest(const UpdateBuildRegionsRequest& src) :
                PlayFabMultiplayerUpdateBuildRegionsRequest{ src },
                m_buildId{ src.m_buildId },
                m_buildRegions{ src.m_buildRegions },
                m_customTags{ src.m_customTags }
            {
                buildId = m_buildId.empty() ? nullptr : m_buildId.data();
                buildRegions = m_buildRegions.Empty() ? nullptr : m_buildRegions.Data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~UpdateBuildRegionsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "BuildId", m_buildId, buildId);
                JsonUtils:: ObjectGetMember(input, "BuildRegions", m_buildRegions, buildRegions, buildRegionsCount);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildRegionsRequest>(*this);
            }

        private:
            String m_buildId;
            PointerArray<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_buildRegions;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct UploadCertificateRequest : public PlayFabMultiplayerUploadCertificateRequest, public BaseRequest
        {
            UploadCertificateRequest() : PlayFabMultiplayerUploadCertificateRequest{}
            {
            }

            UploadCertificateRequest(const UploadCertificateRequest& src) :
                PlayFabMultiplayerUploadCertificateRequest{ src },
                m_customTags{ src.m_customTags },
                m_gameCertificate{ src.m_gameCertificate }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                gameCertificate = (PlayFabMultiplayerCertificate*)&m_gameCertificate;
            }

            ~UploadCertificateRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "GameCertificate", m_gameCertificate, gameCertificate);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabMultiplayerUploadCertificateRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            Certificate m_gameCertificate;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabMultiplayerAzureRegion>
    {
        static constexpr PlayFabMultiplayerAzureRegion maxValue = PlayFabMultiplayerAzureRegion::UkSouth;
    };

    template<> struct EnumRange<PlayFabMultiplayerAzureVmFamily>
    {
        static constexpr PlayFabMultiplayerAzureVmFamily maxValue = PlayFabMultiplayerAzureVmFamily::Dsv2;
    };

    template<> struct EnumRange<PlayFabMultiplayerAzureVmSize>
    {
        static constexpr PlayFabMultiplayerAzureVmSize maxValue = PlayFabMultiplayerAzureVmSize::Standard_DS5_v2;
    };

    template<> struct EnumRange<PlayFabMultiplayerCancellationReason>
    {
        static constexpr PlayFabMultiplayerCancellationReason maxValue = PlayFabMultiplayerCancellationReason::Timeout;
    };

    template<> struct EnumRange<PlayFabMultiplayerContainerFlavor>
    {
        static constexpr PlayFabMultiplayerContainerFlavor maxValue = PlayFabMultiplayerContainerFlavor::Invalid;
    };

    template<> struct EnumRange<PlayFabMultiplayerOsPlatform>
    {
        static constexpr PlayFabMultiplayerOsPlatform maxValue = PlayFabMultiplayerOsPlatform::Linux;
    };

    template<> struct EnumRange<PlayFabMultiplayerProtocolType>
    {
        static constexpr PlayFabMultiplayerProtocolType maxValue = PlayFabMultiplayerProtocolType::UDP;
    };

    template<> struct EnumRange<PlayFabMultiplayerServerType>
    {
        static constexpr PlayFabMultiplayerServerType maxValue = PlayFabMultiplayerServerType::Process;
    };

    template<> struct EnumRange<PlayFabMultiplayerTitleMultiplayerServerEnabledStatus>
    {
        static constexpr PlayFabMultiplayerTitleMultiplayerServerEnabledStatus maxValue = PlayFabMultiplayerTitleMultiplayerServerEnabledStatus::Disabled;
    };

}

#endif
