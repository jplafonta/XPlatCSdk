#include "stdafx.h"
#include "InsightsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace InsightsModels
{

InsightsEmptyRequest::InsightsEmptyRequest() :
    PlayFabInsightsInsightsEmptyRequest{}
{
}

InsightsEmptyRequest::InsightsEmptyRequest(const InsightsEmptyRequest& src) :
    PlayFabInsightsInsightsEmptyRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsEmptyRequest::InsightsEmptyRequest(InsightsEmptyRequest&& src) :
    PlayFabInsightsInsightsEmptyRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsEmptyRequest::InsightsEmptyRequest(const PlayFabInsightsInsightsEmptyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsEmptyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue InsightsEmptyRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsEmptyRequest>(*this);
}

InsightsPerformanceLevel::InsightsPerformanceLevel() :
    PlayFabInsightsInsightsPerformanceLevel{}
{
}


InsightsPerformanceLevel::InsightsPerformanceLevel(const PlayFabInsightsInsightsPerformanceLevel& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsPerformanceLevel::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ActiveEventExports", activeEventExports);
    JsonUtils::ObjectGetMember(input, "CacheSizeMB", cacheSizeMB);
    JsonUtils::ObjectGetMember(input, "Concurrency", concurrency);
    JsonUtils::ObjectGetMember(input, "CreditsPerMinute", creditsPerMinute);
    JsonUtils::ObjectGetMember(input, "EventsPerSecond", eventsPerSecond);
    JsonUtils::ObjectGetMember(input, "Level", level);
    JsonUtils::ObjectGetMember(input, "MaxMemoryPerQueryMB", maxMemoryPerQueryMB);
    JsonUtils::ObjectGetMember(input, "VirtualCpuCores", virtualCpuCores);
}

JsonValue InsightsPerformanceLevel::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsPerformanceLevel>(*this);
}

size_t InsightsPerformanceLevel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabInsightsInsightsPerformanceLevel) };
    return serializedSize;
}

void InsightsPerformanceLevel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabInsightsInsightsPerformanceLevel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabInsightsInsightsPerformanceLevel);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse() :
    PlayFabInsightsInsightsGetLimitsResponse{}
{
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse(const InsightsGetLimitsResponse& src) :
    PlayFabInsightsInsightsGetLimitsResponse{ src },
    m_subMeters{ src.m_subMeters }
{
    subMeters = m_subMeters.Empty() ? nullptr : m_subMeters.Data();
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse(InsightsGetLimitsResponse&& src) :
    PlayFabInsightsInsightsGetLimitsResponse{ src },
    m_subMeters{ std::move(src.m_subMeters) }
{
    subMeters = m_subMeters.Empty() ? nullptr : m_subMeters.Data();
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse(const PlayFabInsightsInsightsGetLimitsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsGetLimitsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DefaultPerformanceLevel", defaultPerformanceLevel);
    JsonUtils::ObjectGetMember(input, "DefaultStorageRetentionDays", defaultStorageRetentionDays);
    JsonUtils::ObjectGetMember(input, "StorageMaxRetentionDays", storageMaxRetentionDays);
    JsonUtils::ObjectGetMember(input, "StorageMinRetentionDays", storageMinRetentionDays);
    JsonUtils::ObjectGetMember(input, "SubMeters", m_subMeters, subMeters, subMetersCount);
}

JsonValue InsightsGetLimitsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsGetLimitsResponse>(*this);
}

InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse() :
    PlayFabInsightsInsightsGetOperationStatusResponse{}
{
}

InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse(const InsightsGetOperationStatusResponse& src) :
    PlayFabInsightsInsightsGetOperationStatusResponse{ src },
    m_message{ src.m_message },
    m_operationId{ src.m_operationId },
    m_operationType{ src.m_operationType },
    m_status{ src.m_status }
{
    message = m_message.empty() ? nullptr : m_message.data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
    status = m_status.empty() ? nullptr : m_status.data();
}

InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse(InsightsGetOperationStatusResponse&& src) :
    PlayFabInsightsInsightsGetOperationStatusResponse{ src },
    m_message{ std::move(src.m_message) },
    m_operationId{ std::move(src.m_operationId) },
    m_operationType{ std::move(src.m_operationType) },
    m_status{ std::move(src.m_status) }
{
    message = m_message.empty() ? nullptr : m_message.data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
    status = m_status.empty() ? nullptr : m_status.data();
}

InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse(const PlayFabInsightsInsightsGetOperationStatusResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsGetOperationStatusResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "OperationCompletedTime", operationCompletedTime, true);
    JsonUtils::ObjectGetMember(input, "OperationId", m_operationId, operationId);
    JsonUtils::ObjectGetMember(input, "OperationLastUpdated", operationLastUpdated, true);
    JsonUtils::ObjectGetMember(input, "OperationStartedTime", operationStartedTime, true);
    JsonUtils::ObjectGetMember(input, "OperationType", m_operationType, operationType);
    JsonUtils::ObjectGetMember(input, "OperationValue", operationValue);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
}

JsonValue InsightsGetOperationStatusResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsGetOperationStatusResponse>(*this);
}

size_t InsightsGetOperationStatusResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabInsightsInsightsGetOperationStatusResponse) };
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_operationId.size() + 1);
    serializedSize += (m_operationType.size() + 1);
    serializedSize += (m_status.size() + 1);
    return serializedSize;
}

void InsightsGetOperationStatusResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabInsightsInsightsGetOperationStatusResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabInsightsInsightsGetOperationStatusResponse);
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_operationId.data(), m_operationId.size() + 1);
    serializedStruct->operationId = stringBuffer;
    stringBuffer += m_operationId.size() + 1;
    memcpy(stringBuffer, m_operationType.data(), m_operationType.size() + 1);
    serializedStruct->operationType = stringBuffer;
    stringBuffer += m_operationType.size() + 1;
    memcpy(stringBuffer, m_status.data(), m_status.size() + 1);
    serializedStruct->status = stringBuffer;
    stringBuffer += m_status.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

InsightsGetDetailsResponse::InsightsGetDetailsResponse() :
    PlayFabInsightsInsightsGetDetailsResponse{}
{
}

InsightsGetDetailsResponse::InsightsGetDetailsResponse(const InsightsGetDetailsResponse& src) :
    PlayFabInsightsInsightsGetDetailsResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_limits{ src.m_limits },
    m_pendingOperations{ src.m_pendingOperations }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    limits = m_limits ? m_limits.operator->() : nullptr;
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetDetailsResponse::InsightsGetDetailsResponse(InsightsGetDetailsResponse&& src) :
    PlayFabInsightsInsightsGetDetailsResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_limits{ std::move(src.m_limits) },
    m_pendingOperations{ std::move(src.m_pendingOperations) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    limits = m_limits ? m_limits.operator->() : nullptr;
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetDetailsResponse::InsightsGetDetailsResponse(const PlayFabInsightsInsightsGetDetailsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsGetDetailsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "DataUsageMb", dataUsageMb);
    JsonUtils::ObjectGetMember(input, "ErrorMessage", m_errorMessage, errorMessage);
    JsonUtils::ObjectGetMember(input, "Limits", m_limits, limits);
    JsonUtils::ObjectGetMember(input, "PendingOperations", m_pendingOperations, pendingOperations, pendingOperationsCount);
    JsonUtils::ObjectGetMember(input, "PerformanceLevel", performanceLevel);
    JsonUtils::ObjectGetMember(input, "RetentionDays", retentionDays);
}

