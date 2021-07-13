#include "stdafx.h"
#include "MultiplayerDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace MultiplayerModels
{

AssetReference::AssetReference() :
    PlayFabMultiplayerAssetReference{}
{
}

AssetReference::AssetReference(const AssetReference& src) :
    PlayFabMultiplayerAssetReference{ src },
    m_fileName{ src.m_fileName },
    m_mountPath{ src.m_mountPath }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReference::AssetReference(AssetReference&& src) :
    PlayFabMultiplayerAssetReference{ src },
    m_fileName{ std::move(src.m_fileName) },
    m_mountPath{ std::move(src.m_mountPath) }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReference::AssetReference(const PlayFabMultiplayerAssetReference& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AssetReference::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
    JsonUtils::ObjectGetMember(input, "MountPath", m_mountPath, mountPath);
}

JsonValue AssetReference::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerAssetReference>(*this);
}

size_t AssetReference::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerAssetReference) };
    serializedSize += (m_fileName.size() + 1);
    serializedSize += (m_mountPath.size() + 1);
    return serializedSize;
}

void AssetReference::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerAssetReference{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerAssetReference);
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    memcpy(stringBuffer, m_mountPath.data(), m_mountPath.size() + 1);
    serializedStruct->mountPath = stringBuffer;
    stringBuffer += m_mountPath.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AssetReferenceParams::AssetReferenceParams() :
    PlayFabMultiplayerAssetReferenceParams{}
{
}

AssetReferenceParams::AssetReferenceParams(const AssetReferenceParams& src) :
    PlayFabMultiplayerAssetReferenceParams{ src },
    m_fileName{ src.m_fileName },
    m_mountPath{ src.m_mountPath }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReferenceParams::AssetReferenceParams(AssetReferenceParams&& src) :
    PlayFabMultiplayerAssetReferenceParams{ src },
    m_fileName{ std::move(src.m_fileName) },
    m_mountPath{ std::move(src.m_mountPath) }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReferenceParams::AssetReferenceParams(const PlayFabMultiplayerAssetReferenceParams& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AssetReferenceParams::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
    JsonUtils::ObjectGetMember(input, "MountPath", m_mountPath, mountPath);
}

JsonValue AssetReferenceParams::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerAssetReferenceParams>(*this);
}

size_t AssetReferenceParams::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerAssetReferenceParams) };
    serializedSize += (m_fileName.size() + 1);
    serializedSize += (m_mountPath.size() + 1);
    return serializedSize;
}

void AssetReferenceParams::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerAssetReferenceParams{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerAssetReferenceParams);
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    memcpy(stringBuffer, m_mountPath.data(), m_mountPath.size() + 1);
    serializedStruct->mountPath = stringBuffer;
    stringBuffer += m_mountPath.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AssetSummary::AssetSummary() :
    PlayFabMultiplayerAssetSummary{}
{
}

AssetSummary::AssetSummary(const AssetSummary& src) :
    PlayFabMultiplayerAssetSummary{ src },
    m_fileName{ src.m_fileName },
    m_metadata{ src.m_metadata }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

AssetSummary::AssetSummary(AssetSummary&& src) :
    PlayFabMultiplayerAssetSummary{ src },
    m_fileName{ std::move(src.m_fileName) },
    m_metadata{ std::move(src.m_metadata) }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

AssetSummary::AssetSummary(const PlayFabMultiplayerAssetSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AssetSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
}

JsonValue AssetSummary::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerAssetSummary>(*this);
}

BuildSelectionCriterion::BuildSelectionCriterion() :
    PlayFabMultiplayerBuildSelectionCriterion{}
{
}

BuildSelectionCriterion::BuildSelectionCriterion(const BuildSelectionCriterion& src) :
    PlayFabMultiplayerBuildSelectionCriterion{ src },
    m_buildWeightDistribution{ src.m_buildWeightDistribution }
{
    buildWeightDistribution = m_buildWeightDistribution.Empty() ? nullptr : m_buildWeightDistribution.Data();
}

BuildSelectionCriterion::BuildSelectionCriterion(BuildSelectionCriterion&& src) :
    PlayFabMultiplayerBuildSelectionCriterion{ src },
    m_buildWeightDistribution{ std::move(src.m_buildWeightDistribution) }
{
    buildWeightDistribution = m_buildWeightDistribution.Empty() ? nullptr : m_buildWeightDistribution.Data();
}

BuildSelectionCriterion::BuildSelectionCriterion(const PlayFabMultiplayerBuildSelectionCriterion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildSelectionCriterion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildWeightDistribution", m_buildWeightDistribution, buildWeightDistribution, buildWeightDistributionCount);
}

JsonValue BuildSelectionCriterion::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerBuildSelectionCriterion>(*this);
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse() :
    PlayFabMultiplayerBuildAliasDetailsResponse{}
{
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse(const BuildAliasDetailsResponse& src) :
    PlayFabMultiplayerBuildAliasDetailsResponse{ src },
    m_aliasId{ src.m_aliasId },
    m_aliasName{ src.m_aliasName },
    m_buildSelectionCriteria{ src.m_buildSelectionCriteria }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse(BuildAliasDetailsResponse&& src) :
    PlayFabMultiplayerBuildAliasDetailsResponse{ src },
    m_aliasId{ std::move(src.m_aliasId) },
    m_aliasName{ std::move(src.m_aliasName) },
    m_buildSelectionCriteria{ std::move(src.m_buildSelectionCriteria) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse(const PlayFabMultiplayerBuildAliasDetailsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildAliasDetailsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
    JsonUtils::ObjectGetMember(input, "AliasName", m_aliasName, aliasName);
    JsonUtils::ObjectGetMember(input, "BuildSelectionCriteria", m_buildSelectionCriteria, buildSelectionCriteria, buildSelectionCriteriaCount);
}

JsonValue BuildAliasDetailsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerBuildAliasDetailsResponse>(*this);
}

BuildAliasParams::BuildAliasParams() :
    PlayFabMultiplayerBuildAliasParams{}
{
}

BuildAliasParams::BuildAliasParams(const BuildAliasParams& src) :
    PlayFabMultiplayerBuildAliasParams{ src },
    m_aliasId{ src.m_aliasId }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
}

BuildAliasParams::BuildAliasParams(BuildAliasParams&& src) :
    PlayFabMultiplayerBuildAliasParams{ src },
    m_aliasId{ std::move(src.m_aliasId) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
}

BuildAliasParams::BuildAliasParams(const PlayFabMultiplayerBuildAliasParams& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildAliasParams::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
}

JsonValue BuildAliasParams::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerBuildAliasParams>(*this);
}

size_t BuildAliasParams::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerBuildAliasParams) };
    serializedSize += (m_aliasId.size() + 1);
    return serializedSize;
}

void BuildAliasParams::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerBuildAliasParams{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerBuildAliasParams);
    memcpy(stringBuffer, m_aliasId.data(), m_aliasId.size() + 1);
    serializedStruct->aliasId = stringBuffer;
    stringBuffer += m_aliasId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CurrentServerStats::CurrentServerStats() :
    PlayFabMultiplayerCurrentServerStats{}
{
}


CurrentServerStats::CurrentServerStats(const PlayFabMultiplayerCurrentServerStats& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CurrentServerStats::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Active", active);
    JsonUtils::ObjectGetMember(input, "Propping", propping);
    JsonUtils::ObjectGetMember(input, "StandingBy", standingBy);
    JsonUtils::ObjectGetMember(input, "Total", total);
}

JsonValue CurrentServerStats::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCurrentServerStats>(*this);
}

size_t CurrentServerStats::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerCurrentServerStats) };
    return serializedSize;
}

void CurrentServerStats::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerCurrentServerStats{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerCurrentServerStats);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

DynamicStandbyThreshold::DynamicStandbyThreshold() :
    PlayFabMultiplayerDynamicStandbyThreshold{}
{
}


DynamicStandbyThreshold::DynamicStandbyThreshold(const PlayFabMultiplayerDynamicStandbyThreshold& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DynamicStandbyThreshold::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Multiplier", multiplier);
    JsonUtils::ObjectGetMember(input, "TriggerThresholdPercentage", triggerThresholdPercentage);
}

JsonValue DynamicStandbyThreshold::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDynamicStandbyThreshold>(*this);
}

size_t DynamicStandbyThreshold::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerDynamicStandbyThreshold) };
    return serializedSize;
}

void DynamicStandbyThreshold::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerDynamicStandbyThreshold{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerDynamicStandbyThreshold);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

DynamicStandbySettings::DynamicStandbySettings() :
    PlayFabMultiplayerDynamicStandbySettings{}
{
}

DynamicStandbySettings::DynamicStandbySettings(const DynamicStandbySettings& src) :
    PlayFabMultiplayerDynamicStandbySettings{ src },
    m_dynamicFloorMultiplierThresholds{ src.m_dynamicFloorMultiplierThresholds },
    m_rampDownSeconds{ src.m_rampDownSeconds }
{
    dynamicFloorMultiplierThresholds = m_dynamicFloorMultiplierThresholds.Empty() ? nullptr : m_dynamicFloorMultiplierThresholds.Data();
    rampDownSeconds = m_rampDownSeconds ? m_rampDownSeconds.operator->() : nullptr;
}

DynamicStandbySettings::DynamicStandbySettings(DynamicStandbySettings&& src) :
    PlayFabMultiplayerDynamicStandbySettings{ src },
    m_dynamicFloorMultiplierThresholds{ std::move(src.m_dynamicFloorMultiplierThresholds) },
    m_rampDownSeconds{ std::move(src.m_rampDownSeconds) }
{
    dynamicFloorMultiplierThresholds = m_dynamicFloorMultiplierThresholds.Empty() ? nullptr : m_dynamicFloorMultiplierThresholds.Data();
    rampDownSeconds = m_rampDownSeconds ? m_rampDownSeconds.operator->() : nullptr;
}

DynamicStandbySettings::DynamicStandbySettings(const PlayFabMultiplayerDynamicStandbySettings& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DynamicStandbySettings::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DynamicFloorMultiplierThresholds", m_dynamicFloorMultiplierThresholds, dynamicFloorMultiplierThresholds, dynamicFloorMultiplierThresholdsCount);
    JsonUtils::ObjectGetMember(input, "IsEnabled", isEnabled);
    JsonUtils::ObjectGetMember(input, "RampDownSeconds", m_rampDownSeconds, rampDownSeconds);
}

JsonValue DynamicStandbySettings::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDynamicStandbySettings>(*this);
}

Schedule::Schedule() :
    PlayFabMultiplayerSchedule{}
{
}

Schedule::Schedule(const Schedule& src) :
    PlayFabMultiplayerSchedule{ src },
    m_description{ src.m_description }
{
    description = m_description.empty() ? nullptr : m_description.data();
}

Schedule::Schedule(Schedule&& src) :
    PlayFabMultiplayerSchedule{ src },
    m_description{ std::move(src.m_description) }
{
    description = m_description.empty() ? nullptr : m_description.data();
}

Schedule::Schedule(const PlayFabMultiplayerSchedule& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Schedule::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Description", m_description, description);
    JsonUtils::ObjectGetMember(input, "EndTime", endTime, true);
    JsonUtils::ObjectGetMember(input, "IsDisabled", isDisabled);
    JsonUtils::ObjectGetMember(input, "IsRecurringWeekly", isRecurringWeekly);
    JsonUtils::ObjectGetMember(input, "StartTime", startTime, true);
    JsonUtils::ObjectGetMember(input, "TargetStandby", targetStandby);
}

JsonValue Schedule::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerSchedule>(*this);
}

size_t Schedule::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerSchedule) };
    serializedSize += (m_description.size() + 1);
    return serializedSize;
}

void Schedule::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerSchedule{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerSchedule);
    memcpy(stringBuffer, m_description.data(), m_description.size() + 1);
    serializedStruct->description = stringBuffer;
    stringBuffer += m_description.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ScheduledStandbySettings::ScheduledStandbySettings() :
    PlayFabMultiplayerScheduledStandbySettings{}
{
}

ScheduledStandbySettings::ScheduledStandbySettings(const ScheduledStandbySettings& src) :
    PlayFabMultiplayerScheduledStandbySettings{ src },
    m_scheduleList{ src.m_scheduleList }
{
    scheduleList = m_scheduleList.Empty() ? nullptr : m_scheduleList.Data();
}

ScheduledStandbySettings::ScheduledStandbySettings(ScheduledStandbySettings&& src) :
    PlayFabMultiplayerScheduledStandbySettings{ src },
    m_scheduleList{ std::move(src.m_scheduleList) }
{
    scheduleList = m_scheduleList.Empty() ? nullptr : m_scheduleList.Data();
}

ScheduledStandbySettings::ScheduledStandbySettings(const PlayFabMultiplayerScheduledStandbySettings& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ScheduledStandbySettings::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsEnabled", isEnabled);
    JsonUtils::ObjectGetMember(input, "ScheduleList", m_scheduleList, scheduleList, scheduleListCount);
}

JsonValue ScheduledStandbySettings::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerScheduledStandbySettings>(*this);
}

BuildRegion::BuildRegion() :
    PlayFabMultiplayerBuildRegion{}
{
}

BuildRegion::BuildRegion(const BuildRegion& src) :
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

BuildRegion::BuildRegion(BuildRegion&& src) :
    PlayFabMultiplayerBuildRegion{ src },
    m_currentServerStats{ std::move(src.m_currentServerStats) },
    m_dynamicStandbySettings{ std::move(src.m_dynamicStandbySettings) },
    m_region{ std::move(src.m_region) },
    m_scheduledStandbySettings{ std::move(src.m_scheduledStandbySettings) },
    m_status{ std::move(src.m_status) }
{
    currentServerStats = m_currentServerStats ? m_currentServerStats.operator->() : nullptr;
    dynamicStandbySettings = m_dynamicStandbySettings ? m_dynamicStandbySettings.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    scheduledStandbySettings = m_scheduledStandbySettings ? m_scheduledStandbySettings.operator->() : nullptr;
    status = m_status.empty() ? nullptr : m_status.data();
}

BuildRegion::BuildRegion(const PlayFabMultiplayerBuildRegion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildRegion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CurrentServerStats", m_currentServerStats, currentServerStats);
    JsonUtils::ObjectGetMember(input, "DynamicStandbySettings", m_dynamicStandbySettings, dynamicStandbySettings);
    JsonUtils::ObjectGetMember(input, "MaxServers", maxServers);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ScheduledStandbySettings", m_scheduledStandbySettings, scheduledStandbySettings);
    JsonUtils::ObjectGetMember(input, "StandbyServers", standbyServers);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
}

JsonValue BuildRegion::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerBuildRegion>(*this);
}

BuildRegionParams::BuildRegionParams() :
    PlayFabMultiplayerBuildRegionParams{}
{
}

BuildRegionParams::BuildRegionParams(const BuildRegionParams& src) :
    PlayFabMultiplayerBuildRegionParams{ src },
    m_dynamicStandbySettings{ src.m_dynamicStandbySettings },
    m_region{ src.m_region },
    m_scheduledStandbySettings{ src.m_scheduledStandbySettings }
{
    dynamicStandbySettings = m_dynamicStandbySettings ? m_dynamicStandbySettings.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    scheduledStandbySettings = m_scheduledStandbySettings ? m_scheduledStandbySettings.operator->() : nullptr;
}

BuildRegionParams::BuildRegionParams(BuildRegionParams&& src) :
    PlayFabMultiplayerBuildRegionParams{ src },
    m_dynamicStandbySettings{ std::move(src.m_dynamicStandbySettings) },
    m_region{ std::move(src.m_region) },
    m_scheduledStandbySettings{ std::move(src.m_scheduledStandbySettings) }
{
    dynamicStandbySettings = m_dynamicStandbySettings ? m_dynamicStandbySettings.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    scheduledStandbySettings = m_scheduledStandbySettings ? m_scheduledStandbySettings.operator->() : nullptr;
}

BuildRegionParams::BuildRegionParams(const PlayFabMultiplayerBuildRegionParams& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildRegionParams::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DynamicStandbySettings", m_dynamicStandbySettings, dynamicStandbySettings);
    JsonUtils::ObjectGetMember(input, "MaxServers", maxServers);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ScheduledStandbySettings", m_scheduledStandbySettings, scheduledStandbySettings);
    JsonUtils::ObjectGetMember(input, "StandbyServers", standbyServers);
}

JsonValue BuildRegionParams::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerBuildRegionParams>(*this);
}

BuildSummary::BuildSummary() :
    PlayFabMultiplayerBuildSummary{}
{
}

BuildSummary::BuildSummary(const BuildSummary& src) :
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

