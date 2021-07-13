#pragma once

#include <playfab/PlayFabMultiplayerDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace MultiplayerModels
{

// Multiplayer Classes
struct AssetReference : public PlayFabMultiplayerAssetReference, public SerializableModel
{
    AssetReference();
    AssetReference(const AssetReference& src);
    AssetReference(AssetReference&& src);
    AssetReference(const PlayFabMultiplayerAssetReference& src);
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

struct AssetReferenceParams : public PlayFabMultiplayerAssetReferenceParams, public SerializableModel
{
    AssetReferenceParams();
    AssetReferenceParams(const AssetReferenceParams& src);
    AssetReferenceParams(AssetReferenceParams&& src);
    AssetReferenceParams(const PlayFabMultiplayerAssetReferenceParams& src);
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

struct AssetSummary : public PlayFabMultiplayerAssetSummary, public BaseModel
{
    AssetSummary();
    AssetSummary(const AssetSummary& src);
    AssetSummary(AssetSummary&& src);
    AssetSummary(const PlayFabMultiplayerAssetSummary& src);
    AssetSummary& operator=(const AssetSummary&) = delete;
    ~AssetSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_fileName;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
};

struct BuildSelectionCriterion : public PlayFabMultiplayerBuildSelectionCriterion, public BaseModel
{
    BuildSelectionCriterion();
    BuildSelectionCriterion(const BuildSelectionCriterion& src);
    BuildSelectionCriterion(BuildSelectionCriterion&& src);
    BuildSelectionCriterion(const PlayFabMultiplayerBuildSelectionCriterion& src);
    BuildSelectionCriterion& operator=(const BuildSelectionCriterion&) = delete;
    ~BuildSelectionCriterion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_buildWeightDistribution;
};

struct BuildAliasDetailsResponse : public PlayFabMultiplayerBuildAliasDetailsResponse, public BaseModel, public ApiResult
{
    BuildAliasDetailsResponse();
    BuildAliasDetailsResponse(const BuildAliasDetailsResponse& src);
    BuildAliasDetailsResponse(BuildAliasDetailsResponse&& src);
    BuildAliasDetailsResponse(const PlayFabMultiplayerBuildAliasDetailsResponse& src);
    BuildAliasDetailsResponse& operator=(const BuildAliasDetailsResponse&) = delete;
    ~BuildAliasDetailsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    String m_aliasName;
    PointerArrayModel<PlayFabMultiplayerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
};

struct BuildAliasParams : public PlayFabMultiplayerBuildAliasParams, public SerializableModel
{
    BuildAliasParams();
    BuildAliasParams(const BuildAliasParams& src);
    BuildAliasParams(BuildAliasParams&& src);
    BuildAliasParams(const PlayFabMultiplayerBuildAliasParams& src);
    BuildAliasParams& operator=(const BuildAliasParams&) = delete;
    ~BuildAliasParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_aliasId;
};

struct CurrentServerStats : public PlayFabMultiplayerCurrentServerStats, public SerializableModel
{
    CurrentServerStats();
    CurrentServerStats(const CurrentServerStats&) = default;
    CurrentServerStats(CurrentServerStats&&) = default;
    CurrentServerStats(const PlayFabMultiplayerCurrentServerStats& src);
    CurrentServerStats& operator=(const CurrentServerStats&) = delete;
    ~CurrentServerStats() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct DynamicStandbyThreshold : public PlayFabMultiplayerDynamicStandbyThreshold, public SerializableModel
{
    DynamicStandbyThreshold();
    DynamicStandbyThreshold(const DynamicStandbyThreshold&) = default;
    DynamicStandbyThreshold(DynamicStandbyThreshold&&) = default;
    DynamicStandbyThreshold(const PlayFabMultiplayerDynamicStandbyThreshold& src);
    DynamicStandbyThreshold& operator=(const DynamicStandbyThreshold&) = delete;
    ~DynamicStandbyThreshold() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct DynamicStandbySettings : public PlayFabMultiplayerDynamicStandbySettings, public BaseModel
{
    DynamicStandbySettings();
    DynamicStandbySettings(const DynamicStandbySettings& src);
    DynamicStandbySettings(DynamicStandbySettings&& src);
    DynamicStandbySettings(const PlayFabMultiplayerDynamicStandbySettings& src);
    DynamicStandbySettings& operator=(const DynamicStandbySettings&) = delete;
    ~DynamicStandbySettings() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerDynamicStandbyThreshold, DynamicStandbyThreshold> m_dynamicFloorMultiplierThresholds;
    StdExtra::optional<int32_t> m_rampDownSeconds;
};

struct Schedule : public PlayFabMultiplayerSchedule, public SerializableModel
{
    Schedule();
    Schedule(const Schedule& src);
    Schedule(Schedule&& src);
    Schedule(const PlayFabMultiplayerSchedule& src);
    Schedule& operator=(const Schedule&) = delete;
    ~Schedule() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_description;
};

struct ScheduledStandbySettings : public PlayFabMultiplayerScheduledStandbySettings, public BaseModel
{
    ScheduledStandbySettings();
    ScheduledStandbySettings(const ScheduledStandbySettings& src);
    ScheduledStandbySettings(ScheduledStandbySettings&& src);
    ScheduledStandbySettings(const PlayFabMultiplayerScheduledStandbySettings& src);
    ScheduledStandbySettings& operator=(const ScheduledStandbySettings&) = delete;
    ~ScheduledStandbySettings() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerSchedule, Schedule> m_scheduleList;
};

struct BuildRegion : public PlayFabMultiplayerBuildRegion, public BaseModel
{
    BuildRegion();
    BuildRegion(const BuildRegion& src);
    BuildRegion(BuildRegion&& src);
    BuildRegion(const PlayFabMultiplayerBuildRegion& src);
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

struct BuildRegionParams : public PlayFabMultiplayerBuildRegionParams, public BaseModel
{
    BuildRegionParams();
    BuildRegionParams(const BuildRegionParams& src);
    BuildRegionParams(BuildRegionParams&& src);
    BuildRegionParams(const PlayFabMultiplayerBuildRegionParams& src);
    BuildRegionParams& operator=(const BuildRegionParams&) = delete;
    ~BuildRegionParams() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<DynamicStandbySettings> m_dynamicStandbySettings;
    String m_region;
    StdExtra::optional<ScheduledStandbySettings> m_scheduledStandbySettings;
};

struct BuildSummary : public PlayFabMultiplayerBuildSummary, public BaseModel
{
    BuildSummary();
    BuildSummary(const BuildSummary& src);
    BuildSummary(BuildSummary&& src);
    BuildSummary(const PlayFabMultiplayerBuildSummary& src);
    BuildSummary& operator=(const BuildSummary&) = delete;
    ~BuildSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    String m_buildName;
    StdExtra::optional<time_t> m_creationTime;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    PointerArrayModel<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
};

struct CancelAllMatchmakingTicketsForPlayerRequest : public PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest, public BaseModel
{
    CancelAllMatchmakingTicketsForPlayerRequest();
    CancelAllMatchmakingTicketsForPlayerRequest(const CancelAllMatchmakingTicketsForPlayerRequest& src);
    CancelAllMatchmakingTicketsForPlayerRequest(CancelAllMatchmakingTicketsForPlayerRequest&& src);
    CancelAllMatchmakingTicketsForPlayerRequest(const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& src);
    CancelAllMatchmakingTicketsForPlayerRequest& operator=(const CancelAllMatchmakingTicketsForPlayerRequest&) = delete;
    ~CancelAllMatchmakingTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_queueName;
};

struct CancelAllServerBackfillTicketsForPlayerRequest : public PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest, public BaseModel
{
    CancelAllServerBackfillTicketsForPlayerRequest();
    CancelAllServerBackfillTicketsForPlayerRequest(const CancelAllServerBackfillTicketsForPlayerRequest& src);
    CancelAllServerBackfillTicketsForPlayerRequest(CancelAllServerBackfillTicketsForPlayerRequest&& src);
    CancelAllServerBackfillTicketsForPlayerRequest(const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& src);
    CancelAllServerBackfillTicketsForPlayerRequest& operator=(const CancelAllServerBackfillTicketsForPlayerRequest&) = delete;
    ~CancelAllServerBackfillTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    String m_queueName;
};

struct CancelMatchmakingTicketRequest : public PlayFabMultiplayerCancelMatchmakingTicketRequest, public BaseModel
{
    CancelMatchmakingTicketRequest();
    CancelMatchmakingTicketRequest(const CancelMatchmakingTicketRequest& src);
    CancelMatchmakingTicketRequest(CancelMatchmakingTicketRequest&& src);
    CancelMatchmakingTicketRequest(const PlayFabMultiplayerCancelMatchmakingTicketRequest& src);
    CancelMatchmakingTicketRequest& operator=(const CancelMatchmakingTicketRequest&) = delete;
    ~CancelMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct CancelServerBackfillTicketRequest : public PlayFabMultiplayerCancelServerBackfillTicketRequest, public BaseModel
{
    CancelServerBackfillTicketRequest();
    CancelServerBackfillTicketRequest(const CancelServerBackfillTicketRequest& src);
    CancelServerBackfillTicketRequest(CancelServerBackfillTicketRequest&& src);
    CancelServerBackfillTicketRequest(const PlayFabMultiplayerCancelServerBackfillTicketRequest& src);
    CancelServerBackfillTicketRequest& operator=(const CancelServerBackfillTicketRequest&) = delete;
    ~CancelServerBackfillTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct Certificate : public PlayFabMultiplayerCertificate, public SerializableModel
{
    Certificate();
    Certificate(const Certificate& src);
    Certificate(Certificate&& src);
    Certificate(const PlayFabMultiplayerCertificate& src);
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

struct CertificateSummary : public PlayFabMultiplayerCertificateSummary, public SerializableModel
{
    CertificateSummary();
    CertificateSummary(const CertificateSummary& src);
    CertificateSummary(CertificateSummary&& src);
    CertificateSummary(const PlayFabMultiplayerCertificateSummary& src);
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

struct ConnectedPlayer : public PlayFabMultiplayerConnectedPlayer, public SerializableModel
{
    ConnectedPlayer();
    ConnectedPlayer(const ConnectedPlayer& src);
    ConnectedPlayer(ConnectedPlayer&& src);
    ConnectedPlayer(const PlayFabMultiplayerConnectedPlayer& src);
    ConnectedPlayer& operator=(const ConnectedPlayer&) = delete;
    ~ConnectedPlayer() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playerId;
};

struct ContainerImageReference : public PlayFabMultiplayerContainerImageReference, public SerializableModel
{
    ContainerImageReference();
    ContainerImageReference(const ContainerImageReference& src);
    ContainerImageReference(ContainerImageReference&& src);
    ContainerImageReference(const PlayFabMultiplayerContainerImageReference& src);
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

struct CoreCapacity : public PlayFabMultiplayerCoreCapacity, public BaseModel
{
    CoreCapacity();
    CoreCapacity(const CoreCapacity& src);
    CoreCapacity(CoreCapacity&& src);
    CoreCapacity(const PlayFabMultiplayerCoreCapacity& src);
    CoreCapacity& operator=(const CoreCapacity&) = delete;
    ~CoreCapacity() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_region;
    StdExtra::optional<PlayFabMultiplayerAzureVmFamily> m_vmFamily;
};

struct CoreCapacityChange : public PlayFabMultiplayerCoreCapacityChange, public SerializableModel
{
    CoreCapacityChange();
    CoreCapacityChange(const CoreCapacityChange& src);
    CoreCapacityChange(CoreCapacityChange&& src);
    CoreCapacityChange(const PlayFabMultiplayerCoreCapacityChange& src);
    CoreCapacityChange& operator=(const CoreCapacityChange&) = delete;
    ~CoreCapacityChange() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_region;
};

struct CreateBuildAliasRequest : public PlayFabMultiplayerCreateBuildAliasRequest, public BaseModel
{
    CreateBuildAliasRequest();
    CreateBuildAliasRequest(const CreateBuildAliasRequest& src);
    CreateBuildAliasRequest(CreateBuildAliasRequest&& src);
    CreateBuildAliasRequest(const PlayFabMultiplayerCreateBuildAliasRequest& src);
    CreateBuildAliasRequest& operator=(const CreateBuildAliasRequest&) = delete;
    ~CreateBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasName;
    PointerArrayModel<PlayFabMultiplayerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GameCertificateReferenceParams : public PlayFabMultiplayerGameCertificateReferenceParams, public SerializableModel
{
    GameCertificateReferenceParams();
    GameCertificateReferenceParams(const GameCertificateReferenceParams& src);
    GameCertificateReferenceParams(GameCertificateReferenceParams&& src);
    GameCertificateReferenceParams(const PlayFabMultiplayerGameCertificateReferenceParams& src);
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

struct LinuxInstrumentationConfiguration : public PlayFabMultiplayerLinuxInstrumentationConfiguration, public SerializableModel
{
    LinuxInstrumentationConfiguration();
    LinuxInstrumentationConfiguration(const LinuxInstrumentationConfiguration&) = default;
    LinuxInstrumentationConfiguration(LinuxInstrumentationConfiguration&&) = default;
    LinuxInstrumentationConfiguration(const PlayFabMultiplayerLinuxInstrumentationConfiguration& src);
    LinuxInstrumentationConfiguration& operator=(const LinuxInstrumentationConfiguration&) = delete;
    ~LinuxInstrumentationConfiguration() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct Port : public PlayFabMultiplayerPort, public SerializableModel
{
    Port();
    Port(const Port& src);
    Port(Port&& src);
    Port(const PlayFabMultiplayerPort& src);
    Port& operator=(const Port&) = delete;
    ~Port() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_name;
};

struct CreateBuildWithCustomContainerRequest : public PlayFabMultiplayerCreateBuildWithCustomContainerRequest, public BaseModel
{
    CreateBuildWithCustomContainerRequest();
    CreateBuildWithCustomContainerRequest(const CreateBuildWithCustomContainerRequest& src);
    CreateBuildWithCustomContainerRequest(CreateBuildWithCustomContainerRequest&& src);
    CreateBuildWithCustomContainerRequest(const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& src);
    CreateBuildWithCustomContainerRequest& operator=(const CreateBuildWithCustomContainerRequest&) = delete;
    ~CreateBuildWithCustomContainerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildName;
    StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
    StdExtra::optional<ContainerImageReference> m_containerImageReference;
    String m_containerRunCommand;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabMultiplayerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
    PointerArrayModel<PlayFabMultiplayerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
    StdExtra::optional<LinuxInstrumentationConfiguration> m_linuxInstrumentationConfiguration;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    PointerArrayModel<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
};

struct GameCertificateReference : public PlayFabMultiplayerGameCertificateReference, public SerializableModel
{
    GameCertificateReference();
    GameCertificateReference(const GameCertificateReference& src);
    GameCertificateReference(GameCertificateReference&& src);
    GameCertificateReference(const PlayFabMultiplayerGameCertificateReference& src);
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

struct CreateBuildWithCustomContainerResponse : public PlayFabMultiplayerCreateBuildWithCustomContainerResponse, public BaseModel, public ApiResult
{
    CreateBuildWithCustomContainerResponse();
    CreateBuildWithCustomContainerResponse(const CreateBuildWithCustomContainerResponse& src);
    CreateBuildWithCustomContainerResponse(CreateBuildWithCustomContainerResponse&& src);
    CreateBuildWithCustomContainerResponse(const PlayFabMultiplayerCreateBuildWithCustomContainerResponse& src);
    CreateBuildWithCustomContainerResponse& operator=(const CreateBuildWithCustomContainerResponse&) = delete;
    ~CreateBuildWithCustomContainerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
    String m_containerRunCommand;
    StdExtra::optional<time_t> m_creationTime;
    StdExtra::optional<ContainerImageReference> m_customGameContainerImage;
    PointerArrayModel<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    StdExtra::optional<LinuxInstrumentationConfiguration> m_linuxInstrumentationConfiguration;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    PointerArrayModel<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
};

struct InstrumentationConfiguration : public PlayFabMultiplayerInstrumentationConfiguration, public BaseModel
{
    InstrumentationConfiguration();
    InstrumentationConfiguration(const InstrumentationConfiguration& src);
    InstrumentationConfiguration(InstrumentationConfiguration&& src);
    InstrumentationConfiguration(const PlayFabMultiplayerInstrumentationConfiguration& src);
    InstrumentationConfiguration& operator=(const InstrumentationConfiguration&) = delete;
    ~InstrumentationConfiguration() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_processesToMonitor;
};

struct CreateBuildWithManagedContainerRequest : public PlayFabMultiplayerCreateBuildWithManagedContainerRequest, public BaseModel
{
    CreateBuildWithManagedContainerRequest();
    CreateBuildWithManagedContainerRequest(const CreateBuildWithManagedContainerRequest& src);
    CreateBuildWithManagedContainerRequest(CreateBuildWithManagedContainerRequest&& src);
    CreateBuildWithManagedContainerRequest(const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& src);
    CreateBuildWithManagedContainerRequest& operator=(const CreateBuildWithManagedContainerRequest&) = delete;
    ~CreateBuildWithManagedContainerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildName;
    StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabMultiplayerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
    PointerArrayModel<PlayFabMultiplayerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    PointerArrayModel<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
};

struct CreateBuildWithManagedContainerResponse : public PlayFabMultiplayerCreateBuildWithManagedContainerResponse, public BaseModel, public ApiResult
{
    CreateBuildWithManagedContainerResponse();
    CreateBuildWithManagedContainerResponse(const CreateBuildWithManagedContainerResponse& src);
    CreateBuildWithManagedContainerResponse(CreateBuildWithManagedContainerResponse&& src);
    CreateBuildWithManagedContainerResponse(const PlayFabMultiplayerCreateBuildWithManagedContainerResponse& src);
    CreateBuildWithManagedContainerResponse& operator=(const CreateBuildWithManagedContainerResponse&) = delete;
    ~CreateBuildWithManagedContainerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
    StdExtra::optional<time_t> m_creationTime;
    PointerArrayModel<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    PointerArrayModel<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
};

struct CreateBuildWithProcessBasedServerRequest : public PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest, public BaseModel
{
    CreateBuildWithProcessBasedServerRequest();
    CreateBuildWithProcessBasedServerRequest(const CreateBuildWithProcessBasedServerRequest& src);
    CreateBuildWithProcessBasedServerRequest(CreateBuildWithProcessBasedServerRequest&& src);
    CreateBuildWithProcessBasedServerRequest(const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& src);
    CreateBuildWithProcessBasedServerRequest& operator=(const CreateBuildWithProcessBasedServerRequest&) = delete;
    ~CreateBuildWithProcessBasedServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildName;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabMultiplayerAssetReferenceParams, AssetReferenceParams> m_gameAssetReferences;
    PointerArrayModel<PlayFabMultiplayerGameCertificateReferenceParams, GameCertificateReferenceParams> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    StdExtra::optional<bool> m_isOSPreview;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    PointerArrayModel<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_regionConfigurations;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
};

struct CreateBuildWithProcessBasedServerResponse : public PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse, public BaseModel, public ApiResult
{
    CreateBuildWithProcessBasedServerResponse();
    CreateBuildWithProcessBasedServerResponse(const CreateBuildWithProcessBasedServerResponse& src);
    CreateBuildWithProcessBasedServerResponse(CreateBuildWithProcessBasedServerResponse&& src);
    CreateBuildWithProcessBasedServerResponse(const PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse& src);
    CreateBuildWithProcessBasedServerResponse& operator=(const CreateBuildWithProcessBasedServerResponse&) = delete;
    ~CreateBuildWithProcessBasedServerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
    StdExtra::optional<time_t> m_creationTime;
    PointerArrayModel<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    String m_gameWorkingDirectory;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    StdExtra::optional<bool> m_isOSPreview;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    PointerArrayModel<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
};

struct MatchmakingPlayerAttributes : public PlayFabMultiplayerMatchmakingPlayerAttributes, public BaseModel
{
    MatchmakingPlayerAttributes();
    MatchmakingPlayerAttributes(const MatchmakingPlayerAttributes& src);
    MatchmakingPlayerAttributes(MatchmakingPlayerAttributes&& src);
    MatchmakingPlayerAttributes(const PlayFabMultiplayerMatchmakingPlayerAttributes& src);
    MatchmakingPlayerAttributes& operator=(const MatchmakingPlayerAttributes&) = delete;
    ~MatchmakingPlayerAttributes() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_dataObject;
    String m_escapedDataObject;
};

struct MatchmakingPlayer : public PlayFabMultiplayerMatchmakingPlayer, public BaseModel
{
    MatchmakingPlayer();
    MatchmakingPlayer(const MatchmakingPlayer& src);
    MatchmakingPlayer(MatchmakingPlayer&& src);
    MatchmakingPlayer(const PlayFabMultiplayerMatchmakingPlayer& src);
    MatchmakingPlayer& operator=(const MatchmakingPlayer&) = delete;
    ~MatchmakingPlayer() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<MatchmakingPlayerAttributes> m_attributes;
    EntityKey m_entity;
};

struct CreateMatchmakingTicketRequest : public PlayFabMultiplayerCreateMatchmakingTicketRequest, public BaseModel
{
    CreateMatchmakingTicketRequest();
    CreateMatchmakingTicketRequest(const CreateMatchmakingTicketRequest& src);
    CreateMatchmakingTicketRequest(CreateMatchmakingTicketRequest&& src);
    CreateMatchmakingTicketRequest(const PlayFabMultiplayerCreateMatchmakingTicketRequest& src);
    CreateMatchmakingTicketRequest& operator=(const CreateMatchmakingTicketRequest&) = delete;
    ~CreateMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    MatchmakingPlayer m_creator;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabEntityKey, EntityKey> m_membersToMatchWith;
    String m_queueName;
};

struct CreateMatchmakingTicketResult : public PlayFabMultiplayerCreateMatchmakingTicketResult, public SerializableModel, public ApiResult
{
    CreateMatchmakingTicketResult();
    CreateMatchmakingTicketResult(const CreateMatchmakingTicketResult& src);
    CreateMatchmakingTicketResult(CreateMatchmakingTicketResult&& src);
    CreateMatchmakingTicketResult(const PlayFabMultiplayerCreateMatchmakingTicketResult& src);
    CreateMatchmakingTicketResult& operator=(const CreateMatchmakingTicketResult&) = delete;
    ~CreateMatchmakingTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_ticketId;
};

struct CreateRemoteUserRequest : public PlayFabMultiplayerCreateRemoteUserRequest, public BaseModel
{
    CreateRemoteUserRequest();
    CreateRemoteUserRequest(const CreateRemoteUserRequest& src);
    CreateRemoteUserRequest(CreateRemoteUserRequest&& src);
    CreateRemoteUserRequest(const PlayFabMultiplayerCreateRemoteUserRequest& src);
    CreateRemoteUserRequest& operator=(const CreateRemoteUserRequest&) = delete;
    ~CreateRemoteUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<time_t> m_expirationTime;
    String m_region;
    String m_username;
    String m_vmId;
};

struct CreateRemoteUserResponse : public PlayFabMultiplayerCreateRemoteUserResponse, public BaseModel, public ApiResult
{
    CreateRemoteUserResponse();
    CreateRemoteUserResponse(const CreateRemoteUserResponse& src);
    CreateRemoteUserResponse(CreateRemoteUserResponse&& src);
    CreateRemoteUserResponse(const PlayFabMultiplayerCreateRemoteUserResponse& src);
    CreateRemoteUserResponse& operator=(const CreateRemoteUserResponse&) = delete;
    ~CreateRemoteUserResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_expirationTime;
    String m_password;
    String m_username;
};

struct MatchmakingPlayerWithTeamAssignment : public PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, public BaseModel
{
    MatchmakingPlayerWithTeamAssignment();
    MatchmakingPlayerWithTeamAssignment(const MatchmakingPlayerWithTeamAssignment& src);
    MatchmakingPlayerWithTeamAssignment(MatchmakingPlayerWithTeamAssignment&& src);
    MatchmakingPlayerWithTeamAssignment(const PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment& src);
    MatchmakingPlayerWithTeamAssignment& operator=(const MatchmakingPlayerWithTeamAssignment&) = delete;
    ~MatchmakingPlayerWithTeamAssignment() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<MatchmakingPlayerAttributes> m_attributes;
    EntityKey m_entity;
    String m_teamId;
};

struct ServerDetails : public PlayFabMultiplayerServerDetails, public BaseModel
{
    ServerDetails();
    ServerDetails(const ServerDetails& src);
    ServerDetails(ServerDetails&& src);
    ServerDetails(const PlayFabMultiplayerServerDetails& src);
    ServerDetails& operator=(const ServerDetails&) = delete;
    ~ServerDetails() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_fqdn;
    String m_iPV4Address;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    String m_region;
};

struct CreateServerBackfillTicketRequest : public PlayFabMultiplayerCreateServerBackfillTicketRequest, public BaseModel
{
    CreateServerBackfillTicketRequest();
    CreateServerBackfillTicketRequest(const CreateServerBackfillTicketRequest& src);
    CreateServerBackfillTicketRequest(CreateServerBackfillTicketRequest&& src);
    CreateServerBackfillTicketRequest(const PlayFabMultiplayerCreateServerBackfillTicketRequest& src);
    CreateServerBackfillTicketRequest& operator=(const CreateServerBackfillTicketRequest&) = delete;
    ~CreateServerBackfillTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
    String m_queueName;
    StdExtra::optional<ServerDetails> m_serverDetails;
};

struct CreateServerBackfillTicketResult : public PlayFabMultiplayerCreateServerBackfillTicketResult, public SerializableModel, public ApiResult
{
    CreateServerBackfillTicketResult();
    CreateServerBackfillTicketResult(const CreateServerBackfillTicketResult& src);
    CreateServerBackfillTicketResult(CreateServerBackfillTicketResult&& src);
    CreateServerBackfillTicketResult(const PlayFabMultiplayerCreateServerBackfillTicketResult& src);
    CreateServerBackfillTicketResult& operator=(const CreateServerBackfillTicketResult&) = delete;
    ~CreateServerBackfillTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_ticketId;
};

struct CreateServerMatchmakingTicketRequest : public PlayFabMultiplayerCreateServerMatchmakingTicketRequest, public BaseModel
{
    CreateServerMatchmakingTicketRequest();
    CreateServerMatchmakingTicketRequest(const CreateServerMatchmakingTicketRequest& src);
    CreateServerMatchmakingTicketRequest(CreateServerMatchmakingTicketRequest&& src);
    CreateServerMatchmakingTicketRequest(const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& src);
    CreateServerMatchmakingTicketRequest& operator=(const CreateServerMatchmakingTicketRequest&) = delete;
    ~CreateServerMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabMultiplayerMatchmakingPlayer, MatchmakingPlayer> m_members;
    String m_queueName;
};

struct CreateTitleMultiplayerServersQuotaChangeRequest : public PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest, public BaseModel
{
    CreateTitleMultiplayerServersQuotaChangeRequest();
    CreateTitleMultiplayerServersQuotaChangeRequest(const CreateTitleMultiplayerServersQuotaChangeRequest& src);
    CreateTitleMultiplayerServersQuotaChangeRequest(CreateTitleMultiplayerServersQuotaChangeRequest&& src);
    CreateTitleMultiplayerServersQuotaChangeRequest(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& src);
    CreateTitleMultiplayerServersQuotaChangeRequest& operator=(const CreateTitleMultiplayerServersQuotaChangeRequest&) = delete;
    ~CreateTitleMultiplayerServersQuotaChangeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_changeDescription;
    PointerArrayModel<PlayFabMultiplayerCoreCapacityChange, CoreCapacityChange> m_changes;
    String m_contactEmail;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_notes;
    StdExtra::optional<time_t> m_startDate;
};

struct CreateTitleMultiplayerServersQuotaChangeResponse : public PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse, public SerializableModel, public ApiResult
{
    CreateTitleMultiplayerServersQuotaChangeResponse();
    CreateTitleMultiplayerServersQuotaChangeResponse(const CreateTitleMultiplayerServersQuotaChangeResponse& src);
    CreateTitleMultiplayerServersQuotaChangeResponse(CreateTitleMultiplayerServersQuotaChangeResponse&& src);
    CreateTitleMultiplayerServersQuotaChangeResponse(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse& src);
    CreateTitleMultiplayerServersQuotaChangeResponse& operator=(const CreateTitleMultiplayerServersQuotaChangeResponse&) = delete;
    ~CreateTitleMultiplayerServersQuotaChangeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_requestId;
};

struct DeleteAssetRequest : public PlayFabMultiplayerDeleteAssetRequest, public BaseModel
{
    DeleteAssetRequest();
    DeleteAssetRequest(const DeleteAssetRequest& src);
    DeleteAssetRequest(DeleteAssetRequest&& src);
    DeleteAssetRequest(const PlayFabMultiplayerDeleteAssetRequest& src);
    DeleteAssetRequest& operator=(const DeleteAssetRequest&) = delete;
    ~DeleteAssetRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_fileName;
};

struct DeleteBuildAliasRequest : public PlayFabMultiplayerDeleteBuildAliasRequest, public BaseModel
{
    DeleteBuildAliasRequest();
    DeleteBuildAliasRequest(const DeleteBuildAliasRequest& src);
    DeleteBuildAliasRequest(DeleteBuildAliasRequest&& src);
    DeleteBuildAliasRequest(const PlayFabMultiplayerDeleteBuildAliasRequest& src);
    DeleteBuildAliasRequest& operator=(const DeleteBuildAliasRequest&) = delete;
    ~DeleteBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct DeleteBuildRegionRequest : public PlayFabMultiplayerDeleteBuildRegionRequest, public BaseModel
{
    DeleteBuildRegionRequest();
    DeleteBuildRegionRequest(const DeleteBuildRegionRequest& src);
    DeleteBuildRegionRequest(DeleteBuildRegionRequest&& src);
    DeleteBuildRegionRequest(const PlayFabMultiplayerDeleteBuildRegionRequest& src);
    DeleteBuildRegionRequest& operator=(const DeleteBuildRegionRequest&) = delete;
    ~DeleteBuildRegionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_region;
};

struct DeleteBuildRequest : public PlayFabMultiplayerDeleteBuildRequest, public BaseModel
{
    DeleteBuildRequest();
    DeleteBuildRequest(const DeleteBuildRequest& src);
    DeleteBuildRequest(DeleteBuildRequest&& src);
    DeleteBuildRequest(const PlayFabMultiplayerDeleteBuildRequest& src);
    DeleteBuildRequest& operator=(const DeleteBuildRequest&) = delete;
    ~DeleteBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct DeleteCertificateRequest : public PlayFabMultiplayerDeleteCertificateRequest, public BaseModel
{
    DeleteCertificateRequest();
    DeleteCertificateRequest(const DeleteCertificateRequest& src);
    DeleteCertificateRequest(DeleteCertificateRequest&& src);
    DeleteCertificateRequest(const PlayFabMultiplayerDeleteCertificateRequest& src);
    DeleteCertificateRequest& operator=(const DeleteCertificateRequest&) = delete;
    ~DeleteCertificateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_name;
};

struct DeleteContainerImageRequest : public PlayFabMultiplayerDeleteContainerImageRequest, public BaseModel
{
    DeleteContainerImageRequest();
    DeleteContainerImageRequest(const DeleteContainerImageRequest& src);
    DeleteContainerImageRequest(DeleteContainerImageRequest&& src);
    DeleteContainerImageRequest(const PlayFabMultiplayerDeleteContainerImageRequest& src);
    DeleteContainerImageRequest& operator=(const DeleteContainerImageRequest&) = delete;
    ~DeleteContainerImageRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_imageName;
};

struct DeleteRemoteUserRequest : public PlayFabMultiplayerDeleteRemoteUserRequest, public BaseModel
{
    DeleteRemoteUserRequest();
    DeleteRemoteUserRequest(const DeleteRemoteUserRequest& src);
    DeleteRemoteUserRequest(DeleteRemoteUserRequest&& src);
    DeleteRemoteUserRequest(const PlayFabMultiplayerDeleteRemoteUserRequest& src);
    DeleteRemoteUserRequest& operator=(const DeleteRemoteUserRequest&) = delete;
    ~DeleteRemoteUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_username;
    String m_vmId;
};

struct EnableMultiplayerServersForTitleRequest : public PlayFabMultiplayerEnableMultiplayerServersForTitleRequest, public BaseModel
{
    EnableMultiplayerServersForTitleRequest();
    EnableMultiplayerServersForTitleRequest(const EnableMultiplayerServersForTitleRequest& src);
    EnableMultiplayerServersForTitleRequest(EnableMultiplayerServersForTitleRequest&& src);
    EnableMultiplayerServersForTitleRequest(const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& src);
    EnableMultiplayerServersForTitleRequest& operator=(const EnableMultiplayerServersForTitleRequest&) = delete;
    ~EnableMultiplayerServersForTitleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct EnableMultiplayerServersForTitleResponse : public PlayFabMultiplayerEnableMultiplayerServersForTitleResponse, public BaseModel, public ApiResult
{
    EnableMultiplayerServersForTitleResponse();
    EnableMultiplayerServersForTitleResponse(const EnableMultiplayerServersForTitleResponse& src);
    EnableMultiplayerServersForTitleResponse(EnableMultiplayerServersForTitleResponse&& src);
    EnableMultiplayerServersForTitleResponse(const PlayFabMultiplayerEnableMultiplayerServersForTitleResponse& src);
    EnableMultiplayerServersForTitleResponse& operator=(const EnableMultiplayerServersForTitleResponse&) = delete;
    ~EnableMultiplayerServersForTitleResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabMultiplayerTitleMultiplayerServerEnabledStatus> m_status;
};

struct GetAssetDownloadUrlRequest : public PlayFabMultiplayerGetAssetDownloadUrlRequest, public BaseModel
{
    GetAssetDownloadUrlRequest();
    GetAssetDownloadUrlRequest(const GetAssetDownloadUrlRequest& src);
    GetAssetDownloadUrlRequest(GetAssetDownloadUrlRequest&& src);
    GetAssetDownloadUrlRequest(const PlayFabMultiplayerGetAssetDownloadUrlRequest& src);
    GetAssetDownloadUrlRequest& operator=(const GetAssetDownloadUrlRequest&) = delete;
    ~GetAssetDownloadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_fileName;
};

struct GetAssetDownloadUrlResponse : public PlayFabMultiplayerGetAssetDownloadUrlResponse, public SerializableModel, public ApiResult
{
    GetAssetDownloadUrlResponse();
    GetAssetDownloadUrlResponse(const GetAssetDownloadUrlResponse& src);
    GetAssetDownloadUrlResponse(GetAssetDownloadUrlResponse&& src);
    GetAssetDownloadUrlResponse(const PlayFabMultiplayerGetAssetDownloadUrlResponse& src);
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

struct GetAssetUploadUrlRequest : public PlayFabMultiplayerGetAssetUploadUrlRequest, public BaseModel
{
    GetAssetUploadUrlRequest();
    GetAssetUploadUrlRequest(const GetAssetUploadUrlRequest& src);
    GetAssetUploadUrlRequest(GetAssetUploadUrlRequest&& src);
    GetAssetUploadUrlRequest(const PlayFabMultiplayerGetAssetUploadUrlRequest& src);
    GetAssetUploadUrlRequest& operator=(const GetAssetUploadUrlRequest&) = delete;
    ~GetAssetUploadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_fileName;
};

struct GetAssetUploadUrlResponse : public PlayFabMultiplayerGetAssetUploadUrlResponse, public SerializableModel, public ApiResult
{
    GetAssetUploadUrlResponse();
    GetAssetUploadUrlResponse(const GetAssetUploadUrlResponse& src);
    GetAssetUploadUrlResponse(GetAssetUploadUrlResponse&& src);
    GetAssetUploadUrlResponse(const PlayFabMultiplayerGetAssetUploadUrlResponse& src);
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

struct GetBuildAliasRequest : public PlayFabMultiplayerGetBuildAliasRequest, public BaseModel
{
    GetBuildAliasRequest();
    GetBuildAliasRequest(const GetBuildAliasRequest& src);
    GetBuildAliasRequest(GetBuildAliasRequest&& src);
    GetBuildAliasRequest(const PlayFabMultiplayerGetBuildAliasRequest& src);
    GetBuildAliasRequest& operator=(const GetBuildAliasRequest&) = delete;
    ~GetBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetBuildRequest : public PlayFabMultiplayerGetBuildRequest, public BaseModel
{
    GetBuildRequest();
    GetBuildRequest(const GetBuildRequest& src);
    GetBuildRequest(GetBuildRequest&& src);
    GetBuildRequest(const PlayFabMultiplayerGetBuildRequest& src);
    GetBuildRequest& operator=(const GetBuildRequest&) = delete;
    ~GetBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetBuildResponse : public PlayFabMultiplayerGetBuildResponse, public BaseModel, public ApiResult
{
    GetBuildResponse();
    GetBuildResponse(const GetBuildResponse& src);
    GetBuildResponse(GetBuildResponse&& src);
    GetBuildResponse(const PlayFabMultiplayerGetBuildResponse& src);
    GetBuildResponse& operator=(const GetBuildResponse&) = delete;
    ~GetBuildResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_areAssetsReadonly;
    String m_buildId;
    String m_buildName;
    String m_buildStatus;
    StdExtra::optional<PlayFabMultiplayerContainerFlavor> m_containerFlavor;
    String m_containerRunCommand;
    StdExtra::optional<time_t> m_creationTime;
    StdExtra::optional<ContainerImageReference> m_customGameContainerImage;
    PointerArrayModel<PlayFabMultiplayerAssetReference, AssetReference> m_gameAssetReferences;
    PointerArrayModel<PlayFabMultiplayerGameCertificateReference, GameCertificateReference> m_gameCertificateReferences;
    StdExtra::optional<InstrumentationConfiguration> m_instrumentationConfiguration;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_metadata;
    String m_osPlatform;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    PointerArrayModel<PlayFabMultiplayerBuildRegion, BuildRegion> m_regionConfigurations;
    String m_serverType;
    String m_startMultiplayerServerCommand;
    StdExtra::optional<bool> m_useStreamingForAssetDownloads;
    StdExtra::optional<PlayFabMultiplayerAzureVmSize> m_vmSize;
};

struct GetContainerRegistryCredentialsRequest : public PlayFabMultiplayerGetContainerRegistryCredentialsRequest, public BaseModel
{
    GetContainerRegistryCredentialsRequest();
    GetContainerRegistryCredentialsRequest(const GetContainerRegistryCredentialsRequest& src);
    GetContainerRegistryCredentialsRequest(GetContainerRegistryCredentialsRequest&& src);
    GetContainerRegistryCredentialsRequest(const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& src);
    GetContainerRegistryCredentialsRequest& operator=(const GetContainerRegistryCredentialsRequest&) = delete;
    ~GetContainerRegistryCredentialsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetContainerRegistryCredentialsResponse : public PlayFabMultiplayerGetContainerRegistryCredentialsResponse, public SerializableModel, public ApiResult
{
    GetContainerRegistryCredentialsResponse();
    GetContainerRegistryCredentialsResponse(const GetContainerRegistryCredentialsResponse& src);
    GetContainerRegistryCredentialsResponse(GetContainerRegistryCredentialsResponse&& src);
    GetContainerRegistryCredentialsResponse(const PlayFabMultiplayerGetContainerRegistryCredentialsResponse& src);
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

struct GetMatchmakingTicketRequest : public PlayFabMultiplayerGetMatchmakingTicketRequest, public BaseModel
{
    GetMatchmakingTicketRequest();
    GetMatchmakingTicketRequest(const GetMatchmakingTicketRequest& src);
    GetMatchmakingTicketRequest(GetMatchmakingTicketRequest&& src);
    GetMatchmakingTicketRequest(const PlayFabMultiplayerGetMatchmakingTicketRequest& src);
    GetMatchmakingTicketRequest& operator=(const GetMatchmakingTicketRequest&) = delete;
    ~GetMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct GetMatchmakingTicketResult : public PlayFabMultiplayerGetMatchmakingTicketResult, public BaseModel, public ApiResult
{
    GetMatchmakingTicketResult();
    GetMatchmakingTicketResult(const GetMatchmakingTicketResult& src);
    GetMatchmakingTicketResult(GetMatchmakingTicketResult&& src);
    GetMatchmakingTicketResult(const PlayFabMultiplayerGetMatchmakingTicketResult& src);
    GetMatchmakingTicketResult& operator=(const GetMatchmakingTicketResult&) = delete;
    ~GetMatchmakingTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_cancellationReasonString;
    EntityKey m_creator;
    String m_matchId;
    PointerArrayModel<PlayFabMultiplayerMatchmakingPlayer, MatchmakingPlayer> m_members;
    PointerArrayModel<PlayFabEntityKey, EntityKey> m_membersToMatchWith;
    String m_queueName;
    String m_status;
    String m_ticketId;
};

struct GetMatchRequest : public PlayFabMultiplayerGetMatchRequest, public BaseModel
{
    GetMatchRequest();
    GetMatchRequest(const GetMatchRequest& src);
    GetMatchRequest(GetMatchRequest&& src);
    GetMatchRequest(const PlayFabMultiplayerGetMatchRequest& src);
    GetMatchRequest& operator=(const GetMatchRequest&) = delete;
    ~GetMatchRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_matchId;
    String m_queueName;
};

struct GetMatchResult : public PlayFabMultiplayerGetMatchResult, public BaseModel, public ApiResult
{
    GetMatchResult();
    GetMatchResult(const GetMatchResult& src);
    GetMatchResult(GetMatchResult&& src);
    GetMatchResult(const PlayFabMultiplayerGetMatchResult& src);
    GetMatchResult& operator=(const GetMatchResult&) = delete;
    ~GetMatchResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_matchId;
    PointerArrayModel<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
    PointerArrayModel<char, String> m_regionPreferences;
    StdExtra::optional<ServerDetails> m_serverDetails;
};

struct GetMultiplayerServerDetailsRequest : public PlayFabMultiplayerGetMultiplayerServerDetailsRequest, public BaseModel
{
    GetMultiplayerServerDetailsRequest();
    GetMultiplayerServerDetailsRequest(const GetMultiplayerServerDetailsRequest& src);
    GetMultiplayerServerDetailsRequest(GetMultiplayerServerDetailsRequest&& src);
    GetMultiplayerServerDetailsRequest(const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& src);
    GetMultiplayerServerDetailsRequest& operator=(const GetMultiplayerServerDetailsRequest&) = delete;
    ~GetMultiplayerServerDetailsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_sessionId;
};

struct GetMultiplayerServerDetailsResponse : public PlayFabMultiplayerGetMultiplayerServerDetailsResponse, public BaseModel, public ApiResult
{
    GetMultiplayerServerDetailsResponse();
    GetMultiplayerServerDetailsResponse(const GetMultiplayerServerDetailsResponse& src);
    GetMultiplayerServerDetailsResponse(GetMultiplayerServerDetailsResponse&& src);
    GetMultiplayerServerDetailsResponse(const PlayFabMultiplayerGetMultiplayerServerDetailsResponse& src);
    GetMultiplayerServerDetailsResponse& operator=(const GetMultiplayerServerDetailsResponse&) = delete;
    ~GetMultiplayerServerDetailsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    PointerArrayModel<PlayFabMultiplayerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
    String m_fQDN;
    String m_iPV4Address;
    StdExtra::optional<time_t> m_lastStateTransitionTime;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    String m_region;
    String m_serverId;
    String m_sessionId;
    String m_state;
    String m_vmId;
};

struct GetMultiplayerServerLogsRequest : public PlayFabMultiplayerGetMultiplayerServerLogsRequest, public BaseModel
{
    GetMultiplayerServerLogsRequest();
    GetMultiplayerServerLogsRequest(const GetMultiplayerServerLogsRequest& src);
    GetMultiplayerServerLogsRequest(GetMultiplayerServerLogsRequest&& src);
    GetMultiplayerServerLogsRequest(const PlayFabMultiplayerGetMultiplayerServerLogsRequest& src);
    GetMultiplayerServerLogsRequest& operator=(const GetMultiplayerServerLogsRequest&) = delete;
    ~GetMultiplayerServerLogsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_serverId;
};

struct GetMultiplayerServerLogsResponse : public PlayFabMultiplayerGetMultiplayerServerLogsResponse, public SerializableModel, public ApiResult
{
    GetMultiplayerServerLogsResponse();
    GetMultiplayerServerLogsResponse(const GetMultiplayerServerLogsResponse& src);
    GetMultiplayerServerLogsResponse(GetMultiplayerServerLogsResponse&& src);
    GetMultiplayerServerLogsResponse(const PlayFabMultiplayerGetMultiplayerServerLogsResponse& src);
    GetMultiplayerServerLogsResponse& operator=(const GetMultiplayerServerLogsResponse&) = delete;
    ~GetMultiplayerServerLogsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_logDownloadUrl;
};

struct GetMultiplayerSessionLogsBySessionIdRequest : public PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest, public BaseModel
{
    GetMultiplayerSessionLogsBySessionIdRequest();
    GetMultiplayerSessionLogsBySessionIdRequest(const GetMultiplayerSessionLogsBySessionIdRequest& src);
    GetMultiplayerSessionLogsBySessionIdRequest(GetMultiplayerSessionLogsBySessionIdRequest&& src);
    GetMultiplayerSessionLogsBySessionIdRequest(const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& src);
    GetMultiplayerSessionLogsBySessionIdRequest& operator=(const GetMultiplayerSessionLogsBySessionIdRequest&) = delete;
    ~GetMultiplayerSessionLogsBySessionIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_sessionId;
};

struct GetQueueStatisticsRequest : public PlayFabMultiplayerGetQueueStatisticsRequest, public BaseModel
{
    GetQueueStatisticsRequest();
    GetQueueStatisticsRequest(const GetQueueStatisticsRequest& src);
    GetQueueStatisticsRequest(GetQueueStatisticsRequest&& src);
    GetQueueStatisticsRequest(const PlayFabMultiplayerGetQueueStatisticsRequest& src);
    GetQueueStatisticsRequest& operator=(const GetQueueStatisticsRequest&) = delete;
    ~GetQueueStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_queueName;
};

struct Statistics : public PlayFabMultiplayerStatistics, public SerializableModel
{
    Statistics();
    Statistics(const Statistics&) = default;
    Statistics(Statistics&&) = default;
    Statistics(const PlayFabMultiplayerStatistics& src);
    Statistics& operator=(const Statistics&) = delete;
    ~Statistics() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetQueueStatisticsResult : public PlayFabMultiplayerGetQueueStatisticsResult, public BaseModel, public ApiResult
{
    GetQueueStatisticsResult();
    GetQueueStatisticsResult(const GetQueueStatisticsResult& src);
    GetQueueStatisticsResult(GetQueueStatisticsResult&& src);
    GetQueueStatisticsResult(const PlayFabMultiplayerGetQueueStatisticsResult& src);
    GetQueueStatisticsResult& operator=(const GetQueueStatisticsResult&) = delete;
    ~GetQueueStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_numberOfPlayersMatching;
    StdExtra::optional<Statistics> m_timeToMatchStatisticsInSeconds;
};

struct GetRemoteLoginEndpointRequest : public PlayFabMultiplayerGetRemoteLoginEndpointRequest, public BaseModel
{
    GetRemoteLoginEndpointRequest();
    GetRemoteLoginEndpointRequest(const GetRemoteLoginEndpointRequest& src);
    GetRemoteLoginEndpointRequest(GetRemoteLoginEndpointRequest&& src);
    GetRemoteLoginEndpointRequest(const PlayFabMultiplayerGetRemoteLoginEndpointRequest& src);
    GetRemoteLoginEndpointRequest& operator=(const GetRemoteLoginEndpointRequest&) = delete;
    ~GetRemoteLoginEndpointRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_vmId;
};

struct GetRemoteLoginEndpointResponse : public PlayFabMultiplayerGetRemoteLoginEndpointResponse, public SerializableModel, public ApiResult
{
    GetRemoteLoginEndpointResponse();
    GetRemoteLoginEndpointResponse(const GetRemoteLoginEndpointResponse& src);
    GetRemoteLoginEndpointResponse(GetRemoteLoginEndpointResponse&& src);
    GetRemoteLoginEndpointResponse(const PlayFabMultiplayerGetRemoteLoginEndpointResponse& src);
    GetRemoteLoginEndpointResponse& operator=(const GetRemoteLoginEndpointResponse&) = delete;
    ~GetRemoteLoginEndpointResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_iPV4Address;
};

struct GetServerBackfillTicketRequest : public PlayFabMultiplayerGetServerBackfillTicketRequest, public BaseModel
{
    GetServerBackfillTicketRequest();
    GetServerBackfillTicketRequest(const GetServerBackfillTicketRequest& src);
    GetServerBackfillTicketRequest(GetServerBackfillTicketRequest&& src);
    GetServerBackfillTicketRequest(const PlayFabMultiplayerGetServerBackfillTicketRequest& src);
    GetServerBackfillTicketRequest& operator=(const GetServerBackfillTicketRequest&) = delete;
    ~GetServerBackfillTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_queueName;
    String m_ticketId;
};

struct GetServerBackfillTicketResult : public PlayFabMultiplayerGetServerBackfillTicketResult, public BaseModel, public ApiResult
{
    GetServerBackfillTicketResult();
    GetServerBackfillTicketResult(const GetServerBackfillTicketResult& src);
    GetServerBackfillTicketResult(GetServerBackfillTicketResult&& src);
    GetServerBackfillTicketResult(const PlayFabMultiplayerGetServerBackfillTicketResult& src);
    GetServerBackfillTicketResult& operator=(const GetServerBackfillTicketResult&) = delete;
    ~GetServerBackfillTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_cancellationReasonString;
    String m_matchId;
    PointerArrayModel<PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment, MatchmakingPlayerWithTeamAssignment> m_members;
    String m_queueName;
    ServerDetails m_serverDetails;
    String m_status;
    String m_ticketId;
};

struct GetTitleEnabledForMultiplayerServersStatusRequest : public PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest, public BaseModel
{
    GetTitleEnabledForMultiplayerServersStatusRequest();
    GetTitleEnabledForMultiplayerServersStatusRequest(const GetTitleEnabledForMultiplayerServersStatusRequest& src);
    GetTitleEnabledForMultiplayerServersStatusRequest(GetTitleEnabledForMultiplayerServersStatusRequest&& src);
    GetTitleEnabledForMultiplayerServersStatusRequest(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& src);
    GetTitleEnabledForMultiplayerServersStatusRequest& operator=(const GetTitleEnabledForMultiplayerServersStatusRequest&) = delete;
    ~GetTitleEnabledForMultiplayerServersStatusRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct GetTitleEnabledForMultiplayerServersStatusResponse : public PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse, public BaseModel, public ApiResult
{
    GetTitleEnabledForMultiplayerServersStatusResponse();
    GetTitleEnabledForMultiplayerServersStatusResponse(const GetTitleEnabledForMultiplayerServersStatusResponse& src);
    GetTitleEnabledForMultiplayerServersStatusResponse(GetTitleEnabledForMultiplayerServersStatusResponse&& src);
    GetTitleEnabledForMultiplayerServersStatusResponse(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& src);
    GetTitleEnabledForMultiplayerServersStatusResponse& operator=(const GetTitleEnabledForMultiplayerServersStatusResponse&) = delete;
    ~GetTitleEnabledForMultiplayerServersStatusResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabMultiplayerTitleMultiplayerServerEnabledStatus> m_status;
};

struct GetTitleMultiplayerServersQuotaChangeRequest : public PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest, public BaseModel
{
    GetTitleMultiplayerServersQuotaChangeRequest();
    GetTitleMultiplayerServersQuotaChangeRequest(const GetTitleMultiplayerServersQuotaChangeRequest& src);
    GetTitleMultiplayerServersQuotaChangeRequest(GetTitleMultiplayerServersQuotaChangeRequest&& src);
    GetTitleMultiplayerServersQuotaChangeRequest(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& src);
    GetTitleMultiplayerServersQuotaChangeRequest& operator=(const GetTitleMultiplayerServersQuotaChangeRequest&) = delete;
    ~GetTitleMultiplayerServersQuotaChangeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_requestId;
};

struct QuotaChange : public PlayFabMultiplayerQuotaChange, public BaseModel
{
    QuotaChange();
    QuotaChange(const QuotaChange& src);
    QuotaChange(QuotaChange&& src);
    QuotaChange(const PlayFabMultiplayerQuotaChange& src);
    QuotaChange& operator=(const QuotaChange&) = delete;
    ~QuotaChange() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_changeDescription;
    PointerArrayModel<PlayFabMultiplayerCoreCapacityChange, CoreCapacityChange> m_changes;
    String m_notes;
    String m_requestId;
    String m_reviewComments;
};

struct GetTitleMultiplayerServersQuotaChangeResponse : public PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse, public BaseModel, public ApiResult
{
    GetTitleMultiplayerServersQuotaChangeResponse();
    GetTitleMultiplayerServersQuotaChangeResponse(const GetTitleMultiplayerServersQuotaChangeResponse& src);
    GetTitleMultiplayerServersQuotaChangeResponse(GetTitleMultiplayerServersQuotaChangeResponse&& src);
    GetTitleMultiplayerServersQuotaChangeResponse(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse& src);
    GetTitleMultiplayerServersQuotaChangeResponse& operator=(const GetTitleMultiplayerServersQuotaChangeResponse&) = delete;
    ~GetTitleMultiplayerServersQuotaChangeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<QuotaChange> m_change;
};

struct GetTitleMultiplayerServersQuotasRequest : public PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest, public BaseModel
{
    GetTitleMultiplayerServersQuotasRequest();
    GetTitleMultiplayerServersQuotasRequest(const GetTitleMultiplayerServersQuotasRequest& src);
    GetTitleMultiplayerServersQuotasRequest(GetTitleMultiplayerServersQuotasRequest&& src);
    GetTitleMultiplayerServersQuotasRequest(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& src);
    GetTitleMultiplayerServersQuotasRequest& operator=(const GetTitleMultiplayerServersQuotasRequest&) = delete;
    ~GetTitleMultiplayerServersQuotasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct TitleMultiplayerServersQuotas : public PlayFabMultiplayerTitleMultiplayerServersQuotas, public BaseModel
{
    TitleMultiplayerServersQuotas();
    TitleMultiplayerServersQuotas(const TitleMultiplayerServersQuotas& src);
    TitleMultiplayerServersQuotas(TitleMultiplayerServersQuotas&& src);
    TitleMultiplayerServersQuotas(const PlayFabMultiplayerTitleMultiplayerServersQuotas& src);
    TitleMultiplayerServersQuotas& operator=(const TitleMultiplayerServersQuotas&) = delete;
    ~TitleMultiplayerServersQuotas() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerCoreCapacity, CoreCapacity> m_coreCapacities;
};

struct GetTitleMultiplayerServersQuotasResponse : public PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse, public BaseModel, public ApiResult
{
    GetTitleMultiplayerServersQuotasResponse();
    GetTitleMultiplayerServersQuotasResponse(const GetTitleMultiplayerServersQuotasResponse& src);
    GetTitleMultiplayerServersQuotasResponse(GetTitleMultiplayerServersQuotasResponse&& src);
    GetTitleMultiplayerServersQuotasResponse(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse& src);
    GetTitleMultiplayerServersQuotasResponse& operator=(const GetTitleMultiplayerServersQuotasResponse&) = delete;
    ~GetTitleMultiplayerServersQuotasResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TitleMultiplayerServersQuotas> m_quotas;
};

struct JoinMatchmakingTicketRequest : public PlayFabMultiplayerJoinMatchmakingTicketRequest, public BaseModel
{
    JoinMatchmakingTicketRequest();
    JoinMatchmakingTicketRequest(const JoinMatchmakingTicketRequest& src);
    JoinMatchmakingTicketRequest(JoinMatchmakingTicketRequest&& src);
    JoinMatchmakingTicketRequest(const PlayFabMultiplayerJoinMatchmakingTicketRequest& src);
    JoinMatchmakingTicketRequest& operator=(const JoinMatchmakingTicketRequest&) = delete;
    ~JoinMatchmakingTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    MatchmakingPlayer m_member;
    String m_queueName;
    String m_ticketId;
};

struct ListAssetSummariesRequest : public PlayFabMultiplayerListAssetSummariesRequest, public BaseModel
{
    ListAssetSummariesRequest();
    ListAssetSummariesRequest(const ListAssetSummariesRequest& src);
    ListAssetSummariesRequest(ListAssetSummariesRequest&& src);
    ListAssetSummariesRequest(const PlayFabMultiplayerListAssetSummariesRequest& src);
    ListAssetSummariesRequest& operator=(const ListAssetSummariesRequest&) = delete;
    ~ListAssetSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct ListAssetSummariesResponse : public PlayFabMultiplayerListAssetSummariesResponse, public BaseModel, public ApiResult
{
    ListAssetSummariesResponse();
    ListAssetSummariesResponse(const ListAssetSummariesResponse& src);
    ListAssetSummariesResponse(ListAssetSummariesResponse&& src);
    ListAssetSummariesResponse(const PlayFabMultiplayerListAssetSummariesResponse& src);
    ListAssetSummariesResponse& operator=(const ListAssetSummariesResponse&) = delete;
    ~ListAssetSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerAssetSummary, AssetSummary> m_assetSummaries;
    String m_skipToken;
};

struct ListBuildAliasesRequest : public PlayFabMultiplayerListBuildAliasesRequest, public BaseModel
{
    ListBuildAliasesRequest();
    ListBuildAliasesRequest(const ListBuildAliasesRequest& src);
    ListBuildAliasesRequest(ListBuildAliasesRequest&& src);
    ListBuildAliasesRequest(const PlayFabMultiplayerListBuildAliasesRequest& src);
    ListBuildAliasesRequest& operator=(const ListBuildAliasesRequest&) = delete;
    ~ListBuildAliasesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct ListBuildAliasesResponse : public PlayFabMultiplayerListBuildAliasesResponse, public BaseModel, public ApiResult
{
    ListBuildAliasesResponse();
    ListBuildAliasesResponse(const ListBuildAliasesResponse& src);
    ListBuildAliasesResponse(ListBuildAliasesResponse&& src);
    ListBuildAliasesResponse(const PlayFabMultiplayerListBuildAliasesResponse& src);
    ListBuildAliasesResponse& operator=(const ListBuildAliasesResponse&) = delete;
    ~ListBuildAliasesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerBuildAliasDetailsResponse, BuildAliasDetailsResponse> m_buildAliases;
    String m_skipToken;
};

struct ListBuildSummariesRequest : public PlayFabMultiplayerListBuildSummariesRequest, public BaseModel
{
    ListBuildSummariesRequest();
    ListBuildSummariesRequest(const ListBuildSummariesRequest& src);
    ListBuildSummariesRequest(ListBuildSummariesRequest&& src);
    ListBuildSummariesRequest(const PlayFabMultiplayerListBuildSummariesRequest& src);
    ListBuildSummariesRequest& operator=(const ListBuildSummariesRequest&) = delete;
    ~ListBuildSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct ListBuildSummariesResponse : public PlayFabMultiplayerListBuildSummariesResponse, public BaseModel, public ApiResult
{
    ListBuildSummariesResponse();
    ListBuildSummariesResponse(const ListBuildSummariesResponse& src);
    ListBuildSummariesResponse(ListBuildSummariesResponse&& src);
    ListBuildSummariesResponse(const PlayFabMultiplayerListBuildSummariesResponse& src);
    ListBuildSummariesResponse& operator=(const ListBuildSummariesResponse&) = delete;
    ~ListBuildSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerBuildSummary, BuildSummary> m_buildSummaries;
    String m_skipToken;
};

struct ListCertificateSummariesRequest : public PlayFabMultiplayerListCertificateSummariesRequest, public BaseModel
{
    ListCertificateSummariesRequest();
    ListCertificateSummariesRequest(const ListCertificateSummariesRequest& src);
    ListCertificateSummariesRequest(ListCertificateSummariesRequest&& src);
    ListCertificateSummariesRequest(const PlayFabMultiplayerListCertificateSummariesRequest& src);
    ListCertificateSummariesRequest& operator=(const ListCertificateSummariesRequest&) = delete;
    ~ListCertificateSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct ListCertificateSummariesResponse : public PlayFabMultiplayerListCertificateSummariesResponse, public BaseModel, public ApiResult
{
    ListCertificateSummariesResponse();
    ListCertificateSummariesResponse(const ListCertificateSummariesResponse& src);
    ListCertificateSummariesResponse(ListCertificateSummariesResponse&& src);
    ListCertificateSummariesResponse(const PlayFabMultiplayerListCertificateSummariesResponse& src);
    ListCertificateSummariesResponse& operator=(const ListCertificateSummariesResponse&) = delete;
    ~ListCertificateSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerCertificateSummary, CertificateSummary> m_certificateSummaries;
    String m_skipToken;
};

struct ListContainerImagesRequest : public PlayFabMultiplayerListContainerImagesRequest, public BaseModel
{
    ListContainerImagesRequest();
    ListContainerImagesRequest(const ListContainerImagesRequest& src);
    ListContainerImagesRequest(ListContainerImagesRequest&& src);
    ListContainerImagesRequest(const PlayFabMultiplayerListContainerImagesRequest& src);
    ListContainerImagesRequest& operator=(const ListContainerImagesRequest&) = delete;
    ~ListContainerImagesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_skipToken;
};

struct ListContainerImagesResponse : public PlayFabMultiplayerListContainerImagesResponse, public BaseModel, public ApiResult
{
    ListContainerImagesResponse();
    ListContainerImagesResponse(const ListContainerImagesResponse& src);
    ListContainerImagesResponse(ListContainerImagesResponse&& src);
    ListContainerImagesResponse(const PlayFabMultiplayerListContainerImagesResponse& src);
    ListContainerImagesResponse& operator=(const ListContainerImagesResponse&) = delete;
    ~ListContainerImagesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_images;
    String m_skipToken;
};

struct ListContainerImageTagsRequest : public PlayFabMultiplayerListContainerImageTagsRequest, public BaseModel
{
    ListContainerImageTagsRequest();
    ListContainerImageTagsRequest(const ListContainerImageTagsRequest& src);
    ListContainerImageTagsRequest(ListContainerImageTagsRequest&& src);
    ListContainerImageTagsRequest(const PlayFabMultiplayerListContainerImageTagsRequest& src);
    ListContainerImageTagsRequest& operator=(const ListContainerImageTagsRequest&) = delete;
    ~ListContainerImageTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_imageName;
};

struct ListContainerImageTagsResponse : public PlayFabMultiplayerListContainerImageTagsResponse, public BaseModel, public ApiResult
{
    ListContainerImageTagsResponse();
    ListContainerImageTagsResponse(const ListContainerImageTagsResponse& src);
    ListContainerImageTagsResponse(ListContainerImageTagsResponse&& src);
    ListContainerImageTagsResponse(const PlayFabMultiplayerListContainerImageTagsResponse& src);
    ListContainerImageTagsResponse& operator=(const ListContainerImageTagsResponse&) = delete;
    ~ListContainerImageTagsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_tags;
};

struct ListMatchmakingTicketsForPlayerRequest : public PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest, public BaseModel
{
    ListMatchmakingTicketsForPlayerRequest();
    ListMatchmakingTicketsForPlayerRequest(const ListMatchmakingTicketsForPlayerRequest& src);
    ListMatchmakingTicketsForPlayerRequest(ListMatchmakingTicketsForPlayerRequest&& src);
    ListMatchmakingTicketsForPlayerRequest(const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& src);
    ListMatchmakingTicketsForPlayerRequest& operator=(const ListMatchmakingTicketsForPlayerRequest&) = delete;
    ~ListMatchmakingTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_queueName;
};

struct ListMatchmakingTicketsForPlayerResult : public PlayFabMultiplayerListMatchmakingTicketsForPlayerResult, public BaseModel, public ApiResult
{
    ListMatchmakingTicketsForPlayerResult();
    ListMatchmakingTicketsForPlayerResult(const ListMatchmakingTicketsForPlayerResult& src);
    ListMatchmakingTicketsForPlayerResult(ListMatchmakingTicketsForPlayerResult&& src);
    ListMatchmakingTicketsForPlayerResult(const PlayFabMultiplayerListMatchmakingTicketsForPlayerResult& src);
    ListMatchmakingTicketsForPlayerResult& operator=(const ListMatchmakingTicketsForPlayerResult&) = delete;
    ~ListMatchmakingTicketsForPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_ticketIds;
};

struct ListMultiplayerServersRequest : public PlayFabMultiplayerListMultiplayerServersRequest, public BaseModel
{
    ListMultiplayerServersRequest();
    ListMultiplayerServersRequest(const ListMultiplayerServersRequest& src);
    ListMultiplayerServersRequest(ListMultiplayerServersRequest&& src);
    ListMultiplayerServersRequest(const PlayFabMultiplayerListMultiplayerServersRequest& src);
    ListMultiplayerServersRequest& operator=(const ListMultiplayerServersRequest&) = delete;
    ~ListMultiplayerServersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_region;
    String m_skipToken;
};

struct MultiplayerServerSummary : public PlayFabMultiplayerMultiplayerServerSummary, public BaseModel
{
    MultiplayerServerSummary();
    MultiplayerServerSummary(const MultiplayerServerSummary& src);
    MultiplayerServerSummary(MultiplayerServerSummary&& src);
    MultiplayerServerSummary(const PlayFabMultiplayerMultiplayerServerSummary& src);
    MultiplayerServerSummary& operator=(const MultiplayerServerSummary&) = delete;
    ~MultiplayerServerSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
    StdExtra::optional<time_t> m_lastStateTransitionTime;
    String m_region;
    String m_serverId;
    String m_sessionId;
    String m_state;
    String m_vmId;
};

struct ListMultiplayerServersResponse : public PlayFabMultiplayerListMultiplayerServersResponse, public BaseModel, public ApiResult
{
    ListMultiplayerServersResponse();
    ListMultiplayerServersResponse(const ListMultiplayerServersResponse& src);
    ListMultiplayerServersResponse(ListMultiplayerServersResponse&& src);
    ListMultiplayerServersResponse(const PlayFabMultiplayerListMultiplayerServersResponse& src);
    ListMultiplayerServersResponse& operator=(const ListMultiplayerServersResponse&) = delete;
    ~ListMultiplayerServersResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerMultiplayerServerSummary, MultiplayerServerSummary> m_multiplayerServerSummaries;
    String m_skipToken;
};

struct ListPartyQosServersRequest : public PlayFabMultiplayerListPartyQosServersRequest, public BaseModel
{
    ListPartyQosServersRequest();
    ListPartyQosServersRequest(const ListPartyQosServersRequest& src);
    ListPartyQosServersRequest(ListPartyQosServersRequest&& src);
    ListPartyQosServersRequest(const PlayFabMultiplayerListPartyQosServersRequest& src);
    ListPartyQosServersRequest& operator=(const ListPartyQosServersRequest&) = delete;
    ~ListPartyQosServersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct QosServer : public PlayFabMultiplayerQosServer, public SerializableModel
{
    QosServer();
    QosServer(const QosServer& src);
    QosServer(QosServer&& src);
    QosServer(const PlayFabMultiplayerQosServer& src);
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

struct ListPartyQosServersResponse : public PlayFabMultiplayerListPartyQosServersResponse, public BaseModel, public ApiResult
{
    ListPartyQosServersResponse();
    ListPartyQosServersResponse(const ListPartyQosServersResponse& src);
    ListPartyQosServersResponse(ListPartyQosServersResponse&& src);
    ListPartyQosServersResponse(const PlayFabMultiplayerListPartyQosServersResponse& src);
    ListPartyQosServersResponse& operator=(const ListPartyQosServersResponse&) = delete;
    ~ListPartyQosServersResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerQosServer, QosServer> m_qosServers;
    String m_skipToken;
};

struct ListQosServersForTitleRequest : public PlayFabMultiplayerListQosServersForTitleRequest, public BaseModel
{
    ListQosServersForTitleRequest();
    ListQosServersForTitleRequest(const ListQosServersForTitleRequest& src);
    ListQosServersForTitleRequest(ListQosServersForTitleRequest&& src);
    ListQosServersForTitleRequest(const PlayFabMultiplayerListQosServersForTitleRequest& src);
    ListQosServersForTitleRequest& operator=(const ListQosServersForTitleRequest&) = delete;
    ~ListQosServersForTitleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeAllRegions;
};

struct ListQosServersForTitleResponse : public PlayFabMultiplayerListQosServersForTitleResponse, public BaseModel, public ApiResult
{
    ListQosServersForTitleResponse();
    ListQosServersForTitleResponse(const ListQosServersForTitleResponse& src);
    ListQosServersForTitleResponse(ListQosServersForTitleResponse&& src);
    ListQosServersForTitleResponse(const PlayFabMultiplayerListQosServersForTitleResponse& src);
    ListQosServersForTitleResponse& operator=(const ListQosServersForTitleResponse&) = delete;
    ~ListQosServersForTitleResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerQosServer, QosServer> m_qosServers;
    String m_skipToken;
};

struct ListServerBackfillTicketsForPlayerRequest : public PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest, public BaseModel
{
    ListServerBackfillTicketsForPlayerRequest();
    ListServerBackfillTicketsForPlayerRequest(const ListServerBackfillTicketsForPlayerRequest& src);
    ListServerBackfillTicketsForPlayerRequest(ListServerBackfillTicketsForPlayerRequest&& src);
    ListServerBackfillTicketsForPlayerRequest(const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& src);
    ListServerBackfillTicketsForPlayerRequest& operator=(const ListServerBackfillTicketsForPlayerRequest&) = delete;
    ~ListServerBackfillTicketsForPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    EntityKey m_entity;
    String m_queueName;
};

struct ListServerBackfillTicketsForPlayerResult : public PlayFabMultiplayerListServerBackfillTicketsForPlayerResult, public BaseModel, public ApiResult
{
    ListServerBackfillTicketsForPlayerResult();
    ListServerBackfillTicketsForPlayerResult(const ListServerBackfillTicketsForPlayerResult& src);
    ListServerBackfillTicketsForPlayerResult(ListServerBackfillTicketsForPlayerResult&& src);
    ListServerBackfillTicketsForPlayerResult(const PlayFabMultiplayerListServerBackfillTicketsForPlayerResult& src);
    ListServerBackfillTicketsForPlayerResult& operator=(const ListServerBackfillTicketsForPlayerResult&) = delete;
    ~ListServerBackfillTicketsForPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_ticketIds;
};

struct ListTitleMultiplayerServersQuotaChangesRequest : public PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest, public BaseModel
{
    ListTitleMultiplayerServersQuotaChangesRequest();
    ListTitleMultiplayerServersQuotaChangesRequest(const ListTitleMultiplayerServersQuotaChangesRequest& src);
    ListTitleMultiplayerServersQuotaChangesRequest(ListTitleMultiplayerServersQuotaChangesRequest&& src);
    ListTitleMultiplayerServersQuotaChangesRequest(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& src);
    ListTitleMultiplayerServersQuotaChangesRequest& operator=(const ListTitleMultiplayerServersQuotaChangesRequest&) = delete;
    ~ListTitleMultiplayerServersQuotaChangesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct ListTitleMultiplayerServersQuotaChangesResponse : public PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse, public BaseModel, public ApiResult
{
    ListTitleMultiplayerServersQuotaChangesResponse();
    ListTitleMultiplayerServersQuotaChangesResponse(const ListTitleMultiplayerServersQuotaChangesResponse& src);
    ListTitleMultiplayerServersQuotaChangesResponse(ListTitleMultiplayerServersQuotaChangesResponse&& src);
    ListTitleMultiplayerServersQuotaChangesResponse(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse& src);
    ListTitleMultiplayerServersQuotaChangesResponse& operator=(const ListTitleMultiplayerServersQuotaChangesResponse&) = delete;
    ~ListTitleMultiplayerServersQuotaChangesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabMultiplayerQuotaChange, QuotaChange> m_changes;
};

struct ListVirtualMachineSummariesRequest : public PlayFabMultiplayerListVirtualMachineSummariesRequest, public BaseModel
{
    ListVirtualMachineSummariesRequest();
    ListVirtualMachineSummariesRequest(const ListVirtualMachineSummariesRequest& src);
    ListVirtualMachineSummariesRequest(ListVirtualMachineSummariesRequest&& src);
    ListVirtualMachineSummariesRequest(const PlayFabMultiplayerListVirtualMachineSummariesRequest& src);
    ListVirtualMachineSummariesRequest& operator=(const ListVirtualMachineSummariesRequest&) = delete;
    ~ListVirtualMachineSummariesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_pageSize;
    String m_region;
    String m_skipToken;
};

struct VirtualMachineSummary : public PlayFabMultiplayerVirtualMachineSummary, public SerializableModel
{
    VirtualMachineSummary();
    VirtualMachineSummary(const VirtualMachineSummary& src);
    VirtualMachineSummary(VirtualMachineSummary&& src);
    VirtualMachineSummary(const PlayFabMultiplayerVirtualMachineSummary& src);
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

struct ListVirtualMachineSummariesResponse : public PlayFabMultiplayerListVirtualMachineSummariesResponse, public BaseModel, public ApiResult
{
    ListVirtualMachineSummariesResponse();
    ListVirtualMachineSummariesResponse(const ListVirtualMachineSummariesResponse& src);
    ListVirtualMachineSummariesResponse(ListVirtualMachineSummariesResponse&& src);
    ListVirtualMachineSummariesResponse(const PlayFabMultiplayerListVirtualMachineSummariesResponse& src);
    ListVirtualMachineSummariesResponse& operator=(const ListVirtualMachineSummariesResponse&) = delete;
    ~ListVirtualMachineSummariesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_skipToken;
    PointerArrayModel<PlayFabMultiplayerVirtualMachineSummary, VirtualMachineSummary> m_virtualMachines;
};

struct RequestMultiplayerServerRequest : public PlayFabMultiplayerRequestMultiplayerServerRequest, public BaseModel
{
    RequestMultiplayerServerRequest();
    RequestMultiplayerServerRequest(const RequestMultiplayerServerRequest& src);
    RequestMultiplayerServerRequest(RequestMultiplayerServerRequest&& src);
    RequestMultiplayerServerRequest(const PlayFabMultiplayerRequestMultiplayerServerRequest& src);
    RequestMultiplayerServerRequest& operator=(const RequestMultiplayerServerRequest&) = delete;
    ~RequestMultiplayerServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<BuildAliasParams> m_buildAliasParams;
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_initialPlayers;
    PointerArrayModel<char, String> m_preferredRegions;
    String m_sessionCookie;
    String m_sessionId;
};

struct RequestMultiplayerServerResponse : public PlayFabMultiplayerRequestMultiplayerServerResponse, public BaseModel, public ApiResult
{
    RequestMultiplayerServerResponse();
    RequestMultiplayerServerResponse(const RequestMultiplayerServerResponse& src);
    RequestMultiplayerServerResponse(RequestMultiplayerServerResponse&& src);
    RequestMultiplayerServerResponse(const PlayFabMultiplayerRequestMultiplayerServerResponse& src);
    RequestMultiplayerServerResponse& operator=(const RequestMultiplayerServerResponse&) = delete;
    ~RequestMultiplayerServerResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    PointerArrayModel<PlayFabMultiplayerConnectedPlayer, ConnectedPlayer> m_connectedPlayers;
    String m_fQDN;
    String m_iPV4Address;
    StdExtra::optional<time_t> m_lastStateTransitionTime;
    PointerArrayModel<PlayFabMultiplayerPort, Port> m_ports;
    String m_region;
    String m_serverId;
    String m_sessionId;
    String m_state;
    String m_vmId;
};

struct RolloverContainerRegistryCredentialsRequest : public PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest, public BaseModel
{
    RolloverContainerRegistryCredentialsRequest();
    RolloverContainerRegistryCredentialsRequest(const RolloverContainerRegistryCredentialsRequest& src);
    RolloverContainerRegistryCredentialsRequest(RolloverContainerRegistryCredentialsRequest&& src);
    RolloverContainerRegistryCredentialsRequest(const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& src);
    RolloverContainerRegistryCredentialsRequest& operator=(const RolloverContainerRegistryCredentialsRequest&) = delete;
    ~RolloverContainerRegistryCredentialsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct RolloverContainerRegistryCredentialsResponse : public PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse, public SerializableModel, public ApiResult
{
    RolloverContainerRegistryCredentialsResponse();
    RolloverContainerRegistryCredentialsResponse(const RolloverContainerRegistryCredentialsResponse& src);
    RolloverContainerRegistryCredentialsResponse(RolloverContainerRegistryCredentialsResponse&& src);
    RolloverContainerRegistryCredentialsResponse(const PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse& src);
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

struct ShutdownMultiplayerServerRequest : public PlayFabMultiplayerShutdownMultiplayerServerRequest, public BaseModel
{
    ShutdownMultiplayerServerRequest();
    ShutdownMultiplayerServerRequest(const ShutdownMultiplayerServerRequest& src);
    ShutdownMultiplayerServerRequest(ShutdownMultiplayerServerRequest&& src);
    ShutdownMultiplayerServerRequest(const PlayFabMultiplayerShutdownMultiplayerServerRequest& src);
    ShutdownMultiplayerServerRequest& operator=(const ShutdownMultiplayerServerRequest&) = delete;
    ~ShutdownMultiplayerServerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_region;
    String m_sessionId;
};

struct UntagContainerImageRequest : public PlayFabMultiplayerUntagContainerImageRequest, public BaseModel
{
    UntagContainerImageRequest();
    UntagContainerImageRequest(const UntagContainerImageRequest& src);
    UntagContainerImageRequest(UntagContainerImageRequest&& src);
    UntagContainerImageRequest(const PlayFabMultiplayerUntagContainerImageRequest& src);
    UntagContainerImageRequest& operator=(const UntagContainerImageRequest&) = delete;
    ~UntagContainerImageRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_imageName;
    String m_tag;
};

struct UpdateBuildAliasRequest : public PlayFabMultiplayerUpdateBuildAliasRequest, public BaseModel
{
    UpdateBuildAliasRequest();
    UpdateBuildAliasRequest(const UpdateBuildAliasRequest& src);
    UpdateBuildAliasRequest(UpdateBuildAliasRequest&& src);
    UpdateBuildAliasRequest(const PlayFabMultiplayerUpdateBuildAliasRequest& src);
    UpdateBuildAliasRequest& operator=(const UpdateBuildAliasRequest&) = delete;
    ~UpdateBuildAliasRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_aliasId;
    String m_aliasName;
    PointerArrayModel<PlayFabMultiplayerBuildSelectionCriterion, BuildSelectionCriterion> m_buildSelectionCriteria;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UpdateBuildNameRequest : public PlayFabMultiplayerUpdateBuildNameRequest, public BaseModel
{
    UpdateBuildNameRequest();
    UpdateBuildNameRequest(const UpdateBuildNameRequest& src);
    UpdateBuildNameRequest(UpdateBuildNameRequest&& src);
    UpdateBuildNameRequest(const PlayFabMultiplayerUpdateBuildNameRequest& src);
    UpdateBuildNameRequest& operator=(const UpdateBuildNameRequest&) = delete;
    ~UpdateBuildNameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    String m_buildName;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UpdateBuildRegionRequest : public PlayFabMultiplayerUpdateBuildRegionRequest, public BaseModel
{
    UpdateBuildRegionRequest();
    UpdateBuildRegionRequest(const UpdateBuildRegionRequest& src);
    UpdateBuildRegionRequest(UpdateBuildRegionRequest&& src);
    UpdateBuildRegionRequest(const PlayFabMultiplayerUpdateBuildRegionRequest& src);
    UpdateBuildRegionRequest& operator=(const UpdateBuildRegionRequest&) = delete;
    ~UpdateBuildRegionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    BuildRegionParams m_buildRegion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UpdateBuildRegionsRequest : public PlayFabMultiplayerUpdateBuildRegionsRequest, public BaseModel
{
    UpdateBuildRegionsRequest();
    UpdateBuildRegionsRequest(const UpdateBuildRegionsRequest& src);
    UpdateBuildRegionsRequest(UpdateBuildRegionsRequest&& src);
    UpdateBuildRegionsRequest(const PlayFabMultiplayerUpdateBuildRegionsRequest& src);
    UpdateBuildRegionsRequest& operator=(const UpdateBuildRegionsRequest&) = delete;
    ~UpdateBuildRegionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildId;
    PointerArrayModel<PlayFabMultiplayerBuildRegionParams, BuildRegionParams> m_buildRegions;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct UploadCertificateRequest : public PlayFabMultiplayerUploadCertificateRequest, public BaseModel
{
    UploadCertificateRequest();
    UploadCertificateRequest(const UploadCertificateRequest& src);
    UploadCertificateRequest(UploadCertificateRequest&& src);
    UploadCertificateRequest(const PlayFabMultiplayerUploadCertificateRequest& src);
    UploadCertificateRequest& operator=(const UploadCertificateRequest&) = delete;
    ~UploadCertificateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    Certificate m_gameCertificate;
};

} // namespace MultiplayerModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabMultiplayerAssetReference& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerAssetReferenceParams& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerAssetSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerBuildSelectionCriterion& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerBuildAliasDetailsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerBuildAliasParams& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCurrentServerStats& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDynamicStandbyThreshold& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDynamicStandbySettings& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerSchedule& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerScheduledStandbySettings& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerBuildRegion& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerBuildRegionParams& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerBuildSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCancelMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCancelServerBackfillTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCertificate& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCertificateSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerConnectedPlayer& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerContainerImageReference& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCoreCapacity& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCoreCapacityChange& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGameCertificateReferenceParams& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerLinuxInstrumentationConfiguration& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerPort& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGameCertificateReference& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithCustomContainerResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerInstrumentationConfiguration& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithManagedContainerResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerMatchmakingPlayerAttributes& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerMatchmakingPlayer& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateMatchmakingTicketResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateRemoteUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateRemoteUserResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerServerDetails& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateServerBackfillTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateServerBackfillTicketResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteAssetRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteBuildRegionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteBuildRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteCertificateRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteContainerImageRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerDeleteRemoteUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerEnableMultiplayerServersForTitleResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetDownloadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetDownloadUrlResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetUploadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetAssetUploadUrlResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetBuildRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetBuildResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetContainerRegistryCredentialsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchmakingTicketResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMatchResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerDetailsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerLogsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerServerLogsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetQueueStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerStatistics& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetQueueStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetRemoteLoginEndpointRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetRemoteLoginEndpointResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetServerBackfillTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetServerBackfillTicketResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerQuotaChange& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerTitleMultiplayerServersQuotas& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerJoinMatchmakingTicketRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListAssetSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListAssetSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildAliasesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildAliasesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListBuildSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListCertificateSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListCertificateSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImagesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImagesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImageTagsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListContainerImageTagsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListMatchmakingTicketsForPlayerResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListMultiplayerServersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerMultiplayerServerSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListMultiplayerServersResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListPartyQosServersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerQosServer& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListPartyQosServersResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListQosServersForTitleRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListQosServersForTitleResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListServerBackfillTicketsForPlayerResult& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListVirtualMachineSummariesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerVirtualMachineSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerListVirtualMachineSummariesResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerRequestMultiplayerServerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerRequestMultiplayerServerResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerShutdownMultiplayerServerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerUntagContainerImageRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildAliasRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildNameRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildRegionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerUpdateBuildRegionsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabMultiplayerUploadCertificateRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabMultiplayerAzureRegion>
{
    static constexpr PlayFabMultiplayerAzureRegion maxValue = PlayFabMultiplayerAzureRegion::UkSouth;
};

template<> struct EnumRange<PlayFabMultiplayerAzureVmFamily>
{
    static constexpr PlayFabMultiplayerAzureVmFamily maxValue = PlayFabMultiplayerAzureVmFamily::NCasT4_v3;
};

template<> struct EnumRange<PlayFabMultiplayerAzureVmSize>
{
    static constexpr PlayFabMultiplayerAzureVmSize maxValue = PlayFabMultiplayerAzureVmSize::Standard_NC4as_T4_v3;
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

} // namespace PlayFab
