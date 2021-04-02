#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabAuthenticationDataModels_c.h>
#include "BaseModel.h"
#include "JsonUtils.h"

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabAuthenticationEntityKey& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAuthenticationEntityLineage& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CharacterId", input.characterId);
            JsonUtils::ObjectAddMember(output, "GroupId", input.groupId);
            JsonUtils::ObjectAddMember(output, "MasterPlayerAccountId", input.masterPlayerAccountId);
            JsonUtils::ObjectAddMember(output, "NamespaceId", input.namespaceId);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "TitlePlayerAccountId", input.titlePlayerAccountId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAuthenticationGetEntityTokenRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAuthenticationGetEntityTokenResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
            JsonUtils::ObjectAddMember(output, "TokenExpiration", input.tokenExpiration, true);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAuthenticationValidateEntityTokenRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabAuthenticationValidateEntityTokenResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "IdentifiedDeviceType", input.identifiedDeviceType);
            JsonUtils::ObjectAddMember(output, "IdentityProvider", input.identityProvider);
            JsonUtils::ObjectAddMember(output, "Lineage", input.lineage);
            return output;
        }

    }

    namespace AuthenticationModels
    {
        // Authentication Classes
        struct EntityKey : public PlayFabAuthenticationEntityKey, public BaseModel
        {
            EntityKey() : PlayFabAuthenticationEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabAuthenticationEntityKey{ src },
                m_id{ src.m_id },
                m_type{ src.m_type }
            {
                id = m_id.empty() ? nullptr : m_id.data();
                type = m_type.empty() ? nullptr : m_type.data();
            }

            ~EntityKey() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Id", m_id, id);
                JsonUtils:: ObjectGetMember(input, "Type", m_type, type);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAuthenticationEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct EntityLineage : public PlayFabAuthenticationEntityLineage, public BaseModel
        {
            EntityLineage() : PlayFabAuthenticationEntityLineage{}
            {
            }

            EntityLineage(const EntityLineage& src) :
                PlayFabAuthenticationEntityLineage{ src },
                m_characterId{ src.m_characterId },
                m_groupId{ src.m_groupId },
                m_masterPlayerAccountId{ src.m_masterPlayerAccountId },
                m_namespaceId{ src.m_namespaceId },
                m_titleId{ src.m_titleId },
                m_titlePlayerAccountId{ src.m_titlePlayerAccountId }
            {
                characterId = m_characterId.empty() ? nullptr : m_characterId.data();
                groupId = m_groupId.empty() ? nullptr : m_groupId.data();
                masterPlayerAccountId = m_masterPlayerAccountId.empty() ? nullptr : m_masterPlayerAccountId.data();
                namespaceId = m_namespaceId.empty() ? nullptr : m_namespaceId.data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                titlePlayerAccountId = m_titlePlayerAccountId.empty() ? nullptr : m_titlePlayerAccountId.data();
            }

            ~EntityLineage() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CharacterId", m_characterId, characterId);
                JsonUtils:: ObjectGetMember(input, "GroupId", m_groupId, groupId);
                JsonUtils:: ObjectGetMember(input, "MasterPlayerAccountId", m_masterPlayerAccountId, masterPlayerAccountId);
                JsonUtils:: ObjectGetMember(input, "NamespaceId", m_namespaceId, namespaceId);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "TitlePlayerAccountId", m_titlePlayerAccountId, titlePlayerAccountId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAuthenticationEntityLineage>(*this);
            }

        private:
            String m_characterId;
            String m_groupId;
            String m_masterPlayerAccountId;
            String m_namespaceId;
            String m_titleId;
            String m_titlePlayerAccountId;
        };

        struct GetEntityTokenRequest : public PlayFabAuthenticationGetEntityTokenRequest, public BaseRequest
        {
            GetEntityTokenRequest() : PlayFabAuthenticationGetEntityTokenRequest{}
            {
            }

            GetEntityTokenRequest(const GetEntityTokenRequest& src) :
                PlayFabAuthenticationGetEntityTokenRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
            }

            ~GetEntityTokenRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAuthenticationGetEntityTokenRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
        };

        struct GetEntityTokenResponse : public PlayFabAuthenticationGetEntityTokenResponse, public BaseResult
        {
            GetEntityTokenResponse() : PlayFabAuthenticationGetEntityTokenResponse{}
            {
            }

            GetEntityTokenResponse(const GetEntityTokenResponse& src) :
                PlayFabAuthenticationGetEntityTokenResponse{ src },
                m_entity{ src.m_entity },
                m_entityToken{ src.m_entityToken },
                m_tokenExpiration{ src.m_tokenExpiration }
            {
                entity = m_entity ? m_entity.operator->() : nullptr;
                entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
                tokenExpiration = m_tokenExpiration ? m_tokenExpiration.operator->() : nullptr;
            }

            ~GetEntityTokenResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
                JsonUtils:: ObjectGetMember(input, "TokenExpiration", m_tokenExpiration, tokenExpiration, true);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAuthenticationGetEntityTokenResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;
            String m_entityToken;
            StdExtra::optional<time_t> m_tokenExpiration;
        };

        struct ValidateEntityTokenRequest : public PlayFabAuthenticationValidateEntityTokenRequest, public BaseRequest
        {
            ValidateEntityTokenRequest() : PlayFabAuthenticationValidateEntityTokenRequest{}
            {
            }

            ValidateEntityTokenRequest(const ValidateEntityTokenRequest& src) :
                PlayFabAuthenticationValidateEntityTokenRequest{ src },
                m_customTags{ src.m_customTags },
                m_entityToken{ src.m_entityToken }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
            }

            ~ValidateEntityTokenRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAuthenticationValidateEntityTokenRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_entityToken;
        };

        struct ValidateEntityTokenResponse : public PlayFabAuthenticationValidateEntityTokenResponse, public BaseResult
        {
            ValidateEntityTokenResponse() : PlayFabAuthenticationValidateEntityTokenResponse{}
            {
            }

            ValidateEntityTokenResponse(const ValidateEntityTokenResponse& src) :
                PlayFabAuthenticationValidateEntityTokenResponse{ src },
                m_entity{ src.m_entity },
                m_identifiedDeviceType{ src.m_identifiedDeviceType },
                m_identityProvider{ src.m_identityProvider },
                m_lineage{ src.m_lineage }
            {
                entity = m_entity ? m_entity.operator->() : nullptr;
                identifiedDeviceType = m_identifiedDeviceType ? m_identifiedDeviceType.operator->() : nullptr;
                identityProvider = m_identityProvider ? m_identityProvider.operator->() : nullptr;
                lineage = m_lineage ? m_lineage.operator->() : nullptr;
            }

            ~ValidateEntityTokenResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "IdentifiedDeviceType", m_identifiedDeviceType, identifiedDeviceType);
                JsonUtils:: ObjectGetMember(input, "IdentityProvider", m_identityProvider, identityProvider);
                JsonUtils:: ObjectGetMember(input, "Lineage", m_lineage, lineage);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabAuthenticationValidateEntityTokenResponse>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_entity;
            StdExtra::optional<PlayFabAuthenticationIdentifiedDeviceType> m_identifiedDeviceType;
            StdExtra::optional<PlayFabAuthenticationLoginIdentityProvider> m_identityProvider;
            StdExtra::optional<EntityLineage> m_lineage;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabAuthenticationIdentifiedDeviceType>
    {
        static constexpr PlayFabAuthenticationIdentifiedDeviceType maxValue = PlayFabAuthenticationIdentifiedDeviceType::Scarlett;
    };

    template<> struct EnumRange<PlayFabAuthenticationLoginIdentityProvider>
    {
        static constexpr PlayFabAuthenticationLoginIdentityProvider maxValue = PlayFabAuthenticationLoginIdentityProvider::NintendoSwitchAccount;
    };

}

#endif