BuildSummary::BuildSummary(BuildSummary&& src) :
    PlayFabMultiplayerBuildSummary{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_buildName{ std::move(src.m_buildName) },
    m_creationTime{ std::move(src.m_creationTime) },
    m_metadata{ std::move(src.m_metadata) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildName = m_buildName.empty() ? nullptr : m_buildName.data();
    creationTime = m_creationTime ? m_creationTime.operator->() : nullptr;
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
    regionConfigurations = m_regionConfigurations.Empty() ? nullptr : m_regionConfigurations.Data();
}

BuildSummary::BuildSummary(const PlayFabMultiplayerBuildSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
}

JsonValue BuildSummary::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerBuildSummary>(*this);
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest() :
    PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest{}
{
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest(const CancelAllMatchmakingTicketsForPlayerRequest& src) :
    PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest(CancelAllMatchmakingTicketsForPlayerRequest&& src) :
    PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest(const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelAllMatchmakingTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CancelAllMatchmakingTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest>(*this);
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest() :
    PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest{}
{
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest(const CancelAllServerBackfillTicketsForPlayerRequest& src) :
    PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest(CancelAllServerBackfillTicketsForPlayerRequest&& src) :
    PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest(const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelAllServerBackfillTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CancelAllServerBackfillTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest>(*this);
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest() :
    PlayFabMultiplayerCancelMatchmakingTicketRequest{}
{
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest(const CancelMatchmakingTicketRequest& src) :
    PlayFabMultiplayerCancelMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest(CancelMatchmakingTicketRequest&& src) :
    PlayFabMultiplayerCancelMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelMatchmakingTicketRequest::CancelMatchmakingTicketRequest(const PlayFabMultiplayerCancelMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CancelMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCancelMatchmakingTicketRequest>(*this);
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest() :
    PlayFabMultiplayerCancelServerBackfillTicketRequest{}
{
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest(const CancelServerBackfillTicketRequest& src) :
    PlayFabMultiplayerCancelServerBackfillTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest(CancelServerBackfillTicketRequest&& src) :
    PlayFabMultiplayerCancelServerBackfillTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CancelServerBackfillTicketRequest::CancelServerBackfillTicketRequest(const PlayFabMultiplayerCancelServerBackfillTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelServerBackfillTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CancelServerBackfillTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCancelServerBackfillTicketRequest>(*this);
}

Certificate::Certificate() :
    PlayFabMultiplayerCertificate{}
{
}

Certificate::Certificate(const Certificate& src) :
    PlayFabMultiplayerCertificate{ src },
    m_base64EncodedValue{ src.m_base64EncodedValue },
    m_name{ src.m_name },
    m_password{ src.m_password }
{
    base64EncodedValue = m_base64EncodedValue.empty() ? nullptr : m_base64EncodedValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    password = m_password.empty() ? nullptr : m_password.data();
}

Certificate::Certificate(Certificate&& src) :
    PlayFabMultiplayerCertificate{ src },
    m_base64EncodedValue{ std::move(src.m_base64EncodedValue) },
    m_name{ std::move(src.m_name) },
    m_password{ std::move(src.m_password) }
{
    base64EncodedValue = m_base64EncodedValue.empty() ? nullptr : m_base64EncodedValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    password = m_password.empty() ? nullptr : m_password.data();
}

Certificate::Certificate(const PlayFabMultiplayerCertificate& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Certificate::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Base64EncodedValue", m_base64EncodedValue, base64EncodedValue);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
}

JsonValue Certificate::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCertificate>(*this);
}

size_t Certificate::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerCertificate) };
    serializedSize += (m_base64EncodedValue.size() + 1);
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_password.size() + 1);
    return serializedSize;
}

void Certificate::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerCertificate{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerCertificate);
    memcpy(stringBuffer, m_base64EncodedValue.data(), m_base64EncodedValue.size() + 1);
    serializedStruct->base64EncodedValue = stringBuffer;
    stringBuffer += m_base64EncodedValue.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    memcpy(stringBuffer, m_password.data(), m_password.size() + 1);
    serializedStruct->password = stringBuffer;
    stringBuffer += m_password.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CertificateSummary::CertificateSummary() :
    PlayFabMultiplayerCertificateSummary{}
{
}

CertificateSummary::CertificateSummary(const CertificateSummary& src) :
    PlayFabMultiplayerCertificateSummary{ src },
    m_name{ src.m_name },
    m_thumbprint{ src.m_thumbprint }
{
    name = m_name.empty() ? nullptr : m_name.data();
    thumbprint = m_thumbprint.empty() ? nullptr : m_thumbprint.data();
}

CertificateSummary::CertificateSummary(CertificateSummary&& src) :
    PlayFabMultiplayerCertificateSummary{ src },
    m_name{ std::move(src.m_name) },
    m_thumbprint{ std::move(src.m_thumbprint) }
{
    name = m_name.empty() ? nullptr : m_name.data();
    thumbprint = m_thumbprint.empty() ? nullptr : m_thumbprint.data();
}

CertificateSummary::CertificateSummary(const PlayFabMultiplayerCertificateSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CertificateSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Thumbprint", m_thumbprint, thumbprint);
}

JsonValue CertificateSummary::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCertificateSummary>(*this);
}

size_t CertificateSummary::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerCertificateSummary) };
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_thumbprint.size() + 1);
    return serializedSize;
}

void CertificateSummary::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerCertificateSummary{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerCertificateSummary);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    memcpy(stringBuffer, m_thumbprint.data(), m_thumbprint.size() + 1);
    serializedStruct->thumbprint = stringBuffer;
    stringBuffer += m_thumbprint.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ConnectedPlayer::ConnectedPlayer() :
    PlayFabMultiplayerConnectedPlayer{}
{
}

ConnectedPlayer::ConnectedPlayer(const ConnectedPlayer& src) :
    PlayFabMultiplayerConnectedPlayer{ src },
    m_playerId{ src.m_playerId }
{
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
}

ConnectedPlayer::ConnectedPlayer(ConnectedPlayer&& src) :
    PlayFabMultiplayerConnectedPlayer{ src },
    m_playerId{ std::move(src.m_playerId) }
{
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
}

ConnectedPlayer::ConnectedPlayer(const PlayFabMultiplayerConnectedPlayer& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConnectedPlayer::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
}

JsonValue ConnectedPlayer::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerConnectedPlayer>(*this);
}

size_t ConnectedPlayer::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerConnectedPlayer) };
    serializedSize += (m_playerId.size() + 1);
    return serializedSize;
}

void ConnectedPlayer::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerConnectedPlayer{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerConnectedPlayer);
    memcpy(stringBuffer, m_playerId.data(), m_playerId.size() + 1);
    serializedStruct->playerId = stringBuffer;
    stringBuffer += m_playerId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ContainerImageReference::ContainerImageReference() :
    PlayFabMultiplayerContainerImageReference{}
{
}

ContainerImageReference::ContainerImageReference(const ContainerImageReference& src) :
    PlayFabMultiplayerContainerImageReference{ src },
    m_imageName{ src.m_imageName },
    m_tag{ src.m_tag }
{
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

ContainerImageReference::ContainerImageReference(ContainerImageReference&& src) :
    PlayFabMultiplayerContainerImageReference{ src },
    m_imageName{ std::move(src.m_imageName) },
    m_tag{ std::move(src.m_tag) }
{
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

ContainerImageReference::ContainerImageReference(const PlayFabMultiplayerContainerImageReference& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ContainerImageReference::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ImageName", m_imageName, imageName);
    JsonUtils::ObjectGetMember(input, "Tag", m_tag, tag);
}

JsonValue ContainerImageReference::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerContainerImageReference>(*this);
}

size_t ContainerImageReference::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerContainerImageReference) };
    serializedSize += (m_imageName.size() + 1);
    serializedSize += (m_tag.size() + 1);
    return serializedSize;
}

void ContainerImageReference::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerContainerImageReference{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerContainerImageReference);
    memcpy(stringBuffer, m_imageName.data(), m_imageName.size() + 1);
    serializedStruct->imageName = stringBuffer;
    stringBuffer += m_imageName.size() + 1;
    memcpy(stringBuffer, m_tag.data(), m_tag.size() + 1);
    serializedStruct->tag = stringBuffer;
    stringBuffer += m_tag.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CoreCapacity::CoreCapacity() :
    PlayFabMultiplayerCoreCapacity{}
{
}

CoreCapacity::CoreCapacity(const CoreCapacity& src) :
    PlayFabMultiplayerCoreCapacity{ src },
    m_region{ src.m_region },
    m_vmFamily{ src.m_vmFamily }
{
    region = m_region.empty() ? nullptr : m_region.data();
    vmFamily = m_vmFamily ? m_vmFamily.operator->() : nullptr;
}

CoreCapacity::CoreCapacity(CoreCapacity&& src) :
    PlayFabMultiplayerCoreCapacity{ src },
    m_region{ std::move(src.m_region) },
    m_vmFamily{ std::move(src.m_vmFamily) }
{
    region = m_region.empty() ? nullptr : m_region.data();
    vmFamily = m_vmFamily ? m_vmFamily.operator->() : nullptr;
}

CoreCapacity::CoreCapacity(const PlayFabMultiplayerCoreCapacity& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CoreCapacity::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Available", available);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "Total", total);
    JsonUtils::ObjectGetMember(input, "VmFamily", m_vmFamily, vmFamily);
}

JsonValue CoreCapacity::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCoreCapacity>(*this);
}

CoreCapacityChange::CoreCapacityChange() :
    PlayFabMultiplayerCoreCapacityChange{}
{
}

CoreCapacityChange::CoreCapacityChange(const CoreCapacityChange& src) :
    PlayFabMultiplayerCoreCapacityChange{ src },
    m_region{ src.m_region }
{
    region = m_region.empty() ? nullptr : m_region.data();
}

CoreCapacityChange::CoreCapacityChange(CoreCapacityChange&& src) :
    PlayFabMultiplayerCoreCapacityChange{ src },
    m_region{ std::move(src.m_region) }
{
    region = m_region.empty() ? nullptr : m_region.data();
}

CoreCapacityChange::CoreCapacityChange(const PlayFabMultiplayerCoreCapacityChange& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CoreCapacityChange::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NewCoreLimit", newCoreLimit);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "VmFamily", vmFamily);
}

JsonValue CoreCapacityChange::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCoreCapacityChange>(*this);
}

size_t CoreCapacityChange::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerCoreCapacityChange) };
    serializedSize += (m_region.size() + 1);
    return serializedSize;
}

void CoreCapacityChange::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerCoreCapacityChange{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerCoreCapacityChange);
    memcpy(stringBuffer, m_region.data(), m_region.size() + 1);
    serializedStruct->region = stringBuffer;
    stringBuffer += m_region.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateBuildAliasRequest::CreateBuildAliasRequest() :
    PlayFabMultiplayerCreateBuildAliasRequest{}
{
}

CreateBuildAliasRequest::CreateBuildAliasRequest(const CreateBuildAliasRequest& src) :
    PlayFabMultiplayerCreateBuildAliasRequest{ src },
    m_aliasName{ src.m_aliasName },
    m_buildSelectionCriteria{ src.m_buildSelectionCriteria },
    m_customTags{ src.m_customTags }
{
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

CreateBuildAliasRequest::CreateBuildAliasRequest(CreateBuildAliasRequest&& src) :
    PlayFabMultiplayerCreateBuildAliasRequest{ src },
    m_aliasName{ std::move(src.m_aliasName) },
    m_buildSelectionCriteria{ std::move(src.m_buildSelectionCriteria) },
    m_customTags{ std::move(src.m_customTags) }
{
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

CreateBuildAliasRequest::CreateBuildAliasRequest(const PlayFabMultiplayerCreateBuildAliasRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateBuildAliasRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AliasName", m_aliasName, aliasName);
    JsonUtils::ObjectGetMember(input, "BuildSelectionCriteria", m_buildSelectionCriteria, buildSelectionCriteria, buildSelectionCriteriaCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue CreateBuildAliasRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildAliasRequest>(*this);
}

GameCertificateReferenceParams::GameCertificateReferenceParams() :
    PlayFabMultiplayerGameCertificateReferenceParams{}
{
}

GameCertificateReferenceParams::GameCertificateReferenceParams(const GameCertificateReferenceParams& src) :
    PlayFabMultiplayerGameCertificateReferenceParams{ src },
    m_gsdkAlias{ src.m_gsdkAlias },
    m_name{ src.m_name }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReferenceParams::GameCertificateReferenceParams(GameCertificateReferenceParams&& src) :
    PlayFabMultiplayerGameCertificateReferenceParams{ src },
    m_gsdkAlias{ std::move(src.m_gsdkAlias) },
    m_name{ std::move(src.m_name) }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReferenceParams::GameCertificateReferenceParams(const PlayFabMultiplayerGameCertificateReferenceParams& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameCertificateReferenceParams::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GsdkAlias", m_gsdkAlias, gsdkAlias);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue GameCertificateReferenceParams::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGameCertificateReferenceParams>(*this);
}

size_t GameCertificateReferenceParams::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerGameCertificateReferenceParams) };
    serializedSize += (m_gsdkAlias.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GameCertificateReferenceParams::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerGameCertificateReferenceParams{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerGameCertificateReferenceParams);
    memcpy(stringBuffer, m_gsdkAlias.data(), m_gsdkAlias.size() + 1);
    serializedStruct->gsdkAlias = stringBuffer;
    stringBuffer += m_gsdkAlias.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LinuxInstrumentationConfiguration::LinuxInstrumentationConfiguration() :
    PlayFabMultiplayerLinuxInstrumentationConfiguration{}
{
}


LinuxInstrumentationConfiguration::LinuxInstrumentationConfiguration(const PlayFabMultiplayerLinuxInstrumentationConfiguration& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinuxInstrumentationConfiguration::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsEnabled", isEnabled);
}

JsonValue LinuxInstrumentationConfiguration::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerLinuxInstrumentationConfiguration>(*this);
}

size_t LinuxInstrumentationConfiguration::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerLinuxInstrumentationConfiguration) };
    return serializedSize;
}

void LinuxInstrumentationConfiguration::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerLinuxInstrumentationConfiguration{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerLinuxInstrumentationConfiguration);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

Port::Port() :
    PlayFabMultiplayerPort{}
{
}

Port::Port(const Port& src) :
    PlayFabMultiplayerPort{ src },
    m_name{ src.m_name }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

Port::Port(Port&& src) :
    PlayFabMultiplayerPort{ src },
    m_name{ std::move(src.m_name) }
{
    name = m_name.empty() ? nullptr : m_name.data();
}

Port::Port(const PlayFabMultiplayerPort& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Port::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "Num", num);
    JsonUtils::ObjectGetMember(input, "Protocol", protocol);
}

JsonValue Port::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerPort>(*this);
}

size_t Port::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerPort) };
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void Port::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerPort{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerPort);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest() :
    PlayFabMultiplayerCreateBuildWithCustomContainerRequest{}
{
}

CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest(const CreateBuildWithCustomContainerRequest& src) :
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

CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest(CreateBuildWithCustomContainerRequest&& src) :
    PlayFabMultiplayerCreateBuildWithCustomContainerRequest{ src },
    m_areAssetsReadonly{ std::move(src.m_areAssetsReadonly) },
    m_buildName{ std::move(src.m_buildName) },
    m_containerFlavor{ std::move(src.m_containerFlavor) },
    m_containerImageReference{ std::move(src.m_containerImageReference) },
    m_containerRunCommand{ std::move(src.m_containerRunCommand) },
    m_customTags{ std::move(src.m_customTags) },
    m_gameAssetReferences{ std::move(src.m_gameAssetReferences) },
    m_gameCertificateReferences{ std::move(src.m_gameCertificateReferences) },
    m_linuxInstrumentationConfiguration{ std::move(src.m_linuxInstrumentationConfiguration) },
    m_metadata{ std::move(src.m_metadata) },
    m_ports{ std::move(src.m_ports) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) },
    m_useStreamingForAssetDownloads{ std::move(src.m_useStreamingForAssetDownloads) },
    m_vmSize{ std::move(src.m_vmSize) }
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

CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest(const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateBuildWithCustomContainerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
    JsonUtils::ObjectGetMember(input, "ContainerImageReference", m_containerImageReference, containerImageReference);
    JsonUtils::ObjectGetMember(input, "ContainerRunCommand", m_containerRunCommand, containerRunCommand);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
    JsonUtils::ObjectGetMember(input, "LinuxInstrumentationConfiguration", m_linuxInstrumentationConfiguration, linuxInstrumentationConfiguration);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
    JsonUtils::ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
    JsonUtils::ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
}

JsonValue CreateBuildWithCustomContainerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithCustomContainerRequest>(*this);
}

GameCertificateReference::GameCertificateReference() :
    PlayFabMultiplayerGameCertificateReference{}
{
}

GameCertificateReference::GameCertificateReference(const GameCertificateReference& src) :
    PlayFabMultiplayerGameCertificateReference{ src },
    m_gsdkAlias{ src.m_gsdkAlias },
    m_name{ src.m_name }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReference::GameCertificateReference(GameCertificateReference&& src) :
    PlayFabMultiplayerGameCertificateReference{ src },
    m_gsdkAlias{ std::move(src.m_gsdkAlias) },
    m_name{ std::move(src.m_name) }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReference::GameCertificateReference(const PlayFabMultiplayerGameCertificateReference& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GameCertificateReference::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GsdkAlias", m_gsdkAlias, gsdkAlias);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue GameCertificateReference::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGameCertificateReference>(*this);
}

size_t GameCertificateReference::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerGameCertificateReference) };
    serializedSize += (m_gsdkAlias.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GameCertificateReference::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerGameCertificateReference{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerGameCertificateReference);
    memcpy(stringBuffer, m_gsdkAlias.data(), m_gsdkAlias.size() + 1);
    serializedStruct->gsdkAlias = stringBuffer;
    stringBuffer += m_gsdkAlias.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateBuildWithCustomContainerResponse::CreateBuildWithCustomContainerResponse() :
    PlayFabMultiplayerCreateBuildWithCustomContainerResponse{}
{
}

CreateBuildWithCustomContainerResponse::CreateBuildWithCustomContainerResponse(const CreateBuildWithCustomContainerResponse& src) :
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

CreateBuildWithCustomContainerResponse::CreateBuildWithCustomContainerResponse(CreateBuildWithCustomContainerResponse&& src) :
    PlayFabMultiplayerCreateBuildWithCustomContainerResponse{ src },
    m_areAssetsReadonly{ std::move(src.m_areAssetsReadonly) },
    m_buildId{ std::move(src.m_buildId) },
    m_buildName{ std::move(src.m_buildName) },
    m_containerFlavor{ std::move(src.m_containerFlavor) },
    m_containerRunCommand{ std::move(src.m_containerRunCommand) },
    m_creationTime{ std::move(src.m_creationTime) },
    m_customGameContainerImage{ std::move(src.m_customGameContainerImage) },
    m_gameAssetReferences{ std::move(src.m_gameAssetReferences) },
    m_gameCertificateReferences{ std::move(src.m_gameCertificateReferences) },
    m_linuxInstrumentationConfiguration{ std::move(src.m_linuxInstrumentationConfiguration) },
    m_metadata{ std::move(src.m_metadata) },
    m_osPlatform{ std::move(src.m_osPlatform) },
    m_ports{ std::move(src.m_ports) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) },
    m_serverType{ std::move(src.m_serverType) },
    m_useStreamingForAssetDownloads{ std::move(src.m_useStreamingForAssetDownloads) },
    m_vmSize{ std::move(src.m_vmSize) }
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

