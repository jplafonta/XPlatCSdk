#include "stdafx.h"
#include "MultiplayerServerDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace MultiplayerServerModels
{

BuildSelectionCriterion::BuildSelectionCriterion() :
    PFMultiplayerServerBuildSelectionCriterion{}
{
}

BuildSelectionCriterion::BuildSelectionCriterion(const BuildSelectionCriterion& src) :
    PFMultiplayerServerBuildSelectionCriterion{ src },
    m_buildWeightDistribution{ src.m_buildWeightDistribution }
{
    buildWeightDistribution = m_buildWeightDistribution.Empty() ? nullptr : m_buildWeightDistribution.Data();
}

BuildSelectionCriterion::BuildSelectionCriterion(BuildSelectionCriterion&& src) :
    PFMultiplayerServerBuildSelectionCriterion{ src },
    m_buildWeightDistribution{ std::move(src.m_buildWeightDistribution) }
{
    buildWeightDistribution = m_buildWeightDistribution.Empty() ? nullptr : m_buildWeightDistribution.Data();
}

BuildSelectionCriterion::BuildSelectionCriterion(const PFMultiplayerServerBuildSelectionCriterion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildSelectionCriterion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "BuildWeightDistribution", m_buildWeightDistribution, buildWeightDistribution, buildWeightDistributionCount);
}

JsonValue BuildSelectionCriterion::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerBuildSelectionCriterion>(*this);
}

CreateBuildAliasRequest::CreateBuildAliasRequest() :
    PFMultiplayerServerCreateBuildAliasRequest{}
{
}

CreateBuildAliasRequest::CreateBuildAliasRequest(const CreateBuildAliasRequest& src) :
    PFMultiplayerServerCreateBuildAliasRequest{ src },
    m_aliasName{ src.m_aliasName },
    m_buildSelectionCriteria{ src.m_buildSelectionCriteria },
    m_customTags{ src.m_customTags }
{
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

CreateBuildAliasRequest::CreateBuildAliasRequest(CreateBuildAliasRequest&& src) :
    PFMultiplayerServerCreateBuildAliasRequest{ src },
    m_aliasName{ std::move(src.m_aliasName) },
    m_buildSelectionCriteria{ std::move(src.m_buildSelectionCriteria) },
    m_customTags{ std::move(src.m_customTags) }
{
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

CreateBuildAliasRequest::CreateBuildAliasRequest(const PFMultiplayerServerCreateBuildAliasRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateBuildAliasRequest>(*this);
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse() :
    PFMultiplayerServerBuildAliasDetailsResponse{}
{
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse(const BuildAliasDetailsResponse& src) :
    PFMultiplayerServerBuildAliasDetailsResponse{ src },
    m_aliasId{ src.m_aliasId },
    m_aliasName{ src.m_aliasName },
    m_buildSelectionCriteria{ src.m_buildSelectionCriteria }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse(BuildAliasDetailsResponse&& src) :
    PFMultiplayerServerBuildAliasDetailsResponse{ src },
    m_aliasId{ std::move(src.m_aliasId) },
    m_aliasName{ std::move(src.m_aliasName) },
    m_buildSelectionCriteria{ std::move(src.m_buildSelectionCriteria) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    aliasName = m_aliasName.empty() ? nullptr : m_aliasName.data();
    buildSelectionCriteria = m_buildSelectionCriteria.Empty() ? nullptr : m_buildSelectionCriteria.Data();
}

BuildAliasDetailsResponse::BuildAliasDetailsResponse(const PFMultiplayerServerBuildAliasDetailsResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerBuildAliasDetailsResponse>(*this);
}

ContainerImageReference::ContainerImageReference() :
    PFMultiplayerServerContainerImageReference{}
{
}

ContainerImageReference::ContainerImageReference(const ContainerImageReference& src) :
    PFMultiplayerServerContainerImageReference{ src },
    m_imageName{ src.m_imageName },
    m_tag{ src.m_tag }
{
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

ContainerImageReference::ContainerImageReference(ContainerImageReference&& src) :
    PFMultiplayerServerContainerImageReference{ src },
    m_imageName{ std::move(src.m_imageName) },
    m_tag{ std::move(src.m_tag) }
{
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

ContainerImageReference::ContainerImageReference(const PFMultiplayerServerContainerImageReference& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerContainerImageReference>(*this);
}

size_t ContainerImageReference::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerContainerImageReference) };
    serializedSize += (m_imageName.size() + 1);
    serializedSize += (m_tag.size() + 1);
    return serializedSize;
}

void ContainerImageReference::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerContainerImageReference{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerContainerImageReference);
    memcpy(stringBuffer, m_imageName.data(), m_imageName.size() + 1);
    serializedStruct->imageName = stringBuffer;
    stringBuffer += m_imageName.size() + 1;
    memcpy(stringBuffer, m_tag.data(), m_tag.size() + 1);
    serializedStruct->tag = stringBuffer;
    stringBuffer += m_tag.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AssetReferenceParams::AssetReferenceParams() :
    PFMultiplayerServerAssetReferenceParams{}
{
}

AssetReferenceParams::AssetReferenceParams(const AssetReferenceParams& src) :
    PFMultiplayerServerAssetReferenceParams{ src },
    m_fileName{ src.m_fileName },
    m_mountPath{ src.m_mountPath }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReferenceParams::AssetReferenceParams(AssetReferenceParams&& src) :
    PFMultiplayerServerAssetReferenceParams{ src },
    m_fileName{ std::move(src.m_fileName) },
    m_mountPath{ std::move(src.m_mountPath) }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReferenceParams::AssetReferenceParams(const PFMultiplayerServerAssetReferenceParams& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerAssetReferenceParams>(*this);
}

size_t AssetReferenceParams::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerAssetReferenceParams) };
    serializedSize += (m_fileName.size() + 1);
    serializedSize += (m_mountPath.size() + 1);
    return serializedSize;
}

void AssetReferenceParams::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerAssetReferenceParams{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerAssetReferenceParams);
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    memcpy(stringBuffer, m_mountPath.data(), m_mountPath.size() + 1);
    serializedStruct->mountPath = stringBuffer;
    stringBuffer += m_mountPath.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GameCertificateReferenceParams::GameCertificateReferenceParams() :
    PFMultiplayerServerGameCertificateReferenceParams{}
{
}

GameCertificateReferenceParams::GameCertificateReferenceParams(const GameCertificateReferenceParams& src) :
    PFMultiplayerServerGameCertificateReferenceParams{ src },
    m_gsdkAlias{ src.m_gsdkAlias },
    m_name{ src.m_name }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReferenceParams::GameCertificateReferenceParams(GameCertificateReferenceParams&& src) :
    PFMultiplayerServerGameCertificateReferenceParams{ src },
    m_gsdkAlias{ std::move(src.m_gsdkAlias) },
    m_name{ std::move(src.m_name) }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReferenceParams::GameCertificateReferenceParams(const PFMultiplayerServerGameCertificateReferenceParams& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGameCertificateReferenceParams>(*this);
}

size_t GameCertificateReferenceParams::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerGameCertificateReferenceParams) };
    serializedSize += (m_gsdkAlias.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GameCertificateReferenceParams::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerGameCertificateReferenceParams{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerGameCertificateReferenceParams);
    memcpy(stringBuffer, m_gsdkAlias.data(), m_gsdkAlias.size() + 1);
    serializedStruct->gsdkAlias = stringBuffer;
    stringBuffer += m_gsdkAlias.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LinuxInstrumentationConfiguration::LinuxInstrumentationConfiguration() :
    PFMultiplayerServerLinuxInstrumentationConfiguration{}
{
}


LinuxInstrumentationConfiguration::LinuxInstrumentationConfiguration(const PFMultiplayerServerLinuxInstrumentationConfiguration& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LinuxInstrumentationConfiguration::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsEnabled", isEnabled);
}

JsonValue LinuxInstrumentationConfiguration::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerLinuxInstrumentationConfiguration>(*this);
}

size_t LinuxInstrumentationConfiguration::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerLinuxInstrumentationConfiguration) };
    return serializedSize;
}

void LinuxInstrumentationConfiguration::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerLinuxInstrumentationConfiguration{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerLinuxInstrumentationConfiguration);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

DynamicStandbyThreshold::DynamicStandbyThreshold() :
    PFMultiplayerServerDynamicStandbyThreshold{}
{
}


DynamicStandbyThreshold::DynamicStandbyThreshold(const PFMultiplayerServerDynamicStandbyThreshold& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDynamicStandbyThreshold>(*this);
}

size_t DynamicStandbyThreshold::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerDynamicStandbyThreshold) };
    return serializedSize;
}

void DynamicStandbyThreshold::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerDynamicStandbyThreshold{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerDynamicStandbyThreshold);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

DynamicStandbySettings::DynamicStandbySettings() :
    PFMultiplayerServerDynamicStandbySettings{}
{
}

DynamicStandbySettings::DynamicStandbySettings(const DynamicStandbySettings& src) :
    PFMultiplayerServerDynamicStandbySettings{ src },
    m_dynamicFloorMultiplierThresholds{ src.m_dynamicFloorMultiplierThresholds },
    m_rampDownSeconds{ src.m_rampDownSeconds }
{
    dynamicFloorMultiplierThresholds = m_dynamicFloorMultiplierThresholds.Empty() ? nullptr : m_dynamicFloorMultiplierThresholds.Data();
    rampDownSeconds = m_rampDownSeconds ? m_rampDownSeconds.operator->() : nullptr;
}

DynamicStandbySettings::DynamicStandbySettings(DynamicStandbySettings&& src) :
    PFMultiplayerServerDynamicStandbySettings{ src },
    m_dynamicFloorMultiplierThresholds{ std::move(src.m_dynamicFloorMultiplierThresholds) },
    m_rampDownSeconds{ std::move(src.m_rampDownSeconds) }
{
    dynamicFloorMultiplierThresholds = m_dynamicFloorMultiplierThresholds.Empty() ? nullptr : m_dynamicFloorMultiplierThresholds.Data();
    rampDownSeconds = m_rampDownSeconds ? m_rampDownSeconds.operator->() : nullptr;
}

DynamicStandbySettings::DynamicStandbySettings(const PFMultiplayerServerDynamicStandbySettings& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDynamicStandbySettings>(*this);
}

Schedule::Schedule() :
    PFMultiplayerServerSchedule{}
{
}

Schedule::Schedule(const Schedule& src) :
    PFMultiplayerServerSchedule{ src },
    m_description{ src.m_description }
{
    description = m_description.empty() ? nullptr : m_description.data();
}

Schedule::Schedule(Schedule&& src) :
    PFMultiplayerServerSchedule{ src },
    m_description{ std::move(src.m_description) }
{
    description = m_description.empty() ? nullptr : m_description.data();
}

Schedule::Schedule(const PFMultiplayerServerSchedule& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerSchedule>(*this);
}

size_t Schedule::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerSchedule) };
    serializedSize += (m_description.size() + 1);
    return serializedSize;
}

void Schedule::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerSchedule{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerSchedule);
    memcpy(stringBuffer, m_description.data(), m_description.size() + 1);
    serializedStruct->description = stringBuffer;
    stringBuffer += m_description.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ScheduledStandbySettings::ScheduledStandbySettings() :
    PFMultiplayerServerScheduledStandbySettings{}
{
}

ScheduledStandbySettings::ScheduledStandbySettings(const ScheduledStandbySettings& src) :
    PFMultiplayerServerScheduledStandbySettings{ src },
    m_scheduleList{ src.m_scheduleList }
{
    scheduleList = m_scheduleList.Empty() ? nullptr : m_scheduleList.Data();
}

ScheduledStandbySettings::ScheduledStandbySettings(ScheduledStandbySettings&& src) :
    PFMultiplayerServerScheduledStandbySettings{ src },
    m_scheduleList{ std::move(src.m_scheduleList) }
{
    scheduleList = m_scheduleList.Empty() ? nullptr : m_scheduleList.Data();
}

ScheduledStandbySettings::ScheduledStandbySettings(const PFMultiplayerServerScheduledStandbySettings& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerScheduledStandbySettings>(*this);
}

