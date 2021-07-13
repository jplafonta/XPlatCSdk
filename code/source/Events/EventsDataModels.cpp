#include "stdafx.h"
#include "EventsDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace EventsModels
{

EventContents::EventContents() :
    PlayFabEventsEventContents{}
{
}

EventContents::EventContents(const EventContents& src) :
    PlayFabEventsEventContents{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity },
    m_eventNamespace{ src.m_eventNamespace },
    m_name{ src.m_name },
    m_originalId{ src.m_originalId },
    m_originalTimestamp{ src.m_originalTimestamp },
    m_payload{ src.m_payload },
    m_payloadJSON{ src.m_payloadJSON }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    eventNamespace = m_eventNamespace.empty() ? nullptr : m_eventNamespace.data();
    name = m_name.empty() ? nullptr : m_name.data();
    originalId = m_originalId.empty() ? nullptr : m_originalId.data();
    originalTimestamp = m_originalTimestamp ? m_originalTimestamp.operator->() : nullptr;
    payload.stringValue = m_payload.StringValue();
    payloadJSON = m_payloadJSON.empty() ? nullptr : m_payloadJSON.data();
}

EventContents::EventContents(EventContents&& src) :
    PlayFabEventsEventContents{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) },
    m_eventNamespace{ std::move(src.m_eventNamespace) },
    m_name{ std::move(src.m_name) },
    m_originalId{ std::move(src.m_originalId) },
    m_originalTimestamp{ std::move(src.m_originalTimestamp) },
    m_payload{ std::move(src.m_payload) },
    m_payloadJSON{ std::move(src.m_payloadJSON) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
    eventNamespace = m_eventNamespace.empty() ? nullptr : m_eventNamespace.data();
    name = m_name.empty() ? nullptr : m_name.data();
    originalId = m_originalId.empty() ? nullptr : m_originalId.data();
    originalTimestamp = m_originalTimestamp ? m_originalTimestamp.operator->() : nullptr;
    payload.stringValue = m_payload.StringValue();
    payloadJSON = m_payloadJSON.empty() ? nullptr : m_payloadJSON.data();
}

EventContents::EventContents(const PlayFabEventsEventContents& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EventContents::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "EventNamespace", m_eventNamespace, eventNamespace);
    JsonUtils::ObjectGetMember(input, "Name", m_name, name);
    JsonUtils::ObjectGetMember(input, "OriginalId", m_originalId, originalId);
    JsonUtils::ObjectGetMember(input, "OriginalTimestamp", m_originalTimestamp, originalTimestamp, true);
    JsonUtils::ObjectGetMember(input, "Payload", m_payload, payload);
    JsonUtils::ObjectGetMember(input, "PayloadJSON", m_payloadJSON, payloadJSON);
}

JsonValue EventContents::ToJson() const
{
    return JsonUtils::ToJson<PlayFabEventsEventContents>(*this);
}

WriteEventsRequest::WriteEventsRequest() :
    PlayFabEventsWriteEventsRequest{}
{
}

WriteEventsRequest::WriteEventsRequest(const WriteEventsRequest& src) :
    PlayFabEventsWriteEventsRequest{ src },
    m_customTags{ src.m_customTags },
    m_events{ src.m_events }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    events = m_events.Empty() ? nullptr : m_events.Data();
}

WriteEventsRequest::WriteEventsRequest(WriteEventsRequest&& src) :
    PlayFabEventsWriteEventsRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_events{ std::move(src.m_events) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    events = m_events.Empty() ? nullptr : m_events.Data();
}

WriteEventsRequest::WriteEventsRequest(const PlayFabEventsWriteEventsRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteEventsRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Events", m_events, events, eventsCount);
}

JsonValue WriteEventsRequest::ToJson() const
{
    return JsonUtils::ToJson<PlayFabEventsWriteEventsRequest>(*this);
}

WriteEventsResponse::WriteEventsResponse() :
    PlayFabEventsWriteEventsResponse{}
{
}

WriteEventsResponse::WriteEventsResponse(const WriteEventsResponse& src) :
    PlayFabEventsWriteEventsResponse{ src },
    m_assignedEventIds{ src.m_assignedEventIds }
{
    assignedEventIds = m_assignedEventIds.Empty() ? nullptr : m_assignedEventIds.Data();
}

WriteEventsResponse::WriteEventsResponse(WriteEventsResponse&& src) :
    PlayFabEventsWriteEventsResponse{ src },
    m_assignedEventIds{ std::move(src.m_assignedEventIds) }
{
    assignedEventIds = m_assignedEventIds.Empty() ? nullptr : m_assignedEventIds.Data();
}

WriteEventsResponse::WriteEventsResponse(const PlayFabEventsWriteEventsResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void WriteEventsResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AssignedEventIds", m_assignedEventIds, assignedEventIds, assignedEventIdsCount);
}

JsonValue WriteEventsResponse::ToJson() const
{
    return JsonUtils::ToJson<PlayFabEventsWriteEventsResponse>(*this);
}

} // namespace EventsModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PlayFabEventsEventContents& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "EventNamespace", input.eventNamespace);
    JsonUtils::ObjectAddMember(output, "Name", input.name);
    JsonUtils::ObjectAddMember(output, "OriginalId", input.originalId);
    JsonUtils::ObjectAddMember(output, "OriginalTimestamp", input.originalTimestamp, true);
    JsonUtils::ObjectAddMember(output, "Payload", input.payload);
    JsonUtils::ObjectAddMember(output, "PayloadJSON", input.payloadJSON);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabEventsWriteEventsRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Events", input.events, input.eventsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PlayFabEventsWriteEventsResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AssignedEventIds", input.assignedEventIds, input.assignedEventIdsCount);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