CreateBuildWithCustomContainerResponse::CreateBuildWithCustomContainerResponse(const PlayFabMultiplayerCreateBuildWithCustomContainerResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateBuildWithCustomContainerResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
    JsonUtils::ObjectGetMember(input, "ContainerRunCommand", m_containerRunCommand, containerRunCommand);
    JsonUtils::ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
    JsonUtils::ObjectGetMember(input, "CustomGameContainerImage", m_customGameContainerImage, customGameContainerImage);
    JsonUtils::ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
    JsonUtils::ObjectGetMember(input, "LinuxInstrumentationConfiguration", m_linuxInstrumentationConfiguration, linuxInstrumentationConfiguration);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
    JsonUtils::ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
    JsonUtils::ObjectGetMember(input, "ServerType", m_serverType, serverType);
    JsonUtils::ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
    JsonUtils::ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
}

JsonValue CreateBuildWithCustomContainerResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithCustomContainerResponse>(*this);
}

InstrumentationConfiguration::InstrumentationConfiguration() :
    PlayFabMultiplayerInstrumentationConfiguration{}
{
}

InstrumentationConfiguration::InstrumentationConfiguration(const InstrumentationConfiguration& src) :
    PlayFabMultiplayerInstrumentationConfiguration{ src },
    m_processesToMonitor{ src.m_processesToMonitor }
{
    processesToMonitor = m_processesToMonitor.Empty() ? nullptr : m_processesToMonitor.Data();
}

InstrumentationConfiguration::InstrumentationConfiguration(InstrumentationConfiguration&& src) :
    PlayFabMultiplayerInstrumentationConfiguration{ src },
    m_processesToMonitor{ std::move(src.m_processesToMonitor) }
{
    processesToMonitor = m_processesToMonitor.Empty() ? nullptr : m_processesToMonitor.Data();
}

InstrumentationConfiguration::InstrumentationConfiguration(const PlayFabMultiplayerInstrumentationConfiguration& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InstrumentationConfiguration::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ProcessesToMonitor", m_processesToMonitor, processesToMonitor, processesToMonitorCount);
}

JsonValue InstrumentationConfiguration::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerInstrumentationConfiguration>(*this);
}

CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest() :
    PlayFabMultiplayerCreateBuildWithManagedContainerRequest{}
{
}

CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest(const CreateBuildWithManagedContainerRequest& src) :
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

CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest(CreateBuildWithManagedContainerRequest&& src) :
    PlayFabMultiplayerCreateBuildWithManagedContainerRequest{ src },
    m_areAssetsReadonly{ std::move(src.m_areAssetsReadonly) },
    m_buildName{ std::move(src.m_buildName) },
    m_containerFlavor{ std::move(src.m_containerFlavor) },
    m_customTags{ std::move(src.m_customTags) },
    m_gameAssetReferences{ std::move(src.m_gameAssetReferences) },
    m_gameCertificateReferences{ std::move(src.m_gameCertificateReferences) },
    m_gameWorkingDirectory{ std::move(src.m_gameWorkingDirectory) },
    m_instrumentationConfiguration{ std::move(src.m_instrumentationConfiguration) },
    m_metadata{ std::move(src.m_metadata) },
    m_ports{ std::move(src.m_ports) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) },
    m_startMultiplayerServerCommand{ std::move(src.m_startMultiplayerServerCommand) },
    m_useStreamingForAssetDownloads{ std::move(src.m_useStreamingForAssetDownloads) },
    m_vmSize{ std::move(src.m_vmSize) }
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

CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest(const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateBuildWithManagedContainerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
    JsonUtils::ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
    JsonUtils::ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
    JsonUtils::ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
    JsonUtils::ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
}

JsonValue CreateBuildWithManagedContainerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithManagedContainerRequest>(*this);
}

CreateBuildWithManagedContainerResponse::CreateBuildWithManagedContainerResponse() :
    PlayFabMultiplayerCreateBuildWithManagedContainerResponse{}
{
}

CreateBuildWithManagedContainerResponse::CreateBuildWithManagedContainerResponse(const CreateBuildWithManagedContainerResponse& src) :
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

CreateBuildWithManagedContainerResponse::CreateBuildWithManagedContainerResponse(CreateBuildWithManagedContainerResponse&& src) :
    PlayFabMultiplayerCreateBuildWithManagedContainerResponse{ src },
    m_areAssetsReadonly{ std::move(src.m_areAssetsReadonly) },
    m_buildId{ std::move(src.m_buildId) },
    m_buildName{ std::move(src.m_buildName) },
    m_containerFlavor{ std::move(src.m_containerFlavor) },
    m_creationTime{ std::move(src.m_creationTime) },
    m_gameAssetReferences{ std::move(src.m_gameAssetReferences) },
    m_gameCertificateReferences{ std::move(src.m_gameCertificateReferences) },
    m_gameWorkingDirectory{ std::move(src.m_gameWorkingDirectory) },
    m_instrumentationConfiguration{ std::move(src.m_instrumentationConfiguration) },
    m_metadata{ std::move(src.m_metadata) },
    m_osPlatform{ std::move(src.m_osPlatform) },
    m_ports{ std::move(src.m_ports) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) },
    m_serverType{ std::move(src.m_serverType) },
    m_startMultiplayerServerCommand{ std::move(src.m_startMultiplayerServerCommand) },
    m_useStreamingForAssetDownloads{ std::move(src.m_useStreamingForAssetDownloads) },
    m_vmSize{ std::move(src.m_vmSize) }
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

CreateBuildWithManagedContainerResponse::CreateBuildWithManagedContainerResponse(const PlayFabMultiplayerCreateBuildWithManagedContainerResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateBuildWithManagedContainerResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
    JsonUtils::ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
    JsonUtils::ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
    JsonUtils::ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
    JsonUtils::ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
    JsonUtils::ObjectGetMember(input, "ServerType", m_serverType, serverType);
    JsonUtils::ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
    JsonUtils::ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
    JsonUtils::ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
}

JsonValue CreateBuildWithManagedContainerResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithManagedContainerResponse>(*this);
}

CreateBuildWithProcessBasedServerRequest::CreateBuildWithProcessBasedServerRequest() :
    PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest{}
{
}

CreateBuildWithProcessBasedServerRequest::CreateBuildWithProcessBasedServerRequest(const CreateBuildWithProcessBasedServerRequest& src) :
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

CreateBuildWithProcessBasedServerRequest::CreateBuildWithProcessBasedServerRequest(CreateBuildWithProcessBasedServerRequest&& src) :
    PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest{ src },
    m_areAssetsReadonly{ std::move(src.m_areAssetsReadonly) },
    m_buildName{ std::move(src.m_buildName) },
    m_customTags{ std::move(src.m_customTags) },
    m_gameAssetReferences{ std::move(src.m_gameAssetReferences) },
    m_gameCertificateReferences{ std::move(src.m_gameCertificateReferences) },
    m_gameWorkingDirectory{ std::move(src.m_gameWorkingDirectory) },
    m_instrumentationConfiguration{ std::move(src.m_instrumentationConfiguration) },
    m_isOSPreview{ std::move(src.m_isOSPreview) },
    m_metadata{ std::move(src.m_metadata) },
    m_osPlatform{ std::move(src.m_osPlatform) },
    m_ports{ std::move(src.m_ports) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) },
    m_startMultiplayerServerCommand{ std::move(src.m_startMultiplayerServerCommand) },
    m_useStreamingForAssetDownloads{ std::move(src.m_useStreamingForAssetDownloads) },
    m_vmSize{ std::move(src.m_vmSize) }
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

CreateBuildWithProcessBasedServerRequest::CreateBuildWithProcessBasedServerRequest(const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateBuildWithProcessBasedServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
    JsonUtils::ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
    JsonUtils::ObjectGetMember(input, "IsOSPreview", m_isOSPreview, isOSPreview);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
    JsonUtils::ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
    JsonUtils::ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
    JsonUtils::ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
    JsonUtils::ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
}

JsonValue CreateBuildWithProcessBasedServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest>(*this);
}

CreateBuildWithProcessBasedServerResponse::CreateBuildWithProcessBasedServerResponse() :
    PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse{}
{
}

CreateBuildWithProcessBasedServerResponse::CreateBuildWithProcessBasedServerResponse(const CreateBuildWithProcessBasedServerResponse& src) :
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

CreateBuildWithProcessBasedServerResponse::CreateBuildWithProcessBasedServerResponse(CreateBuildWithProcessBasedServerResponse&& src) :
    PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse{ src },
    m_areAssetsReadonly{ std::move(src.m_areAssetsReadonly) },
    m_buildId{ std::move(src.m_buildId) },
    m_buildName{ std::move(src.m_buildName) },
    m_containerFlavor{ std::move(src.m_containerFlavor) },
    m_creationTime{ std::move(src.m_creationTime) },
    m_gameAssetReferences{ std::move(src.m_gameAssetReferences) },
    m_gameCertificateReferences{ std::move(src.m_gameCertificateReferences) },
    m_gameWorkingDirectory{ std::move(src.m_gameWorkingDirectory) },
    m_instrumentationConfiguration{ std::move(src.m_instrumentationConfiguration) },
    m_isOSPreview{ std::move(src.m_isOSPreview) },
    m_metadata{ std::move(src.m_metadata) },
    m_osPlatform{ std::move(src.m_osPlatform) },
    m_ports{ std::move(src.m_ports) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) },
    m_serverType{ std::move(src.m_serverType) },
    m_startMultiplayerServerCommand{ std::move(src.m_startMultiplayerServerCommand) },
    m_useStreamingForAssetDownloads{ std::move(src.m_useStreamingForAssetDownloads) },
    m_vmSize{ std::move(src.m_vmSize) }
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

CreateBuildWithProcessBasedServerResponse::CreateBuildWithProcessBasedServerResponse(const PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateBuildWithProcessBasedServerResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
    JsonUtils::ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
    JsonUtils::ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameWorkingDirectory", m_gameWorkingDirectory, gameWorkingDirectory);
    JsonUtils::ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
    JsonUtils::ObjectGetMember(input, "IsOSPreview", m_isOSPreview, isOSPreview);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
    JsonUtils::ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
    JsonUtils::ObjectGetMember(input, "ServerType", m_serverType, serverType);
    JsonUtils::ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
    JsonUtils::ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
    JsonUtils::ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
}

JsonValue CreateBuildWithProcessBasedServerResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse>(*this);
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes() :
    PlayFabMultiplayerMatchmakingPlayerAttributes{}
{
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes(const MatchmakingPlayerAttributes& src) :
    PlayFabMultiplayerMatchmakingPlayerAttributes{ src },
    m_dataObject{ src.m_dataObject },
    m_escapedDataObject{ src.m_escapedDataObject }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes(MatchmakingPlayerAttributes&& src) :
    PlayFabMultiplayerMatchmakingPlayerAttributes{ src },
    m_dataObject{ std::move(src.m_dataObject) },
    m_escapedDataObject{ std::move(src.m_escapedDataObject) }
{
    dataObject.stringValue = m_dataObject.StringValue();
    escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
}

MatchmakingPlayerAttributes::MatchmakingPlayerAttributes(const PlayFabMultiplayerMatchmakingPlayerAttributes& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakingPlayerAttributes::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
    JsonUtils::ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
}

JsonValue MatchmakingPlayerAttributes::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerMatchmakingPlayerAttributes>(*this);
}

MatchmakingPlayer::MatchmakingPlayer() :
    PlayFabMultiplayerMatchmakingPlayer{}
{
}

MatchmakingPlayer::MatchmakingPlayer(const MatchmakingPlayer& src) :
    PlayFabMultiplayerMatchmakingPlayer{ src },
    m_attributes{ src.m_attributes },
    m_entity{ src.m_entity }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PlayFabEntityKey const*)&m_entity;
}

MatchmakingPlayer::MatchmakingPlayer(MatchmakingPlayer&& src) :
    PlayFabMultiplayerMatchmakingPlayer{ src },
    m_attributes{ std::move(src.m_attributes) },
    m_entity{ std::move(src.m_entity) }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PlayFabEntityKey const*)&m_entity;
}