BuildRegionParams::BuildRegionParams() :
    PFMultiplayerServerBuildRegionParams{}
{
}

BuildRegionParams::BuildRegionParams(const BuildRegionParams& src) :
    PFMultiplayerServerBuildRegionParams{ src },
    m_dynamicStandbySettings{ src.m_dynamicStandbySettings },
    m_region{ src.m_region },
    m_scheduledStandbySettings{ src.m_scheduledStandbySettings }
{
    dynamicStandbySettings = m_dynamicStandbySettings ? m_dynamicStandbySettings.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    scheduledStandbySettings = m_scheduledStandbySettings ? m_scheduledStandbySettings.operator->() : nullptr;
}

BuildRegionParams::BuildRegionParams(BuildRegionParams&& src) :
    PFMultiplayerServerBuildRegionParams{ src },
    m_dynamicStandbySettings{ std::move(src.m_dynamicStandbySettings) },
    m_region{ std::move(src.m_region) },
    m_scheduledStandbySettings{ std::move(src.m_scheduledStandbySettings) }
{
    dynamicStandbySettings = m_dynamicStandbySettings ? m_dynamicStandbySettings.operator->() : nullptr;
    region = m_region.empty() ? nullptr : m_region.data();
    scheduledStandbySettings = m_scheduledStandbySettings ? m_scheduledStandbySettings.operator->() : nullptr;
}

BuildRegionParams::BuildRegionParams(const PFMultiplayerServerBuildRegionParams& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerBuildRegionParams>(*this);
}

CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest() :
    PFMultiplayerServerCreateBuildWithCustomContainerRequest{}
{
}

CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest(const CreateBuildWithCustomContainerRequest& src) :
    PFMultiplayerServerCreateBuildWithCustomContainerRequest{ src },
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
    PFMultiplayerServerCreateBuildWithCustomContainerRequest{ src },
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

CreateBuildWithCustomContainerRequest::CreateBuildWithCustomContainerRequest(const PFMultiplayerServerCreateBuildWithCustomContainerRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateBuildWithCustomContainerRequest>(*this);
}

AssetReference::AssetReference() :
    PFMultiplayerServerAssetReference{}
{
}

AssetReference::AssetReference(const AssetReference& src) :
    PFMultiplayerServerAssetReference{ src },
    m_fileName{ src.m_fileName },
    m_mountPath{ src.m_mountPath }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReference::AssetReference(AssetReference&& src) :
    PFMultiplayerServerAssetReference{ src },
    m_fileName{ std::move(src.m_fileName) },
    m_mountPath{ std::move(src.m_mountPath) }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    mountPath = m_mountPath.empty() ? nullptr : m_mountPath.data();
}

AssetReference::AssetReference(const PFMultiplayerServerAssetReference& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerAssetReference>(*this);
}

size_t AssetReference::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerAssetReference) };
    serializedSize += (m_fileName.size() + 1);
    serializedSize += (m_mountPath.size() + 1);
    return serializedSize;
}

void AssetReference::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerAssetReference{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerAssetReference);
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    memcpy(stringBuffer, m_mountPath.data(), m_mountPath.size() + 1);
    serializedStruct->mountPath = stringBuffer;
    stringBuffer += m_mountPath.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GameCertificateReference::GameCertificateReference() :
    PFMultiplayerServerGameCertificateReference{}
{
}

GameCertificateReference::GameCertificateReference(const GameCertificateReference& src) :
    PFMultiplayerServerGameCertificateReference{ src },
    m_gsdkAlias{ src.m_gsdkAlias },
    m_name{ src.m_name }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReference::GameCertificateReference(GameCertificateReference&& src) :
    PFMultiplayerServerGameCertificateReference{ src },
    m_gsdkAlias{ std::move(src.m_gsdkAlias) },
    m_name{ std::move(src.m_name) }
{
    gsdkAlias = m_gsdkAlias.empty() ? nullptr : m_gsdkAlias.data();
    name = m_name.empty() ? nullptr : m_name.data();
}

GameCertificateReference::GameCertificateReference(const PFMultiplayerServerGameCertificateReference& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGameCertificateReference>(*this);
}

size_t GameCertificateReference::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerGameCertificateReference) };
    serializedSize += (m_gsdkAlias.size() + 1);
    serializedSize += (m_name.size() + 1);
    return serializedSize;
}

void GameCertificateReference::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerGameCertificateReference{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerGameCertificateReference);
    memcpy(stringBuffer, m_gsdkAlias.data(), m_gsdkAlias.size() + 1);
    serializedStruct->gsdkAlias = stringBuffer;
    stringBuffer += m_gsdkAlias.size() + 1;
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CurrentServerStats::CurrentServerStats() :
    PFMultiplayerServerCurrentServerStats{}
{
}


CurrentServerStats::CurrentServerStats(const PFMultiplayerServerCurrentServerStats& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCurrentServerStats>(*this);
}

size_t CurrentServerStats::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerCurrentServerStats) };
    return serializedSize;
}

void CurrentServerStats::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerCurrentServerStats{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerCurrentServerStats);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

BuildRegion::BuildRegion() :
    PFMultiplayerServerBuildRegion{}
{
}

BuildRegion::BuildRegion(const BuildRegion& src) :
    PFMultiplayerServerBuildRegion{ src },
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
    PFMultiplayerServerBuildRegion{ src },
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

BuildRegion::BuildRegion(const PFMultiplayerServerBuildRegion& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerBuildRegion>(*this);
}

CreateBuildWithCustomContainerResponse::CreateBuildWithCustomContainerResponse() :
    PFMultiplayerServerCreateBuildWithCustomContainerResponse{}
{
}

CreateBuildWithCustomContainerResponse::CreateBuildWithCustomContainerResponse(const CreateBuildWithCustomContainerResponse& src) :
    PFMultiplayerServerCreateBuildWithCustomContainerResponse{ src },
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
    PFMultiplayerServerCreateBuildWithCustomContainerResponse{ src },
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

CreateBuildWithCustomContainerResponse::CreateBuildWithCustomContainerResponse(const PFMultiplayerServerCreateBuildWithCustomContainerResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateBuildWithCustomContainerResponse>(*this);
}

InstrumentationConfiguration::InstrumentationConfiguration() :
    PFMultiplayerServerInstrumentationConfiguration{}
{
}

InstrumentationConfiguration::InstrumentationConfiguration(const InstrumentationConfiguration& src) :
    PFMultiplayerServerInstrumentationConfiguration{ src },
    m_isEnabled{ src.m_isEnabled },
    m_processesToMonitor{ src.m_processesToMonitor }
{
    isEnabled = m_isEnabled ? m_isEnabled.operator->() : nullptr;
    processesToMonitor = m_processesToMonitor.Empty() ? nullptr : m_processesToMonitor.Data();
}

InstrumentationConfiguration::InstrumentationConfiguration(InstrumentationConfiguration&& src) :
    PFMultiplayerServerInstrumentationConfiguration{ src },
    m_isEnabled{ std::move(src.m_isEnabled) },
    m_processesToMonitor{ std::move(src.m_processesToMonitor) }
{
    isEnabled = m_isEnabled ? m_isEnabled.operator->() : nullptr;
    processesToMonitor = m_processesToMonitor.Empty() ? nullptr : m_processesToMonitor.Data();
}

InstrumentationConfiguration::InstrumentationConfiguration(const PFMultiplayerServerInstrumentationConfiguration& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InstrumentationConfiguration::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsEnabled", m_isEnabled, isEnabled);
    JsonUtils::ObjectGetMember(input, "ProcessesToMonitor", m_processesToMonitor, processesToMonitor, processesToMonitorCount);
}

JsonValue InstrumentationConfiguration::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerInstrumentationConfiguration>(*this);
}

CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest() :
    PFMultiplayerServerCreateBuildWithManagedContainerRequest{}
{
}

CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest(const CreateBuildWithManagedContainerRequest& src) :
    PFMultiplayerServerCreateBuildWithManagedContainerRequest{ src },
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
    PFMultiplayerServerCreateBuildWithManagedContainerRequest{ src },
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

CreateBuildWithManagedContainerRequest::CreateBuildWithManagedContainerRequest(const PFMultiplayerServerCreateBuildWithManagedContainerRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateBuildWithManagedContainerRequest>(*this);
}

CreateBuildWithManagedContainerResponse::CreateBuildWithManagedContainerResponse() :
    PFMultiplayerServerCreateBuildWithManagedContainerResponse{}
{
}

CreateBuildWithManagedContainerResponse::CreateBuildWithManagedContainerResponse(const CreateBuildWithManagedContainerResponse& src) :
    PFMultiplayerServerCreateBuildWithManagedContainerResponse{ src },
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
    PFMultiplayerServerCreateBuildWithManagedContainerResponse{ src },
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

CreateBuildWithManagedContainerResponse::CreateBuildWithManagedContainerResponse(const PFMultiplayerServerCreateBuildWithManagedContainerResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateBuildWithManagedContainerResponse>(*this);
}

CreateBuildWithProcessBasedServerRequest::CreateBuildWithProcessBasedServerRequest() :
    PFMultiplayerServerCreateBuildWithProcessBasedServerRequest{}
{
}

CreateBuildWithProcessBasedServerRequest::CreateBuildWithProcessBasedServerRequest(const CreateBuildWithProcessBasedServerRequest& src) :
    PFMultiplayerServerCreateBuildWithProcessBasedServerRequest{ src },
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
    PFMultiplayerServerCreateBuildWithProcessBasedServerRequest{ src },
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

CreateBuildWithProcessBasedServerRequest::CreateBuildWithProcessBasedServerRequest(const PFMultiplayerServerCreateBuildWithProcessBasedServerRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateBuildWithProcessBasedServerRequest>(*this);
}

CreateBuildWithProcessBasedServerResponse::CreateBuildWithProcessBasedServerResponse() :
    PFMultiplayerServerCreateBuildWithProcessBasedServerResponse{}
{
}

CreateBuildWithProcessBasedServerResponse::CreateBuildWithProcessBasedServerResponse(const CreateBuildWithProcessBasedServerResponse& src) :
    PFMultiplayerServerCreateBuildWithProcessBasedServerResponse{ src },
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
    PFMultiplayerServerCreateBuildWithProcessBasedServerResponse{ src },
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

CreateBuildWithProcessBasedServerResponse::CreateBuildWithProcessBasedServerResponse(const PFMultiplayerServerCreateBuildWithProcessBasedServerResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateBuildWithProcessBasedServerResponse>(*this);
}

CreateRemoteUserRequest::CreateRemoteUserRequest() :
    PFMultiplayerServerCreateRemoteUserRequest{}
{
}

CreateRemoteUserRequest::CreateRemoteUserRequest(const CreateRemoteUserRequest& src) :
    PFMultiplayerServerCreateRemoteUserRequest{ src },
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
    PFMultiplayerServerCreateRemoteUserRequest{ src },
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

CreateRemoteUserRequest::CreateRemoteUserRequest(const PFMultiplayerServerCreateRemoteUserRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateRemoteUserRequest>(*this);
}

CreateRemoteUserResponse::CreateRemoteUserResponse() :
    PFMultiplayerServerCreateRemoteUserResponse{}
{
}

CreateRemoteUserResponse::CreateRemoteUserResponse(const CreateRemoteUserResponse& src) :
    PFMultiplayerServerCreateRemoteUserResponse{ src },
    m_expirationTime{ src.m_expirationTime },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    expirationTime = m_expirationTime ? m_expirationTime.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

