#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabProfilesDataModels_c.h>
#include "BaseModel.h"
#include "JsonUtils.h"

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesEntityDataObject& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "DataObject", input.dataObject);
            JsonUtils::ObjectAddMember(output, "EscapedDataObject", input.escapedDataObject);
            JsonUtils::ObjectAddMember(output, "ObjectName", input.objectName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesEntityKey& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesEntityLineage& input)
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
        inline JsonValue ToJson<>(const PlayFabProfilesEntityPermissionStatement& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Action", input.action);
            JsonUtils::ObjectAddMember(output, "Comment", input.comment);
            JsonUtils::ObjectAddMember(output, "Condition", input.condition);
            JsonUtils::ObjectAddMember(output, "Effect", input.effect);
            JsonUtils::ObjectAddMember(output, "Principal", input.principal);
            JsonUtils::ObjectAddMember(output, "Resource", input.resource);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesEntityProfileFileMetadata& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Checksum", input.checksum);
            JsonUtils::ObjectAddMember(output, "FileName", input.fileName);
            JsonUtils::ObjectAddMember(output, "LastModified", input.lastModified, true);
            JsonUtils::ObjectAddMember(output, "Size", input.size);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesEntityStatisticChildValue& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ChildName", input.childName);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesEntityStatisticValue& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ChildStatistics", input.childStatistics, input.childStatisticsCount);
            JsonUtils::ObjectAddMember(output, "Metadata", input.metadata);
            JsonUtils::ObjectAddMember(output, "Name", input.name);
            JsonUtils::ObjectAddMember(output, "Value", input.value);
            JsonUtils::ObjectAddMember(output, "Version", input.version);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesEntityProfileBody& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AvatarUrl", input.avatarUrl);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "EntityChain", input.entityChain);
            JsonUtils::ObjectAddMember(output, "ExperimentVariants", input.experimentVariants, input.experimentVariantsCount);
            JsonUtils::ObjectAddMember(output, "Files", input.files, input.filesCount);
            JsonUtils::ObjectAddMember(output, "Language", input.language);
            JsonUtils::ObjectAddMember(output, "LeaderboardMetadata", input.leaderboardMetadata);
            JsonUtils::ObjectAddMember(output, "Lineage", input.lineage);
            JsonUtils::ObjectAddMember(output, "Objects", input.objects, input.objectsCount);
            JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
            JsonUtils::ObjectAddMember(output, "Statistics", input.statistics, input.statisticsCount);
            JsonUtils::ObjectAddMember(output, "VersionNumber", input.versionNumber);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfileRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfileResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Profile", input.profile);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfilesRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DataAsObject", input.dataAsObject);
            JsonUtils::ObjectAddMember(output, "Entities", input.entities, input.entitiesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetEntityProfilesResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Profiles", input.profiles, input.profilesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetGlobalPolicyRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetGlobalPolicyResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "MasterPlayerAccountIds", input.masterPlayerAccountIds, input.masterPlayerAccountIdsCount);
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
            JsonUtils::ObjectAddMember(output, "TitlePlayerAccounts", input.titlePlayerAccounts, input.titlePlayerAccountsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesSetEntityProfilePolicyRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesSetEntityProfilePolicyResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesSetGlobalPolicyRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Permissions", input.permissions, input.permissionsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesSetProfileLanguageRequest& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "ExpectedVersion", input.expectedVersion);
            JsonUtils::ObjectAddMember(output, "Language", input.language);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabProfilesSetProfileLanguageResponse& input)
        {
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OperationResult", input.operationResult);
            JsonUtils::ObjectAddMember(output, "VersionNumber", input.versionNumber);
            return output;
        }

    }

    namespace ProfilesModels
    {
        // Profiles Classes
        struct EntityDataObject : public PlayFabProfilesEntityDataObject, public BaseModel
        {
            EntityDataObject() : PlayFabProfilesEntityDataObject{}
            {
            }

            EntityDataObject(const EntityDataObject& src) :
                PlayFabProfilesEntityDataObject{ src },
                m_dataObject{ src.m_dataObject },
                m_escapedDataObject{ src.m_escapedDataObject },
                m_objectName{ src.m_objectName }
            {
                dataObject.stringValue = m_dataObject.StringValue();
                escapedDataObject = m_escapedDataObject.empty() ? nullptr : m_escapedDataObject.data();
                objectName = m_objectName.empty() ? nullptr : m_objectName.data();
            }

            ~EntityDataObject() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "DataObject", m_dataObject, dataObject);
                JsonUtils:: ObjectGetMember(input, "EscapedDataObject", m_escapedDataObject, escapedDataObject);
                JsonUtils:: ObjectGetMember(input, "ObjectName", m_objectName, objectName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesEntityDataObject>(*this);
            }

        private:
            JsonObject m_dataObject;
            String m_escapedDataObject;
            String m_objectName;
        };

        struct EntityKey : public PlayFabProfilesEntityKey, public BaseModel
        {
            EntityKey() : PlayFabProfilesEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabProfilesEntityKey{ src },
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
                return JsonUtils::ToJson<PlayFabProfilesEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct EntityLineage : public PlayFabProfilesEntityLineage, public BaseModel
        {
            EntityLineage() : PlayFabProfilesEntityLineage{}
            {
            }

            EntityLineage(const EntityLineage& src) :
                PlayFabProfilesEntityLineage{ src },
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
                return JsonUtils::ToJson<PlayFabProfilesEntityLineage>(*this);
            }

        private:
            String m_characterId;
            String m_groupId;
            String m_masterPlayerAccountId;
            String m_namespaceId;
            String m_titleId;
            String m_titlePlayerAccountId;
        };

        struct EntityPermissionStatement : public PlayFabProfilesEntityPermissionStatement, public BaseModel
        {
            EntityPermissionStatement() : PlayFabProfilesEntityPermissionStatement{}
            {
            }

            EntityPermissionStatement(const EntityPermissionStatement& src) :
                PlayFabProfilesEntityPermissionStatement{ src },
                m_action{ src.m_action },
                m_comment{ src.m_comment },
                m_condition{ src.m_condition },
                m_principal{ src.m_principal },
                m_resource{ src.m_resource }
            {
                action = m_action.empty() ? nullptr : m_action.data();
                comment = m_comment.empty() ? nullptr : m_comment.data();
                condition.stringValue = m_condition.StringValue();
                principal.stringValue = m_principal.StringValue();
                resource = m_resource.empty() ? nullptr : m_resource.data();
            }

            ~EntityPermissionStatement() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Action", m_action, action);
                JsonUtils:: ObjectGetMember(input, "Comment", m_comment, comment);
                JsonUtils:: ObjectGetMember(input, "Condition", m_condition, condition);
                JsonUtils:: ObjectGetMember(input, "Effect", effect);
                JsonUtils:: ObjectGetMember(input, "Principal", m_principal, principal);
                JsonUtils:: ObjectGetMember(input, "Resource", m_resource, resource);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesEntityPermissionStatement>(*this);
            }

        private:
            String m_action;
            String m_comment;
            JsonObject m_condition;
            JsonObject m_principal;
            String m_resource;
        };

        struct EntityProfileFileMetadata : public PlayFabProfilesEntityProfileFileMetadata, public BaseModel
        {
            EntityProfileFileMetadata() : PlayFabProfilesEntityProfileFileMetadata{}
            {
            }

            EntityProfileFileMetadata(const EntityProfileFileMetadata& src) :
                PlayFabProfilesEntityProfileFileMetadata{ src },
                m_checksum{ src.m_checksum },
                m_fileName{ src.m_fileName }
            {
                checksum = m_checksum.empty() ? nullptr : m_checksum.data();
                fileName = m_fileName.empty() ? nullptr : m_fileName.data();
            }

            ~EntityProfileFileMetadata() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Checksum", m_checksum, checksum);
                JsonUtils:: ObjectGetMember(input, "FileName", m_fileName, fileName);
                JsonUtils:: ObjectGetMember(input, "LastModified", lastModified, true);
                JsonUtils:: ObjectGetMember(input, "Size", size);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesEntityProfileFileMetadata>(*this);
            }

        private:
            String m_checksum;
            String m_fileName;
        };

        struct EntityStatisticChildValue : public PlayFabProfilesEntityStatisticChildValue, public BaseModel
        {
            EntityStatisticChildValue() : PlayFabProfilesEntityStatisticChildValue{}
            {
            }

            EntityStatisticChildValue(const EntityStatisticChildValue& src) :
                PlayFabProfilesEntityStatisticChildValue{ src },
                m_childName{ src.m_childName },
                m_metadata{ src.m_metadata }
            {
                childName = m_childName.empty() ? nullptr : m_childName.data();
                metadata = m_metadata.empty() ? nullptr : m_metadata.data();
            }

            ~EntityStatisticChildValue() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ChildName", m_childName, childName);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata);
                JsonUtils:: ObjectGetMember(input, "Value", value);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesEntityStatisticChildValue>(*this);
            }

        private:
            String m_childName;
            String m_metadata;
        };

        struct EntityStatisticValue : public PlayFabProfilesEntityStatisticValue, public BaseModel
        {
            EntityStatisticValue() : PlayFabProfilesEntityStatisticValue{}
            {
            }

            EntityStatisticValue(const EntityStatisticValue& src) :
                PlayFabProfilesEntityStatisticValue{ src },
                m_childStatistics{ src.m_childStatistics },
                m_metadata{ src.m_metadata },
                m_name{ src.m_name },
                m_value{ src.m_value }
            {
                childStatistics = m_childStatistics.Empty() ? nullptr : m_childStatistics.Data();
                metadata = m_metadata.empty() ? nullptr : m_metadata.data();
                name = m_name.empty() ? nullptr : m_name.data();
                value = m_value ? m_value.operator->() : nullptr;
            }

            ~EntityStatisticValue() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "ChildStatistics", m_childStatistics, childStatistics, childStatisticsCount);
                JsonUtils:: ObjectGetMember(input, "Metadata", m_metadata, metadata);
                JsonUtils:: ObjectGetMember(input, "Name", m_name, name);
                JsonUtils:: ObjectGetMember(input, "Value", m_value, value);
                JsonUtils:: ObjectGetMember(input, "Version", version);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesEntityStatisticValue>(*this);
            }

        private:
            AssociativeArray<PlayFabProfilesEntityStatisticChildValueDictionaryEntry, EntityStatisticChildValue> m_childStatistics;
            String m_metadata;
            String m_name;
            StdExtra::optional<int32_t> m_value;
        };

        struct EntityProfileBody : public PlayFabProfilesEntityProfileBody, public BaseModel
        {
            EntityProfileBody() : PlayFabProfilesEntityProfileBody{}
            {
            }

            EntityProfileBody(const EntityProfileBody& src) :
                PlayFabProfilesEntityProfileBody{ src },
                m_avatarUrl{ src.m_avatarUrl },
                m_displayName{ src.m_displayName },
                m_entity{ src.m_entity },
                m_entityChain{ src.m_entityChain },
                m_experimentVariants{ src.m_experimentVariants },
                m_files{ src.m_files },
                m_language{ src.m_language },
                m_leaderboardMetadata{ src.m_leaderboardMetadata },
                m_lineage{ src.m_lineage },
                m_objects{ src.m_objects },
                m_permissions{ src.m_permissions },
                m_statistics{ src.m_statistics }
            {
                avatarUrl = m_avatarUrl.empty() ? nullptr : m_avatarUrl.data();
                displayName = m_displayName.empty() ? nullptr : m_displayName.data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                entityChain = m_entityChain.empty() ? nullptr : m_entityChain.data();
                experimentVariants = m_experimentVariants.Empty() ? nullptr : m_experimentVariants.Data();
                files = m_files.Empty() ? nullptr : m_files.Data();
                language = m_language.empty() ? nullptr : m_language.data();
                leaderboardMetadata = m_leaderboardMetadata.empty() ? nullptr : m_leaderboardMetadata.data();
                lineage = m_lineage ? m_lineage.operator->() : nullptr;
                objects = m_objects.Empty() ? nullptr : m_objects.Data();
                permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
                statistics = m_statistics.Empty() ? nullptr : m_statistics.Data();
            }

            ~EntityProfileBody() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "AvatarUrl", m_avatarUrl, avatarUrl);
                JsonUtils:: ObjectGetMember(input, "Created", created, true);
                JsonUtils:: ObjectGetMember(input, "DisplayName", m_displayName, displayName);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "EntityChain", m_entityChain, entityChain);
                JsonUtils:: ObjectGetMember(input, "ExperimentVariants", m_experimentVariants, experimentVariants, experimentVariantsCount);
                JsonUtils:: ObjectGetMember(input, "Files", m_files, files, filesCount);
                JsonUtils:: ObjectGetMember(input, "Language", m_language, language);
                JsonUtils:: ObjectGetMember(input, "LeaderboardMetadata", m_leaderboardMetadata, leaderboardMetadata);
                JsonUtils:: ObjectGetMember(input, "Lineage", m_lineage, lineage);
                JsonUtils:: ObjectGetMember(input, "Objects", m_objects, objects, objectsCount);
                JsonUtils:: ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
                JsonUtils:: ObjectGetMember(input, "Statistics", m_statistics, statistics, statisticsCount);
                JsonUtils:: ObjectGetMember(input, "VersionNumber", versionNumber);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesEntityProfileBody>(*this);
            }

        private:
            String m_avatarUrl;
            String m_displayName;
            StdExtra::optional<EntityKey> m_entity;
            String m_entityChain;
            PointerArray<const char, String> m_experimentVariants;
            AssociativeArray<PlayFabProfilesEntityProfileFileMetadataDictionaryEntry, EntityProfileFileMetadata> m_files;
            String m_language;
            String m_leaderboardMetadata;
            StdExtra::optional<EntityLineage> m_lineage;
            AssociativeArray<PlayFabProfilesEntityDataObjectDictionaryEntry, EntityDataObject> m_objects;
            PointerArray<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
            AssociativeArray<PlayFabProfilesEntityStatisticValueDictionaryEntry, EntityStatisticValue> m_statistics;
        };

        struct GetEntityProfileRequest : public PlayFabProfilesGetEntityProfileRequest, public BaseRequest
        {
            GetEntityProfileRequest() : PlayFabProfilesGetEntityProfileRequest{}
            {
            }

            GetEntityProfileRequest(const GetEntityProfileRequest& src) :
                PlayFabProfilesGetEntityProfileRequest{ src },
                m_customTags{ src.m_customTags },
                m_dataAsObject{ src.m_dataAsObject },
                m_entity{ src.m_entity }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
                entity = m_entity ? m_entity.operator->() : nullptr;
            }

            ~GetEntityProfileRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DataAsObject", m_dataAsObject, dataAsObject);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetEntityProfileRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_dataAsObject;
            StdExtra::optional<EntityKey> m_entity;
        };

        struct GetEntityProfileResponse : public PlayFabProfilesGetEntityProfileResponse, public BaseResult
        {
            GetEntityProfileResponse() : PlayFabProfilesGetEntityProfileResponse{}
            {
            }

            GetEntityProfileResponse(const GetEntityProfileResponse& src) :
                PlayFabProfilesGetEntityProfileResponse{ src },
                m_profile{ src.m_profile }
            {
                profile = m_profile ? m_profile.operator->() : nullptr;
            }

            ~GetEntityProfileResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Profile", m_profile, profile);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetEntityProfileResponse>(*this);
            }

        private:
            StdExtra::optional<EntityProfileBody> m_profile;
        };

        struct GetEntityProfilesRequest : public PlayFabProfilesGetEntityProfilesRequest, public BaseRequest
        {
            GetEntityProfilesRequest() : PlayFabProfilesGetEntityProfilesRequest{}
            {
            }

            GetEntityProfilesRequest(const GetEntityProfilesRequest& src) :
                PlayFabProfilesGetEntityProfilesRequest{ src },
                m_customTags{ src.m_customTags },
                m_dataAsObject{ src.m_dataAsObject },
                m_entities{ src.m_entities }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                dataAsObject = m_dataAsObject ? m_dataAsObject.operator->() : nullptr;
                entities = m_entities.Empty() ? nullptr : m_entities.Data();
            }

            ~GetEntityProfilesRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DataAsObject", m_dataAsObject, dataAsObject);
                JsonUtils:: ObjectGetMember(input, "Entities", m_entities, entities, entitiesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetEntityProfilesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<bool> m_dataAsObject;
            PointerArray<PlayFabProfilesEntityKey, EntityKey> m_entities;
        };

        struct GetEntityProfilesResponse : public PlayFabProfilesGetEntityProfilesResponse, public BaseResult
        {
            GetEntityProfilesResponse() : PlayFabProfilesGetEntityProfilesResponse{}
            {
            }

            GetEntityProfilesResponse(const GetEntityProfilesResponse& src) :
                PlayFabProfilesGetEntityProfilesResponse{ src },
                m_profiles{ src.m_profiles }
            {
                profiles = m_profiles.Empty() ? nullptr : m_profiles.Data();
            }

            ~GetEntityProfilesResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Profiles", m_profiles, profiles, profilesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetEntityProfilesResponse>(*this);
            }

        private:
            PointerArray<PlayFabProfilesEntityProfileBody, EntityProfileBody> m_profiles;
        };

        struct GetGlobalPolicyRequest : public PlayFabProfilesGetGlobalPolicyRequest, public BaseRequest
        {
            GetGlobalPolicyRequest() : PlayFabProfilesGetGlobalPolicyRequest{}
            {
            }

            GetGlobalPolicyRequest(const GetGlobalPolicyRequest& src) :
                PlayFabProfilesGetGlobalPolicyRequest{ src },
                m_customTags{ src.m_customTags }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
            }

            ~GetGlobalPolicyRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetGlobalPolicyRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
        };

        struct GetGlobalPolicyResponse : public PlayFabProfilesGetGlobalPolicyResponse, public BaseResult
        {
            GetGlobalPolicyResponse() : PlayFabProfilesGetGlobalPolicyResponse{}
            {
            }

            GetGlobalPolicyResponse(const GetGlobalPolicyResponse& src) :
                PlayFabProfilesGetGlobalPolicyResponse{ src },
                m_permissions{ src.m_permissions }
            {
                permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
            }

            ~GetGlobalPolicyResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetGlobalPolicyResponse>(*this);
            }

        private:
            PointerArray<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
        };

        struct GetTitlePlayersFromMasterPlayerAccountIdsRequest : public PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest, public BaseRequest
        {
            GetTitlePlayersFromMasterPlayerAccountIdsRequest() : PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest{}
            {
            }

            GetTitlePlayersFromMasterPlayerAccountIdsRequest(const GetTitlePlayersFromMasterPlayerAccountIdsRequest& src) :
                PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest{ src },
                m_customTags{ src.m_customTags },
                m_masterPlayerAccountIds{ src.m_masterPlayerAccountIds },
                m_titleId{ src.m_titleId }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                masterPlayerAccountIds = m_masterPlayerAccountIds.Empty() ? nullptr : m_masterPlayerAccountIds.Data();
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
            }

            ~GetTitlePlayersFromMasterPlayerAccountIdsRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "MasterPlayerAccountIds", m_masterPlayerAccountIds, masterPlayerAccountIds, masterPlayerAccountIdsCount);
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<const char, String> m_masterPlayerAccountIds;
            String m_titleId;
        };

        struct GetTitlePlayersFromMasterPlayerAccountIdsResponse : public PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse, public BaseResult
        {
            GetTitlePlayersFromMasterPlayerAccountIdsResponse() : PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{}
            {
            }

            GetTitlePlayersFromMasterPlayerAccountIdsResponse(const GetTitlePlayersFromMasterPlayerAccountIdsResponse& src) :
                PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse{ src },
                m_titleId{ src.m_titleId },
                m_titlePlayerAccounts{ src.m_titlePlayerAccounts }
            {
                titleId = m_titleId.empty() ? nullptr : m_titleId.data();
                titlePlayerAccounts = m_titlePlayerAccounts.Empty() ? nullptr : m_titlePlayerAccounts.Data();
            }

            ~GetTitlePlayersFromMasterPlayerAccountIdsResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "TitleId", m_titleId, titleId);
                JsonUtils:: ObjectGetMember(input, "TitlePlayerAccounts", m_titlePlayerAccounts, titlePlayerAccounts, titlePlayerAccountsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse>(*this);
            }

        private:
            String m_titleId;
            AssociativeArray<PlayFabProfilesEntityKeyDictionaryEntry, EntityKey> m_titlePlayerAccounts;
        };

        struct SetEntityProfilePolicyRequest : public PlayFabProfilesSetEntityProfilePolicyRequest, public BaseRequest
        {
            SetEntityProfilePolicyRequest() : PlayFabProfilesSetEntityProfilePolicyRequest{}
            {
            }

            SetEntityProfilePolicyRequest(const SetEntityProfilePolicyRequest& src) :
                PlayFabProfilesSetEntityProfilePolicyRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_statements{ src.m_statements }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabProfilesEntityKey*)&m_entity;
                statements = m_statements.Empty() ? nullptr : m_statements.Data();
            }

            ~SetEntityProfilePolicyRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesSetEntityProfilePolicyRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            PointerArray<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_statements;
        };

        struct SetEntityProfilePolicyResponse : public PlayFabProfilesSetEntityProfilePolicyResponse, public BaseResult
        {
            SetEntityProfilePolicyResponse() : PlayFabProfilesSetEntityProfilePolicyResponse{}
            {
            }

            SetEntityProfilePolicyResponse(const SetEntityProfilePolicyResponse& src) :
                PlayFabProfilesSetEntityProfilePolicyResponse{ src },
                m_permissions{ src.m_permissions }
            {
                permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
            }

            ~SetEntityProfilePolicyResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesSetEntityProfilePolicyResponse>(*this);
            }

        private:
            PointerArray<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
        };

        struct SetGlobalPolicyRequest : public PlayFabProfilesSetGlobalPolicyRequest, public BaseRequest
        {
            SetGlobalPolicyRequest() : PlayFabProfilesSetGlobalPolicyRequest{}
            {
            }

            SetGlobalPolicyRequest(const SetGlobalPolicyRequest& src) :
                PlayFabProfilesSetGlobalPolicyRequest{ src },
                m_customTags{ src.m_customTags },
                m_permissions{ src.m_permissions }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                permissions = m_permissions.Empty() ? nullptr : m_permissions.Data();
            }

            ~SetGlobalPolicyRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Permissions", m_permissions, permissions, permissionsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesSetGlobalPolicyRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            PointerArray<PlayFabProfilesEntityPermissionStatement, EntityPermissionStatement> m_permissions;
        };

        struct SetProfileLanguageRequest : public PlayFabProfilesSetProfileLanguageRequest, public BaseRequest
        {
            SetProfileLanguageRequest() : PlayFabProfilesSetProfileLanguageRequest{}
            {
            }

            SetProfileLanguageRequest(const SetProfileLanguageRequest& src) :
                PlayFabProfilesSetProfileLanguageRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_expectedVersion{ src.m_expectedVersion },
                m_language{ src.m_language }
            {
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                expectedVersion = m_expectedVersion ? m_expectedVersion.operator->() : nullptr;
                language = m_language.empty() ? nullptr : m_language.data();
            }

            ~SetProfileLanguageRequest() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "ExpectedVersion", m_expectedVersion, expectedVersion);
                JsonUtils:: ObjectGetMember(input, "Language", m_language, language);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesSetProfileLanguageRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            StdExtra::optional<int32_t> m_expectedVersion;
            String m_language;
        };

        struct SetProfileLanguageResponse : public PlayFabProfilesSetProfileLanguageResponse, public BaseResult
        {
            SetProfileLanguageResponse() : PlayFabProfilesSetProfileLanguageResponse{}
            {
            }

            SetProfileLanguageResponse(const SetProfileLanguageResponse& src) :
                PlayFabProfilesSetProfileLanguageResponse{ src },
                m_operationResult{ src.m_operationResult },
                m_versionNumber{ src.m_versionNumber }
            {
                operationResult = m_operationResult ? m_operationResult.operator->() : nullptr;
                versionNumber = m_versionNumber ? m_versionNumber.operator->() : nullptr;
            }

            ~SetProfileLanguageResponse() = default;

            // TODO Add move constructor & assignment operators

            void FromJson(const JsonValue& input) override
            {
                JsonUtils:: ObjectGetMember(input, "OperationResult", m_operationResult, operationResult);
                JsonUtils:: ObjectGetMember(input, "VersionNumber", m_versionNumber, versionNumber);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabProfilesSetProfileLanguageResponse>(*this);
            }

        private:
            StdExtra::optional<PlayFabProfilesOperationTypes> m_operationResult;
            StdExtra::optional<int32_t> m_versionNumber;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabProfilesEffectType>
    {
        static constexpr PlayFabProfilesEffectType maxValue = PlayFabProfilesEffectType::Deny;
    };

    template<> struct EnumRange<PlayFabProfilesOperationTypes>
    {
        static constexpr PlayFabProfilesOperationTypes maxValue = PlayFabProfilesOperationTypes::None;
    };

}

#endif