MatchmakingPlayer::MatchmakingPlayer(const PlayFabMultiplayerMatchmakingPlayer& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakingPlayer::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Attributes", m_attributes, attributes);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue MatchmakingPlayer::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerMatchmakingPlayer>(*this);
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest() :
    PlayFabMultiplayerCreateMatchmakingTicketRequest{}
{
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest(const CreateMatchmakingTicketRequest& src) :
    PlayFabMultiplayerCreateMatchmakingTicketRequest{ src },
    m_creator{ src.m_creator },
    m_customTags{ src.m_customTags },
    m_membersToMatchWith{ src.m_membersToMatchWith },
    m_queueName{ src.m_queueName }
{
    creator = (PlayFabMultiplayerMatchmakingPlayer const*)&m_creator;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest(CreateMatchmakingTicketRequest&& src) :
    PlayFabMultiplayerCreateMatchmakingTicketRequest{ src },
    m_creator{ std::move(src.m_creator) },
    m_customTags{ std::move(src.m_customTags) },
    m_membersToMatchWith{ std::move(src.m_membersToMatchWith) },
    m_queueName{ std::move(src.m_queueName) }
{
    creator = (PlayFabMultiplayerMatchmakingPlayer const*)&m_creator;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest(const PlayFabMultiplayerCreateMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Creator", m_creator, creator);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "MembersToMatchWith", m_membersToMatchWith, membersToMatchWith, membersToMatchWithCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CreateMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateMatchmakingTicketRequest>(*this);
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult() :
    PlayFabMultiplayerCreateMatchmakingTicketResult{}
{
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult(const CreateMatchmakingTicketResult& src) :
    PlayFabMultiplayerCreateMatchmakingTicketResult{ src },
    m_ticketId{ src.m_ticketId }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult(CreateMatchmakingTicketResult&& src) :
    PlayFabMultiplayerCreateMatchmakingTicketResult{ src },
    m_ticketId{ std::move(src.m_ticketId) }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateMatchmakingTicketResult::CreateMatchmakingTicketResult(const PlayFabMultiplayerCreateMatchmakingTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateMatchmakingTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CreateMatchmakingTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateMatchmakingTicketResult>(*this);
}

size_t CreateMatchmakingTicketResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerCreateMatchmakingTicketResult) };
    serializedSize += (m_ticketId.size() + 1);
    return serializedSize;
}

void CreateMatchmakingTicketResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerCreateMatchmakingTicketResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerCreateMatchmakingTicketResult);
    memcpy(stringBuffer, m_ticketId.data(), m_ticketId.size() + 1);
    serializedStruct->ticketId = stringBuffer;
    stringBuffer += m_ticketId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateRemoteUserRequest::CreateRemoteUserRequest() :
    PlayFabMultiplayerCreateRemoteUserRequest{}
{
}

CreateRemoteUserRequest::CreateRemoteUserRequest(const CreateRemoteUserRequest& src) :
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

CreateRemoteUserRequest::CreateRemoteUserRequest(CreateRemoteUserRequest&& src) :
    PlayFabMultiplayerCreateRemoteUserRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_expirationTime{ std::move(src.m_expirationTime) },
    m_region{ std::move(src.m_region) },
    m_username{ std::move(src.m_username) },
    m_vmId{ std::move(src.m_vmId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    expirationTime = m_expirationTime ? m_expirationTime.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    username = m_username.empty() ? nullptr : m_username.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

CreateRemoteUserRequest::CreateRemoteUserRequest(const PlayFabMultiplayerCreateRemoteUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateRemoteUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ExpirationTime", m_expirationTime, expirationTime, true);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
    JsonUtils::ObjectGetMember(input, "VmId", m_vmId, vmId);
}

JsonValue CreateRemoteUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateRemoteUserRequest>(*this);
}

CreateRemoteUserResponse::CreateRemoteUserResponse() :
    PlayFabMultiplayerCreateRemoteUserResponse{}
{
}

CreateRemoteUserResponse::CreateRemoteUserResponse(const CreateRemoteUserResponse& src) :
    PlayFabMultiplayerCreateRemoteUserResponse{ src },
    m_expirationTime{ src.m_expirationTime },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    expirationTime = m_expirationTime ? m_expirationTime.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

CreateRemoteUserResponse::CreateRemoteUserResponse(CreateRemoteUserResponse&& src) :
    PlayFabMultiplayerCreateRemoteUserResponse{ src },
    m_expirationTime{ std::move(src.m_expirationTime) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    expirationTime = m_expirationTime ? m_expirationTime.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

CreateRemoteUserResponse::CreateRemoteUserResponse(const PlayFabMultiplayerCreateRemoteUserResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateRemoteUserResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ExpirationTime", m_expirationTime, expirationTime, true);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue CreateRemoteUserResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateRemoteUserResponse>(*this);
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment() :
    PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment{}
{
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment(const MatchmakingPlayerWithTeamAssignment& src) :
    PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment{ src },
    m_attributes{ src.m_attributes },
    m_entity{ src.m_entity },
    m_teamId{ src.m_teamId }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PlayFabEntityKey const*)&m_entity;
    teamId = m_teamId.empty() ? nullptr : m_teamId.data();
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment(MatchmakingPlayerWithTeamAssignment&& src) :
    PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment{ src },
    m_attributes{ std::move(src.m_attributes) },
    m_entity{ std::move(src.m_entity) },
    m_teamId{ std::move(src.m_teamId) }
{
    attributes = m_attributes ? m_attributes.operator->() : nullptr;
    entity = (PlayFabEntityKey const*)&m_entity;
    teamId = m_teamId.empty() ? nullptr : m_teamId.data();
}

MatchmakingPlayerWithTeamAssignment::MatchmakingPlayerWithTeamAssignment(const PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MatchmakingPlayerWithTeamAssignment::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Attributes", m_attributes, attributes);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "TeamId", m_teamId, teamId);
}

JsonValue MatchmakingPlayerWithTeamAssignment::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment>(*this);
}

ServerDetails::ServerDetails() :
    PlayFabMultiplayerServerDetails{}
{
}

ServerDetails::ServerDetails(const ServerDetails& src) :
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

ServerDetails::ServerDetails(ServerDetails&& src) :
    PlayFabMultiplayerServerDetails{ src },
    m_fqdn{ std::move(src.m_fqdn) },
    m_iPV4Address{ std::move(src.m_iPV4Address) },
    m_ports{ std::move(src.m_ports) },
    m_region{ std::move(src.m_region) }
{
    fqdn = m_fqdn.empty() ? nullptr : m_fqdn.data();
    iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
    ports = m_ports.Empty() ? nullptr : m_ports.Data();
    region = m_region.empty() ? nullptr : m_region.data();
}

ServerDetails::ServerDetails(const PlayFabMultiplayerServerDetails& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerDetails::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Fqdn", m_fqdn, fqdn);
    JsonUtils::ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
}

JsonValue ServerDetails::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerServerDetails>(*this);
}

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest() :
    PlayFabMultiplayerCreateServerBackfillTicketRequest{}
{
}

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest(const CreateServerBackfillTicketRequest& src) :
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

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest(CreateServerBackfillTicketRequest&& src) :
    PlayFabMultiplayerCreateServerBackfillTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_members{ std::move(src.m_members) },
    m_queueName{ std::move(src.m_queueName) },
    m_serverDetails{ std::move(src.m_serverDetails) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
}

CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest(const PlayFabMultiplayerCreateServerBackfillTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateServerBackfillTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
}

JsonValue CreateServerBackfillTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateServerBackfillTicketRequest>(*this);
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult() :
    PlayFabMultiplayerCreateServerBackfillTicketResult{}
{
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult(const CreateServerBackfillTicketResult& src) :
    PlayFabMultiplayerCreateServerBackfillTicketResult{ src },
    m_ticketId{ src.m_ticketId }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult(CreateServerBackfillTicketResult&& src) :
    PlayFabMultiplayerCreateServerBackfillTicketResult{ src },
    m_ticketId{ std::move(src.m_ticketId) }
{
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

CreateServerBackfillTicketResult::CreateServerBackfillTicketResult(const PlayFabMultiplayerCreateServerBackfillTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateServerBackfillTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue CreateServerBackfillTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateServerBackfillTicketResult>(*this);
}

size_t CreateServerBackfillTicketResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerCreateServerBackfillTicketResult) };
    serializedSize += (m_ticketId.size() + 1);
    return serializedSize;
}

void CreateServerBackfillTicketResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerCreateServerBackfillTicketResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerCreateServerBackfillTicketResult);
    memcpy(stringBuffer, m_ticketId.data(), m_ticketId.size() + 1);
    serializedStruct->ticketId = stringBuffer;
    stringBuffer += m_ticketId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest() :
    PlayFabMultiplayerCreateServerMatchmakingTicketRequest{}
{
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest(const CreateServerMatchmakingTicketRequest& src) :
    PlayFabMultiplayerCreateServerMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_members{ src.m_members },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest(CreateServerMatchmakingTicketRequest&& src) :
    PlayFabMultiplayerCreateServerMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_members{ std::move(src.m_members) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest(const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateServerMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue CreateServerMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateServerMatchmakingTicketRequest>(*this);
}

CreateTitleMultiplayerServersQuotaChangeRequest::CreateTitleMultiplayerServersQuotaChangeRequest() :
    PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest{}
{
}

CreateTitleMultiplayerServersQuotaChangeRequest::CreateTitleMultiplayerServersQuotaChangeRequest(const CreateTitleMultiplayerServersQuotaChangeRequest& src) :
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

CreateTitleMultiplayerServersQuotaChangeRequest::CreateTitleMultiplayerServersQuotaChangeRequest(CreateTitleMultiplayerServersQuotaChangeRequest&& src) :
    PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest{ src },
    m_changeDescription{ std::move(src.m_changeDescription) },
    m_changes{ std::move(src.m_changes) },
    m_contactEmail{ std::move(src.m_contactEmail) },
    m_customTags{ std::move(src.m_customTags) },
    m_notes{ std::move(src.m_notes) },
    m_startDate{ std::move(src.m_startDate) }
{
    changeDescription = m_changeDescription.empty() ? nullptr : m_changeDescription.data();
    changes = m_changes.Empty() ? nullptr : m_changes.Data();
    contactEmail = m_contactEmail.empty() ? nullptr : m_contactEmail.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    notes = m_notes.empty() ? nullptr : m_notes.data();
    startDate = m_startDate ? m_startDate.operator->() : nullptr;
}

CreateTitleMultiplayerServersQuotaChangeRequest::CreateTitleMultiplayerServersQuotaChangeRequest(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateTitleMultiplayerServersQuotaChangeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ChangeDescription", m_changeDescription, changeDescription);
    JsonUtils::ObjectGetMember(input, "Changes", m_changes, changes, changesCount);
    JsonUtils::ObjectGetMember(input, "ContactEmail", m_contactEmail, contactEmail);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Notes", m_notes, notes);
    JsonUtils::ObjectGetMember(input, "StartDate", m_startDate, startDate, true);
}

JsonValue CreateTitleMultiplayerServersQuotaChangeRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest>(*this);
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse() :
    PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse{}
{
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse(const CreateTitleMultiplayerServersQuotaChangeResponse& src) :
    PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse{ src },
    m_requestId{ src.m_requestId }
{
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse(CreateTitleMultiplayerServersQuotaChangeResponse&& src) :
    PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse{ src },
    m_requestId{ std::move(src.m_requestId) }
{
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateTitleMultiplayerServersQuotaChangeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "RequestId", m_requestId, requestId);
    JsonUtils::ObjectGetMember(input, "WasApproved", wasApproved);
}

JsonValue CreateTitleMultiplayerServersQuotaChangeResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse>(*this);
}

size_t CreateTitleMultiplayerServersQuotaChangeResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse) };
    serializedSize += (m_requestId.size() + 1);
    return serializedSize;
}

void CreateTitleMultiplayerServersQuotaChangeResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse);
    memcpy(stringBuffer, m_requestId.data(), m_requestId.size() + 1);
    serializedStruct->requestId = stringBuffer;
    stringBuffer += m_requestId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteAssetRequest::DeleteAssetRequest() :
    PlayFabMultiplayerDeleteAssetRequest{}
{
}

