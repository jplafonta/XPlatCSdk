#pragma once

#include <playfab/PlayFabAdminDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace AdminModels
{

// Admin Classes
struct AbortTaskInstanceRequest : public PlayFabAdminAbortTaskInstanceRequest, public BaseModel
{
    AbortTaskInstanceRequest();
    AbortTaskInstanceRequest(const AbortTaskInstanceRequest& src);
    AbortTaskInstanceRequest(AbortTaskInstanceRequest&& src);
    AbortTaskInstanceRequest(const PlayFabAdminAbortTaskInstanceRequest& src);
    AbortTaskInstanceRequest& operator=(const AbortTaskInstanceRequest&) = delete;
    ~AbortTaskInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_taskInstanceId;
};

struct ActionsOnPlayersInSegmentTaskParameter : public PlayFabAdminActionsOnPlayersInSegmentTaskParameter, public SerializableModel
{
    ActionsOnPlayersInSegmentTaskParameter();
    ActionsOnPlayersInSegmentTaskParameter(const ActionsOnPlayersInSegmentTaskParameter& src);
    ActionsOnPlayersInSegmentTaskParameter(ActionsOnPlayersInSegmentTaskParameter&& src);
    ActionsOnPlayersInSegmentTaskParameter(const PlayFabAdminActionsOnPlayersInSegmentTaskParameter& src);
    ActionsOnPlayersInSegmentTaskParameter& operator=(const ActionsOnPlayersInSegmentTaskParameter&) = delete;
    ~ActionsOnPlayersInSegmentTaskParameter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_actionId;
    String m_segmentId;
};

struct NameIdentifier : public PlayFabAdminNameIdentifier, public SerializableModel
{
    NameIdentifier();
    NameIdentifier(const NameIdentifier& src);
    NameIdentifier(NameIdentifier&& src);
    NameIdentifier(const PlayFabAdminNameIdentifier& src);
    NameIdentifier& operator=(const NameIdentifier&) = delete;
    ~NameIdentifier() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_name;
};

struct ActionsOnPlayersInSegmentTaskSummary : public PlayFabAdminActionsOnPlayersInSegmentTaskSummary, public BaseModel
{
    ActionsOnPlayersInSegmentTaskSummary();
    ActionsOnPlayersInSegmentTaskSummary(const ActionsOnPlayersInSegmentTaskSummary& src);
    ActionsOnPlayersInSegmentTaskSummary(ActionsOnPlayersInSegmentTaskSummary&& src);
    ActionsOnPlayersInSegmentTaskSummary(const PlayFabAdminActionsOnPlayersInSegmentTaskSummary& src);
    ActionsOnPlayersInSegmentTaskSummary& operator=(const ActionsOnPlayersInSegmentTaskSummary&) = delete;
    ~ActionsOnPlayersInSegmentTaskSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_completedAt;
    String m_errorMessage;
    StdExtra::optional<bool> m_errorWasFatal;
    StdExtra::optional<double> m_estimatedSecondsRemaining;
    StdExtra::optional<double> m_percentComplete;
    String m_scheduledByUserId;
    StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_status;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
    String m_taskInstanceId;
    StdExtra::optional<int32_t> m_totalPlayersInSegment;
    StdExtra::optional<int32_t> m_totalPlayersProcessed;
};

struct AdCampaignAttribution : public PlayFabAdminAdCampaignAttribution, public SerializableModel
{
    AdCampaignAttribution();
    AdCampaignAttribution(const AdCampaignAttribution& src);
    AdCampaignAttribution(AdCampaignAttribution&& src);
    AdCampaignAttribution(const PlayFabAdminAdCampaignAttribution& src);
    AdCampaignAttribution& operator=(const AdCampaignAttribution&) = delete;
    ~AdCampaignAttribution() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_campaignId;
    String m_platform;
};

struct AdCampaignSegmentFilter : public PlayFabAdminAdCampaignSegmentFilter, public BaseModel
{
    AdCampaignSegmentFilter();
    AdCampaignSegmentFilter(const AdCampaignSegmentFilter& src);
    AdCampaignSegmentFilter(AdCampaignSegmentFilter&& src);
    AdCampaignSegmentFilter(const PlayFabAdminAdCampaignSegmentFilter& src);
    AdCampaignSegmentFilter& operator=(const AdCampaignSegmentFilter&) = delete;
    ~AdCampaignSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_campaignId;
    String m_campaignSource;
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
};

struct AddLocalizedNewsRequest : public PlayFabAdminAddLocalizedNewsRequest, public BaseModel
{
    AddLocalizedNewsRequest();
    AddLocalizedNewsRequest(const AddLocalizedNewsRequest& src);
    AddLocalizedNewsRequest(AddLocalizedNewsRequest&& src);
    AddLocalizedNewsRequest(const PlayFabAdminAddLocalizedNewsRequest& src);
    AddLocalizedNewsRequest& operator=(const AddLocalizedNewsRequest&) = delete;
    ~AddLocalizedNewsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_body;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_language;
    String m_newsId;
    String m_title;
};

struct AddNewsRequest : public PlayFabAdminAddNewsRequest, public BaseModel
{
    AddNewsRequest();
    AddNewsRequest(const AddNewsRequest& src);
    AddNewsRequest(AddNewsRequest&& src);
    AddNewsRequest(const PlayFabAdminAddNewsRequest& src);
    AddNewsRequest& operator=(const AddNewsRequest&) = delete;
    ~AddNewsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_body;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<time_t> m_timestamp;
    String m_title;
};

struct AddNewsResult : public PlayFabAdminAddNewsResult, public SerializableModel, public ApiResult
{
    AddNewsResult();
    AddNewsResult(const AddNewsResult& src);
    AddNewsResult(AddNewsResult&& src);
    AddNewsResult(const PlayFabAdminAddNewsResult& src);
    AddNewsResult& operator=(const AddNewsResult&) = delete;
    ~AddNewsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_newsId;
};

struct AddPlayerTagRequest : public PlayFabAdminAddPlayerTagRequest, public BaseModel
{
    AddPlayerTagRequest();
    AddPlayerTagRequest(const AddPlayerTagRequest& src);
    AddPlayerTagRequest(AddPlayerTagRequest&& src);
    AddPlayerTagRequest(const PlayFabAdminAddPlayerTagRequest& src);
    AddPlayerTagRequest& operator=(const AddPlayerTagRequest&) = delete;
    ~AddPlayerTagRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_tagName;
};

struct AddServerBuildRequest : public PlayFabAdminAddServerBuildRequest, public BaseModel
{
    AddServerBuildRequest();
    AddServerBuildRequest(const AddServerBuildRequest& src);
    AddServerBuildRequest(AddServerBuildRequest&& src);
    AddServerBuildRequest(const PlayFabAdminAddServerBuildRequest& src);
    AddServerBuildRequest& operator=(const AddServerBuildRequest&) = delete;
    ~AddServerBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PlayFabAdminRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_executablePath;
};

struct AddServerBuildResult : public PlayFabAdminAddServerBuildResult, public BaseModel, public ApiResult
{
    AddServerBuildResult();
    AddServerBuildResult(const AddServerBuildResult& src);
    AddServerBuildResult(AddServerBuildResult&& src);
    AddServerBuildResult(const PlayFabAdminAddServerBuildResult& src);
    AddServerBuildResult& operator=(const AddServerBuildResult&) = delete;
    ~AddServerBuildResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PlayFabAdminRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    String m_executablePath;
    StdExtra::optional<PlayFabAdminGameBuildStatus> m_status;
    String m_titleId;
};

struct AddUserVirtualCurrencyRequest : public PlayFabAdminAddUserVirtualCurrencyRequest, public BaseModel
{
    AddUserVirtualCurrencyRequest();
    AddUserVirtualCurrencyRequest(const AddUserVirtualCurrencyRequest& src);
    AddUserVirtualCurrencyRequest(AddUserVirtualCurrencyRequest&& src);
    AddUserVirtualCurrencyRequest(const PlayFabAdminAddUserVirtualCurrencyRequest& src);
    AddUserVirtualCurrencyRequest& operator=(const AddUserVirtualCurrencyRequest&) = delete;
    ~AddUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct VirtualCurrencyData : public PlayFabAdminVirtualCurrencyData, public BaseModel
{
    VirtualCurrencyData();
    VirtualCurrencyData(const VirtualCurrencyData& src);
    VirtualCurrencyData(VirtualCurrencyData&& src);
    VirtualCurrencyData(const PlayFabAdminVirtualCurrencyData& src);
    VirtualCurrencyData& operator=(const VirtualCurrencyData&) = delete;
    ~VirtualCurrencyData() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_currencyCode;
    String m_displayName;
    StdExtra::optional<int32_t> m_initialDeposit;
    StdExtra::optional<int32_t> m_rechargeMax;
    StdExtra::optional<int32_t> m_rechargeRate;
};

struct AddVirtualCurrencyTypesRequest : public PlayFabAdminAddVirtualCurrencyTypesRequest, public BaseModel
{
    AddVirtualCurrencyTypesRequest();
    AddVirtualCurrencyTypesRequest(const AddVirtualCurrencyTypesRequest& src);
    AddVirtualCurrencyTypesRequest(AddVirtualCurrencyTypesRequest&& src);
    AddVirtualCurrencyTypesRequest(const PlayFabAdminAddVirtualCurrencyTypesRequest& src);
    AddVirtualCurrencyTypesRequest& operator=(const AddVirtualCurrencyTypesRequest&) = delete;
    ~AddVirtualCurrencyTypesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
};

struct ApiCondition : public PlayFabAdminApiCondition, public BaseModel
{
    ApiCondition();
    ApiCondition(const ApiCondition& src);
    ApiCondition(ApiCondition&& src);
    ApiCondition(const PlayFabAdminApiCondition& src);
    ApiCondition& operator=(const ApiCondition&) = delete;
    ~ApiCondition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminConditionals> m_hasSignatureOrEncryption;
};

struct BanInfo : public PlayFabAdminBanInfo, public BaseModel
{
    BanInfo();
    BanInfo(const BanInfo& src);
    BanInfo(BanInfo&& src);
    BanInfo(const PlayFabAdminBanInfo& src);
    BanInfo& operator=(const BanInfo&) = delete;
    ~BanInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_banId;
    StdExtra::optional<time_t> m_created;
    StdExtra::optional<time_t> m_expires;
    String m_IPAddress;
    String m_MACAddress;
    String m_playFabId;
    String m_reason;
};

struct BanPlayerSegmentAction : public PlayFabAdminBanPlayerSegmentAction, public BaseModel
{
    BanPlayerSegmentAction();
    BanPlayerSegmentAction(const BanPlayerSegmentAction& src);
    BanPlayerSegmentAction(BanPlayerSegmentAction&& src);
    BanPlayerSegmentAction(const PlayFabAdminBanPlayerSegmentAction& src);
    BanPlayerSegmentAction& operator=(const BanPlayerSegmentAction&) = delete;
    ~BanPlayerSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_banHours;
    String m_reasonForBan;
};

struct BanRequest : public PlayFabAdminBanRequest, public BaseModel
{
    BanRequest();
    BanRequest(const BanRequest& src);
    BanRequest(BanRequest&& src);
    BanRequest(const PlayFabAdminBanRequest& src);
    BanRequest& operator=(const BanRequest&) = delete;
    ~BanRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_durationInHours;
    String m_IPAddress;
    String m_MACAddress;
    String m_playFabId;
    String m_reason;
};

struct BanUsersRequest : public PlayFabAdminBanUsersRequest, public BaseModel
{
    BanUsersRequest();
    BanUsersRequest(const BanUsersRequest& src);
    BanUsersRequest(BanUsersRequest&& src);
    BanUsersRequest(const PlayFabAdminBanUsersRequest& src);
    BanUsersRequest& operator=(const BanUsersRequest&) = delete;
    ~BanUsersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminBanRequest, BanRequest> m_bans;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct BanUsersResult : public PlayFabAdminBanUsersResult, public BaseModel, public ApiResult
{
    BanUsersResult();
    BanUsersResult(const BanUsersResult& src);
    BanUsersResult(BanUsersResult&& src);
    BanUsersResult(const PlayFabAdminBanUsersResult& src);
    BanUsersResult& operator=(const BanUsersResult&) = delete;
    ~BanUsersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminBanInfo, BanInfo> m_banData;
};

struct CatalogItemBundleInfo : public PlayFabAdminCatalogItemBundleInfo, public BaseModel
{
    CatalogItemBundleInfo();
    CatalogItemBundleInfo(const CatalogItemBundleInfo& src);
    CatalogItemBundleInfo(CatalogItemBundleInfo&& src);
    CatalogItemBundleInfo(const PlayFabAdminCatalogItemBundleInfo& src);
    CatalogItemBundleInfo& operator=(const CatalogItemBundleInfo&) = delete;
    ~CatalogItemBundleInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_bundledItems;
    PointerArrayModel<char, String> m_bundledResultTables;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_bundledVirtualCurrencies;
};

struct CatalogItemConsumableInfo : public PlayFabAdminCatalogItemConsumableInfo, public BaseModel
{
    CatalogItemConsumableInfo();
    CatalogItemConsumableInfo(const CatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo(CatalogItemConsumableInfo&& src);
    CatalogItemConsumableInfo(const PlayFabAdminCatalogItemConsumableInfo& src);
    CatalogItemConsumableInfo& operator=(const CatalogItemConsumableInfo&) = delete;
    ~CatalogItemConsumableInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_usageCount;
    StdExtra::optional<uint32_t> m_usagePeriod;
    String m_usagePeriodGroup;
};

struct CatalogItemContainerInfo : public PlayFabAdminCatalogItemContainerInfo, public BaseModel
{
    CatalogItemContainerInfo();
    CatalogItemContainerInfo(const CatalogItemContainerInfo& src);
    CatalogItemContainerInfo(CatalogItemContainerInfo&& src);
    CatalogItemContainerInfo(const PlayFabAdminCatalogItemContainerInfo& src);
    CatalogItemContainerInfo& operator=(const CatalogItemContainerInfo&) = delete;
    ~CatalogItemContainerInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_itemContents;
    String m_keyItemId;
    PointerArrayModel<char, String> m_resultTableContents;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyContents;
};

struct CatalogItem : public PlayFabAdminCatalogItem, public BaseModel
{
    CatalogItem();
    CatalogItem(const CatalogItem& src);
    CatalogItem(CatalogItem&& src);
    CatalogItem(const PlayFabAdminCatalogItem& src);
    CatalogItem& operator=(const CatalogItem&) = delete;
    ~CatalogItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<CatalogItemBundleInfo> m_bundle;
    String m_catalogVersion;
    StdExtra::optional<CatalogItemConsumableInfo> m_consumable;
    StdExtra::optional<CatalogItemContainerInfo> m_container;
    String m_customData;
    String m_description;
    String m_displayName;
    String m_itemClass;
    String m_itemId;
    String m_itemImageUrl;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
    PointerArrayModel<char, String> m_tags;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct CheckLimitedEditionItemAvailabilityRequest : public PlayFabAdminCheckLimitedEditionItemAvailabilityRequest, public SerializableModel
{
    CheckLimitedEditionItemAvailabilityRequest();
    CheckLimitedEditionItemAvailabilityRequest(const CheckLimitedEditionItemAvailabilityRequest& src);
    CheckLimitedEditionItemAvailabilityRequest(CheckLimitedEditionItemAvailabilityRequest&& src);
    CheckLimitedEditionItemAvailabilityRequest(const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest& src);
    CheckLimitedEditionItemAvailabilityRequest& operator=(const CheckLimitedEditionItemAvailabilityRequest&) = delete;
    ~CheckLimitedEditionItemAvailabilityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
    String m_itemId;
};

struct CheckLimitedEditionItemAvailabilityResult : public PlayFabAdminCheckLimitedEditionItemAvailabilityResult, public SerializableModel, public ApiResult
{
    CheckLimitedEditionItemAvailabilityResult();
    CheckLimitedEditionItemAvailabilityResult(const CheckLimitedEditionItemAvailabilityResult&) = default;
    CheckLimitedEditionItemAvailabilityResult(CheckLimitedEditionItemAvailabilityResult&&) = default;
    CheckLimitedEditionItemAvailabilityResult(const PlayFabAdminCheckLimitedEditionItemAvailabilityResult& src);
    CheckLimitedEditionItemAvailabilityResult& operator=(const CheckLimitedEditionItemAvailabilityResult&) = delete;
    ~CheckLimitedEditionItemAvailabilityResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct CloudScriptFile : public PlayFabAdminCloudScriptFile, public SerializableModel
{
    CloudScriptFile();
    CloudScriptFile(const CloudScriptFile& src);
    CloudScriptFile(CloudScriptFile&& src);
    CloudScriptFile(const PlayFabAdminCloudScriptFile& src);
    CloudScriptFile& operator=(const CloudScriptFile&) = delete;
    ~CloudScriptFile() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_fileContents;
    String m_filename;
};

struct CloudScriptTaskParameter : public PlayFabAdminCloudScriptTaskParameter, public BaseModel
{
    CloudScriptTaskParameter();
    CloudScriptTaskParameter(const CloudScriptTaskParameter& src);
    CloudScriptTaskParameter(CloudScriptTaskParameter&& src);
    CloudScriptTaskParameter(const PlayFabAdminCloudScriptTaskParameter& src);
    CloudScriptTaskParameter& operator=(const CloudScriptTaskParameter&) = delete;
    ~CloudScriptTaskParameter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_argument;
    String m_functionName;
};

struct ScriptExecutionError : public PlayFabAdminScriptExecutionError, public SerializableModel
{
    ScriptExecutionError();
    ScriptExecutionError(const ScriptExecutionError& src);
    ScriptExecutionError(ScriptExecutionError&& src);
    ScriptExecutionError(const PlayFabAdminScriptExecutionError& src);
    ScriptExecutionError& operator=(const ScriptExecutionError&) = delete;
    ~ScriptExecutionError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_error;
    String m_message;
    String m_stackTrace;
};

struct LogStatement : public PlayFabAdminLogStatement, public BaseModel
{
    LogStatement();
    LogStatement(const LogStatement& src);
    LogStatement(LogStatement&& src);
    LogStatement(const PlayFabAdminLogStatement& src);
    LogStatement& operator=(const LogStatement&) = delete;
    ~LogStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_data;
    String m_level;
    String m_message;
};

struct ExecuteCloudScriptResult : public PlayFabAdminExecuteCloudScriptResult, public BaseModel, public ApiResult
{
    ExecuteCloudScriptResult();
    ExecuteCloudScriptResult(const ExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult(ExecuteCloudScriptResult&& src);
    ExecuteCloudScriptResult(const PlayFabAdminExecuteCloudScriptResult& src);
    ExecuteCloudScriptResult& operator=(const ExecuteCloudScriptResult&) = delete;
    ~ExecuteCloudScriptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<ScriptExecutionError> m_error;
    String m_functionName;
    JsonObject m_functionResult;
    StdExtra::optional<bool> m_functionResultTooLarge;
    PointerArrayModel<PlayFabAdminLogStatement, LogStatement> m_logs;
    StdExtra::optional<bool> m_logsTooLarge;
};

struct CloudScriptTaskSummary : public PlayFabAdminCloudScriptTaskSummary, public BaseModel
{
    CloudScriptTaskSummary();
    CloudScriptTaskSummary(const CloudScriptTaskSummary& src);
    CloudScriptTaskSummary(CloudScriptTaskSummary&& src);
    CloudScriptTaskSummary(const PlayFabAdminCloudScriptTaskSummary& src);
    CloudScriptTaskSummary& operator=(const CloudScriptTaskSummary&) = delete;
    ~CloudScriptTaskSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_completedAt;
    StdExtra::optional<double> m_estimatedSecondsRemaining;
    StdExtra::optional<double> m_percentComplete;
    StdExtra::optional<ExecuteCloudScriptResult> m_result;
    String m_scheduledByUserId;
    StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_status;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
    String m_taskInstanceId;
};

struct CloudScriptVersionStatus : public PlayFabAdminCloudScriptVersionStatus, public SerializableModel
{
    CloudScriptVersionStatus();
    CloudScriptVersionStatus(const CloudScriptVersionStatus&) = default;
    CloudScriptVersionStatus(CloudScriptVersionStatus&&) = default;
    CloudScriptVersionStatus(const PlayFabAdminCloudScriptVersionStatus& src);
    CloudScriptVersionStatus& operator=(const CloudScriptVersionStatus&) = delete;
    ~CloudScriptVersionStatus() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct ContactEmailInfo : public PlayFabAdminContactEmailInfo, public BaseModel
{
    ContactEmailInfo();
    ContactEmailInfo(const ContactEmailInfo& src);
    ContactEmailInfo(ContactEmailInfo&& src);
    ContactEmailInfo(const PlayFabAdminContactEmailInfo& src);
    ContactEmailInfo& operator=(const ContactEmailInfo&) = delete;
    ~ContactEmailInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_emailAddress;
    String m_name;
    StdExtra::optional<PlayFabEmailVerificationStatus> m_verificationStatus;
};

struct ContentInfo : public PlayFabAdminContentInfo, public SerializableModel
{
    ContentInfo();
    ContentInfo(const ContentInfo& src);
    ContentInfo(ContentInfo&& src);
    ContentInfo(const PlayFabAdminContentInfo& src);
    ContentInfo& operator=(const ContentInfo&) = delete;
    ~ContentInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
};

struct CreateActionsOnPlayerSegmentTaskRequest : public PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest, public BaseModel
{
    CreateActionsOnPlayerSegmentTaskRequest();
    CreateActionsOnPlayerSegmentTaskRequest(const CreateActionsOnPlayerSegmentTaskRequest& src);
    CreateActionsOnPlayerSegmentTaskRequest(CreateActionsOnPlayerSegmentTaskRequest&& src);
    CreateActionsOnPlayerSegmentTaskRequest(const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& src);
    CreateActionsOnPlayerSegmentTaskRequest& operator=(const CreateActionsOnPlayerSegmentTaskRequest&) = delete;
    ~CreateActionsOnPlayerSegmentTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
    ActionsOnPlayersInSegmentTaskParameter m_parameter;
    String m_schedule;
};

struct CreateCloudScriptTaskRequest : public PlayFabAdminCreateCloudScriptTaskRequest, public BaseModel
{
    CreateCloudScriptTaskRequest();
    CreateCloudScriptTaskRequest(const CreateCloudScriptTaskRequest& src);
    CreateCloudScriptTaskRequest(CreateCloudScriptTaskRequest&& src);
    CreateCloudScriptTaskRequest(const PlayFabAdminCreateCloudScriptTaskRequest& src);
    CreateCloudScriptTaskRequest& operator=(const CreateCloudScriptTaskRequest&) = delete;
    ~CreateCloudScriptTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
    CloudScriptTaskParameter m_parameter;
    String m_schedule;
};

struct InsightsScalingTaskParameter : public PlayFabAdminInsightsScalingTaskParameter, public SerializableModel
{
    InsightsScalingTaskParameter();
    InsightsScalingTaskParameter(const InsightsScalingTaskParameter&) = default;
    InsightsScalingTaskParameter(InsightsScalingTaskParameter&&) = default;
    InsightsScalingTaskParameter(const PlayFabAdminInsightsScalingTaskParameter& src);
    InsightsScalingTaskParameter& operator=(const InsightsScalingTaskParameter&) = delete;
    ~InsightsScalingTaskParameter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct CreateInsightsScheduledScalingTaskRequest : public PlayFabAdminCreateInsightsScheduledScalingTaskRequest, public BaseModel
{
    CreateInsightsScheduledScalingTaskRequest();
    CreateInsightsScheduledScalingTaskRequest(const CreateInsightsScheduledScalingTaskRequest& src);
    CreateInsightsScheduledScalingTaskRequest(CreateInsightsScheduledScalingTaskRequest&& src);
    CreateInsightsScheduledScalingTaskRequest(const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& src);
    CreateInsightsScheduledScalingTaskRequest& operator=(const CreateInsightsScheduledScalingTaskRequest&) = delete;
    ~CreateInsightsScheduledScalingTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    String m_name;
    InsightsScalingTaskParameter m_parameter;
    String m_schedule;
};

struct OpenIdIssuerInformation : public PlayFabAdminOpenIdIssuerInformation, public BaseModel
{
    OpenIdIssuerInformation();
    OpenIdIssuerInformation(const OpenIdIssuerInformation& src);
    OpenIdIssuerInformation(OpenIdIssuerInformation&& src);
    OpenIdIssuerInformation(const PlayFabAdminOpenIdIssuerInformation& src);
    OpenIdIssuerInformation& operator=(const OpenIdIssuerInformation&) = delete;
    ~OpenIdIssuerInformation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authorizationUrl;
    String m_issuer;
    JsonObject m_jsonWebKeySet;
    String m_tokenUrl;
};

struct CreateOpenIdConnectionRequest : public PlayFabAdminCreateOpenIdConnectionRequest, public BaseModel
{
    CreateOpenIdConnectionRequest();
    CreateOpenIdConnectionRequest(const CreateOpenIdConnectionRequest& src);
    CreateOpenIdConnectionRequest(CreateOpenIdConnectionRequest&& src);
    CreateOpenIdConnectionRequest(const PlayFabAdminCreateOpenIdConnectionRequest& src);
    CreateOpenIdConnectionRequest& operator=(const CreateOpenIdConnectionRequest&) = delete;
    ~CreateOpenIdConnectionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_clientId;
    String m_clientSecret;
    String m_connectionId;
    StdExtra::optional<bool> m_ignoreNonce;
    String m_issuerDiscoveryUrl;
    StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
};

struct CreatePlayerSharedSecretRequest : public PlayFabAdminCreatePlayerSharedSecretRequest, public SerializableModel
{
    CreatePlayerSharedSecretRequest();
    CreatePlayerSharedSecretRequest(const CreatePlayerSharedSecretRequest& src);
    CreatePlayerSharedSecretRequest(CreatePlayerSharedSecretRequest&& src);
    CreatePlayerSharedSecretRequest(const PlayFabAdminCreatePlayerSharedSecretRequest& src);
    CreatePlayerSharedSecretRequest& operator=(const CreatePlayerSharedSecretRequest&) = delete;
    ~CreatePlayerSharedSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendlyName;
};

struct CreatePlayerSharedSecretResult : public PlayFabAdminCreatePlayerSharedSecretResult, public SerializableModel, public ApiResult
{
    CreatePlayerSharedSecretResult();
    CreatePlayerSharedSecretResult(const CreatePlayerSharedSecretResult& src);
    CreatePlayerSharedSecretResult(CreatePlayerSharedSecretResult&& src);
    CreatePlayerSharedSecretResult(const PlayFabAdminCreatePlayerSharedSecretResult& src);
    CreatePlayerSharedSecretResult& operator=(const CreatePlayerSharedSecretResult&) = delete;
    ~CreatePlayerSharedSecretResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_secretKey;
};

struct CreatePlayerStatisticDefinitionRequest : public PlayFabAdminCreatePlayerStatisticDefinitionRequest, public BaseModel
{
    CreatePlayerStatisticDefinitionRequest();
    CreatePlayerStatisticDefinitionRequest(const CreatePlayerStatisticDefinitionRequest& src);
    CreatePlayerStatisticDefinitionRequest(CreatePlayerStatisticDefinitionRequest&& src);
    CreatePlayerStatisticDefinitionRequest(const PlayFabAdminCreatePlayerStatisticDefinitionRequest& src);
    CreatePlayerStatisticDefinitionRequest& operator=(const CreatePlayerStatisticDefinitionRequest&) = delete;
    ~CreatePlayerStatisticDefinitionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminStatisticAggregationMethod> m_aggregationMethod;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
    StdExtra::optional<PlayFabAdminStatisticResetIntervalOption> m_versionChangeInterval;
};

struct PlayerStatisticDefinition : public PlayFabAdminPlayerStatisticDefinition, public BaseModel
{
    PlayerStatisticDefinition();
    PlayerStatisticDefinition(const PlayerStatisticDefinition& src);
    PlayerStatisticDefinition(PlayerStatisticDefinition&& src);
    PlayerStatisticDefinition(const PlayFabAdminPlayerStatisticDefinition& src);
    PlayerStatisticDefinition& operator=(const PlayerStatisticDefinition&) = delete;
    ~PlayerStatisticDefinition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminStatisticAggregationMethod> m_aggregationMethod;
    String m_statisticName;
    StdExtra::optional<PlayFabAdminStatisticResetIntervalOption> m_versionChangeInterval;
};

struct CreatePlayerStatisticDefinitionResult : public PlayFabAdminCreatePlayerStatisticDefinitionResult, public BaseModel, public ApiResult
{
    CreatePlayerStatisticDefinitionResult();
    CreatePlayerStatisticDefinitionResult(const CreatePlayerStatisticDefinitionResult& src);
    CreatePlayerStatisticDefinitionResult(CreatePlayerStatisticDefinitionResult&& src);
    CreatePlayerStatisticDefinitionResult(const PlayFabAdminCreatePlayerStatisticDefinitionResult& src);
    CreatePlayerStatisticDefinitionResult& operator=(const CreatePlayerStatisticDefinitionResult&) = delete;
    ~CreatePlayerStatisticDefinitionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerStatisticDefinition> m_statistic;
};

struct DeletePlayerStatisticSegmentAction : public PlayFabAdminDeletePlayerStatisticSegmentAction, public SerializableModel
{
    DeletePlayerStatisticSegmentAction();
    DeletePlayerStatisticSegmentAction(const DeletePlayerStatisticSegmentAction& src);
    DeletePlayerStatisticSegmentAction(DeletePlayerStatisticSegmentAction&& src);
    DeletePlayerStatisticSegmentAction(const PlayFabAdminDeletePlayerStatisticSegmentAction& src);
    DeletePlayerStatisticSegmentAction& operator=(const DeletePlayerStatisticSegmentAction&) = delete;
    ~DeletePlayerStatisticSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct EmailNotificationSegmentAction : public PlayFabAdminEmailNotificationSegmentAction, public SerializableModel
{
    EmailNotificationSegmentAction();
    EmailNotificationSegmentAction(const EmailNotificationSegmentAction& src);
    EmailNotificationSegmentAction(EmailNotificationSegmentAction&& src);
    EmailNotificationSegmentAction(const PlayFabAdminEmailNotificationSegmentAction& src);
    EmailNotificationSegmentAction& operator=(const EmailNotificationSegmentAction&) = delete;
    ~EmailNotificationSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_emailTemplateId;
    String m_emailTemplateName;
};

struct ExecuteAzureFunctionSegmentAction : public PlayFabAdminExecuteAzureFunctionSegmentAction, public BaseModel
{
    ExecuteAzureFunctionSegmentAction();
    ExecuteAzureFunctionSegmentAction(const ExecuteAzureFunctionSegmentAction& src);
    ExecuteAzureFunctionSegmentAction(ExecuteAzureFunctionSegmentAction&& src);
    ExecuteAzureFunctionSegmentAction(const PlayFabAdminExecuteAzureFunctionSegmentAction& src);
    ExecuteAzureFunctionSegmentAction& operator=(const ExecuteAzureFunctionSegmentAction&) = delete;
    ~ExecuteAzureFunctionSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_azureFunction;
    JsonObject m_functionParameter;
};

struct ExecuteCloudScriptSegmentAction : public PlayFabAdminExecuteCloudScriptSegmentAction, public BaseModel
{
    ExecuteCloudScriptSegmentAction();
    ExecuteCloudScriptSegmentAction(const ExecuteCloudScriptSegmentAction& src);
    ExecuteCloudScriptSegmentAction(ExecuteCloudScriptSegmentAction&& src);
    ExecuteCloudScriptSegmentAction(const PlayFabAdminExecuteCloudScriptSegmentAction& src);
    ExecuteCloudScriptSegmentAction& operator=(const ExecuteCloudScriptSegmentAction&) = delete;
    ~ExecuteCloudScriptSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_cloudScriptFunction;
    JsonObject m_functionParameter;
    String m_functionParameterJson;
};

struct GrantItemSegmentAction : public PlayFabAdminGrantItemSegmentAction, public SerializableModel
{
    GrantItemSegmentAction();
    GrantItemSegmentAction(const GrantItemSegmentAction& src);
    GrantItemSegmentAction(GrantItemSegmentAction&& src);
    GrantItemSegmentAction(const PlayFabAdminGrantItemSegmentAction& src);
    GrantItemSegmentAction& operator=(const GrantItemSegmentAction&) = delete;
    ~GrantItemSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catelogId;
    String m_itemId;
};

struct GrantVirtualCurrencySegmentAction : public PlayFabAdminGrantVirtualCurrencySegmentAction, public SerializableModel
{
    GrantVirtualCurrencySegmentAction();
    GrantVirtualCurrencySegmentAction(const GrantVirtualCurrencySegmentAction& src);
    GrantVirtualCurrencySegmentAction(GrantVirtualCurrencySegmentAction&& src);
    GrantVirtualCurrencySegmentAction(const PlayFabAdminGrantVirtualCurrencySegmentAction& src);
    GrantVirtualCurrencySegmentAction& operator=(const GrantVirtualCurrencySegmentAction&) = delete;
    ~GrantVirtualCurrencySegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_currencyCode;
};

struct IncrementPlayerStatisticSegmentAction : public PlayFabAdminIncrementPlayerStatisticSegmentAction, public SerializableModel
{
    IncrementPlayerStatisticSegmentAction();
    IncrementPlayerStatisticSegmentAction(const IncrementPlayerStatisticSegmentAction& src);
    IncrementPlayerStatisticSegmentAction(IncrementPlayerStatisticSegmentAction&& src);
    IncrementPlayerStatisticSegmentAction(const PlayFabAdminIncrementPlayerStatisticSegmentAction& src);
    IncrementPlayerStatisticSegmentAction& operator=(const IncrementPlayerStatisticSegmentAction&) = delete;
    ~IncrementPlayerStatisticSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct PushNotificationSegmentAction : public PlayFabAdminPushNotificationSegmentAction, public SerializableModel
{
    PushNotificationSegmentAction();
    PushNotificationSegmentAction(const PushNotificationSegmentAction& src);
    PushNotificationSegmentAction(PushNotificationSegmentAction&& src);
    PushNotificationSegmentAction(const PlayFabAdminPushNotificationSegmentAction& src);
    PushNotificationSegmentAction& operator=(const PushNotificationSegmentAction&) = delete;
    ~PushNotificationSegmentAction() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_pushNotificationTemplateId;
};

struct SegmentTrigger : public PlayFabAdminSegmentTrigger, public BaseModel
{
    SegmentTrigger();
    SegmentTrigger(const SegmentTrigger& src);
    SegmentTrigger(SegmentTrigger&& src);
    SegmentTrigger(const PlayFabAdminSegmentTrigger& src);
    SegmentTrigger& operator=(const SegmentTrigger&) = delete;
    ~SegmentTrigger() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<BanPlayerSegmentAction> m_banPlayerAction;
    StdExtra::optional<DeletePlayerStatisticSegmentAction> m_deletePlayerStatisticAction;
    StdExtra::optional<EmailNotificationSegmentAction> m_emailNotificationAction;
    StdExtra::optional<ExecuteAzureFunctionSegmentAction> m_executeAzureFunctionAction;
    StdExtra::optional<ExecuteCloudScriptSegmentAction> m_executeCloudScriptAction;
    StdExtra::optional<GrantItemSegmentAction> m_grantItemAction;
    StdExtra::optional<GrantVirtualCurrencySegmentAction> m_grantVirtualCurrencyAction;
    StdExtra::optional<IncrementPlayerStatisticSegmentAction> m_incrementPlayerStatisticAction;
    StdExtra::optional<PushNotificationSegmentAction> m_pushNotificationAction;
};

struct FirstLoginDateSegmentFilter : public PlayFabAdminFirstLoginDateSegmentFilter, public BaseModel
{
    FirstLoginDateSegmentFilter();
    FirstLoginDateSegmentFilter(const FirstLoginDateSegmentFilter& src);
    FirstLoginDateSegmentFilter(FirstLoginDateSegmentFilter&& src);
    FirstLoginDateSegmentFilter(const PlayFabAdminFirstLoginDateSegmentFilter& src);
    FirstLoginDateSegmentFilter& operator=(const FirstLoginDateSegmentFilter&) = delete;
    ~FirstLoginDateSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
};

struct FirstLoginTimespanSegmentFilter : public PlayFabAdminFirstLoginTimespanSegmentFilter, public BaseModel
{
    FirstLoginTimespanSegmentFilter();
    FirstLoginTimespanSegmentFilter(const FirstLoginTimespanSegmentFilter& src);
    FirstLoginTimespanSegmentFilter(FirstLoginTimespanSegmentFilter&& src);
    FirstLoginTimespanSegmentFilter(const PlayFabAdminFirstLoginTimespanSegmentFilter& src);
    FirstLoginTimespanSegmentFilter& operator=(const FirstLoginTimespanSegmentFilter&) = delete;
    ~FirstLoginTimespanSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
};

struct LastLoginDateSegmentFilter : public PlayFabAdminLastLoginDateSegmentFilter, public BaseModel
{
    LastLoginDateSegmentFilter();
    LastLoginDateSegmentFilter(const LastLoginDateSegmentFilter& src);
    LastLoginDateSegmentFilter(LastLoginDateSegmentFilter&& src);
    LastLoginDateSegmentFilter(const PlayFabAdminLastLoginDateSegmentFilter& src);
    LastLoginDateSegmentFilter& operator=(const LastLoginDateSegmentFilter&) = delete;
    ~LastLoginDateSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
};

struct LastLoginTimespanSegmentFilter : public PlayFabAdminLastLoginTimespanSegmentFilter, public BaseModel
{
    LastLoginTimespanSegmentFilter();
    LastLoginTimespanSegmentFilter(const LastLoginTimespanSegmentFilter& src);
    LastLoginTimespanSegmentFilter(LastLoginTimespanSegmentFilter&& src);
    LastLoginTimespanSegmentFilter(const PlayFabAdminLastLoginTimespanSegmentFilter& src);
    LastLoginTimespanSegmentFilter& operator=(const LastLoginTimespanSegmentFilter&) = delete;
    ~LastLoginTimespanSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
};

struct LinkedUserAccountSegmentFilter : public PlayFabAdminLinkedUserAccountSegmentFilter, public BaseModel
{
    LinkedUserAccountSegmentFilter();
    LinkedUserAccountSegmentFilter(const LinkedUserAccountSegmentFilter& src);
    LinkedUserAccountSegmentFilter(LinkedUserAccountSegmentFilter&& src);
    LinkedUserAccountSegmentFilter(const PlayFabAdminLinkedUserAccountSegmentFilter& src);
    LinkedUserAccountSegmentFilter& operator=(const LinkedUserAccountSegmentFilter&) = delete;
    ~LinkedUserAccountSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentLoginIdentityProvider> m_loginProvider;
};

struct LinkedUserAccountHasEmailSegmentFilter : public PlayFabAdminLinkedUserAccountHasEmailSegmentFilter, public BaseModel
{
    LinkedUserAccountHasEmailSegmentFilter();
    LinkedUserAccountHasEmailSegmentFilter(const LinkedUserAccountHasEmailSegmentFilter& src);
    LinkedUserAccountHasEmailSegmentFilter(LinkedUserAccountHasEmailSegmentFilter&& src);
    LinkedUserAccountHasEmailSegmentFilter(const PlayFabAdminLinkedUserAccountHasEmailSegmentFilter& src);
    LinkedUserAccountHasEmailSegmentFilter& operator=(const LinkedUserAccountHasEmailSegmentFilter&) = delete;
    ~LinkedUserAccountHasEmailSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
    StdExtra::optional<PlayFabAdminSegmentLoginIdentityProvider> m_loginProvider;
};

struct LocationSegmentFilter : public PlayFabAdminLocationSegmentFilter, public BaseModel
{
    LocationSegmentFilter();
    LocationSegmentFilter(const LocationSegmentFilter& src);
    LocationSegmentFilter(LocationSegmentFilter&& src);
    LocationSegmentFilter(const PlayFabAdminLocationSegmentFilter& src);
    LocationSegmentFilter& operator=(const LocationSegmentFilter&) = delete;
    ~LocationSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentCountryCode> m_countryCode;
};

struct PushNotificationSegmentFilter : public PlayFabAdminPushNotificationSegmentFilter, public BaseModel
{
    PushNotificationSegmentFilter();
    PushNotificationSegmentFilter(const PushNotificationSegmentFilter& src);
    PushNotificationSegmentFilter(PushNotificationSegmentFilter&& src);
    PushNotificationSegmentFilter(const PlayFabAdminPushNotificationSegmentFilter& src);
    PushNotificationSegmentFilter& operator=(const PushNotificationSegmentFilter&) = delete;
    ~PushNotificationSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentPushNotificationDevicePlatform> m_pushNotificationDevicePlatform;
};

struct StatisticSegmentFilter : public PlayFabAdminStatisticSegmentFilter, public BaseModel
{
    StatisticSegmentFilter();
    StatisticSegmentFilter(const StatisticSegmentFilter& src);
    StatisticSegmentFilter(StatisticSegmentFilter&& src);
    StatisticSegmentFilter(const PlayFabAdminStatisticSegmentFilter& src);
    StatisticSegmentFilter& operator=(const StatisticSegmentFilter&) = delete;
    ~StatisticSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
    String m_filterValue;
    String m_name;
    StdExtra::optional<bool> m_useCurrentVersion;
    StdExtra::optional<int32_t> m_version;
};

struct TagSegmentFilter : public PlayFabAdminTagSegmentFilter, public BaseModel
{
    TagSegmentFilter();
    TagSegmentFilter(const TagSegmentFilter& src);
    TagSegmentFilter(TagSegmentFilter&& src);
    TagSegmentFilter(const PlayFabAdminTagSegmentFilter& src);
    TagSegmentFilter& operator=(const TagSegmentFilter&) = delete;
    ~TagSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
    String m_tagValue;
};

struct TotalValueToDateInUSDSegmentFilter : public PlayFabAdminTotalValueToDateInUSDSegmentFilter, public BaseModel
{
    TotalValueToDateInUSDSegmentFilter();
    TotalValueToDateInUSDSegmentFilter(const TotalValueToDateInUSDSegmentFilter& src);
    TotalValueToDateInUSDSegmentFilter(TotalValueToDateInUSDSegmentFilter&& src);
    TotalValueToDateInUSDSegmentFilter(const PlayFabAdminTotalValueToDateInUSDSegmentFilter& src);
    TotalValueToDateInUSDSegmentFilter& operator=(const TotalValueToDateInUSDSegmentFilter&) = delete;
    ~TotalValueToDateInUSDSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_amount;
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
};

struct UserOriginationSegmentFilter : public PlayFabAdminUserOriginationSegmentFilter, public BaseModel
{
    UserOriginationSegmentFilter();
    UserOriginationSegmentFilter(const UserOriginationSegmentFilter& src);
    UserOriginationSegmentFilter(UserOriginationSegmentFilter&& src);
    UserOriginationSegmentFilter(const PlayFabAdminUserOriginationSegmentFilter& src);
    UserOriginationSegmentFilter& operator=(const UserOriginationSegmentFilter&) = delete;
    ~UserOriginationSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentLoginIdentityProvider> m_loginProvider;
};

struct ValueToDateSegmentFilter : public PlayFabAdminValueToDateSegmentFilter, public BaseModel
{
    ValueToDateSegmentFilter();
    ValueToDateSegmentFilter(const ValueToDateSegmentFilter& src);
    ValueToDateSegmentFilter(ValueToDateSegmentFilter&& src);
    ValueToDateSegmentFilter(const PlayFabAdminValueToDateSegmentFilter& src);
    ValueToDateSegmentFilter& operator=(const ValueToDateSegmentFilter&) = delete;
    ~ValueToDateSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_amount;
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
    StdExtra::optional<PlayFabAdminSegmentCurrency> m_currency;
};

struct VirtualCurrencyBalanceSegmentFilter : public PlayFabAdminVirtualCurrencyBalanceSegmentFilter, public BaseModel
{
    VirtualCurrencyBalanceSegmentFilter();
    VirtualCurrencyBalanceSegmentFilter(const VirtualCurrencyBalanceSegmentFilter& src);
    VirtualCurrencyBalanceSegmentFilter(VirtualCurrencyBalanceSegmentFilter&& src);
    VirtualCurrencyBalanceSegmentFilter(const PlayFabAdminVirtualCurrencyBalanceSegmentFilter& src);
    VirtualCurrencyBalanceSegmentFilter& operator=(const VirtualCurrencyBalanceSegmentFilter&) = delete;
    ~VirtualCurrencyBalanceSegmentFilter() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminSegmentFilterComparison> m_comparison;
    String m_currencyCode;
};

struct SegmentAndDefinition : public PlayFabAdminSegmentAndDefinition, public BaseModel
{
    SegmentAndDefinition();
    SegmentAndDefinition(const SegmentAndDefinition& src);
    SegmentAndDefinition(SegmentAndDefinition&& src);
    SegmentAndDefinition(const PlayFabAdminSegmentAndDefinition& src);
    SegmentAndDefinition& operator=(const SegmentAndDefinition&) = delete;
    ~SegmentAndDefinition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<AdCampaignSegmentFilter> m_adCampaignFilter;
    StdExtra::optional<FirstLoginDateSegmentFilter> m_firstLoginDateFilter;
    StdExtra::optional<FirstLoginTimespanSegmentFilter> m_firstLoginFilter;
    StdExtra::optional<LastLoginDateSegmentFilter> m_lastLoginDateFilter;
    StdExtra::optional<LastLoginTimespanSegmentFilter> m_lastLoginFilter;
    StdExtra::optional<LinkedUserAccountSegmentFilter> m_linkedUserAccountFilter;
    StdExtra::optional<LinkedUserAccountHasEmailSegmentFilter> m_linkedUserAccountHasEmailFilter;
    StdExtra::optional<LocationSegmentFilter> m_locationFilter;
    StdExtra::optional<PushNotificationSegmentFilter> m_pushNotificationFilter;
    StdExtra::optional<StatisticSegmentFilter> m_statisticFilter;
    StdExtra::optional<TagSegmentFilter> m_tagFilter;
    StdExtra::optional<TotalValueToDateInUSDSegmentFilter> m_totalValueToDateInUSDFilter;
    StdExtra::optional<UserOriginationSegmentFilter> m_userOriginationFilter;
    StdExtra::optional<ValueToDateSegmentFilter> m_valueToDateFilter;
    StdExtra::optional<VirtualCurrencyBalanceSegmentFilter> m_virtualCurrencyBalanceFilter;
};

struct SegmentOrDefinition : public PlayFabAdminSegmentOrDefinition, public BaseModel
{
    SegmentOrDefinition();
    SegmentOrDefinition(const SegmentOrDefinition& src);
    SegmentOrDefinition(SegmentOrDefinition&& src);
    SegmentOrDefinition(const PlayFabAdminSegmentOrDefinition& src);
    SegmentOrDefinition& operator=(const SegmentOrDefinition&) = delete;
    ~SegmentOrDefinition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminSegmentAndDefinition, SegmentAndDefinition> m_segmentAndDefinitions;
};

struct SegmentModel : public PlayFabAdminSegmentModel, public BaseModel
{
    SegmentModel();
    SegmentModel(const SegmentModel& src);
    SegmentModel(SegmentModel&& src);
    SegmentModel(const PlayFabAdminSegmentModel& src);
    SegmentModel& operator=(const SegmentModel&) = delete;
    ~SegmentModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    PointerArrayModel<PlayFabAdminSegmentTrigger, SegmentTrigger> m_enteredSegmentActions;
    PointerArrayModel<PlayFabAdminSegmentTrigger, SegmentTrigger> m_leftSegmentActions;
    String m_name;
    String m_segmentId;
    PointerArrayModel<PlayFabAdminSegmentOrDefinition, SegmentOrDefinition> m_segmentOrDefinitions;
};

struct CreateSegmentRequest : public PlayFabAdminCreateSegmentRequest, public BaseModel
{
    CreateSegmentRequest();
    CreateSegmentRequest(const CreateSegmentRequest& src);
    CreateSegmentRequest(CreateSegmentRequest&& src);
    CreateSegmentRequest(const PlayFabAdminCreateSegmentRequest& src);
    CreateSegmentRequest& operator=(const CreateSegmentRequest&) = delete;
    ~CreateSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    SegmentModel m_segmentModel;
};

struct CreateSegmentResponse : public PlayFabAdminCreateSegmentResponse, public SerializableModel, public ApiResult
{
    CreateSegmentResponse();
    CreateSegmentResponse(const CreateSegmentResponse& src);
    CreateSegmentResponse(CreateSegmentResponse&& src);
    CreateSegmentResponse(const PlayFabAdminCreateSegmentResponse& src);
    CreateSegmentResponse& operator=(const CreateSegmentResponse&) = delete;
    ~CreateSegmentResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_errorMessage;
    String m_segmentId;
};

struct CreateTaskResult : public PlayFabAdminCreateTaskResult, public SerializableModel, public ApiResult
{
    CreateTaskResult();
    CreateTaskResult(const CreateTaskResult& src);
    CreateTaskResult(CreateTaskResult&& src);
    CreateTaskResult(const PlayFabAdminCreateTaskResult& src);
    CreateTaskResult& operator=(const CreateTaskResult&) = delete;
    ~CreateTaskResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_taskId;
};

struct DeleteContentRequest : public PlayFabAdminDeleteContentRequest, public SerializableModel
{
    DeleteContentRequest();
    DeleteContentRequest(const DeleteContentRequest& src);
    DeleteContentRequest(DeleteContentRequest&& src);
    DeleteContentRequest(const PlayFabAdminDeleteContentRequest& src);
    DeleteContentRequest& operator=(const DeleteContentRequest&) = delete;
    ~DeleteContentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
};

struct DeleteMasterPlayerAccountRequest : public PlayFabAdminDeleteMasterPlayerAccountRequest, public SerializableModel
{
    DeleteMasterPlayerAccountRequest();
    DeleteMasterPlayerAccountRequest(const DeleteMasterPlayerAccountRequest& src);
    DeleteMasterPlayerAccountRequest(DeleteMasterPlayerAccountRequest&& src);
    DeleteMasterPlayerAccountRequest(const PlayFabAdminDeleteMasterPlayerAccountRequest& src);
    DeleteMasterPlayerAccountRequest& operator=(const DeleteMasterPlayerAccountRequest&) = delete;
    ~DeleteMasterPlayerAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_metaData;
    String m_playFabId;
};

struct DeleteMasterPlayerAccountResult : public PlayFabAdminDeleteMasterPlayerAccountResult, public BaseModel, public ApiResult
{
    DeleteMasterPlayerAccountResult();
    DeleteMasterPlayerAccountResult(const DeleteMasterPlayerAccountResult& src);
    DeleteMasterPlayerAccountResult(DeleteMasterPlayerAccountResult&& src);
    DeleteMasterPlayerAccountResult(const PlayFabAdminDeleteMasterPlayerAccountResult& src);
    DeleteMasterPlayerAccountResult& operator=(const DeleteMasterPlayerAccountResult&) = delete;
    ~DeleteMasterPlayerAccountResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_jobReceiptId;
    PointerArrayModel<char, String> m_titleIds;
};

struct DeleteOpenIdConnectionRequest : public PlayFabAdminDeleteOpenIdConnectionRequest, public SerializableModel
{
    DeleteOpenIdConnectionRequest();
    DeleteOpenIdConnectionRequest(const DeleteOpenIdConnectionRequest& src);
    DeleteOpenIdConnectionRequest(DeleteOpenIdConnectionRequest&& src);
    DeleteOpenIdConnectionRequest(const PlayFabAdminDeleteOpenIdConnectionRequest& src);
    DeleteOpenIdConnectionRequest& operator=(const DeleteOpenIdConnectionRequest&) = delete;
    ~DeleteOpenIdConnectionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_connectionId;
};

struct DeletePlayerRequest : public PlayFabAdminDeletePlayerRequest, public SerializableModel
{
    DeletePlayerRequest();
    DeletePlayerRequest(const DeletePlayerRequest& src);
    DeletePlayerRequest(DeletePlayerRequest&& src);
    DeletePlayerRequest(const PlayFabAdminDeletePlayerRequest& src);
    DeletePlayerRequest& operator=(const DeletePlayerRequest&) = delete;
    ~DeletePlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct DeletePlayerSharedSecretRequest : public PlayFabAdminDeletePlayerSharedSecretRequest, public SerializableModel
{
    DeletePlayerSharedSecretRequest();
    DeletePlayerSharedSecretRequest(const DeletePlayerSharedSecretRequest& src);
    DeletePlayerSharedSecretRequest(DeletePlayerSharedSecretRequest&& src);
    DeletePlayerSharedSecretRequest(const PlayFabAdminDeletePlayerSharedSecretRequest& src);
    DeletePlayerSharedSecretRequest& operator=(const DeletePlayerSharedSecretRequest&) = delete;
    ~DeletePlayerSharedSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_secretKey;
};

struct DeleteSegmentRequest : public PlayFabAdminDeleteSegmentRequest, public SerializableModel
{
    DeleteSegmentRequest();
    DeleteSegmentRequest(const DeleteSegmentRequest& src);
    DeleteSegmentRequest(DeleteSegmentRequest&& src);
    DeleteSegmentRequest(const PlayFabAdminDeleteSegmentRequest& src);
    DeleteSegmentRequest& operator=(const DeleteSegmentRequest&) = delete;
    ~DeleteSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_segmentId;
};

struct DeleteSegmentsResponse : public PlayFabAdminDeleteSegmentsResponse, public SerializableModel, public ApiResult
{
    DeleteSegmentsResponse();
    DeleteSegmentsResponse(const DeleteSegmentsResponse& src);
    DeleteSegmentsResponse(DeleteSegmentsResponse&& src);
    DeleteSegmentsResponse(const PlayFabAdminDeleteSegmentsResponse& src);
    DeleteSegmentsResponse& operator=(const DeleteSegmentsResponse&) = delete;
    ~DeleteSegmentsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_errorMessage;
};

struct DeleteStoreRequest : public PlayFabAdminDeleteStoreRequest, public BaseModel
{
    DeleteStoreRequest();
    DeleteStoreRequest(const DeleteStoreRequest& src);
    DeleteStoreRequest(DeleteStoreRequest&& src);
    DeleteStoreRequest(const PlayFabAdminDeleteStoreRequest& src);
    DeleteStoreRequest& operator=(const DeleteStoreRequest&) = delete;
    ~DeleteStoreRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_storeId;
};

struct DeleteTaskRequest : public PlayFabAdminDeleteTaskRequest, public BaseModel
{
    DeleteTaskRequest();
    DeleteTaskRequest(const DeleteTaskRequest& src);
    DeleteTaskRequest(DeleteTaskRequest&& src);
    DeleteTaskRequest(const PlayFabAdminDeleteTaskRequest& src);
    DeleteTaskRequest& operator=(const DeleteTaskRequest&) = delete;
    ~DeleteTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct DeleteTitleDataOverrideRequest : public PlayFabAdminDeleteTitleDataOverrideRequest, public SerializableModel
{
    DeleteTitleDataOverrideRequest();
    DeleteTitleDataOverrideRequest(const DeleteTitleDataOverrideRequest& src);
    DeleteTitleDataOverrideRequest(DeleteTitleDataOverrideRequest&& src);
    DeleteTitleDataOverrideRequest(const PlayFabAdminDeleteTitleDataOverrideRequest& src);
    DeleteTitleDataOverrideRequest& operator=(const DeleteTitleDataOverrideRequest&) = delete;
    ~DeleteTitleDataOverrideRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_overrideLabel;
};

struct ExportMasterPlayerDataRequest : public PlayFabAdminExportMasterPlayerDataRequest, public SerializableModel
{
    ExportMasterPlayerDataRequest();
    ExportMasterPlayerDataRequest(const ExportMasterPlayerDataRequest& src);
    ExportMasterPlayerDataRequest(ExportMasterPlayerDataRequest&& src);
    ExportMasterPlayerDataRequest(const PlayFabAdminExportMasterPlayerDataRequest& src);
    ExportMasterPlayerDataRequest& operator=(const ExportMasterPlayerDataRequest&) = delete;
    ~ExportMasterPlayerDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct ExportMasterPlayerDataResult : public PlayFabAdminExportMasterPlayerDataResult, public SerializableModel, public ApiResult
{
    ExportMasterPlayerDataResult();
    ExportMasterPlayerDataResult(const ExportMasterPlayerDataResult& src);
    ExportMasterPlayerDataResult(ExportMasterPlayerDataResult&& src);
    ExportMasterPlayerDataResult(const PlayFabAdminExportMasterPlayerDataResult& src);
    ExportMasterPlayerDataResult& operator=(const ExportMasterPlayerDataResult&) = delete;
    ~ExportMasterPlayerDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_jobReceiptId;
};

struct GameModeInfo : public PlayFabAdminGameModeInfo, public BaseModel
{
    GameModeInfo();
    GameModeInfo(const GameModeInfo& src);
    GameModeInfo(GameModeInfo&& src);
    GameModeInfo(const PlayFabAdminGameModeInfo& src);
    GameModeInfo& operator=(const GameModeInfo&) = delete;
    ~GameModeInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_gamemode;
    StdExtra::optional<bool> m_startOpen;
};

struct GetActionsOnPlayersInSegmentTaskInstanceResult : public PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult, public BaseModel, public ApiResult
{
    GetActionsOnPlayersInSegmentTaskInstanceResult();
    GetActionsOnPlayersInSegmentTaskInstanceResult(const GetActionsOnPlayersInSegmentTaskInstanceResult& src);
    GetActionsOnPlayersInSegmentTaskInstanceResult(GetActionsOnPlayersInSegmentTaskInstanceResult&& src);
    GetActionsOnPlayersInSegmentTaskInstanceResult(const PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult& src);
    GetActionsOnPlayersInSegmentTaskInstanceResult& operator=(const GetActionsOnPlayersInSegmentTaskInstanceResult&) = delete;
    ~GetActionsOnPlayersInSegmentTaskInstanceResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<ActionsOnPlayersInSegmentTaskParameter> m_parameter;
    StdExtra::optional<ActionsOnPlayersInSegmentTaskSummary> m_summary;
};

struct GetSegmentResult : public PlayFabAdminGetSegmentResult, public SerializableModel, public ApiResult
{
    GetSegmentResult();
    GetSegmentResult(const GetSegmentResult& src);
    GetSegmentResult(GetSegmentResult&& src);
    GetSegmentResult(const PlayFabAdminGetSegmentResult& src);
    GetSegmentResult& operator=(const GetSegmentResult&) = delete;
    ~GetSegmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_aBTestParent;
    String m_id;
    String m_name;
};

struct GetAllSegmentsResult : public PlayFabAdminGetAllSegmentsResult, public BaseModel, public ApiResult
{
    GetAllSegmentsResult();
    GetAllSegmentsResult(const GetAllSegmentsResult& src);
    GetAllSegmentsResult(GetAllSegmentsResult&& src);
    GetAllSegmentsResult(const PlayFabAdminGetAllSegmentsResult& src);
    GetAllSegmentsResult& operator=(const GetAllSegmentsResult&) = delete;
    ~GetAllSegmentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminGetSegmentResult, GetSegmentResult> m_segments;
};

struct GetCatalogItemsRequest : public PlayFabAdminGetCatalogItemsRequest, public SerializableModel
{
    GetCatalogItemsRequest();
    GetCatalogItemsRequest(const GetCatalogItemsRequest& src);
    GetCatalogItemsRequest(GetCatalogItemsRequest&& src);
    GetCatalogItemsRequest(const PlayFabAdminGetCatalogItemsRequest& src);
    GetCatalogItemsRequest& operator=(const GetCatalogItemsRequest&) = delete;
    ~GetCatalogItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
};

struct GetCatalogItemsResult : public PlayFabAdminGetCatalogItemsResult, public BaseModel, public ApiResult
{
    GetCatalogItemsResult();
    GetCatalogItemsResult(const GetCatalogItemsResult& src);
    GetCatalogItemsResult(GetCatalogItemsResult&& src);
    GetCatalogItemsResult(const PlayFabAdminGetCatalogItemsResult& src);
    GetCatalogItemsResult& operator=(const GetCatalogItemsResult&) = delete;
    ~GetCatalogItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminCatalogItem, CatalogItem> m_catalog;
};

struct GetCloudScriptRevisionRequest : public PlayFabAdminGetCloudScriptRevisionRequest, public BaseModel
{
    GetCloudScriptRevisionRequest();
    GetCloudScriptRevisionRequest(const GetCloudScriptRevisionRequest& src);
    GetCloudScriptRevisionRequest(GetCloudScriptRevisionRequest&& src);
    GetCloudScriptRevisionRequest(const PlayFabAdminGetCloudScriptRevisionRequest& src);
    GetCloudScriptRevisionRequest& operator=(const GetCloudScriptRevisionRequest&) = delete;
    ~GetCloudScriptRevisionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<int32_t> m_revision;
    StdExtra::optional<int32_t> m_version;
};

struct GetCloudScriptRevisionResult : public PlayFabAdminGetCloudScriptRevisionResult, public BaseModel, public ApiResult
{
    GetCloudScriptRevisionResult();
    GetCloudScriptRevisionResult(const GetCloudScriptRevisionResult& src);
    GetCloudScriptRevisionResult(GetCloudScriptRevisionResult&& src);
    GetCloudScriptRevisionResult(const PlayFabAdminGetCloudScriptRevisionResult& src);
    GetCloudScriptRevisionResult& operator=(const GetCloudScriptRevisionResult&) = delete;
    ~GetCloudScriptRevisionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminCloudScriptFile, CloudScriptFile> m_files;
};

struct GetCloudScriptTaskInstanceResult : public PlayFabAdminGetCloudScriptTaskInstanceResult, public BaseModel, public ApiResult
{
    GetCloudScriptTaskInstanceResult();
    GetCloudScriptTaskInstanceResult(const GetCloudScriptTaskInstanceResult& src);
    GetCloudScriptTaskInstanceResult(GetCloudScriptTaskInstanceResult&& src);
    GetCloudScriptTaskInstanceResult(const PlayFabAdminGetCloudScriptTaskInstanceResult& src);
    GetCloudScriptTaskInstanceResult& operator=(const GetCloudScriptTaskInstanceResult&) = delete;
    ~GetCloudScriptTaskInstanceResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<CloudScriptTaskParameter> m_parameter;
    StdExtra::optional<CloudScriptTaskSummary> m_summary;
};

struct GetCloudScriptVersionsResult : public PlayFabAdminGetCloudScriptVersionsResult, public BaseModel, public ApiResult
{
    GetCloudScriptVersionsResult();
    GetCloudScriptVersionsResult(const GetCloudScriptVersionsResult& src);
    GetCloudScriptVersionsResult(GetCloudScriptVersionsResult&& src);
    GetCloudScriptVersionsResult(const PlayFabAdminGetCloudScriptVersionsResult& src);
    GetCloudScriptVersionsResult& operator=(const GetCloudScriptVersionsResult&) = delete;
    ~GetCloudScriptVersionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminCloudScriptVersionStatus, CloudScriptVersionStatus> m_versions;
};

struct GetContentListRequest : public PlayFabAdminGetContentListRequest, public SerializableModel
{
    GetContentListRequest();
    GetContentListRequest(const GetContentListRequest& src);
    GetContentListRequest(GetContentListRequest&& src);
    GetContentListRequest(const PlayFabAdminGetContentListRequest& src);
    GetContentListRequest& operator=(const GetContentListRequest&) = delete;
    ~GetContentListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_prefix;
};

struct GetContentListResult : public PlayFabAdminGetContentListResult, public BaseModel, public ApiResult
{
    GetContentListResult();
    GetContentListResult(const GetContentListResult& src);
    GetContentListResult(GetContentListResult&& src);
    GetContentListResult(const PlayFabAdminGetContentListResult& src);
    GetContentListResult& operator=(const GetContentListResult&) = delete;
    ~GetContentListResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminContentInfo, ContentInfo> m_contents;
};

struct GetContentUploadUrlRequest : public PlayFabAdminGetContentUploadUrlRequest, public SerializableModel
{
    GetContentUploadUrlRequest();
    GetContentUploadUrlRequest(const GetContentUploadUrlRequest& src);
    GetContentUploadUrlRequest(GetContentUploadUrlRequest&& src);
    GetContentUploadUrlRequest(const PlayFabAdminGetContentUploadUrlRequest& src);
    GetContentUploadUrlRequest& operator=(const GetContentUploadUrlRequest&) = delete;
    ~GetContentUploadUrlRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_contentType;
    String m_key;
};

struct GetContentUploadUrlResult : public PlayFabAdminGetContentUploadUrlResult, public SerializableModel, public ApiResult
{
    GetContentUploadUrlResult();
    GetContentUploadUrlResult(const GetContentUploadUrlResult& src);
    GetContentUploadUrlResult(GetContentUploadUrlResult&& src);
    GetContentUploadUrlResult(const PlayFabAdminGetContentUploadUrlResult& src);
    GetContentUploadUrlResult& operator=(const GetContentUploadUrlResult&) = delete;
    ~GetContentUploadUrlResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_uRL;
};

struct GetDataReportRequest : public PlayFabAdminGetDataReportRequest, public SerializableModel
{
    GetDataReportRequest();
    GetDataReportRequest(const GetDataReportRequest& src);
    GetDataReportRequest(GetDataReportRequest&& src);
    GetDataReportRequest(const PlayFabAdminGetDataReportRequest& src);
    GetDataReportRequest& operator=(const GetDataReportRequest&) = delete;
    ~GetDataReportRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_reportName;
};

struct GetDataReportResult : public PlayFabAdminGetDataReportResult, public SerializableModel, public ApiResult
{
    GetDataReportResult();
    GetDataReportResult(const GetDataReportResult& src);
    GetDataReportResult(GetDataReportResult&& src);
    GetDataReportResult(const PlayFabAdminGetDataReportResult& src);
    GetDataReportResult& operator=(const GetDataReportResult&) = delete;
    ~GetDataReportResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_downloadUrl;
};

struct GetMatchmakerGameInfoRequest : public PlayFabAdminGetMatchmakerGameInfoRequest, public SerializableModel
{
    GetMatchmakerGameInfoRequest();
    GetMatchmakerGameInfoRequest(const GetMatchmakerGameInfoRequest& src);
    GetMatchmakerGameInfoRequest(GetMatchmakerGameInfoRequest&& src);
    GetMatchmakerGameInfoRequest(const PlayFabAdminGetMatchmakerGameInfoRequest& src);
    GetMatchmakerGameInfoRequest& operator=(const GetMatchmakerGameInfoRequest&) = delete;
    ~GetMatchmakerGameInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_lobbyId;
};

struct GetMatchmakerGameInfoResult : public PlayFabAdminGetMatchmakerGameInfoResult, public BaseModel, public ApiResult
{
    GetMatchmakerGameInfoResult();
    GetMatchmakerGameInfoResult(const GetMatchmakerGameInfoResult& src);
    GetMatchmakerGameInfoResult(GetMatchmakerGameInfoResult&& src);
    GetMatchmakerGameInfoResult(const PlayFabAdminGetMatchmakerGameInfoResult& src);
    GetMatchmakerGameInfoResult& operator=(const GetMatchmakerGameInfoResult&) = delete;
    ~GetMatchmakerGameInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    StdExtra::optional<time_t> m_endTime;
    String m_lobbyId;
    String m_mode;
    PointerArrayModel<char, String> m_players;
    StdExtra::optional<PlayFabAdminRegion> m_region;
    String m_serverIPV4Address;
    String m_serverIPV6Address;
    String m_serverPublicDNSName;
    String m_titleId;
};

struct GetMatchmakerGameModesRequest : public PlayFabAdminGetMatchmakerGameModesRequest, public SerializableModel
{
    GetMatchmakerGameModesRequest();
    GetMatchmakerGameModesRequest(const GetMatchmakerGameModesRequest& src);
    GetMatchmakerGameModesRequest(GetMatchmakerGameModesRequest&& src);
    GetMatchmakerGameModesRequest(const PlayFabAdminGetMatchmakerGameModesRequest& src);
    GetMatchmakerGameModesRequest& operator=(const GetMatchmakerGameModesRequest&) = delete;
    ~GetMatchmakerGameModesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildVersion;
};

struct GetMatchmakerGameModesResult : public PlayFabAdminGetMatchmakerGameModesResult, public BaseModel, public ApiResult
{
    GetMatchmakerGameModesResult();
    GetMatchmakerGameModesResult(const GetMatchmakerGameModesResult& src);
    GetMatchmakerGameModesResult(GetMatchmakerGameModesResult&& src);
    GetMatchmakerGameModesResult(const PlayFabAdminGetMatchmakerGameModesResult& src);
    GetMatchmakerGameModesResult& operator=(const GetMatchmakerGameModesResult&) = delete;
    ~GetMatchmakerGameModesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminGameModeInfo, GameModeInfo> m_gameModes;
};

struct GetPlayedTitleListRequest : public PlayFabAdminGetPlayedTitleListRequest, public SerializableModel
{
    GetPlayedTitleListRequest();
    GetPlayedTitleListRequest(const GetPlayedTitleListRequest& src);
    GetPlayedTitleListRequest(GetPlayedTitleListRequest&& src);
    GetPlayedTitleListRequest(const PlayFabAdminGetPlayedTitleListRequest& src);
    GetPlayedTitleListRequest& operator=(const GetPlayedTitleListRequest&) = delete;
    ~GetPlayedTitleListRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetPlayedTitleListResult : public PlayFabAdminGetPlayedTitleListResult, public BaseModel, public ApiResult
{
    GetPlayedTitleListResult();
    GetPlayedTitleListResult(const GetPlayedTitleListResult& src);
    GetPlayedTitleListResult(GetPlayedTitleListResult&& src);
    GetPlayedTitleListResult(const PlayFabAdminGetPlayedTitleListResult& src);
    GetPlayedTitleListResult& operator=(const GetPlayedTitleListResult&) = delete;
    ~GetPlayedTitleListResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_titleIds;
};

struct GetPlayerIdFromAuthTokenRequest : public PlayFabAdminGetPlayerIdFromAuthTokenRequest, public SerializableModel
{
    GetPlayerIdFromAuthTokenRequest();
    GetPlayerIdFromAuthTokenRequest(const GetPlayerIdFromAuthTokenRequest& src);
    GetPlayerIdFromAuthTokenRequest(GetPlayerIdFromAuthTokenRequest&& src);
    GetPlayerIdFromAuthTokenRequest(const PlayFabAdminGetPlayerIdFromAuthTokenRequest& src);
    GetPlayerIdFromAuthTokenRequest& operator=(const GetPlayerIdFromAuthTokenRequest&) = delete;
    ~GetPlayerIdFromAuthTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_token;
};

struct GetPlayerIdFromAuthTokenResult : public PlayFabAdminGetPlayerIdFromAuthTokenResult, public SerializableModel, public ApiResult
{
    GetPlayerIdFromAuthTokenResult();
    GetPlayerIdFromAuthTokenResult(const GetPlayerIdFromAuthTokenResult& src);
    GetPlayerIdFromAuthTokenResult(GetPlayerIdFromAuthTokenResult&& src);
    GetPlayerIdFromAuthTokenResult(const PlayFabAdminGetPlayerIdFromAuthTokenResult& src);
    GetPlayerIdFromAuthTokenResult& operator=(const GetPlayerIdFromAuthTokenResult&) = delete;
    ~GetPlayerIdFromAuthTokenResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct PlayerProfileViewConstraints : public PlayFabAdminPlayerProfileViewConstraints, public SerializableModel
{
    PlayerProfileViewConstraints();
    PlayerProfileViewConstraints(const PlayerProfileViewConstraints&) = default;
    PlayerProfileViewConstraints(PlayerProfileViewConstraints&&) = default;
    PlayerProfileViewConstraints(const PlayFabAdminPlayerProfileViewConstraints& src);
    PlayerProfileViewConstraints& operator=(const PlayerProfileViewConstraints&) = delete;
    ~PlayerProfileViewConstraints() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct GetPlayerProfileRequest : public PlayFabAdminGetPlayerProfileRequest, public BaseModel
{
    GetPlayerProfileRequest();
    GetPlayerProfileRequest(const GetPlayerProfileRequest& src);
    GetPlayerProfileRequest(GetPlayerProfileRequest&& src);
    GetPlayerProfileRequest(const PlayFabAdminGetPlayerProfileRequest& src);
    GetPlayerProfileRequest& operator=(const GetPlayerProfileRequest&) = delete;
    ~GetPlayerProfileRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
};

struct GetPlayerProfileResult : public PlayFabAdminGetPlayerProfileResult, public BaseModel, public ApiResult
{
    GetPlayerProfileResult();
    GetPlayerProfileResult(const GetPlayerProfileResult& src);
    GetPlayerProfileResult(GetPlayerProfileResult&& src);
    GetPlayerProfileResult(const PlayFabAdminGetPlayerProfileResult& src);
    GetPlayerProfileResult& operator=(const GetPlayerProfileResult&) = delete;
    ~GetPlayerProfileResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerProfileModel> m_playerProfile;
};

struct GetPlayerSegmentsResult : public PlayFabAdminGetPlayerSegmentsResult, public BaseModel, public ApiResult
{
    GetPlayerSegmentsResult();
    GetPlayerSegmentsResult(const GetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult(GetPlayerSegmentsResult&& src);
    GetPlayerSegmentsResult(const PlayFabAdminGetPlayerSegmentsResult& src);
    GetPlayerSegmentsResult& operator=(const GetPlayerSegmentsResult&) = delete;
    ~GetPlayerSegmentsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminGetSegmentResult, GetSegmentResult> m_segments;
};

struct SharedSecret : public PlayFabAdminSharedSecret, public SerializableModel
{
    SharedSecret();
    SharedSecret(const SharedSecret& src);
    SharedSecret(SharedSecret&& src);
    SharedSecret(const PlayFabAdminSharedSecret& src);
    SharedSecret& operator=(const SharedSecret&) = delete;
    ~SharedSecret() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendlyName;
    String m_secretKey;
};

struct GetPlayerSharedSecretsResult : public PlayFabAdminGetPlayerSharedSecretsResult, public BaseModel, public ApiResult
{
    GetPlayerSharedSecretsResult();
    GetPlayerSharedSecretsResult(const GetPlayerSharedSecretsResult& src);
    GetPlayerSharedSecretsResult(GetPlayerSharedSecretsResult&& src);
    GetPlayerSharedSecretsResult(const PlayFabAdminGetPlayerSharedSecretsResult& src);
    GetPlayerSharedSecretsResult& operator=(const GetPlayerSharedSecretsResult&) = delete;
    ~GetPlayerSharedSecretsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminSharedSecret, SharedSecret> m_sharedSecrets;
};

struct GetPlayersInSegmentRequest : public PlayFabAdminGetPlayersInSegmentRequest, public BaseModel
{
    GetPlayersInSegmentRequest();
    GetPlayersInSegmentRequest(const GetPlayersInSegmentRequest& src);
    GetPlayersInSegmentRequest(GetPlayersInSegmentRequest&& src);
    GetPlayersInSegmentRequest(const PlayFabAdminGetPlayersInSegmentRequest& src);
    GetPlayersInSegmentRequest& operator=(const GetPlayersInSegmentRequest&) = delete;
    ~GetPlayersInSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_continuationToken;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<uint32_t> m_maxBatchSize;
    StdExtra::optional<uint32_t> m_secondsToLive;
    String m_segmentId;
};

struct PlayerLinkedAccount : public PlayFabAdminPlayerLinkedAccount, public BaseModel
{
    PlayerLinkedAccount();
    PlayerLinkedAccount(const PlayerLinkedAccount& src);
    PlayerLinkedAccount(PlayerLinkedAccount&& src);
    PlayerLinkedAccount(const PlayFabAdminPlayerLinkedAccount& src);
    PlayerLinkedAccount& operator=(const PlayerLinkedAccount&) = delete;
    ~PlayerLinkedAccount() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_email;
    StdExtra::optional<PlayFabLoginIdentityProvider> m_platform;
    String m_platformUserId;
    String m_username;
};

struct PlayerLocation : public PlayFabAdminPlayerLocation, public BaseModel
{
    PlayerLocation();
    PlayerLocation(const PlayerLocation& src);
    PlayerLocation(PlayerLocation&& src);
    PlayerLocation(const PlayFabAdminPlayerLocation& src);
    PlayerLocation& operator=(const PlayerLocation&) = delete;
    ~PlayerLocation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_city;
    StdExtra::optional<double> m_latitude;
    StdExtra::optional<double> m_longitude;
};

struct PlayerStatistic : public PlayFabAdminPlayerStatistic, public SerializableModel
{
    PlayerStatistic();
    PlayerStatistic(const PlayerStatistic& src);
    PlayerStatistic(PlayerStatistic&& src);
    PlayerStatistic(const PlayFabAdminPlayerStatistic& src);
    PlayerStatistic& operator=(const PlayerStatistic&) = delete;
    ~PlayerStatistic() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_id;
    String m_name;
};

struct PushNotificationRegistration : public PlayFabAdminPushNotificationRegistration, public BaseModel
{
    PushNotificationRegistration();
    PushNotificationRegistration(const PushNotificationRegistration& src);
    PushNotificationRegistration(PushNotificationRegistration&& src);
    PushNotificationRegistration(const PlayFabAdminPushNotificationRegistration& src);
    PushNotificationRegistration& operator=(const PushNotificationRegistration&) = delete;
    ~PushNotificationRegistration() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_notificationEndpointARN;
    StdExtra::optional<PlayFabPushNotificationPlatform> m_platform;
};

struct PlayerProfile : public PlayFabAdminPlayerProfile, public BaseModel
{
    PlayerProfile();
    PlayerProfile(const PlayerProfile& src);
    PlayerProfile(PlayerProfile&& src);
    PlayerProfile(const PlayFabAdminPlayerProfile& src);
    PlayerProfile& operator=(const PlayerProfile&) = delete;
    ~PlayerProfile() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminAdCampaignAttribution, AdCampaignAttribution> m_adCampaignAttributions;
    String m_avatarUrl;
    StdExtra::optional<time_t> m_bannedUntil;
    PointerArrayModel<PlayFabAdminContactEmailInfo, ContactEmailInfo> m_contactEmailAddresses;
    StdExtra::optional<time_t> m_created;
    String m_displayName;
    StdExtra::optional<time_t> m_lastLogin;
    PointerArrayModel<PlayFabAdminPlayerLinkedAccount, PlayerLinkedAccount> m_linkedAccounts;
    AssociativeArrayModel<PlayFabAdminPlayerLocationDictionaryEntry, PlayerLocation> m_locations;
    StdExtra::optional<PlayFabLoginIdentityProvider> m_origination;
    PointerArrayModel<char, String> m_playerExperimentVariants;
    String m_playerId;
    PointerArrayModel<PlayFabAdminPlayerStatistic, PlayerStatistic> m_playerStatistics;
    String m_publisherId;
    PointerArrayModel<PlayFabAdminPushNotificationRegistration, PushNotificationRegistration> m_pushNotificationRegistrations;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_statistics;
    PointerArrayModel<char, String> m_tags;
    String m_titleId;
    StdExtra::optional<uint32_t> m_totalValueToDateInUSD;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_valuesToDate;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrencyBalances;
};

struct GetPlayersInSegmentResult : public PlayFabAdminGetPlayersInSegmentResult, public BaseModel, public ApiResult
{
    GetPlayersInSegmentResult();
    GetPlayersInSegmentResult(const GetPlayersInSegmentResult& src);
    GetPlayersInSegmentResult(GetPlayersInSegmentResult&& src);
    GetPlayersInSegmentResult(const PlayFabAdminGetPlayersInSegmentResult& src);
    GetPlayersInSegmentResult& operator=(const GetPlayersInSegmentResult&) = delete;
    ~GetPlayersInSegmentResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_continuationToken;
    PointerArrayModel<PlayFabAdminPlayerProfile, PlayerProfile> m_playerProfiles;
};

struct GetPlayersSegmentsRequest : public PlayFabAdminGetPlayersSegmentsRequest, public BaseModel
{
    GetPlayersSegmentsRequest();
    GetPlayersSegmentsRequest(const GetPlayersSegmentsRequest& src);
    GetPlayersSegmentsRequest(GetPlayersSegmentsRequest&& src);
    GetPlayersSegmentsRequest(const PlayFabAdminGetPlayersSegmentsRequest& src);
    GetPlayersSegmentsRequest& operator=(const GetPlayersSegmentsRequest&) = delete;
    ~GetPlayersSegmentsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct GetPlayerStatisticDefinitionsResult : public PlayFabAdminGetPlayerStatisticDefinitionsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticDefinitionsResult();
    GetPlayerStatisticDefinitionsResult(const GetPlayerStatisticDefinitionsResult& src);
    GetPlayerStatisticDefinitionsResult(GetPlayerStatisticDefinitionsResult&& src);
    GetPlayerStatisticDefinitionsResult(const PlayFabAdminGetPlayerStatisticDefinitionsResult& src);
    GetPlayerStatisticDefinitionsResult& operator=(const GetPlayerStatisticDefinitionsResult&) = delete;
    ~GetPlayerStatisticDefinitionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminPlayerStatisticDefinition, PlayerStatisticDefinition> m_statistics;
};

struct GetPlayerStatisticVersionsRequest : public PlayFabAdminGetPlayerStatisticVersionsRequest, public BaseModel
{
    GetPlayerStatisticVersionsRequest();
    GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src);
    GetPlayerStatisticVersionsRequest(const PlayFabAdminGetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest& operator=(const GetPlayerStatisticVersionsRequest&) = delete;
    ~GetPlayerStatisticVersionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
};

struct PlayerStatisticVersion : public PlayFabAdminPlayerStatisticVersion, public BaseModel
{
    PlayerStatisticVersion();
    PlayerStatisticVersion(const PlayerStatisticVersion& src);
    PlayerStatisticVersion(PlayerStatisticVersion&& src);
    PlayerStatisticVersion(const PlayFabAdminPlayerStatisticVersion& src);
    PlayerStatisticVersion& operator=(const PlayerStatisticVersion&) = delete;
    ~PlayerStatisticVersion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_archiveDownloadUrl;
    StdExtra::optional<time_t> m_deactivationTime;
    StdExtra::optional<time_t> m_scheduledActivationTime;
    StdExtra::optional<time_t> m_scheduledDeactivationTime;
    String m_statisticName;
    StdExtra::optional<PlayFabAdminStatisticVersionStatus> m_status;
};

struct GetPlayerStatisticVersionsResult : public PlayFabAdminGetPlayerStatisticVersionsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticVersionsResult();
    GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src);
    GetPlayerStatisticVersionsResult(const PlayFabAdminGetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult& operator=(const GetPlayerStatisticVersionsResult&) = delete;
    ~GetPlayerStatisticVersionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminPlayerStatisticVersion, PlayerStatisticVersion> m_statisticVersions;
};

struct GetPlayerTagsRequest : public PlayFabAdminGetPlayerTagsRequest, public BaseModel
{
    GetPlayerTagsRequest();
    GetPlayerTagsRequest(const GetPlayerTagsRequest& src);
    GetPlayerTagsRequest(GetPlayerTagsRequest&& src);
    GetPlayerTagsRequest(const PlayFabAdminGetPlayerTagsRequest& src);
    GetPlayerTagsRequest& operator=(const GetPlayerTagsRequest&) = delete;
    ~GetPlayerTagsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playfabNamespace;
    String m_playFabId;
};

struct GetPlayerTagsResult : public PlayFabAdminGetPlayerTagsResult, public BaseModel, public ApiResult
{
    GetPlayerTagsResult();
    GetPlayerTagsResult(const GetPlayerTagsResult& src);
    GetPlayerTagsResult(GetPlayerTagsResult&& src);
    GetPlayerTagsResult(const PlayFabAdminGetPlayerTagsResult& src);
    GetPlayerTagsResult& operator=(const GetPlayerTagsResult&) = delete;
    ~GetPlayerTagsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_playFabId;
    PointerArrayModel<char, String> m_tags;
};

struct GetPolicyRequest : public PlayFabAdminGetPolicyRequest, public SerializableModel
{
    GetPolicyRequest();
    GetPolicyRequest(const GetPolicyRequest& src);
    GetPolicyRequest(GetPolicyRequest&& src);
    GetPolicyRequest(const PlayFabAdminGetPolicyRequest& src);
    GetPolicyRequest& operator=(const GetPolicyRequest&) = delete;
    ~GetPolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_policyName;
};

struct PermissionStatement : public PlayFabAdminPermissionStatement, public BaseModel
{
    PermissionStatement();
    PermissionStatement(const PermissionStatement& src);
    PermissionStatement(PermissionStatement&& src);
    PermissionStatement(const PlayFabAdminPermissionStatement& src);
    PermissionStatement& operator=(const PermissionStatement&) = delete;
    ~PermissionStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_action;
    StdExtra::optional<ApiCondition> m_apiConditions;
    String m_comment;
    String m_principal;
    String m_resource;
};

struct GetPolicyResponse : public PlayFabAdminGetPolicyResponse, public BaseModel, public ApiResult
{
    GetPolicyResponse();
    GetPolicyResponse(const GetPolicyResponse& src);
    GetPolicyResponse(GetPolicyResponse&& src);
    GetPolicyResponse(const PlayFabAdminGetPolicyResponse& src);
    GetPolicyResponse& operator=(const GetPolicyResponse&) = delete;
    ~GetPolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_policyName;
    PointerArrayModel<PlayFabAdminPermissionStatement, PermissionStatement> m_statements;
};

struct GetPublisherDataRequest : public PlayFabAdminGetPublisherDataRequest, public BaseModel
{
    GetPublisherDataRequest();
    GetPublisherDataRequest(const GetPublisherDataRequest& src);
    GetPublisherDataRequest(GetPublisherDataRequest&& src);
    GetPublisherDataRequest(const PlayFabAdminGetPublisherDataRequest& src);
    GetPublisherDataRequest& operator=(const GetPublisherDataRequest&) = delete;
    ~GetPublisherDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
};

struct GetPublisherDataResult : public PlayFabAdminGetPublisherDataResult, public BaseModel, public ApiResult
{
    GetPublisherDataResult();
    GetPublisherDataResult(const GetPublisherDataResult& src);
    GetPublisherDataResult(GetPublisherDataResult&& src);
    GetPublisherDataResult(const PlayFabAdminGetPublisherDataResult& src);
    GetPublisherDataResult& operator=(const GetPublisherDataResult&) = delete;
    ~GetPublisherDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
};

struct GetRandomResultTablesRequest : public PlayFabAdminGetRandomResultTablesRequest, public SerializableModel
{
    GetRandomResultTablesRequest();
    GetRandomResultTablesRequest(const GetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest(GetRandomResultTablesRequest&& src);
    GetRandomResultTablesRequest(const PlayFabAdminGetRandomResultTablesRequest& src);
    GetRandomResultTablesRequest& operator=(const GetRandomResultTablesRequest&) = delete;
    ~GetRandomResultTablesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
};

struct ResultTableNode : public PlayFabAdminResultTableNode, public SerializableModel
{
    ResultTableNode();
    ResultTableNode(const ResultTableNode& src);
    ResultTableNode(ResultTableNode&& src);
    ResultTableNode(const PlayFabAdminResultTableNode& src);
    ResultTableNode& operator=(const ResultTableNode&) = delete;
    ~ResultTableNode() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_resultItem;
};

struct RandomResultTableListing : public PlayFabAdminRandomResultTableListing, public BaseModel
{
    RandomResultTableListing();
    RandomResultTableListing(const RandomResultTableListing& src);
    RandomResultTableListing(RandomResultTableListing&& src);
    RandomResultTableListing(const PlayFabAdminRandomResultTableListing& src);
    RandomResultTableListing& operator=(const RandomResultTableListing&) = delete;
    ~RandomResultTableListing() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    PointerArrayModel<PlayFabAdminResultTableNode, ResultTableNode> m_nodes;
    String m_tableId;
};

struct GetRandomResultTablesResult : public PlayFabAdminGetRandomResultTablesResult, public BaseModel, public ApiResult
{
    GetRandomResultTablesResult();
    GetRandomResultTablesResult(const GetRandomResultTablesResult& src);
    GetRandomResultTablesResult(GetRandomResultTablesResult&& src);
    GetRandomResultTablesResult(const PlayFabAdminGetRandomResultTablesResult& src);
    GetRandomResultTablesResult& operator=(const GetRandomResultTablesResult&) = delete;
    ~GetRandomResultTablesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabAdminRandomResultTableListingDictionaryEntry, RandomResultTableListing> m_tables;
};

struct GetSegmentsRequest : public PlayFabAdminGetSegmentsRequest, public BaseModel
{
    GetSegmentsRequest();
    GetSegmentsRequest(const GetSegmentsRequest& src);
    GetSegmentsRequest(GetSegmentsRequest&& src);
    GetSegmentsRequest(const PlayFabAdminGetSegmentsRequest& src);
    GetSegmentsRequest& operator=(const GetSegmentsRequest&) = delete;
    ~GetSegmentsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_segmentIds;
};

struct GetSegmentsResponse : public PlayFabAdminGetSegmentsResponse, public BaseModel, public ApiResult
{
    GetSegmentsResponse();
    GetSegmentsResponse(const GetSegmentsResponse& src);
    GetSegmentsResponse(GetSegmentsResponse&& src);
    GetSegmentsResponse(const PlayFabAdminGetSegmentsResponse& src);
    GetSegmentsResponse& operator=(const GetSegmentsResponse&) = delete;
    ~GetSegmentsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_errorMessage;
    PointerArrayModel<PlayFabAdminSegmentModel, SegmentModel> m_segments;
};

struct GetServerBuildInfoRequest : public PlayFabAdminGetServerBuildInfoRequest, public SerializableModel
{
    GetServerBuildInfoRequest();
    GetServerBuildInfoRequest(const GetServerBuildInfoRequest& src);
    GetServerBuildInfoRequest(GetServerBuildInfoRequest&& src);
    GetServerBuildInfoRequest(const PlayFabAdminGetServerBuildInfoRequest& src);
    GetServerBuildInfoRequest& operator=(const GetServerBuildInfoRequest&) = delete;
    ~GetServerBuildInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildId;
};

struct GetServerBuildInfoResult : public PlayFabAdminGetServerBuildInfoResult, public BaseModel, public ApiResult
{
    GetServerBuildInfoResult();
    GetServerBuildInfoResult(const GetServerBuildInfoResult& src);
    GetServerBuildInfoResult(GetServerBuildInfoResult&& src);
    GetServerBuildInfoResult(const PlayFabAdminGetServerBuildInfoResult& src);
    GetServerBuildInfoResult& operator=(const GetServerBuildInfoResult&) = delete;
    ~GetServerBuildInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PlayFabAdminRegion> m_activeRegions;
    String m_buildId;
    String m_comment;
    String m_errorMessage;
    StdExtra::optional<PlayFabAdminGameBuildStatus> m_status;
    String m_titleId;
};

struct GetServerBuildUploadURLRequest : public PlayFabAdminGetServerBuildUploadURLRequest, public SerializableModel
{
    GetServerBuildUploadURLRequest();
    GetServerBuildUploadURLRequest(const GetServerBuildUploadURLRequest& src);
    GetServerBuildUploadURLRequest(GetServerBuildUploadURLRequest&& src);
    GetServerBuildUploadURLRequest(const PlayFabAdminGetServerBuildUploadURLRequest& src);
    GetServerBuildUploadURLRequest& operator=(const GetServerBuildUploadURLRequest&) = delete;
    ~GetServerBuildUploadURLRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildId;
};

struct GetServerBuildUploadURLResult : public PlayFabAdminGetServerBuildUploadURLResult, public SerializableModel, public ApiResult
{
    GetServerBuildUploadURLResult();
    GetServerBuildUploadURLResult(const GetServerBuildUploadURLResult& src);
    GetServerBuildUploadURLResult(GetServerBuildUploadURLResult&& src);
    GetServerBuildUploadURLResult(const PlayFabAdminGetServerBuildUploadURLResult& src);
    GetServerBuildUploadURLResult& operator=(const GetServerBuildUploadURLResult&) = delete;
    ~GetServerBuildUploadURLResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_uRL;
};

struct GetStoreItemsRequest : public PlayFabAdminGetStoreItemsRequest, public SerializableModel
{
    GetStoreItemsRequest();
    GetStoreItemsRequest(const GetStoreItemsRequest& src);
    GetStoreItemsRequest(GetStoreItemsRequest&& src);
    GetStoreItemsRequest(const PlayFabAdminGetStoreItemsRequest& src);
    GetStoreItemsRequest& operator=(const GetStoreItemsRequest&) = delete;
    ~GetStoreItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_catalogVersion;
    String m_storeId;
};

struct StoreMarketingModel : public PlayFabAdminStoreMarketingModel, public BaseModel
{
    StoreMarketingModel();
    StoreMarketingModel(const StoreMarketingModel& src);
    StoreMarketingModel(StoreMarketingModel&& src);
    StoreMarketingModel(const PlayFabAdminStoreMarketingModel& src);
    StoreMarketingModel& operator=(const StoreMarketingModel&) = delete;
    ~StoreMarketingModel() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    String m_displayName;
    JsonObject m_metadata;
};

struct StoreItem : public PlayFabAdminStoreItem, public BaseModel
{
    StoreItem();
    StoreItem(const StoreItem& src);
    StoreItem(StoreItem&& src);
    StoreItem(const PlayFabAdminStoreItem& src);
    StoreItem& operator=(const StoreItem&) = delete;
    ~StoreItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    JsonObject m_customData;
    StdExtra::optional<uint32_t> m_displayPosition;
    String m_itemId;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_realCurrencyPrices;
    AssociativeArrayModel<PlayFabUint32DictionaryEntry, void> m_virtualCurrencyPrices;
};

struct GetStoreItemsResult : public PlayFabAdminGetStoreItemsResult, public BaseModel, public ApiResult
{
    GetStoreItemsResult();
    GetStoreItemsResult(const GetStoreItemsResult& src);
    GetStoreItemsResult(GetStoreItemsResult&& src);
    GetStoreItemsResult(const PlayFabAdminGetStoreItemsResult& src);
    GetStoreItemsResult& operator=(const GetStoreItemsResult&) = delete;
    ~GetStoreItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    StdExtra::optional<StoreMarketingModel> m_marketingData;
    StdExtra::optional<PlayFabAdminSourceType> m_source;
    PointerArrayModel<PlayFabAdminStoreItem, StoreItem> m_store;
    String m_storeId;
};

struct GetTaskInstanceRequest : public PlayFabAdminGetTaskInstanceRequest, public SerializableModel
{
    GetTaskInstanceRequest();
    GetTaskInstanceRequest(const GetTaskInstanceRequest& src);
    GetTaskInstanceRequest(GetTaskInstanceRequest&& src);
    GetTaskInstanceRequest(const PlayFabAdminGetTaskInstanceRequest& src);
    GetTaskInstanceRequest& operator=(const GetTaskInstanceRequest&) = delete;
    ~GetTaskInstanceRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_taskInstanceId;
};

struct GetTaskInstancesRequest : public PlayFabAdminGetTaskInstancesRequest, public BaseModel
{
    GetTaskInstancesRequest();
    GetTaskInstancesRequest(const GetTaskInstancesRequest& src);
    GetTaskInstancesRequest(GetTaskInstancesRequest&& src);
    GetTaskInstancesRequest(const PlayFabAdminGetTaskInstancesRequest& src);
    GetTaskInstancesRequest& operator=(const GetTaskInstancesRequest&) = delete;
    ~GetTaskInstancesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_startedAtRangeFrom;
    StdExtra::optional<time_t> m_startedAtRangeTo;
    StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_statusFilter;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
};

struct TaskInstanceBasicSummary : public PlayFabAdminTaskInstanceBasicSummary, public BaseModel
{
    TaskInstanceBasicSummary();
    TaskInstanceBasicSummary(const TaskInstanceBasicSummary& src);
    TaskInstanceBasicSummary(TaskInstanceBasicSummary&& src);
    TaskInstanceBasicSummary(const PlayFabAdminTaskInstanceBasicSummary& src);
    TaskInstanceBasicSummary& operator=(const TaskInstanceBasicSummary&) = delete;
    ~TaskInstanceBasicSummary() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<time_t> m_completedAt;
    String m_errorMessage;
    StdExtra::optional<double> m_estimatedSecondsRemaining;
    StdExtra::optional<double> m_percentComplete;
    String m_scheduledByUserId;
    StdExtra::optional<PlayFabAdminTaskInstanceStatus> m_status;
    StdExtra::optional<NameIdentifier> m_taskIdentifier;
    String m_taskInstanceId;
    StdExtra::optional<PlayFabAdminScheduledTaskType> m_type;
};

struct GetTaskInstancesResult : public PlayFabAdminGetTaskInstancesResult, public BaseModel, public ApiResult
{
    GetTaskInstancesResult();
    GetTaskInstancesResult(const GetTaskInstancesResult& src);
    GetTaskInstancesResult(GetTaskInstancesResult&& src);
    GetTaskInstancesResult(const PlayFabAdminGetTaskInstancesResult& src);
    GetTaskInstancesResult& operator=(const GetTaskInstancesResult&) = delete;
    ~GetTaskInstancesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminTaskInstanceBasicSummary, TaskInstanceBasicSummary> m_summaries;
};

struct GetTasksRequest : public PlayFabAdminGetTasksRequest, public BaseModel
{
    GetTasksRequest();
    GetTasksRequest(const GetTasksRequest& src);
    GetTasksRequest(GetTasksRequest&& src);
    GetTasksRequest(const PlayFabAdminGetTasksRequest& src);
    GetTasksRequest& operator=(const GetTasksRequest&) = delete;
    ~GetTasksRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct ScheduledTask : public PlayFabAdminScheduledTask, public BaseModel
{
    ScheduledTask();
    ScheduledTask(const ScheduledTask& src);
    ScheduledTask(ScheduledTask&& src);
    ScheduledTask(const PlayFabAdminScheduledTask& src);
    ScheduledTask& operator=(const ScheduledTask&) = delete;
    ~ScheduledTask() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_description;
    StdExtra::optional<time_t> m_lastRunTime;
    String m_name;
    StdExtra::optional<time_t> m_nextRunTime;
    JsonObject m_parameter;
    String m_schedule;
    String m_taskId;
    StdExtra::optional<PlayFabAdminScheduledTaskType> m_type;
};

struct GetTasksResult : public PlayFabAdminGetTasksResult, public BaseModel, public ApiResult
{
    GetTasksResult();
    GetTasksResult(const GetTasksResult& src);
    GetTasksResult(GetTasksResult&& src);
    GetTasksResult(const PlayFabAdminGetTasksResult& src);
    GetTasksResult& operator=(const GetTasksResult&) = delete;
    ~GetTasksResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminScheduledTask, ScheduledTask> m_tasks;
};

struct GetTitleDataRequest : public PlayFabAdminGetTitleDataRequest, public BaseModel
{
    GetTitleDataRequest();
    GetTitleDataRequest(const GetTitleDataRequest& src);
    GetTitleDataRequest(GetTitleDataRequest&& src);
    GetTitleDataRequest(const PlayFabAdminGetTitleDataRequest& src);
    GetTitleDataRequest& operator=(const GetTitleDataRequest&) = delete;
    ~GetTitleDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_keys;
    String m_overrideLabel;
};

struct GetTitleDataResult : public PlayFabAdminGetTitleDataResult, public BaseModel, public ApiResult
{
    GetTitleDataResult();
    GetTitleDataResult(const GetTitleDataResult& src);
    GetTitleDataResult(GetTitleDataResult&& src);
    GetTitleDataResult(const PlayFabAdminGetTitleDataResult& src);
    GetTitleDataResult& operator=(const GetTitleDataResult&) = delete;
    ~GetTitleDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
};

struct GetUserBansRequest : public PlayFabAdminGetUserBansRequest, public SerializableModel
{
    GetUserBansRequest();
    GetUserBansRequest(const GetUserBansRequest& src);
    GetUserBansRequest(GetUserBansRequest&& src);
    GetUserBansRequest(const PlayFabAdminGetUserBansRequest& src);
    GetUserBansRequest& operator=(const GetUserBansRequest&) = delete;
    ~GetUserBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct GetUserBansResult : public PlayFabAdminGetUserBansResult, public BaseModel, public ApiResult
{
    GetUserBansResult();
    GetUserBansResult(const GetUserBansResult& src);
    GetUserBansResult(GetUserBansResult&& src);
    GetUserBansResult(const PlayFabAdminGetUserBansResult& src);
    GetUserBansResult& operator=(const GetUserBansResult&) = delete;
    ~GetUserBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminBanInfo, BanInfo> m_banData;
};

struct GetUserDataRequest : public PlayFabAdminGetUserDataRequest, public BaseModel
{
    GetUserDataRequest();
    GetUserDataRequest(const GetUserDataRequest& src);
    GetUserDataRequest(GetUserDataRequest&& src);
    GetUserDataRequest(const PlayFabAdminGetUserDataRequest& src);
    GetUserDataRequest& operator=(const GetUserDataRequest&) = delete;
    ~GetUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
    PointerArrayModel<char, String> m_keys;
    String m_playFabId;
};

struct GetUserDataResult : public PlayFabAdminGetUserDataResult, public BaseModel, public ApiResult
{
    GetUserDataResult();
    GetUserDataResult(const GetUserDataResult& src);
    GetUserDataResult(GetUserDataResult&& src);
    GetUserDataResult(const PlayFabAdminGetUserDataResult& src);
    GetUserDataResult& operator=(const GetUserDataResult&) = delete;
    ~GetUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabUserDataRecordDictionaryEntry, UserDataRecord> m_data;
    String m_playFabId;
};

struct GetUserInventoryRequest : public PlayFabAdminGetUserInventoryRequest, public BaseModel
{
    GetUserInventoryRequest();
    GetUserInventoryRequest(const GetUserInventoryRequest& src);
    GetUserInventoryRequest(GetUserInventoryRequest&& src);
    GetUserInventoryRequest(const PlayFabAdminGetUserInventoryRequest& src);
    GetUserInventoryRequest& operator=(const GetUserInventoryRequest&) = delete;
    ~GetUserInventoryRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct GetUserInventoryResult : public PlayFabAdminGetUserInventoryResult, public BaseModel, public ApiResult
{
    GetUserInventoryResult();
    GetUserInventoryResult(const GetUserInventoryResult& src);
    GetUserInventoryResult(GetUserInventoryResult&& src);
    GetUserInventoryResult(const PlayFabAdminGetUserInventoryResult& src);
    GetUserInventoryResult& operator=(const GetUserInventoryResult&) = delete;
    ~GetUserInventoryResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabItemInstance, ItemInstance> m_inventory;
    String m_playFabId;
    AssociativeArrayModel<PlayFabInt32DictionaryEntry, void> m_virtualCurrency;
    AssociativeArrayModel<PlayFabVirtualCurrencyRechargeTimeDictionaryEntry, VirtualCurrencyRechargeTime> m_virtualCurrencyRechargeTimes;
};

struct GrantedItemInstance : public PlayFabAdminGrantedItemInstance, public BaseModel
{
    GrantedItemInstance();
    GrantedItemInstance(const GrantedItemInstance& src);
    GrantedItemInstance(GrantedItemInstance&& src);
    GrantedItemInstance(const PlayFabAdminGrantedItemInstance& src);
    GrantedItemInstance& operator=(const GrantedItemInstance&) = delete;
    ~GrantedItemInstance() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    PointerArrayModel<char, String> m_bundleContents;
    String m_bundleParent;
    String m_catalogVersion;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customData;
    String m_displayName;
    StdExtra::optional<time_t> m_expiration;
    String m_itemClass;
    String m_itemId;
    String m_itemInstanceId;
    String m_playFabId;
    StdExtra::optional<time_t> m_purchaseDate;
    StdExtra::optional<int32_t> m_remainingUses;
    String m_unitCurrency;
    StdExtra::optional<int32_t> m_usesIncrementedBy;
};

struct ItemGrant : public PlayFabAdminItemGrant, public BaseModel
{
    ItemGrant();
    ItemGrant(const ItemGrant& src);
    ItemGrant(ItemGrant&& src);
    ItemGrant(const PlayFabAdminItemGrant& src);
    ItemGrant& operator=(const ItemGrant&) = delete;
    ~ItemGrant() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_annotation;
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    String m_itemId;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

struct GrantItemsToUsersRequest : public PlayFabAdminGrantItemsToUsersRequest, public BaseModel
{
    GrantItemsToUsersRequest();
    GrantItemsToUsersRequest(const GrantItemsToUsersRequest& src);
    GrantItemsToUsersRequest(GrantItemsToUsersRequest&& src);
    GrantItemsToUsersRequest(const PlayFabAdminGrantItemsToUsersRequest& src);
    GrantItemsToUsersRequest& operator=(const GrantItemsToUsersRequest&) = delete;
    ~GrantItemsToUsersRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabAdminItemGrant, ItemGrant> m_itemGrants;
};

struct GrantItemsToUsersResult : public PlayFabAdminGrantItemsToUsersResult, public BaseModel, public ApiResult
{
    GrantItemsToUsersResult();
    GrantItemsToUsersResult(const GrantItemsToUsersResult& src);
    GrantItemsToUsersResult(GrantItemsToUsersResult&& src);
    GrantItemsToUsersResult(const PlayFabAdminGrantItemsToUsersResult& src);
    GrantItemsToUsersResult& operator=(const GrantItemsToUsersResult&) = delete;
    ~GrantItemsToUsersResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminGrantedItemInstance, GrantedItemInstance> m_itemGrantResults;
};

struct IncrementLimitedEditionItemAvailabilityRequest : public PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest, public BaseModel
{
    IncrementLimitedEditionItemAvailabilityRequest();
    IncrementLimitedEditionItemAvailabilityRequest(const IncrementLimitedEditionItemAvailabilityRequest& src);
    IncrementLimitedEditionItemAvailabilityRequest(IncrementLimitedEditionItemAvailabilityRequest&& src);
    IncrementLimitedEditionItemAvailabilityRequest(const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& src);
    IncrementLimitedEditionItemAvailabilityRequest& operator=(const IncrementLimitedEditionItemAvailabilityRequest&) = delete;
    ~IncrementLimitedEditionItemAvailabilityRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_itemId;
};

struct IncrementPlayerStatisticVersionRequest : public PlayFabAdminIncrementPlayerStatisticVersionRequest, public BaseModel
{
    IncrementPlayerStatisticVersionRequest();
    IncrementPlayerStatisticVersionRequest(const IncrementPlayerStatisticVersionRequest& src);
    IncrementPlayerStatisticVersionRequest(IncrementPlayerStatisticVersionRequest&& src);
    IncrementPlayerStatisticVersionRequest(const PlayFabAdminIncrementPlayerStatisticVersionRequest& src);
    IncrementPlayerStatisticVersionRequest& operator=(const IncrementPlayerStatisticVersionRequest&) = delete;
    ~IncrementPlayerStatisticVersionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
};

struct IncrementPlayerStatisticVersionResult : public PlayFabAdminIncrementPlayerStatisticVersionResult, public BaseModel, public ApiResult
{
    IncrementPlayerStatisticVersionResult();
    IncrementPlayerStatisticVersionResult(const IncrementPlayerStatisticVersionResult& src);
    IncrementPlayerStatisticVersionResult(IncrementPlayerStatisticVersionResult&& src);
    IncrementPlayerStatisticVersionResult(const PlayFabAdminIncrementPlayerStatisticVersionResult& src);
    IncrementPlayerStatisticVersionResult& operator=(const IncrementPlayerStatisticVersionResult&) = delete;
    ~IncrementPlayerStatisticVersionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerStatisticVersion> m_statisticVersion;
};

struct ListBuildsResult : public PlayFabAdminListBuildsResult, public BaseModel, public ApiResult
{
    ListBuildsResult();
    ListBuildsResult(const ListBuildsResult& src);
    ListBuildsResult(ListBuildsResult&& src);
    ListBuildsResult(const PlayFabAdminListBuildsResult& src);
    ListBuildsResult& operator=(const ListBuildsResult&) = delete;
    ~ListBuildsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminGetServerBuildInfoResult, GetServerBuildInfoResult> m_builds;
};

struct OpenIdConnection : public PlayFabAdminOpenIdConnection, public BaseModel
{
    OpenIdConnection();
    OpenIdConnection(const OpenIdConnection& src);
    OpenIdConnection(OpenIdConnection&& src);
    OpenIdConnection(const PlayFabAdminOpenIdConnection& src);
    OpenIdConnection& operator=(const OpenIdConnection&) = delete;
    ~OpenIdConnection() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_clientId;
    String m_clientSecret;
    String m_connectionId;
    StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
};

struct ListOpenIdConnectionResponse : public PlayFabAdminListOpenIdConnectionResponse, public BaseModel, public ApiResult
{
    ListOpenIdConnectionResponse();
    ListOpenIdConnectionResponse(const ListOpenIdConnectionResponse& src);
    ListOpenIdConnectionResponse(ListOpenIdConnectionResponse&& src);
    ListOpenIdConnectionResponse(const PlayFabAdminListOpenIdConnectionResponse& src);
    ListOpenIdConnectionResponse& operator=(const ListOpenIdConnectionResponse&) = delete;
    ~ListOpenIdConnectionResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminOpenIdConnection, OpenIdConnection> m_connections;
};

struct ListVirtualCurrencyTypesResult : public PlayFabAdminListVirtualCurrencyTypesResult, public BaseModel, public ApiResult
{
    ListVirtualCurrencyTypesResult();
    ListVirtualCurrencyTypesResult(const ListVirtualCurrencyTypesResult& src);
    ListVirtualCurrencyTypesResult(ListVirtualCurrencyTypesResult&& src);
    ListVirtualCurrencyTypesResult(const PlayFabAdminListVirtualCurrencyTypesResult& src);
    ListVirtualCurrencyTypesResult& operator=(const ListVirtualCurrencyTypesResult&) = delete;
    ~ListVirtualCurrencyTypesResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
};

struct LookupUserAccountInfoRequest : public PlayFabAdminLookupUserAccountInfoRequest, public SerializableModel
{
    LookupUserAccountInfoRequest();
    LookupUserAccountInfoRequest(const LookupUserAccountInfoRequest& src);
    LookupUserAccountInfoRequest(LookupUserAccountInfoRequest&& src);
    LookupUserAccountInfoRequest(const PlayFabAdminLookupUserAccountInfoRequest& src);
    LookupUserAccountInfoRequest& operator=(const LookupUserAccountInfoRequest&) = delete;
    ~LookupUserAccountInfoRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_email;
    String m_playFabId;
    String m_titleDisplayName;
    String m_username;
};

struct LookupUserAccountInfoResult : public PlayFabAdminLookupUserAccountInfoResult, public BaseModel, public ApiResult
{
    LookupUserAccountInfoResult();
    LookupUserAccountInfoResult(const LookupUserAccountInfoResult& src);
    LookupUserAccountInfoResult(LookupUserAccountInfoResult&& src);
    LookupUserAccountInfoResult(const PlayFabAdminLookupUserAccountInfoResult& src);
    LookupUserAccountInfoResult& operator=(const LookupUserAccountInfoResult&) = delete;
    ~LookupUserAccountInfoResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct ModifyMatchmakerGameModesRequest : public PlayFabAdminModifyMatchmakerGameModesRequest, public BaseModel
{
    ModifyMatchmakerGameModesRequest();
    ModifyMatchmakerGameModesRequest(const ModifyMatchmakerGameModesRequest& src);
    ModifyMatchmakerGameModesRequest(ModifyMatchmakerGameModesRequest&& src);
    ModifyMatchmakerGameModesRequest(const PlayFabAdminModifyMatchmakerGameModesRequest& src);
    ModifyMatchmakerGameModesRequest& operator=(const ModifyMatchmakerGameModesRequest&) = delete;
    ~ModifyMatchmakerGameModesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_buildVersion;
    PointerArrayModel<PlayFabAdminGameModeInfo, GameModeInfo> m_gameModes;
};

struct ModifyServerBuildRequest : public PlayFabAdminModifyServerBuildRequest, public BaseModel
{
    ModifyServerBuildRequest();
    ModifyServerBuildRequest(const ModifyServerBuildRequest& src);
    ModifyServerBuildRequest(ModifyServerBuildRequest&& src);
    ModifyServerBuildRequest(const PlayFabAdminModifyServerBuildRequest& src);
    ModifyServerBuildRequest& operator=(const ModifyServerBuildRequest&) = delete;
    ~ModifyServerBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PlayFabAdminRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_executablePath;
    StdExtra::optional<time_t> m_timestamp;
};

struct ModifyServerBuildResult : public PlayFabAdminModifyServerBuildResult, public BaseModel, public ApiResult
{
    ModifyServerBuildResult();
    ModifyServerBuildResult(const ModifyServerBuildResult& src);
    ModifyServerBuildResult(ModifyServerBuildResult&& src);
    ModifyServerBuildResult(const PlayFabAdminModifyServerBuildResult& src);
    ModifyServerBuildResult& operator=(const ModifyServerBuildResult&) = delete;
    ~ModifyServerBuildResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    Vector<PlayFabAdminRegion> m_activeRegions;
    String m_buildId;
    String m_commandLineTemplate;
    String m_comment;
    String m_executablePath;
    StdExtra::optional<PlayFabAdminGameBuildStatus> m_status;
    String m_titleId;
};

struct ModifyUserVirtualCurrencyResult : public PlayFabAdminModifyUserVirtualCurrencyResult, public SerializableModel, public ApiResult
{
    ModifyUserVirtualCurrencyResult();
    ModifyUserVirtualCurrencyResult(const ModifyUserVirtualCurrencyResult& src);
    ModifyUserVirtualCurrencyResult(ModifyUserVirtualCurrencyResult&& src);
    ModifyUserVirtualCurrencyResult(const PlayFabAdminModifyUserVirtualCurrencyResult& src);
    ModifyUserVirtualCurrencyResult& operator=(const ModifyUserVirtualCurrencyResult&) = delete;
    ~ModifyUserVirtualCurrencyResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
    String m_virtualCurrency;
};

struct RandomResultTable : public PlayFabAdminRandomResultTable, public BaseModel
{
    RandomResultTable();
    RandomResultTable(const RandomResultTable& src);
    RandomResultTable(RandomResultTable&& src);
    RandomResultTable(const PlayFabAdminRandomResultTable& src);
    RandomResultTable& operator=(const RandomResultTable&) = delete;
    ~RandomResultTable() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminResultTableNode, ResultTableNode> m_nodes;
    String m_tableId;
};

struct RefundPurchaseRequest : public PlayFabAdminRefundPurchaseRequest, public SerializableModel
{
    RefundPurchaseRequest();
    RefundPurchaseRequest(const RefundPurchaseRequest& src);
    RefundPurchaseRequest(RefundPurchaseRequest&& src);
    RefundPurchaseRequest(const PlayFabAdminRefundPurchaseRequest& src);
    RefundPurchaseRequest& operator=(const RefundPurchaseRequest&) = delete;
    ~RefundPurchaseRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_orderId;
    String m_playFabId;
    String m_reason;
};

struct RefundPurchaseResponse : public PlayFabAdminRefundPurchaseResponse, public SerializableModel, public ApiResult
{
    RefundPurchaseResponse();
    RefundPurchaseResponse(const RefundPurchaseResponse& src);
    RefundPurchaseResponse(RefundPurchaseResponse&& src);
    RefundPurchaseResponse(const PlayFabAdminRefundPurchaseResponse& src);
    RefundPurchaseResponse& operator=(const RefundPurchaseResponse&) = delete;
    ~RefundPurchaseResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_purchaseStatus;
};

struct RemovePlayerTagRequest : public PlayFabAdminRemovePlayerTagRequest, public BaseModel
{
    RemovePlayerTagRequest();
    RemovePlayerTagRequest(const RemovePlayerTagRequest& src);
    RemovePlayerTagRequest(RemovePlayerTagRequest&& src);
    RemovePlayerTagRequest(const PlayFabAdminRemovePlayerTagRequest& src);
    RemovePlayerTagRequest& operator=(const RemovePlayerTagRequest&) = delete;
    ~RemovePlayerTagRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_tagName;
};

struct RemoveServerBuildRequest : public PlayFabAdminRemoveServerBuildRequest, public SerializableModel
{
    RemoveServerBuildRequest();
    RemoveServerBuildRequest(const RemoveServerBuildRequest& src);
    RemoveServerBuildRequest(RemoveServerBuildRequest&& src);
    RemoveServerBuildRequest(const PlayFabAdminRemoveServerBuildRequest& src);
    RemoveServerBuildRequest& operator=(const RemoveServerBuildRequest&) = delete;
    ~RemoveServerBuildRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_buildId;
};

struct RemoveVirtualCurrencyTypesRequest : public PlayFabAdminRemoveVirtualCurrencyTypesRequest, public BaseModel
{
    RemoveVirtualCurrencyTypesRequest();
    RemoveVirtualCurrencyTypesRequest(const RemoveVirtualCurrencyTypesRequest& src);
    RemoveVirtualCurrencyTypesRequest(RemoveVirtualCurrencyTypesRequest&& src);
    RemoveVirtualCurrencyTypesRequest(const PlayFabAdminRemoveVirtualCurrencyTypesRequest& src);
    RemoveVirtualCurrencyTypesRequest& operator=(const RemoveVirtualCurrencyTypesRequest&) = delete;
    ~RemoveVirtualCurrencyTypesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminVirtualCurrencyData, VirtualCurrencyData> m_virtualCurrencies;
};

struct ResetCharacterStatisticsRequest : public PlayFabAdminResetCharacterStatisticsRequest, public BaseModel
{
    ResetCharacterStatisticsRequest();
    ResetCharacterStatisticsRequest(const ResetCharacterStatisticsRequest& src);
    ResetCharacterStatisticsRequest(ResetCharacterStatisticsRequest&& src);
    ResetCharacterStatisticsRequest(const PlayFabAdminResetCharacterStatisticsRequest& src);
    ResetCharacterStatisticsRequest& operator=(const ResetCharacterStatisticsRequest&) = delete;
    ~ResetCharacterStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_characterId;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ResetPasswordRequest : public PlayFabAdminResetPasswordRequest, public BaseModel
{
    ResetPasswordRequest();
    ResetPasswordRequest(const ResetPasswordRequest& src);
    ResetPasswordRequest(ResetPasswordRequest&& src);
    ResetPasswordRequest(const PlayFabAdminResetPasswordRequest& src);
    ResetPasswordRequest& operator=(const ResetPasswordRequest&) = delete;
    ~ResetPasswordRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_password;
    String m_token;
};

struct ResetUserStatisticsRequest : public PlayFabAdminResetUserStatisticsRequest, public BaseModel
{
    ResetUserStatisticsRequest();
    ResetUserStatisticsRequest(const ResetUserStatisticsRequest& src);
    ResetUserStatisticsRequest(ResetUserStatisticsRequest&& src);
    ResetUserStatisticsRequest(const PlayFabAdminResetUserStatisticsRequest& src);
    ResetUserStatisticsRequest& operator=(const ResetUserStatisticsRequest&) = delete;
    ~ResetUserStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ResolvePurchaseDisputeRequest : public PlayFabAdminResolvePurchaseDisputeRequest, public SerializableModel
{
    ResolvePurchaseDisputeRequest();
    ResolvePurchaseDisputeRequest(const ResolvePurchaseDisputeRequest& src);
    ResolvePurchaseDisputeRequest(ResolvePurchaseDisputeRequest&& src);
    ResolvePurchaseDisputeRequest(const PlayFabAdminResolvePurchaseDisputeRequest& src);
    ResolvePurchaseDisputeRequest& operator=(const ResolvePurchaseDisputeRequest&) = delete;
    ~ResolvePurchaseDisputeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_orderId;
    String m_playFabId;
    String m_reason;
};

struct ResolvePurchaseDisputeResponse : public PlayFabAdminResolvePurchaseDisputeResponse, public SerializableModel, public ApiResult
{
    ResolvePurchaseDisputeResponse();
    ResolvePurchaseDisputeResponse(const ResolvePurchaseDisputeResponse& src);
    ResolvePurchaseDisputeResponse(ResolvePurchaseDisputeResponse&& src);
    ResolvePurchaseDisputeResponse(const PlayFabAdminResolvePurchaseDisputeResponse& src);
    ResolvePurchaseDisputeResponse& operator=(const ResolvePurchaseDisputeResponse&) = delete;
    ~ResolvePurchaseDisputeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_purchaseStatus;
};

struct RevokeAllBansForUserRequest : public PlayFabAdminRevokeAllBansForUserRequest, public SerializableModel
{
    RevokeAllBansForUserRequest();
    RevokeAllBansForUserRequest(const RevokeAllBansForUserRequest& src);
    RevokeAllBansForUserRequest(RevokeAllBansForUserRequest&& src);
    RevokeAllBansForUserRequest(const PlayFabAdminRevokeAllBansForUserRequest& src);
    RevokeAllBansForUserRequest& operator=(const RevokeAllBansForUserRequest&) = delete;
    ~RevokeAllBansForUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playFabId;
};

struct RevokeAllBansForUserResult : public PlayFabAdminRevokeAllBansForUserResult, public BaseModel, public ApiResult
{
    RevokeAllBansForUserResult();
    RevokeAllBansForUserResult(const RevokeAllBansForUserResult& src);
    RevokeAllBansForUserResult(RevokeAllBansForUserResult&& src);
    RevokeAllBansForUserResult(const PlayFabAdminRevokeAllBansForUserResult& src);
    RevokeAllBansForUserResult& operator=(const RevokeAllBansForUserResult&) = delete;
    ~RevokeAllBansForUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminBanInfo, BanInfo> m_banData;
};

struct RevokeBansRequest : public PlayFabAdminRevokeBansRequest, public BaseModel
{
    RevokeBansRequest();
    RevokeBansRequest(const RevokeBansRequest& src);
    RevokeBansRequest(RevokeBansRequest&& src);
    RevokeBansRequest(const PlayFabAdminRevokeBansRequest& src);
    RevokeBansRequest& operator=(const RevokeBansRequest&) = delete;
    ~RevokeBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_banIds;
};

struct RevokeBansResult : public PlayFabAdminRevokeBansResult, public BaseModel, public ApiResult
{
    RevokeBansResult();
    RevokeBansResult(const RevokeBansResult& src);
    RevokeBansResult(RevokeBansResult&& src);
    RevokeBansResult(const PlayFabAdminRevokeBansResult& src);
    RevokeBansResult& operator=(const RevokeBansResult&) = delete;
    ~RevokeBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminBanInfo, BanInfo> m_banData;
};

struct RevokeInventoryItem : public PlayFabAdminRevokeInventoryItem, public SerializableModel
{
    RevokeInventoryItem();
    RevokeInventoryItem(const RevokeInventoryItem& src);
    RevokeInventoryItem(RevokeInventoryItem&& src);
    RevokeInventoryItem(const PlayFabAdminRevokeInventoryItem& src);
    RevokeInventoryItem& operator=(const RevokeInventoryItem&) = delete;
    ~RevokeInventoryItem() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct RevokeInventoryItemRequest : public PlayFabAdminRevokeInventoryItemRequest, public SerializableModel
{
    RevokeInventoryItemRequest();
    RevokeInventoryItemRequest(const RevokeInventoryItemRequest& src);
    RevokeInventoryItemRequest(RevokeInventoryItemRequest&& src);
    RevokeInventoryItemRequest(const PlayFabAdminRevokeInventoryItemRequest& src);
    RevokeInventoryItemRequest& operator=(const RevokeInventoryItemRequest&) = delete;
    ~RevokeInventoryItemRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_characterId;
    String m_itemInstanceId;
    String m_playFabId;
};

struct RevokeInventoryItemsRequest : public PlayFabAdminRevokeInventoryItemsRequest, public BaseModel
{
    RevokeInventoryItemsRequest();
    RevokeInventoryItemsRequest(const RevokeInventoryItemsRequest& src);
    RevokeInventoryItemsRequest(RevokeInventoryItemsRequest&& src);
    RevokeInventoryItemsRequest(const PlayFabAdminRevokeInventoryItemsRequest& src);
    RevokeInventoryItemsRequest& operator=(const RevokeInventoryItemsRequest&) = delete;
    ~RevokeInventoryItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminRevokeInventoryItem, RevokeInventoryItem> m_items;
};

struct RevokeItemError : public PlayFabAdminRevokeItemError, public BaseModel
{
    RevokeItemError();
    RevokeItemError(const RevokeItemError& src);
    RevokeItemError(RevokeItemError&& src);
    RevokeItemError(const PlayFabAdminRevokeItemError& src);
    RevokeItemError& operator=(const RevokeItemError&) = delete;
    ~RevokeItemError() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminGenericErrorCodes> m_error;
    StdExtra::optional<RevokeInventoryItem> m_item;
};

struct RevokeInventoryItemsResult : public PlayFabAdminRevokeInventoryItemsResult, public BaseModel, public ApiResult
{
    RevokeInventoryItemsResult();
    RevokeInventoryItemsResult(const RevokeInventoryItemsResult& src);
    RevokeInventoryItemsResult(RevokeInventoryItemsResult&& src);
    RevokeInventoryItemsResult(const PlayFabAdminRevokeInventoryItemsResult& src);
    RevokeInventoryItemsResult& operator=(const RevokeInventoryItemsResult&) = delete;
    ~RevokeInventoryItemsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminRevokeItemError, RevokeItemError> m_errors;
};

struct RunTaskRequest : public PlayFabAdminRunTaskRequest, public BaseModel
{
    RunTaskRequest();
    RunTaskRequest(const RunTaskRequest& src);
    RunTaskRequest(RunTaskRequest&& src);
    RunTaskRequest(const PlayFabAdminRunTaskRequest& src);
    RunTaskRequest& operator=(const RunTaskRequest&) = delete;
    ~RunTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<NameIdentifier> m_identifier;
};

struct RunTaskResult : public PlayFabAdminRunTaskResult, public SerializableModel, public ApiResult
{
    RunTaskResult();
    RunTaskResult(const RunTaskResult& src);
    RunTaskResult(RunTaskResult&& src);
    RunTaskResult(const PlayFabAdminRunTaskResult& src);
    RunTaskResult& operator=(const RunTaskResult&) = delete;
    ~RunTaskResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_taskInstanceId;
};

struct SendAccountRecoveryEmailRequest : public PlayFabAdminSendAccountRecoveryEmailRequest, public BaseModel
{
    SendAccountRecoveryEmailRequest();
    SendAccountRecoveryEmailRequest(const SendAccountRecoveryEmailRequest& src);
    SendAccountRecoveryEmailRequest(SendAccountRecoveryEmailRequest&& src);
    SendAccountRecoveryEmailRequest(const PlayFabAdminSendAccountRecoveryEmailRequest& src);
    SendAccountRecoveryEmailRequest& operator=(const SendAccountRecoveryEmailRequest&) = delete;
    ~SendAccountRecoveryEmailRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_email;
    String m_emailTemplateId;
};

struct SetPlayerSecretRequest : public PlayFabAdminSetPlayerSecretRequest, public SerializableModel
{
    SetPlayerSecretRequest();
    SetPlayerSecretRequest(const SetPlayerSecretRequest& src);
    SetPlayerSecretRequest(SetPlayerSecretRequest&& src);
    SetPlayerSecretRequest(const PlayFabAdminSetPlayerSecretRequest& src);
    SetPlayerSecretRequest& operator=(const SetPlayerSecretRequest&) = delete;
    ~SetPlayerSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playerSecret;
    String m_playFabId;
};

struct SetPublishedRevisionRequest : public PlayFabAdminSetPublishedRevisionRequest, public BaseModel
{
    SetPublishedRevisionRequest();
    SetPublishedRevisionRequest(const SetPublishedRevisionRequest& src);
    SetPublishedRevisionRequest(SetPublishedRevisionRequest&& src);
    SetPublishedRevisionRequest(const PlayFabAdminSetPublishedRevisionRequest& src);
    SetPublishedRevisionRequest& operator=(const SetPublishedRevisionRequest&) = delete;
    ~SetPublishedRevisionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
};

struct SetPublisherDataRequest : public PlayFabAdminSetPublisherDataRequest, public SerializableModel
{
    SetPublisherDataRequest();
    SetPublisherDataRequest(const SetPublisherDataRequest& src);
    SetPublisherDataRequest(SetPublisherDataRequest&& src);
    SetPublisherDataRequest(const PlayFabAdminSetPublisherDataRequest& src);
    SetPublisherDataRequest& operator=(const SetPublisherDataRequest&) = delete;
    ~SetPublisherDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
    String m_value;
};

struct TitleDataKeyValue : public PlayFabAdminTitleDataKeyValue, public SerializableModel
{
    TitleDataKeyValue();
    TitleDataKeyValue(const TitleDataKeyValue& src);
    TitleDataKeyValue(TitleDataKeyValue&& src);
    TitleDataKeyValue(const PlayFabAdminTitleDataKeyValue& src);
    TitleDataKeyValue& operator=(const TitleDataKeyValue&) = delete;
    ~TitleDataKeyValue() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
    String m_value;
};

struct SetTitleDataAndOverridesRequest : public PlayFabAdminSetTitleDataAndOverridesRequest, public BaseModel
{
    SetTitleDataAndOverridesRequest();
    SetTitleDataAndOverridesRequest(const SetTitleDataAndOverridesRequest& src);
    SetTitleDataAndOverridesRequest(SetTitleDataAndOverridesRequest&& src);
    SetTitleDataAndOverridesRequest(const PlayFabAdminSetTitleDataAndOverridesRequest& src);
    SetTitleDataAndOverridesRequest& operator=(const SetTitleDataAndOverridesRequest&) = delete;
    ~SetTitleDataAndOverridesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminTitleDataKeyValue, TitleDataKeyValue> m_keyValues;
    String m_overrideLabel;
};

struct SetTitleDataRequest : public PlayFabAdminSetTitleDataRequest, public SerializableModel
{
    SetTitleDataRequest();
    SetTitleDataRequest(const SetTitleDataRequest& src);
    SetTitleDataRequest(SetTitleDataRequest&& src);
    SetTitleDataRequest(const PlayFabAdminSetTitleDataRequest& src);
    SetTitleDataRequest& operator=(const SetTitleDataRequest&) = delete;
    ~SetTitleDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_key;
    String m_value;
};

struct SetupPushNotificationRequest : public PlayFabAdminSetupPushNotificationRequest, public SerializableModel
{
    SetupPushNotificationRequest();
    SetupPushNotificationRequest(const SetupPushNotificationRequest& src);
    SetupPushNotificationRequest(SetupPushNotificationRequest&& src);
    SetupPushNotificationRequest(const PlayFabAdminSetupPushNotificationRequest& src);
    SetupPushNotificationRequest& operator=(const SetupPushNotificationRequest&) = delete;
    ~SetupPushNotificationRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_credential;
    String m_key;
    String m_name;
};

struct SetupPushNotificationResult : public PlayFabAdminSetupPushNotificationResult, public SerializableModel, public ApiResult
{
    SetupPushNotificationResult();
    SetupPushNotificationResult(const SetupPushNotificationResult& src);
    SetupPushNotificationResult(SetupPushNotificationResult&& src);
    SetupPushNotificationResult(const PlayFabAdminSetupPushNotificationResult& src);
    SetupPushNotificationResult& operator=(const SetupPushNotificationResult&) = delete;
    ~SetupPushNotificationResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_aRN;
};

struct SubtractUserVirtualCurrencyRequest : public PlayFabAdminSubtractUserVirtualCurrencyRequest, public BaseModel
{
    SubtractUserVirtualCurrencyRequest();
    SubtractUserVirtualCurrencyRequest(const SubtractUserVirtualCurrencyRequest& src);
    SubtractUserVirtualCurrencyRequest(SubtractUserVirtualCurrencyRequest&& src);
    SubtractUserVirtualCurrencyRequest(const PlayFabAdminSubtractUserVirtualCurrencyRequest& src);
    SubtractUserVirtualCurrencyRequest& operator=(const SubtractUserVirtualCurrencyRequest&) = delete;
    ~SubtractUserVirtualCurrencyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    String m_virtualCurrency;
};

struct UpdateBanRequest : public PlayFabAdminUpdateBanRequest, public BaseModel
{
    UpdateBanRequest();
    UpdateBanRequest(const UpdateBanRequest& src);
    UpdateBanRequest(UpdateBanRequest&& src);
    UpdateBanRequest(const PlayFabAdminUpdateBanRequest& src);
    UpdateBanRequest& operator=(const UpdateBanRequest&) = delete;
    ~UpdateBanRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_active;
    String m_banId;
    StdExtra::optional<time_t> m_expires;
    String m_IPAddress;
    String m_MACAddress;
    StdExtra::optional<bool> m_permanent;
    String m_reason;
};

struct UpdateBansRequest : public PlayFabAdminUpdateBansRequest, public BaseModel
{
    UpdateBansRequest();
    UpdateBansRequest(const UpdateBansRequest& src);
    UpdateBansRequest(UpdateBansRequest&& src);
    UpdateBansRequest(const PlayFabAdminUpdateBansRequest& src);
    UpdateBansRequest& operator=(const UpdateBansRequest&) = delete;
    ~UpdateBansRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminUpdateBanRequest, UpdateBanRequest> m_bans;
};

struct UpdateBansResult : public PlayFabAdminUpdateBansResult, public BaseModel, public ApiResult
{
    UpdateBansResult();
    UpdateBansResult(const UpdateBansResult& src);
    UpdateBansResult(UpdateBansResult&& src);
    UpdateBansResult(const PlayFabAdminUpdateBansResult& src);
    UpdateBansResult& operator=(const UpdateBansResult&) = delete;
    ~UpdateBansResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminBanInfo, BanInfo> m_banData;
};

struct UpdateCatalogItemsRequest : public PlayFabAdminUpdateCatalogItemsRequest, public BaseModel
{
    UpdateCatalogItemsRequest();
    UpdateCatalogItemsRequest(const UpdateCatalogItemsRequest& src);
    UpdateCatalogItemsRequest(UpdateCatalogItemsRequest&& src);
    UpdateCatalogItemsRequest(const PlayFabAdminUpdateCatalogItemsRequest& src);
    UpdateCatalogItemsRequest& operator=(const UpdateCatalogItemsRequest&) = delete;
    ~UpdateCatalogItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PlayFabAdminCatalogItem, CatalogItem> m_catalog;
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_setAsDefaultCatalog;
};

struct UpdateCloudScriptRequest : public PlayFabAdminUpdateCloudScriptRequest, public BaseModel
{
    UpdateCloudScriptRequest();
    UpdateCloudScriptRequest(const UpdateCloudScriptRequest& src);
    UpdateCloudScriptRequest(UpdateCloudScriptRequest&& src);
    UpdateCloudScriptRequest(const PlayFabAdminUpdateCloudScriptRequest& src);
    UpdateCloudScriptRequest& operator=(const UpdateCloudScriptRequest&) = delete;
    ~UpdateCloudScriptRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_developerPlayFabId;
    PointerArrayModel<PlayFabAdminCloudScriptFile, CloudScriptFile> m_files;
};

struct UpdateCloudScriptResult : public PlayFabAdminUpdateCloudScriptResult, public SerializableModel, public ApiResult
{
    UpdateCloudScriptResult();
    UpdateCloudScriptResult(const UpdateCloudScriptResult&) = default;
    UpdateCloudScriptResult(UpdateCloudScriptResult&&) = default;
    UpdateCloudScriptResult(const PlayFabAdminUpdateCloudScriptResult& src);
    UpdateCloudScriptResult& operator=(const UpdateCloudScriptResult&) = delete;
    ~UpdateCloudScriptResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct UpdateOpenIdConnectionRequest : public PlayFabAdminUpdateOpenIdConnectionRequest, public BaseModel
{
    UpdateOpenIdConnectionRequest();
    UpdateOpenIdConnectionRequest(const UpdateOpenIdConnectionRequest& src);
    UpdateOpenIdConnectionRequest(UpdateOpenIdConnectionRequest&& src);
    UpdateOpenIdConnectionRequest(const PlayFabAdminUpdateOpenIdConnectionRequest& src);
    UpdateOpenIdConnectionRequest& operator=(const UpdateOpenIdConnectionRequest&) = delete;
    ~UpdateOpenIdConnectionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_clientId;
    String m_clientSecret;
    String m_connectionId;
    String m_issuerDiscoveryUrl;
    StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
};

struct UpdatePlayerSharedSecretRequest : public PlayFabAdminUpdatePlayerSharedSecretRequest, public SerializableModel
{
    UpdatePlayerSharedSecretRequest();
    UpdatePlayerSharedSecretRequest(const UpdatePlayerSharedSecretRequest& src);
    UpdatePlayerSharedSecretRequest(UpdatePlayerSharedSecretRequest&& src);
    UpdatePlayerSharedSecretRequest(const PlayFabAdminUpdatePlayerSharedSecretRequest& src);
    UpdatePlayerSharedSecretRequest& operator=(const UpdatePlayerSharedSecretRequest&) = delete;
    ~UpdatePlayerSharedSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendlyName;
    String m_secretKey;
};

struct UpdatePlayerStatisticDefinitionRequest : public PlayFabAdminUpdatePlayerStatisticDefinitionRequest, public BaseModel
{
    UpdatePlayerStatisticDefinitionRequest();
    UpdatePlayerStatisticDefinitionRequest(const UpdatePlayerStatisticDefinitionRequest& src);
    UpdatePlayerStatisticDefinitionRequest(UpdatePlayerStatisticDefinitionRequest&& src);
    UpdatePlayerStatisticDefinitionRequest(const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& src);
    UpdatePlayerStatisticDefinitionRequest& operator=(const UpdatePlayerStatisticDefinitionRequest&) = delete;
    ~UpdatePlayerStatisticDefinitionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayFabAdminStatisticAggregationMethod> m_aggregationMethod;
    String m_statisticName;
    StdExtra::optional<PlayFabAdminStatisticResetIntervalOption> m_versionChangeInterval;
};

struct UpdatePlayerStatisticDefinitionResult : public PlayFabAdminUpdatePlayerStatisticDefinitionResult, public BaseModel, public ApiResult
{
    UpdatePlayerStatisticDefinitionResult();
    UpdatePlayerStatisticDefinitionResult(const UpdatePlayerStatisticDefinitionResult& src);
    UpdatePlayerStatisticDefinitionResult(UpdatePlayerStatisticDefinitionResult&& src);
    UpdatePlayerStatisticDefinitionResult(const PlayFabAdminUpdatePlayerStatisticDefinitionResult& src);
    UpdatePlayerStatisticDefinitionResult& operator=(const UpdatePlayerStatisticDefinitionResult&) = delete;
    ~UpdatePlayerStatisticDefinitionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerStatisticDefinition> m_statistic;
};

struct UpdatePolicyRequest : public PlayFabAdminUpdatePolicyRequest, public BaseModel
{
    UpdatePolicyRequest();
    UpdatePolicyRequest(const UpdatePolicyRequest& src);
    UpdatePolicyRequest(UpdatePolicyRequest&& src);
    UpdatePolicyRequest(const PlayFabAdminUpdatePolicyRequest& src);
    UpdatePolicyRequest& operator=(const UpdatePolicyRequest&) = delete;
    ~UpdatePolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_policyName;
    PointerArrayModel<PlayFabAdminPermissionStatement, PermissionStatement> m_statements;
};

struct UpdatePolicyResponse : public PlayFabAdminUpdatePolicyResponse, public BaseModel, public ApiResult
{
    UpdatePolicyResponse();
    UpdatePolicyResponse(const UpdatePolicyResponse& src);
    UpdatePolicyResponse(UpdatePolicyResponse&& src);
    UpdatePolicyResponse(const PlayFabAdminUpdatePolicyResponse& src);
    UpdatePolicyResponse& operator=(const UpdatePolicyResponse&) = delete;
    ~UpdatePolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_policyName;
    PointerArrayModel<PlayFabAdminPermissionStatement, PermissionStatement> m_statements;
};

struct UpdateRandomResultTablesRequest : public PlayFabAdminUpdateRandomResultTablesRequest, public BaseModel
{
    UpdateRandomResultTablesRequest();
    UpdateRandomResultTablesRequest(const UpdateRandomResultTablesRequest& src);
    UpdateRandomResultTablesRequest(UpdateRandomResultTablesRequest&& src);
    UpdateRandomResultTablesRequest(const PlayFabAdminUpdateRandomResultTablesRequest& src);
    UpdateRandomResultTablesRequest& operator=(const UpdateRandomResultTablesRequest&) = delete;
    ~UpdateRandomResultTablesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabAdminRandomResultTable, RandomResultTable> m_tables;
};

struct UpdateSegmentRequest : public PlayFabAdminUpdateSegmentRequest, public BaseModel
{
    UpdateSegmentRequest();
    UpdateSegmentRequest(const UpdateSegmentRequest& src);
    UpdateSegmentRequest(UpdateSegmentRequest&& src);
    UpdateSegmentRequest(const PlayFabAdminUpdateSegmentRequest& src);
    UpdateSegmentRequest& operator=(const UpdateSegmentRequest&) = delete;
    ~UpdateSegmentRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    SegmentModel m_segmentModel;
};

struct UpdateSegmentResponse : public PlayFabAdminUpdateSegmentResponse, public SerializableModel, public ApiResult
{
    UpdateSegmentResponse();
    UpdateSegmentResponse(const UpdateSegmentResponse& src);
    UpdateSegmentResponse(UpdateSegmentResponse&& src);
    UpdateSegmentResponse(const PlayFabAdminUpdateSegmentResponse& src);
    UpdateSegmentResponse& operator=(const UpdateSegmentResponse&) = delete;
    ~UpdateSegmentResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_errorMessage;
    String m_segmentId;
};

struct UpdateStoreItemsRequest : public PlayFabAdminUpdateStoreItemsRequest, public BaseModel
{
    UpdateStoreItemsRequest();
    UpdateStoreItemsRequest(const UpdateStoreItemsRequest& src);
    UpdateStoreItemsRequest(UpdateStoreItemsRequest&& src);
    UpdateStoreItemsRequest(const PlayFabAdminUpdateStoreItemsRequest& src);
    UpdateStoreItemsRequest& operator=(const UpdateStoreItemsRequest&) = delete;
    ~UpdateStoreItemsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_catalogVersion;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<StoreMarketingModel> m_marketingData;
    PointerArrayModel<PlayFabAdminStoreItem, StoreItem> m_store;
    String m_storeId;
};

struct UpdateTaskRequest : public PlayFabAdminUpdateTaskRequest, public BaseModel
{
    UpdateTaskRequest();
    UpdateTaskRequest(const UpdateTaskRequest& src);
    UpdateTaskRequest(UpdateTaskRequest&& src);
    UpdateTaskRequest(const PlayFabAdminUpdateTaskRequest& src);
    UpdateTaskRequest& operator=(const UpdateTaskRequest&) = delete;
    ~UpdateTaskRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_description;
    StdExtra::optional<NameIdentifier> m_identifier;
    String m_name;
    JsonObject m_parameter;
    String m_schedule;
};

struct UpdateUserDataRequest : public PlayFabAdminUpdateUserDataRequest, public BaseModel
{
    UpdateUserDataRequest();
    UpdateUserDataRequest(const UpdateUserDataRequest& src);
    UpdateUserDataRequest(UpdateUserDataRequest&& src);
    UpdateUserDataRequest(const PlayFabAdminUpdateUserDataRequest& src);
    UpdateUserDataRequest& operator=(const UpdateUserDataRequest&) = delete;
    ~UpdateUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PlayFabUserDataPermission> m_permission;
    String m_playFabId;
};

struct UpdateUserDataResult : public PlayFabAdminUpdateUserDataResult, public SerializableModel, public ApiResult
{
    UpdateUserDataResult();
    UpdateUserDataResult(const UpdateUserDataResult&) = default;
    UpdateUserDataResult(UpdateUserDataResult&&) = default;
    UpdateUserDataResult(const PlayFabAdminUpdateUserDataResult& src);
    UpdateUserDataResult& operator=(const UpdateUserDataResult&) = delete;
    ~UpdateUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct UpdateUserInternalDataRequest : public PlayFabAdminUpdateUserInternalDataRequest, public BaseModel
{
    UpdateUserInternalDataRequest();
    UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src);
    UpdateUserInternalDataRequest(UpdateUserInternalDataRequest&& src);
    UpdateUserInternalDataRequest(const PlayFabAdminUpdateUserInternalDataRequest& src);
    UpdateUserInternalDataRequest& operator=(const UpdateUserInternalDataRequest&) = delete;
    ~UpdateUserInternalDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

struct UpdateUserTitleDisplayNameRequest : public PlayFabAdminUpdateUserTitleDisplayNameRequest, public BaseModel
{
    UpdateUserTitleDisplayNameRequest();
    UpdateUserTitleDisplayNameRequest(const UpdateUserTitleDisplayNameRequest& src);
    UpdateUserTitleDisplayNameRequest(UpdateUserTitleDisplayNameRequest&& src);
    UpdateUserTitleDisplayNameRequest(const PlayFabAdminUpdateUserTitleDisplayNameRequest& src);
    UpdateUserTitleDisplayNameRequest& operator=(const UpdateUserTitleDisplayNameRequest&) = delete;
    ~UpdateUserTitleDisplayNameRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    String m_displayName;
    String m_playFabId;
};

struct UpdateUserTitleDisplayNameResult : public PlayFabAdminUpdateUserTitleDisplayNameResult, public SerializableModel, public ApiResult
{
    UpdateUserTitleDisplayNameResult();
    UpdateUserTitleDisplayNameResult(const UpdateUserTitleDisplayNameResult& src);
    UpdateUserTitleDisplayNameResult(UpdateUserTitleDisplayNameResult&& src);
    UpdateUserTitleDisplayNameResult(const PlayFabAdminUpdateUserTitleDisplayNameResult& src);
    UpdateUserTitleDisplayNameResult& operator=(const UpdateUserTitleDisplayNameResult&) = delete;
    ~UpdateUserTitleDisplayNameResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_displayName;
};

} // namespace AdminModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabAdminAbortTaskInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminActionsOnPlayersInSegmentTaskParameter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminNameIdentifier& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminActionsOnPlayersInSegmentTaskSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAdCampaignAttribution& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAdCampaignSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddLocalizedNewsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddNewsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddNewsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddPlayerTagRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddServerBuildRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddServerBuildResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminVirtualCurrencyData& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminAddVirtualCurrencyTypesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminApiCondition& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminBanInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminBanPlayerSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminBanRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminBanUsersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminBanUsersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCatalogItemBundleInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCatalogItemConsumableInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCatalogItemContainerInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCatalogItem& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCheckLimitedEditionItemAvailabilityRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCheckLimitedEditionItemAvailabilityResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCloudScriptFile& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCloudScriptTaskParameter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminScriptExecutionError& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLogStatement& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminExecuteCloudScriptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCloudScriptTaskSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCloudScriptVersionStatus& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminContactEmailInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminContentInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreateActionsOnPlayerSegmentTaskRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreateCloudScriptTaskRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminInsightsScalingTaskParameter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreateInsightsScheduledScalingTaskRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminOpenIdIssuerInformation& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreateOpenIdConnectionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerSharedSecretRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerSharedSecretResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerStatisticDefinitionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPlayerStatisticDefinition& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreatePlayerStatisticDefinitionResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerStatisticSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminEmailNotificationSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminExecuteAzureFunctionSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminExecuteCloudScriptSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGrantItemSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGrantVirtualCurrencySegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPushNotificationSegmentAction& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSegmentTrigger& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminFirstLoginDateSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminFirstLoginTimespanSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLastLoginDateSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLastLoginTimespanSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLinkedUserAccountSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLinkedUserAccountHasEmailSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLocationSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPushNotificationSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminStatisticSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminTagSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminTotalValueToDateInUSDSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUserOriginationSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminValueToDateSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminVirtualCurrencyBalanceSegmentFilter& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSegmentAndDefinition& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSegmentOrDefinition& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSegmentModel& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreateSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreateSegmentResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminCreateTaskResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteContentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteMasterPlayerAccountRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteMasterPlayerAccountResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteOpenIdConnectionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeletePlayerSharedSecretRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteSegmentsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteStoreRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteTaskRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminDeleteTitleDataOverrideRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminExportMasterPlayerDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminExportMasterPlayerDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGameModeInfo& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetActionsOnPlayersInSegmentTaskInstanceResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetSegmentResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetAllSegmentsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetCatalogItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetCatalogItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptRevisionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptRevisionResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptTaskInstanceResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetCloudScriptVersionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetContentListRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetContentListResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetContentUploadUrlRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetContentUploadUrlResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetDataReportRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetDataReportResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameInfoResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameModesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetMatchmakerGameModesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayedTitleListRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayedTitleListResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerIdFromAuthTokenRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerIdFromAuthTokenResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPlayerProfileViewConstraints& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerProfileRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerProfileResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerSegmentsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSharedSecret& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerSharedSecretsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayersInSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPlayerLinkedAccount& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPlayerLocation& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPlayerStatistic& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPushNotificationRegistration& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPlayerProfile& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayersInSegmentResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayersSegmentsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticDefinitionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticVersionsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPlayerStatisticVersion& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerStatisticVersionsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerTagsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPlayerTagsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPolicyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminPermissionStatement& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPolicyResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPublisherDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetPublisherDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetRandomResultTablesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminResultTableNode& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRandomResultTableListing& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetRandomResultTablesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetSegmentsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetSegmentsResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildInfoResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildUploadURLRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetServerBuildUploadURLResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetStoreItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminStoreMarketingModel& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminStoreItem& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetStoreItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetTaskInstanceRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetTaskInstancesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminTaskInstanceBasicSummary& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetTaskInstancesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetTasksRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminScheduledTask& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetTasksResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetTitleDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetTitleDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetUserBansRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetUserBansResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetUserDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetUserInventoryRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGetUserInventoryResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGrantedItemInstance& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminItemGrant& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGrantItemsToUsersRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminGrantItemsToUsersResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminIncrementLimitedEditionItemAvailabilityRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticVersionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminIncrementPlayerStatisticVersionResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminListBuildsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminOpenIdConnection& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminListOpenIdConnectionResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminListVirtualCurrencyTypesResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLookupUserAccountInfoRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminLookupUserAccountInfoResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminModifyMatchmakerGameModesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminModifyServerBuildRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminModifyServerBuildResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminModifyUserVirtualCurrencyResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRandomResultTable& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRefundPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRefundPurchaseResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRemovePlayerTagRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRemoveServerBuildRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRemoveVirtualCurrencyTypesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminResetCharacterStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminResetPasswordRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminResetUserStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminResolvePurchaseDisputeRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminResolvePurchaseDisputeResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeAllBansForUserRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeAllBansForUserResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeBansRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeBansResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItem& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeItemError& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRevokeInventoryItemsResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRunTaskRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminRunTaskResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSendAccountRecoveryEmailRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSetPlayerSecretRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSetPublishedRevisionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSetPublisherDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminTitleDataKeyValue& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataAndOverridesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSetTitleDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSetupPushNotificationRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSetupPushNotificationResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminSubtractUserVirtualCurrencyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateBanRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateBansRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateBansResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateCatalogItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateCloudScriptRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateCloudScriptResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateOpenIdConnectionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerSharedSecretRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerStatisticDefinitionRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdatePlayerStatisticDefinitionResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdatePolicyRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdatePolicyResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateRandomResultTablesRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateSegmentRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateSegmentResponse& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateStoreItemsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateTaskRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateUserDataResult& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateUserInternalDataRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateUserTitleDisplayNameRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabAdminUpdateUserTitleDisplayNameResult& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
template<> struct EnumRange<PlayFabAdminAuthTokenType>
{
    static constexpr PlayFabAdminAuthTokenType maxValue = PlayFabAdminAuthTokenType::Email;
};

template<> struct EnumRange<PlayFabAdminConditionals>
{
    static constexpr PlayFabAdminConditionals maxValue = PlayFabAdminConditionals::False;
};

template<> struct EnumRange<PlayFabAdminEffectType>
{
    static constexpr PlayFabAdminEffectType maxValue = PlayFabAdminEffectType::Deny;
};

template<> struct EnumRange<PlayFabAdminGameBuildStatus>
{
    static constexpr PlayFabAdminGameBuildStatus maxValue = PlayFabAdminGameBuildStatus::FailedToProcess;
};

template<> struct EnumRange<PlayFabAdminGenericErrorCodes>
{
    static constexpr PlayFabAdminGenericErrorCodes maxValue = PlayFabAdminGenericErrorCodes::InventoryApiNotImplemented;
};

template<> struct EnumRange<PlayFabAdminPushSetupPlatform>
{
    static constexpr PlayFabAdminPushSetupPlatform maxValue = PlayFabAdminPushSetupPlatform::APNS_SANDBOX;
};

template<> struct EnumRange<PlayFabAdminRegion>
{
    static constexpr PlayFabAdminRegion maxValue = PlayFabAdminRegion::Australia;
};

template<> struct EnumRange<PlayFabAdminResolutionOutcome>
{
    static constexpr PlayFabAdminResolutionOutcome maxValue = PlayFabAdminResolutionOutcome::Manual;
};

template<> struct EnumRange<PlayFabAdminResultTableNodeType>
{
    static constexpr PlayFabAdminResultTableNodeType maxValue = PlayFabAdminResultTableNodeType::TableId;
};

template<> struct EnumRange<PlayFabAdminScheduledTaskType>
{
    static constexpr PlayFabAdminScheduledTaskType maxValue = PlayFabAdminScheduledTaskType::InsightsScheduledScaling;
};

template<> struct EnumRange<PlayFabAdminSegmentCountryCode>
{
    static constexpr PlayFabAdminSegmentCountryCode maxValue = PlayFabAdminSegmentCountryCode::ZW;
};

template<> struct EnumRange<PlayFabAdminSegmentCurrency>
{
    static constexpr PlayFabAdminSegmentCurrency maxValue = PlayFabAdminSegmentCurrency::ZWD;
};

template<> struct EnumRange<PlayFabAdminSegmentFilterComparison>
{
    static constexpr PlayFabAdminSegmentFilterComparison maxValue = PlayFabAdminSegmentFilterComparison::NotContains;
};

template<> struct EnumRange<PlayFabAdminSegmentLoginIdentityProvider>
{
    static constexpr PlayFabAdminSegmentLoginIdentityProvider maxValue = PlayFabAdminSegmentLoginIdentityProvider::NintendoSwitchAccount;
};

template<> struct EnumRange<PlayFabAdminSegmentPushNotificationDevicePlatform>
{
    static constexpr PlayFabAdminSegmentPushNotificationDevicePlatform maxValue = PlayFabAdminSegmentPushNotificationDevicePlatform::GoogleCloudMessaging;
};

template<> struct EnumRange<PlayFabAdminSourceType>
{
    static constexpr PlayFabAdminSourceType maxValue = PlayFabAdminSourceType::API;
};

template<> struct EnumRange<PlayFabAdminStatisticAggregationMethod>
{
    static constexpr PlayFabAdminStatisticAggregationMethod maxValue = PlayFabAdminStatisticAggregationMethod::Sum;
};

template<> struct EnumRange<PlayFabAdminStatisticResetIntervalOption>
{
    static constexpr PlayFabAdminStatisticResetIntervalOption maxValue = PlayFabAdminStatisticResetIntervalOption::Month;
};

template<> struct EnumRange<PlayFabAdminStatisticVersionArchivalStatus>
{
    static constexpr PlayFabAdminStatisticVersionArchivalStatus maxValue = PlayFabAdminStatisticVersionArchivalStatus::Complete;
};

template<> struct EnumRange<PlayFabAdminStatisticVersionStatus>
{
    static constexpr PlayFabAdminStatisticVersionStatus maxValue = PlayFabAdminStatisticVersionStatus::Archived;
};

template<> struct EnumRange<PlayFabAdminTaskInstanceStatus>
{
    static constexpr PlayFabAdminTaskInstanceStatus maxValue = PlayFabAdminTaskInstanceStatus::Stalled;
};

} // namespace PlayFab
