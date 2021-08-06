#pragma once

#include <playfab/PFMultiplayerServerDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace MultiplayerServerModels
{

// MultiplayerServer Classes
struct BuildSelectionCriterion : public PFMultiplayerServerBuildSelectionCriterion, public BaseModel
{
    BuildSelectionCriterion();
    BuildSelectionCriterion(const BuildSelectionCriterion& src);
    BuildSelectionCriterion(BuildSelectionCriterion&& src);
    BuildSelectionCriterion(const PFMultiplayerServerBuildSelectionCriterion& src);
    BuildSelectionCriterion& operator=(const BuildSelectionCriterion&) = delete;
    ~BuildSelectionCriterion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFUint32DictionaryEntry, void> m_buildWeightDistribution;
};

struct CreateBuildAliasRequest : public PFMultiplayerServerCreateBuildAliasRequest, public BaseModel
{
    CreateBuildAliasRequest();
    CreateBuildAliasRequest(const CreateBuildAliasRequest& src);
    CreateBuildAliasRequest(CreateBuildAliasRequest&& src);
    CreateBuildAliasRequest(const PFMultiplayerServerCreateBuildAliasRequest& src);
    CreateBuildAliasRequest& operator=(const CreateBuildAliasRequest&) = delete;
    ~CreateBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasName;
    PointerArrayModel<PFMultiplayerServerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct BuildAliasDetailsResponse : public PFMultiplayerServerBuildAliasDetailsResponse, public BaseModel, public ApiResult
{
    BuildAliasDetailsResponse();
    BuildAliasDetailsResponse(const BuildAliasDetailsResponse& src);
    BuildAliasDetailsResponse(BuildAliasDetailsResponse&& src);
    BuildAliasDetailsResponse(const PFMultiplayerServerBuildAliasDetailsResponse& src);
    BuildAliasDetailsResponse& operator=(const BuildAliasDetailsResponse&) = delete;
    ~BuildAliasDetailsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    String m_aliasName;
    PointerArrayModel<PFMultiplayerServerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
};

struct ContainerImageReference : public PFMultiplayerServerContainerImageReference, public SerializableModel
{
    ContainerImageReference();
    ContainerImageReference(const ContainerImageReference& src);
    ContainerImageReference(ContainerImageReference&& src);
    ContainerImageReference(const PFMultiplayerServerContainerImageReference& src);
    ContainerImageReference& operator=(const ContainerImageReference&) = delete;
    ~ContainerImageReference() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_imageName;
    String m_tag;
};

struct AssetReferenceParams : public PFMultiplayerServerAssetReferenceParams, public SerializableModel
{
    AssetReferenceParams();
    AssetReferenceParams(const AssetReferenceParams& src);
    AssetReferenceParams(AssetReferenceParams&& src);
    AssetReferenceParams(const PFMultiplayerServerAssetReferenceParams& src);
    AssetReferenceParams& operator=(const AssetReferenceParams&) = delete;
    ~AssetReferenceParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_fileName;
    String m_mountPath;
};

struct GameCertificateReferenceParams : public PFMultiplayerServerGameCertificateReferenceParams, public SerializableModel
{
    GameCertificateReferenceParams();
    GameCertificateReferenceParams(const GameCertificateReferenceParams& src);
    GameCertificateReferenceParams(GameCertificateReferenceParams&& src);
    GameCertificateReferenceParams(const PFMultiplayerServerGameCertificateReferenceParams& src);
    GameCertificateReferenceParams& operator=(const GameCertificateReferenceParams&) = delete;
    ~GameCertificateReferenceParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gsdkAlias;
    String m_name;
};

struct LinuxInstrumentationConfiguration : public PFMultiplayerServerLinuxInstrumentationConfiguration, public SerializableModel
{
    LinuxInstrumentationConfiguration();
    LinuxInstrumentationConfiguration(const LinuxInstrumentationConfiguration&) = default;
    LinuxInstrumentationConfiguration(LinuxInstrumentationConfiguration&&) = default;
    LinuxInstrumentationConfiguration(const PFMultiplayerServerLinuxInstrumentationConfiguration& src);
    LinuxInstrumentationConfiguration& operator=(const LinuxInstrumentationConfiguration&) = delete;
    ~LinuxInstrumentationConfiguration() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct DynamicStandbyThreshold : public PFMultiplayerServerDynamicStandbyThreshold, public SerializableModel
{
    DynamicStandbyThreshold();
    DynamicStandbyThreshold(const DynamicStandbyThreshold&) = default;
    DynamicStandbyThreshold(DynamicStandbyThreshold&&) = default;
    DynamicStandbyThreshold(const PFMultiplayerServerDynamicStandbyThreshold& src);
    DynamicStandbyThreshold& operator=(const DynamicStandbyThreshold&) = delete;
    ~DynamicStandbyThreshold() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct DynamicStandbySettings : public PFMultiplayerServerDynamicStandbySettings, public BaseModel
{
    DynamicStandbySettings();
    DynamicStandbySettings(const DynamicStandbySettings& src);
    DynamicStandbySettings(DynamicStandbySettings&& src);
    DynamicStandbySettings(const PFMultiplayerServerDynamicStandbySettings& src);
    DynamicStandbySettings& operator=(const DynamicStandbySettings&) = delete;
    ~DynamicStandbySettings() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerDynamicStandbyThreshold, DynamicStandbyThreshold> m_dynamicFloorMultiplierThresholds;
    StdExtra::optional<int32_t> m_rampDownSeconds;
};

struct Schedule : public PFMultiplayerServerSchedule, public SerializableModel
{
    Schedule();
    Schedule(const Schedule& src);
    Schedule(Schedule&& src);
    Schedule(const PFMultiplayerServerSchedule& src);
    Schedule& operator=(const Schedule&) = delete;
    ~Schedule() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_description;
};

struct ScheduledStandbySettings : public PFMultiplayerServerScheduledStandbySettings, public BaseModel
{
    ScheduledStandbySettings();
    ScheduledStandbySettings(const ScheduledStandbySettings& src);
    ScheduledStandbySettings(ScheduledStandbySettings&& src);
    ScheduledStandbySettings(const PFMultiplayerServerScheduledStandbySettings& src);
    ScheduledStandbySettings& operator=(const ScheduledStandbySettings&) = delete;
    ~ScheduledStandbySettings() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerSchedule, Schedule> m_scheduleList;
};

struct BuildRegionParams : public PFMultiplayerServerBuildRegionParams, public BaseModel
{
    BuildRegionParams();
    BuildRegionParams(const BuildRegionParams& src);
    BuildRegionParams(BuildRegionParams&& src);
    BuildRegionParams(const PFMultiplayerServerBuildRegionParams& src);
    BuildRegionParams& operator=(const BuildRegionParams&) = delete;
    ~BuildRegionParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<DynamicStandbySettings> m_dynamicStandbySettings;
    String m_region;
    StdExtra::optional<ScheduledStandbySettings> m_scheduledStandbySettings;
};

struct CreateBuildWithCustomContainerRequest : public PFMultiplayerServerCreateBuildWithCustomContainerRequest, public BaseModel
{
    CreateBuildWithCustomContainerRequest();
    CreateBuildWithCustomContainerRequest(const CreateBuildWithCustomContainerRequest& src);
    CreateBuildWithCustomContainerRequest(CreateBuildWithCustomContainerRequest&& src);
    CreateBuildWithCustomContainerRequest(const PFMultiplayerServerCreateBuildWithCustomContainerRequest& src);
    CreateBuildWithCustomContainerRequest& operator=(const CreateBuildWithCustomContainerRequest&) = delete;
    ~CreateBuildWithCustomContainerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildName;
    StdExtra::optional<PFMultiplayerServerContainerFlavor> m_containerFlavor;
    StdExtra::optional<ContainerImageReference> m_containerImageReference;
    String m_containerRunCommand;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFMultiplayerServerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
    PointerArrayModel<PFMultiplayerServerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
    StdExtra::optional<LinuxInstrumentationConfiguration> m_linuxInstrumentationConfiguration;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    PointerArrayModel<PFPort, Port> m_ports;
    PointerArrayModel<PFMultiplayerServerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PFMultiplayerServerAzureVmSize> m_vmSize;
};

struct AssetReference : public PFMultiplayerServerAssetReference, public SerializableModel
{
    AssetReference();
    AssetReference(const AssetReference& src);
    AssetReference(AssetReference&& src);
    AssetReference(const PFMultiplayerServerAssetReference& src);
    AssetReference& operator=(const AssetReference&) = delete;
    ~AssetReference() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_fileName;
    String m_mountPath;
};

struct GameCertificateReference : public PFMultiplayerServerGameCertificateReference, public SerializableModel
{
    GameCertificateReference();
    GameCertificateReference(const GameCertificateReference& src);
    GameCertificateReference(GameCertificateReference&& src);
    GameCertificateReference(const PFMultiplayerServerGameCertificateReference& src);
    GameCertificateReference& operator=(const GameCertificateReference&) = delete;
    ~GameCertificateReference() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_gsdkAlias;
    String m_name;
};

struct CurrentServerStats : public PFMultiplayerServerCurrentServerStats, public SerializableModel
{
    CurrentServerStats();
    CurrentServerStats(const CurrentServerStats&) = default;
    CurrentServerStats(CurrentServerStats&&) = default;
    CurrentServerStats(const PFMultiplayerServerCurrentServerStats& src);
    CurrentServerStats& operator=(const CurrentServerStats&) = delete;
    ~CurrentServerStats() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct BuildRegion : public PFMultiplayerServerBuildRegion, public BaseModel
{
    BuildRegion();
    BuildRegion(const BuildRegion& src);
    BuildRegion(BuildRegion&& src);
    BuildRegion(const PFMultiplayerServerBuildRegion& src);
    BuildRegion& operator=(const BuildRegion&) = delete;
    ~BuildRegion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<CurrentServerStats> m_currentServerStats;
    StdExtra::optional<DynamicStandbySettings> m_dynamicStandbySettings;
    String m_region;
    StdExtra::optional<ScheduledStandbySettings> m_scheduledStandbySettings;
    String m_status;
};

struct CreateBuildWithCustomContainerResponse : public PFMultiplayerServerCreateBuildWithCustomContainerResponse, public BaseModel, public ApiResult
{
    CreateBuildWithCustomContainerResponse();
    CreateBuildWithCustomContainerResponse(const CreateBuildWithCustomContainerResponse& src);
    CreateBuildWithCustomContainerResponse(CreateBuildWithCustomContainerResponse&& src);
    CreateBuildWithCustomContainerResponse(const PFMultiplayerServerCreateBuildWithCustomContainerResponse& src);
    CreateBuildWithCustomContainerResponse& operator=(const CreateBuildWithCustomContainerResponse&) = delete;
    ~CreateBuildWithCustomContainerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    StdExtra::optional<PFMultiplayerServerContainerFlavor> m_containerFlavor;
    String m_containerRunCommand;
    StdExtra::optional<time_t> m_creationTime;
    StdExtra::optional<ContainerImageReference> m_customGameContainerImage;
    PointerArrayModel<PFMultiplayerServerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PFMultiplayerServerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    StdExtra::optional<LinuxInstrumentationConfiguration> m_linuxInstrumentationConfiguration;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PFPort, Port> m_ports;
    PointerArrayModel<PFMultiplayerServerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PFMultiplayerServerAzureVmSize> m_vmSize;
};

struct InstrumentationConfiguration : public PFMultiplayerServerInstrumentationConfiguration, public BaseModel
{
    InstrumentationConfiguration();
    InstrumentationConfiguration(const InstrumentationConfiguration& src);
    InstrumentationConfiguration(InstrumentationConfiguration&& src);
    InstrumentationConfiguration(const PFMultiplayerServerInstrumentationConfiguration& src);
    InstrumentationConfiguration& operator=(const InstrumentationConfiguration&) = delete;
    ~InstrumentationConfiguration() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_isEnabled;
    PointerArrayModel<char, String> m_processesToMonitor;
};

struct CreateBuildWithManagedContainerRequest : public PFMultiplayerServerCreateBuildWithManagedContainerRequest, public BaseModel
{
    CreateBuildWithManagedContainerRequest();
    CreateBuildWithManagedContainerRequest(const CreateBuildWithManagedContainerRequest& src);
    CreateBuildWithManagedContainerRequest(CreateBuildWithManagedContainerRequest&& src);
    CreateBuildWithManagedContainerRequest(const PFMultiplayerServerCreateBuildWithManagedContainerRequest& src);
    CreateBuildWithManagedContainerRequest& operator=(const CreateBuildWithManagedContainerRequest&) = delete;
    ~CreateBuildWithManagedContainerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildName;
    StdExtra::optional<PFMultiplayerServerContainerFlavor> m_containerFlavor;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFMultiplayerServerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
    PointerArrayModel<PFMultiplayerServerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    PointerArrayModel<PFPort, Port> m_ports;
    PointerArrayModel<PFMultiplayerServerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PFMultiplayerServerAzureVmSize> m_vmSize;
};

struct CreateBuildWithManagedContainerResponse : public PFMultiplayerServerCreateBuildWithManagedContainerResponse, public BaseModel, public ApiResult
{
    CreateBuildWithManagedContainerResponse();
    CreateBuildWithManagedContainerResponse(const CreateBuildWithManagedContainerResponse& src);
    CreateBuildWithManagedContainerResponse(CreateBuildWithManagedContainerResponse&& src);
    CreateBuildWithManagedContainerResponse(const PFMultiplayerServerCreateBuildWithManagedContainerResponse& src);
    CreateBuildWithManagedContainerResponse& operator=(const CreateBuildWithManagedContainerResponse&) = delete;
    ~CreateBuildWithManagedContainerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    StdExtra::optional<PFMultiplayerServerContainerFlavor> m_containerFlavor;
    StdExtra::optional<time_t> m_creationTime;
    PointerArrayModel<PFMultiplayerServerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PFMultiplayerServerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PFPort, Port> m_ports;
    PointerArrayModel<PFMultiplayerServerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PFMultiplayerServerAzureVmSize> m_vmSize;
};

struct CreateBuildWithProcessBasedServerRequest : public PFMultiplayerServerCreateBuildWithProcessBasedServerRequest, public BaseModel
{
    CreateBuildWithProcessBasedServerRequest();
    CreateBuildWithProcessBasedServerRequest(const CreateBuildWithProcessBasedServerRequest& src);
    CreateBuildWithProcessBasedServerRequest(CreateBuildWithProcessBasedServerRequest&& src);
    CreateBuildWithProcessBasedServerRequest(const PFMultiplayerServerCreateBuildWithProcessBasedServerRequest& src);
    CreateBuildWithProcessBasedServerRequest& operator=(const CreateBuildWithProcessBasedServerRequest&) = delete;
    ~CreateBuildWithProcessBasedServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildName;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFMultiplayerServerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
    PointerArrayModel<PFMultiplayerServerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    StdExtra::optional<bool> m_isOSPreview;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PFPort, Port> m_ports;
    PointerArrayModel<PFMultiplayerServerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PFMultiplayerServerAzureVmSize> m_vmSize;
};

struct CreateBuildWithProcessBasedServerResponse : public PFMultiplayerServerCreateBuildWithProcessBasedServerResponse, public BaseModel, public ApiResult
{
    CreateBuildWithProcessBasedServerResponse();
    CreateBuildWithProcessBasedServerResponse(const CreateBuildWithProcessBasedServerResponse& src);
    CreateBuildWithProcessBasedServerResponse(CreateBuildWithProcessBasedServerResponse&& src);
    CreateBuildWithProcessBasedServerResponse(const PFMultiplayerServerCreateBuildWithProcessBasedServerResponse& src);
    CreateBuildWithProcessBasedServerResponse& operator=(const CreateBuildWithProcessBasedServerResponse&) = delete;
    ~CreateBuildWithProcessBasedServerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    StdExtra::optional<PFMultiplayerServerContainerFlavor> m_containerFlavor;
    StdExtra::optional<time_t> m_creationTime;
    PointerArrayModel<PFMultiplayerServerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PFMultiplayerServerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    StdExtra::optional<bool> m_isOSPreview;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PFPort, Port> m_ports;
    PointerArrayModel<PFMultiplayerServerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PFMultiplayerServerAzureVmSize> m_vmSize;
};

struct CreateRemoteUserRequest : public PFMultiplayerServerCreateRemoteUserRequest, public BaseModel
{
    CreateRemoteUserRequest();
    CreateRemoteUserRequest(const CreateRemoteUserRequest& src);
    CreateRemoteUserRequest(CreateRemoteUserRequest&& src);
    CreateRemoteUserRequest(const PFMultiplayerServerCreateRemoteUserRequest& src);
    CreateRemoteUserRequest& operator=(const CreateRemoteUserRequest&) = delete;
    ~CreateRemoteUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<time_t> m_expirationTime;
    String m_region;
    String m_username;
    String m_vmId;
};

struct CreateRemoteUserResponse : public PFMultiplayerServerCreateRemoteUserResponse, public BaseModel, public ApiResult
{
    CreateRemoteUserResponse();
    CreateRemoteUserResponse(const CreateRemoteUserResponse& src);
    CreateRemoteUserResponse(CreateRemoteUserResponse&& src);
    CreateRemoteUserResponse(const PFMultiplayerServerCreateRemoteUserResponse& src);
    CreateRemoteUserResponse& operator=(const CreateRemoteUserResponse&) = delete;
    ~CreateRemoteUserResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_expirationTime;
    String m_password;
    String m_username;
};

struct CoreCapacityChange : public PFMultiplayerServerCoreCapacityChange, public SerializableModel
{
    CoreCapacityChange();
    CoreCapacityChange(const CoreCapacityChange& src);
    CoreCapacityChange(CoreCapacityChange&& src);
    CoreCapacityChange(const PFMultiplayerServerCoreCapacityChange& src);
    CoreCapacityChange& operator=(const CoreCapacityChange&) = delete;
    ~CoreCapacityChange() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_region;
};

struct CreateTitleMultiplayerServersQuotaChangeRequest : public PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest, public BaseModel
{
    CreateTitleMultiplayerServersQuotaChangeRequest();
    CreateTitleMultiplayerServersQuotaChangeRequest(const CreateTitleMultiplayerServersQuotaChangeRequest& src);
    CreateTitleMultiplayerServersQuotaChangeRequest(CreateTitleMultiplayerServersQuotaChangeRequest&& src);
    CreateTitleMultiplayerServersQuotaChangeRequest(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest& src);
    CreateTitleMultiplayerServersQuotaChangeRequest& operator=(const CreateTitleMultiplayerServersQuotaChangeRequest&) = delete;
    ~CreateTitleMultiplayerServersQuotaChangeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_changeDescription;
    PointerArrayModel<PFMultiplayerServerCoreCapacityChange, CoreCapacityChange> m_changes;
    String m_contactEmail;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_notes;
    StdExtra::optional<time_t> m_startDate;
};

struct CreateTitleMultiplayerServersQuotaChangeResponse : public PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse, public SerializableModel, public ApiResult
{
    CreateTitleMultiplayerServersQuotaChangeResponse();
    CreateTitleMultiplayerServersQuotaChangeResponse(const CreateTitleMultiplayerServersQuotaChangeResponse& src);
    CreateTitleMultiplayerServersQuotaChangeResponse(CreateTitleMultiplayerServersQuotaChangeResponse&& src);
    CreateTitleMultiplayerServersQuotaChangeResponse(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse& src);
    CreateTitleMultiplayerServersQuotaChangeResponse& operator=(const CreateTitleMultiplayerServersQuotaChangeResponse&) = delete;
    ~CreateTitleMultiplayerServersQuotaChangeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_requestId;
};

struct DeleteAssetRequest : public PFMultiplayerServerDeleteAssetRequest, public BaseModel
{
    DeleteAssetRequest();
    DeleteAssetRequest(const DeleteAssetRequest& src);
    DeleteAssetRequest(DeleteAssetRequest&& src);
    DeleteAssetRequest(const PFMultiplayerServerDeleteAssetRequest& src);
    DeleteAssetRequest& operator=(const DeleteAssetRequest&) = delete;
    ~DeleteAssetRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_fileName;
};

struct DeleteBuildRequest : public PFMultiplayerServerDeleteBuildRequest, public BaseModel
{
    DeleteBuildRequest();
    DeleteBuildRequest(const DeleteBuildRequest& src);
    DeleteBuildRequest(DeleteBuildRequest&& src);
    DeleteBuildRequest(const PFMultiplayerServerDeleteBuildRequest& src);
    DeleteBuildRequest& operator=(const DeleteBuildRequest&) = delete;
    ~DeleteBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct DeleteBuildAliasRequest : public PFMultiplayerServerDeleteBuildAliasRequest, public BaseModel
{
    DeleteBuildAliasRequest();
    DeleteBuildAliasRequest(const DeleteBuildAliasRequest& src);
    DeleteBuildAliasRequest(DeleteBuildAliasRequest&& src);
    DeleteBuildAliasRequest(const PFMultiplayerServerDeleteBuildAliasRequest& src);
    DeleteBuildAliasRequest& operator=(const DeleteBuildAliasRequest&) = delete;
    ~DeleteBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct DeleteBuildRegionRequest : public PFMultiplayerServerDeleteBuildRegionRequest, public BaseModel
{
    DeleteBuildRegionRequest();
    DeleteBuildRegionRequest(const DeleteBuildRegionRequest& src);
    DeleteBuildRegionRequest(DeleteBuildRegionRequest&& src);
    DeleteBuildRegionRequest(const PFMultiplayerServerDeleteBuildRegionRequest& src);
    DeleteBuildRegionRequest& operator=(const DeleteBuildRegionRequest&) = delete;
    ~DeleteBuildRegionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_region;
};

struct DeleteCertificateRequest : public PFMultiplayerServerDeleteCertificateRequest, public BaseModel
{
    DeleteCertificateRequest();
    DeleteCertificateRequest(const DeleteCertificateRequest& src);
    DeleteCertificateRequest(DeleteCertificateRequest&& src);
    DeleteCertificateRequest(const PFMultiplayerServerDeleteCertificateRequest& src);
    DeleteCertificateRequest& operator=(const DeleteCertificateRequest&) = delete;
    ~DeleteCertificateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_name;
};

struct DeleteContainerImageRequest : public PFMultiplayerServerDeleteContainerImageRequest, public BaseModel
{
    DeleteContainerImageRequest();
    DeleteContainerImageRequest(const DeleteContainerImageRequest& src);
    DeleteContainerImageRequest(DeleteContainerImageRequest&& src);
    DeleteContainerImageRequest(const PFMultiplayerServerDeleteContainerImageRequest& src);
    DeleteContainerImageRequest& operator=(const DeleteContainerImageRequest&) = delete;
    ~DeleteContainerImageRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_imageName;
};

struct DeleteRemoteUserRequest : public PFMultiplayerServerDeleteRemoteUserRequest, public BaseModel
{
    DeleteRemoteUserRequest();
    DeleteRemoteUserRequest(const DeleteRemoteUserRequest& src);
    DeleteRemoteUserRequest(DeleteRemoteUserRequest&& src);
    DeleteRemoteUserRequest(const PFMultiplayerServerDeleteRemoteUserRequest& src);
    DeleteRemoteUserRequest& operator=(const DeleteRemoteUserRequest&) = delete;
    ~DeleteRemoteUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_username;
    String m_vmId;
};

struct EnableMultiplayerServersForTitleRequest : public PFMultiplayerServerEnableMultiplayerServersForTitleRequest, public BaseModel
{
    EnableMultiplayerServersForTitleRequest();
    EnableMultiplayerServersForTitleRequest(const EnableMultiplayerServersForTitleRequest& src);
    EnableMultiplayerServersForTitleRequest(EnableMultiplayerServersForTitleRequest&& src);
    EnableMultiplayerServersForTitleRequest(const PFMultiplayerServerEnableMultiplayerServersForTitleRequest& src);
    EnableMultiplayerServersForTitleRequest& operator=(const EnableMultiplayerServersForTitleRequest&) = delete;
    ~EnableMultiplayerServersForTitleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct EnableMultiplayerServersForTitleResponse : public PFMultiplayerServerEnableMultiplayerServersForTitleResponse, public BaseModel, public ApiResult
{
    EnableMultiplayerServersForTitleResponse();
    EnableMultiplayerServersForTitleResponse(const EnableMultiplayerServersForTitleResponse& src);
    EnableMultiplayerServersForTitleResponse(EnableMultiplayerServersForTitleResponse&& src);
    EnableMultiplayerServersForTitleResponse(const PFMultiplayerServerEnableMultiplayerServersForTitleResponse& src);
    EnableMultiplayerServersForTitleResponse& operator=(const EnableMultiplayerServersForTitleResponse&) = delete;
    ~EnableMultiplayerServersForTitleResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFMultiplayerServerTitleMultiplayerServerEnabledStatus> m_status;
};

struct GetAssetDownloadUrlRequest : public PFMultiplayerServerGetAssetDownloadUrlRequest, public BaseModel
{
    GetAssetDownloadUrlRequest();
    GetAssetDownloadUrlRequest(const GetAssetDownloadUrlRequest& src);
    GetAssetDownloadUrlRequest(GetAssetDownloadUrlRequest&& src);
    GetAssetDownloadUrlRequest(const PFMultiplayerServerGetAssetDownloadUrlRequest& src);
    GetAssetDownloadUrlRequest& operator=(const GetAssetDownloadUrlRequest&) = delete;
    ~GetAssetDownloadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_fileName;
};

struct GetAssetDownloadUrlResponse : public PFMultiplayerServerGetAssetDownloadUrlResponse, public SerializableModel, public ApiResult
{
    GetAssetDownloadUrlResponse();
    GetAssetDownloadUrlResponse(const GetAssetDownloadUrlResponse& src);
    GetAssetDownloadUrlResponse(GetAssetDownloadUrlResponse&& src);
    GetAssetDownloadUrlResponse(const PFMultiplayerServerGetAssetDownloadUrlResponse& src);
    GetAssetDownloadUrlResponse& operator=(const GetAssetDownloadUrlResponse&) = delete;
    ~GetAssetDownloadUrlResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_assetDownloadUrl;
    String m_fileName;
};

struct GetAssetUploadUrlRequest : public PFMultiplayerServerGetAssetUploadUrlRequest, public BaseModel
{
    GetAssetUploadUrlRequest();
    GetAssetUploadUrlRequest(const GetAssetUploadUrlRequest& src);
    GetAssetUploadUrlRequest(GetAssetUploadUrlRequest&& src);
    GetAssetUploadUrlRequest(const PFMultiplayerServerGetAssetUploadUrlRequest& src);
    GetAssetUploadUrlRequest& operator=(const GetAssetUploadUrlRequest&) = delete;
    ~GetAssetUploadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_fileName;
};

struct GetAssetUploadUrlResponse : public PFMultiplayerServerGetAssetUploadUrlResponse, public SerializableModel, public ApiResult
{
    GetAssetUploadUrlResponse();
    GetAssetUploadUrlResponse(const GetAssetUploadUrlResponse& src);
    GetAssetUploadUrlResponse(GetAssetUploadUrlResponse&& src);
    GetAssetUploadUrlResponse(const PFMultiplayerServerGetAssetUploadUrlResponse& src);
    GetAssetUploadUrlResponse& operator=(const GetAssetUploadUrlResponse&) = delete;
    ~GetAssetUploadUrlResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_assetUploadUrl;
    String m_fileName;
};

struct GetBuildRequest : public PFMultiplayerServerGetBuildRequest, public BaseModel
{
    GetBuildRequest();
    GetBuildRequest(const GetBuildRequest& src);
    GetBuildRequest(GetBuildRequest&& src);
    GetBuildRequest(const PFMultiplayerServerGetBuildRequest& src);
    GetBuildRequest& operator=(const GetBuildRequest&) = delete;
    ~GetBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct GetBuildResponse : public PFMultiplayerServerGetBuildResponse, public BaseModel, public ApiResult
{
    GetBuildResponse();
    GetBuildResponse(const GetBuildResponse& src);
    GetBuildResponse(GetBuildResponse&& src);
    GetBuildResponse(const PFMultiplayerServerGetBuildResponse& src);
    GetBuildResponse& operator=(const GetBuildResponse&) = delete;
    ~GetBuildResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    String m_buildStatus;
    StdExtra::optional<PFMultiplayerServerContainerFlavor> m_containerFlavor;
    String m_containerRunCommand;
    StdExtra::optional<time_t> m_creationTime;
    StdExtra::optional<ContainerImageReference> m_customGameContainerImage;
    PointerArrayModel<PFMultiplayerServerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PFMultiplayerServerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PFPort, Port> m_ports;
    PointerArrayModel<PFMultiplayerServerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PFMultiplayerServerAzureVmSize> m_vmSize;
};

struct GetBuildAliasRequest : public PFMultiplayerServerGetBuildAliasRequest, public BaseModel
{
    GetBuildAliasRequest();
    GetBuildAliasRequest(const GetBuildAliasRequest& src);
    GetBuildAliasRequest(GetBuildAliasRequest&& src);
    GetBuildAliasRequest(const PFMultiplayerServerGetBuildAliasRequest& src);
    GetBuildAliasRequest& operator=(const GetBuildAliasRequest&) = delete;
    ~GetBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct GetContainerRegistryCredentialsRequest : public PFMultiplayerServerGetContainerRegistryCredentialsRequest, public BaseModel
{
    GetContainerRegistryCredentialsRequest();
    GetContainerRegistryCredentialsRequest(const GetContainerRegistryCredentialsRequest& src);
    GetContainerRegistryCredentialsRequest(GetContainerRegistryCredentialsRequest&& src);
    GetContainerRegistryCredentialsRequest(const PFMultiplayerServerGetContainerRegistryCredentialsRequest& src);
    GetContainerRegistryCredentialsRequest& operator=(const GetContainerRegistryCredentialsRequest&) = delete;
    ~GetContainerRegistryCredentialsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct GetContainerRegistryCredentialsResponse : public PFMultiplayerServerGetContainerRegistryCredentialsResponse, public SerializableModel, public ApiResult
{
    GetContainerRegistryCredentialsResponse();
    GetContainerRegistryCredentialsResponse(const GetContainerRegistryCredentialsResponse& src);
    GetContainerRegistryCredentialsResponse(GetContainerRegistryCredentialsResponse&& src);
    GetContainerRegistryCredentialsResponse(const PFMultiplayerServerGetContainerRegistryCredentialsResponse& src);
    GetContainerRegistryCredentialsResponse& operator=(const GetContainerRegistryCredentialsResponse&) = delete;
    ~GetContainerRegistryCredentialsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_dnsName;
    String m_password;
    String m_username;
};

struct GetMultiplayerServerDetailsRequest : public PFMultiplayerServerGetMultiplayerServerDetailsRequest, public BaseModel
{
    GetMultiplayerServerDetailsRequest();
    GetMultiplayerServerDetailsRequest(const GetMultiplayerServerDetailsRequest& src);
    GetMultiplayerServerDetailsRequest(GetMultiplayerServerDetailsRequest&& src);
    GetMultiplayerServerDetailsRequest(const PFMultiplayerServerGetMultiplayerServerDetailsRequest& src);
    GetMultiplayerServerDetailsRequest& operator=(const GetMultiplayerServerDetailsRequest&) = delete;
    ~GetMultiplayerServerDetailsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_sessionId;
};

struct ConnectedPlayer : public PFMultiplayerServerConnectedPlayer, public SerializableModel
{
    ConnectedPlayer();
    ConnectedPlayer(const ConnectedPlayer& src);
    ConnectedPlayer(ConnectedPlayer&& src);
    ConnectedPlayer(const PFMultiplayerServerConnectedPlayer& src);
    ConnectedPlayer& operator=(const ConnectedPlayer&) = delete;
    ~ConnectedPlayer() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playerId;
};

struct GetMultiplayerServerDetailsResponse : public PFMultiplayerServerGetMultiplayerServerDetailsResponse, public BaseModel, public ApiResult
{
    GetMultiplayerServerDetailsResponse();
    GetMultiplayerServerDetailsResponse(const GetMultiplayerServerDetailsResponse& src);
    GetMultiplayerServerDetailsResponse(GetMultiplayerServerDetailsResponse&& src);
    GetMultiplayerServerDetailsResponse(const PFMultiplayerServerGetMultiplayerServerDetailsResponse& src);
    GetMultiplayerServerDetailsResponse& operator=(const GetMultiplayerServerDetailsResponse&) = delete;
    ~GetMultiplayerServerDetailsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    PointerArrayModel<PFMultiplayerServerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
    String m_fQDN;
    String m_iPV4Address;
    StdExtra::optional<time_t> m_lastStateTransitionTime;
    PointerArrayModel<PFPort, Port> m_ports;
    String m_region;
    String m_serverId;
    String m_sessionId;
    String m_state;
    String m_vmId;
};

struct GetMultiplayerServerLogsRequest : public PFMultiplayerServerGetMultiplayerServerLogsRequest, public BaseModel
{
    GetMultiplayerServerLogsRequest();
    GetMultiplayerServerLogsRequest(const GetMultiplayerServerLogsRequest& src);
    GetMultiplayerServerLogsRequest(GetMultiplayerServerLogsRequest&& src);
    GetMultiplayerServerLogsRequest(const PFMultiplayerServerGetMultiplayerServerLogsRequest& src);
    GetMultiplayerServerLogsRequest& operator=(const GetMultiplayerServerLogsRequest&) = delete;
    ~GetMultiplayerServerLogsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_serverId;
};

struct GetMultiplayerServerLogsResponse : public PFMultiplayerServerGetMultiplayerServerLogsResponse, public SerializableModel, public ApiResult
{
    GetMultiplayerServerLogsResponse();
    GetMultiplayerServerLogsResponse(const GetMultiplayerServerLogsResponse& src);
    GetMultiplayerServerLogsResponse(GetMultiplayerServerLogsResponse&& src);
    GetMultiplayerServerLogsResponse(const PFMultiplayerServerGetMultiplayerServerLogsResponse& src);
    GetMultiplayerServerLogsResponse& operator=(const GetMultiplayerServerLogsResponse&) = delete;
    ~GetMultiplayerServerLogsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_logDownloadUrl;
};

struct GetMultiplayerSessionLogsBySessionIdRequest : public PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest, public BaseModel
{
    GetMultiplayerSessionLogsBySessionIdRequest();
    GetMultiplayerSessionLogsBySessionIdRequest(const GetMultiplayerSessionLogsBySessionIdRequest& src);
    GetMultiplayerSessionLogsBySessionIdRequest(GetMultiplayerSessionLogsBySessionIdRequest&& src);
    GetMultiplayerSessionLogsBySessionIdRequest(const PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest& src);
    GetMultiplayerSessionLogsBySessionIdRequest& operator=(const GetMultiplayerSessionLogsBySessionIdRequest&) = delete;
    ~GetMultiplayerSessionLogsBySessionIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_sessionId;
};

struct GetRemoteLoginEndpointRequest : public PFMultiplayerServerGetRemoteLoginEndpointRequest, public BaseModel
{
    GetRemoteLoginEndpointRequest();
    GetRemoteLoginEndpointRequest(const GetRemoteLoginEndpointRequest& src);
    GetRemoteLoginEndpointRequest(GetRemoteLoginEndpointRequest&& src);
    GetRemoteLoginEndpointRequest(const PFMultiplayerServerGetRemoteLoginEndpointRequest& src);
    GetRemoteLoginEndpointRequest& operator=(const GetRemoteLoginEndpointRequest&) = delete;
    ~GetRemoteLoginEndpointRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_vmId;
};

struct GetRemoteLoginEndpointResponse : public PFMultiplayerServerGetRemoteLoginEndpointResponse, public SerializableModel, public ApiResult
{
    GetRemoteLoginEndpointResponse();
    GetRemoteLoginEndpointResponse(const GetRemoteLoginEndpointResponse& src);
    GetRemoteLoginEndpointResponse(GetRemoteLoginEndpointResponse&& src);
    GetRemoteLoginEndpointResponse(const PFMultiplayerServerGetRemoteLoginEndpointResponse& src);
    GetRemoteLoginEndpointResponse& operator=(const GetRemoteLoginEndpointResponse&) = delete;
    ~GetRemoteLoginEndpointResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_iPV4Address;
};

struct GetTitleEnabledForMultiplayerServersStatusRequest : public PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest, public BaseModel
{
    GetTitleEnabledForMultiplayerServersStatusRequest();
    GetTitleEnabledForMultiplayerServersStatusRequest(const GetTitleEnabledForMultiplayerServersStatusRequest& src);
    GetTitleEnabledForMultiplayerServersStatusRequest(GetTitleEnabledForMultiplayerServersStatusRequest&& src);
    GetTitleEnabledForMultiplayerServersStatusRequest(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest& src);
    GetTitleEnabledForMultiplayerServersStatusRequest& operator=(const GetTitleEnabledForMultiplayerServersStatusRequest&) = delete;
    ~GetTitleEnabledForMultiplayerServersStatusRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct GetTitleEnabledForMultiplayerServersStatusResponse : public PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse, public BaseModel, public ApiResult
{
    GetTitleEnabledForMultiplayerServersStatusResponse();
    GetTitleEnabledForMultiplayerServersStatusResponse(const GetTitleEnabledForMultiplayerServersStatusResponse& src);
    GetTitleEnabledForMultiplayerServersStatusResponse(GetTitleEnabledForMultiplayerServersStatusResponse&& src);
    GetTitleEnabledForMultiplayerServersStatusResponse(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse& src);
    GetTitleEnabledForMultiplayerServersStatusResponse& operator=(const GetTitleEnabledForMultiplayerServersStatusResponse&) = delete;
    ~GetTitleEnabledForMultiplayerServersStatusResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFMultiplayerServerTitleMultiplayerServerEnabledStatus> m_status;
};

struct GetTitleMultiplayerServersQuotaChangeRequest : public PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest, public BaseModel
{
    GetTitleMultiplayerServersQuotaChangeRequest();
    GetTitleMultiplayerServersQuotaChangeRequest(const GetTitleMultiplayerServersQuotaChangeRequest& src);
    GetTitleMultiplayerServersQuotaChangeRequest(GetTitleMultiplayerServersQuotaChangeRequest&& src);
    GetTitleMultiplayerServersQuotaChangeRequest(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest& src);
    GetTitleMultiplayerServersQuotaChangeRequest& operator=(const GetTitleMultiplayerServersQuotaChangeRequest&) = delete;
    ~GetTitleMultiplayerServersQuotaChangeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_requestId;
};

struct QuotaChange : public PFMultiplayerServerQuotaChange, public BaseModel
{
    QuotaChange();
    QuotaChange(const QuotaChange& src);
    QuotaChange(QuotaChange&& src);
    QuotaChange(const PFMultiplayerServerQuotaChange& src);
    QuotaChange& operator=(const QuotaChange&) = delete;
    ~QuotaChange() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_changeDescription;
    PointerArrayModel<PFMultiplayerServerCoreCapacityChange, CoreCapacityChange> m_changes;
    String m_notes;
    String m_requestId;
    String m_reviewComments;
};

struct GetTitleMultiplayerServersQuotaChangeResponse : public PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse, public BaseModel, public ApiResult
{
    GetTitleMultiplayerServersQuotaChangeResponse();
    GetTitleMultiplayerServersQuotaChangeResponse(const GetTitleMultiplayerServersQuotaChangeResponse& src);
    GetTitleMultiplayerServersQuotaChangeResponse(GetTitleMultiplayerServersQuotaChangeResponse&& src);
    GetTitleMultiplayerServersQuotaChangeResponse(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse& src);
    GetTitleMultiplayerServersQuotaChangeResponse& operator=(const GetTitleMultiplayerServersQuotaChangeResponse&) = delete;
    ~GetTitleMultiplayerServersQuotaChangeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<QuotaChange> m_change;
};

struct GetTitleMultiplayerServersQuotasRequest : public PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest, public BaseModel
{
    GetTitleMultiplayerServersQuotasRequest();
    GetTitleMultiplayerServersQuotasRequest(const GetTitleMultiplayerServersQuotasRequest& src);
    GetTitleMultiplayerServersQuotasRequest(GetTitleMultiplayerServersQuotasRequest&& src);
    GetTitleMultiplayerServersQuotasRequest(const PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest& src);
    GetTitleMultiplayerServersQuotasRequest& operator=(const GetTitleMultiplayerServersQuotasRequest&) = delete;
    ~GetTitleMultiplayerServersQuotasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct CoreCapacity : public PFMultiplayerServerCoreCapacity, public BaseModel
{
    CoreCapacity();
    CoreCapacity(const CoreCapacity& src);
    CoreCapacity(CoreCapacity&& src);
    CoreCapacity(const PFMultiplayerServerCoreCapacity& src);
    CoreCapacity& operator=(const CoreCapacity&) = delete;
    ~CoreCapacity() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_region;
    StdExtra::optional<PFMultiplayerServerAzureVmFamily> m_vmFamily;
};

struct TitleMultiplayerServersQuotas : public PFMultiplayerServerTitleMultiplayerServersQuotas, public BaseModel
{
    TitleMultiplayerServersQuotas();
    TitleMultiplayerServersQuotas(const TitleMultiplayerServersQuotas& src);
    TitleMultiplayerServersQuotas(TitleMultiplayerServersQuotas&& src);
    TitleMultiplayerServersQuotas(const PFMultiplayerServerTitleMultiplayerServersQuotas& src);
    TitleMultiplayerServersQuotas& operator=(const TitleMultiplayerServersQuotas&) = delete;
    ~TitleMultiplayerServersQuotas() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerCoreCapacity, CoreCapacity> m_coreCapacities;
};

struct GetTitleMultiplayerServersQuotasResponse : public PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse, public BaseModel, public ApiResult
{
    GetTitleMultiplayerServersQuotasResponse();
    GetTitleMultiplayerServersQuotasResponse(const GetTitleMultiplayerServersQuotasResponse& src);
    GetTitleMultiplayerServersQuotasResponse(GetTitleMultiplayerServersQuotasResponse&& src);
    GetTitleMultiplayerServersQuotasResponse(const PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse& src);
    GetTitleMultiplayerServersQuotasResponse& operator=(const GetTitleMultiplayerServersQuotasResponse&) = delete;
    ~GetTitleMultiplayerServersQuotasResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TitleMultiplayerServersQuotas> m_quotas;
};

struct ListMultiplayerServersRequest : public PFMultiplayerServerListMultiplayerServersRequest, public BaseModel
{
    ListMultiplayerServersRequest();
    ListMultiplayerServersRequest(const ListMultiplayerServersRequest& src);
    ListMultiplayerServersRequest(ListMultiplayerServersRequest&& src);
    ListMultiplayerServersRequest(const PFMultiplayerServerListMultiplayerServersRequest& src);
    ListMultiplayerServersRequest& operator=(const ListMultiplayerServersRequest&) = delete;
    ~ListMultiplayerServersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_region;
    String m_skipToken;
};

struct MultiplayerServerSummary : public PFMultiplayerServerMultiplayerServerSummary, public BaseModel
{
    MultiplayerServerSummary();
    MultiplayerServerSummary(const MultiplayerServerSummary& src);
    MultiplayerServerSummary(MultiplayerServerSummary&& src);
    MultiplayerServerSummary(const PFMultiplayerServerMultiplayerServerSummary& src);
    MultiplayerServerSummary& operator=(const MultiplayerServerSummary&) = delete;
    ~MultiplayerServerSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
    StdExtra::optional<time_t> m_lastStateTransitionTime;
    String m_region;
    String m_serverId;
    String m_sessionId;
    String m_state;
    String m_vmId;
};

struct ListMultiplayerServersResponse : public PFMultiplayerServerListMultiplayerServersResponse, public BaseModel, public ApiResult
{
    ListMultiplayerServersResponse();
    ListMultiplayerServersResponse(const ListMultiplayerServersResponse& src);
    ListMultiplayerServersResponse(ListMultiplayerServersResponse&& src);
    ListMultiplayerServersResponse(const PFMultiplayerServerListMultiplayerServersResponse& src);
    ListMultiplayerServersResponse& operator=(const ListMultiplayerServersResponse&) = delete;
    ~ListMultiplayerServersResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerMultiplayerServerSummary, MultiplayerServerSummary> m_multiplayerServerSummaries;
    String m_skipToken;
};

struct ListAssetSummariesRequest : public PFMultiplayerServerListAssetSummariesRequest, public BaseModel
{
    ListAssetSummariesRequest();
    ListAssetSummariesRequest(const ListAssetSummariesRequest& src);
    ListAssetSummariesRequest(ListAssetSummariesRequest&& src);
    ListAssetSummariesRequest(const PFMultiplayerServerListAssetSummariesRequest& src);
    ListAssetSummariesRequest& operator=(const ListAssetSummariesRequest&) = delete;
    ~ListAssetSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct AssetSummary : public PFMultiplayerServerAssetSummary, public BaseModel
{
    AssetSummary();
    AssetSummary(const AssetSummary& src);
    AssetSummary(AssetSummary&& src);
    AssetSummary(const PFMultiplayerServerAssetSummary& src);
    AssetSummary& operator=(const AssetSummary&) = delete;
    ~AssetSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_fileName;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
};

struct ListAssetSummariesResponse : public PFMultiplayerServerListAssetSummariesResponse, public BaseModel, public ApiResult
{
    ListAssetSummariesResponse();
    ListAssetSummariesResponse(const ListAssetSummariesResponse& src);
    ListAssetSummariesResponse(ListAssetSummariesResponse&& src);
    ListAssetSummariesResponse(const PFMultiplayerServerListAssetSummariesResponse& src);
    ListAssetSummariesResponse& operator=(const ListAssetSummariesResponse&) = delete;
    ~ListAssetSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerAssetSummary, AssetSummary> m_assetSummaries;
    String m_skipToken;
};

struct ListBuildAliasesRequest : public PFMultiplayerServerListBuildAliasesRequest, public BaseModel
{
    ListBuildAliasesRequest();
    ListBuildAliasesRequest(const ListBuildAliasesRequest& src);
    ListBuildAliasesRequest(ListBuildAliasesRequest&& src);
    ListBuildAliasesRequest(const PFMultiplayerServerListBuildAliasesRequest& src);
    ListBuildAliasesRequest& operator=(const ListBuildAliasesRequest&) = delete;
    ~ListBuildAliasesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct ListBuildAliasesResponse : public PFMultiplayerServerListBuildAliasesResponse, public BaseModel, public ApiResult
{
    ListBuildAliasesResponse();
    ListBuildAliasesResponse(const ListBuildAliasesResponse& src);
    ListBuildAliasesResponse(ListBuildAliasesResponse&& src);
    ListBuildAliasesResponse(const PFMultiplayerServerListBuildAliasesResponse& src);
    ListBuildAliasesResponse& operator=(const ListBuildAliasesResponse&) = delete;
    ~ListBuildAliasesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerBuildAliasDetailsResponse, BuildAliasDetailsResponse> m_buildAliases;
    String m_skipToken;
};

struct ListBuildSummariesRequest : public PFMultiplayerServerListBuildSummariesRequest, public BaseModel
{
    ListBuildSummariesRequest();
    ListBuildSummariesRequest(const ListBuildSummariesRequest& src);
    ListBuildSummariesRequest(ListBuildSummariesRequest&& src);
    ListBuildSummariesRequest(const PFMultiplayerServerListBuildSummariesRequest& src);
    ListBuildSummariesRequest& operator=(const ListBuildSummariesRequest&) = delete;
    ~ListBuildSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct BuildSummary : public PFMultiplayerServerBuildSummary, public BaseModel
{
    BuildSummary();
    BuildSummary(const BuildSummary& src);
    BuildSummary(BuildSummary&& src);
    BuildSummary(const PFMultiplayerServerBuildSummary& src);
    BuildSummary& operator=(const BuildSummary&) = delete;
    ~BuildSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    String m_buildName;
    StdExtra::optional<time_t> m_creationTime;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_metadata;
    PointerArrayModel<PFMultiplayerServerBuildRegion, BuildRegion> m_regionConfigurations;
};

struct ListBuildSummariesResponse : public PFMultiplayerServerListBuildSummariesResponse, public BaseModel, public ApiResult
{
    ListBuildSummariesResponse();
    ListBuildSummariesResponse(const ListBuildSummariesResponse& src);
    ListBuildSummariesResponse(ListBuildSummariesResponse&& src);
    ListBuildSummariesResponse(const PFMultiplayerServerListBuildSummariesResponse& src);
    ListBuildSummariesResponse& operator=(const ListBuildSummariesResponse&) = delete;
    ~ListBuildSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerBuildSummary, BuildSummary> m_buildSummaries;
    String m_skipToken;
};

struct ListCertificateSummariesRequest : public PFMultiplayerServerListCertificateSummariesRequest, public BaseModel
{
    ListCertificateSummariesRequest();
    ListCertificateSummariesRequest(const ListCertificateSummariesRequest& src);
    ListCertificateSummariesRequest(ListCertificateSummariesRequest&& src);
    ListCertificateSummariesRequest(const PFMultiplayerServerListCertificateSummariesRequest& src);
    ListCertificateSummariesRequest& operator=(const ListCertificateSummariesRequest&) = delete;
    ~ListCertificateSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct CertificateSummary : public PFMultiplayerServerCertificateSummary, public SerializableModel
{
    CertificateSummary();
    CertificateSummary(const CertificateSummary& src);
    CertificateSummary(CertificateSummary&& src);
    CertificateSummary(const PFMultiplayerServerCertificateSummary& src);
    CertificateSummary& operator=(const CertificateSummary&) = delete;
    ~CertificateSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_name;
    String m_thumbprint;
};

struct ListCertificateSummariesResponse : public PFMultiplayerServerListCertificateSummariesResponse, public BaseModel, public ApiResult
{
    ListCertificateSummariesResponse();
    ListCertificateSummariesResponse(const ListCertificateSummariesResponse& src);
    ListCertificateSummariesResponse(ListCertificateSummariesResponse&& src);
    ListCertificateSummariesResponse(const PFMultiplayerServerListCertificateSummariesResponse& src);
    ListCertificateSummariesResponse& operator=(const ListCertificateSummariesResponse&) = delete;
    ~ListCertificateSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerCertificateSummary, CertificateSummary> m_certificateSummaries;
    String m_skipToken;
};

struct ListContainerImagesRequest : public PFMultiplayerServerListContainerImagesRequest, public BaseModel
{
    ListContainerImagesRequest();
    ListContainerImagesRequest(const ListContainerImagesRequest& src);
    ListContainerImagesRequest(ListContainerImagesRequest&& src);
    ListContainerImagesRequest(const PFMultiplayerServerListContainerImagesRequest& src);
    ListContainerImagesRequest& operator=(const ListContainerImagesRequest&) = delete;
    ~ListContainerImagesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct ListContainerImagesResponse : public PFMultiplayerServerListContainerImagesResponse, public BaseModel, public ApiResult
{
    ListContainerImagesResponse();
    ListContainerImagesResponse(const ListContainerImagesResponse& src);
    ListContainerImagesResponse(ListContainerImagesResponse&& src);
    ListContainerImagesResponse(const PFMultiplayerServerListContainerImagesResponse& src);
    ListContainerImagesResponse& operator=(const ListContainerImagesResponse&) = delete;
    ~ListContainerImagesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_images;
    String m_skipToken;
};

struct ListContainerImageTagsRequest : public PFMultiplayerServerListContainerImageTagsRequest, public BaseModel
{
    ListContainerImageTagsRequest();
    ListContainerImageTagsRequest(const ListContainerImageTagsRequest& src);
    ListContainerImageTagsRequest(ListContainerImageTagsRequest&& src);
    ListContainerImageTagsRequest(const PFMultiplayerServerListContainerImageTagsRequest& src);
    ListContainerImageTagsRequest& operator=(const ListContainerImageTagsRequest&) = delete;
    ~ListContainerImageTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_imageName;
};

struct ListContainerImageTagsResponse : public PFMultiplayerServerListContainerImageTagsResponse, public BaseModel, public ApiResult
{
    ListContainerImageTagsResponse();
    ListContainerImageTagsResponse(const ListContainerImageTagsResponse& src);
    ListContainerImageTagsResponse(ListContainerImageTagsResponse&& src);
    ListContainerImageTagsResponse(const PFMultiplayerServerListContainerImageTagsResponse& src);
    ListContainerImageTagsResponse& operator=(const ListContainerImageTagsResponse&) = delete;
    ~ListContainerImageTagsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_tags;
};

struct ListPartyQosServersRequest : public PFMultiplayerServerListPartyQosServersRequest, public BaseModel
{
    ListPartyQosServersRequest();
    ListPartyQosServersRequest(const ListPartyQosServersRequest& src);
    ListPartyQosServersRequest(ListPartyQosServersRequest&& src);
    ListPartyQosServersRequest(const PFMultiplayerServerListPartyQosServersRequest& src);
    ListPartyQosServersRequest& operator=(const ListPartyQosServersRequest&) = delete;
    ~ListPartyQosServersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct QosServer : public PFMultiplayerServerQosServer, public SerializableModel
{
    QosServer();
    QosServer(const QosServer& src);
    QosServer(QosServer&& src);
    QosServer(const PFMultiplayerServerQosServer& src);
    QosServer& operator=(const QosServer&) = delete;
    ~QosServer() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_region;
    String m_serverUrl;
};

struct ListPartyQosServersResponse : public PFMultiplayerServerListPartyQosServersResponse, public BaseModel, public ApiResult
{
    ListPartyQosServersResponse();
    ListPartyQosServersResponse(const ListPartyQosServersResponse& src);
    ListPartyQosServersResponse(ListPartyQosServersResponse&& src);
    ListPartyQosServersResponse(const PFMultiplayerServerListPartyQosServersResponse& src);
    ListPartyQosServersResponse& operator=(const ListPartyQosServersResponse&) = delete;
    ~ListPartyQosServersResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerQosServer, QosServer> m_qosServers;
    String m_skipToken;
};

struct ListQosServersForTitleRequest : public PFMultiplayerServerListQosServersForTitleRequest, public BaseModel
{
    ListQosServersForTitleRequest();
    ListQosServersForTitleRequest(const ListQosServersForTitleRequest& src);
    ListQosServersForTitleRequest(ListQosServersForTitleRequest&& src);
    ListQosServersForTitleRequest(const PFMultiplayerServerListQosServersForTitleRequest& src);
    ListQosServersForTitleRequest& operator=(const ListQosServersForTitleRequest&) = delete;
    ~ListQosServersForTitleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeAllRegions;
};

struct ListQosServersForTitleResponse : public PFMultiplayerServerListQosServersForTitleResponse, public BaseModel, public ApiResult
{
    ListQosServersForTitleResponse();
    ListQosServersForTitleResponse(const ListQosServersForTitleResponse& src);
    ListQosServersForTitleResponse(ListQosServersForTitleResponse&& src);
    ListQosServersForTitleResponse(const PFMultiplayerServerListQosServersForTitleResponse& src);
    ListQosServersForTitleResponse& operator=(const ListQosServersForTitleResponse&) = delete;
    ~ListQosServersForTitleResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerQosServer, QosServer> m_qosServers;
    String m_skipToken;
};

struct ListTitleMultiplayerServersQuotaChangesRequest : public PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest, public BaseModel
{
    ListTitleMultiplayerServersQuotaChangesRequest();
    ListTitleMultiplayerServersQuotaChangesRequest(const ListTitleMultiplayerServersQuotaChangesRequest& src);
    ListTitleMultiplayerServersQuotaChangesRequest(ListTitleMultiplayerServersQuotaChangesRequest&& src);
    ListTitleMultiplayerServersQuotaChangesRequest(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest& src);
    ListTitleMultiplayerServersQuotaChangesRequest& operator=(const ListTitleMultiplayerServersQuotaChangesRequest&) = delete;
    ~ListTitleMultiplayerServersQuotaChangesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct ListTitleMultiplayerServersQuotaChangesResponse : public PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse, public BaseModel, public ApiResult
{
    ListTitleMultiplayerServersQuotaChangesResponse();
    ListTitleMultiplayerServersQuotaChangesResponse(const ListTitleMultiplayerServersQuotaChangesResponse& src);
    ListTitleMultiplayerServersQuotaChangesResponse(ListTitleMultiplayerServersQuotaChangesResponse&& src);
    ListTitleMultiplayerServersQuotaChangesResponse(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse& src);
    ListTitleMultiplayerServersQuotaChangesResponse& operator=(const ListTitleMultiplayerServersQuotaChangesResponse&) = delete;
    ~ListTitleMultiplayerServersQuotaChangesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFMultiplayerServerQuotaChange, QuotaChange> m_changes;
};

struct ListVirtualMachineSummariesRequest : public PFMultiplayerServerListVirtualMachineSummariesRequest, public BaseModel
{
    ListVirtualMachineSummariesRequest();
    ListVirtualMachineSummariesRequest(const ListVirtualMachineSummariesRequest& src);
    ListVirtualMachineSummariesRequest(ListVirtualMachineSummariesRequest&& src);
    ListVirtualMachineSummariesRequest(const PFMultiplayerServerListVirtualMachineSummariesRequest& src);
    ListVirtualMachineSummariesRequest& operator=(const ListVirtualMachineSummariesRequest&) = delete;
    ~ListVirtualMachineSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_region;
    String m_skipToken;
};

struct VirtualMachineSummary : public PFMultiplayerServerVirtualMachineSummary, public SerializableModel
{
    VirtualMachineSummary();
    VirtualMachineSummary(const VirtualMachineSummary& src);
    VirtualMachineSummary(VirtualMachineSummary&& src);
    VirtualMachineSummary(const PFMultiplayerServerVirtualMachineSummary& src);
    VirtualMachineSummary& operator=(const VirtualMachineSummary&) = delete;
    ~VirtualMachineSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_healthStatus;
    String m_state;
    String m_vmId;
};

struct ListVirtualMachineSummariesResponse : public PFMultiplayerServerListVirtualMachineSummariesResponse, public BaseModel, public ApiResult
{
    ListVirtualMachineSummariesResponse();
    ListVirtualMachineSummariesResponse(const ListVirtualMachineSummariesResponse& src);
    ListVirtualMachineSummariesResponse(ListVirtualMachineSummariesResponse&& src);
    ListVirtualMachineSummariesResponse(const PFMultiplayerServerListVirtualMachineSummariesResponse& src);
    ListVirtualMachineSummariesResponse& operator=(const ListVirtualMachineSummariesResponse&) = delete;
    ~ListVirtualMachineSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_skipToken;
    PointerArrayModel<PFMultiplayerServerVirtualMachineSummary, VirtualMachineSummary> m_virtualMachines;
};

struct BuildAliasParams : public PFMultiplayerServerBuildAliasParams, public SerializableModel
{
    BuildAliasParams();
    BuildAliasParams(const BuildAliasParams& src);
    BuildAliasParams(BuildAliasParams&& src);
    BuildAliasParams(const PFMultiplayerServerBuildAliasParams& src);
    BuildAliasParams& operator=(const BuildAliasParams&) = delete;
    ~BuildAliasParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_aliasId;
};

struct RequestMultiplayerServerRequest : public PFMultiplayerServerRequestMultiplayerServerRequest, public BaseModel
{
    RequestMultiplayerServerRequest();
    RequestMultiplayerServerRequest(const RequestMultiplayerServerRequest& src);
    RequestMultiplayerServerRequest(RequestMultiplayerServerRequest&& src);
    RequestMultiplayerServerRequest(const PFMultiplayerServerRequestMultiplayerServerRequest& src);
    RequestMultiplayerServerRequest& operator=(const RequestMultiplayerServerRequest&) = delete;
    ~RequestMultiplayerServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<BuildAliasParams> m_buildAliasParams;
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_initialPlayers;
    PointerArrayModel<char, String> m_preferredRegions;
    String m_sessionCookie;
    String m_sessionId;
};

struct RequestMultiplayerServerResponse : public PFMultiplayerServerRequestMultiplayerServerResponse, public BaseModel, public ApiResult
{
    RequestMultiplayerServerResponse();
    RequestMultiplayerServerResponse(const RequestMultiplayerServerResponse& src);
    RequestMultiplayerServerResponse(RequestMultiplayerServerResponse&& src);
    RequestMultiplayerServerResponse(const PFMultiplayerServerRequestMultiplayerServerResponse& src);
    RequestMultiplayerServerResponse& operator=(const RequestMultiplayerServerResponse&) = delete;
    ~RequestMultiplayerServerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    PointerArrayModel<PFMultiplayerServerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
    String m_fQDN;
    String m_iPV4Address;
    StdExtra::optional<time_t> m_lastStateTransitionTime;
    PointerArrayModel<PFPort, Port> m_ports;
    String m_region;
    String m_serverId;
    String m_sessionId;
    String m_state;
    String m_vmId;
};

struct RolloverContainerRegistryCredentialsRequest : public PFMultiplayerServerRolloverContainerRegistryCredentialsRequest, public BaseModel
{
    RolloverContainerRegistryCredentialsRequest();
    RolloverContainerRegistryCredentialsRequest(const RolloverContainerRegistryCredentialsRequest& src);
    RolloverContainerRegistryCredentialsRequest(RolloverContainerRegistryCredentialsRequest&& src);
    RolloverContainerRegistryCredentialsRequest(const PFMultiplayerServerRolloverContainerRegistryCredentialsRequest& src);
    RolloverContainerRegistryCredentialsRequest& operator=(const RolloverContainerRegistryCredentialsRequest&) = delete;
    ~RolloverContainerRegistryCredentialsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct RolloverContainerRegistryCredentialsResponse : public PFMultiplayerServerRolloverContainerRegistryCredentialsResponse, public SerializableModel, public ApiResult
{
    RolloverContainerRegistryCredentialsResponse();
    RolloverContainerRegistryCredentialsResponse(const RolloverContainerRegistryCredentialsResponse& src);
    RolloverContainerRegistryCredentialsResponse(RolloverContainerRegistryCredentialsResponse&& src);
    RolloverContainerRegistryCredentialsResponse(const PFMultiplayerServerRolloverContainerRegistryCredentialsResponse& src);
    RolloverContainerRegistryCredentialsResponse& operator=(const RolloverContainerRegistryCredentialsResponse&) = delete;
    ~RolloverContainerRegistryCredentialsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_dnsName;
    String m_password;
    String m_username;
};

struct ShutdownMultiplayerServerRequest : public PFMultiplayerServerShutdownMultiplayerServerRequest, public BaseModel
{
    ShutdownMultiplayerServerRequest();
    ShutdownMultiplayerServerRequest(const ShutdownMultiplayerServerRequest& src);
    ShutdownMultiplayerServerRequest(ShutdownMultiplayerServerRequest&& src);
    ShutdownMultiplayerServerRequest(const PFMultiplayerServerShutdownMultiplayerServerRequest& src);
    ShutdownMultiplayerServerRequest& operator=(const ShutdownMultiplayerServerRequest&) = delete;
    ~ShutdownMultiplayerServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_sessionId;
};

struct UntagContainerImageRequest : public PFMultiplayerServerUntagContainerImageRequest, public BaseModel
{
    UntagContainerImageRequest();
    UntagContainerImageRequest(const UntagContainerImageRequest& src);
    UntagContainerImageRequest(UntagContainerImageRequest&& src);
    UntagContainerImageRequest(const PFMultiplayerServerUntagContainerImageRequest& src);
    UntagContainerImageRequest& operator=(const UntagContainerImageRequest&) = delete;
    ~UntagContainerImageRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_imageName;
    String m_tag;
};

struct UpdateBuildAliasRequest : public PFMultiplayerServerUpdateBuildAliasRequest, public BaseModel
{
    UpdateBuildAliasRequest();
    UpdateBuildAliasRequest(const UpdateBuildAliasRequest& src);
    UpdateBuildAliasRequest(UpdateBuildAliasRequest&& src);
    UpdateBuildAliasRequest(const PFMultiplayerServerUpdateBuildAliasRequest& src);
    UpdateBuildAliasRequest& operator=(const UpdateBuildAliasRequest&) = delete;
    ~UpdateBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    String m_aliasName;
    PointerArrayModel<PFMultiplayerServerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UpdateBuildNameRequest : public PFMultiplayerServerUpdateBuildNameRequest, public BaseModel
{
    UpdateBuildNameRequest();
    UpdateBuildNameRequest(const UpdateBuildNameRequest& src);
    UpdateBuildNameRequest(UpdateBuildNameRequest&& src);
    UpdateBuildNameRequest(const PFMultiplayerServerUpdateBuildNameRequest& src);
    UpdateBuildNameRequest& operator=(const UpdateBuildNameRequest&) = delete;
    ~UpdateBuildNameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    String m_buildName;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UpdateBuildRegionRequest : public PFMultiplayerServerUpdateBuildRegionRequest, public BaseModel
{
    UpdateBuildRegionRequest();
    UpdateBuildRegionRequest(const UpdateBuildRegionRequest& src);
    UpdateBuildRegionRequest(UpdateBuildRegionRequest&& src);
    UpdateBuildRegionRequest(const PFMultiplayerServerUpdateBuildRegionRequest& src);
    UpdateBuildRegionRequest& operator=(const UpdateBuildRegionRequest&) = delete;
    ~UpdateBuildRegionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    BuildRegionParams m_buildRegion;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct UpdateBuildRegionsRequest : public PFMultiplayerServerUpdateBuildRegionsRequest, public BaseModel
{
    UpdateBuildRegionsRequest();
    UpdateBuildRegionsRequest(const UpdateBuildRegionsRequest& src);
    UpdateBuildRegionsRequest(UpdateBuildRegionsRequest&& src);
    UpdateBuildRegionsRequest(const PFMultiplayerServerUpdateBuildRegionsRequest& src);
    UpdateBuildRegionsRequest& operator=(const UpdateBuildRegionsRequest&) = delete;
    ~UpdateBuildRegionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    PointerArrayModel<PFMultiplayerServerBuildRegionParams, BuildRegionParams> m_buildRegions;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
};

struct Certificate : public PFMultiplayerServerCertificate, public SerializableModel
{
    Certificate();
    Certificate(const Certificate& src);
    Certificate(Certificate&& src);
    Certificate(const PFMultiplayerServerCertificate& src);
    Certificate& operator=(const Certificate&) = delete;
    ~Certificate() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_base64EncodedValue;
    String m_name;
    String m_password;
};

struct UploadCertificateRequest : public PFMultiplayerServerUploadCertificateRequest, public BaseModel
{
    UploadCertificateRequest();
    UploadCertificateRequest(const UploadCertificateRequest& src);
    UploadCertificateRequest(UploadCertificateRequest&& src);
    UploadCertificateRequest(const PFMultiplayerServerUploadCertificateRequest& src);
    UploadCertificateRequest& operator=(const UploadCertificateRequest&) = delete;
    ~UploadCertificateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    Certificate m_gameCertificate;
};

} // namespace MultiplayerServerModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFMultiplayerServerBuildSelectionCriterion& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerBuildAliasDetailsResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerContainerImageReference& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerAssetReferenceParams& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGameCertificateReferenceParams& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerLinuxInstrumentationConfiguration& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDynamicStandbyThreshold& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDynamicStandbySettings& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerSchedule& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerScheduledStandbySettings& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerBuildRegionParams& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithCustomContainerRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerAssetReference& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGameCertificateReference& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCurrentServerStats& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerBuildRegion& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithCustomContainerResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerInstrumentationConfiguration& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithManagedContainerRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithManagedContainerResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithProcessBasedServerRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateBuildWithProcessBasedServerResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateRemoteUserRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateRemoteUserResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCoreCapacityChange& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDeleteAssetRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDeleteBuildRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDeleteBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDeleteBuildRegionRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDeleteCertificateRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDeleteContainerImageRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerDeleteRemoteUserRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerEnableMultiplayerServersForTitleRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerEnableMultiplayerServersForTitleResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetDownloadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetDownloadUrlResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetUploadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetAssetUploadUrlResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetBuildRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetBuildResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetContainerRegistryCredentialsRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetContainerRegistryCredentialsResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerDetailsRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerConnectedPlayer& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerDetailsResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerLogsRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerServerLogsResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetRemoteLoginEndpointRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetRemoteLoginEndpointResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerQuotaChange& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotasRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCoreCapacity& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerTitleMultiplayerServersQuotas& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListMultiplayerServersRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerMultiplayerServerSummary& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListMultiplayerServersResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListAssetSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerAssetSummary& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListAssetSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListBuildAliasesRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListBuildAliasesResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListBuildSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerBuildSummary& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListBuildSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListCertificateSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCertificateSummary& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListCertificateSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImagesRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImagesResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImageTagsRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListContainerImageTagsResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListPartyQosServersRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerQosServer& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListPartyQosServersResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListQosServersForTitleRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListQosServersForTitleResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListVirtualMachineSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerVirtualMachineSummary& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerListVirtualMachineSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerBuildAliasParams& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerRequestMultiplayerServerRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerRequestMultiplayerServerResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerRolloverContainerRegistryCredentialsRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerRolloverContainerRegistryCredentialsResponse& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerShutdownMultiplayerServerRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerUntagContainerImageRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildNameRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildRegionRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerUpdateBuildRegionsRequest& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerCertificate& input);
template<> inline JsonValue ToJson<>(const PFMultiplayerServerUploadCertificateRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