DeleteAssetRequest::DeleteAssetRequest(const DeleteAssetRequest& src) :
    PlayFabMultiplayerDeleteAssetRequest{ src },
    m_customTags{ src.m_customTags },
    m_fileName{ src.m_fileName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

DeleteAssetRequest::DeleteAssetRequest(DeleteAssetRequest&& src) :
    PlayFabMultiplayerDeleteAssetRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_fileName{ std::move(src.m_fileName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

DeleteAssetRequest::DeleteAssetRequest(const PlayFabMultiplayerDeleteAssetRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteAssetRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
}

JsonValue DeleteAssetRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDeleteAssetRequest>(*this);
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest() :
    PlayFabMultiplayerDeleteBuildAliasRequest{}
{
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest(const DeleteBuildAliasRequest& src) :
    PlayFabMultiplayerDeleteBuildAliasRequest{ src },
    m_aliasId{ src.m_aliasId },
    m_customTags{ src.m_customTags }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest(DeleteBuildAliasRequest&& src) :
    PlayFabMultiplayerDeleteBuildAliasRequest{ src },
    m_aliasId{ std::move(src.m_aliasId) },
    m_customTags{ std::move(src.m_customTags) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest(const PlayFabMultiplayerDeleteBuildAliasRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteBuildAliasRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue DeleteBuildAliasRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDeleteBuildAliasRequest>(*this);
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest() :
    PlayFabMultiplayerDeleteBuildRegionRequest{}
{
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest(const DeleteBuildRegionRequest& src) :
    PlayFabMultiplayerDeleteBuildRegionRequest{ src },
    m_buildId{ src.m_buildId },
    m_customTags{ src.m_customTags },
    m_region{ src.m_region }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest(DeleteBuildRegionRequest&& src) :
    PlayFabMultiplayerDeleteBuildRegionRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_region{ std::move(src.m_region) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest(const PlayFabMultiplayerDeleteBuildRegionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteBuildRegionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
}

JsonValue DeleteBuildRegionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDeleteBuildRegionRequest>(*this);
}

DeleteBuildRequest::DeleteBuildRequest() :
    PlayFabMultiplayerDeleteBuildRequest{}
{
}

DeleteBuildRequest::DeleteBuildRequest(const DeleteBuildRequest& src) :
    PlayFabMultiplayerDeleteBuildRequest{ src },
    m_buildId{ src.m_buildId },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildRequest::DeleteBuildRequest(DeleteBuildRequest&& src) :
    PlayFabMultiplayerDeleteBuildRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildRequest::DeleteBuildRequest(const PlayFabMultiplayerDeleteBuildRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteBuildRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue DeleteBuildRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDeleteBuildRequest>(*this);
}

DeleteCertificateRequest::DeleteCertificateRequest() :
    PlayFabMultiplayerDeleteCertificateRequest{}
{
}

DeleteCertificateRequest::DeleteCertificateRequest(const DeleteCertificateRequest& src) :
    PlayFabMultiplayerDeleteCertificateRequest{ src },
    m_customTags{ src.m_customTags },
    m_name{ src.m_name }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

DeleteCertificateRequest::DeleteCertificateRequest(DeleteCertificateRequest&& src) :
    PlayFabMultiplayerDeleteCertificateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_name{ std::move(src.m_name) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

DeleteCertificateRequest::DeleteCertificateRequest(const PlayFabMultiplayerDeleteCertificateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteCertificateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
}

JsonValue DeleteCertificateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDeleteCertificateRequest>(*this);
}

DeleteContainerImageRequest::DeleteContainerImageRequest() :
    PlayFabMultiplayerDeleteContainerImageRequest{}
{
}

DeleteContainerImageRequest::DeleteContainerImageRequest(const DeleteContainerImageRequest& src) :
    PlayFabMultiplayerDeleteContainerImageRequest{ src },
    m_customTags{ src.m_customTags },
    m_imageName{ src.m_imageName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

DeleteContainerImageRequest::DeleteContainerImageRequest(DeleteContainerImageRequest&& src) :
    PlayFabMultiplayerDeleteContainerImageRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_imageName{ std::move(src.m_imageName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

DeleteContainerImageRequest::DeleteContainerImageRequest(const PlayFabMultiplayerDeleteContainerImageRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteContainerImageRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ImageName", m_imageName, imageName);
}

JsonValue DeleteContainerImageRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDeleteContainerImageRequest>(*this);
}

DeleteRemoteUserRequest::DeleteRemoteUserRequest() :
    PlayFabMultiplayerDeleteRemoteUserRequest{}
{
}

DeleteRemoteUserRequest::DeleteRemoteUserRequest(const DeleteRemoteUserRequest& src) :
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

DeleteRemoteUserRequest::DeleteRemoteUserRequest(DeleteRemoteUserRequest&& src) :
    PlayFabMultiplayerDeleteRemoteUserRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_region{ std::move(src.m_region) },
    m_username{ std::move(src.m_username) },
    m_vmId{ std::move(src.m_vmId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
    username = m_username.empty() ? nullptr : m_username.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

DeleteRemoteUserRequest::DeleteRemoteUserRequest(const PlayFabMultiplayerDeleteRemoteUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteRemoteUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
    JsonUtils::ObjectGetMember(input, "VmId", m_vmId, vmId);
}

JsonValue DeleteRemoteUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerDeleteRemoteUserRequest>(*this);
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest() :
    PlayFabMultiplayerEnableMultiplayerServersForTitleRequest{}
{
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest(const EnableMultiplayerServersForTitleRequest& src) :
    PlayFabMultiplayerEnableMultiplayerServersForTitleRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest(EnableMultiplayerServersForTitleRequest&& src) :
    PlayFabMultiplayerEnableMultiplayerServersForTitleRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest(const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EnableMultiplayerServersForTitleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue EnableMultiplayerServersForTitleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerEnableMultiplayerServersForTitleRequest>(*this);
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse() :
    PlayFabMultiplayerEnableMultiplayerServersForTitleResponse{}
{
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse(const EnableMultiplayerServersForTitleResponse& src) :
    PlayFabMultiplayerEnableMultiplayerServersForTitleResponse{ src },
    m_status{ src.m_status }
{
    status = m_status ? m_status.operator->() : nullptr;
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse(EnableMultiplayerServersForTitleResponse&& src) :
    PlayFabMultiplayerEnableMultiplayerServersForTitleResponse{ src },
    m_status{ std::move(src.m_status) }
{
    status = m_status ? m_status.operator->() : nullptr;
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse(const PlayFabMultiplayerEnableMultiplayerServersForTitleResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EnableMultiplayerServersForTitleResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
}

JsonValue EnableMultiplayerServersForTitleResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerEnableMultiplayerServersForTitleResponse>(*this);
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest() :
    PlayFabMultiplayerGetAssetDownloadUrlRequest{}
{
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest(const GetAssetDownloadUrlRequest& src) :
    PlayFabMultiplayerGetAssetDownloadUrlRequest{ src },
    m_customTags{ src.m_customTags },
    m_fileName{ src.m_fileName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest(GetAssetDownloadUrlRequest&& src) :
    PlayFabMultiplayerGetAssetDownloadUrlRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_fileName{ std::move(src.m_fileName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest(const PlayFabMultiplayerGetAssetDownloadUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAssetDownloadUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
}

JsonValue GetAssetDownloadUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetAssetDownloadUrlRequest>(*this);
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse() :
    PlayFabMultiplayerGetAssetDownloadUrlResponse{}
{
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse(const GetAssetDownloadUrlResponse& src) :
    PlayFabMultiplayerGetAssetDownloadUrlResponse{ src },
    m_assetDownloadUrl{ src.m_assetDownloadUrl },
    m_fileName{ src.m_fileName }
{
    assetDownloadUrl = m_assetDownloadUrl.empty() ? nullptr : m_assetDownloadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse(GetAssetDownloadUrlResponse&& src) :
    PlayFabMultiplayerGetAssetDownloadUrlResponse{ src },
    m_assetDownloadUrl{ std::move(src.m_assetDownloadUrl) },
    m_fileName{ std::move(src.m_fileName) }
{
    assetDownloadUrl = m_assetDownloadUrl.empty() ? nullptr : m_assetDownloadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse(const PlayFabMultiplayerGetAssetDownloadUrlResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAssetDownloadUrlResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AssetDownloadUrl", m_assetDownloadUrl, assetDownloadUrl);
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
}

JsonValue GetAssetDownloadUrlResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetAssetDownloadUrlResponse>(*this);
}

size_t GetAssetDownloadUrlResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerGetAssetDownloadUrlResponse) };
    serializedSize += (m_assetDownloadUrl.size() + 1);
    serializedSize += (m_fileName.size() + 1);
    return serializedSize;
}

void GetAssetDownloadUrlResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerGetAssetDownloadUrlResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerGetAssetDownloadUrlResponse);
    memcpy(stringBuffer, m_assetDownloadUrl.data(), m_assetDownloadUrl.size() + 1);
    serializedStruct->assetDownloadUrl = stringBuffer;
    stringBuffer += m_assetDownloadUrl.size() + 1;
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest() :
    PlayFabMultiplayerGetAssetUploadUrlRequest{}
{
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest(const GetAssetUploadUrlRequest& src) :
    PlayFabMultiplayerGetAssetUploadUrlRequest{ src },
    m_customTags{ src.m_customTags },
    m_fileName{ src.m_fileName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest(GetAssetUploadUrlRequest&& src) :
    PlayFabMultiplayerGetAssetUploadUrlRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_fileName{ std::move(src.m_fileName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest(const PlayFabMultiplayerGetAssetUploadUrlRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAssetUploadUrlRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
}

JsonValue GetAssetUploadUrlRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetAssetUploadUrlRequest>(*this);
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse() :
    PlayFabMultiplayerGetAssetUploadUrlResponse{}
{
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse(const GetAssetUploadUrlResponse& src) :
    PlayFabMultiplayerGetAssetUploadUrlResponse{ src },
    m_assetUploadUrl{ src.m_assetUploadUrl },
    m_fileName{ src.m_fileName }
{
    assetUploadUrl = m_assetUploadUrl.empty() ? nullptr : m_assetUploadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse(GetAssetUploadUrlResponse&& src) :
    PlayFabMultiplayerGetAssetUploadUrlResponse{ src },
    m_assetUploadUrl{ std::move(src.m_assetUploadUrl) },
    m_fileName{ std::move(src.m_fileName) }
{
    assetUploadUrl = m_assetUploadUrl.empty() ? nullptr : m_assetUploadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse(const PlayFabMultiplayerGetAssetUploadUrlResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetAssetUploadUrlResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AssetUploadUrl", m_assetUploadUrl, assetUploadUrl);
    JsonUtils::ObjectGetMember(input, "FileName", m_fileName, fileName);
}

JsonValue GetAssetUploadUrlResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetAssetUploadUrlResponse>(*this);
}

size_t GetAssetUploadUrlResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerGetAssetUploadUrlResponse) };
    serializedSize += (m_assetUploadUrl.size() + 1);
    serializedSize += (m_fileName.size() + 1);
    return serializedSize;
}

void GetAssetUploadUrlResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerGetAssetUploadUrlResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerGetAssetUploadUrlResponse);
    memcpy(stringBuffer, m_assetUploadUrl.data(), m_assetUploadUrl.size() + 1);
    serializedStruct->assetUploadUrl = stringBuffer;
    stringBuffer += m_assetUploadUrl.size() + 1;
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetBuildAliasRequest::GetBuildAliasRequest() :
    PlayFabMultiplayerGetBuildAliasRequest{}
{
}

GetBuildAliasRequest::GetBuildAliasRequest(const GetBuildAliasRequest& src) :
    PlayFabMultiplayerGetBuildAliasRequest{ src },
    m_aliasId{ src.m_aliasId },
    m_customTags{ src.m_customTags }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildAliasRequest::GetBuildAliasRequest(GetBuildAliasRequest&& src) :
    PlayFabMultiplayerGetBuildAliasRequest{ src },
    m_aliasId{ std::move(src.m_aliasId) },
    m_customTags{ std::move(src.m_customTags) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildAliasRequest::GetBuildAliasRequest(const PlayFabMultiplayerGetBuildAliasRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetBuildAliasRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetBuildAliasRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetBuildAliasRequest>(*this);
}

GetBuildRequest::GetBuildRequest() :
    PlayFabMultiplayerGetBuildRequest{}
{
}

GetBuildRequest::GetBuildRequest(const GetBuildRequest& src) :
    PlayFabMultiplayerGetBuildRequest{ src },
    m_buildId{ src.m_buildId },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildRequest::GetBuildRequest(GetBuildRequest&& src) :
    PlayFabMultiplayerGetBuildRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildRequest::GetBuildRequest(const PlayFabMultiplayerGetBuildRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetBuildRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetBuildRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetBuildRequest>(*this);
}

GetBuildResponse::GetBuildResponse() :
    PlayFabMultiplayerGetBuildResponse{}
{
}

GetBuildResponse::GetBuildResponse(const GetBuildResponse& src) :
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

GetBuildResponse::GetBuildResponse(GetBuildResponse&& src) :
    PlayFabMultiplayerGetBuildResponse{ src },
    m_areAssetsReadonly{ std::move(src.m_areAssetsReadonly) },
    m_buildId{ std::move(src.m_buildId) },
    m_buildName{ std::move(src.m_buildName) },
    m_buildStatus{ std::move(src.m_buildStatus) },
    m_containerFlavor{ std::move(src.m_containerFlavor) },
    m_containerRunCommand{ std::move(src.m_containerRunCommand) },
    m_creationTime{ std::move(src.m_creationTime) },
    m_customGameContainerImage{ std::move(src.m_customGameContainerImage) },
    m_gameAssetReferences{ std::move(src.m_gameAssetReferences) },
    m_gameCertificateReferences{ std::move(src.m_gameCertificateReferences) },
    m_instrumentationConfiguration{ std::move(src.m_instrumentationConfiguration) },
    m_metadata{ std::move(src.m_metadata) },
    m_osPlatform{ std::move(src.m_osPlatform) },
    m_ports{ std::move(src.m_ports) },
    m_regionConfigurations{ std::move(src.m_regionConfigurations) },
    m_serverType{ std::move(src.m_serverType) },
    m_startMultiplayerServerCommand{ std::move(src.m_startMultiplayerServerCommand) },
    m_useStreamingForAssetDownloads{ std::move(src.m_useStreamingForAssetDownloads) },
    m_vmSize{ std::move(src.m_vmSize) }
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

GetBuildResponse::GetBuildResponse(const PlayFabMultiplayerGetBuildResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetBuildResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AreAssetsReadonly", m_areAssetsReadonly, areAssetsReadonly);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "BuildStatus", m_buildStatus, buildStatus);
    JsonUtils::ObjectGetMember(input, "ContainerFlavor", m_containerFlavor, containerFlavor);
    JsonUtils::ObjectGetMember(input, "ContainerRunCommand", m_containerRunCommand, containerRunCommand);
    JsonUtils::ObjectGetMember(input, "CreationTime", m_creationTime, creationTime, true);
    JsonUtils::ObjectGetMember(input, "CustomGameContainerImage", m_customGameContainerImage, customGameContainerImage);
    JsonUtils::ObjectGetMember(input, "GameAssetReferences", m_gameAssetReferences, gameAssetReferences, gameAssetReferencesCount);
    JsonUtils::ObjectGetMember(input, "GameCertificateReferences", m_gameCertificateReferences, gameCertificateReferences, gameCertificateReferencesCount);
    JsonUtils::ObjectGetMember(input, "InstrumentationConfiguration", m_instrumentationConfiguration, instrumentationConfiguration);
    JsonUtils::ObjectGetMember(input, "Metadata", m_metadata, metadata, metadataCount);
    JsonUtils::ObjectGetMember(input, "MultiplayerServerCountPerVm", multiplayerServerCountPerVm);
    JsonUtils::ObjectGetMember(input, "OsPlatform", m_osPlatform, osPlatform);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "RegionConfigurations", m_regionConfigurations, regionConfigurations, regionConfigurationsCount);
    JsonUtils::ObjectGetMember(input, "ServerType", m_serverType, serverType);
    JsonUtils::ObjectGetMember(input, "StartMultiplayerServerCommand", m_startMultiplayerServerCommand, startMultiplayerServerCommand);
    JsonUtils::ObjectGetMember(input, "UseStreamingForAssetDownloads", m_useStreamingForAssetDownloads, useStreamingForAssetDownloads);
    JsonUtils::ObjectGetMember(input, "VmSize", m_vmSize, vmSize);
}

JsonValue GetBuildResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetBuildResponse>(*this);
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest() :
    PlayFabMultiplayerGetContainerRegistryCredentialsRequest{}
{
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest(const GetContainerRegistryCredentialsRequest& src) :
    PlayFabMultiplayerGetContainerRegistryCredentialsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest(GetContainerRegistryCredentialsRequest&& src) :
    PlayFabMultiplayerGetContainerRegistryCredentialsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest(const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContainerRegistryCredentialsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetContainerRegistryCredentialsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetContainerRegistryCredentialsRequest>(*this);
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse() :
    PlayFabMultiplayerGetContainerRegistryCredentialsResponse{}
{
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse(const GetContainerRegistryCredentialsResponse& src) :
    PlayFabMultiplayerGetContainerRegistryCredentialsResponse{ src },
    m_dnsName{ src.m_dnsName },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse(GetContainerRegistryCredentialsResponse&& src) :
    PlayFabMultiplayerGetContainerRegistryCredentialsResponse{ src },
    m_dnsName{ std::move(src.m_dnsName) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse(const PlayFabMultiplayerGetContainerRegistryCredentialsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContainerRegistryCredentialsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DnsName", m_dnsName, dnsName);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue GetContainerRegistryCredentialsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetContainerRegistryCredentialsResponse>(*this);
}

size_t GetContainerRegistryCredentialsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerGetContainerRegistryCredentialsResponse) };
    serializedSize += (m_dnsName.size() + 1);
    serializedSize += (m_password.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void GetContainerRegistryCredentialsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerGetContainerRegistryCredentialsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerGetContainerRegistryCredentialsResponse);
    memcpy(stringBuffer, m_dnsName.data(), m_dnsName.size() + 1);
    serializedStruct->dnsName = stringBuffer;
    stringBuffer += m_dnsName.size() + 1;
    memcpy(stringBuffer, m_password.data(), m_password.size() + 1);
    serializedStruct->password = stringBuffer;
    stringBuffer += m_password.size() + 1;
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest() :
    PlayFabMultiplayerGetMatchmakingTicketRequest{}
{
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest(const GetMatchmakingTicketRequest& src) :
    PlayFabMultiplayerGetMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest(GetMatchmakingTicketRequest&& src) :
    PlayFabMultiplayerGetMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketRequest::GetMatchmakingTicketRequest(const PlayFabMultiplayerGetMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EscapeObject", escapeObject);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMatchmakingTicketRequest>(*this);
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult() :
    PlayFabMultiplayerGetMatchmakingTicketResult{}
{
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult(const GetMatchmakingTicketResult& src) :
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
    creator = (PlayFabEntityKey const*)&m_creator;
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult(GetMatchmakingTicketResult&& src) :
    PlayFabMultiplayerGetMatchmakingTicketResult{ src },
    m_cancellationReasonString{ std::move(src.m_cancellationReasonString) },
    m_creator{ std::move(src.m_creator) },
    m_matchId{ std::move(src.m_matchId) },
    m_members{ std::move(src.m_members) },
    m_membersToMatchWith{ std::move(src.m_membersToMatchWith) },
    m_queueName{ std::move(src.m_queueName) },
    m_status{ std::move(src.m_status) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
    creator = (PlayFabEntityKey const*)&m_creator;
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    membersToMatchWith = m_membersToMatchWith.Empty() ? nullptr : m_membersToMatchWith.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetMatchmakingTicketResult::GetMatchmakingTicketResult(const PlayFabMultiplayerGetMatchmakingTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchmakingTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CancellationReasonString", m_cancellationReasonString, cancellationReasonString);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "Creator", m_creator, creator);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "MembersToMatchWith", m_membersToMatchWith, membersToMatchWith, membersToMatchWithCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetMatchmakingTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMatchmakingTicketResult>(*this);
}

GetMatchRequest::GetMatchRequest() :
    PlayFabMultiplayerGetMatchRequest{}
{
}

GetMatchRequest::GetMatchRequest(const GetMatchRequest& src) :
    PlayFabMultiplayerGetMatchRequest{ src },
    m_customTags{ src.m_customTags },
    m_matchId{ src.m_matchId },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetMatchRequest::GetMatchRequest(GetMatchRequest&& src) :
    PlayFabMultiplayerGetMatchRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_matchId{ std::move(src.m_matchId) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetMatchRequest::GetMatchRequest(const PlayFabMultiplayerGetMatchRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EscapeObject", escapeObject);
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "ReturnMemberAttributes", returnMemberAttributes);
}

JsonValue GetMatchRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMatchRequest>(*this);
}

GetMatchResult::GetMatchResult() :
    PlayFabMultiplayerGetMatchResult{}
{
}

GetMatchResult::GetMatchResult(const GetMatchResult& src) :
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

GetMatchResult::GetMatchResult(GetMatchResult&& src) :
    PlayFabMultiplayerGetMatchResult{ src },
    m_matchId{ std::move(src.m_matchId) },
    m_members{ std::move(src.m_members) },
    m_regionPreferences{ std::move(src.m_regionPreferences) },
    m_serverDetails{ std::move(src.m_serverDetails) }
{
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    regionPreferences = m_regionPreferences.Empty() ? nullptr : m_regionPreferences.Data();
    serverDetails = m_serverDetails ? m_serverDetails.operator->() : nullptr;
}

GetMatchResult::GetMatchResult(const PlayFabMultiplayerGetMatchResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMatchResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "RegionPreferences", m_regionPreferences, regionPreferences, regionPreferencesCount);
    JsonUtils::ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
}

JsonValue GetMatchResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMatchResult>(*this);
}

GetMultiplayerServerDetailsRequest::GetMultiplayerServerDetailsRequest() :
    PlayFabMultiplayerGetMultiplayerServerDetailsRequest{}
{
}

GetMultiplayerServerDetailsRequest::GetMultiplayerServerDetailsRequest(const GetMultiplayerServerDetailsRequest& src) :
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

GetMultiplayerServerDetailsRequest::GetMultiplayerServerDetailsRequest(GetMultiplayerServerDetailsRequest&& src) :
    PlayFabMultiplayerGetMultiplayerServerDetailsRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_region{ std::move(src.m_region) },
    m_sessionId{ std::move(src.m_sessionId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
}

GetMultiplayerServerDetailsRequest::GetMultiplayerServerDetailsRequest(const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMultiplayerServerDetailsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
}

JsonValue GetMultiplayerServerDetailsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerDetailsRequest>(*this);
}

GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse() :
    PlayFabMultiplayerGetMultiplayerServerDetailsResponse{}
{
}

GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse(const GetMultiplayerServerDetailsResponse& src) :
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

GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse(GetMultiplayerServerDetailsResponse&& src) :
    PlayFabMultiplayerGetMultiplayerServerDetailsResponse{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_connectedPlayers{ std::move(src.m_connectedPlayers) },
    m_fQDN{ std::move(src.m_fQDN) },
    m_iPV4Address{ std::move(src.m_iPV4Address) },
    m_lastStateTransitionTime{ std::move(src.m_lastStateTransitionTime) },
    m_ports{ std::move(src.m_ports) },
    m_region{ std::move(src.m_region) },
    m_serverId{ std::move(src.m_serverId) },
    m_sessionId{ std::move(src.m_sessionId) },
    m_state{ std::move(src.m_state) },
    m_vmId{ std::move(src.m_vmId) }
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

GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse(const PlayFabMultiplayerGetMultiplayerServerDetailsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMultiplayerServerDetailsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "ConnectedPlayers", m_connectedPlayers, connectedPlayers, connectedPlayersCount);
    JsonUtils::ObjectGetMember(input, "FQDN", m_fQDN, fQDN);
    JsonUtils::ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
    JsonUtils::ObjectGetMember(input, "LastStateTransitionTime", m_lastStateTransitionTime, lastStateTransitionTime, true);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ServerId", m_serverId, serverId);
    JsonUtils::ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
    JsonUtils::ObjectGetMember(input, "State", m_state, state);
    JsonUtils::ObjectGetMember(input, "VmId", m_vmId, vmId);
}

JsonValue GetMultiplayerServerDetailsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerDetailsResponse>(*this);
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest() :
    PlayFabMultiplayerGetMultiplayerServerLogsRequest{}
{
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest(const GetMultiplayerServerLogsRequest& src) :
    PlayFabMultiplayerGetMultiplayerServerLogsRequest{ src },
    m_customTags{ src.m_customTags },
    m_serverId{ src.m_serverId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    serverId = m_serverId.empty() ? nullptr : m_serverId.data();
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest(GetMultiplayerServerLogsRequest&& src) :
    PlayFabMultiplayerGetMultiplayerServerLogsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_serverId{ std::move(src.m_serverId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    serverId = m_serverId.empty() ? nullptr : m_serverId.data();
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest(const PlayFabMultiplayerGetMultiplayerServerLogsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMultiplayerServerLogsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ServerId", m_serverId, serverId);
}

JsonValue GetMultiplayerServerLogsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerLogsRequest>(*this);
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse() :
    PlayFabMultiplayerGetMultiplayerServerLogsResponse{}
{
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse(const GetMultiplayerServerLogsResponse& src) :
    PlayFabMultiplayerGetMultiplayerServerLogsResponse{ src },
    m_logDownloadUrl{ src.m_logDownloadUrl }
{
    logDownloadUrl = m_logDownloadUrl.empty() ? nullptr : m_logDownloadUrl.data();
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse(GetMultiplayerServerLogsResponse&& src) :
    PlayFabMultiplayerGetMultiplayerServerLogsResponse{ src },
    m_logDownloadUrl{ std::move(src.m_logDownloadUrl) }
{
    logDownloadUrl = m_logDownloadUrl.empty() ? nullptr : m_logDownloadUrl.data();
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse(const PlayFabMultiplayerGetMultiplayerServerLogsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMultiplayerServerLogsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LogDownloadUrl", m_logDownloadUrl, logDownloadUrl);
}

JsonValue GetMultiplayerServerLogsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerServerLogsResponse>(*this);
}

size_t GetMultiplayerServerLogsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerGetMultiplayerServerLogsResponse) };
    serializedSize += (m_logDownloadUrl.size() + 1);
    return serializedSize;
}

void GetMultiplayerServerLogsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerGetMultiplayerServerLogsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerGetMultiplayerServerLogsResponse);
    memcpy(stringBuffer, m_logDownloadUrl.data(), m_logDownloadUrl.size() + 1);
    serializedStruct->logDownloadUrl = stringBuffer;
    stringBuffer += m_logDownloadUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest() :
    PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest{}
{
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest(const GetMultiplayerSessionLogsBySessionIdRequest& src) :
    PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_sessionId{ src.m_sessionId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest(GetMultiplayerSessionLogsBySessionIdRequest&& src) :
    PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_sessionId{ std::move(src.m_sessionId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest(const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMultiplayerSessionLogsBySessionIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
}

JsonValue GetMultiplayerSessionLogsBySessionIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest>(*this);
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest() :
    PlayFabMultiplayerGetQueueStatisticsRequest{}
{
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest(const GetQueueStatisticsRequest& src) :
    PlayFabMultiplayerGetQueueStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest(GetQueueStatisticsRequest&& src) :
    PlayFabMultiplayerGetQueueStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

GetQueueStatisticsRequest::GetQueueStatisticsRequest(const PlayFabMultiplayerGetQueueStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetQueueStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue GetQueueStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetQueueStatisticsRequest>(*this);
}

Statistics::Statistics() :
    PlayFabMultiplayerStatistics{}
{
}


Statistics::Statistics(const PlayFabMultiplayerStatistics& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void Statistics::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Average", average);
    JsonUtils::ObjectGetMember(input, "Percentile50", percentile50);
    JsonUtils::ObjectGetMember(input, "Percentile90", percentile90);
    JsonUtils::ObjectGetMember(input, "Percentile99", percentile99);
}

JsonValue Statistics::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerStatistics>(*this);
}

size_t Statistics::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerStatistics) };
    return serializedSize;
}

void Statistics::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerStatistics{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerStatistics);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

GetQueueStatisticsResult::GetQueueStatisticsResult() :
    PlayFabMultiplayerGetQueueStatisticsResult{}
{
}

GetQueueStatisticsResult::GetQueueStatisticsResult(const GetQueueStatisticsResult& src) :
    PlayFabMultiplayerGetQueueStatisticsResult{ src },
    m_numberOfPlayersMatching{ src.m_numberOfPlayersMatching },
    m_timeToMatchStatisticsInSeconds{ src.m_timeToMatchStatisticsInSeconds }
{
    numberOfPlayersMatching = m_numberOfPlayersMatching ? m_numberOfPlayersMatching.operator->() : nullptr;
    timeToMatchStatisticsInSeconds = m_timeToMatchStatisticsInSeconds ? m_timeToMatchStatisticsInSeconds.operator->() : nullptr;
}

GetQueueStatisticsResult::GetQueueStatisticsResult(GetQueueStatisticsResult&& src) :
    PlayFabMultiplayerGetQueueStatisticsResult{ src },
    m_numberOfPlayersMatching{ std::move(src.m_numberOfPlayersMatching) },
    m_timeToMatchStatisticsInSeconds{ std::move(src.m_timeToMatchStatisticsInSeconds) }
{
    numberOfPlayersMatching = m_numberOfPlayersMatching ? m_numberOfPlayersMatching.operator->() : nullptr;
    timeToMatchStatisticsInSeconds = m_timeToMatchStatisticsInSeconds ? m_timeToMatchStatisticsInSeconds.operator->() : nullptr;
}

GetQueueStatisticsResult::GetQueueStatisticsResult(const PlayFabMultiplayerGetQueueStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetQueueStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "NumberOfPlayersMatching", m_numberOfPlayersMatching, numberOfPlayersMatching);
    JsonUtils::ObjectGetMember(input, "TimeToMatchStatisticsInSeconds", m_timeToMatchStatisticsInSeconds, timeToMatchStatisticsInSeconds);
}

JsonValue GetQueueStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetQueueStatisticsResult>(*this);
}

GetRemoteLoginEndpointRequest::GetRemoteLoginEndpointRequest() :
    PlayFabMultiplayerGetRemoteLoginEndpointRequest{}
{
}

GetRemoteLoginEndpointRequest::GetRemoteLoginEndpointRequest(const GetRemoteLoginEndpointRequest& src) :
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

GetRemoteLoginEndpointRequest::GetRemoteLoginEndpointRequest(GetRemoteLoginEndpointRequest&& src) :
    PlayFabMultiplayerGetRemoteLoginEndpointRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_region{ std::move(src.m_region) },
    m_vmId{ std::move(src.m_vmId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

GetRemoteLoginEndpointRequest::GetRemoteLoginEndpointRequest(const PlayFabMultiplayerGetRemoteLoginEndpointRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRemoteLoginEndpointRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "VmId", m_vmId, vmId);
}

JsonValue GetRemoteLoginEndpointRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetRemoteLoginEndpointRequest>(*this);
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse() :
    PlayFabMultiplayerGetRemoteLoginEndpointResponse{}
{
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse(const GetRemoteLoginEndpointResponse& src) :
    PlayFabMultiplayerGetRemoteLoginEndpointResponse{ src },
    m_iPV4Address{ src.m_iPV4Address }
{
    iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse(GetRemoteLoginEndpointResponse&& src) :
    PlayFabMultiplayerGetRemoteLoginEndpointResponse{ src },
    m_iPV4Address{ std::move(src.m_iPV4Address) }
{
    iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse(const PlayFabMultiplayerGetRemoteLoginEndpointResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetRemoteLoginEndpointResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
    JsonUtils::ObjectGetMember(input, "Port", port);
}

JsonValue GetRemoteLoginEndpointResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetRemoteLoginEndpointResponse>(*this);
}

size_t GetRemoteLoginEndpointResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerGetRemoteLoginEndpointResponse) };
    serializedSize += (m_iPV4Address.size() + 1);
    return serializedSize;
}

void GetRemoteLoginEndpointResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerGetRemoteLoginEndpointResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerGetRemoteLoginEndpointResponse);
    memcpy(stringBuffer, m_iPV4Address.data(), m_iPV4Address.size() + 1);
    serializedStruct->iPV4Address = stringBuffer;
    stringBuffer += m_iPV4Address.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest() :
    PlayFabMultiplayerGetServerBackfillTicketRequest{}
{
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest(const GetServerBackfillTicketRequest& src) :
    PlayFabMultiplayerGetServerBackfillTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest(GetServerBackfillTicketRequest&& src) :
    PlayFabMultiplayerGetServerBackfillTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketRequest::GetServerBackfillTicketRequest(const PlayFabMultiplayerGetServerBackfillTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBackfillTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EscapeObject", escapeObject);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetServerBackfillTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetServerBackfillTicketRequest>(*this);
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult() :
    PlayFabMultiplayerGetServerBackfillTicketResult{}
{
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult(const GetServerBackfillTicketResult& src) :
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
    serverDetails = (PlayFabMultiplayerServerDetails const*)&m_serverDetails;
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult(GetServerBackfillTicketResult&& src) :
    PlayFabMultiplayerGetServerBackfillTicketResult{ src },
    m_cancellationReasonString{ std::move(src.m_cancellationReasonString) },
    m_matchId{ std::move(src.m_matchId) },
    m_members{ std::move(src.m_members) },
    m_queueName{ std::move(src.m_queueName) },
    m_serverDetails{ std::move(src.m_serverDetails) },
    m_status{ std::move(src.m_status) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    cancellationReasonString = m_cancellationReasonString.empty() ? nullptr : m_cancellationReasonString.data();
    matchId = m_matchId.empty() ? nullptr : m_matchId.data();
    members = m_members.Empty() ? nullptr : m_members.Data();
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    serverDetails = (PlayFabMultiplayerServerDetails const*)&m_serverDetails;
    status = m_status.empty() ? nullptr : m_status.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

GetServerBackfillTicketResult::GetServerBackfillTicketResult(const PlayFabMultiplayerGetServerBackfillTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetServerBackfillTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CancellationReasonString", m_cancellationReasonString, cancellationReasonString);
    JsonUtils::ObjectGetMember(input, "Created", created, true);
    JsonUtils::ObjectGetMember(input, "GiveUpAfterSeconds", giveUpAfterSeconds);
    JsonUtils::ObjectGetMember(input, "MatchId", m_matchId, matchId);
    JsonUtils::ObjectGetMember(input, "Members", m_members, members, membersCount);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "ServerDetails", m_serverDetails, serverDetails);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue GetServerBackfillTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetServerBackfillTicketResult>(*this);
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest() :
    PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest{}
{
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest(const GetTitleEnabledForMultiplayerServersStatusRequest& src) :
    PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest(GetTitleEnabledForMultiplayerServersStatusRequest&& src) :
    PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleEnabledForMultiplayerServersStatusRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetTitleEnabledForMultiplayerServersStatusRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest>(*this);
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse() :
    PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse{}
{
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse(const GetTitleEnabledForMultiplayerServersStatusResponse& src) :
    PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse{ src },
    m_status{ src.m_status }
{
    status = m_status ? m_status.operator->() : nullptr;
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse(GetTitleEnabledForMultiplayerServersStatusResponse&& src) :
    PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse{ src },
    m_status{ std::move(src.m_status) }
{
    status = m_status ? m_status.operator->() : nullptr;
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleEnabledForMultiplayerServersStatusResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
}

JsonValue GetTitleEnabledForMultiplayerServersStatusResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse>(*this);
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest() :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest{}
{
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest(const GetTitleMultiplayerServersQuotaChangeRequest& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest{ src },
    m_customTags{ src.m_customTags },
    m_requestId{ src.m_requestId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest(GetTitleMultiplayerServersQuotaChangeRequest&& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_requestId{ std::move(src.m_requestId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleMultiplayerServersQuotaChangeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "RequestId", m_requestId, requestId);
}

JsonValue GetTitleMultiplayerServersQuotaChangeRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest>(*this);
}

QuotaChange::QuotaChange() :
    PlayFabMultiplayerQuotaChange{}
{
}

QuotaChange::QuotaChange(const QuotaChange& src) :
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

QuotaChange::QuotaChange(QuotaChange&& src) :
    PlayFabMultiplayerQuotaChange{ src },
    m_changeDescription{ std::move(src.m_changeDescription) },
    m_changes{ std::move(src.m_changes) },
    m_notes{ std::move(src.m_notes) },
    m_requestId{ std::move(src.m_requestId) },
    m_reviewComments{ std::move(src.m_reviewComments) }
{
    changeDescription = m_changeDescription.empty() ? nullptr : m_changeDescription.data();
    changes = m_changes.Empty() ? nullptr : m_changes.Data();
    notes = m_notes.empty() ? nullptr : m_notes.data();
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
    reviewComments = m_reviewComments.empty() ? nullptr : m_reviewComments.data();
}

QuotaChange::QuotaChange(const PlayFabMultiplayerQuotaChange& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void QuotaChange::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ChangeDescription", m_changeDescription, changeDescription);
    JsonUtils::ObjectGetMember(input, "Changes", m_changes, changes, changesCount);
    JsonUtils::ObjectGetMember(input, "IsPendingReview", isPendingReview);
    JsonUtils::ObjectGetMember(input, "Notes", m_notes, notes);
    JsonUtils::ObjectGetMember(input, "RequestId", m_requestId, requestId);
    JsonUtils::ObjectGetMember(input, "ReviewComments", m_reviewComments, reviewComments);
    JsonUtils::ObjectGetMember(input, "WasApproved", wasApproved);
}

JsonValue QuotaChange::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerQuotaChange>(*this);
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse() :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse{}
{
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse(const GetTitleMultiplayerServersQuotaChangeResponse& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse{ src },
    m_change{ src.m_change }
{
    change = m_change ? m_change.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse(GetTitleMultiplayerServersQuotaChangeResponse&& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse{ src },
    m_change{ std::move(src.m_change) }
{
    change = m_change ? m_change.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleMultiplayerServersQuotaChangeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Change", m_change, change);
}

JsonValue GetTitleMultiplayerServersQuotaChangeResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse>(*this);
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest() :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest{}
{
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest(const GetTitleMultiplayerServersQuotasRequest& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest(GetTitleMultiplayerServersQuotasRequest&& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleMultiplayerServersQuotasRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetTitleMultiplayerServersQuotasRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest>(*this);
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas() :
    PlayFabMultiplayerTitleMultiplayerServersQuotas{}
{
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas(const TitleMultiplayerServersQuotas& src) :
    PlayFabMultiplayerTitleMultiplayerServersQuotas{ src },
    m_coreCapacities{ src.m_coreCapacities }
{
    coreCapacities = m_coreCapacities.Empty() ? nullptr : m_coreCapacities.Data();
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas(TitleMultiplayerServersQuotas&& src) :
    PlayFabMultiplayerTitleMultiplayerServersQuotas{ src },
    m_coreCapacities{ std::move(src.m_coreCapacities) }
{
    coreCapacities = m_coreCapacities.Empty() ? nullptr : m_coreCapacities.Data();
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas(const PlayFabMultiplayerTitleMultiplayerServersQuotas& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TitleMultiplayerServersQuotas::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CoreCapacities", m_coreCapacities, coreCapacities, coreCapacitiesCount);
}

JsonValue TitleMultiplayerServersQuotas::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerTitleMultiplayerServersQuotas>(*this);
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse() :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse{}
{
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse(const GetTitleMultiplayerServersQuotasResponse& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse{ src },
    m_quotas{ src.m_quotas }
{
    quotas = m_quotas ? m_quotas.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse(GetTitleMultiplayerServersQuotasResponse&& src) :
    PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse{ src },
    m_quotas{ std::move(src.m_quotas) }
{
    quotas = m_quotas ? m_quotas.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleMultiplayerServersQuotasResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Quotas", m_quotas, quotas);
}

JsonValue GetTitleMultiplayerServersQuotasResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse>(*this);
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest() :
    PlayFabMultiplayerJoinMatchmakingTicketRequest{}
{
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest(const JoinMatchmakingTicketRequest& src) :
    PlayFabMultiplayerJoinMatchmakingTicketRequest{ src },
    m_customTags{ src.m_customTags },
    m_member{ src.m_member },
    m_queueName{ src.m_queueName },
    m_ticketId{ src.m_ticketId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    member = (PlayFabMultiplayerMatchmakingPlayer const*)&m_member;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest(JoinMatchmakingTicketRequest&& src) :
    PlayFabMultiplayerJoinMatchmakingTicketRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_member{ std::move(src.m_member) },
    m_queueName{ std::move(src.m_queueName) },
    m_ticketId{ std::move(src.m_ticketId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    member = (PlayFabMultiplayerMatchmakingPlayer const*)&m_member;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
    ticketId = m_ticketId.empty() ? nullptr : m_ticketId.data();
}

JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest(const PlayFabMultiplayerJoinMatchmakingTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void JoinMatchmakingTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Member", m_member, member);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
    JsonUtils::ObjectGetMember(input, "TicketId", m_ticketId, ticketId);
}

JsonValue JoinMatchmakingTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerJoinMatchmakingTicketRequest>(*this);
}

ListAssetSummariesRequest::ListAssetSummariesRequest() :
    PlayFabMultiplayerListAssetSummariesRequest{}
{
}

ListAssetSummariesRequest::ListAssetSummariesRequest(const ListAssetSummariesRequest& src) :
    PlayFabMultiplayerListAssetSummariesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesRequest::ListAssetSummariesRequest(ListAssetSummariesRequest&& src) :
    PlayFabMultiplayerListAssetSummariesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesRequest::ListAssetSummariesRequest(const PlayFabMultiplayerListAssetSummariesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListAssetSummariesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListAssetSummariesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListAssetSummariesRequest>(*this);
}

ListAssetSummariesResponse::ListAssetSummariesResponse() :
    PlayFabMultiplayerListAssetSummariesResponse{}
{
}

ListAssetSummariesResponse::ListAssetSummariesResponse(const ListAssetSummariesResponse& src) :
    PlayFabMultiplayerListAssetSummariesResponse{ src },
    m_assetSummaries{ src.m_assetSummaries },
    m_skipToken{ src.m_skipToken }
{
    assetSummaries = m_assetSummaries.Empty() ? nullptr : m_assetSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesResponse::ListAssetSummariesResponse(ListAssetSummariesResponse&& src) :
    PlayFabMultiplayerListAssetSummariesResponse{ src },
    m_assetSummaries{ std::move(src.m_assetSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    assetSummaries = m_assetSummaries.Empty() ? nullptr : m_assetSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesResponse::ListAssetSummariesResponse(const PlayFabMultiplayerListAssetSummariesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListAssetSummariesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AssetSummaries", m_assetSummaries, assetSummaries, assetSummariesCount);
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListAssetSummariesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListAssetSummariesResponse>(*this);
}

ListBuildAliasesRequest::ListBuildAliasesRequest() :
    PlayFabMultiplayerListBuildAliasesRequest{}
{
}

ListBuildAliasesRequest::ListBuildAliasesRequest(const ListBuildAliasesRequest& src) :
    PlayFabMultiplayerListBuildAliasesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesRequest::ListBuildAliasesRequest(ListBuildAliasesRequest&& src) :
    PlayFabMultiplayerListBuildAliasesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesRequest::ListBuildAliasesRequest(const PlayFabMultiplayerListBuildAliasesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListBuildAliasesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListBuildAliasesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListBuildAliasesRequest>(*this);
}

ListBuildAliasesResponse::ListBuildAliasesResponse() :
    PlayFabMultiplayerListBuildAliasesResponse{}
{
}

ListBuildAliasesResponse::ListBuildAliasesResponse(const ListBuildAliasesResponse& src) :
    PlayFabMultiplayerListBuildAliasesResponse{ src },
    m_buildAliases{ src.m_buildAliases },
    m_skipToken{ src.m_skipToken }
{
    buildAliases = m_buildAliases.Empty() ? nullptr : m_buildAliases.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesResponse::ListBuildAliasesResponse(ListBuildAliasesResponse&& src) :
    PlayFabMultiplayerListBuildAliasesResponse{ src },
    m_buildAliases{ std::move(src.m_buildAliases) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    buildAliases = m_buildAliases.Empty() ? nullptr : m_buildAliases.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesResponse::ListBuildAliasesResponse(const PlayFabMultiplayerListBuildAliasesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListBuildAliasesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildAliases", m_buildAliases, buildAliases, buildAliasesCount);
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListBuildAliasesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListBuildAliasesResponse>(*this);
}

ListBuildSummariesRequest::ListBuildSummariesRequest() :
    PlayFabMultiplayerListBuildSummariesRequest{}
{
}

ListBuildSummariesRequest::ListBuildSummariesRequest(const ListBuildSummariesRequest& src) :
    PlayFabMultiplayerListBuildSummariesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesRequest::ListBuildSummariesRequest(ListBuildSummariesRequest&& src) :
    PlayFabMultiplayerListBuildSummariesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesRequest::ListBuildSummariesRequest(const PlayFabMultiplayerListBuildSummariesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListBuildSummariesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListBuildSummariesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListBuildSummariesRequest>(*this);
}

ListBuildSummariesResponse::ListBuildSummariesResponse() :
    PlayFabMultiplayerListBuildSummariesResponse{}
{
}

ListBuildSummariesResponse::ListBuildSummariesResponse(const ListBuildSummariesResponse& src) :
    PlayFabMultiplayerListBuildSummariesResponse{ src },
    m_buildSummaries{ src.m_buildSummaries },
    m_skipToken{ src.m_skipToken }
{
    buildSummaries = m_buildSummaries.Empty() ? nullptr : m_buildSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesResponse::ListBuildSummariesResponse(ListBuildSummariesResponse&& src) :
    PlayFabMultiplayerListBuildSummariesResponse{ src },
    m_buildSummaries{ std::move(src.m_buildSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    buildSummaries = m_buildSummaries.Empty() ? nullptr : m_buildSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesResponse::ListBuildSummariesResponse(const PlayFabMultiplayerListBuildSummariesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListBuildSummariesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildSummaries", m_buildSummaries, buildSummaries, buildSummariesCount);
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListBuildSummariesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListBuildSummariesResponse>(*this);
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest() :
    PlayFabMultiplayerListCertificateSummariesRequest{}
{
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest(const ListCertificateSummariesRequest& src) :
    PlayFabMultiplayerListCertificateSummariesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest(ListCertificateSummariesRequest&& src) :
    PlayFabMultiplayerListCertificateSummariesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest(const PlayFabMultiplayerListCertificateSummariesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListCertificateSummariesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListCertificateSummariesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListCertificateSummariesRequest>(*this);
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse() :
    PlayFabMultiplayerListCertificateSummariesResponse{}
{
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse(const ListCertificateSummariesResponse& src) :
    PlayFabMultiplayerListCertificateSummariesResponse{ src },
    m_certificateSummaries{ src.m_certificateSummaries },
    m_skipToken{ src.m_skipToken }
{
    certificateSummaries = m_certificateSummaries.Empty() ? nullptr : m_certificateSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse(ListCertificateSummariesResponse&& src) :
    PlayFabMultiplayerListCertificateSummariesResponse{ src },
    m_certificateSummaries{ std::move(src.m_certificateSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    certificateSummaries = m_certificateSummaries.Empty() ? nullptr : m_certificateSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse(const PlayFabMultiplayerListCertificateSummariesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListCertificateSummariesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CertificateSummaries", m_certificateSummaries, certificateSummaries, certificateSummariesCount);
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListCertificateSummariesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListCertificateSummariesResponse>(*this);
}

ListContainerImagesRequest::ListContainerImagesRequest() :
    PlayFabMultiplayerListContainerImagesRequest{}
{
}

ListContainerImagesRequest::ListContainerImagesRequest(const ListContainerImagesRequest& src) :
    PlayFabMultiplayerListContainerImagesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesRequest::ListContainerImagesRequest(ListContainerImagesRequest&& src) :
    PlayFabMultiplayerListContainerImagesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesRequest::ListContainerImagesRequest(const PlayFabMultiplayerListContainerImagesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListContainerImagesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListContainerImagesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListContainerImagesRequest>(*this);
}

ListContainerImagesResponse::ListContainerImagesResponse() :
    PlayFabMultiplayerListContainerImagesResponse{}
{
}

ListContainerImagesResponse::ListContainerImagesResponse(const ListContainerImagesResponse& src) :
    PlayFabMultiplayerListContainerImagesResponse{ src },
    m_images{ src.m_images },
    m_skipToken{ src.m_skipToken }
{
    images = m_images.Empty() ? nullptr : m_images.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesResponse::ListContainerImagesResponse(ListContainerImagesResponse&& src) :
    PlayFabMultiplayerListContainerImagesResponse{ src },
    m_images{ std::move(src.m_images) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    images = m_images.Empty() ? nullptr : m_images.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesResponse::ListContainerImagesResponse(const PlayFabMultiplayerListContainerImagesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListContainerImagesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Images", m_images, images, imagesCount);
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListContainerImagesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListContainerImagesResponse>(*this);
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest() :
    PlayFabMultiplayerListContainerImageTagsRequest{}
{
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest(const ListContainerImageTagsRequest& src) :
    PlayFabMultiplayerListContainerImageTagsRequest{ src },
    m_customTags{ src.m_customTags },
    m_imageName{ src.m_imageName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest(ListContainerImageTagsRequest&& src) :
    PlayFabMultiplayerListContainerImageTagsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_imageName{ std::move(src.m_imageName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest(const PlayFabMultiplayerListContainerImageTagsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListContainerImageTagsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ImageName", m_imageName, imageName);
}

JsonValue ListContainerImageTagsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListContainerImageTagsRequest>(*this);
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse() :
    PlayFabMultiplayerListContainerImageTagsResponse{}
{
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse(const ListContainerImageTagsResponse& src) :
    PlayFabMultiplayerListContainerImageTagsResponse{ src },
    m_tags{ src.m_tags }
{
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse(ListContainerImageTagsResponse&& src) :
    PlayFabMultiplayerListContainerImageTagsResponse{ src },
    m_tags{ std::move(src.m_tags) }
{
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse(const PlayFabMultiplayerListContainerImageTagsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListContainerImageTagsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue ListContainerImageTagsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListContainerImageTagsResponse>(*this);
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest() :
    PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest{}
{
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest(const ListMatchmakingTicketsForPlayerRequest& src) :
    PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest(ListMatchmakingTicketsForPlayerRequest&& src) :
    PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListMatchmakingTicketsForPlayerRequest::ListMatchmakingTicketsForPlayerRequest(const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMatchmakingTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue ListMatchmakingTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest>(*this);
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult() :
    PlayFabMultiplayerListMatchmakingTicketsForPlayerResult{}
{
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult(const ListMatchmakingTicketsForPlayerResult& src) :
    PlayFabMultiplayerListMatchmakingTicketsForPlayerResult{ src },
    m_ticketIds{ src.m_ticketIds }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult(ListMatchmakingTicketsForPlayerResult&& src) :
    PlayFabMultiplayerListMatchmakingTicketsForPlayerResult{ src },
    m_ticketIds{ std::move(src.m_ticketIds) }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListMatchmakingTicketsForPlayerResult::ListMatchmakingTicketsForPlayerResult(const PlayFabMultiplayerListMatchmakingTicketsForPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMatchmakingTicketsForPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketIds", m_ticketIds, ticketIds, ticketIdsCount);
}

JsonValue ListMatchmakingTicketsForPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListMatchmakingTicketsForPlayerResult>(*this);
}

ListMultiplayerServersRequest::ListMultiplayerServersRequest() :
    PlayFabMultiplayerListMultiplayerServersRequest{}
{
}

ListMultiplayerServersRequest::ListMultiplayerServersRequest(const ListMultiplayerServersRequest& src) :
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

ListMultiplayerServersRequest::ListMultiplayerServersRequest(ListMultiplayerServersRequest&& src) :
    PlayFabMultiplayerListMultiplayerServersRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_region{ std::move(src.m_region) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListMultiplayerServersRequest::ListMultiplayerServersRequest(const PlayFabMultiplayerListMultiplayerServersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMultiplayerServersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListMultiplayerServersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListMultiplayerServersRequest>(*this);
}

MultiplayerServerSummary::MultiplayerServerSummary() :
    PlayFabMultiplayerMultiplayerServerSummary{}
{
}

MultiplayerServerSummary::MultiplayerServerSummary(const MultiplayerServerSummary& src) :
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

MultiplayerServerSummary::MultiplayerServerSummary(MultiplayerServerSummary&& src) :
    PlayFabMultiplayerMultiplayerServerSummary{ src },
    m_connectedPlayers{ std::move(src.m_connectedPlayers) },
    m_lastStateTransitionTime{ std::move(src.m_lastStateTransitionTime) },
    m_region{ std::move(src.m_region) },
    m_serverId{ std::move(src.m_serverId) },
    m_sessionId{ std::move(src.m_sessionId) },
    m_state{ std::move(src.m_state) },
    m_vmId{ std::move(src.m_vmId) }
{
    connectedPlayers = m_connectedPlayers.Empty() ? nullptr : m_connectedPlayers.Data();
    lastStateTransitionTime = m_lastStateTransitionTime ? m_lastStateTransitionTime.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    serverId = m_serverId.empty() ? nullptr : m_serverId.data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
    state = m_state.empty() ? nullptr : m_state.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

MultiplayerServerSummary::MultiplayerServerSummary(const PlayFabMultiplayerMultiplayerServerSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void MultiplayerServerSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectedPlayers", m_connectedPlayers, connectedPlayers, connectedPlayersCount);
    JsonUtils::ObjectGetMember(input, "LastStateTransitionTime", m_lastStateTransitionTime, lastStateTransitionTime, true);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ServerId", m_serverId, serverId);
    JsonUtils::ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
    JsonUtils::ObjectGetMember(input, "State", m_state, state);
    JsonUtils::ObjectGetMember(input, "VmId", m_vmId, vmId);
}

JsonValue MultiplayerServerSummary::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerMultiplayerServerSummary>(*this);
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse() :
    PlayFabMultiplayerListMultiplayerServersResponse{}
{
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse(const ListMultiplayerServersResponse& src) :
    PlayFabMultiplayerListMultiplayerServersResponse{ src },
    m_multiplayerServerSummaries{ src.m_multiplayerServerSummaries },
    m_skipToken{ src.m_skipToken }
{
    multiplayerServerSummaries = m_multiplayerServerSummaries.Empty() ? nullptr : m_multiplayerServerSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse(ListMultiplayerServersResponse&& src) :
    PlayFabMultiplayerListMultiplayerServersResponse{ src },
    m_multiplayerServerSummaries{ std::move(src.m_multiplayerServerSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    multiplayerServerSummaries = m_multiplayerServerSummaries.Empty() ? nullptr : m_multiplayerServerSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse(const PlayFabMultiplayerListMultiplayerServersResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListMultiplayerServersResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "MultiplayerServerSummaries", m_multiplayerServerSummaries, multiplayerServerSummaries, multiplayerServerSummariesCount);
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListMultiplayerServersResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListMultiplayerServersResponse>(*this);
}

ListPartyQosServersRequest::ListPartyQosServersRequest() :
    PlayFabMultiplayerListPartyQosServersRequest{}
{
}

ListPartyQosServersRequest::ListPartyQosServersRequest(const ListPartyQosServersRequest& src) :
    PlayFabMultiplayerListPartyQosServersRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListPartyQosServersRequest::ListPartyQosServersRequest(ListPartyQosServersRequest&& src) :
    PlayFabMultiplayerListPartyQosServersRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListPartyQosServersRequest::ListPartyQosServersRequest(const PlayFabMultiplayerListPartyQosServersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListPartyQosServersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ListPartyQosServersRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListPartyQosServersRequest>(*this);
}

QosServer::QosServer() :
    PlayFabMultiplayerQosServer{}
{
}

QosServer::QosServer(const QosServer& src) :
    PlayFabMultiplayerQosServer{ src },
    m_region{ src.m_region },
    m_serverUrl{ src.m_serverUrl }
{
    region = m_region.empty() ? nullptr : m_region.data();
    serverUrl = m_serverUrl.empty() ? nullptr : m_serverUrl.data();
}

QosServer::QosServer(QosServer&& src) :
    PlayFabMultiplayerQosServer{ src },
    m_region{ std::move(src.m_region) },
    m_serverUrl{ std::move(src.m_serverUrl) }
{
    region = m_region.empty() ? nullptr : m_region.data();
    serverUrl = m_serverUrl.empty() ? nullptr : m_serverUrl.data();
}

QosServer::QosServer(const PlayFabMultiplayerQosServer& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void QosServer::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ServerUrl", m_serverUrl, serverUrl);
}

JsonValue QosServer::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerQosServer>(*this);
}

size_t QosServer::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerQosServer) };
    serializedSize += (m_region.size() + 1);
    serializedSize += (m_serverUrl.size() + 1);
    return serializedSize;
}

void QosServer::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerQosServer{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerQosServer);
    memcpy(stringBuffer, m_region.data(), m_region.size() + 1);
    serializedStruct->region = stringBuffer;
    stringBuffer += m_region.size() + 1;
    memcpy(stringBuffer, m_serverUrl.data(), m_serverUrl.size() + 1);
    serializedStruct->serverUrl = stringBuffer;
    stringBuffer += m_serverUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListPartyQosServersResponse::ListPartyQosServersResponse() :
    PlayFabMultiplayerListPartyQosServersResponse{}
{
}

ListPartyQosServersResponse::ListPartyQosServersResponse(const ListPartyQosServersResponse& src) :
    PlayFabMultiplayerListPartyQosServersResponse{ src },
    m_qosServers{ src.m_qosServers },
    m_skipToken{ src.m_skipToken }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListPartyQosServersResponse::ListPartyQosServersResponse(ListPartyQosServersResponse&& src) :
    PlayFabMultiplayerListPartyQosServersResponse{ src },
    m_qosServers{ std::move(src.m_qosServers) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListPartyQosServersResponse::ListPartyQosServersResponse(const PlayFabMultiplayerListPartyQosServersResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListPartyQosServersResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "QosServers", m_qosServers, qosServers, qosServersCount);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListPartyQosServersResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListPartyQosServersResponse>(*this);
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest() :
    PlayFabMultiplayerListQosServersForTitleRequest{}
{
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest(const ListQosServersForTitleRequest& src) :
    PlayFabMultiplayerListQosServersForTitleRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeAllRegions{ src.m_includeAllRegions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeAllRegions = m_includeAllRegions ? m_includeAllRegions.operator->() : nullptr;
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest(ListQosServersForTitleRequest&& src) :
    PlayFabMultiplayerListQosServersForTitleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeAllRegions{ std::move(src.m_includeAllRegions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeAllRegions = m_includeAllRegions ? m_includeAllRegions.operator->() : nullptr;
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest(const PlayFabMultiplayerListQosServersForTitleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListQosServersForTitleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeAllRegions", m_includeAllRegions, includeAllRegions);
}

JsonValue ListQosServersForTitleRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListQosServersForTitleRequest>(*this);
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse() :
    PlayFabMultiplayerListQosServersForTitleResponse{}
{
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse(const ListQosServersForTitleResponse& src) :
    PlayFabMultiplayerListQosServersForTitleResponse{ src },
    m_qosServers{ src.m_qosServers },
    m_skipToken{ src.m_skipToken }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse(ListQosServersForTitleResponse&& src) :
    PlayFabMultiplayerListQosServersForTitleResponse{ src },
    m_qosServers{ std::move(src.m_qosServers) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse(const PlayFabMultiplayerListQosServersForTitleResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListQosServersForTitleResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "QosServers", m_qosServers, qosServers, qosServersCount);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListQosServersForTitleResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListQosServersForTitleResponse>(*this);
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest() :
    PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest{}
{
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest(const ListServerBackfillTicketsForPlayerRequest& src) :
    PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_queueName{ src.m_queueName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest(ListServerBackfillTicketsForPlayerRequest&& src) :
    PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_queueName{ std::move(src.m_queueName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = (PlayFabEntityKey const*)&m_entity;
    queueName = m_queueName.empty() ? nullptr : m_queueName.data();
}

ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest(const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListServerBackfillTicketsForPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "QueueName", m_queueName, queueName);
}

JsonValue ListServerBackfillTicketsForPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest>(*this);
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult() :
    PlayFabMultiplayerListServerBackfillTicketsForPlayerResult{}
{
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult(const ListServerBackfillTicketsForPlayerResult& src) :
    PlayFabMultiplayerListServerBackfillTicketsForPlayerResult{ src },
    m_ticketIds{ src.m_ticketIds }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult(ListServerBackfillTicketsForPlayerResult&& src) :
    PlayFabMultiplayerListServerBackfillTicketsForPlayerResult{ src },
    m_ticketIds{ std::move(src.m_ticketIds) }
{
    ticketIds = m_ticketIds.Empty() ? nullptr : m_ticketIds.Data();
}

ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult(const PlayFabMultiplayerListServerBackfillTicketsForPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListServerBackfillTicketsForPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TicketIds", m_ticketIds, ticketIds, ticketIdsCount);
}

JsonValue ListServerBackfillTicketsForPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListServerBackfillTicketsForPlayerResult>(*this);
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest() :
    PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest{}
{
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest(const ListTitleMultiplayerServersQuotaChangesRequest& src) :
    PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest(ListTitleMultiplayerServersQuotaChangesRequest&& src) :
    PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListTitleMultiplayerServersQuotaChangesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ListTitleMultiplayerServersQuotaChangesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest>(*this);
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse() :
    PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse{}
{
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse(const ListTitleMultiplayerServersQuotaChangesResponse& src) :
    PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse{ src },
    m_changes{ src.m_changes }
{
    changes = m_changes.Empty() ? nullptr : m_changes.Data();
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse(ListTitleMultiplayerServersQuotaChangesResponse&& src) :
    PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse{ src },
    m_changes{ std::move(src.m_changes) }
{
    changes = m_changes.Empty() ? nullptr : m_changes.Data();
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListTitleMultiplayerServersQuotaChangesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Changes", m_changes, changes, changesCount);
}

JsonValue ListTitleMultiplayerServersQuotaChangesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse>(*this);
}

ListVirtualMachineSummariesRequest::ListVirtualMachineSummariesRequest() :
    PlayFabMultiplayerListVirtualMachineSummariesRequest{}
{
}

ListVirtualMachineSummariesRequest::ListVirtualMachineSummariesRequest(const ListVirtualMachineSummariesRequest& src) :
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

ListVirtualMachineSummariesRequest::ListVirtualMachineSummariesRequest(ListVirtualMachineSummariesRequest&& src) :
    PlayFabMultiplayerListVirtualMachineSummariesRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_region{ std::move(src.m_region) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListVirtualMachineSummariesRequest::ListVirtualMachineSummariesRequest(const PlayFabMultiplayerListVirtualMachineSummariesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListVirtualMachineSummariesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PageSize", m_pageSize, pageSize);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
}

JsonValue ListVirtualMachineSummariesRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListVirtualMachineSummariesRequest>(*this);
}

VirtualMachineSummary::VirtualMachineSummary() :
    PlayFabMultiplayerVirtualMachineSummary{}
{
}

VirtualMachineSummary::VirtualMachineSummary(const VirtualMachineSummary& src) :
    PlayFabMultiplayerVirtualMachineSummary{ src },
    m_healthStatus{ src.m_healthStatus },
    m_state{ src.m_state },
    m_vmId{ src.m_vmId }
{
    healthStatus = m_healthStatus.empty() ? nullptr : m_healthStatus.data();
    state = m_state.empty() ? nullptr : m_state.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

VirtualMachineSummary::VirtualMachineSummary(VirtualMachineSummary&& src) :
    PlayFabMultiplayerVirtualMachineSummary{ src },
    m_healthStatus{ std::move(src.m_healthStatus) },
    m_state{ std::move(src.m_state) },
    m_vmId{ std::move(src.m_vmId) }
{
    healthStatus = m_healthStatus.empty() ? nullptr : m_healthStatus.data();
    state = m_state.empty() ? nullptr : m_state.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

VirtualMachineSummary::VirtualMachineSummary(const PlayFabMultiplayerVirtualMachineSummary& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void VirtualMachineSummary::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "HealthStatus", m_healthStatus, healthStatus);
    JsonUtils::ObjectGetMember(input, "State", m_state, state);
    JsonUtils::ObjectGetMember(input, "VmId", m_vmId, vmId);
}

JsonValue VirtualMachineSummary::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerVirtualMachineSummary>(*this);
}

size_t VirtualMachineSummary::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerVirtualMachineSummary) };
    serializedSize += (m_healthStatus.size() + 1);
    serializedSize += (m_state.size() + 1);
    serializedSize += (m_vmId.size() + 1);
    return serializedSize;
}

void VirtualMachineSummary::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerVirtualMachineSummary{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerVirtualMachineSummary);
    memcpy(stringBuffer, m_healthStatus.data(), m_healthStatus.size() + 1);
    serializedStruct->healthStatus = stringBuffer;
    stringBuffer += m_healthStatus.size() + 1;
    memcpy(stringBuffer, m_state.data(), m_state.size() + 1);
    serializedStruct->state = stringBuffer;
    stringBuffer += m_state.size() + 1;
    memcpy(stringBuffer, m_vmId.data(), m_vmId.size() + 1);
    serializedStruct->vmId = stringBuffer;
    stringBuffer += m_vmId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse() :
    PlayFabMultiplayerListVirtualMachineSummariesResponse{}
{
}

ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse(const ListVirtualMachineSummariesResponse& src) :
    PlayFabMultiplayerListVirtualMachineSummariesResponse{ src },
    m_skipToken{ src.m_skipToken },
    m_virtualMachines{ src.m_virtualMachines }
{
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
    virtualMachines = m_virtualMachines.Empty() ? nullptr : m_virtualMachines.Data();
}

ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse(ListVirtualMachineSummariesResponse&& src) :
    PlayFabMultiplayerListVirtualMachineSummariesResponse{ src },
    m_skipToken{ std::move(src.m_skipToken) },
    m_virtualMachines{ std::move(src.m_virtualMachines) }
{
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
    virtualMachines = m_virtualMachines.Empty() ? nullptr : m_virtualMachines.Data();
}

ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse(const PlayFabMultiplayerListVirtualMachineSummariesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListVirtualMachineSummariesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PageSize", pageSize);
    JsonUtils::ObjectGetMember(input, "SkipToken", m_skipToken, skipToken);
    JsonUtils::ObjectGetMember(input, "VirtualMachines", m_virtualMachines, virtualMachines, virtualMachinesCount);
}

JsonValue ListVirtualMachineSummariesResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerListVirtualMachineSummariesResponse>(*this);
}

RequestMultiplayerServerRequest::RequestMultiplayerServerRequest() :
    PlayFabMultiplayerRequestMultiplayerServerRequest{}
{
}

RequestMultiplayerServerRequest::RequestMultiplayerServerRequest(const RequestMultiplayerServerRequest& src) :
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

RequestMultiplayerServerRequest::RequestMultiplayerServerRequest(RequestMultiplayerServerRequest&& src) :
    PlayFabMultiplayerRequestMultiplayerServerRequest{ src },
    m_buildAliasParams{ std::move(src.m_buildAliasParams) },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_initialPlayers{ std::move(src.m_initialPlayers) },
    m_preferredRegions{ std::move(src.m_preferredRegions) },
    m_sessionCookie{ std::move(src.m_sessionCookie) },
    m_sessionId{ std::move(src.m_sessionId) }
{
    buildAliasParams = m_buildAliasParams ? m_buildAliasParams.operator->() : nullptr;
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    initialPlayers = m_initialPlayers.Empty() ? nullptr : m_initialPlayers.Data();
    preferredRegions = m_preferredRegions.Empty() ? nullptr : m_preferredRegions.Data();
    sessionCookie = m_sessionCookie.empty() ? nullptr : m_sessionCookie.data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
}

RequestMultiplayerServerRequest::RequestMultiplayerServerRequest(const PlayFabMultiplayerRequestMultiplayerServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RequestMultiplayerServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildAliasParams", m_buildAliasParams, buildAliasParams);
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InitialPlayers", m_initialPlayers, initialPlayers, initialPlayersCount);
    JsonUtils::ObjectGetMember(input, "PreferredRegions", m_preferredRegions, preferredRegions, preferredRegionsCount);
    JsonUtils::ObjectGetMember(input, "SessionCookie", m_sessionCookie, sessionCookie);
    JsonUtils::ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
}

JsonValue RequestMultiplayerServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerRequestMultiplayerServerRequest>(*this);
}

RequestMultiplayerServerResponse::RequestMultiplayerServerResponse() :
    PlayFabMultiplayerRequestMultiplayerServerResponse{}
{
}

RequestMultiplayerServerResponse::RequestMultiplayerServerResponse(const RequestMultiplayerServerResponse& src) :
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

RequestMultiplayerServerResponse::RequestMultiplayerServerResponse(RequestMultiplayerServerResponse&& src) :
    PlayFabMultiplayerRequestMultiplayerServerResponse{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_connectedPlayers{ std::move(src.m_connectedPlayers) },
    m_fQDN{ std::move(src.m_fQDN) },
    m_iPV4Address{ std::move(src.m_iPV4Address) },
    m_lastStateTransitionTime{ std::move(src.m_lastStateTransitionTime) },
    m_ports{ std::move(src.m_ports) },
    m_region{ std::move(src.m_region) },
    m_serverId{ std::move(src.m_serverId) },
    m_sessionId{ std::move(src.m_sessionId) },
    m_state{ std::move(src.m_state) },
    m_vmId{ std::move(src.m_vmId) }
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

RequestMultiplayerServerResponse::RequestMultiplayerServerResponse(const PlayFabMultiplayerRequestMultiplayerServerResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RequestMultiplayerServerResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "ConnectedPlayers", m_connectedPlayers, connectedPlayers, connectedPlayersCount);
    JsonUtils::ObjectGetMember(input, "FQDN", m_fQDN, fQDN);
    JsonUtils::ObjectGetMember(input, "IPV4Address", m_iPV4Address, iPV4Address);
    JsonUtils::ObjectGetMember(input, "LastStateTransitionTime", m_lastStateTransitionTime, lastStateTransitionTime, true);
    JsonUtils::ObjectGetMember(input, "Ports", m_ports, ports, portsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "ServerId", m_serverId, serverId);
    JsonUtils::ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
    JsonUtils::ObjectGetMember(input, "State", m_state, state);
    JsonUtils::ObjectGetMember(input, "VmId", m_vmId, vmId);
}

JsonValue RequestMultiplayerServerResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerRequestMultiplayerServerResponse>(*this);
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest() :
    PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest{}
{
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest(const RolloverContainerRegistryCredentialsRequest& src) :
    PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest(RolloverContainerRegistryCredentialsRequest&& src) :
    PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest(const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RolloverContainerRegistryCredentialsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue RolloverContainerRegistryCredentialsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest>(*this);
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse() :
    PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse{}
{
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse(const RolloverContainerRegistryCredentialsResponse& src) :
    PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse{ src },
    m_dnsName{ src.m_dnsName },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse(RolloverContainerRegistryCredentialsResponse&& src) :
    PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse{ src },
    m_dnsName{ std::move(src.m_dnsName) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse(const PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RolloverContainerRegistryCredentialsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DnsName", m_dnsName, dnsName);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue RolloverContainerRegistryCredentialsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse>(*this);
}

size_t RolloverContainerRegistryCredentialsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse) };
    serializedSize += (m_dnsName.size() + 1);
    serializedSize += (m_password.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void RolloverContainerRegistryCredentialsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse);
    memcpy(stringBuffer, m_dnsName.data(), m_dnsName.size() + 1);
    serializedStruct->dnsName = stringBuffer;
    stringBuffer += m_dnsName.size() + 1;
    memcpy(stringBuffer, m_password.data(), m_password.size() + 1);
    serializedStruct->password = stringBuffer;
    stringBuffer += m_password.size() + 1;
    memcpy(stringBuffer, m_username.data(), m_username.size() + 1);
    serializedStruct->username = stringBuffer;
    stringBuffer += m_username.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ShutdownMultiplayerServerRequest::ShutdownMultiplayerServerRequest() :
    PlayFabMultiplayerShutdownMultiplayerServerRequest{}
{
}

ShutdownMultiplayerServerRequest::ShutdownMultiplayerServerRequest(const ShutdownMultiplayerServerRequest& src) :
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

ShutdownMultiplayerServerRequest::ShutdownMultiplayerServerRequest(ShutdownMultiplayerServerRequest&& src) :
    PlayFabMultiplayerShutdownMultiplayerServerRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_region{ std::move(src.m_region) },
    m_sessionId{ std::move(src.m_sessionId) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
}

ShutdownMultiplayerServerRequest::ShutdownMultiplayerServerRequest(const PlayFabMultiplayerShutdownMultiplayerServerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ShutdownMultiplayerServerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Region", m_region, region);
    JsonUtils::ObjectGetMember(input, "SessionId", m_sessionId, sessionId);
}

JsonValue ShutdownMultiplayerServerRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerShutdownMultiplayerServerRequest>(*this);
}

UntagContainerImageRequest::UntagContainerImageRequest() :
    PlayFabMultiplayerUntagContainerImageRequest{}
{
}

UntagContainerImageRequest::UntagContainerImageRequest(const UntagContainerImageRequest& src) :
    PlayFabMultiplayerUntagContainerImageRequest{ src },
    m_customTags{ src.m_customTags },
    m_imageName{ src.m_imageName },
    m_tag{ src.m_tag }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

UntagContainerImageRequest::UntagContainerImageRequest(UntagContainerImageRequest&& src) :
    PlayFabMultiplayerUntagContainerImageRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_imageName{ std::move(src.m_imageName) },
    m_tag{ std::move(src.m_tag) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

UntagContainerImageRequest::UntagContainerImageRequest(const PlayFabMultiplayerUntagContainerImageRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UntagContainerImageRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ImageName", m_imageName, imageName);
    JsonUtils::ObjectGetMember(input, "Tag", m_tag, tag);
}

JsonValue UntagContainerImageRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerUntagContainerImageRequest>(*this);
}

UpdateBuildAliasRequest::UpdateBuildAliasRequest() :
    PlayFabMultiplayerUpdateBuildAliasRequest{}
{
}

UpdateBuildAliasRequest::UpdateBuildAliasRequest(const UpdateBuildAliasRequest& src) :
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

UpdateBuildAliasRequest::UpdateBuildAliasRequest(UpdateBuildAliasRequest&& src) :
    PlayFabMultiplayerUpdateBuildAliasRequest{ src },
    m_aliasId{ std::move(src.m_aliasId) },
    m_aliasName{ std::move(src.m_aliasName) },
    m_buildSelectionCriteria{ std::move(src.m_buildSelectionCriteria) },
    m_customTags{ std::move(src.m_customTags) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildAliasRequest::UpdateBuildAliasRequest(const PlayFabMultiplayerUpdateBuildAliasRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBuildAliasRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
    JsonUtils::ObjectGetMember(input, "AliasName", m_aliasName, aliasName);
    JsonUtils::ObjectGetMember(input, "BuildSelectionCriteria", m_buildSelectionCriteria, buildSelectionCriteria, buildSelectionCriteriaCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UpdateBuildAliasRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildAliasRequest>(*this);
}

UpdateBuildNameRequest::UpdateBuildNameRequest() :
    PlayFabMultiplayerUpdateBuildNameRequest{}
{
}

UpdateBuildNameRequest::UpdateBuildNameRequest(const UpdateBuildNameRequest& src) :
    PlayFabMultiplayerUpdateBuildNameRequest{ src },
    m_buildId{ src.m_buildId },
    m_buildName{ src.m_buildName },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildName = m_buildName.empty() ? nullptr : m_buildName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildNameRequest::UpdateBuildNameRequest(UpdateBuildNameRequest&& src) :
    PlayFabMultiplayerUpdateBuildNameRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_buildName{ std::move(src.m_buildName) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildName = m_buildName.empty() ? nullptr : m_buildName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildNameRequest::UpdateBuildNameRequest(const PlayFabMultiplayerUpdateBuildNameRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBuildNameRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildName", m_buildName, buildName);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UpdateBuildNameRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildNameRequest>(*this);
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest() :
    PlayFabMultiplayerUpdateBuildRegionRequest{}
{
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest(const UpdateBuildRegionRequest& src) :
    PlayFabMultiplayerUpdateBuildRegionRequest{ src },
    m_buildId{ src.m_buildId },
    m_buildRegion{ src.m_buildRegion },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegion = (PlayFabMultiplayerBuildRegionParams const*)&m_buildRegion;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest(UpdateBuildRegionRequest&& src) :
    PlayFabMultiplayerUpdateBuildRegionRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_buildRegion{ std::move(src.m_buildRegion) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegion = (PlayFabMultiplayerBuildRegionParams const*)&m_buildRegion;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest(const PlayFabMultiplayerUpdateBuildRegionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBuildRegionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildRegion", m_buildRegion, buildRegion);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UpdateBuildRegionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildRegionRequest>(*this);
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest() :
    PlayFabMultiplayerUpdateBuildRegionsRequest{}
{
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest(const UpdateBuildRegionsRequest& src) :
    PlayFabMultiplayerUpdateBuildRegionsRequest{ src },
    m_buildId{ src.m_buildId },
    m_buildRegions{ src.m_buildRegions },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegions = m_buildRegions.Empty() ? nullptr : m_buildRegions.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest(UpdateBuildRegionsRequest&& src) :
    PlayFabMultiplayerUpdateBuildRegionsRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_buildRegions{ std::move(src.m_buildRegions) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegions = m_buildRegions.Empty() ? nullptr : m_buildRegions.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest(const PlayFabMultiplayerUpdateBuildRegionsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateBuildRegionsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildId", m_buildId, buildId);
    JsonUtils::ObjectGetMember(input, "BuildRegions", m_buildRegions, buildRegions, buildRegionsCount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue UpdateBuildRegionsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerUpdateBuildRegionsRequest>(*this);
}

UploadCertificateRequest::UploadCertificateRequest() :
    PlayFabMultiplayerUploadCertificateRequest{}
{
}

UploadCertificateRequest::UploadCertificateRequest(const UploadCertificateRequest& src) :
    PlayFabMultiplayerUploadCertificateRequest{ src },
    m_customTags{ src.m_customTags },
    m_gameCertificate{ src.m_gameCertificate }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameCertificate = (PlayFabMultiplayerCertificate const*)&m_gameCertificate;
}

UploadCertificateRequest::UploadCertificateRequest(UploadCertificateRequest&& src) :
    PlayFabMultiplayerUploadCertificateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_gameCertificate{ std::move(src.m_gameCertificate) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameCertificate = (PlayFabMultiplayerCertificate const*)&m_gameCertificate;
}

UploadCertificateRequest::UploadCertificateRequest(const PlayFabMultiplayerUploadCertificateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UploadCertificateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "GameCertificate", m_gameCertificate, gameCertificate);
}

JsonValue UploadCertificateRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabMultiplayerUploadCertificateRequest>(*this);
}

} // namespace MultiplayerModels

namespace JsonUtils
{
// Serialization methods for public models

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
inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetDownloadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetDownloadUrlResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AssetDownloadUrl", input.assetDownloadUrl);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
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

} // namespace JsonUtils

} // namespace PlayFab
