#include "stdafx.h"
#include "PlayerDataManagementDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace PlayerDataManagementModels
{

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest() :
    PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest{}
{
}

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest(const CreatePlayerStatisticDefinitionRequest& src) :
    PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ src.m_aggregationMethod },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName },
    m_versionChangeInterval{ src.m_versionChangeInterval }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest(CreatePlayerStatisticDefinitionRequest&& src) :
    PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ std::move(src.m_aggregationMethod) },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_versionChangeInterval{ std::move(src.m_versionChangeInterval) }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionRequest::CreatePlayerStatisticDefinitionRequest(const PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerStatisticDefinitionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
}

JsonValue CreatePlayerStatisticDefinitionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest>(*this);
}

PlayerStatisticDefinition::PlayerStatisticDefinition() :
    PFPlayerDataManagementPlayerStatisticDefinition{}
{
}

PlayerStatisticDefinition::PlayerStatisticDefinition(const PlayerStatisticDefinition& src) :
    PFPlayerDataManagementPlayerStatisticDefinition{ src },
    m_aggregationMethod{ src.m_aggregationMethod },
    m_statisticName{ src.m_statisticName },
    m_versionChangeInterval{ src.m_versionChangeInterval }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

PlayerStatisticDefinition::PlayerStatisticDefinition(PlayerStatisticDefinition&& src) :
    PFPlayerDataManagementPlayerStatisticDefinition{ src },
    m_aggregationMethod{ std::move(src.m_aggregationMethod) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_versionChangeInterval{ std::move(src.m_versionChangeInterval) }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

PlayerStatisticDefinition::PlayerStatisticDefinition(const PFPlayerDataManagementPlayerStatisticDefinition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatisticDefinition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
    JsonUtils::ObjectGetMember(input, "CurrentVersion", currentVersion);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
}

JsonValue PlayerStatisticDefinition::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementPlayerStatisticDefinition>(*this);
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult() :
    PFPlayerDataManagementCreatePlayerStatisticDefinitionResult{}
{
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult(const CreatePlayerStatisticDefinitionResult& src) :
    PFPlayerDataManagementCreatePlayerStatisticDefinitionResult{ src },
    m_statistic{ src.m_statistic }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult(CreatePlayerStatisticDefinitionResult&& src) :
    PFPlayerDataManagementCreatePlayerStatisticDefinitionResult{ src },
    m_statistic{ std::move(src.m_statistic) }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

CreatePlayerStatisticDefinitionResult::CreatePlayerStatisticDefinitionResult(const PFPlayerDataManagementCreatePlayerStatisticDefinitionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerStatisticDefinitionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistic", m_statistic, statistic);
}

JsonValue CreatePlayerStatisticDefinitionResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementCreatePlayerStatisticDefinitionResult>(*this);
}

GetDataReportRequest::GetDataReportRequest() :
    PFPlayerDataManagementGetDataReportRequest{}
{
}

GetDataReportRequest::GetDataReportRequest(const GetDataReportRequest& src) :
    PFPlayerDataManagementGetDataReportRequest{ src },
    m_reportName{ src.m_reportName }
{
    reportName = m_reportName.empty() ? nullptr : m_reportName.data();
}

GetDataReportRequest::GetDataReportRequest(GetDataReportRequest&& src) :
    PFPlayerDataManagementGetDataReportRequest{ src },
    m_reportName{ std::move(src.m_reportName) }
{
    reportName = m_reportName.empty() ? nullptr : m_reportName.data();
}

GetDataReportRequest::GetDataReportRequest(const PFPlayerDataManagementGetDataReportRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetDataReportRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Day", day);
    JsonUtils::ObjectGetMember(input, "Month", month);
    JsonUtils::ObjectGetMember(input, "ReportName", m_reportName, reportName);
    JsonUtils::ObjectGetMember(input, "Year", year);
}

JsonValue GetDataReportRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetDataReportRequest>(*this);
}

size_t GetDataReportRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementGetDataReportRequest) };
    serializedSize += (m_reportName.size() + 1);
    return serializedSize;
}

void GetDataReportRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementGetDataReportRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementGetDataReportRequest);
    memcpy(stringBuffer, m_reportName.data(), m_reportName.size() + 1);
    serializedStruct->reportName = stringBuffer;
    stringBuffer += m_reportName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetDataReportResult::GetDataReportResult() :
    PFPlayerDataManagementGetDataReportResult{}
{
}

GetDataReportResult::GetDataReportResult(const GetDataReportResult& src) :
    PFPlayerDataManagementGetDataReportResult{ src },
    m_downloadUrl{ src.m_downloadUrl }
{
    downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
}

GetDataReportResult::GetDataReportResult(GetDataReportResult&& src) :
    PFPlayerDataManagementGetDataReportResult{ src },
    m_downloadUrl{ std::move(src.m_downloadUrl) }
{
    downloadUrl = m_downloadUrl.empty() ? nullptr : m_downloadUrl.data();
}

GetDataReportResult::GetDataReportResult(const PFPlayerDataManagementGetDataReportResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetDataReportResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DownloadUrl", m_downloadUrl, downloadUrl);
}

JsonValue GetDataReportResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetDataReportResult>(*this);
}

size_t GetDataReportResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementGetDataReportResult) };
    serializedSize += (m_downloadUrl.size() + 1);
    return serializedSize;
}

void GetDataReportResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementGetDataReportResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementGetDataReportResult);
    memcpy(stringBuffer, m_downloadUrl.data(), m_downloadUrl.size() + 1);
    serializedStruct->downloadUrl = stringBuffer;
    stringBuffer += m_downloadUrl.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult() :
    PFPlayerDataManagementGetPlayerStatisticDefinitionsResult{}
{
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult(const GetPlayerStatisticDefinitionsResult& src) :
    PFPlayerDataManagementGetPlayerStatisticDefinitionsResult{ src },
    m_statistics{ src.m_statistics }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult(GetPlayerStatisticDefinitionsResult&& src) :
    PFPlayerDataManagementGetPlayerStatisticDefinitionsResult{ src },
    m_statistics{ std::move(src.m_statistics) }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

GetPlayerStatisticDefinitionsResult::GetPlayerStatisticDefinitionsResult(const PFPlayerDataManagementGetPlayerStatisticDefinitionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticDefinitionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue GetPlayerStatisticDefinitionsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetPlayerStatisticDefinitionsResult>(*this);
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest() :
    PFPlayerDataManagementGetPlayerStatisticVersionsRequest{}
{
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const GetPlayerStatisticVersionsRequest& src) :
    PFPlayerDataManagementGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(GetPlayerStatisticVersionsRequest&& src) :
    PFPlayerDataManagementGetPlayerStatisticVersionsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

GetPlayerStatisticVersionsRequest::GetPlayerStatisticVersionsRequest(const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticVersionsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue GetPlayerStatisticVersionsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetPlayerStatisticVersionsRequest>(*this);
}

PlayerStatisticVersion::PlayerStatisticVersion() :
    PFPlayerDataManagementPlayerStatisticVersion{}
{
}

PlayerStatisticVersion::PlayerStatisticVersion(const PlayerStatisticVersion& src) :
    PFPlayerDataManagementPlayerStatisticVersion{ src },
    m_archiveDownloadUrl{ src.m_archiveDownloadUrl },
    m_deactivationTime{ src.m_deactivationTime },
    m_scheduledActivationTime{ src.m_scheduledActivationTime },
    m_scheduledDeactivationTime{ src.m_scheduledDeactivationTime },
    m_statisticName{ src.m_statisticName },
    m_status{ src.m_status }
{
    archiveDownloadUrl = m_archiveDownloadUrl.empty() ? nullptr : m_archiveDownloadUrl.data();
    deactivationTime = m_deactivationTime ? m_deactivationTime.operator->() : nullptr;
    scheduledActivationTime = m_scheduledActivationTime ? m_scheduledActivationTime.operator->() : nullptr;
    scheduledDeactivationTime = m_scheduledDeactivationTime ? m_scheduledDeactivationTime.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    status = m_status ? m_status.operator->() : nullptr;
}

PlayerStatisticVersion::PlayerStatisticVersion(PlayerStatisticVersion&& src) :
    PFPlayerDataManagementPlayerStatisticVersion{ src },
    m_archiveDownloadUrl{ std::move(src.m_archiveDownloadUrl) },
    m_deactivationTime{ std::move(src.m_deactivationTime) },
    m_scheduledActivationTime{ std::move(src.m_scheduledActivationTime) },
    m_scheduledDeactivationTime{ std::move(src.m_scheduledDeactivationTime) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_status{ std::move(src.m_status) }
{
    archiveDownloadUrl = m_archiveDownloadUrl.empty() ? nullptr : m_archiveDownloadUrl.data();
    deactivationTime = m_deactivationTime ? m_deactivationTime.operator->() : nullptr;
    scheduledActivationTime = m_scheduledActivationTime ? m_scheduledActivationTime.operator->() : nullptr;
    scheduledDeactivationTime = m_scheduledDeactivationTime ? m_scheduledDeactivationTime.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    status = m_status ? m_status.operator->() : nullptr;
}

PlayerStatisticVersion::PlayerStatisticVersion(const PFPlayerDataManagementPlayerStatisticVersion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerStatisticVersion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActivationTime", activationTime, true);
    JsonUtils::ObjectGetMember(input, "ArchiveDownloadUrl", m_archiveDownloadUrl, archiveDownloadUrl);
    JsonUtils::ObjectGetMember(input, "DeactivationTime", m_deactivationTime, deactivationTime, true);
    JsonUtils::ObjectGetMember(input, "ScheduledActivationTime", m_scheduledActivationTime, scheduledActivationTime, true);
    JsonUtils::ObjectGetMember(input, "ScheduledDeactivationTime", m_scheduledDeactivationTime, scheduledDeactivationTime, true);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue PlayerStatisticVersion::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementPlayerStatisticVersion>(*this);
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult() :
    PFPlayerDataManagementGetPlayerStatisticVersionsResult{}
{
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const GetPlayerStatisticVersionsResult& src) :
    PFPlayerDataManagementGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ src.m_statisticVersions }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult&& src) :
    PFPlayerDataManagementGetPlayerStatisticVersionsResult{ src },
    m_statisticVersions{ std::move(src.m_statisticVersions) }
{
    statisticVersions = m_statisticVersions.Empty() ? nullptr : m_statisticVersions.Data();
}

GetPlayerStatisticVersionsResult::GetPlayerStatisticVersionsResult(const PFPlayerDataManagementGetPlayerStatisticVersionsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerStatisticVersionsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticVersions", m_statisticVersions, statisticVersions, statisticVersionsCount);
}

JsonValue GetPlayerStatisticVersionsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetPlayerStatisticVersionsResult>(*this);
}

GetUserDataRequest::GetUserDataRequest() :
    PFPlayerDataManagementGetUserDataRequest{}
{
}

GetUserDataRequest::GetUserDataRequest(const GetUserDataRequest& src) :
    PFPlayerDataManagementGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ src.m_ifChangedFromDataVersion },
    m_keys{ src.m_keys },
    m_playFabId{ src.m_playFabId }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(GetUserDataRequest&& src) :
    PFPlayerDataManagementGetUserDataRequest{ src },
    m_ifChangedFromDataVersion{ std::move(src.m_ifChangedFromDataVersion) },
    m_keys{ std::move(src.m_keys) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    ifChangedFromDataVersion = m_ifChangedFromDataVersion ? m_ifChangedFromDataVersion.operator->() : nullptr;
    keys = m_keys.Empty() ? nullptr : m_keys.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

GetUserDataRequest::GetUserDataRequest(const PFPlayerDataManagementGetUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IfChangedFromDataVersion", m_ifChangedFromDataVersion, ifChangedFromDataVersion);
    JsonUtils::ObjectGetMember(input, "Keys", m_keys, keys, keysCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue GetUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetUserDataRequest>(*this);
}

AdminGetUserDataResult::AdminGetUserDataResult() :
    PFPlayerDataManagementAdminGetUserDataResult{}
{
}

AdminGetUserDataResult::AdminGetUserDataResult(const AdminGetUserDataResult& src) :
    PFPlayerDataManagementAdminGetUserDataResult{ src },
    m_data{ src.m_data },
    m_playFabId{ src.m_playFabId }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminGetUserDataResult::AdminGetUserDataResult(AdminGetUserDataResult&& src) :
    PFPlayerDataManagementAdminGetUserDataResult{ src },
    m_data{ std::move(src.m_data) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminGetUserDataResult::AdminGetUserDataResult(const PFPlayerDataManagementAdminGetUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminGetUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AdminGetUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementAdminGetUserDataResult>(*this);
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest() :
    PFPlayerDataManagementIncrementPlayerStatisticVersionRequest{}
{
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest(const IncrementPlayerStatisticVersionRequest& src) :
    PFPlayerDataManagementIncrementPlayerStatisticVersionRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticName{ src.m_statisticName }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest(IncrementPlayerStatisticVersionRequest&& src) :
    PFPlayerDataManagementIncrementPlayerStatisticVersionRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticName{ std::move(src.m_statisticName) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

IncrementPlayerStatisticVersionRequest::IncrementPlayerStatisticVersionRequest(const PFPlayerDataManagementIncrementPlayerStatisticVersionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementPlayerStatisticVersionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
}

JsonValue IncrementPlayerStatisticVersionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementIncrementPlayerStatisticVersionRequest>(*this);
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult() :
    PFPlayerDataManagementIncrementPlayerStatisticVersionResult{}
{
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult(const IncrementPlayerStatisticVersionResult& src) :
    PFPlayerDataManagementIncrementPlayerStatisticVersionResult{ src },
    m_statisticVersion{ src.m_statisticVersion }
{
    statisticVersion = m_statisticVersion ? m_statisticVersion.operator->() : nullptr;
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult(IncrementPlayerStatisticVersionResult&& src) :
    PFPlayerDataManagementIncrementPlayerStatisticVersionResult{ src },
    m_statisticVersion{ std::move(src.m_statisticVersion) }
{
    statisticVersion = m_statisticVersion ? m_statisticVersion.operator->() : nullptr;
}

IncrementPlayerStatisticVersionResult::IncrementPlayerStatisticVersionResult(const PFPlayerDataManagementIncrementPlayerStatisticVersionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void IncrementPlayerStatisticVersionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticVersion", m_statisticVersion, statisticVersion);
}

JsonValue IncrementPlayerStatisticVersionResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementIncrementPlayerStatisticVersionResult>(*this);
}

RefundPurchaseRequest::RefundPurchaseRequest() :
    PFPlayerDataManagementRefundPurchaseRequest{}
{
}

RefundPurchaseRequest::RefundPurchaseRequest(const RefundPurchaseRequest& src) :
    PFPlayerDataManagementRefundPurchaseRequest{ src },
    m_orderId{ src.m_orderId },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

RefundPurchaseRequest::RefundPurchaseRequest(RefundPurchaseRequest&& src) :
    PFPlayerDataManagementRefundPurchaseRequest{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

RefundPurchaseRequest::RefundPurchaseRequest(const PFPlayerDataManagementRefundPurchaseRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RefundPurchaseRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue RefundPurchaseRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementRefundPurchaseRequest>(*this);
}

size_t RefundPurchaseRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementRefundPurchaseRequest) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_reason.size() + 1);
    return serializedSize;
}

void RefundPurchaseRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementRefundPurchaseRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementRefundPurchaseRequest);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_reason.data(), m_reason.size() + 1);
    serializedStruct->reason = stringBuffer;
    stringBuffer += m_reason.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

RefundPurchaseResponse::RefundPurchaseResponse() :
    PFPlayerDataManagementRefundPurchaseResponse{}
{
}

RefundPurchaseResponse::RefundPurchaseResponse(const RefundPurchaseResponse& src) :
    PFPlayerDataManagementRefundPurchaseResponse{ src },
    m_purchaseStatus{ src.m_purchaseStatus }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

RefundPurchaseResponse::RefundPurchaseResponse(RefundPurchaseResponse&& src) :
    PFPlayerDataManagementRefundPurchaseResponse{ src },
    m_purchaseStatus{ std::move(src.m_purchaseStatus) }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

RefundPurchaseResponse::RefundPurchaseResponse(const PFPlayerDataManagementRefundPurchaseResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RefundPurchaseResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PurchaseStatus", m_purchaseStatus, purchaseStatus);
}

JsonValue RefundPurchaseResponse::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementRefundPurchaseResponse>(*this);
}

size_t RefundPurchaseResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementRefundPurchaseResponse) };
    serializedSize += (m_purchaseStatus.size() + 1);
    return serializedSize;
}

void RefundPurchaseResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementRefundPurchaseResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementRefundPurchaseResponse);
    memcpy(stringBuffer, m_purchaseStatus.data(), m_purchaseStatus.size() + 1);
    serializedStruct->purchaseStatus = stringBuffer;
    stringBuffer += m_purchaseStatus.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest() :
    PFPlayerDataManagementResetUserStatisticsRequest{}
{
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest(const ResetUserStatisticsRequest& src) :
    PFPlayerDataManagementResetUserStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest(ResetUserStatisticsRequest&& src) :
    PFPlayerDataManagementResetUserStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ResetUserStatisticsRequest::ResetUserStatisticsRequest(const PFPlayerDataManagementResetUserStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResetUserStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ResetUserStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementResetUserStatisticsRequest>(*this);
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest() :
    PFPlayerDataManagementResolvePurchaseDisputeRequest{}
{
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest(const ResolvePurchaseDisputeRequest& src) :
    PFPlayerDataManagementResolvePurchaseDisputeRequest{ src },
    m_orderId{ src.m_orderId },
    m_playFabId{ src.m_playFabId },
    m_reason{ src.m_reason }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest(ResolvePurchaseDisputeRequest&& src) :
    PFPlayerDataManagementResolvePurchaseDisputeRequest{ src },
    m_orderId{ std::move(src.m_orderId) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_reason{ std::move(src.m_reason) }
{
    orderId = m_orderId.empty() ? nullptr : m_orderId.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    reason = m_reason.empty() ? nullptr : m_reason.data();
}

ResolvePurchaseDisputeRequest::ResolvePurchaseDisputeRequest(const PFPlayerDataManagementResolvePurchaseDisputeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResolvePurchaseDisputeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OrderId", m_orderId, orderId);
    JsonUtils::ObjectGetMember(input, "Outcome", outcome);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Reason", m_reason, reason);
}

JsonValue ResolvePurchaseDisputeRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementResolvePurchaseDisputeRequest>(*this);
}

size_t ResolvePurchaseDisputeRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementResolvePurchaseDisputeRequest) };
    serializedSize += (m_orderId.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    serializedSize += (m_reason.size() + 1);
    return serializedSize;
}

void ResolvePurchaseDisputeRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementResolvePurchaseDisputeRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementResolvePurchaseDisputeRequest);
    memcpy(stringBuffer, m_orderId.data(), m_orderId.size() + 1);
    serializedStruct->orderId = stringBuffer;
    stringBuffer += m_orderId.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    memcpy(stringBuffer, m_reason.data(), m_reason.size() + 1);
    serializedStruct->reason = stringBuffer;
    stringBuffer += m_reason.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse() :
    PFPlayerDataManagementResolvePurchaseDisputeResponse{}
{
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse(const ResolvePurchaseDisputeResponse& src) :
    PFPlayerDataManagementResolvePurchaseDisputeResponse{ src },
    m_purchaseStatus{ src.m_purchaseStatus }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse(ResolvePurchaseDisputeResponse&& src) :
    PFPlayerDataManagementResolvePurchaseDisputeResponse{ src },
    m_purchaseStatus{ std::move(src.m_purchaseStatus) }
{
    purchaseStatus = m_purchaseStatus.empty() ? nullptr : m_purchaseStatus.data();
}

ResolvePurchaseDisputeResponse::ResolvePurchaseDisputeResponse(const PFPlayerDataManagementResolvePurchaseDisputeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ResolvePurchaseDisputeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PurchaseStatus", m_purchaseStatus, purchaseStatus);
}

JsonValue ResolvePurchaseDisputeResponse::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementResolvePurchaseDisputeResponse>(*this);
}

size_t ResolvePurchaseDisputeResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementResolvePurchaseDisputeResponse) };
    serializedSize += (m_purchaseStatus.size() + 1);
    return serializedSize;
}

void ResolvePurchaseDisputeResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementResolvePurchaseDisputeResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementResolvePurchaseDisputeResponse);
    memcpy(stringBuffer, m_purchaseStatus.data(), m_purchaseStatus.size() + 1);
    serializedStruct->purchaseStatus = stringBuffer;
    stringBuffer += m_purchaseStatus.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest() :
    PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest{}
{
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest(const UpdatePlayerStatisticDefinitionRequest& src) :
    PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ src.m_aggregationMethod },
    m_statisticName{ src.m_statisticName },
    m_versionChangeInterval{ src.m_versionChangeInterval }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest(UpdatePlayerStatisticDefinitionRequest&& src) :
    PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest{ src },
    m_aggregationMethod{ std::move(src.m_aggregationMethod) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_versionChangeInterval{ std::move(src.m_versionChangeInterval) }
{
    aggregationMethod = m_aggregationMethod ? m_aggregationMethod.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    versionChangeInterval = m_versionChangeInterval ? m_versionChangeInterval.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionRequest::UpdatePlayerStatisticDefinitionRequest(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerStatisticDefinitionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AggregationMethod", m_aggregationMethod, aggregationMethod);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "VersionChangeInterval", m_versionChangeInterval, versionChangeInterval);
}

JsonValue UpdatePlayerStatisticDefinitionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest>(*this);
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult() :
    PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult{}
{
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult(const UpdatePlayerStatisticDefinitionResult& src) :
    PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult{ src },
    m_statistic{ src.m_statistic }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult(UpdatePlayerStatisticDefinitionResult&& src) :
    PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult{ src },
    m_statistic{ std::move(src.m_statistic) }
{
    statistic = m_statistic ? m_statistic.operator->() : nullptr;
}

UpdatePlayerStatisticDefinitionResult::UpdatePlayerStatisticDefinitionResult(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerStatisticDefinitionResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistic", m_statistic, statistic);
}

JsonValue UpdatePlayerStatisticDefinitionResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult>(*this);
}

AdminUpdateUserDataRequest::AdminUpdateUserDataRequest() :
    PFPlayerDataManagementAdminUpdateUserDataRequest{}
{
}

AdminUpdateUserDataRequest::AdminUpdateUserDataRequest(const AdminUpdateUserDataRequest& src) :
    PFPlayerDataManagementAdminUpdateUserDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminUpdateUserDataRequest::AdminUpdateUserDataRequest(AdminUpdateUserDataRequest&& src) :
    PFPlayerDataManagementAdminUpdateUserDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminUpdateUserDataRequest::AdminUpdateUserDataRequest(const PFPlayerDataManagementAdminUpdateUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminUpdateUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AdminUpdateUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementAdminUpdateUserDataRequest>(*this);
}

UpdateUserDataResult::UpdateUserDataResult() :
    PFPlayerDataManagementUpdateUserDataResult{}
{
}


UpdateUserDataResult::UpdateUserDataResult(const PFPlayerDataManagementUpdateUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue UpdateUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementUpdateUserDataResult>(*this);
}

size_t UpdateUserDataResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementUpdateUserDataResult) };
    return serializedSize;
}

void UpdateUserDataResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementUpdateUserDataResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementUpdateUserDataResult);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest() :
    PFPlayerDataManagementUpdateUserInternalDataRequest{}
{
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(const UpdateUserInternalDataRequest& src) :
    PFPlayerDataManagementUpdateUserInternalDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(UpdateUserInternalDataRequest&& src) :
    PFPlayerDataManagementUpdateUserInternalDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

UpdateUserInternalDataRequest::UpdateUserInternalDataRequest(const PFPlayerDataManagementUpdateUserInternalDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateUserInternalDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue UpdateUserInternalDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementUpdateUserInternalDataRequest>(*this);
}

ClientGetFriendLeaderboardRequest::ClientGetFriendLeaderboardRequest() :
    PFPlayerDataManagementClientGetFriendLeaderboardRequest{}
{
}

ClientGetFriendLeaderboardRequest::ClientGetFriendLeaderboardRequest(const ClientGetFriendLeaderboardRequest& src) :
    PFPlayerDataManagementClientGetFriendLeaderboardRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ClientGetFriendLeaderboardRequest::ClientGetFriendLeaderboardRequest(ClientGetFriendLeaderboardRequest&& src) :
    PFPlayerDataManagementClientGetFriendLeaderboardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ClientGetFriendLeaderboardRequest::ClientGetFriendLeaderboardRequest(const PFPlayerDataManagementClientGetFriendLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetFriendLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ClientGetFriendLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementClientGetFriendLeaderboardRequest>(*this);
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry() :
    PFPlayerDataManagementPlayerLeaderboardEntry{}
{
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(const PlayerLeaderboardEntry& src) :
    PFPlayerDataManagementPlayerLeaderboardEntry{ src },
    m_displayName{ src.m_displayName },
    m_playFabId{ src.m_playFabId },
    m_profile{ src.m_profile }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profile = m_profile ? m_profile.operator->() : nullptr;
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(PlayerLeaderboardEntry&& src) :
    PFPlayerDataManagementPlayerLeaderboardEntry{ src },
    m_displayName{ std::move(src.m_displayName) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profile{ std::move(src.m_profile) }
{
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profile = m_profile ? m_profile.operator->() : nullptr;
}

PlayerLeaderboardEntry::PlayerLeaderboardEntry(const PFPlayerDataManagementPlayerLeaderboardEntry& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PlayerLeaderboardEntry::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Position", position);
    JsonUtils::ObjectGetMember(input, "Profile", m_profile, profile);
    JsonUtils::ObjectGetMember(input, "StatValue", statValue);
}

JsonValue PlayerLeaderboardEntry::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementPlayerLeaderboardEntry>(*this);
}

GetLeaderboardResult::GetLeaderboardResult() :
    PFPlayerDataManagementGetLeaderboardResult{}
{
}

GetLeaderboardResult::GetLeaderboardResult(const GetLeaderboardResult& src) :
    PFPlayerDataManagementGetLeaderboardResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardResult::GetLeaderboardResult(GetLeaderboardResult&& src) :
    PFPlayerDataManagementGetLeaderboardResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardResult::GetLeaderboardResult(const PFPlayerDataManagementGetLeaderboardResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetLeaderboardResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetLeaderboardResult>(*this);
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest() :
    PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest{}
{
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest(const GetFriendLeaderboardAroundPlayerRequest& src) :
    PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest(GetFriendLeaderboardAroundPlayerRequest&& src) :
    PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

GetFriendLeaderboardAroundPlayerRequest::GetFriendLeaderboardAroundPlayerRequest(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendLeaderboardAroundPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue GetFriendLeaderboardAroundPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest>(*this);
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult() :
    PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult{}
{
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult(const GetFriendLeaderboardAroundPlayerResult& src) :
    PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult(GetFriendLeaderboardAroundPlayerResult&& src) :
    PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetFriendLeaderboardAroundPlayerResult::GetFriendLeaderboardAroundPlayerResult(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetFriendLeaderboardAroundPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetFriendLeaderboardAroundPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult>(*this);
}

GetLeaderboardRequest::GetLeaderboardRequest() :
    PFPlayerDataManagementGetLeaderboardRequest{}
{
}

GetLeaderboardRequest::GetLeaderboardRequest(const GetLeaderboardRequest& src) :
    PFPlayerDataManagementGetLeaderboardRequest{ src },
    m_customTags{ src.m_customTags },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardRequest::GetLeaderboardRequest(GetLeaderboardRequest&& src) :
    PFPlayerDataManagementGetLeaderboardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardRequest::GetLeaderboardRequest(const PFPlayerDataManagementGetLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetLeaderboardRequest>(*this);
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest() :
    PFPlayerDataManagementGetLeaderboardAroundPlayerRequest{}
{
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest(const GetLeaderboardAroundPlayerRequest& src) :
    PFPlayerDataManagementGetLeaderboardAroundPlayerRequest{ src },
    m_customTags{ src.m_customTags },
    m_maxResultsCount{ src.m_maxResultsCount },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest(GetLeaderboardAroundPlayerRequest&& src) :
    PFPlayerDataManagementGetLeaderboardAroundPlayerRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_maxResultsCount{ std::move(src.m_maxResultsCount) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    maxResultsCount = m_maxResultsCount ? m_maxResultsCount.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundPlayerRequest::GetLeaderboardAroundPlayerRequest(const PFPlayerDataManagementGetLeaderboardAroundPlayerRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundPlayerRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", m_maxResultsCount, maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetLeaderboardAroundPlayerRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetLeaderboardAroundPlayerRequest>(*this);
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult() :
    PFPlayerDataManagementGetLeaderboardAroundPlayerResult{}
{
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult(const GetLeaderboardAroundPlayerResult& src) :
    PFPlayerDataManagementGetLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult(GetLeaderboardAroundPlayerResult&& src) :
    PFPlayerDataManagementGetLeaderboardAroundPlayerResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundPlayerResult::GetLeaderboardAroundPlayerResult(const PFPlayerDataManagementGetLeaderboardAroundPlayerResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundPlayerResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetLeaderboardAroundPlayerResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetLeaderboardAroundPlayerResult>(*this);
}

StatisticNameVersion::StatisticNameVersion() :
    PFPlayerDataManagementStatisticNameVersion{}
{
}

StatisticNameVersion::StatisticNameVersion(const StatisticNameVersion& src) :
    PFPlayerDataManagementStatisticNameVersion{ src },
    m_statisticName{ src.m_statisticName }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticNameVersion::StatisticNameVersion(StatisticNameVersion&& src) :
    PFPlayerDataManagementStatisticNameVersion{ src },
    m_statisticName{ std::move(src.m_statisticName) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
}

StatisticNameVersion::StatisticNameVersion(const PFPlayerDataManagementStatisticNameVersion& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticNameVersion::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue StatisticNameVersion::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementStatisticNameVersion>(*this);
}

size_t StatisticNameVersion::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFPlayerDataManagementStatisticNameVersion) };
    serializedSize += (m_statisticName.size() + 1);
    return serializedSize;
}

void StatisticNameVersion::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFPlayerDataManagementStatisticNameVersion{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFPlayerDataManagementStatisticNameVersion);
    memcpy(stringBuffer, m_statisticName.data(), m_statisticName.size() + 1);
    serializedStruct->statisticName = stringBuffer;
    stringBuffer += m_statisticName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ClientGetPlayerStatisticsRequest::ClientGetPlayerStatisticsRequest() :
    PFPlayerDataManagementClientGetPlayerStatisticsRequest{}
{
}

ClientGetPlayerStatisticsRequest::ClientGetPlayerStatisticsRequest(const ClientGetPlayerStatisticsRequest& src) :
    PFPlayerDataManagementClientGetPlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statisticNames{ src.m_statisticNames },
    m_statisticNameVersions{ src.m_statisticNameVersions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

ClientGetPlayerStatisticsRequest::ClientGetPlayerStatisticsRequest(ClientGetPlayerStatisticsRequest&& src) :
    PFPlayerDataManagementClientGetPlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statisticNames{ std::move(src.m_statisticNames) },
    m_statisticNameVersions{ std::move(src.m_statisticNameVersions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

ClientGetPlayerStatisticsRequest::ClientGetPlayerStatisticsRequest(const PFPlayerDataManagementClientGetPlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetPlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "StatisticNames", m_statisticNames, statisticNames, statisticNamesCount);
    JsonUtils::ObjectGetMember(input, "StatisticNameVersions", m_statisticNameVersions, statisticNameVersions, statisticNameVersionsCount);
}

JsonValue ClientGetPlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementClientGetPlayerStatisticsRequest>(*this);
}

ClientGetPlayerStatisticsResult::ClientGetPlayerStatisticsResult() :
    PFPlayerDataManagementClientGetPlayerStatisticsResult{}
{
}

ClientGetPlayerStatisticsResult::ClientGetPlayerStatisticsResult(const ClientGetPlayerStatisticsResult& src) :
    PFPlayerDataManagementClientGetPlayerStatisticsResult{ src },
    m_statistics{ src.m_statistics }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ClientGetPlayerStatisticsResult::ClientGetPlayerStatisticsResult(ClientGetPlayerStatisticsResult&& src) :
    PFPlayerDataManagementClientGetPlayerStatisticsResult{ src },
    m_statistics{ std::move(src.m_statistics) }
{
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ClientGetPlayerStatisticsResult::ClientGetPlayerStatisticsResult(const PFPlayerDataManagementClientGetPlayerStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetPlayerStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue ClientGetPlayerStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementClientGetPlayerStatisticsResult>(*this);
}

ClientGetUserDataResult::ClientGetUserDataResult() :
    PFPlayerDataManagementClientGetUserDataResult{}
{
}

ClientGetUserDataResult::ClientGetUserDataResult(const ClientGetUserDataResult& src) :
    PFPlayerDataManagementClientGetUserDataResult{ src },
    m_data{ src.m_data }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

ClientGetUserDataResult::ClientGetUserDataResult(ClientGetUserDataResult&& src) :
    PFPlayerDataManagementClientGetUserDataResult{ src },
    m_data{ std::move(src.m_data) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
}

ClientGetUserDataResult::ClientGetUserDataResult(const PFPlayerDataManagementClientGetUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientGetUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
}

JsonValue ClientGetUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementClientGetUserDataResult>(*this);
}

StatisticUpdate::StatisticUpdate() :
    PFPlayerDataManagementStatisticUpdate{}
{
}

StatisticUpdate::StatisticUpdate(const StatisticUpdate& src) :
    PFPlayerDataManagementStatisticUpdate{ src },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticUpdate::StatisticUpdate(StatisticUpdate&& src) :
    PFPlayerDataManagementStatisticUpdate{ src },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

StatisticUpdate::StatisticUpdate(const PFPlayerDataManagementStatisticUpdate& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void StatisticUpdate::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Value", value);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue StatisticUpdate::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementStatisticUpdate>(*this);
}

ClientUpdatePlayerStatisticsRequest::ClientUpdatePlayerStatisticsRequest() :
    PFPlayerDataManagementClientUpdatePlayerStatisticsRequest{}
{
}

ClientUpdatePlayerStatisticsRequest::ClientUpdatePlayerStatisticsRequest(const ClientUpdatePlayerStatisticsRequest& src) :
    PFPlayerDataManagementClientUpdatePlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_statistics{ src.m_statistics }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ClientUpdatePlayerStatisticsRequest::ClientUpdatePlayerStatisticsRequest(ClientUpdatePlayerStatisticsRequest&& src) :
    PFPlayerDataManagementClientUpdatePlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_statistics{ std::move(src.m_statistics) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ClientUpdatePlayerStatisticsRequest::ClientUpdatePlayerStatisticsRequest(const PFPlayerDataManagementClientUpdatePlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUpdatePlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue ClientUpdatePlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementClientUpdatePlayerStatisticsRequest>(*this);
}

ClientUpdateUserDataRequest::ClientUpdateUserDataRequest() :
    PFPlayerDataManagementClientUpdateUserDataRequest{}
{
}

ClientUpdateUserDataRequest::ClientUpdateUserDataRequest(const ClientUpdateUserDataRequest& src) :
    PFPlayerDataManagementClientUpdateUserDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

ClientUpdateUserDataRequest::ClientUpdateUserDataRequest(ClientUpdateUserDataRequest&& src) :
    PFPlayerDataManagementClientUpdateUserDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
}

ClientUpdateUserDataRequest::ClientUpdateUserDataRequest(const PFPlayerDataManagementClientUpdateUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientUpdateUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
}

JsonValue ClientUpdateUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementClientUpdateUserDataRequest>(*this);
}

ServerGetFriendLeaderboardRequest::ServerGetFriendLeaderboardRequest() :
    PFPlayerDataManagementServerGetFriendLeaderboardRequest{}
{
}

ServerGetFriendLeaderboardRequest::ServerGetFriendLeaderboardRequest(const ServerGetFriendLeaderboardRequest& src) :
    PFPlayerDataManagementServerGetFriendLeaderboardRequest{ src },
    m_customTags{ src.m_customTags },
    m_includeFacebookFriends{ src.m_includeFacebookFriends },
    m_includeSteamFriends{ src.m_includeSteamFriends },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version },
    m_xboxToken{ src.m_xboxToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ServerGetFriendLeaderboardRequest::ServerGetFriendLeaderboardRequest(ServerGetFriendLeaderboardRequest&& src) :
    PFPlayerDataManagementServerGetFriendLeaderboardRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_includeFacebookFriends{ std::move(src.m_includeFacebookFriends) },
    m_includeSteamFriends{ std::move(src.m_includeSteamFriends) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    includeFacebookFriends = m_includeFacebookFriends ? m_includeFacebookFriends.operator->() : nullptr;
    includeSteamFriends = m_includeSteamFriends ? m_includeSteamFriends.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ServerGetFriendLeaderboardRequest::ServerGetFriendLeaderboardRequest(const PFPlayerDataManagementServerGetFriendLeaderboardRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetFriendLeaderboardRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "IncludeFacebookFriends", m_includeFacebookFriends, includeFacebookFriends);
    JsonUtils::ObjectGetMember(input, "IncludeSteamFriends", m_includeSteamFriends, includeSteamFriends);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StartPosition", startPosition);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ServerGetFriendLeaderboardRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementServerGetFriendLeaderboardRequest>(*this);
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest() :
    PFPlayerDataManagementGetLeaderboardAroundUserRequest{}
{
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest(const GetLeaderboardAroundUserRequest& src) :
    PFPlayerDataManagementGetLeaderboardAroundUserRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_profileConstraints{ src.m_profileConstraints },
    m_statisticName{ src.m_statisticName },
    m_version{ src.m_version }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest(GetLeaderboardAroundUserRequest&& src) :
    PFPlayerDataManagementGetLeaderboardAroundUserRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_profileConstraints{ std::move(src.m_profileConstraints) },
    m_statisticName{ std::move(src.m_statisticName) },
    m_version{ std::move(src.m_version) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    profileConstraints = m_profileConstraints ? m_profileConstraints.operator->() : nullptr;
    statisticName = m_statisticName.empty() ? nullptr : m_statisticName.data();
    version = m_version ? m_version.operator->() : nullptr;
}

GetLeaderboardAroundUserRequest::GetLeaderboardAroundUserRequest(const PFPlayerDataManagementGetLeaderboardAroundUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "MaxResultsCount", maxResultsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "ProfileConstraints", m_profileConstraints, profileConstraints);
    JsonUtils::ObjectGetMember(input, "StatisticName", m_statisticName, statisticName);
    JsonUtils::ObjectGetMember(input, "Version", m_version, version);
}

JsonValue GetLeaderboardAroundUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetLeaderboardAroundUserRequest>(*this);
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult() :
    PFPlayerDataManagementGetLeaderboardAroundUserResult{}
{
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult(const GetLeaderboardAroundUserResult& src) :
    PFPlayerDataManagementGetLeaderboardAroundUserResult{ src },
    m_leaderboard{ src.m_leaderboard },
    m_nextReset{ src.m_nextReset }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult(GetLeaderboardAroundUserResult&& src) :
    PFPlayerDataManagementGetLeaderboardAroundUserResult{ src },
    m_leaderboard{ std::move(src.m_leaderboard) },
    m_nextReset{ std::move(src.m_nextReset) }
{
    leaderboard = m_leaderboard.Empty() ? nullptr : m_leaderboard.Data();
    nextReset = m_nextReset ? m_nextReset.operator->() : nullptr;
}

GetLeaderboardAroundUserResult::GetLeaderboardAroundUserResult(const PFPlayerDataManagementGetLeaderboardAroundUserResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetLeaderboardAroundUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Leaderboard", m_leaderboard, leaderboard, leaderboardCount);
    JsonUtils::ObjectGetMember(input, "NextReset", m_nextReset, nextReset, true);
    JsonUtils::ObjectGetMember(input, "Version", version);
}

JsonValue GetLeaderboardAroundUserResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementGetLeaderboardAroundUserResult>(*this);
}

ServerGetPlayerStatisticsRequest::ServerGetPlayerStatisticsRequest() :
    PFPlayerDataManagementServerGetPlayerStatisticsRequest{}
{
}

ServerGetPlayerStatisticsRequest::ServerGetPlayerStatisticsRequest(const ServerGetPlayerStatisticsRequest& src) :
    PFPlayerDataManagementServerGetPlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_playFabId{ src.m_playFabId },
    m_statisticNames{ src.m_statisticNames },
    m_statisticNameVersions{ src.m_statisticNameVersions }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

ServerGetPlayerStatisticsRequest::ServerGetPlayerStatisticsRequest(ServerGetPlayerStatisticsRequest&& src) :
    PFPlayerDataManagementServerGetPlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statisticNames{ std::move(src.m_statisticNames) },
    m_statisticNameVersions{ std::move(src.m_statisticNameVersions) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statisticNames = m_statisticNames.Empty() ? nullptr : m_statisticNames.Data();
    statisticNameVersions = m_statisticNameVersions.Empty() ? nullptr : m_statisticNameVersions.Data();
}

ServerGetPlayerStatisticsRequest::ServerGetPlayerStatisticsRequest(const PFPlayerDataManagementServerGetPlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetPlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "StatisticNames", m_statisticNames, statisticNames, statisticNamesCount);
    JsonUtils::ObjectGetMember(input, "StatisticNameVersions", m_statisticNameVersions, statisticNameVersions, statisticNameVersionsCount);
}

JsonValue ServerGetPlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementServerGetPlayerStatisticsRequest>(*this);
}

ServerGetPlayerStatisticsResult::ServerGetPlayerStatisticsResult() :
    PFPlayerDataManagementServerGetPlayerStatisticsResult{}
{
}

ServerGetPlayerStatisticsResult::ServerGetPlayerStatisticsResult(const ServerGetPlayerStatisticsResult& src) :
    PFPlayerDataManagementServerGetPlayerStatisticsResult{ src },
    m_playFabId{ src.m_playFabId },
    m_statistics{ src.m_statistics }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ServerGetPlayerStatisticsResult::ServerGetPlayerStatisticsResult(ServerGetPlayerStatisticsResult&& src) :
    PFPlayerDataManagementServerGetPlayerStatisticsResult{ src },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statistics{ std::move(src.m_statistics) }
{
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ServerGetPlayerStatisticsResult::ServerGetPlayerStatisticsResult(const PFPlayerDataManagementServerGetPlayerStatisticsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetPlayerStatisticsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue ServerGetPlayerStatisticsResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementServerGetPlayerStatisticsResult>(*this);
}

ServerGetUserDataResult::ServerGetUserDataResult() :
    PFPlayerDataManagementServerGetUserDataResult{}
{
}

ServerGetUserDataResult::ServerGetUserDataResult(const ServerGetUserDataResult& src) :
    PFPlayerDataManagementServerGetUserDataResult{ src },
    m_data{ src.m_data },
    m_playFabId{ src.m_playFabId }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetUserDataResult::ServerGetUserDataResult(ServerGetUserDataResult&& src) :
    PFPlayerDataManagementServerGetUserDataResult{ src },
    m_data{ std::move(src.m_data) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    data = m_data.Empty() ? nullptr : m_data.Data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerGetUserDataResult::ServerGetUserDataResult(const PFPlayerDataManagementServerGetUserDataResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerGetUserDataResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "DataVersion", dataVersion);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerGetUserDataResult::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementServerGetUserDataResult>(*this);
}

ServerUpdatePlayerStatisticsRequest::ServerUpdatePlayerStatisticsRequest() :
    PFPlayerDataManagementServerUpdatePlayerStatisticsRequest{}
{
}

ServerUpdatePlayerStatisticsRequest::ServerUpdatePlayerStatisticsRequest(const ServerUpdatePlayerStatisticsRequest& src) :
    PFPlayerDataManagementServerUpdatePlayerStatisticsRequest{ src },
    m_customTags{ src.m_customTags },
    m_forceUpdate{ src.m_forceUpdate },
    m_playFabId{ src.m_playFabId },
    m_statistics{ src.m_statistics }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceUpdate = m_forceUpdate ? m_forceUpdate.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ServerUpdatePlayerStatisticsRequest::ServerUpdatePlayerStatisticsRequest(ServerUpdatePlayerStatisticsRequest&& src) :
    PFPlayerDataManagementServerUpdatePlayerStatisticsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_forceUpdate{ std::move(src.m_forceUpdate) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_statistics{ std::move(src.m_statistics) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    forceUpdate = m_forceUpdate ? m_forceUpdate.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
}

ServerUpdatePlayerStatisticsRequest::ServerUpdatePlayerStatisticsRequest(const PFPlayerDataManagementServerUpdatePlayerStatisticsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUpdatePlayerStatisticsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "ForceUpdate", m_forceUpdate, forceUpdate);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
}

JsonValue ServerUpdatePlayerStatisticsRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementServerUpdatePlayerStatisticsRequest>(*this);
}

ServerUpdateUserDataRequest::ServerUpdateUserDataRequest() :
    PFPlayerDataManagementServerUpdateUserDataRequest{}
{
}

ServerUpdateUserDataRequest::ServerUpdateUserDataRequest(const ServerUpdateUserDataRequest& src) :
    PFPlayerDataManagementServerUpdateUserDataRequest{ src },
    m_customTags{ src.m_customTags },
    m_data{ src.m_data },
    m_keysToRemove{ src.m_keysToRemove },
    m_permission{ src.m_permission },
    m_playFabId{ src.m_playFabId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateUserDataRequest::ServerUpdateUserDataRequest(ServerUpdateUserDataRequest&& src) :
    PFPlayerDataManagementServerUpdateUserDataRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_data{ std::move(src.m_data) },
    m_keysToRemove{ std::move(src.m_keysToRemove) },
    m_permission{ std::move(src.m_permission) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    data = m_data.Empty() ? nullptr : m_data.Data();
    keysToRemove = m_keysToRemove.Empty() ? nullptr : m_keysToRemove.Data();
    permission = m_permission ? m_permission.operator->() : nullptr;
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerUpdateUserDataRequest::ServerUpdateUserDataRequest(const PFPlayerDataManagementServerUpdateUserDataRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerUpdateUserDataRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Data", m_data, data, dataCount);
    JsonUtils::ObjectGetMember(input, "KeysToRemove", m_keysToRemove, keysToRemove, keysToRemoveCount);
    JsonUtils::ObjectGetMember(input, "Permission", m_permission, permission);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerUpdateUserDataRequest::ToJson() const
{
    return JsonUtils::ToJson<PFPlayerDataManagementServerUpdateUserDataRequest>(*this);
}

} // namespace PlayerDataManagementModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementCreatePlayerStatisticDefinitionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AggregationMethod", input.aggregationMethod);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "VersionChangeInterval", input.versionChangeInterval);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementPlayerStatisticDefinition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AggregationMethod", input.aggregationMethod);
    JsonUtils::ObjectAddMember(output, "CurrentVersion", input.currentVersion);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "VersionChangeInterval", input.versionChangeInterval);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementCreatePlayerStatisticDefinitionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistic", input.statistic);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetDataReportRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Day", input.day);
    JsonUtils::ObjectAddMember(output, "Month", input.month);
    JsonUtils::ObjectAddMember(output, "ReportName", input.reportName);
    JsonUtils::ObjectAddMember(output, "Year", input.year);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetDataReportResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DownloadUrl", input.downloadUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetPlayerStatisticDefinitionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetPlayerStatisticVersionsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementPlayerStatisticVersion& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActivationTime", input.activationTime, true);
    JsonUtils::ObjectAddMember(output, "ArchiveDownloadUrl", input.archiveDownloadUrl);
    JsonUtils::ObjectAddMember(output, "DeactivationTime", input.deactivationTime, true);
    JsonUtils::ObjectAddMember(output, "ScheduledActivationTime", input.scheduledActivationTime, true);
    JsonUtils::ObjectAddMember(output, "ScheduledDeactivationTime", input.scheduledDeactivationTime, true);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetPlayerStatisticVersionsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticVersions", input.statisticVersions, input.statisticVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IfChangedFromDataVersion", input.ifChangedFromDataVersion);
    JsonUtils::ObjectAddMember(output, "Keys", input.keys, input.keysCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementAdminGetUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementIncrementPlayerStatisticVersionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementIncrementPlayerStatisticVersionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticVersion", input.statisticVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementRefundPurchaseRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementRefundPurchaseResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PurchaseStatus", input.purchaseStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementResetUserStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementResolvePurchaseDisputeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OrderId", input.orderId);
    JsonUtils::ObjectAddMember(output, "Outcome", input.outcome);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Reason", input.reason);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementResolvePurchaseDisputeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PurchaseStatus", input.purchaseStatus);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AggregationMethod", input.aggregationMethod);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "VersionChangeInterval", input.versionChangeInterval);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementUpdatePlayerStatisticDefinitionResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistic", input.statistic);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementAdminUpdateUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementUpdateUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementUpdateUserInternalDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetFriendLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementPlayerLeaderboardEntry& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Position", input.position);
    JsonUtils::ObjectAddMember(output, "Profile", input.profile);
    JsonUtils::ObjectAddMember(output, "StatValue", input.statValue);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetFriendLeaderboardAroundPlayerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundPlayerRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundPlayerResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementStatisticNameVersion& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetPlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "StatisticNames", input.statisticNames, input.statisticNamesCount);
    JsonUtils::ObjectAddMember(output, "StatisticNameVersions", input.statisticNameVersions, input.statisticNameVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetPlayerStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementClientGetUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementStatisticUpdate& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Value", input.value);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementClientUpdatePlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementClientUpdateUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetFriendLeaderboardRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "IncludeFacebookFriends", input.includeFacebookFriends);
    JsonUtils::ObjectAddMember(output, "IncludeSteamFriends", input.includeSteamFriends);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StartPosition", input.startPosition);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "MaxResultsCount", input.maxResultsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "ProfileConstraints", input.profileConstraints);
    JsonUtils::ObjectAddMember(output, "StatisticName", input.statisticName);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementGetLeaderboardAroundUserResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Leaderboard", input.leaderboard, input.leaderboardCount);
    JsonUtils::ObjectAddMember(output, "NextReset", input.nextReset, true);
    JsonUtils::ObjectAddMember(output, "Version", input.version);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetPlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "StatisticNames", input.statisticNames, input.statisticNamesCount);
    JsonUtils::ObjectAddMember(output, "StatisticNameVersions", input.statisticNameVersions, input.statisticNameVersionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetPlayerStatisticsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementServerGetUserDataResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "DataVersion", input.dataVersion);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementServerUpdatePlayerStatisticsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "ForceUpdate", input.forceUpdate);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFPlayerDataManagementServerUpdateUserDataRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Data", input.data, input.dataCount);
    JsonUtils::ObjectAddMember(output, "KeysToRemove", input.keysToRemove, input.keysToRemoveCount);
    JsonUtils::ObjectAddMember(output, "Permission", input.permission);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