CreateRemoteUserResponse::CreateRemoteUserResponse(CreateRemoteUserResponse&& src) :
    PFMultiplayerServerCreateRemoteUserResponse{ src },
    m_expirationTime{ std::move(src.m_expirationTime) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    expirationTime = m_expirationTime ? m_expirationTime.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

CreateRemoteUserResponse::CreateRemoteUserResponse(const PFMultiplayerServerCreateRemoteUserResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateRemoteUserResponse>(*this);
}

CoreCapacityChange::CoreCapacityChange() :
    PFMultiplayerServerCoreCapacityChange{}
{
}

CoreCapacityChange::CoreCapacityChange(const CoreCapacityChange& src) :
    PFMultiplayerServerCoreCapacityChange{ src },
    m_region{ src.m_region }
{
    region = m_region.empty() ? nullptr : m_region.data();
}

CoreCapacityChange::CoreCapacityChange(CoreCapacityChange&& src) :
    PFMultiplayerServerCoreCapacityChange{ src },
    m_region{ std::move(src.m_region) }
{
    region = m_region.empty() ? nullptr : m_region.data();
}

CoreCapacityChange::CoreCapacityChange(const PFMultiplayerServerCoreCapacityChange& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCoreCapacityChange>(*this);
}

size_t CoreCapacityChange::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerCoreCapacityChange) };
    serializedSize += (m_region.size() + 1);
    return serializedSize;
}

void CoreCapacityChange::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerCoreCapacityChange{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerCoreCapacityChange);
    memcpy(stringBuffer, m_region.data(), m_region.size() + 1);
    serializedStruct->region = stringBuffer;
    stringBuffer += m_region.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreateTitleMultiplayerServersQuotaChangeRequest::CreateTitleMultiplayerServersQuotaChangeRequest() :
    PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest{}
{
}

CreateTitleMultiplayerServersQuotaChangeRequest::CreateTitleMultiplayerServersQuotaChangeRequest(const CreateTitleMultiplayerServersQuotaChangeRequest& src) :
    PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest{ src },
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
    PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest{ src },
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

CreateTitleMultiplayerServersQuotaChangeRequest::CreateTitleMultiplayerServersQuotaChangeRequest(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest>(*this);
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse() :
    PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse{}
{
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse(const CreateTitleMultiplayerServersQuotaChangeResponse& src) :
    PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse{ src },
    m_requestId{ src.m_requestId }
{
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse(CreateTitleMultiplayerServersQuotaChangeResponse&& src) :
    PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse{ src },
    m_requestId{ std::move(src.m_requestId) }
{
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

CreateTitleMultiplayerServersQuotaChangeResponse::CreateTitleMultiplayerServersQuotaChangeResponse(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse>(*this);
}

size_t CreateTitleMultiplayerServersQuotaChangeResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse) };
    serializedSize += (m_requestId.size() + 1);
    return serializedSize;
}

void CreateTitleMultiplayerServersQuotaChangeResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse);
    memcpy(stringBuffer, m_requestId.data(), m_requestId.size() + 1);
    serializedStruct->requestId = stringBuffer;
    stringBuffer += m_requestId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteAssetRequest::DeleteAssetRequest() :
    PFMultiplayerServerDeleteAssetRequest{}
{
}

