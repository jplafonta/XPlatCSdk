#pragma once

#include <playfab/PlayFabEventsDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace EventsModels
{

// Events Classes
struct EventContents : public PlayFabEventsEventContents, public BaseModel
{
    EventContents();
    EventContents(const EventContents& src);
    EventContents(EventContents&& src);
    EventContents(const PlayFabEventsEventContents& src);
    EventContents& operator=(const EventContents&) = delete;
    ~EventContents() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
    String m_eventNamespace;
    String m_name;
    String m_originalId;
    StdExtra::optional<time_t> m_originalTimestamp;
    JsonObject m_payload;
    String m_payloadJSON;
};

struct WriteEventsRequest : public PlayFabEventsWriteEventsRequest, public BaseModel
{
    WriteEventsRequest();
    WriteEventsRequest(const WriteEventsRequest& src);
    WriteEventsRequest(WriteEventsRequest&& src);
    WriteEventsRequest(const PlayFabEventsWriteEventsRequest& src);
    WriteEventsRequest& operator=(const WriteEventsRequest&) = delete;
    ~WriteEventsRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PlayFabStringDictionaryEntry, String> m_customTags;
    PointerArrayModel<PlayFabEventsEventContents, EventContents> m_events;
};

struct WriteEventsResponse : public PlayFabEventsWriteEventsResponse, public BaseModel, public ApiResult
{
    WriteEventsResponse();
    WriteEventsResponse(const WriteEventsResponse& src);
    WriteEventsResponse(WriteEventsResponse&& src);
    WriteEventsResponse(const PlayFabEventsWriteEventsResponse& src);
    WriteEventsResponse& operator=(const WriteEventsResponse&) = delete;
    ~WriteEventsResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_assignedEventIds;
};

} // namespace EventsModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PlayFabEventsEventContents& input);
template<> inline JsonValue ToJson<>(const PlayFabEventsWriteEventsRequest& input);
template<> inline JsonValue ToJson<>(const PlayFabEventsWriteEventsResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
