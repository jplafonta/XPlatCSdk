#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabEventsDataModels_c.h>
#include <BaseModel.h>
#include <JsonUtils.h>

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabEventsEntityKey& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabEventsEventContents& input)
        {
            UNREFERENCED_PARAMETER(input);
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
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Events", input.events, input.eventsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabEventsWriteEventsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AssignedEventIds", input.assignedEventIds, input.assignedEventIdsCount);
            return output;
        }

    }

    namespace EventsModels
    {
        // Events Classes
        struct EntityKey : public PlayFabEventsEntityKey, public BaseModel
        {
            EntityKey() : PlayFabEventsEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabEventsEntityKey{ src },
                m_id{ src.m_id },
                m_type{ src.m_type }
            {

                id = m_id.empty() ? nullptr : m_id.data();
                type = m_type.empty() ? nullptr : m_type.data();
            }

            ~EntityKey() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabEventsEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct EventContents : public PlayFabEventsEventContents, public BaseModel
        {
            EventContents() : PlayFabEventsEventContents{}
            {
            }

            EventContents(const EventContents& src) :
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

            ~EventContents() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "EventNamespace", m_eventNamespace, eventNamespace);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "OriginalId", m_originalId, originalId);
                JsonUtils:: ObjectGetMember(input, "OriginalTimestamp", m_originalTimestamp, originalTimestamp, true);
                JsonUtils:: ObjectGetMember(input, "Payload", m_payload, payload);
                JsonUtils:: ObjectGetMember(input, "PayloadJSON", m_payloadJSON, payloadJSON);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabEventsEventContents>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            String m_eventNamespace;
            String m_name;
            String m_originalId;
            StdExtra::optional<time_t> m_originalTimestamp;
            JsonObject m_payload;
            String m_payloadJSON;
        };

        struct WriteEventsRequest : public PlayFabEventsWriteEventsRequest, public BaseRequest
        {
            WriteEventsRequest() : PlayFabEventsWriteEventsRequest{}
            {
            }

            WriteEventsRequest(const WriteEventsRequest& src) :
                PlayFabEventsWriteEventsRequest{ src },
                m_customTags{ src.m_customTags },
                m_events{ src.m_events }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                events = m_events.Empty() ? nullptr : m_events.Data();
            }

            ~WriteEventsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Events", m_events, events, eventsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabEventsWriteEventsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabEventsEventContents, EventContents> m_events;
        };

        struct WriteEventsResponse : public PlayFabEventsWriteEventsResponse, public BaseResult
        {
            WriteEventsResponse() : PlayFabEventsWriteEventsResponse{}
            {
            }

            WriteEventsResponse(const WriteEventsResponse& src) :
                PlayFabEventsWriteEventsResponse{ src },
                m_assignedEventIds{ src.m_assignedEventIds }
            {

                assignedEventIds = m_assignedEventIds.Empty() ? nullptr : m_assignedEventIds.Data();
            }

            ~WriteEventsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AssignedEventIds", m_assignedEventIds, assignedEventIds, assignedEventIdsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabEventsWriteEventsResponse>(*this);
            }

        private:
            PointerArray<const char, String> m_assignedEventIds;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
}

#endif