JsonValue InsightsGetDetailsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsGetDetailsResponse>(*this);
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest() :
    PlayFabInsightsInsightsGetOperationStatusRequest{}
{
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest(const InsightsGetOperationStatusRequest& src) :
    PlayFabInsightsInsightsGetOperationStatusRequest{ src },
    m_customTags{ src.m_customTags },
    m_operationId{ src.m_operationId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest(InsightsGetOperationStatusRequest&& src) :
    PlayFabInsightsInsightsGetOperationStatusRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_operationId{ std::move(src.m_operationId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest(const PlayFabInsightsInsightsGetOperationStatusRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsGetOperationStatusRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "OperationId", m_operationId, operationId);
}

JsonValue InsightsGetOperationStatusRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsGetOperationStatusRequest>(*this);
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest() :
    PlayFabInsightsInsightsGetPendingOperationsRequest{}
{
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest(const InsightsGetPendingOperationsRequest& src) :
    PlayFabInsightsInsightsGetPendingOperationsRequest{ src },
    m_customTags{ src.m_customTags },
    m_operationType{ src.m_operationType }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest(InsightsGetPendingOperationsRequest&& src) :
    PlayFabInsightsInsightsGetPendingOperationsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_operationType{ std::move(src.m_operationType) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest(const PlayFabInsightsInsightsGetPendingOperationsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsGetPendingOperationsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "OperationType", m_operationType, operationType);
}

JsonValue InsightsGetPendingOperationsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsGetPendingOperationsRequest>(*this);
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse() :
    PlayFabInsightsInsightsGetPendingOperationsResponse{}
{
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse(const InsightsGetPendingOperationsResponse& src) :
    PlayFabInsightsInsightsGetPendingOperationsResponse{ src },
    m_pendingOperations{ src.m_pendingOperations }
{
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse(InsightsGetPendingOperationsResponse&& src) :
    PlayFabInsightsInsightsGetPendingOperationsResponse{ src },
    m_pendingOperations{ std::move(src.m_pendingOperations) }
{
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse(const PlayFabInsightsInsightsGetPendingOperationsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsGetPendingOperationsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PendingOperations", m_pendingOperations, pendingOperations, pendingOperationsCount);
}

JsonValue InsightsGetPendingOperationsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsGetPendingOperationsResponse>(*this);
}

InsightsOperationResponse::InsightsOperationResponse() :
    PlayFabInsightsInsightsOperationResponse{}
{
}

InsightsOperationResponse::InsightsOperationResponse(const InsightsOperationResponse& src) :
    PlayFabInsightsInsightsOperationResponse{ src },
    m_message{ src.m_message },
    m_operationId{ src.m_operationId },
    m_operationType{ src.m_operationType }
{
    message = m_message.empty() ? nullptr : m_message.data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsOperationResponse::InsightsOperationResponse(InsightsOperationResponse&& src) :
    PlayFabInsightsInsightsOperationResponse{ src },
    m_message{ std::move(src.m_message) },
    m_operationId{ std::move(src.m_operationId) },
    m_operationType{ std::move(src.m_operationType) }
{
    message = m_message.empty() ? nullptr : m_message.data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsOperationResponse::InsightsOperationResponse(const PlayFabInsightsInsightsOperationResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsOperationResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Message", m_message, message);
    JsonUtils::ObjectGetMember(input, "OperationId", m_operationId, operationId);
    JsonUtils::ObjectGetMember(input, "OperationType", m_operationType, operationType);
}

JsonValue InsightsOperationResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsOperationResponse>(*this);
}

size_t InsightsOperationResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PlayFabInsightsInsightsOperationResponse) };
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_operationId.size() + 1);
    serializedSize += (m_operationType.size() + 1);
    return serializedSize;
}

void InsightsOperationResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PlayFabInsightsInsightsOperationResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PlayFabInsightsInsightsOperationResponse);
    memcpy(stringBuffer, m_message.data(), m_message.size() + 1);
    serializedStruct->message = stringBuffer;
    stringBuffer += m_message.size() + 1;
    memcpy(stringBuffer, m_operationId.data(), m_operationId.size() + 1);
    serializedStruct->operationId = stringBuffer;
    stringBuffer += m_operationId.size() + 1;
    memcpy(stringBuffer, m_operationType.data(), m_operationType.size() + 1);
    serializedStruct->operationType = stringBuffer;
    stringBuffer += m_operationType.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest() :
    PlayFabInsightsInsightsSetPerformanceRequest{}
{
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest(const InsightsSetPerformanceRequest& src) :
    PlayFabInsightsInsightsSetPerformanceRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest(InsightsSetPerformanceRequest&& src) :
    PlayFabInsightsInsightsSetPerformanceRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest(const PlayFabInsightsInsightsSetPerformanceRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsSetPerformanceRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "PerformanceLevel", performanceLevel);
}

JsonValue InsightsSetPerformanceRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsSetPerformanceRequest>(*this);
}

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest() :
    PlayFabInsightsInsightsSetStorageRetentionRequest{}
{
}

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest(const InsightsSetStorageRetentionRequest& src) :
    PlayFabInsightsInsightsSetStorageRetentionRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest(InsightsSetStorageRetentionRequest&& src) :
    PlayFabInsightsInsightsSetStorageRetentionRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest(const PlayFabInsightsInsightsSetStorageRetentionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsSetStorageRetentionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "RetentionDays", retentionDays);
}

JsonValue InsightsSetStorageRetentionRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabInsightsInsightsSetStorageRetentionRequest>(*this);
}

} // namespace InsightsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsEmptyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsPerformanceLevel& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ActiveEventExports", input.activeEventExports);
    JsonUtils::ObjectAddMember(output, "CacheSizeMB", input.cacheSizeMB);
    JsonUtils::ObjectAddMember(output, "Concurrency", input.concurrency);
    JsonUtils::ObjectAddMember(output, "CreditsPerMinute", input.creditsPerMinute);
    JsonUtils::ObjectAddMember(output, "EventsPerSecond", input.eventsPerSecond);
    JsonUtils::ObjectAddMember(output, "Level", input.level);
    JsonUtils::ObjectAddMember(output, "MaxMemoryPerQueryMB", input.maxMemoryPerQueryMB);
    JsonUtils::ObjectAddMember(output, "VirtualCpuCores", input.virtualCpuCores);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetLimitsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DefaultPerformanceLevel", input.defaultPerformanceLevel);
    JsonUtils::ObjectAddMember(output, "DefaultStorageRetentionDays", input.defaultStorageRetentionDays);
    JsonUtils::ObjectAddMember(output, "StorageMaxRetentionDays", input.storageMaxRetentionDays);
    JsonUtils::ObjectAddMember(output, "StorageMinRetentionDays", input.storageMinRetentionDays);
    JsonUtils::ObjectAddMember(output, "SubMeters", input.subMeters, input.subMetersCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetOperationStatusResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "OperationCompletedTime", input.operationCompletedTime, true);
    JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
    JsonUtils::ObjectAddMember(output, "OperationLastUpdated", input.operationLastUpdated, true);
    JsonUtils::ObjectAddMember(output, "OperationStartedTime", input.operationStartedTime, true);
    JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
    JsonUtils::ObjectAddMember(output, "OperationValue", input.operationValue);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetDetailsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "DataUsageMb", input.dataUsageMb);
    JsonUtils::ObjectAddMember(output, "ErrorMessage", input.errorMessage);
    JsonUtils::ObjectAddMember(output, "Limits", input.limits);
    JsonUtils::ObjectAddMember(output, "PendingOperations", input.pendingOperations, input.pendingOperationsCount);
    JsonUtils::ObjectAddMember(output, "PerformanceLevel", input.performanceLevel);
    JsonUtils::ObjectAddMember(output, "RetentionDays", input.retentionDays);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetOperationStatusRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetPendingOperationsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsGetPendingOperationsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PendingOperations", input.pendingOperations, input.pendingOperationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsOperationResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
    JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsSetPerformanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PerformanceLevel", input.performanceLevel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabInsightsInsightsSetStorageRetentionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "RetentionDays", input.retentionDays);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
