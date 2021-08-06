#pragma once

#include <playfab/PFPlayerDataManagementDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace PlayerDataManagementModels
{

// PlayerDataManagement Classes
struct CreatePlayerStatisticDefinitionRequest : public PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest, public BaseModel
{
    CreatePlayerStatisticDefinitionRequest();
    CreatePlayerStatisticDefinitionRequest(const CreatePlayerStatisticDefinitionRequest& src);
    CreatePlayerStatisticDefinitionRequest(CreatePlayerStatisticDefinitionRequest&& src);
    CreatePlayerStatisticDefinitionRequest(const PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest& src);
    CreatePlayerStatisticDefinitionRequest& operator=(const CreatePlayerStatisticDefinitionRequest&) = delete;
    ~CreatePlayerStatisticDefinitionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFPlayerDataManagementStatisticAggregationMethod> m_aggregationMethod;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
    StdExtra::optional<PFPlayerDataManagementStatisticResetIntervalOption> m_versionChangeInterval;
};

struct PlayerStatisticDefinition : public PFPlayerDataManagementPlayerStatisticDefinition, public BaseModel
{
    PlayerStatisticDefinition();
    PlayerStatisticDefinition(const PlayerStatisticDefinition& src);
    PlayerStatisticDefinition(PlayerStatisticDefinition&& src);
    PlayerStatisticDefinition(const PFPlayerDataManagementPlayerStatisticDefinition& src);
    PlayerStatisticDefinition& operator=(const PlayerStatisticDefinition&) = delete;
    ~PlayerStatisticDefinition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFPlayerDataManagementStatisticAggregationMethod> m_aggregationMethod;
    String m_statisticName;
    StdExtra::optional<PFPlayerDataManagementStatisticResetIntervalOption> m_versionChangeInterval;
};

struct CreatePlayerStatisticDefinitionResult : public PFPlayerDataManagementCreatePlayerStatisticDefinitionResult, public BaseModel, public ApiResult
{
    CreatePlayerStatisticDefinitionResult();
    CreatePlayerStatisticDefinitionResult(const CreatePlayerStatisticDefinitionResult& src);
    CreatePlayerStatisticDefinitionResult(CreatePlayerStatisticDefinitionResult&& src);
    CreatePlayerStatisticDefinitionResult(const PFPlayerDataManagementCreatePlayerStatisticDefinitionResult& src);
    CreatePlayerStatisticDefinitionResult& operator=(const CreatePlayerStatisticDefinitionResult&) = delete;
    ~CreatePlayerStatisticDefinitionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerStatisticDefinition> m_statistic;
};

struct GetDataReportRequest : public PFPlayerDataManagementGetDataReportRequest, public SerializableModel
{
    GetDataReportRequest();
    GetDataReportRequest(const GetDataReportRequest& src);
    GetDataReportRequest(GetDataReportRequest&& src);
    GetDataReportRequest(const PFPlayerDataManagementGetDataReportRequest& src);
    GetDataReportRequest& operator=(const GetDataReportRequest&) = delete;
    ~GetDataReportRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_reportName;
};

struct GetDataReportResult : public PFPlayerDataManagementGetDataReportResult, public SerializableModel, public ApiResult
{
    GetDataReportResult();
    GetDataReportResult(const GetDataReportResult& src);
    GetDataReportResult(GetDataReportResult&& src);
    GetDataReportResult(const PFPlayerDataManagementGetDataReportResult& src);
    GetDataReportResult& operator=(const GetDataReportResult&) = delete;
    ~GetDataReportResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_downloadUrl;
};

struct GetPlayerStatisticDefinitionsResult : public PFPlayerDataManagementGetPlayerStatisticDefinitionsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticDefinitionsResult();
    GetPlayerStatisticDefinitionsResult(const GetPlayerStatisticDefinitionsResult& src);
    GetPlayerStatisticDefinitionsResult(GetPlayerStatisticDefinitionsResult&& src);
    GetPlayerStatisticDefinitionsResult(const PFPlayerDataManagementGetPlayerStatisticDefinitionsResult& src);
    GetPlayerStatisticDefinitionsResult& operator=(const GetPlayerStatisticDefinitionsResult&) = delete;
    ~GetPlayerStatisticDefinitionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerDataManagementPlayerStatisticDefinition, PlayerStatisticDefinition> m_statistics;
};