DeleteAssetRequest::DeleteAssetRequest(const DeleteAssetRequest& src) :
    PFMultiplayerServerDeleteAssetRequest{ src },
    m_customTags{ src.m_customTags },
    m_fileName{ src.m_fileName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

DeleteAssetRequest::DeleteAssetRequest(DeleteAssetRequest&& src) :
    PFMultiplayerServerDeleteAssetRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_fileName{ std::move(src.m_fileName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

DeleteAssetRequest::DeleteAssetRequest(const PFMultiplayerServerDeleteAssetRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDeleteAssetRequest>(*this);
}

DeleteBuildRequest::DeleteBuildRequest() :
    PFMultiplayerServerDeleteBuildRequest{}
{
}

DeleteBuildRequest::DeleteBuildRequest(const DeleteBuildRequest& src) :
    PFMultiplayerServerDeleteBuildRequest{ src },
    m_buildId{ src.m_buildId },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildRequest::DeleteBuildRequest(DeleteBuildRequest&& src) :
    PFMultiplayerServerDeleteBuildRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildRequest::DeleteBuildRequest(const PFMultiplayerServerDeleteBuildRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDeleteBuildRequest>(*this);
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest() :
    PFMultiplayerServerDeleteBuildAliasRequest{}
{
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest(const DeleteBuildAliasRequest& src) :
    PFMultiplayerServerDeleteBuildAliasRequest{ src },
    m_aliasId{ src.m_aliasId },
    m_customTags{ src.m_customTags }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest(DeleteBuildAliasRequest&& src) :
    PFMultiplayerServerDeleteBuildAliasRequest{ src },
    m_aliasId{ std::move(src.m_aliasId) },
    m_customTags{ std::move(src.m_customTags) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

DeleteBuildAliasRequest::DeleteBuildAliasRequest(const PFMultiplayerServerDeleteBuildAliasRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDeleteBuildAliasRequest>(*this);
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest() :
    PFMultiplayerServerDeleteBuildRegionRequest{}
{
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest(const DeleteBuildRegionRequest& src) :
    PFMultiplayerServerDeleteBuildRegionRequest{ src },
    m_buildId{ src.m_buildId },
    m_customTags{ src.m_customTags },
    m_region{ src.m_region }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest(DeleteBuildRegionRequest&& src) :
    PFMultiplayerServerDeleteBuildRegionRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) },
    m_region{ std::move(src.m_region) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    region = m_region.empty() ? nullptr : m_region.data();
}

DeleteBuildRegionRequest::DeleteBuildRegionRequest(const PFMultiplayerServerDeleteBuildRegionRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDeleteBuildRegionRequest>(*this);
}

DeleteCertificateRequest::DeleteCertificateRequest() :
    PFMultiplayerServerDeleteCertificateRequest{}
{
}

DeleteCertificateRequest::DeleteCertificateRequest(const DeleteCertificateRequest& src) :
    PFMultiplayerServerDeleteCertificateRequest{ src },
    m_customTags{ src.m_customTags },
    m_name{ src.m_name }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

DeleteCertificateRequest::DeleteCertificateRequest(DeleteCertificateRequest&& src) :
    PFMultiplayerServerDeleteCertificateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_name{ std::move(src.m_name) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    name = m_name.empty() ? nullptr : m_name.data();
}

DeleteCertificateRequest::DeleteCertificateRequest(const PFMultiplayerServerDeleteCertificateRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDeleteCertificateRequest>(*this);
}

DeleteContainerImageRequest::DeleteContainerImageRequest() :
    PFMultiplayerServerDeleteContainerImageRequest{}
{
}

DeleteContainerImageRequest::DeleteContainerImageRequest(const DeleteContainerImageRequest& src) :
    PFMultiplayerServerDeleteContainerImageRequest{ src },
    m_customTags{ src.m_customTags },
    m_imageName{ src.m_imageName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

DeleteContainerImageRequest::DeleteContainerImageRequest(DeleteContainerImageRequest&& src) :
    PFMultiplayerServerDeleteContainerImageRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_imageName{ std::move(src.m_imageName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

DeleteContainerImageRequest::DeleteContainerImageRequest(const PFMultiplayerServerDeleteContainerImageRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDeleteContainerImageRequest>(*this);
}

DeleteRemoteUserRequest::DeleteRemoteUserRequest() :
    PFMultiplayerServerDeleteRemoteUserRequest{}
{
}

DeleteRemoteUserRequest::DeleteRemoteUserRequest(const DeleteRemoteUserRequest& src) :
    PFMultiplayerServerDeleteRemoteUserRequest{ src },
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
    PFMultiplayerServerDeleteRemoteUserRequest{ src },
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

DeleteRemoteUserRequest::DeleteRemoteUserRequest(const PFMultiplayerServerDeleteRemoteUserRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerDeleteRemoteUserRequest>(*this);
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest() :
    PFMultiplayerServerEnableMultiplayerServersForTitleRequest{}
{
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest(const EnableMultiplayerServersForTitleRequest& src) :
    PFMultiplayerServerEnableMultiplayerServersForTitleRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest(EnableMultiplayerServersForTitleRequest&& src) :
    PFMultiplayerServerEnableMultiplayerServersForTitleRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

EnableMultiplayerServersForTitleRequest::EnableMultiplayerServersForTitleRequest(const PFMultiplayerServerEnableMultiplayerServersForTitleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EnableMultiplayerServersForTitleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue EnableMultiplayerServersForTitleRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerEnableMultiplayerServersForTitleRequest>(*this);
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse() :
    PFMultiplayerServerEnableMultiplayerServersForTitleResponse{}
{
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse(const EnableMultiplayerServersForTitleResponse& src) :
    PFMultiplayerServerEnableMultiplayerServersForTitleResponse{ src },
    m_status{ src.m_status }
{
    status = m_status ? m_status.operator->() : nullptr;
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse(EnableMultiplayerServersForTitleResponse&& src) :
    PFMultiplayerServerEnableMultiplayerServersForTitleResponse{ src },
    m_status{ std::move(src.m_status) }
{
    status = m_status ? m_status.operator->() : nullptr;
}

EnableMultiplayerServersForTitleResponse::EnableMultiplayerServersForTitleResponse(const PFMultiplayerServerEnableMultiplayerServersForTitleResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EnableMultiplayerServersForTitleResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
}

JsonValue EnableMultiplayerServersForTitleResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerEnableMultiplayerServersForTitleResponse>(*this);
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest() :
    PFMultiplayerServerGetAssetDownloadUrlRequest{}
{
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest(const GetAssetDownloadUrlRequest& src) :
    PFMultiplayerServerGetAssetDownloadUrlRequest{ src },
    m_customTags{ src.m_customTags },
    m_fileName{ src.m_fileName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest(GetAssetDownloadUrlRequest&& src) :
    PFMultiplayerServerGetAssetDownloadUrlRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_fileName{ std::move(src.m_fileName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlRequest::GetAssetDownloadUrlRequest(const PFMultiplayerServerGetAssetDownloadUrlRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetAssetDownloadUrlRequest>(*this);
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse() :
    PFMultiplayerServerGetAssetDownloadUrlResponse{}
{
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse(const GetAssetDownloadUrlResponse& src) :
    PFMultiplayerServerGetAssetDownloadUrlResponse{ src },
    m_assetDownloadUrl{ src.m_assetDownloadUrl },
    m_fileName{ src.m_fileName }
{
    assetDownloadUrl = m_assetDownloadUrl.empty() ? nullptr : m_assetDownloadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse(GetAssetDownloadUrlResponse&& src) :
    PFMultiplayerServerGetAssetDownloadUrlResponse{ src },
    m_assetDownloadUrl{ std::move(src.m_assetDownloadUrl) },
    m_fileName{ std::move(src.m_fileName) }
{
    assetDownloadUrl = m_assetDownloadUrl.empty() ? nullptr : m_assetDownloadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetDownloadUrlResponse::GetAssetDownloadUrlResponse(const PFMultiplayerServerGetAssetDownloadUrlResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetAssetDownloadUrlResponse>(*this);
}

size_t GetAssetDownloadUrlResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerGetAssetDownloadUrlResponse) };
    serializedSize += (m_assetDownloadUrl.size() + 1);
    serializedSize += (m_fileName.size() + 1);
    return serializedSize;
}

void GetAssetDownloadUrlResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerGetAssetDownloadUrlResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerGetAssetDownloadUrlResponse);
    memcpy(stringBuffer, m_assetDownloadUrl.data(), m_assetDownloadUrl.size() + 1);
    serializedStruct->assetDownloadUrl = stringBuffer;
    stringBuffer += m_assetDownloadUrl.size() + 1;
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest() :
    PFMultiplayerServerGetAssetUploadUrlRequest{}
{
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest(const GetAssetUploadUrlRequest& src) :
    PFMultiplayerServerGetAssetUploadUrlRequest{ src },
    m_customTags{ src.m_customTags },
    m_fileName{ src.m_fileName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest(GetAssetUploadUrlRequest&& src) :
    PFMultiplayerServerGetAssetUploadUrlRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_fileName{ std::move(src.m_fileName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlRequest::GetAssetUploadUrlRequest(const PFMultiplayerServerGetAssetUploadUrlRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetAssetUploadUrlRequest>(*this);
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse() :
    PFMultiplayerServerGetAssetUploadUrlResponse{}
{
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse(const GetAssetUploadUrlResponse& src) :
    PFMultiplayerServerGetAssetUploadUrlResponse{ src },
    m_assetUploadUrl{ src.m_assetUploadUrl },
    m_fileName{ src.m_fileName }
{
    assetUploadUrl = m_assetUploadUrl.empty() ? nullptr : m_assetUploadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse(GetAssetUploadUrlResponse&& src) :
    PFMultiplayerServerGetAssetUploadUrlResponse{ src },
    m_assetUploadUrl{ std::move(src.m_assetUploadUrl) },
    m_fileName{ std::move(src.m_fileName) }
{
    assetUploadUrl = m_assetUploadUrl.empty() ? nullptr : m_assetUploadUrl.data();
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
}

GetAssetUploadUrlResponse::GetAssetUploadUrlResponse(const PFMultiplayerServerGetAssetUploadUrlResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetAssetUploadUrlResponse>(*this);
}

size_t GetAssetUploadUrlResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerGetAssetUploadUrlResponse) };
    serializedSize += (m_assetUploadUrl.size() + 1);
    serializedSize += (m_fileName.size() + 1);
    return serializedSize;
}

void GetAssetUploadUrlResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerGetAssetUploadUrlResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerGetAssetUploadUrlResponse);
    memcpy(stringBuffer, m_assetUploadUrl.data(), m_assetUploadUrl.size() + 1);
    serializedStruct->assetUploadUrl = stringBuffer;
    stringBuffer += m_assetUploadUrl.size() + 1;
    memcpy(stringBuffer, m_fileName.data(), m_fileName.size() + 1);
    serializedStruct->fileName = stringBuffer;
    stringBuffer += m_fileName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetBuildRequest::GetBuildRequest() :
    PFMultiplayerServerGetBuildRequest{}
{
}

GetBuildRequest::GetBuildRequest(const GetBuildRequest& src) :
    PFMultiplayerServerGetBuildRequest{ src },
    m_buildId{ src.m_buildId },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildRequest::GetBuildRequest(GetBuildRequest&& src) :
    PFMultiplayerServerGetBuildRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildRequest::GetBuildRequest(const PFMultiplayerServerGetBuildRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetBuildRequest>(*this);
}

GetBuildResponse::GetBuildResponse() :
    PFMultiplayerServerGetBuildResponse{}
{
}

GetBuildResponse::GetBuildResponse(const GetBuildResponse& src) :
    PFMultiplayerServerGetBuildResponse{ src },
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
    PFMultiplayerServerGetBuildResponse{ src },
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

GetBuildResponse::GetBuildResponse(const PFMultiplayerServerGetBuildResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetBuildResponse>(*this);
}

GetBuildAliasRequest::GetBuildAliasRequest() :
    PFMultiplayerServerGetBuildAliasRequest{}
{
}

GetBuildAliasRequest::GetBuildAliasRequest(const GetBuildAliasRequest& src) :
    PFMultiplayerServerGetBuildAliasRequest{ src },
    m_aliasId{ src.m_aliasId },
    m_customTags{ src.m_customTags }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildAliasRequest::GetBuildAliasRequest(GetBuildAliasRequest&& src) :
    PFMultiplayerServerGetBuildAliasRequest{ src },
    m_aliasId{ std::move(src.m_aliasId) },
    m_customTags{ std::move(src.m_customTags) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetBuildAliasRequest::GetBuildAliasRequest(const PFMultiplayerServerGetBuildAliasRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetBuildAliasRequest>(*this);
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest() :
    PFMultiplayerServerGetContainerRegistryCredentialsRequest{}
{
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest(const GetContainerRegistryCredentialsRequest& src) :
    PFMultiplayerServerGetContainerRegistryCredentialsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest(GetContainerRegistryCredentialsRequest&& src) :
    PFMultiplayerServerGetContainerRegistryCredentialsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetContainerRegistryCredentialsRequest::GetContainerRegistryCredentialsRequest(const PFMultiplayerServerGetContainerRegistryCredentialsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetContainerRegistryCredentialsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetContainerRegistryCredentialsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerGetContainerRegistryCredentialsRequest>(*this);
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse() :
    PFMultiplayerServerGetContainerRegistryCredentialsResponse{}
{
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse(const GetContainerRegistryCredentialsResponse& src) :
    PFMultiplayerServerGetContainerRegistryCredentialsResponse{ src },
    m_dnsName{ src.m_dnsName },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse(GetContainerRegistryCredentialsResponse&& src) :
    PFMultiplayerServerGetContainerRegistryCredentialsResponse{ src },
    m_dnsName{ std::move(src.m_dnsName) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

GetContainerRegistryCredentialsResponse::GetContainerRegistryCredentialsResponse(const PFMultiplayerServerGetContainerRegistryCredentialsResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetContainerRegistryCredentialsResponse>(*this);
}

size_t GetContainerRegistryCredentialsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerGetContainerRegistryCredentialsResponse) };
    serializedSize += (m_dnsName.size() + 1);
    serializedSize += (m_password.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void GetContainerRegistryCredentialsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerGetContainerRegistryCredentialsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerGetContainerRegistryCredentialsResponse);
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

GetMultiplayerServerDetailsRequest::GetMultiplayerServerDetailsRequest() :
    PFMultiplayerServerGetMultiplayerServerDetailsRequest{}
{
}

GetMultiplayerServerDetailsRequest::GetMultiplayerServerDetailsRequest(const GetMultiplayerServerDetailsRequest& src) :
    PFMultiplayerServerGetMultiplayerServerDetailsRequest{ src },
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
    PFMultiplayerServerGetMultiplayerServerDetailsRequest{ src },
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

GetMultiplayerServerDetailsRequest::GetMultiplayerServerDetailsRequest(const PFMultiplayerServerGetMultiplayerServerDetailsRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetMultiplayerServerDetailsRequest>(*this);
}

ConnectedPlayer::ConnectedPlayer() :
    PFMultiplayerServerConnectedPlayer{}
{
}

ConnectedPlayer::ConnectedPlayer(const ConnectedPlayer& src) :
    PFMultiplayerServerConnectedPlayer{ src },
    m_playerId{ src.m_playerId }
{
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
}

ConnectedPlayer::ConnectedPlayer(ConnectedPlayer&& src) :
    PFMultiplayerServerConnectedPlayer{ src },
    m_playerId{ std::move(src.m_playerId) }
{
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
}

ConnectedPlayer::ConnectedPlayer(const PFMultiplayerServerConnectedPlayer& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ConnectedPlayer::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
}

JsonValue ConnectedPlayer::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerConnectedPlayer>(*this);
}

size_t ConnectedPlayer::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerConnectedPlayer) };
    serializedSize += (m_playerId.size() + 1);
    return serializedSize;
}

void ConnectedPlayer::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerConnectedPlayer{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerConnectedPlayer);
    memcpy(stringBuffer, m_playerId.data(), m_playerId.size() + 1);
    serializedStruct->playerId = stringBuffer;
    stringBuffer += m_playerId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse() :
    PFMultiplayerServerGetMultiplayerServerDetailsResponse{}
{
}

GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse(const GetMultiplayerServerDetailsResponse& src) :
    PFMultiplayerServerGetMultiplayerServerDetailsResponse{ src },
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
    PFMultiplayerServerGetMultiplayerServerDetailsResponse{ src },
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

GetMultiplayerServerDetailsResponse::GetMultiplayerServerDetailsResponse(const PFMultiplayerServerGetMultiplayerServerDetailsResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetMultiplayerServerDetailsResponse>(*this);
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest() :
    PFMultiplayerServerGetMultiplayerServerLogsRequest{}
{
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest(const GetMultiplayerServerLogsRequest& src) :
    PFMultiplayerServerGetMultiplayerServerLogsRequest{ src },
    m_customTags{ src.m_customTags },
    m_serverId{ src.m_serverId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    serverId = m_serverId.empty() ? nullptr : m_serverId.data();
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest(GetMultiplayerServerLogsRequest&& src) :
    PFMultiplayerServerGetMultiplayerServerLogsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_serverId{ std::move(src.m_serverId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    serverId = m_serverId.empty() ? nullptr : m_serverId.data();
}

GetMultiplayerServerLogsRequest::GetMultiplayerServerLogsRequest(const PFMultiplayerServerGetMultiplayerServerLogsRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetMultiplayerServerLogsRequest>(*this);
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse() :
    PFMultiplayerServerGetMultiplayerServerLogsResponse{}
{
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse(const GetMultiplayerServerLogsResponse& src) :
    PFMultiplayerServerGetMultiplayerServerLogsResponse{ src },
    m_logDownloadUrl{ src.m_logDownloadUrl }
{
    logDownloadUrl = m_logDownloadUrl.empty() ? nullptr : m_logDownloadUrl.data();
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse(GetMultiplayerServerLogsResponse&& src) :
    PFMultiplayerServerGetMultiplayerServerLogsResponse{ src },
    m_logDownloadUrl{ std::move(src.m_logDownloadUrl) }
{
    logDownloadUrl = m_logDownloadUrl.empty() ? nullptr : m_logDownloadUrl.data();
}

GetMultiplayerServerLogsResponse::GetMultiplayerServerLogsResponse(const PFMultiplayerServerGetMultiplayerServerLogsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetMultiplayerServerLogsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "LogDownloadUrl", m_logDownloadUrl, logDownloadUrl);
}

JsonValue GetMultiplayerServerLogsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerGetMultiplayerServerLogsResponse>(*this);
}

size_t GetMultiplayerServerLogsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerGetMultiplayerServerLogsResponse) };
    serializedSize += (m_logDownloadUrl.size() + 1);
    return serializedSize;
}

void GetMultiplayerServerLogsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerGetMultiplayerServerLogsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerGetMultiplayerServerLogsResponse);
    memcpy(stringBuffer, m_logDownloadUrl.data(), m_logDownloadUrl.size() + 1);
    serializedStruct->logDownloadUrl = stringBuffer;
    stringBuffer += m_logDownloadUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest() :
    PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest{}
{
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest(const GetMultiplayerSessionLogsBySessionIdRequest& src) :
    PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest{ src },
    m_customTags{ src.m_customTags },
    m_sessionId{ src.m_sessionId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest(GetMultiplayerSessionLogsBySessionIdRequest&& src) :
    PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_sessionId{ std::move(src.m_sessionId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    sessionId = m_sessionId.empty() ? nullptr : m_sessionId.data();
}

GetMultiplayerSessionLogsBySessionIdRequest::GetMultiplayerSessionLogsBySessionIdRequest(const PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest>(*this);
}

GetRemoteLoginEndpointRequest::GetRemoteLoginEndpointRequest() :
    PFMultiplayerServerGetRemoteLoginEndpointRequest{}
{
}

GetRemoteLoginEndpointRequest::GetRemoteLoginEndpointRequest(const GetRemoteLoginEndpointRequest& src) :
    PFMultiplayerServerGetRemoteLoginEndpointRequest{ src },
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
    PFMultiplayerServerGetRemoteLoginEndpointRequest{ src },
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

GetRemoteLoginEndpointRequest::GetRemoteLoginEndpointRequest(const PFMultiplayerServerGetRemoteLoginEndpointRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetRemoteLoginEndpointRequest>(*this);
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse() :
    PFMultiplayerServerGetRemoteLoginEndpointResponse{}
{
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse(const GetRemoteLoginEndpointResponse& src) :
    PFMultiplayerServerGetRemoteLoginEndpointResponse{ src },
    m_iPV4Address{ src.m_iPV4Address }
{
    iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse(GetRemoteLoginEndpointResponse&& src) :
    PFMultiplayerServerGetRemoteLoginEndpointResponse{ src },
    m_iPV4Address{ std::move(src.m_iPV4Address) }
{
    iPV4Address = m_iPV4Address.empty() ? nullptr : m_iPV4Address.data();
}

GetRemoteLoginEndpointResponse::GetRemoteLoginEndpointResponse(const PFMultiplayerServerGetRemoteLoginEndpointResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetRemoteLoginEndpointResponse>(*this);
}

size_t GetRemoteLoginEndpointResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerGetRemoteLoginEndpointResponse) };
    serializedSize += (m_iPV4Address.size() + 1);
    return serializedSize;
}

void GetRemoteLoginEndpointResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerGetRemoteLoginEndpointResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerGetRemoteLoginEndpointResponse);
    memcpy(stringBuffer, m_iPV4Address.data(), m_iPV4Address.size() + 1);
    serializedStruct->iPV4Address = stringBuffer;
    stringBuffer += m_iPV4Address.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest() :
    PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest{}
{
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest(const GetTitleEnabledForMultiplayerServersStatusRequest& src) :
    PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest(GetTitleEnabledForMultiplayerServersStatusRequest&& src) :
    PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleEnabledForMultiplayerServersStatusRequest::GetTitleEnabledForMultiplayerServersStatusRequest(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleEnabledForMultiplayerServersStatusRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetTitleEnabledForMultiplayerServersStatusRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest>(*this);
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse() :
    PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse{}
{
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse(const GetTitleEnabledForMultiplayerServersStatusResponse& src) :
    PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse{ src },
    m_status{ src.m_status }
{
    status = m_status ? m_status.operator->() : nullptr;
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse(GetTitleEnabledForMultiplayerServersStatusResponse&& src) :
    PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse{ src },
    m_status{ std::move(src.m_status) }
{
    status = m_status ? m_status.operator->() : nullptr;
}

GetTitleEnabledForMultiplayerServersStatusResponse::GetTitleEnabledForMultiplayerServersStatusResponse(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleEnabledForMultiplayerServersStatusResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
}

JsonValue GetTitleEnabledForMultiplayerServersStatusResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse>(*this);
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest() :
    PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest{}
{
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest(const GetTitleMultiplayerServersQuotaChangeRequest& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest{ src },
    m_customTags{ src.m_customTags },
    m_requestId{ src.m_requestId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest(GetTitleMultiplayerServersQuotaChangeRequest&& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_requestId{ std::move(src.m_requestId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    requestId = m_requestId.empty() ? nullptr : m_requestId.data();
}

GetTitleMultiplayerServersQuotaChangeRequest::GetTitleMultiplayerServersQuotaChangeRequest(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest>(*this);
}

QuotaChange::QuotaChange() :
    PFMultiplayerServerQuotaChange{}
{
}

QuotaChange::QuotaChange(const QuotaChange& src) :
    PFMultiplayerServerQuotaChange{ src },
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
    PFMultiplayerServerQuotaChange{ src },
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

QuotaChange::QuotaChange(const PFMultiplayerServerQuotaChange& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerQuotaChange>(*this);
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse() :
    PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse{}
{
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse(const GetTitleMultiplayerServersQuotaChangeResponse& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse{ src },
    m_change{ src.m_change }
{
    change = m_change ? m_change.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse(GetTitleMultiplayerServersQuotaChangeResponse&& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse{ src },
    m_change{ std::move(src.m_change) }
{
    change = m_change ? m_change.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotaChangeResponse::GetTitleMultiplayerServersQuotaChangeResponse(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleMultiplayerServersQuotaChangeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Change", m_change, change);
}

JsonValue GetTitleMultiplayerServersQuotaChangeResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse>(*this);
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest() :
    PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest{}
{
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest(const GetTitleMultiplayerServersQuotasRequest& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest(GetTitleMultiplayerServersQuotasRequest&& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

GetTitleMultiplayerServersQuotasRequest::GetTitleMultiplayerServersQuotasRequest(const PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleMultiplayerServersQuotasRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue GetTitleMultiplayerServersQuotasRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest>(*this);
}

CoreCapacity::CoreCapacity() :
    PFMultiplayerServerCoreCapacity{}
{
}

CoreCapacity::CoreCapacity(const CoreCapacity& src) :
    PFMultiplayerServerCoreCapacity{ src },
    m_region{ src.m_region },
    m_vmFamily{ src.m_vmFamily }
{
    region = m_region.empty() ? nullptr : m_region.data();
    vmFamily = m_vmFamily ? m_vmFamily.operator->() : nullptr;
}

CoreCapacity::CoreCapacity(CoreCapacity&& src) :
    PFMultiplayerServerCoreCapacity{ src },
    m_region{ std::move(src.m_region) },
    m_vmFamily{ std::move(src.m_vmFamily) }
{
    region = m_region.empty() ? nullptr : m_region.data();
    vmFamily = m_vmFamily ? m_vmFamily.operator->() : nullptr;
}

CoreCapacity::CoreCapacity(const PFMultiplayerServerCoreCapacity& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCoreCapacity>(*this);
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas() :
    PFMultiplayerServerTitleMultiplayerServersQuotas{}
{
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas(const TitleMultiplayerServersQuotas& src) :
    PFMultiplayerServerTitleMultiplayerServersQuotas{ src },
    m_coreCapacities{ src.m_coreCapacities }
{
    coreCapacities = m_coreCapacities.Empty() ? nullptr : m_coreCapacities.Data();
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas(TitleMultiplayerServersQuotas&& src) :
    PFMultiplayerServerTitleMultiplayerServersQuotas{ src },
    m_coreCapacities{ std::move(src.m_coreCapacities) }
{
    coreCapacities = m_coreCapacities.Empty() ? nullptr : m_coreCapacities.Data();
}

TitleMultiplayerServersQuotas::TitleMultiplayerServersQuotas(const PFMultiplayerServerTitleMultiplayerServersQuotas& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TitleMultiplayerServersQuotas::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CoreCapacities", m_coreCapacities, coreCapacities, coreCapacitiesCount);
}

JsonValue TitleMultiplayerServersQuotas::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerTitleMultiplayerServersQuotas>(*this);
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse() :
    PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse{}
{
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse(const GetTitleMultiplayerServersQuotasResponse& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse{ src },
    m_quotas{ src.m_quotas }
{
    quotas = m_quotas ? m_quotas.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse(GetTitleMultiplayerServersQuotasResponse&& src) :
    PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse{ src },
    m_quotas{ std::move(src.m_quotas) }
{
    quotas = m_quotas ? m_quotas.operator->() : nullptr;
}

GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse(const PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitleMultiplayerServersQuotasResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Quotas", m_quotas, quotas);
}

JsonValue GetTitleMultiplayerServersQuotasResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse>(*this);
}

ListMultiplayerServersRequest::ListMultiplayerServersRequest() :
    PFMultiplayerServerListMultiplayerServersRequest{}
{
}

ListMultiplayerServersRequest::ListMultiplayerServersRequest(const ListMultiplayerServersRequest& src) :
    PFMultiplayerServerListMultiplayerServersRequest{ src },
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
    PFMultiplayerServerListMultiplayerServersRequest{ src },
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

ListMultiplayerServersRequest::ListMultiplayerServersRequest(const PFMultiplayerServerListMultiplayerServersRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListMultiplayerServersRequest>(*this);
}

MultiplayerServerSummary::MultiplayerServerSummary() :
    PFMultiplayerServerMultiplayerServerSummary{}
{
}

MultiplayerServerSummary::MultiplayerServerSummary(const MultiplayerServerSummary& src) :
    PFMultiplayerServerMultiplayerServerSummary{ src },
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
    PFMultiplayerServerMultiplayerServerSummary{ src },
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

MultiplayerServerSummary::MultiplayerServerSummary(const PFMultiplayerServerMultiplayerServerSummary& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerMultiplayerServerSummary>(*this);
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse() :
    PFMultiplayerServerListMultiplayerServersResponse{}
{
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse(const ListMultiplayerServersResponse& src) :
    PFMultiplayerServerListMultiplayerServersResponse{ src },
    m_multiplayerServerSummaries{ src.m_multiplayerServerSummaries },
    m_skipToken{ src.m_skipToken }
{
    multiplayerServerSummaries = m_multiplayerServerSummaries.Empty() ? nullptr : m_multiplayerServerSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse(ListMultiplayerServersResponse&& src) :
    PFMultiplayerServerListMultiplayerServersResponse{ src },
    m_multiplayerServerSummaries{ std::move(src.m_multiplayerServerSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    multiplayerServerSummaries = m_multiplayerServerSummaries.Empty() ? nullptr : m_multiplayerServerSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListMultiplayerServersResponse::ListMultiplayerServersResponse(const PFMultiplayerServerListMultiplayerServersResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListMultiplayerServersResponse>(*this);
}

ListAssetSummariesRequest::ListAssetSummariesRequest() :
    PFMultiplayerServerListAssetSummariesRequest{}
{
}

ListAssetSummariesRequest::ListAssetSummariesRequest(const ListAssetSummariesRequest& src) :
    PFMultiplayerServerListAssetSummariesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesRequest::ListAssetSummariesRequest(ListAssetSummariesRequest&& src) :
    PFMultiplayerServerListAssetSummariesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesRequest::ListAssetSummariesRequest(const PFMultiplayerServerListAssetSummariesRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListAssetSummariesRequest>(*this);
}

AssetSummary::AssetSummary() :
    PFMultiplayerServerAssetSummary{}
{
}

AssetSummary::AssetSummary(const AssetSummary& src) :
    PFMultiplayerServerAssetSummary{ src },
    m_fileName{ src.m_fileName },
    m_metadata{ src.m_metadata }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

AssetSummary::AssetSummary(AssetSummary&& src) :
    PFMultiplayerServerAssetSummary{ src },
    m_fileName{ std::move(src.m_fileName) },
    m_metadata{ std::move(src.m_metadata) }
{
    fileName = m_fileName.empty() ? nullptr : m_fileName.data();
    metadata = m_metadata.Empty() ? nullptr : m_metadata.Data();
}

AssetSummary::AssetSummary(const PFMultiplayerServerAssetSummary& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerAssetSummary>(*this);
}

ListAssetSummariesResponse::ListAssetSummariesResponse() :
    PFMultiplayerServerListAssetSummariesResponse{}
{
}

ListAssetSummariesResponse::ListAssetSummariesResponse(const ListAssetSummariesResponse& src) :
    PFMultiplayerServerListAssetSummariesResponse{ src },
    m_assetSummaries{ src.m_assetSummaries },
    m_skipToken{ src.m_skipToken }
{
    assetSummaries = m_assetSummaries.Empty() ? nullptr : m_assetSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesResponse::ListAssetSummariesResponse(ListAssetSummariesResponse&& src) :
    PFMultiplayerServerListAssetSummariesResponse{ src },
    m_assetSummaries{ std::move(src.m_assetSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    assetSummaries = m_assetSummaries.Empty() ? nullptr : m_assetSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListAssetSummariesResponse::ListAssetSummariesResponse(const PFMultiplayerServerListAssetSummariesResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListAssetSummariesResponse>(*this);
}

ListBuildAliasesRequest::ListBuildAliasesRequest() :
    PFMultiplayerServerListBuildAliasesRequest{}
{
}

ListBuildAliasesRequest::ListBuildAliasesRequest(const ListBuildAliasesRequest& src) :
    PFMultiplayerServerListBuildAliasesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesRequest::ListBuildAliasesRequest(ListBuildAliasesRequest&& src) :
    PFMultiplayerServerListBuildAliasesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesRequest::ListBuildAliasesRequest(const PFMultiplayerServerListBuildAliasesRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListBuildAliasesRequest>(*this);
}

ListBuildAliasesResponse::ListBuildAliasesResponse() :
    PFMultiplayerServerListBuildAliasesResponse{}
{
}

ListBuildAliasesResponse::ListBuildAliasesResponse(const ListBuildAliasesResponse& src) :
    PFMultiplayerServerListBuildAliasesResponse{ src },
    m_buildAliases{ src.m_buildAliases },
    m_skipToken{ src.m_skipToken }
{
    buildAliases = m_buildAliases.Empty() ? nullptr : m_buildAliases.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesResponse::ListBuildAliasesResponse(ListBuildAliasesResponse&& src) :
    PFMultiplayerServerListBuildAliasesResponse{ src },
    m_buildAliases{ std::move(src.m_buildAliases) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    buildAliases = m_buildAliases.Empty() ? nullptr : m_buildAliases.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildAliasesResponse::ListBuildAliasesResponse(const PFMultiplayerServerListBuildAliasesResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListBuildAliasesResponse>(*this);
}

ListBuildSummariesRequest::ListBuildSummariesRequest() :
    PFMultiplayerServerListBuildSummariesRequest{}
{
}

ListBuildSummariesRequest::ListBuildSummariesRequest(const ListBuildSummariesRequest& src) :
    PFMultiplayerServerListBuildSummariesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesRequest::ListBuildSummariesRequest(ListBuildSummariesRequest&& src) :
    PFMultiplayerServerListBuildSummariesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesRequest::ListBuildSummariesRequest(const PFMultiplayerServerListBuildSummariesRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListBuildSummariesRequest>(*this);
}

BuildSummary::BuildSummary() :
    PFMultiplayerServerBuildSummary{}
{
}

BuildSummary::BuildSummary(const BuildSummary& src) :
    PFMultiplayerServerBuildSummary{ src },
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
    PFMultiplayerServerBuildSummary{ src },
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

BuildSummary::BuildSummary(const PFMultiplayerServerBuildSummary& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerBuildSummary>(*this);
}

ListBuildSummariesResponse::ListBuildSummariesResponse() :
    PFMultiplayerServerListBuildSummariesResponse{}
{
}

ListBuildSummariesResponse::ListBuildSummariesResponse(const ListBuildSummariesResponse& src) :
    PFMultiplayerServerListBuildSummariesResponse{ src },
    m_buildSummaries{ src.m_buildSummaries },
    m_skipToken{ src.m_skipToken }
{
    buildSummaries = m_buildSummaries.Empty() ? nullptr : m_buildSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesResponse::ListBuildSummariesResponse(ListBuildSummariesResponse&& src) :
    PFMultiplayerServerListBuildSummariesResponse{ src },
    m_buildSummaries{ std::move(src.m_buildSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    buildSummaries = m_buildSummaries.Empty() ? nullptr : m_buildSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListBuildSummariesResponse::ListBuildSummariesResponse(const PFMultiplayerServerListBuildSummariesResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListBuildSummariesResponse>(*this);
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest() :
    PFMultiplayerServerListCertificateSummariesRequest{}
{
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest(const ListCertificateSummariesRequest& src) :
    PFMultiplayerServerListCertificateSummariesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest(ListCertificateSummariesRequest&& src) :
    PFMultiplayerServerListCertificateSummariesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesRequest::ListCertificateSummariesRequest(const PFMultiplayerServerListCertificateSummariesRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListCertificateSummariesRequest>(*this);
}

CertificateSummary::CertificateSummary() :
    PFMultiplayerServerCertificateSummary{}
{
}

CertificateSummary::CertificateSummary(const CertificateSummary& src) :
    PFMultiplayerServerCertificateSummary{ src },
    m_name{ src.m_name },
    m_thumbprint{ src.m_thumbprint }
{
    name = m_name.empty() ? nullptr : m_name.data();
    thumbprint = m_thumbprint.empty() ? nullptr : m_thumbprint.data();
}

CertificateSummary::CertificateSummary(CertificateSummary&& src) :
    PFMultiplayerServerCertificateSummary{ src },
    m_name{ std::move(src.m_name) },
    m_thumbprint{ std::move(src.m_thumbprint) }
{
    name = m_name.empty() ? nullptr : m_name.data();
    thumbprint = m_thumbprint.empty() ? nullptr : m_thumbprint.data();
}

CertificateSummary::CertificateSummary(const PFMultiplayerServerCertificateSummary& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCertificateSummary>(*this);
}

size_t CertificateSummary::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerCertificateSummary) };
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_thumbprint.size() + 1);
    return serializedSize;
}

void CertificateSummary::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerCertificateSummary{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerCertificateSummary);
    memcpy(stringBuffer, m_name.data(), m_name.size() + 1);
    serializedStruct->name = stringBuffer;
    stringBuffer += m_name.size() + 1;
    memcpy(stringBuffer, m_thumbprint.data(), m_thumbprint.size() + 1);
    serializedStruct->thumbprint = stringBuffer;
    stringBuffer += m_thumbprint.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse() :
    PFMultiplayerServerListCertificateSummariesResponse{}
{
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse(const ListCertificateSummariesResponse& src) :
    PFMultiplayerServerListCertificateSummariesResponse{ src },
    m_certificateSummaries{ src.m_certificateSummaries },
    m_skipToken{ src.m_skipToken }
{
    certificateSummaries = m_certificateSummaries.Empty() ? nullptr : m_certificateSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse(ListCertificateSummariesResponse&& src) :
    PFMultiplayerServerListCertificateSummariesResponse{ src },
    m_certificateSummaries{ std::move(src.m_certificateSummaries) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    certificateSummaries = m_certificateSummaries.Empty() ? nullptr : m_certificateSummaries.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListCertificateSummariesResponse::ListCertificateSummariesResponse(const PFMultiplayerServerListCertificateSummariesResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListCertificateSummariesResponse>(*this);
}

ListContainerImagesRequest::ListContainerImagesRequest() :
    PFMultiplayerServerListContainerImagesRequest{}
{
}

ListContainerImagesRequest::ListContainerImagesRequest(const ListContainerImagesRequest& src) :
    PFMultiplayerServerListContainerImagesRequest{ src },
    m_customTags{ src.m_customTags },
    m_pageSize{ src.m_pageSize },
    m_skipToken{ src.m_skipToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesRequest::ListContainerImagesRequest(ListContainerImagesRequest&& src) :
    PFMultiplayerServerListContainerImagesRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_pageSize{ std::move(src.m_pageSize) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    pageSize = m_pageSize ? m_pageSize.operator->() : nullptr;
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesRequest::ListContainerImagesRequest(const PFMultiplayerServerListContainerImagesRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListContainerImagesRequest>(*this);
}

ListContainerImagesResponse::ListContainerImagesResponse() :
    PFMultiplayerServerListContainerImagesResponse{}
{
}

ListContainerImagesResponse::ListContainerImagesResponse(const ListContainerImagesResponse& src) :
    PFMultiplayerServerListContainerImagesResponse{ src },
    m_images{ src.m_images },
    m_skipToken{ src.m_skipToken }
{
    images = m_images.Empty() ? nullptr : m_images.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesResponse::ListContainerImagesResponse(ListContainerImagesResponse&& src) :
    PFMultiplayerServerListContainerImagesResponse{ src },
    m_images{ std::move(src.m_images) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    images = m_images.Empty() ? nullptr : m_images.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListContainerImagesResponse::ListContainerImagesResponse(const PFMultiplayerServerListContainerImagesResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListContainerImagesResponse>(*this);
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest() :
    PFMultiplayerServerListContainerImageTagsRequest{}
{
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest(const ListContainerImageTagsRequest& src) :
    PFMultiplayerServerListContainerImageTagsRequest{ src },
    m_customTags{ src.m_customTags },
    m_imageName{ src.m_imageName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest(ListContainerImageTagsRequest&& src) :
    PFMultiplayerServerListContainerImageTagsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_imageName{ std::move(src.m_imageName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
}

ListContainerImageTagsRequest::ListContainerImageTagsRequest(const PFMultiplayerServerListContainerImageTagsRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListContainerImageTagsRequest>(*this);
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse() :
    PFMultiplayerServerListContainerImageTagsResponse{}
{
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse(const ListContainerImageTagsResponse& src) :
    PFMultiplayerServerListContainerImageTagsResponse{ src },
    m_tags{ src.m_tags }
{
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse(ListContainerImageTagsResponse&& src) :
    PFMultiplayerServerListContainerImageTagsResponse{ src },
    m_tags{ std::move(src.m_tags) }
{
    tags = m_tags.Empty() ? nullptr : m_tags.Data();
}

ListContainerImageTagsResponse::ListContainerImageTagsResponse(const PFMultiplayerServerListContainerImageTagsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListContainerImageTagsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Tags", m_tags, tags, tagsCount);
}

JsonValue ListContainerImageTagsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerListContainerImageTagsResponse>(*this);
}

ListPartyQosServersRequest::ListPartyQosServersRequest() :
    PFMultiplayerServerListPartyQosServersRequest{}
{
}

ListPartyQosServersRequest::ListPartyQosServersRequest(const ListPartyQosServersRequest& src) :
    PFMultiplayerServerListPartyQosServersRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListPartyQosServersRequest::ListPartyQosServersRequest(ListPartyQosServersRequest&& src) :
    PFMultiplayerServerListPartyQosServersRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListPartyQosServersRequest::ListPartyQosServersRequest(const PFMultiplayerServerListPartyQosServersRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListPartyQosServersRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ListPartyQosServersRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerListPartyQosServersRequest>(*this);
}

QosServer::QosServer() :
    PFMultiplayerServerQosServer{}
{
}

QosServer::QosServer(const QosServer& src) :
    PFMultiplayerServerQosServer{ src },
    m_region{ src.m_region },
    m_serverUrl{ src.m_serverUrl }
{
    region = m_region.empty() ? nullptr : m_region.data();
    serverUrl = m_serverUrl.empty() ? nullptr : m_serverUrl.data();
}

QosServer::QosServer(QosServer&& src) :
    PFMultiplayerServerQosServer{ src },
    m_region{ std::move(src.m_region) },
    m_serverUrl{ std::move(src.m_serverUrl) }
{
    region = m_region.empty() ? nullptr : m_region.data();
    serverUrl = m_serverUrl.empty() ? nullptr : m_serverUrl.data();
}

QosServer::QosServer(const PFMultiplayerServerQosServer& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerQosServer>(*this);
}

size_t QosServer::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerQosServer) };
    serializedSize += (m_region.size() + 1);
    serializedSize += (m_serverUrl.size() + 1);
    return serializedSize;
}

void QosServer::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerQosServer{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerQosServer);
    memcpy(stringBuffer, m_region.data(), m_region.size() + 1);
    serializedStruct->region = stringBuffer;
    stringBuffer += m_region.size() + 1;
    memcpy(stringBuffer, m_serverUrl.data(), m_serverUrl.size() + 1);
    serializedStruct->serverUrl = stringBuffer;
    stringBuffer += m_serverUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ListPartyQosServersResponse::ListPartyQosServersResponse() :
    PFMultiplayerServerListPartyQosServersResponse{}
{
}

ListPartyQosServersResponse::ListPartyQosServersResponse(const ListPartyQosServersResponse& src) :
    PFMultiplayerServerListPartyQosServersResponse{ src },
    m_qosServers{ src.m_qosServers },
    m_skipToken{ src.m_skipToken }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListPartyQosServersResponse::ListPartyQosServersResponse(ListPartyQosServersResponse&& src) :
    PFMultiplayerServerListPartyQosServersResponse{ src },
    m_qosServers{ std::move(src.m_qosServers) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListPartyQosServersResponse::ListPartyQosServersResponse(const PFMultiplayerServerListPartyQosServersResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListPartyQosServersResponse>(*this);
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest() :
    PFMultiplayerServerListQosServersForTitleRequest{}
{
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest(const ListQosServersForTitleRequest& src) :
    PFMultiplayerServerListQosServersForTitleRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeAllRegions{ src.m_includeAllRegions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeAllRegions = m_includeAllRegions ? m_includeAllRegions.operator->() : nullptr;
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest(ListQosServersForTitleRequest&& src) :
    PFMultiplayerServerListQosServersForTitleRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeAllRegions{ std::move(src.m_includeAllRegions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeAllRegions = m_includeAllRegions ? m_includeAllRegions.operator->() : nullptr;
}

ListQosServersForTitleRequest::ListQosServersForTitleRequest(const PFMultiplayerServerListQosServersForTitleRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListQosServersForTitleRequest>(*this);
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse() :
    PFMultiplayerServerListQosServersForTitleResponse{}
{
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse(const ListQosServersForTitleResponse& src) :
    PFMultiplayerServerListQosServersForTitleResponse{ src },
    m_qosServers{ src.m_qosServers },
    m_skipToken{ src.m_skipToken }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse(ListQosServersForTitleResponse&& src) :
    PFMultiplayerServerListQosServersForTitleResponse{ src },
    m_qosServers{ std::move(src.m_qosServers) },
    m_skipToken{ std::move(src.m_skipToken) }
{
    qosServers = m_qosServers.Empty() ? nullptr : m_qosServers.Data();
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
}

ListQosServersForTitleResponse::ListQosServersForTitleResponse(const PFMultiplayerServerListQosServersForTitleResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListQosServersForTitleResponse>(*this);
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest() :
    PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest{}
{
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest(const ListTitleMultiplayerServersQuotaChangesRequest& src) :
    PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest(ListTitleMultiplayerServersQuotaChangesRequest&& src) :
    PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

ListTitleMultiplayerServersQuotaChangesRequest::ListTitleMultiplayerServersQuotaChangesRequest(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListTitleMultiplayerServersQuotaChangesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue ListTitleMultiplayerServersQuotaChangesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest>(*this);
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse() :
    PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse{}
{
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse(const ListTitleMultiplayerServersQuotaChangesResponse& src) :
    PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse{ src },
    m_changes{ src.m_changes }
{
    changes = m_changes.Empty() ? nullptr : m_changes.Data();
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse(ListTitleMultiplayerServersQuotaChangesResponse&& src) :
    PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse{ src },
    m_changes{ std::move(src.m_changes) }
{
    changes = m_changes.Empty() ? nullptr : m_changes.Data();
}

ListTitleMultiplayerServersQuotaChangesResponse::ListTitleMultiplayerServersQuotaChangesResponse(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListTitleMultiplayerServersQuotaChangesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Changes", m_changes, changes, changesCount);
}

JsonValue ListTitleMultiplayerServersQuotaChangesResponse::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse>(*this);
}

ListVirtualMachineSummariesRequest::ListVirtualMachineSummariesRequest() :
    PFMultiplayerServerListVirtualMachineSummariesRequest{}
{
}

ListVirtualMachineSummariesRequest::ListVirtualMachineSummariesRequest(const ListVirtualMachineSummariesRequest& src) :
    PFMultiplayerServerListVirtualMachineSummariesRequest{ src },
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
    PFMultiplayerServerListVirtualMachineSummariesRequest{ src },
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

ListVirtualMachineSummariesRequest::ListVirtualMachineSummariesRequest(const PFMultiplayerServerListVirtualMachineSummariesRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListVirtualMachineSummariesRequest>(*this);
}

VirtualMachineSummary::VirtualMachineSummary() :
    PFMultiplayerServerVirtualMachineSummary{}
{
}

VirtualMachineSummary::VirtualMachineSummary(const VirtualMachineSummary& src) :
    PFMultiplayerServerVirtualMachineSummary{ src },
    m_healthStatus{ src.m_healthStatus },
    m_state{ src.m_state },
    m_vmId{ src.m_vmId }
{
    healthStatus = m_healthStatus.empty() ? nullptr : m_healthStatus.data();
    state = m_state.empty() ? nullptr : m_state.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

VirtualMachineSummary::VirtualMachineSummary(VirtualMachineSummary&& src) :
    PFMultiplayerServerVirtualMachineSummary{ src },
    m_healthStatus{ std::move(src.m_healthStatus) },
    m_state{ std::move(src.m_state) },
    m_vmId{ std::move(src.m_vmId) }
{
    healthStatus = m_healthStatus.empty() ? nullptr : m_healthStatus.data();
    state = m_state.empty() ? nullptr : m_state.data();
    vmId = m_vmId.empty() ? nullptr : m_vmId.data();
}

VirtualMachineSummary::VirtualMachineSummary(const PFMultiplayerServerVirtualMachineSummary& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerVirtualMachineSummary>(*this);
}

size_t VirtualMachineSummary::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerVirtualMachineSummary) };
    serializedSize += (m_healthStatus.size() + 1);
    serializedSize += (m_state.size() + 1);
    serializedSize += (m_vmId.size() + 1);
    return serializedSize;
}

void VirtualMachineSummary::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerVirtualMachineSummary{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerVirtualMachineSummary);
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
    PFMultiplayerServerListVirtualMachineSummariesResponse{}
{
}

ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse(const ListVirtualMachineSummariesResponse& src) :
    PFMultiplayerServerListVirtualMachineSummariesResponse{ src },
    m_skipToken{ src.m_skipToken },
    m_virtualMachines{ src.m_virtualMachines }
{
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
    virtualMachines = m_virtualMachines.Empty() ? nullptr : m_virtualMachines.Data();
}

ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse(ListVirtualMachineSummariesResponse&& src) :
    PFMultiplayerServerListVirtualMachineSummariesResponse{ src },
    m_skipToken{ std::move(src.m_skipToken) },
    m_virtualMachines{ std::move(src.m_virtualMachines) }
{
    skipToken = m_skipToken.empty() ? nullptr : m_skipToken.data();
    virtualMachines = m_virtualMachines.Empty() ? nullptr : m_virtualMachines.Data();
}

ListVirtualMachineSummariesResponse::ListVirtualMachineSummariesResponse(const PFMultiplayerServerListVirtualMachineSummariesResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerListVirtualMachineSummariesResponse>(*this);
}

BuildAliasParams::BuildAliasParams() :
    PFMultiplayerServerBuildAliasParams{}
{
}

BuildAliasParams::BuildAliasParams(const BuildAliasParams& src) :
    PFMultiplayerServerBuildAliasParams{ src },
    m_aliasId{ src.m_aliasId }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
}

BuildAliasParams::BuildAliasParams(BuildAliasParams&& src) :
    PFMultiplayerServerBuildAliasParams{ src },
    m_aliasId{ std::move(src.m_aliasId) }
{
    aliasId = m_aliasId.empty() ? nullptr : m_aliasId.data();
}

BuildAliasParams::BuildAliasParams(const PFMultiplayerServerBuildAliasParams& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void BuildAliasParams::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AliasId", m_aliasId, aliasId);
}

JsonValue BuildAliasParams::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerBuildAliasParams>(*this);
}

size_t BuildAliasParams::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerBuildAliasParams) };
    serializedSize += (m_aliasId.size() + 1);
    return serializedSize;
}

void BuildAliasParams::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerBuildAliasParams{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerBuildAliasParams);
    memcpy(stringBuffer, m_aliasId.data(), m_aliasId.size() + 1);
    serializedStruct->aliasId = stringBuffer;
    stringBuffer += m_aliasId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RequestMultiplayerServerRequest::RequestMultiplayerServerRequest() :
    PFMultiplayerServerRequestMultiplayerServerRequest{}
{
}

RequestMultiplayerServerRequest::RequestMultiplayerServerRequest(const RequestMultiplayerServerRequest& src) :
    PFMultiplayerServerRequestMultiplayerServerRequest{ src },
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
    PFMultiplayerServerRequestMultiplayerServerRequest{ src },
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

RequestMultiplayerServerRequest::RequestMultiplayerServerRequest(const PFMultiplayerServerRequestMultiplayerServerRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerRequestMultiplayerServerRequest>(*this);
}

RequestMultiplayerServerResponse::RequestMultiplayerServerResponse() :
    PFMultiplayerServerRequestMultiplayerServerResponse{}
{
}

RequestMultiplayerServerResponse::RequestMultiplayerServerResponse(const RequestMultiplayerServerResponse& src) :
    PFMultiplayerServerRequestMultiplayerServerResponse{ src },
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
    PFMultiplayerServerRequestMultiplayerServerResponse{ src },
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

RequestMultiplayerServerResponse::RequestMultiplayerServerResponse(const PFMultiplayerServerRequestMultiplayerServerResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerRequestMultiplayerServerResponse>(*this);
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest() :
    PFMultiplayerServerRolloverContainerRegistryCredentialsRequest{}
{
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest(const RolloverContainerRegistryCredentialsRequest& src) :
    PFMultiplayerServerRolloverContainerRegistryCredentialsRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest(RolloverContainerRegistryCredentialsRequest&& src) :
    PFMultiplayerServerRolloverContainerRegistryCredentialsRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

RolloverContainerRegistryCredentialsRequest::RolloverContainerRegistryCredentialsRequest(const PFMultiplayerServerRolloverContainerRegistryCredentialsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RolloverContainerRegistryCredentialsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue RolloverContainerRegistryCredentialsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFMultiplayerServerRolloverContainerRegistryCredentialsRequest>(*this);
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse() :
    PFMultiplayerServerRolloverContainerRegistryCredentialsResponse{}
{
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse(const RolloverContainerRegistryCredentialsResponse& src) :
    PFMultiplayerServerRolloverContainerRegistryCredentialsResponse{ src },
    m_dnsName{ src.m_dnsName },
    m_password{ src.m_password },
    m_username{ src.m_username }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse(RolloverContainerRegistryCredentialsResponse&& src) :
    PFMultiplayerServerRolloverContainerRegistryCredentialsResponse{ src },
    m_dnsName{ std::move(src.m_dnsName) },
    m_password{ std::move(src.m_password) },
    m_username{ std::move(src.m_username) }
{
    dnsName = m_dnsName.empty() ? nullptr : m_dnsName.data();
    password = m_password.empty() ? nullptr : m_password.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse(const PFMultiplayerServerRolloverContainerRegistryCredentialsResponse& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerRolloverContainerRegistryCredentialsResponse>(*this);
}

size_t RolloverContainerRegistryCredentialsResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerRolloverContainerRegistryCredentialsResponse) };
    serializedSize += (m_dnsName.size() + 1);
    serializedSize += (m_password.size() + 1);
    serializedSize += (m_username.size() + 1);
    return serializedSize;
}

void RolloverContainerRegistryCredentialsResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerRolloverContainerRegistryCredentialsResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerRolloverContainerRegistryCredentialsResponse);
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
    PFMultiplayerServerShutdownMultiplayerServerRequest{}
{
}

ShutdownMultiplayerServerRequest::ShutdownMultiplayerServerRequest(const ShutdownMultiplayerServerRequest& src) :
    PFMultiplayerServerShutdownMultiplayerServerRequest{ src },
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
    PFMultiplayerServerShutdownMultiplayerServerRequest{ src },
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

ShutdownMultiplayerServerRequest::ShutdownMultiplayerServerRequest(const PFMultiplayerServerShutdownMultiplayerServerRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerShutdownMultiplayerServerRequest>(*this);
}

UntagContainerImageRequest::UntagContainerImageRequest() :
    PFMultiplayerServerUntagContainerImageRequest{}
{
}

UntagContainerImageRequest::UntagContainerImageRequest(const UntagContainerImageRequest& src) :
    PFMultiplayerServerUntagContainerImageRequest{ src },
    m_customTags{ src.m_customTags },
    m_imageName{ src.m_imageName },
    m_tag{ src.m_tag }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

UntagContainerImageRequest::UntagContainerImageRequest(UntagContainerImageRequest&& src) :
    PFMultiplayerServerUntagContainerImageRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_imageName{ std::move(src.m_imageName) },
    m_tag{ std::move(src.m_tag) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    imageName = m_imageName.empty() ? nullptr : m_imageName.data();
    tag = m_tag.empty() ? nullptr : m_tag.data();
}

UntagContainerImageRequest::UntagContainerImageRequest(const PFMultiplayerServerUntagContainerImageRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerUntagContainerImageRequest>(*this);
}

UpdateBuildAliasRequest::UpdateBuildAliasRequest() :
    PFMultiplayerServerUpdateBuildAliasRequest{}
{
}

UpdateBuildAliasRequest::UpdateBuildAliasRequest(const UpdateBuildAliasRequest& src) :
    PFMultiplayerServerUpdateBuildAliasRequest{ src },
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
    PFMultiplayerServerUpdateBuildAliasRequest{ src },
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

UpdateBuildAliasRequest::UpdateBuildAliasRequest(const PFMultiplayerServerUpdateBuildAliasRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerUpdateBuildAliasRequest>(*this);
}

UpdateBuildNameRequest::UpdateBuildNameRequest() :
    PFMultiplayerServerUpdateBuildNameRequest{}
{
}

UpdateBuildNameRequest::UpdateBuildNameRequest(const UpdateBuildNameRequest& src) :
    PFMultiplayerServerUpdateBuildNameRequest{ src },
    m_buildId{ src.m_buildId },
    m_buildName{ src.m_buildName },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildName = m_buildName.empty() ? nullptr : m_buildName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildNameRequest::UpdateBuildNameRequest(UpdateBuildNameRequest&& src) :
    PFMultiplayerServerUpdateBuildNameRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_buildName{ std::move(src.m_buildName) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildName = m_buildName.empty() ? nullptr : m_buildName.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildNameRequest::UpdateBuildNameRequest(const PFMultiplayerServerUpdateBuildNameRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerUpdateBuildNameRequest>(*this);
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest() :
    PFMultiplayerServerUpdateBuildRegionRequest{}
{
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest(const UpdateBuildRegionRequest& src) :
    PFMultiplayerServerUpdateBuildRegionRequest{ src },
    m_buildId{ src.m_buildId },
    m_buildRegion{ src.m_buildRegion },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegion = (PFMultiplayerServerBuildRegionParams const*)&m_buildRegion;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest(UpdateBuildRegionRequest&& src) :
    PFMultiplayerServerUpdateBuildRegionRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_buildRegion{ std::move(src.m_buildRegion) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegion = (PFMultiplayerServerBuildRegionParams const*)&m_buildRegion;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionRequest::UpdateBuildRegionRequest(const PFMultiplayerServerUpdateBuildRegionRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerUpdateBuildRegionRequest>(*this);
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest() :
    PFMultiplayerServerUpdateBuildRegionsRequest{}
{
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest(const UpdateBuildRegionsRequest& src) :
    PFMultiplayerServerUpdateBuildRegionsRequest{ src },
    m_buildId{ src.m_buildId },
    m_buildRegions{ src.m_buildRegions },
    m_customTags{ src.m_customTags }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegions = m_buildRegions.Empty() ? nullptr : m_buildRegions.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest(UpdateBuildRegionsRequest&& src) :
    PFMultiplayerServerUpdateBuildRegionsRequest{ src },
    m_buildId{ std::move(src.m_buildId) },
    m_buildRegions{ std::move(src.m_buildRegions) },
    m_customTags{ std::move(src.m_customTags) }
{
    buildId = m_buildId.empty() ? nullptr : m_buildId.data();
    buildRegions = m_buildRegions.Empty() ? nullptr : m_buildRegions.Data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

UpdateBuildRegionsRequest::UpdateBuildRegionsRequest(const PFMultiplayerServerUpdateBuildRegionsRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerUpdateBuildRegionsRequest>(*this);
}

Certificate::Certificate() :
    PFMultiplayerServerCertificate{}
{
}

Certificate::Certificate(const Certificate& src) :
    PFMultiplayerServerCertificate{ src },
    m_base64EncodedValue{ src.m_base64EncodedValue },
    m_name{ src.m_name },
    m_password{ src.m_password }
{
    base64EncodedValue = m_base64EncodedValue.empty() ? nullptr : m_base64EncodedValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    password = m_password.empty() ? nullptr : m_password.data();
}

Certificate::Certificate(Certificate&& src) :
    PFMultiplayerServerCertificate{ src },
    m_base64EncodedValue{ std::move(src.m_base64EncodedValue) },
    m_name{ std::move(src.m_name) },
    m_password{ std::move(src.m_password) }
{
    base64EncodedValue = m_base64EncodedValue.empty() ? nullptr : m_base64EncodedValue.data();
    name = m_name.empty() ? nullptr : m_name.data();
    password = m_password.empty() ? nullptr : m_password.data();
}

Certificate::Certificate(const PFMultiplayerServerCertificate& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerCertificate>(*this);
}

size_t Certificate::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFMultiplayerServerCertificate) };
    serializedSize += (m_base64EncodedValue.size() + 1);
    serializedSize += (m_name.size() + 1);
    serializedSize += (m_password.size() + 1);
    return serializedSize;
}

void Certificate::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFMultiplayerServerCertificate{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFMultiplayerServerCertificate);
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

UploadCertificateRequest::UploadCertificateRequest() :
    PFMultiplayerServerUploadCertificateRequest{}
{
}

UploadCertificateRequest::UploadCertificateRequest(const UploadCertificateRequest& src) :
    PFMultiplayerServerUploadCertificateRequest{ src },
    m_customTags{ src.m_customTags },
    m_gameCertificate{ src.m_gameCertificate }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameCertificate = (PFMultiplayerServerCertificate const*)&m_gameCertificate;
}

UploadCertificateRequest::UploadCertificateRequest(UploadCertificateRequest&& src) :
    PFMultiplayerServerUploadCertificateRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_gameCertificate{ std::move(src.m_gameCertificate) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    gameCertificate = (PFMultiplayerServerCertificate const*)&m_gameCertificate;
}

UploadCertificateRequest::UploadCertificateRequest(const PFMultiplayerServerUploadCertificateRequest& src)
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
    return JsonUtils::ToJson<PFMultiplayerServerUploadCertificateRequest>(*this);
}

} // namespace MultiplayerServerModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerBuildSelectionCriterion& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildWeightDistribution", input.buildWeightDistribution, input.buildWeightDistributionCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildAliasRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AliasName", input.aliasName);
    JsonUtils::ObjectAddMember(output, "BuildSelectionCriteria", input.buildSelectionCriteria, input.buildSelectionCriteriaCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerBuildAliasDetailsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
    JsonUtils::ObjectAddMember(output, "AliasName", input.aliasName);
    JsonUtils::ObjectAddMember(output, "BuildSelectionCriteria", input.buildSelectionCriteria, input.buildSelectionCriteriaCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerContainerImageReference& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
    JsonUtils::ObjectAddMember(output, "Tag", input.tag);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerAssetReferenceParams& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    JsonUtils::ObjectAddMember(output, "MountPath", input.mountPath);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGameCertificateReferenceParams& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GsdkAlias", input.gsdkAlias);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerLinuxInstrumentationConfiguration& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsEnabled", input.isEnabled);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDynamicStandbyThreshold& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Multiplier", input.multiplier);
    JsonUtils::ObjectAddMember(output, "TriggerThresholdPercentage", input.triggerThresholdPercentage);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDynamicStandbySettings& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DynamicFloorMultiplierThresholds", input.dynamicFloorMultiplierThresholds, input.dynamicFloorMultiplierThresholdsCount);
    JsonUtils::ObjectAddMember(output, "IsEnabled", input.isEnabled);
    JsonUtils::ObjectAddMember(output, "RampDownSeconds", input.rampDownSeconds);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerSchedule& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerScheduledStandbySettings& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsEnabled", input.isEnabled);
    JsonUtils::ObjectAddMember(output, "ScheduleList", input.scheduleList, input.scheduleListCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerBuildRegionParams& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithCustomContainerRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerAssetReference& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    JsonUtils::ObjectAddMember(output, "MountPath", input.mountPath);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGameCertificateReference& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GsdkAlias", input.gsdkAlias);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCurrentServerStats& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Active", input.active);
    JsonUtils::ObjectAddMember(output, "Propping", input.propping);
    JsonUtils::ObjectAddMember(output, "StandingBy", input.standingBy);
    JsonUtils::ObjectAddMember(output, "Total", input.total);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerBuildRegion& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithCustomContainerResponse& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerInstrumentationConfiguration& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsEnabled", input.isEnabled);
    JsonUtils::ObjectAddMember(output, "ProcessesToMonitor", input.processesToMonitor, input.processesToMonitorCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithManagedContainerRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithManagedContainerResponse& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithProcessBasedServerRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithProcessBasedServerResponse& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateRemoteUserRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateRemoteUserResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ExpirationTime", input.expirationTime, true);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCoreCapacityChange& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "NewCoreLimit", input.newCoreLimit);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "VmFamily", input.vmFamily);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "RequestId", input.requestId);
    JsonUtils::ObjectAddMember(output, "WasApproved", input.wasApproved);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDeleteAssetRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDeleteBuildRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDeleteBuildAliasRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDeleteBuildRegionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDeleteCertificateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDeleteContainerImageRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerDeleteRemoteUserRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerEnableMultiplayerServersForTitleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerEnableMultiplayerServersForTitleResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetDownloadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetDownloadUrlResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AssetDownloadUrl", input.assetDownloadUrl);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetUploadUrlRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetUploadUrlResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AssetUploadUrl", input.assetUploadUrl);
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetBuildRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetBuildResponse& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerGetBuildAliasRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetContainerRegistryCredentialsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetContainerRegistryCredentialsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DnsName", input.dnsName);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerDetailsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerConnectedPlayer& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerDetailsResponse& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerLogsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ServerId", input.serverId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerLogsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "LogDownloadUrl", input.logDownloadUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetRemoteLoginEndpointRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetRemoteLoginEndpointResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IPV4Address", input.iPV4Address);
    JsonUtils::ObjectAddMember(output, "Port", input.port);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "RequestId", input.requestId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerQuotaChange& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Change", input.change);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCoreCapacity& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Available", input.available);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "Total", input.total);
    JsonUtils::ObjectAddMember(output, "VmFamily", input.vmFamily);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerTitleMultiplayerServersQuotas& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CoreCapacities", input.coreCapacities, input.coreCapacitiesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Quotas", input.quotas);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListMultiplayerServersRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerMultiplayerServerSummary& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerListMultiplayerServersResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "MultiplayerServerSummaries", input.multiplayerServerSummaries, input.multiplayerServerSummariesCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListAssetSummariesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerAssetSummary& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
    JsonUtils::ObjectAddMember(output, "Metadata", input.metadata, input.metadataCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListAssetSummariesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AssetSummaries", input.assetSummaries, input.assetSummariesCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListBuildAliasesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListBuildAliasesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildAliases", input.buildAliases, input.buildAliasesCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListBuildSummariesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerBuildSummary& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerListBuildSummariesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildSummaries", input.buildSummaries, input.buildSummariesCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListCertificateSummariesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCertificateSummary& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Thumbprint", input.thumbprint);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListCertificateSummariesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CertificateSummaries", input.certificateSummaries, input.certificateSummariesCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImagesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImagesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Images", input.images, input.imagesCount);
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImageTagsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImageTagsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Tags", input.tags, input.tagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListPartyQosServersRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerQosServer& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "ServerUrl", input.serverUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListPartyQosServersResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "QosServers", input.qosServers, input.qosServersCount);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListQosServersForTitleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeAllRegions", input.includeAllRegions);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListQosServersForTitleResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "QosServers", input.qosServers, input.qosServersCount);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Changes", input.changes, input.changesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListVirtualMachineSummariesRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerVirtualMachineSummary& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "HealthStatus", input.healthStatus);
    JsonUtils::ObjectAddMember(output, "State", input.state);
    JsonUtils::ObjectAddMember(output, "VmId", input.vmId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerListVirtualMachineSummariesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PageSize", input.pageSize);
    JsonUtils::ObjectAddMember(output, "SkipToken", input.skipToken);
    JsonUtils::ObjectAddMember(output, "VirtualMachines", input.virtualMachines, input.virtualMachinesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerBuildAliasParams& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerRequestMultiplayerServerRequest& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerRequestMultiplayerServerResponse& input)
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
inline JsonValue ToJson<>(const PFMultiplayerServerRolloverContainerRegistryCredentialsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerRolloverContainerRegistryCredentialsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DnsName", input.dnsName);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerShutdownMultiplayerServerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Region", input.region);
    JsonUtils::ObjectAddMember(output, "SessionId", input.sessionId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerUntagContainerImageRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ImageName", input.imageName);
    JsonUtils::ObjectAddMember(output, "Tag", input.tag);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildAliasRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AliasId", input.aliasId);
    JsonUtils::ObjectAddMember(output, "AliasName", input.aliasName);
    JsonUtils::ObjectAddMember(output, "BuildSelectionCriteria", input.buildSelectionCriteria, input.buildSelectionCriteriaCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildNameRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "BuildName", input.buildName);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildRegionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "BuildRegion", input.buildRegion);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildRegionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "BuildId", input.buildId);
    JsonUtils::ObjectAddMember(output, "BuildRegions", input.buildRegions, input.buildRegionsCount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerCertificate& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Base64EncodedValue", input.base64EncodedValue);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFMultiplayerServerUploadCertificateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "GameCertificate", input.gameCertificate);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
