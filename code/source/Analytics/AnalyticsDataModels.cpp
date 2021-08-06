#include "stdafx.h"
#include "AnalyticsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace AnalyticsModels
{

DeviceInfoRequest::DeviceInfoRequest() :
    PFAnalyticsDeviceInfoRequest{}
{
}

DeviceInfoRequest::DeviceInfoRequest(const DeviceInfoRequest& src) :
    PFAnalyticsDeviceInfoRequest{ src },
    m_info{ src.m_info }
{
    info.stringValue = m_info.StringValue();
}

DeviceInfoRequest::DeviceInfoRequest(DeviceInfoRequest&& src) :
    PFAnalyticsDeviceInfoRequest{ src },
    m_info{ std::move(src.m_info) }
{
    info.stringValue = m_info.StringValue();
}

DeviceInfoRequest::DeviceInfoRequest(const PFAnalyticsDeviceInfoRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeviceInfoRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Info", m_info, info);
}

JsonValue DeviceInfoRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsDeviceInfoRequest>(*this);
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest() :
    PFAnalyticsWriteClientCharacterEventRequest{}
{
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest(const WriteClientCharacterEventRequest& src) :
    PFAnalyticsWriteClientCharacterEventRequest{ src },
    m_body{ src.m_body },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest(WriteClientCharacterEventRequest&& src) :
    PFAnalyticsWriteClientCharacterEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientCharacterEventRequest::WriteClientCharacterEventRequest(const PFAnalyticsWriteClientCharacterEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteClientCharacterEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteClientCharacterEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsWriteClientCharacterEventRequest>(*this);
}

WriteEventResponse::WriteEventResponse() :
    PFAnalyticsWriteEventResponse{}
{
}

WriteEventResponse::WriteEventResponse(const WriteEventResponse& src) :
    PFAnalyticsWriteEventResponse{ src },
    m_eventId{ src.m_eventId }
{
    eventId = m_eventId.empty() ? nullptr : m_eventId.data();
}

WriteEventResponse::WriteEventResponse(WriteEventResponse&& src) :
    PFAnalyticsWriteEventResponse{ src },
    m_eventId{ std::move(src.m_eventId) }
{
    eventId = m_eventId.empty() ? nullptr : m_eventId.data();
}

WriteEventResponse::WriteEventResponse(const PFAnalyticsWriteEventResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteEventResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EventId", m_eventId, eventId);
}

JsonValue WriteEventResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsWriteEventResponse>(*this);
}

size_t WriteEventResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAnalyticsWriteEventResponse) };
    serializedSize += (m_eventId.size() + 1);
    return serializedSize;
}

void WriteEventResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAnalyticsWriteEventResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAnalyticsWriteEventResponse);
    memcpy(stringBuffer, m_eventId.data(), m_eventId.size() + 1);
    serializedStruct->eventId = stringBuffer;
    stringBuffer += m_eventId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest() :
    PFAnalyticsWriteClientPlayerEventRequest{}
{
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest(const WriteClientPlayerEventRequest& src) :
    PFAnalyticsWriteClientPlayerEventRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest(WriteClientPlayerEventRequest&& src) :
    PFAnalyticsWriteClientPlayerEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteClientPlayerEventRequest::WriteClientPlayerEventRequest(const PFAnalyticsWriteClientPlayerEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteClientPlayerEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteClientPlayerEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsWriteClientPlayerEventRequest>(*this);
}

WriteTitleEventRequest::WriteTitleEventRequest() :
    PFAnalyticsWriteTitleEventRequest{}
{
}

WriteTitleEventRequest::WriteTitleEventRequest(const WriteTitleEventRequest& src) :
    PFAnalyticsWriteTitleEventRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteTitleEventRequest::WriteTitleEventRequest(WriteTitleEventRequest&& src) :
    PFAnalyticsWriteTitleEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteTitleEventRequest::WriteTitleEventRequest(const PFAnalyticsWriteTitleEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteTitleEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteTitleEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsWriteTitleEventRequest>(*this);
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest() :
    PFAnalyticsWriteServerCharacterEventRequest{}
{
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest(const WriteServerCharacterEventRequest& src) :
    PFAnalyticsWriteServerCharacterEventRequest{ src },
    m_body{ src.m_body },
    m_characterId{ src.m_characterId },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_playFabId{ src.m_playFabId },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest(WriteServerCharacterEventRequest&& src) :
    PFAnalyticsWriteServerCharacterEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_characterId{ std::move(src.m_characterId) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    characterId = m_characterId.empty() ? nullptr : m_characterId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerCharacterEventRequest::WriteServerCharacterEventRequest(const PFAnalyticsWriteServerCharacterEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteServerCharacterEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CharacterId", m_characterId, characterId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteServerCharacterEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsWriteServerCharacterEventRequest>(*this);
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest() :
    PFAnalyticsWriteServerPlayerEventRequest{}
{
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest(const WriteServerPlayerEventRequest& src) :
    PFAnalyticsWriteServerPlayerEventRequest{ src },
    m_body{ src.m_body },
    m_customTags{ src.m_customTags },
    m_eventName{ src.m_eventName },
    m_playFabId{ src.m_playFabId },
    m_timestamp{ src.m_timestamp }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest(WriteServerPlayerEventRequest&& src) :
    PFAnalyticsWriteServerPlayerEventRequest{ src },
    m_body{ std::move(src.m_body) },
    m_customTags{ std::move(src.m_customTags) },
    m_eventName{ std::move(src.m_eventName) },
    m_playFabId{ std::move(src.m_playFabId) },
    m_timestamp{ std::move(src.m_timestamp) }
{
    body.stringValue = m_body.StringValue();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    eventName = m_eventName.empty() ? nullptr : m_eventName.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
    timestamp = m_timestamp ? m_timestamp.operator->() : nullptr;
}

WriteServerPlayerEventRequest::WriteServerPlayerEventRequest(const PFAnalyticsWriteServerPlayerEventRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteServerPlayerEventRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Body", m_body, body);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EventName", m_eventName, eventName);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp, true);
}

JsonValue WriteServerPlayerEventRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsWriteServerPlayerEventRequest>(*this);
}

InsightsEmptyRequest::InsightsEmptyRequest() :
    PFAnalyticsInsightsEmptyRequest{}
{
}

InsightsEmptyRequest::InsightsEmptyRequest(const InsightsEmptyRequest& src) :
    PFAnalyticsInsightsEmptyRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsEmptyRequest::InsightsEmptyRequest(InsightsEmptyRequest&& src) :
    PFAnalyticsInsightsEmptyRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsEmptyRequest::InsightsEmptyRequest(const PFAnalyticsInsightsEmptyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsEmptyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
}

JsonValue InsightsEmptyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsInsightsEmptyRequest>(*this);
}

InsightsPerformanceLevel::InsightsPerformanceLevel() :
    PFAnalyticsInsightsPerformanceLevel{}
{
}


InsightsPerformanceLevel::InsightsPerformanceLevel(const PFAnalyticsInsightsPerformanceLevel& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsPerformanceLevel>(*this);
}

size_t InsightsPerformanceLevel::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAnalyticsInsightsPerformanceLevel) };
    return serializedSize;
}

void InsightsPerformanceLevel::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAnalyticsInsightsPerformanceLevel{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAnalyticsInsightsPerformanceLevel);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse() :
    PFAnalyticsInsightsGetLimitsResponse{}
{
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse(const InsightsGetLimitsResponse& src) :
    PFAnalyticsInsightsGetLimitsResponse{ src },
    m_subMeters{ src.m_subMeters }
{
    subMeters = m_subMeters.Empty() ? nullptr : m_subMeters.Data();
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse(InsightsGetLimitsResponse&& src) :
    PFAnalyticsInsightsGetLimitsResponse{ src },
    m_subMeters{ std::move(src.m_subMeters) }
{
    subMeters = m_subMeters.Empty() ? nullptr : m_subMeters.Data();
}

InsightsGetLimitsResponse::InsightsGetLimitsResponse(const PFAnalyticsInsightsGetLimitsResponse& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsGetLimitsResponse>(*this);
}

InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse() :
    PFAnalyticsInsightsGetOperationStatusResponse{}
{
}

InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse(const InsightsGetOperationStatusResponse& src) :
    PFAnalyticsInsightsGetOperationStatusResponse{ src },
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
    PFAnalyticsInsightsGetOperationStatusResponse{ src },
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

InsightsGetOperationStatusResponse::InsightsGetOperationStatusResponse(const PFAnalyticsInsightsGetOperationStatusResponse& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsGetOperationStatusResponse>(*this);
}

size_t InsightsGetOperationStatusResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAnalyticsInsightsGetOperationStatusResponse) };
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_operationId.size() + 1);
    serializedSize += (m_operationType.size() + 1);
    serializedSize += (m_status.size() + 1);
    return serializedSize;
}

void InsightsGetOperationStatusResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAnalyticsInsightsGetOperationStatusResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAnalyticsInsightsGetOperationStatusResponse);
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
    PFAnalyticsInsightsGetDetailsResponse{}
{
}

InsightsGetDetailsResponse::InsightsGetDetailsResponse(const InsightsGetDetailsResponse& src) :
    PFAnalyticsInsightsGetDetailsResponse{ src },
    m_errorMessage{ src.m_errorMessage },
    m_limits{ src.m_limits },
    m_pendingOperations{ src.m_pendingOperations }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    limits = m_limits ? m_limits.operator->() : nullptr;
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetDetailsResponse::InsightsGetDetailsResponse(InsightsGetDetailsResponse&& src) :
    PFAnalyticsInsightsGetDetailsResponse{ src },
    m_errorMessage{ std::move(src.m_errorMessage) },
    m_limits{ std::move(src.m_limits) },
    m_pendingOperations{ std::move(src.m_pendingOperations) }
{
    errorMessage = m_errorMessage.empty() ? nullptr : m_errorMessage.data();
    limits = m_limits ? m_limits.operator->() : nullptr;
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetDetailsResponse::InsightsGetDetailsResponse(const PFAnalyticsInsightsGetDetailsResponse& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsGetDetailsResponse>(*this);
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest() :
    PFAnalyticsInsightsGetOperationStatusRequest{}
{
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest(const InsightsGetOperationStatusRequest& src) :
    PFAnalyticsInsightsGetOperationStatusRequest{ src },
    m_customTags{ src.m_customTags },
    m_operationId{ src.m_operationId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest(InsightsGetOperationStatusRequest&& src) :
    PFAnalyticsInsightsGetOperationStatusRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_operationId{ std::move(src.m_operationId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
}

InsightsGetOperationStatusRequest::InsightsGetOperationStatusRequest(const PFAnalyticsInsightsGetOperationStatusRequest& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsGetOperationStatusRequest>(*this);
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest() :
    PFAnalyticsInsightsGetPendingOperationsRequest{}
{
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest(const InsightsGetPendingOperationsRequest& src) :
    PFAnalyticsInsightsGetPendingOperationsRequest{ src },
    m_customTags{ src.m_customTags },
    m_operationType{ src.m_operationType }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest(InsightsGetPendingOperationsRequest&& src) :
    PFAnalyticsInsightsGetPendingOperationsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_operationType{ std::move(src.m_operationType) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsGetPendingOperationsRequest::InsightsGetPendingOperationsRequest(const PFAnalyticsInsightsGetPendingOperationsRequest& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsGetPendingOperationsRequest>(*this);
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse() :
    PFAnalyticsInsightsGetPendingOperationsResponse{}
{
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse(const InsightsGetPendingOperationsResponse& src) :
    PFAnalyticsInsightsGetPendingOperationsResponse{ src },
    m_pendingOperations{ src.m_pendingOperations }
{
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse(InsightsGetPendingOperationsResponse&& src) :
    PFAnalyticsInsightsGetPendingOperationsResponse{ src },
    m_pendingOperations{ std::move(src.m_pendingOperations) }
{
    pendingOperations = m_pendingOperations.Empty() ? nullptr : m_pendingOperations.Data();
}

InsightsGetPendingOperationsResponse::InsightsGetPendingOperationsResponse(const PFAnalyticsInsightsGetPendingOperationsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void InsightsGetPendingOperationsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PendingOperations", m_pendingOperations, pendingOperations, pendingOperationsCount);
}

JsonValue InsightsGetPendingOperationsResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAnalyticsInsightsGetPendingOperationsResponse>(*this);
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest() :
    PFAnalyticsInsightsSetPerformanceRequest{}
{
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest(const InsightsSetPerformanceRequest& src) :
    PFAnalyticsInsightsSetPerformanceRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest(InsightsSetPerformanceRequest&& src) :
    PFAnalyticsInsightsSetPerformanceRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetPerformanceRequest::InsightsSetPerformanceRequest(const PFAnalyticsInsightsSetPerformanceRequest& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsSetPerformanceRequest>(*this);
}

InsightsOperationResponse::InsightsOperationResponse() :
    PFAnalyticsInsightsOperationResponse{}
{
}

InsightsOperationResponse::InsightsOperationResponse(const InsightsOperationResponse& src) :
    PFAnalyticsInsightsOperationResponse{ src },
    m_message{ src.m_message },
    m_operationId{ src.m_operationId },
    m_operationType{ src.m_operationType }
{
    message = m_message.empty() ? nullptr : m_message.data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsOperationResponse::InsightsOperationResponse(InsightsOperationResponse&& src) :
    PFAnalyticsInsightsOperationResponse{ src },
    m_message{ std::move(src.m_message) },
    m_operationId{ std::move(src.m_operationId) },
    m_operationType{ std::move(src.m_operationType) }
{
    message = m_message.empty() ? nullptr : m_message.data();
    operationId = m_operationId.empty() ? nullptr : m_operationId.data();
    operationType = m_operationType.empty() ? nullptr : m_operationType.data();
}

InsightsOperationResponse::InsightsOperationResponse(const PFAnalyticsInsightsOperationResponse& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsOperationResponse>(*this);
}

size_t InsightsOperationResponse::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAnalyticsInsightsOperationResponse) };
    serializedSize += (m_message.size() + 1);
    serializedSize += (m_operationId.size() + 1);
    serializedSize += (m_operationType.size() + 1);
    return serializedSize;
}

void InsightsOperationResponse::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAnalyticsInsightsOperationResponse{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAnalyticsInsightsOperationResponse);
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

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest() :
    PFAnalyticsInsightsSetStorageRetentionRequest{}
{
}

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest(const InsightsSetStorageRetentionRequest& src) :
    PFAnalyticsInsightsSetStorageRetentionRequest{ src },
    m_customTags{ src.m_customTags }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest(InsightsSetStorageRetentionRequest&& src) :
    PFAnalyticsInsightsSetStorageRetentionRequest{ src },
    m_customTags{ std::move(src.m_customTags) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
}

InsightsSetStorageRetentionRequest::InsightsSetStorageRetentionRequest(const PFAnalyticsInsightsSetStorageRetentionRequest& src)
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
    return JsonUtils::ToJson<PFAnalyticsInsightsSetStorageRetentionRequest>(*this);
}

} // namespace AnalyticsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFAnalyticsDeviceInfoRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Info", input.info);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsWriteClientCharacterEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsWriteEventResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EventId", input.eventId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsWriteClientPlayerEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsWriteTitleEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsWriteServerCharacterEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsWriteServerPlayerEventRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Body", input.body);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EventName", input.eventName);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsInsightsEmptyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsInsightsPerformanceLevel& input)
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
inline JsonValue ToJson<>(const PFAnalyticsInsightsGetLimitsResponse& input)
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
inline JsonValue ToJson<>(const PFAnalyticsInsightsGetOperationStatusResponse& input)
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
inline JsonValue ToJson<>(const PFAnalyticsInsightsGetDetailsResponse& input)
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
inline JsonValue ToJson<>(const PFAnalyticsInsightsGetOperationStatusRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsInsightsGetPendingOperationsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsInsightsGetPendingOperationsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PendingOperations", input.pendingOperations, input.pendingOperationsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsInsightsSetPerformanceRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "PerformanceLevel", input.performanceLevel);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsInsightsOperationResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Message", input.message);
    JsonUtils::ObjectAddMember(output, "OperationId", input.operationId);
    JsonUtils::ObjectAddMember(output, "OperationType", input.operationType);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAnalyticsInsightsSetStorageRetentionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "RetentionDays", input.retentionDays);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