struct GetPlayerStatisticVersionsRequest : public PFPlayerDataManagementGetPlayerStatisticVersionsRequest, public BaseModel
{
    GetPlayerStatisticVersionsRequest();
    GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src);
    GetPlayerStatisticVersionsRequest(const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& src);
    GetPlayerStatisticVersionsRequest& operator=(const GetPlayerStatisticVersionsRequest&) = delete;
    ~GetPlayerStatisticVersionsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
};

struct PlayerStatisticVersion : public PFPlayerDataManagementPlayerStatisticVersion, public BaseModel
{
    PlayerStatisticVersion();
    PlayerStatisticVersion(const PlayerStatisticVersion& src);
    PlayerStatisticVersion(PlayerStatisticVersion&& src);
    PlayerStatisticVersion(const PFPlayerDataManagementPlayerStatisticVersion& src);
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
    StdExtra::optional<PFPlayerDataManagementStatisticVersionStatus> m_status;
};

struct GetPlayerStatisticVersionsResult : public PFPlayerDataManagementGetPlayerStatisticVersionsResult, public BaseModel, public ApiResult
{
    GetPlayerStatisticVersionsResult();
    GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src);
    GetPlayerStatisticVersionsResult(const PFPlayerDataManagementGetPlayerStatisticVersionsResult& src);
    GetPlayerStatisticVersionsResult& operator=(const GetPlayerStatisticVersionsResult&) = delete;
    ~GetPlayerStatisticVersionsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerDataManagementPlayerStatisticVersion, PlayerStatisticVersion> m_statisticVersions;
};

struct GetUserDataRequest : public PFPlayerDataManagementGetUserDataRequest, public BaseModel
{
    GetUserDataRequest();
    GetUserDataRequest(const GetUserDataRequest& src);
    GetUserDataRequest(GetUserDataRequest&& src);
    GetUserDataRequest(const PFPlayerDataManagementGetUserDataRequest& src);
    GetUserDataRequest& operator=(const GetUserDataRequest&) = delete;
    ~GetUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<uint32_t> m_ifChangedFromDataVersion;
    PointerArrayModel<char, String> m_keys;
    String m_playFabId;
};

struct AdminGetUserDataResult : public PFPlayerDataManagementAdminGetUserDataResult, public BaseModel, public ApiResult
{
    AdminGetUserDataResult();
    AdminGetUserDataResult(const AdminGetUserDataResult& src);
    AdminGetUserDataResult(AdminGetUserDataResult&& src);
    AdminGetUserDataResult(const PFPlayerDataManagementAdminGetUserDataResult& src);
    AdminGetUserDataResult& operator=(const AdminGetUserDataResult&) = delete;
    ~AdminGetUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFUserDataRecordDictionaryEntry, UserDataRecord> m_data;
    String m_playFabId;
};

struct IncrementPlayerStatisticVersionRequest : public PFPlayerDataManagementIncrementPlayerStatisticVersionRequest, public BaseModel
{
    IncrementPlayerStatisticVersionRequest();
    IncrementPlayerStatisticVersionRequest(const IncrementPlayerStatisticVersionRequest& src);
    IncrementPlayerStatisticVersionRequest(IncrementPlayerStatisticVersionRequest&& src);
    IncrementPlayerStatisticVersionRequest(const PFPlayerDataManagementIncrementPlayerStatisticVersionRequest& src);
    IncrementPlayerStatisticVersionRequest& operator=(const IncrementPlayerStatisticVersionRequest&) = delete;
    ~IncrementPlayerStatisticVersionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_statisticName;
};

struct IncrementPlayerStatisticVersionResult : public PFPlayerDataManagementIncrementPlayerStatisticVersionResult, public BaseModel, public ApiResult
{
    IncrementPlayerStatisticVersionResult();
    IncrementPlayerStatisticVersionResult(const IncrementPlayerStatisticVersionResult& src);
    IncrementPlayerStatisticVersionResult(IncrementPlayerStatisticVersionResult&& src);
    IncrementPlayerStatisticVersionResult(const PFPlayerDataManagementIncrementPlayerStatisticVersionResult& src);
    IncrementPlayerStatisticVersionResult& operator=(const IncrementPlayerStatisticVersionResult&) = delete;
    ~IncrementPlayerStatisticVersionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerStatisticVersion> m_statisticVersion;
};

struct RefundPurchaseRequest : public PFPlayerDataManagementRefundPurchaseRequest, public SerializableModel
{
    RefundPurchaseRequest();
    RefundPurchaseRequest(const RefundPurchaseRequest& src);
    RefundPurchaseRequest(RefundPurchaseRequest&& src);
    RefundPurchaseRequest(const PFPlayerDataManagementRefundPurchaseRequest& src);
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

struct RefundPurchaseResponse : public PFPlayerDataManagementRefundPurchaseResponse, public SerializableModel, public ApiResult
{
    RefundPurchaseResponse();
    RefundPurchaseResponse(const RefundPurchaseResponse& src);
    RefundPurchaseResponse(RefundPurchaseResponse&& src);
    RefundPurchaseResponse(const PFPlayerDataManagementRefundPurchaseResponse& src);
    RefundPurchaseResponse& operator=(const RefundPurchaseResponse&) = delete;
    ~RefundPurchaseResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_purchaseStatus;
};

struct ResetUserStatisticsRequest : public PFPlayerDataManagementResetUserStatisticsRequest, public BaseModel
{
    ResetUserStatisticsRequest();
    ResetUserStatisticsRequest(const ResetUserStatisticsRequest& src);
    ResetUserStatisticsRequest(ResetUserStatisticsRequest&& src);
    ResetUserStatisticsRequest(const PFPlayerDataManagementResetUserStatisticsRequest& src);
    ResetUserStatisticsRequest& operator=(const ResetUserStatisticsRequest&) = delete;
    ~ResetUserStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
};

struct ResolvePurchaseDisputeRequest : public PFPlayerDataManagementResolvePurchaseDisputeRequest, public SerializableModel
{
    ResolvePurchaseDisputeRequest();
    ResolvePurchaseDisputeRequest(const ResolvePurchaseDisputeRequest& src);
    ResolvePurchaseDisputeRequest(ResolvePurchaseDisputeRequest&& src);
    ResolvePurchaseDisputeRequest(const PFPlayerDataManagementResolvePurchaseDisputeRequest& src);
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

struct ResolvePurchaseDisputeResponse : public PFPlayerDataManagementResolvePurchaseDisputeResponse, public SerializableModel, public ApiResult
{
    ResolvePurchaseDisputeResponse();
    ResolvePurchaseDisputeResponse(const ResolvePurchaseDisputeResponse& src);
    ResolvePurchaseDisputeResponse(ResolvePurchaseDisputeResponse&& src);
    ResolvePurchaseDisputeResponse(const PFPlayerDataManagementResolvePurchaseDisputeResponse& src);
    ResolvePurchaseDisputeResponse& operator=(const ResolvePurchaseDisputeResponse&) = delete;
    ~ResolvePurchaseDisputeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_purchaseStatus;
};

struct UpdatePlayerStatisticDefinitionRequest : public PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest, public BaseModel
{
    UpdatePlayerStatisticDefinitionRequest();
    UpdatePlayerStatisticDefinitionRequest(const UpdatePlayerStatisticDefinitionRequest& src);
    UpdatePlayerStatisticDefinitionRequest(UpdatePlayerStatisticDefinitionRequest&& src);
    UpdatePlayerStatisticDefinitionRequest(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest& src);
    UpdatePlayerStatisticDefinitionRequest& operator=(const UpdatePlayerStatisticDefinitionRequest&) = delete;
    ~UpdatePlayerStatisticDefinitionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFPlayerDataManagementStatisticAggregationMethod> m_aggregationMethod;
    String m_statisticName;
    StdExtra::optional<PFPlayerDataManagementStatisticResetIntervalOption> m_versionChangeInterval;
};

struct UpdatePlayerStatisticDefinitionResult : public PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult, public BaseModel, public ApiResult
{
    UpdatePlayerStatisticDefinitionResult();
    UpdatePlayerStatisticDefinitionResult(const UpdatePlayerStatisticDefinitionResult& src);
    UpdatePlayerStatisticDefinitionResult(UpdatePlayerStatisticDefinitionResult&& src);
    UpdatePlayerStatisticDefinitionResult(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult& src);
    UpdatePlayerStatisticDefinitionResult& operator=(const UpdatePlayerStatisticDefinitionResult&) = delete;
    ~UpdatePlayerStatisticDefinitionResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PlayerStatisticDefinition> m_statistic;
};

struct AdminUpdateUserDataRequest : public PFPlayerDataManagementAdminUpdateUserDataRequest, public BaseModel
{
    AdminUpdateUserDataRequest();
    AdminUpdateUserDataRequest(const AdminUpdateUserDataRequest& src);
    AdminUpdateUserDataRequest(AdminUpdateUserDataRequest&& src);
    AdminUpdateUserDataRequest(const PFPlayerDataManagementAdminUpdateUserDataRequest& src);
    AdminUpdateUserDataRequest& operator=(const AdminUpdateUserDataRequest&) = delete;
    ~AdminUpdateUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PFUserDataPermission> m_permission;
    String m_playFabId;
};

struct UpdateUserDataResult : public PFPlayerDataManagementUpdateUserDataResult, public SerializableModel, public ApiResult
{
    UpdateUserDataResult();
    UpdateUserDataResult(const UpdateUserDataResult&) = default;
    UpdateUserDataResult(UpdateUserDataResult&&) = default;
    UpdateUserDataResult(const PFPlayerDataManagementUpdateUserDataResult& src);
    UpdateUserDataResult& operator=(const UpdateUserDataResult&) = delete;
    ~UpdateUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct UpdateUserInternalDataRequest : public PFPlayerDataManagementUpdateUserInternalDataRequest, public BaseModel
{
    UpdateUserInternalDataRequest();
    UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src);
    UpdateUserInternalDataRequest(UpdateUserInternalDataRequest&& src);
    UpdateUserInternalDataRequest(const PFPlayerDataManagementUpdateUserInternalDataRequest& src);
    UpdateUserInternalDataRequest& operator=(const UpdateUserInternalDataRequest&) = delete;
    ~UpdateUserInternalDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    String m_playFabId;
};

struct ClientGetFriendLeaderboardRequest : public PFPlayerDataManagementClientGetFriendLeaderboardRequest, public BaseModel
{
    ClientGetFriendLeaderboardRequest();
    ClientGetFriendLeaderboardRequest(const ClientGetFriendLeaderboardRequest& src);
    ClientGetFriendLeaderboardRequest(ClientGetFriendLeaderboardRequest&& src);
    ClientGetFriendLeaderboardRequest(const PFPlayerDataManagementClientGetFriendLeaderboardRequest& src);
    ClientGetFriendLeaderboardRequest& operator=(const ClientGetFriendLeaderboardRequest&) = delete;
    ~ClientGetFriendLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    StdExtra::optional<int32_t> m_maxResultsCount;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
    String m_xboxToken;
};

struct PlayerLeaderboardEntry : public PFPlayerDataManagementPlayerLeaderboardEntry, public BaseModel
{
    PlayerLeaderboardEntry();
    PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src);
    PlayerLeaderboardEntry(PlayerLeaderboardEntry&& src);
    PlayerLeaderboardEntry(const PFPlayerDataManagementPlayerLeaderboardEntry& src);
    PlayerLeaderboardEntry& operator=(const PlayerLeaderboardEntry&) = delete;
    ~PlayerLeaderboardEntry() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_displayName;
    String m_playFabId;
    StdExtra::optional<PlayerProfileModel> m_profile;
};

struct GetLeaderboardResult : public PFPlayerDataManagementGetLeaderboardResult, public BaseModel, public ApiResult
{
    GetLeaderboardResult();
    GetLeaderboardResult(const GetLeaderboardResult& src);
    GetLeaderboardResult(GetLeaderboardResult&& src);
    GetLeaderboardResult(const PFPlayerDataManagementGetLeaderboardResult& src);
    GetLeaderboardResult& operator=(const GetLeaderboardResult&) = delete;
    ~GetLeaderboardResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerDataManagementPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct GetFriendLeaderboardAroundPlayerRequest : public PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest, public BaseModel
{
    GetFriendLeaderboardAroundPlayerRequest();
    GetFriendLeaderboardAroundPlayerRequest(const GetFriendLeaderboardAroundPlayerRequest& src);
    GetFriendLeaderboardAroundPlayerRequest(GetFriendLeaderboardAroundPlayerRequest&& src);
    GetFriendLeaderboardAroundPlayerRequest(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest& src);
    GetFriendLeaderboardAroundPlayerRequest& operator=(const GetFriendLeaderboardAroundPlayerRequest&) = delete;
    ~GetFriendLeaderboardAroundPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    StdExtra::optional<int32_t> m_maxResultsCount;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
    String m_xboxToken;
};

struct GetFriendLeaderboardAroundPlayerResult : public PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult, public BaseModel, public ApiResult
{
    GetFriendLeaderboardAroundPlayerResult();
    GetFriendLeaderboardAroundPlayerResult(const GetFriendLeaderboardAroundPlayerResult& src);
    GetFriendLeaderboardAroundPlayerResult(GetFriendLeaderboardAroundPlayerResult&& src);
    GetFriendLeaderboardAroundPlayerResult(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult& src);
    GetFriendLeaderboardAroundPlayerResult& operator=(const GetFriendLeaderboardAroundPlayerResult&) = delete;
    ~GetFriendLeaderboardAroundPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerDataManagementPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct GetLeaderboardRequest : public PFPlayerDataManagementGetLeaderboardRequest, public BaseModel
{
    GetLeaderboardRequest();
    GetLeaderboardRequest(const GetLeaderboardRequest& src);
    GetLeaderboardRequest(GetLeaderboardRequest&& src);
    GetLeaderboardRequest(const PFPlayerDataManagementGetLeaderboardRequest& src);
    GetLeaderboardRequest& operator=(const GetLeaderboardRequest&) = delete;
    ~GetLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
};

struct GetLeaderboardAroundPlayerRequest : public PFPlayerDataManagementGetLeaderboardAroundPlayerRequest, public BaseModel
{
    GetLeaderboardAroundPlayerRequest();
    GetLeaderboardAroundPlayerRequest(const GetLeaderboardAroundPlayerRequest& src);
    GetLeaderboardAroundPlayerRequest(GetLeaderboardAroundPlayerRequest&& src);
    GetLeaderboardAroundPlayerRequest(const PFPlayerDataManagementGetLeaderboardAroundPlayerRequest& src);
    GetLeaderboardAroundPlayerRequest& operator=(const GetLeaderboardAroundPlayerRequest&) = delete;
    ~GetLeaderboardAroundPlayerRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<int32_t> m_maxResultsCount;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
};

struct GetLeaderboardAroundPlayerResult : public PFPlayerDataManagementGetLeaderboardAroundPlayerResult, public BaseModel, public ApiResult
{
    GetLeaderboardAroundPlayerResult();
    GetLeaderboardAroundPlayerResult(const GetLeaderboardAroundPlayerResult& src);
    GetLeaderboardAroundPlayerResult(GetLeaderboardAroundPlayerResult&& src);
    GetLeaderboardAroundPlayerResult(const PFPlayerDataManagementGetLeaderboardAroundPlayerResult& src);
    GetLeaderboardAroundPlayerResult& operator=(const GetLeaderboardAroundPlayerResult&) = delete;
    ~GetLeaderboardAroundPlayerResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerDataManagementPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct StatisticNameVersion : public PFPlayerDataManagementStatisticNameVersion, public SerializableModel
{
    StatisticNameVersion();
    StatisticNameVersion(const StatisticNameVersion& src);
    StatisticNameVersion(StatisticNameVersion&& src);
    StatisticNameVersion(const PFPlayerDataManagementStatisticNameVersion& src);
    StatisticNameVersion& operator=(const StatisticNameVersion&) = delete;
    ~StatisticNameVersion() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_statisticName;
};

struct ClientGetPlayerStatisticsRequest : public PFPlayerDataManagementClientGetPlayerStatisticsRequest, public BaseModel
{
    ClientGetPlayerStatisticsRequest();
    ClientGetPlayerStatisticsRequest(const ClientGetPlayerStatisticsRequest& src);
    ClientGetPlayerStatisticsRequest(ClientGetPlayerStatisticsRequest&& src);
    ClientGetPlayerStatisticsRequest(const PFPlayerDataManagementClientGetPlayerStatisticsRequest& src);
    ClientGetPlayerStatisticsRequest& operator=(const ClientGetPlayerStatisticsRequest&) = delete;
    ~ClientGetPlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<char, String> m_statisticNames;
    PointerArrayModel<PFPlayerDataManagementStatisticNameVersion, StatisticNameVersion> m_statisticNameVersions;
};

struct ClientGetPlayerStatisticsResult : public PFPlayerDataManagementClientGetPlayerStatisticsResult, public BaseModel, public ApiResult
{
    ClientGetPlayerStatisticsResult();
    ClientGetPlayerStatisticsResult(const ClientGetPlayerStatisticsResult& src);
    ClientGetPlayerStatisticsResult(ClientGetPlayerStatisticsResult&& src);
    ClientGetPlayerStatisticsResult(const PFPlayerDataManagementClientGetPlayerStatisticsResult& src);
    ClientGetPlayerStatisticsResult& operator=(const ClientGetPlayerStatisticsResult&) = delete;
    ~ClientGetPlayerStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFStatisticValue, StatisticValue> m_statistics;
};

struct ClientGetUserDataResult : public PFPlayerDataManagementClientGetUserDataResult, public BaseModel, public ApiResult
{
    ClientGetUserDataResult();
    ClientGetUserDataResult(const ClientGetUserDataResult& src);
    ClientGetUserDataResult(ClientGetUserDataResult&& src);
    ClientGetUserDataResult(const PFPlayerDataManagementClientGetUserDataResult& src);
    ClientGetUserDataResult& operator=(const ClientGetUserDataResult&) = delete;
    ~ClientGetUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFUserDataRecordDictionaryEntry, UserDataRecord> m_data;
};

struct StatisticUpdate : public PFPlayerDataManagementStatisticUpdate, public BaseModel
{
    StatisticUpdate();
    StatisticUpdate(const StatisticUpdate& src);
    StatisticUpdate(StatisticUpdate&& src);
    StatisticUpdate(const PFPlayerDataManagementStatisticUpdate& src);
    StatisticUpdate& operator=(const StatisticUpdate&) = delete;
    ~StatisticUpdate() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_statisticName;
    StdExtra::optional<uint32_t> m_version;
};

struct ClientUpdatePlayerStatisticsRequest : public PFPlayerDataManagementClientUpdatePlayerStatisticsRequest, public BaseModel
{
    ClientUpdatePlayerStatisticsRequest();
    ClientUpdatePlayerStatisticsRequest(const ClientUpdatePlayerStatisticsRequest& src);
    ClientUpdatePlayerStatisticsRequest(ClientUpdatePlayerStatisticsRequest&& src);
    ClientUpdatePlayerStatisticsRequest(const PFPlayerDataManagementClientUpdatePlayerStatisticsRequest& src);
    ClientUpdatePlayerStatisticsRequest& operator=(const ClientUpdatePlayerStatisticsRequest&) = delete;
    ~ClientUpdatePlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PFPlayerDataManagementStatisticUpdate, StatisticUpdate> m_statistics;
};

struct ClientUpdateUserDataRequest : public PFPlayerDataManagementClientUpdateUserDataRequest, public BaseModel
{
    ClientUpdateUserDataRequest();
    ClientUpdateUserDataRequest(const ClientUpdateUserDataRequest& src);
    ClientUpdateUserDataRequest(ClientUpdateUserDataRequest&& src);
    ClientUpdateUserDataRequest(const PFPlayerDataManagementClientUpdateUserDataRequest& src);
    ClientUpdateUserDataRequest& operator=(const ClientUpdateUserDataRequest&) = delete;
    ~ClientUpdateUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PFUserDataPermission> m_permission;
};

struct ServerGetFriendLeaderboardRequest : public PFPlayerDataManagementServerGetFriendLeaderboardRequest, public BaseModel
{
    ServerGetFriendLeaderboardRequest();
    ServerGetFriendLeaderboardRequest(const ServerGetFriendLeaderboardRequest& src);
    ServerGetFriendLeaderboardRequest(ServerGetFriendLeaderboardRequest&& src);
    ServerGetFriendLeaderboardRequest(const PFPlayerDataManagementServerGetFriendLeaderboardRequest& src);
    ServerGetFriendLeaderboardRequest& operator=(const ServerGetFriendLeaderboardRequest&) = delete;
    ~ServerGetFriendLeaderboardRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_includeFacebookFriends;
    StdExtra::optional<bool> m_includeSteamFriends;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
    String m_xboxToken;
};

struct GetLeaderboardAroundUserRequest : public PFPlayerDataManagementGetLeaderboardAroundUserRequest, public BaseModel
{
    GetLeaderboardAroundUserRequest();
    GetLeaderboardAroundUserRequest(const GetLeaderboardAroundUserRequest& src);
    GetLeaderboardAroundUserRequest(GetLeaderboardAroundUserRequest&& src);
    GetLeaderboardAroundUserRequest(const PFPlayerDataManagementGetLeaderboardAroundUserRequest& src);
    GetLeaderboardAroundUserRequest& operator=(const GetLeaderboardAroundUserRequest&) = delete;
    ~GetLeaderboardAroundUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    StdExtra::optional<PlayerProfileViewConstraints> m_profileConstraints;
    String m_statisticName;
    StdExtra::optional<int32_t> m_version;
};

struct GetLeaderboardAroundUserResult : public PFPlayerDataManagementGetLeaderboardAroundUserResult, public BaseModel, public ApiResult
{
    GetLeaderboardAroundUserResult();
    GetLeaderboardAroundUserResult(const GetLeaderboardAroundUserResult& src);
    GetLeaderboardAroundUserResult(GetLeaderboardAroundUserResult&& src);
    GetLeaderboardAroundUserResult(const PFPlayerDataManagementGetLeaderboardAroundUserResult& src);
    GetLeaderboardAroundUserResult& operator=(const GetLeaderboardAroundUserResult&) = delete;
    ~GetLeaderboardAroundUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFPlayerDataManagementPlayerLeaderboardEntry, PlayerLeaderboardEntry> m_leaderboard;
    StdExtra::optional<time_t> m_nextReset;
};

struct ServerGetPlayerStatisticsRequest : public PFPlayerDataManagementServerGetPlayerStatisticsRequest, public BaseModel
{
    ServerGetPlayerStatisticsRequest();
    ServerGetPlayerStatisticsRequest(const ServerGetPlayerStatisticsRequest& src);
    ServerGetPlayerStatisticsRequest(ServerGetPlayerStatisticsRequest&& src);
    ServerGetPlayerStatisticsRequest(const PFPlayerDataManagementServerGetPlayerStatisticsRequest& src);
    ServerGetPlayerStatisticsRequest& operator=(const ServerGetPlayerStatisticsRequest&) = delete;
    ~ServerGetPlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_playFabId;
    PointerArrayModel<char, String> m_statisticNames;
    PointerArrayModel<PFPlayerDataManagementStatisticNameVersion, StatisticNameVersion> m_statisticNameVersions;
};

struct ServerGetPlayerStatisticsResult : public PFPlayerDataManagementServerGetPlayerStatisticsResult, public BaseModel, public ApiResult
{
    ServerGetPlayerStatisticsResult();
    ServerGetPlayerStatisticsResult(const ServerGetPlayerStatisticsResult& src);
    ServerGetPlayerStatisticsResult(ServerGetPlayerStatisticsResult&& src);
    ServerGetPlayerStatisticsResult(const PFPlayerDataManagementServerGetPlayerStatisticsResult& src);
    ServerGetPlayerStatisticsResult& operator=(const ServerGetPlayerStatisticsResult&) = delete;
    ~ServerGetPlayerStatisticsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_playFabId;
    PointerArrayModel<PFStatisticValue, StatisticValue> m_statistics;
};

struct ServerGetUserDataResult : public PFPlayerDataManagementServerGetUserDataResult, public BaseModel, public ApiResult
{
    ServerGetUserDataResult();
    ServerGetUserDataResult(const ServerGetUserDataResult& src);
    ServerGetUserDataResult(ServerGetUserDataResult&& src);
    ServerGetUserDataResult(const PFPlayerDataManagementServerGetUserDataResult& src);
    ServerGetUserDataResult& operator=(const ServerGetUserDataResult&) = delete;
    ~ServerGetUserDataResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFUserDataRecordDictionaryEntry, UserDataRecord> m_data;
    String m_playFabId;
};

struct ServerUpdatePlayerStatisticsRequest : public PFPlayerDataManagementServerUpdatePlayerStatisticsRequest, public BaseModel
{
    ServerUpdatePlayerStatisticsRequest();
    ServerUpdatePlayerStatisticsRequest(const ServerUpdatePlayerStatisticsRequest& src);
    ServerUpdatePlayerStatisticsRequest(ServerUpdatePlayerStatisticsRequest&& src);
    ServerUpdatePlayerStatisticsRequest(const PFPlayerDataManagementServerUpdatePlayerStatisticsRequest& src);
    ServerUpdatePlayerStatisticsRequest& operator=(const ServerUpdatePlayerStatisticsRequest&) = delete;
    ~ServerUpdatePlayerStatisticsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<bool> m_forceUpdate;
    String m_playFabId;
    PointerArrayModel<PFPlayerDataManagementStatisticUpdate, StatisticUpdate> m_statistics;
};

struct ServerUpdateUserDataRequest : public PFPlayerDataManagementServerUpdateUserDataRequest, public BaseModel
{
    ServerUpdateUserDataRequest();
    ServerUpdateUserDataRequest(const ServerUpdateUserDataRequest& src);
    ServerUpdateUserDataRequest(ServerUpdateUserDataRequest&& src);
    ServerUpdateUserDataRequest(const PFPlayerDataManagementServerUpdateUserDataRequest& src);
    ServerUpdateUserDataRequest& operator=(const ServerUpdateUserDataRequest&) = delete;
    ~ServerUpdateUserDataRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_data;
    PointerArrayModel<char, String> m_keysToRemove;
    StdExtra::optional<PFUserDataPermission> m_permission;
    String m_playFabId;
};

} // namespace PlayerDataManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementPlayerStatisticDefinition& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementCreatePlayerStatisticDefinitionResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetDataReportRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetDataReportResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetPlayerStatisticDefinitionsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementPlayerStatisticVersion& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetPlayerStatisticVersionsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementAdminGetUserDataResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementIncrementPlayerStatisticVersionRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementIncrementPlayerStatisticVersionResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementRefundPurchaseRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementRefundPurchaseResponse& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementResetUserStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementResolvePurchaseDisputeRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementResolvePurchaseDisputeResponse& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementAdminUpdateUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementUpdateUserDataResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementUpdateUserInternalDataRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetFriendLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementPlayerLeaderboardEntry& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundPlayerRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundPlayerResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementStatisticNameVersion& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetPlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetPlayerStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetUserDataResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementStatisticUpdate& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementClientUpdatePlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementClientUpdateUserDataRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetFriendLeaderboardRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundUserRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundUserResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetPlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetPlayerStatisticsResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetUserDataResult& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementServerUpdatePlayerStatisticsRequest& input);
template<> inline JsonValue ToJson<>(const PFPlayerDataManagementServerUpdateUserDataRequest& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
