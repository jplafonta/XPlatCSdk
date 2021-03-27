#pragma once

#if !defined(DISABLE_PLAYFABENTITY_API)

#include <playfab/PlayFabGroupsDataModels_c.h>
#include <BaseModel.h>
#include <JsonUtils.h>

namespace PlayFab
{
    namespace JsonUtils
    {

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsEntityKey& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Id", input.id);
            JsonUtils::ObjectAddMember(output, "Type", input.type);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsAcceptGroupApplicationRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsAcceptGroupInvitationRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsAddMembersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsApplyToGroupRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AutoAcceptOutstandingInvite", input.autoAcceptOutstandingInvite);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsEntityWithLineage& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Key", input.key);
            JsonUtils::ObjectAddMember(output, "Lineage", input.lineage, input.lineageCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsApplyToGroupResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsBlockEntityRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsChangeMemberRoleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "DestinationRoleId", input.destinationRoleId);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "OriginRoleId", input.originRoleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdminRoleId", input.adminRoleId);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
            JsonUtils::ObjectAddMember(output, "MemberRoleId", input.memberRoleId);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "Roles", input.roles, input.rolesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRoleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsCreateGroupRoleResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsDeleteGroupRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsDeleteRoleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsEmptyResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsEntityMemberRole& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsGetGroupRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsGetGroupResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdminRoleId", input.adminRoleId);
            JsonUtils::ObjectAddMember(output, "Created", input.created, true);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
            JsonUtils::ObjectAddMember(output, "MemberRoleId", input.memberRoleId);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "Roles", input.roles, input.rolesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsGroupApplication& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsGroupBlock& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsGroupInvitation& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "InvitedByEntity", input.invitedByEntity);
            JsonUtils::ObjectAddMember(output, "InvitedEntity", input.invitedEntity);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsGroupRole& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsGroupWithRoles& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "Roles", input.roles, input.rolesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsInviteToGroupRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AutoAcceptOutstandingApplication", input.autoAcceptOutstandingApplication);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsInviteToGroupResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Expires", input.expires, true);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "InvitedByEntity", input.invitedByEntity);
            JsonUtils::ObjectAddMember(output, "InvitedEntity", input.invitedEntity);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsIsMemberRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsIsMemberResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "IsMember", input.isMember);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupApplicationsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupApplicationsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Applications", input.applications, input.applicationsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupBlocksRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupBlocksResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "BlockedEntities", input.blockedEntities, input.blockedEntitiesCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupInvitationsRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupInvitationsResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Invitations", input.invitations, input.invitationsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupMembersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListGroupMembersResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListMembershipOpportunitiesRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListMembershipOpportunitiesResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Applications", input.applications, input.applicationsCount);
            JsonUtils::ObjectAddMember(output, "Invitations", input.invitations, input.invitationsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListMembershipRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsListMembershipResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "Groups", input.groups, input.groupsCount);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsRemoveGroupApplicationRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsRemoveGroupInvitationRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsRemoveMembersRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "Members", input.members, input.membersCount);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsUnblockEntityRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "Entity", input.entity);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "AdminRoleId", input.adminRoleId);
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ExpectedProfileVersion", input.expectedProfileVersion);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "GroupName", input.groupName);
            JsonUtils::ObjectAddMember(output, "MemberRoleId", input.memberRoleId);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRoleRequest& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
            JsonUtils::ObjectAddMember(output, "ExpectedProfileVersion", input.expectedProfileVersion);
            JsonUtils::ObjectAddMember(output, "Group", input.group);
            JsonUtils::ObjectAddMember(output, "RoleId", input.roleId);
            JsonUtils::ObjectAddMember(output, "RoleName", input.roleName);
            return output;
        }

        template<>
        inline JsonValue ToJson<>(const PlayFabGroupsUpdateGroupRoleResponse& input)
        {
            UNREFERENCED_PARAMETER(input);
            JsonValue output{ rapidjson::kObjectType };
            JsonUtils::ObjectAddMember(output, "OperationReason", input.operationReason);
            JsonUtils::ObjectAddMember(output, "ProfileVersion", input.profileVersion);
            JsonUtils::ObjectAddMember(output, "SetResult", input.setResult);
            return output;
        }

    }

    namespace GroupsModels
    {
        // Groups Classes
        struct EntityKey : public PlayFabGroupsEntityKey, public BaseModel
        {
            EntityKey() : PlayFabGroupsEntityKey{}
            {
            }

            EntityKey(const EntityKey& src) :
                PlayFabGroupsEntityKey{ src },
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
                return JsonUtils::ToJson<PlayFabGroupsEntityKey>(*this);
            }

        private:
            String m_id;
            String m_type;
        };

        struct AcceptGroupApplicationRequest : public PlayFabGroupsAcceptGroupApplicationRequest, public BaseRequest
        {
            AcceptGroupApplicationRequest() : PlayFabGroupsAcceptGroupApplicationRequest{}
            {
            }

            AcceptGroupApplicationRequest(const AcceptGroupApplicationRequest& src) :
                PlayFabGroupsAcceptGroupApplicationRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabGroupsEntityKey*)&m_entity;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~AcceptGroupApplicationRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsAcceptGroupApplicationRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            EntityKey m_group;
        };

        struct AcceptGroupInvitationRequest : public PlayFabGroupsAcceptGroupInvitationRequest, public BaseRequest
        {
            AcceptGroupInvitationRequest() : PlayFabGroupsAcceptGroupInvitationRequest{}
            {
            }

            AcceptGroupInvitationRequest(const AcceptGroupInvitationRequest& src) :
                PlayFabGroupsAcceptGroupInvitationRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~AcceptGroupInvitationRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsAcceptGroupInvitationRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            EntityKey m_group;
        };

        struct AddMembersRequest : public PlayFabGroupsAddMembersRequest, public BaseRequest
        {
            AddMembersRequest() : PlayFabGroupsAddMembersRequest{}
            {
            }

            AddMembersRequest(const AddMembersRequest& src) :
                PlayFabGroupsAddMembersRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group },
                m_members{ src.m_members },
                m_roleId{ src.m_roleId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
                members = m_members.Empty() ? nullptr : m_members.Data();
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
            }

            ~AddMembersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsAddMembersRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
            PointerArray<PlayFabGroupsEntityKey, EntityKey> m_members;
            String m_roleId;
        };

        struct ApplyToGroupRequest : public PlayFabGroupsApplyToGroupRequest, public BaseRequest
        {
            ApplyToGroupRequest() : PlayFabGroupsApplyToGroupRequest{}
            {
            }

            ApplyToGroupRequest(const ApplyToGroupRequest& src) :
                PlayFabGroupsApplyToGroupRequest{ src },
                m_autoAcceptOutstandingInvite{ src.m_autoAcceptOutstandingInvite },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                autoAcceptOutstandingInvite = m_autoAcceptOutstandingInvite ? m_autoAcceptOutstandingInvite.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~ApplyToGroupRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AutoAcceptOutstandingInvite", m_autoAcceptOutstandingInvite, autoAcceptOutstandingInvite);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsApplyToGroupRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_autoAcceptOutstandingInvite;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            EntityKey m_group;
        };

        struct EntityWithLineage : public PlayFabGroupsEntityWithLineage, public BaseModel
        {
            EntityWithLineage() : PlayFabGroupsEntityWithLineage{}
            {
            }

            EntityWithLineage(const EntityWithLineage& src) :
                PlayFabGroupsEntityWithLineage{ src },
                m_key{ src.m_key },
                m_lineage{ src.m_lineage }
            {

                key = m_key ? m_key.operator->() : nullptr;
                lineage = m_lineage.Empty() ? nullptr : m_lineage.Data();
            }

            ~EntityWithLineage() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Key", m_key, key);
                JsonUtils:: ObjectGetMember(input, "Lineage", m_lineage, lineage, lineageCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsEntityWithLineage>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_key;
            AssociativeArray<PlayFabGroupsEntityKeyDictionaryEntry, EntityKey> m_lineage;
        };

        struct ApplyToGroupResponse : public PlayFabGroupsApplyToGroupResponse, public BaseResult
        {
            ApplyToGroupResponse() : PlayFabGroupsApplyToGroupResponse{}
            {
            }

            ApplyToGroupResponse(const ApplyToGroupResponse& src) :
                PlayFabGroupsApplyToGroupResponse{ src },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                group = m_group ? m_group.operator->() : nullptr;
            }

            ~ApplyToGroupResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Expires", expires, true);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsApplyToGroupResponse>(*this);
            }

        private:
            StdExtra::optional<EntityWithLineage> m_entity;

            StdExtra::optional<EntityKey> m_group;
        };

        struct BlockEntityRequest : public PlayFabGroupsBlockEntityRequest, public BaseRequest
        {
            BlockEntityRequest() : PlayFabGroupsBlockEntityRequest{}
            {
            }

            BlockEntityRequest(const BlockEntityRequest& src) :
                PlayFabGroupsBlockEntityRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabGroupsEntityKey*)&m_entity;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~BlockEntityRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsBlockEntityRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            EntityKey m_group;
        };

        struct ChangeMemberRoleRequest : public PlayFabGroupsChangeMemberRoleRequest, public BaseRequest
        {
            ChangeMemberRoleRequest() : PlayFabGroupsChangeMemberRoleRequest{}
            {
            }

            ChangeMemberRoleRequest(const ChangeMemberRoleRequest& src) :
                PlayFabGroupsChangeMemberRoleRequest{ src },
                m_customTags{ src.m_customTags },
                m_destinationRoleId{ src.m_destinationRoleId },
                m_group{ src.m_group },
                m_members{ src.m_members },
                m_originRoleId{ src.m_originRoleId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                destinationRoleId = m_destinationRoleId.empty() ? nullptr : m_destinationRoleId.data();
                group = (PlayFabGroupsEntityKey*)&m_group;
                members = m_members.Empty() ? nullptr : m_members.Data();
                originRoleId = m_originRoleId.empty() ? nullptr : m_originRoleId.data();
            }

            ~ChangeMemberRoleRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "DestinationRoleId", m_destinationRoleId, destinationRoleId);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "OriginRoleId", m_originRoleId, originRoleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsChangeMemberRoleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            String m_destinationRoleId;
            EntityKey m_group;
            PointerArray<PlayFabGroupsEntityKey, EntityKey> m_members;
            String m_originRoleId;
        };

        struct CreateGroupRequest : public PlayFabGroupsCreateGroupRequest, public BaseRequest
        {
            CreateGroupRequest() : PlayFabGroupsCreateGroupRequest{}
            {
            }

            CreateGroupRequest(const CreateGroupRequest& src) :
                PlayFabGroupsCreateGroupRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_groupName{ src.m_groupName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
                groupName = m_groupName.empty() ? nullptr : m_groupName.data();
            }

            ~CreateGroupRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "GroupName", m_groupName, groupName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsCreateGroupRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
            String m_groupName;
        };

        struct CreateGroupResponse : public PlayFabGroupsCreateGroupResponse, public BaseResult
        {
            CreateGroupResponse() : PlayFabGroupsCreateGroupResponse{}
            {
            }

            CreateGroupResponse(const CreateGroupResponse& src) :
                PlayFabGroupsCreateGroupResponse{ src },
                m_adminRoleId{ src.m_adminRoleId },
                m_group{ src.m_group },
                m_groupName{ src.m_groupName },
                m_memberRoleId{ src.m_memberRoleId },
                m_roles{ src.m_roles }
            {

                adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
                group = (PlayFabGroupsEntityKey*)&m_group;
                groupName = m_groupName.empty() ? nullptr : m_groupName.data();
                memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
                roles = m_roles.Empty() ? nullptr : m_roles.Data();
            }

            ~CreateGroupResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AdminRoleId", m_adminRoleId, adminRoleId);
                JsonUtils:: ObjectGetMember(input, "Created", created, true);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "GroupName", m_groupName, groupName);
                JsonUtils:: ObjectGetMember(input, "MemberRoleId", m_memberRoleId, memberRoleId);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "Roles", m_roles, roles, rolesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsCreateGroupResponse>(*this);
            }

        private:
            String m_adminRoleId;

            EntityKey m_group;
            String m_groupName;
            String m_memberRoleId;

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_roles;
        };

        struct CreateGroupRoleRequest : public PlayFabGroupsCreateGroupRoleRequest, public BaseRequest
        {
            CreateGroupRoleRequest() : PlayFabGroupsCreateGroupRoleRequest{}
            {
            }

            CreateGroupRoleRequest(const CreateGroupRoleRequest& src) :
                PlayFabGroupsCreateGroupRoleRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group },
                m_roleId{ src.m_roleId },
                m_roleName{ src.m_roleName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
                roleName = m_roleName.empty() ? nullptr : m_roleName.data();
            }

            ~CreateGroupRoleRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
                JsonUtils:: ObjectGetMember(input, "RoleName", m_roleName, roleName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsCreateGroupRoleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
            String m_roleId;
            String m_roleName;
        };

        struct CreateGroupRoleResponse : public PlayFabGroupsCreateGroupRoleResponse, public BaseResult
        {
            CreateGroupRoleResponse() : PlayFabGroupsCreateGroupRoleResponse{}
            {
            }

            CreateGroupRoleResponse(const CreateGroupRoleResponse& src) :
                PlayFabGroupsCreateGroupRoleResponse{ src },
                m_roleId{ src.m_roleId },
                m_roleName{ src.m_roleName }
            {

                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
                roleName = m_roleName.empty() ? nullptr : m_roleName.data();
            }

            ~CreateGroupRoleResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
                JsonUtils:: ObjectGetMember(input, "RoleName", m_roleName, roleName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsCreateGroupRoleResponse>(*this);
            }

        private:

            String m_roleId;
            String m_roleName;
        };

        struct DeleteGroupRequest : public PlayFabGroupsDeleteGroupRequest, public BaseRequest
        {
            DeleteGroupRequest() : PlayFabGroupsDeleteGroupRequest{}
            {
            }

            DeleteGroupRequest(const DeleteGroupRequest& src) :
                PlayFabGroupsDeleteGroupRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~DeleteGroupRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsDeleteGroupRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
        };

        struct DeleteRoleRequest : public PlayFabGroupsDeleteRoleRequest, public BaseRequest
        {
            DeleteRoleRequest() : PlayFabGroupsDeleteRoleRequest{}
            {
            }

            DeleteRoleRequest(const DeleteRoleRequest& src) :
                PlayFabGroupsDeleteRoleRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group },
                m_roleId{ src.m_roleId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
            }

            ~DeleteRoleRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsDeleteRoleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
            String m_roleId;
        };

        struct EmptyResponse : public PlayFabGroupsEmptyResponse, public BaseResult
        {
            EmptyResponse() : PlayFabGroupsEmptyResponse{}
            {
            }

            EmptyResponse(const EmptyResponse&) = default;

            ~EmptyResponse() = default;

            void FromJson(const JsonValue&) override
            {
                
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsEmptyResponse>(*this);
            }

        private:
        };

        struct EntityMemberRole : public PlayFabGroupsEntityMemberRole, public BaseModel
        {
            EntityMemberRole() : PlayFabGroupsEntityMemberRole{}
            {
            }

            EntityMemberRole(const EntityMemberRole& src) :
                PlayFabGroupsEntityMemberRole{ src },
                m_members{ src.m_members },
                m_roleId{ src.m_roleId },
                m_roleName{ src.m_roleName }
            {

                members = m_members.Empty() ? nullptr : m_members.Data();
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
                roleName = m_roleName.empty() ? nullptr : m_roleName.data();
            }

            ~EntityMemberRole() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
                JsonUtils:: ObjectGetMember(input, "RoleName", m_roleName, roleName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsEntityMemberRole>(*this);
            }

        private:
            PointerArray<PlayFabGroupsEntityWithLineage, EntityWithLineage> m_members;
            String m_roleId;
            String m_roleName;
        };

        struct GetGroupRequest : public PlayFabGroupsGetGroupRequest, public BaseRequest
        {
            GetGroupRequest() : PlayFabGroupsGetGroupRequest{}
            {
            }

            GetGroupRequest(const GetGroupRequest& src) :
                PlayFabGroupsGetGroupRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group },
                m_groupName{ src.m_groupName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = m_group ? m_group.operator->() : nullptr;
                groupName = m_groupName.empty() ? nullptr : m_groupName.data();
            }

            ~GetGroupRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "GroupName", m_groupName, groupName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsGetGroupRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_group;
            String m_groupName;
        };

        struct GetGroupResponse : public PlayFabGroupsGetGroupResponse, public BaseResult
        {
            GetGroupResponse() : PlayFabGroupsGetGroupResponse{}
            {
            }

            GetGroupResponse(const GetGroupResponse& src) :
                PlayFabGroupsGetGroupResponse{ src },
                m_adminRoleId{ src.m_adminRoleId },
                m_group{ src.m_group },
                m_groupName{ src.m_groupName },
                m_memberRoleId{ src.m_memberRoleId },
                m_roles{ src.m_roles }
            {

                adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
                group = (PlayFabGroupsEntityKey*)&m_group;
                groupName = m_groupName.empty() ? nullptr : m_groupName.data();
                memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
                roles = m_roles.Empty() ? nullptr : m_roles.Data();
            }

            ~GetGroupResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AdminRoleId", m_adminRoleId, adminRoleId);
                JsonUtils:: ObjectGetMember(input, "Created", created, true);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "GroupName", m_groupName, groupName);
                JsonUtils:: ObjectGetMember(input, "MemberRoleId", m_memberRoleId, memberRoleId);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "Roles", m_roles, roles, rolesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsGetGroupResponse>(*this);
            }

        private:
            String m_adminRoleId;

            EntityKey m_group;
            String m_groupName;
            String m_memberRoleId;

            AssociativeArray<PlayFabStringDictionaryEntry, String> m_roles;
        };

        struct GroupApplication : public PlayFabGroupsGroupApplication, public BaseModel
        {
            GroupApplication() : PlayFabGroupsGroupApplication{}
            {
            }

            GroupApplication(const GroupApplication& src) :
                PlayFabGroupsGroupApplication{ src },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                group = m_group ? m_group.operator->() : nullptr;
            }

            ~GroupApplication() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Expires", expires, true);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsGroupApplication>(*this);
            }

        private:
            StdExtra::optional<EntityWithLineage> m_entity;

            StdExtra::optional<EntityKey> m_group;
        };

        struct GroupBlock : public PlayFabGroupsGroupBlock, public BaseModel
        {
            GroupBlock() : PlayFabGroupsGroupBlock{}
            {
            }

            GroupBlock(const GroupBlock& src) :
                PlayFabGroupsGroupBlock{ src },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                entity = m_entity ? m_entity.operator->() : nullptr;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~GroupBlock() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsGroupBlock>(*this);
            }

        private:
            StdExtra::optional<EntityWithLineage> m_entity;
            EntityKey m_group;
        };

        struct GroupInvitation : public PlayFabGroupsGroupInvitation, public BaseModel
        {
            GroupInvitation() : PlayFabGroupsGroupInvitation{}
            {
            }

            GroupInvitation(const GroupInvitation& src) :
                PlayFabGroupsGroupInvitation{ src },
                m_group{ src.m_group },
                m_invitedByEntity{ src.m_invitedByEntity },
                m_invitedEntity{ src.m_invitedEntity },
                m_roleId{ src.m_roleId }
            {

                group = m_group ? m_group.operator->() : nullptr;
                invitedByEntity = m_invitedByEntity ? m_invitedByEntity.operator->() : nullptr;
                invitedEntity = m_invitedEntity ? m_invitedEntity.operator->() : nullptr;
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
            }

            ~GroupInvitation() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Expires", expires, true);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "InvitedByEntity", m_invitedByEntity, invitedByEntity);
                JsonUtils:: ObjectGetMember(input, "InvitedEntity", m_invitedEntity, invitedEntity);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsGroupInvitation>(*this);
            }

        private:

            StdExtra::optional<EntityKey> m_group;
            StdExtra::optional<EntityWithLineage> m_invitedByEntity;
            StdExtra::optional<EntityWithLineage> m_invitedEntity;
            String m_roleId;
        };

        struct GroupRole : public PlayFabGroupsGroupRole, public BaseModel
        {
            GroupRole() : PlayFabGroupsGroupRole{}
            {
            }

            GroupRole(const GroupRole& src) :
                PlayFabGroupsGroupRole{ src },
                m_roleId{ src.m_roleId },
                m_roleName{ src.m_roleName }
            {

                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
                roleName = m_roleName.empty() ? nullptr : m_roleName.data();
            }

            ~GroupRole() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
                JsonUtils:: ObjectGetMember(input, "RoleName", m_roleName, roleName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsGroupRole>(*this);
            }

        private:
            String m_roleId;
            String m_roleName;
        };

        struct GroupWithRoles : public PlayFabGroupsGroupWithRoles, public BaseModel
        {
            GroupWithRoles() : PlayFabGroupsGroupWithRoles{}
            {
            }

            GroupWithRoles(const GroupWithRoles& src) :
                PlayFabGroupsGroupWithRoles{ src },
                m_group{ src.m_group },
                m_groupName{ src.m_groupName },
                m_roles{ src.m_roles }
            {

                group = m_group ? m_group.operator->() : nullptr;
                groupName = m_groupName.empty() ? nullptr : m_groupName.data();
                roles = m_roles.Empty() ? nullptr : m_roles.Data();
            }

            ~GroupWithRoles() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "GroupName", m_groupName, groupName);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "Roles", m_roles, roles, rolesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsGroupWithRoles>(*this);
            }

        private:
            StdExtra::optional<EntityKey> m_group;
            String m_groupName;

            PointerArray<PlayFabGroupsGroupRole, GroupRole> m_roles;
        };

        struct InviteToGroupRequest : public PlayFabGroupsInviteToGroupRequest, public BaseRequest
        {
            InviteToGroupRequest() : PlayFabGroupsInviteToGroupRequest{}
            {
            }

            InviteToGroupRequest(const InviteToGroupRequest& src) :
                PlayFabGroupsInviteToGroupRequest{ src },
                m_autoAcceptOutstandingApplication{ src.m_autoAcceptOutstandingApplication },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group },
                m_roleId{ src.m_roleId }
            {

                autoAcceptOutstandingApplication = m_autoAcceptOutstandingApplication ? m_autoAcceptOutstandingApplication.operator->() : nullptr;
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabGroupsEntityKey*)&m_entity;
                group = (PlayFabGroupsEntityKey*)&m_group;
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
            }

            ~InviteToGroupRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AutoAcceptOutstandingApplication", m_autoAcceptOutstandingApplication, autoAcceptOutstandingApplication);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsInviteToGroupRequest>(*this);
            }

        private:
            StdExtra::optional<bool> m_autoAcceptOutstandingApplication;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            EntityKey m_group;
            String m_roleId;
        };

        struct InviteToGroupResponse : public PlayFabGroupsInviteToGroupResponse, public BaseResult
        {
            InviteToGroupResponse() : PlayFabGroupsInviteToGroupResponse{}
            {
            }

            InviteToGroupResponse(const InviteToGroupResponse& src) :
                PlayFabGroupsInviteToGroupResponse{ src },
                m_group{ src.m_group },
                m_invitedByEntity{ src.m_invitedByEntity },
                m_invitedEntity{ src.m_invitedEntity },
                m_roleId{ src.m_roleId }
            {

                group = m_group ? m_group.operator->() : nullptr;
                invitedByEntity = m_invitedByEntity ? m_invitedByEntity.operator->() : nullptr;
                invitedEntity = m_invitedEntity ? m_invitedEntity.operator->() : nullptr;
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
            }

            ~InviteToGroupResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Expires", expires, true);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "InvitedByEntity", m_invitedByEntity, invitedByEntity);
                JsonUtils:: ObjectGetMember(input, "InvitedEntity", m_invitedEntity, invitedEntity);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsInviteToGroupResponse>(*this);
            }

        private:

            StdExtra::optional<EntityKey> m_group;
            StdExtra::optional<EntityWithLineage> m_invitedByEntity;
            StdExtra::optional<EntityWithLineage> m_invitedEntity;
            String m_roleId;
        };

        struct IsMemberRequest : public PlayFabGroupsIsMemberRequest, public BaseRequest
        {
            IsMemberRequest() : PlayFabGroupsIsMemberRequest{}
            {
            }

            IsMemberRequest(const IsMemberRequest& src) :
                PlayFabGroupsIsMemberRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group },
                m_roleId{ src.m_roleId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabGroupsEntityKey*)&m_entity;
                group = (PlayFabGroupsEntityKey*)&m_group;
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
            }

            ~IsMemberRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsIsMemberRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            EntityKey m_group;
            String m_roleId;
        };

        struct IsMemberResponse : public PlayFabGroupsIsMemberResponse, public BaseResult
        {
            IsMemberResponse() : PlayFabGroupsIsMemberResponse{}
            {
            }

            IsMemberResponse(const IsMemberResponse&) = default;

            ~IsMemberResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "IsMember", isMember);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsIsMemberResponse>(*this);
            }

        private:

        };

        struct ListGroupApplicationsRequest : public PlayFabGroupsListGroupApplicationsRequest, public BaseRequest
        {
            ListGroupApplicationsRequest() : PlayFabGroupsListGroupApplicationsRequest{}
            {
            }

            ListGroupApplicationsRequest(const ListGroupApplicationsRequest& src) :
                PlayFabGroupsListGroupApplicationsRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~ListGroupApplicationsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupApplicationsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
        };

        struct ListGroupApplicationsResponse : public PlayFabGroupsListGroupApplicationsResponse, public BaseResult
        {
            ListGroupApplicationsResponse() : PlayFabGroupsListGroupApplicationsResponse{}
            {
            }

            ListGroupApplicationsResponse(const ListGroupApplicationsResponse& src) :
                PlayFabGroupsListGroupApplicationsResponse{ src },
                m_applications{ src.m_applications }
            {

                applications = m_applications.Empty() ? nullptr : m_applications.Data();
            }

            ~ListGroupApplicationsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Applications", m_applications, applications, applicationsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupApplicationsResponse>(*this);
            }

        private:
            PointerArray<PlayFabGroupsGroupApplication, GroupApplication> m_applications;
        };

        struct ListGroupBlocksRequest : public PlayFabGroupsListGroupBlocksRequest, public BaseRequest
        {
            ListGroupBlocksRequest() : PlayFabGroupsListGroupBlocksRequest{}
            {
            }

            ListGroupBlocksRequest(const ListGroupBlocksRequest& src) :
                PlayFabGroupsListGroupBlocksRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~ListGroupBlocksRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupBlocksRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
        };

        struct ListGroupBlocksResponse : public PlayFabGroupsListGroupBlocksResponse, public BaseResult
        {
            ListGroupBlocksResponse() : PlayFabGroupsListGroupBlocksResponse{}
            {
            }

            ListGroupBlocksResponse(const ListGroupBlocksResponse& src) :
                PlayFabGroupsListGroupBlocksResponse{ src },
                m_blockedEntities{ src.m_blockedEntities }
            {

                blockedEntities = m_blockedEntities.Empty() ? nullptr : m_blockedEntities.Data();
            }

            ~ListGroupBlocksResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "BlockedEntities", m_blockedEntities, blockedEntities, blockedEntitiesCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupBlocksResponse>(*this);
            }

        private:
            PointerArray<PlayFabGroupsGroupBlock, GroupBlock> m_blockedEntities;
        };

        struct ListGroupInvitationsRequest : public PlayFabGroupsListGroupInvitationsRequest, public BaseRequest
        {
            ListGroupInvitationsRequest() : PlayFabGroupsListGroupInvitationsRequest{}
            {
            }

            ListGroupInvitationsRequest(const ListGroupInvitationsRequest& src) :
                PlayFabGroupsListGroupInvitationsRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~ListGroupInvitationsRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupInvitationsRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
        };

        struct ListGroupInvitationsResponse : public PlayFabGroupsListGroupInvitationsResponse, public BaseResult
        {
            ListGroupInvitationsResponse() : PlayFabGroupsListGroupInvitationsResponse{}
            {
            }

            ListGroupInvitationsResponse(const ListGroupInvitationsResponse& src) :
                PlayFabGroupsListGroupInvitationsResponse{ src },
                m_invitations{ src.m_invitations }
            {

                invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
            }

            ~ListGroupInvitationsResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Invitations", m_invitations, invitations, invitationsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupInvitationsResponse>(*this);
            }

        private:
            PointerArray<PlayFabGroupsGroupInvitation, GroupInvitation> m_invitations;
        };

        struct ListGroupMembersRequest : public PlayFabGroupsListGroupMembersRequest, public BaseRequest
        {
            ListGroupMembersRequest() : PlayFabGroupsListGroupMembersRequest{}
            {
            }

            ListGroupMembersRequest(const ListGroupMembersRequest& src) :
                PlayFabGroupsListGroupMembersRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~ListGroupMembersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupMembersRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
        };

        struct ListGroupMembersResponse : public PlayFabGroupsListGroupMembersResponse, public BaseResult
        {
            ListGroupMembersResponse() : PlayFabGroupsListGroupMembersResponse{}
            {
            }

            ListGroupMembersResponse(const ListGroupMembersResponse& src) :
                PlayFabGroupsListGroupMembersResponse{ src },
                m_members{ src.m_members }
            {

                members = m_members.Empty() ? nullptr : m_members.Data();
            }

            ~ListGroupMembersResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListGroupMembersResponse>(*this);
            }

        private:
            PointerArray<PlayFabGroupsEntityMemberRole, EntityMemberRole> m_members;
        };

        struct ListMembershipOpportunitiesRequest : public PlayFabGroupsListMembershipOpportunitiesRequest, public BaseRequest
        {
            ListMembershipOpportunitiesRequest() : PlayFabGroupsListMembershipOpportunitiesRequest{}
            {
            }

            ListMembershipOpportunitiesRequest(const ListMembershipOpportunitiesRequest& src) :
                PlayFabGroupsListMembershipOpportunitiesRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
            }

            ~ListMembershipOpportunitiesRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListMembershipOpportunitiesRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
        };

        struct ListMembershipOpportunitiesResponse : public PlayFabGroupsListMembershipOpportunitiesResponse, public BaseResult
        {
            ListMembershipOpportunitiesResponse() : PlayFabGroupsListMembershipOpportunitiesResponse{}
            {
            }

            ListMembershipOpportunitiesResponse(const ListMembershipOpportunitiesResponse& src) :
                PlayFabGroupsListMembershipOpportunitiesResponse{ src },
                m_applications{ src.m_applications },
                m_invitations{ src.m_invitations }
            {

                applications = m_applications.Empty() ? nullptr : m_applications.Data();
                invitations = m_invitations.Empty() ? nullptr : m_invitations.Data();
            }

            ~ListMembershipOpportunitiesResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Applications", m_applications, applications, applicationsCount);
                JsonUtils:: ObjectGetMember(input, "Invitations", m_invitations, invitations, invitationsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListMembershipOpportunitiesResponse>(*this);
            }

        private:
            PointerArray<PlayFabGroupsGroupApplication, GroupApplication> m_applications;
            PointerArray<PlayFabGroupsGroupInvitation, GroupInvitation> m_invitations;
        };

        struct ListMembershipRequest : public PlayFabGroupsListMembershipRequest, public BaseRequest
        {
            ListMembershipRequest() : PlayFabGroupsListMembershipRequest{}
            {
            }

            ListMembershipRequest(const ListMembershipRequest& src) :
                PlayFabGroupsListMembershipRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = m_entity ? m_entity.operator->() : nullptr;
            }

            ~ListMembershipRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListMembershipRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<EntityKey> m_entity;
        };

        struct ListMembershipResponse : public PlayFabGroupsListMembershipResponse, public BaseResult
        {
            ListMembershipResponse() : PlayFabGroupsListMembershipResponse{}
            {
            }

            ListMembershipResponse(const ListMembershipResponse& src) :
                PlayFabGroupsListMembershipResponse{ src },
                m_groups{ src.m_groups }
            {

                groups = m_groups.Empty() ? nullptr : m_groups.Data();
            }

            ~ListMembershipResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "Groups", m_groups, groups, groupsCount);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsListMembershipResponse>(*this);
            }

        private:
            PointerArray<PlayFabGroupsGroupWithRoles, GroupWithRoles> m_groups;
        };

        struct RemoveGroupApplicationRequest : public PlayFabGroupsRemoveGroupApplicationRequest, public BaseRequest
        {
            RemoveGroupApplicationRequest() : PlayFabGroupsRemoveGroupApplicationRequest{}
            {
            }

            RemoveGroupApplicationRequest(const RemoveGroupApplicationRequest& src) :
                PlayFabGroupsRemoveGroupApplicationRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabGroupsEntityKey*)&m_entity;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~RemoveGroupApplicationRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsRemoveGroupApplicationRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            EntityKey m_group;
        };

        struct RemoveGroupInvitationRequest : public PlayFabGroupsRemoveGroupInvitationRequest, public BaseRequest
        {
            RemoveGroupInvitationRequest() : PlayFabGroupsRemoveGroupInvitationRequest{}
            {
            }

            RemoveGroupInvitationRequest(const RemoveGroupInvitationRequest& src) :
                PlayFabGroupsRemoveGroupInvitationRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabGroupsEntityKey*)&m_entity;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~RemoveGroupInvitationRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsRemoveGroupInvitationRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            EntityKey m_group;
        };

        struct RemoveMembersRequest : public PlayFabGroupsRemoveMembersRequest, public BaseRequest
        {
            RemoveMembersRequest() : PlayFabGroupsRemoveMembersRequest{}
            {
            }

            RemoveMembersRequest(const RemoveMembersRequest& src) :
                PlayFabGroupsRemoveMembersRequest{ src },
                m_customTags{ src.m_customTags },
                m_group{ src.m_group },
                m_members{ src.m_members },
                m_roleId{ src.m_roleId }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                group = (PlayFabGroupsEntityKey*)&m_group;
                members = m_members.Empty() ? nullptr : m_members.Data();
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
            }

            ~RemoveMembersRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "Members", m_members, members, membersCount);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsRemoveMembersRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_group;
            PointerArray<PlayFabGroupsEntityKey, EntityKey> m_members;
            String m_roleId;
        };

        struct UnblockEntityRequest : public PlayFabGroupsUnblockEntityRequest, public BaseRequest
        {
            UnblockEntityRequest() : PlayFabGroupsUnblockEntityRequest{}
            {
            }

            UnblockEntityRequest(const UnblockEntityRequest& src) :
                PlayFabGroupsUnblockEntityRequest{ src },
                m_customTags{ src.m_customTags },
                m_entity{ src.m_entity },
                m_group{ src.m_group }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                entity = (PlayFabGroupsEntityKey*)&m_entity;
                group = (PlayFabGroupsEntityKey*)&m_group;
            }

            ~UnblockEntityRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "Entity", m_entity, entity);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsUnblockEntityRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            EntityKey m_entity;
            EntityKey m_group;
        };

        struct UpdateGroupRequest : public PlayFabGroupsUpdateGroupRequest, public BaseRequest
        {
            UpdateGroupRequest() : PlayFabGroupsUpdateGroupRequest{}
            {
            }

            UpdateGroupRequest(const UpdateGroupRequest& src) :
                PlayFabGroupsUpdateGroupRequest{ src },
                m_adminRoleId{ src.m_adminRoleId },
                m_customTags{ src.m_customTags },
                m_expectedProfileVersion{ src.m_expectedProfileVersion },
                m_group{ src.m_group },
                m_groupName{ src.m_groupName },
                m_memberRoleId{ src.m_memberRoleId }
            {

                adminRoleId = m_adminRoleId.empty() ? nullptr : m_adminRoleId.data();
                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
                group = (PlayFabGroupsEntityKey*)&m_group;
                groupName = m_groupName.empty() ? nullptr : m_groupName.data();
                memberRoleId = m_memberRoleId.empty() ? nullptr : m_memberRoleId.data();
            }

            ~UpdateGroupRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "AdminRoleId", m_adminRoleId, adminRoleId);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExpectedProfileVersion", m_expectedProfileVersion, expectedProfileVersion);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "GroupName", m_groupName, groupName);
                JsonUtils:: ObjectGetMember(input, "MemberRoleId", m_memberRoleId, memberRoleId);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsUpdateGroupRequest>(*this);
            }

        private:
            String m_adminRoleId;
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_expectedProfileVersion;
            EntityKey m_group;
            String m_groupName;
            String m_memberRoleId;
        };

        struct UpdateGroupResponse : public PlayFabGroupsUpdateGroupResponse, public BaseResult
        {
            UpdateGroupResponse() : PlayFabGroupsUpdateGroupResponse{}
            {
            }

            UpdateGroupResponse(const UpdateGroupResponse& src) :
                PlayFabGroupsUpdateGroupResponse{ src },
                m_operationReason{ src.m_operationReason },
                m_setResult{ src.m_setResult }
            {

                operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
                setResult = m_setResult ? m_setResult.operator->() : nullptr;
            }

            ~UpdateGroupResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OperationReason", m_operationReason, operationReason);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "SetResult", m_setResult, setResult);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsUpdateGroupResponse>(*this);
            }

        private:
            String m_operationReason;

            StdExtra::optional<PlayFabGroupsOperationTypes> m_setResult;
        };

        struct UpdateGroupRoleRequest : public PlayFabGroupsUpdateGroupRoleRequest, public BaseRequest
        {
            UpdateGroupRoleRequest() : PlayFabGroupsUpdateGroupRoleRequest{}
            {
            }

            UpdateGroupRoleRequest(const UpdateGroupRoleRequest& src) :
                PlayFabGroupsUpdateGroupRoleRequest{ src },
                m_customTags{ src.m_customTags },
                m_expectedProfileVersion{ src.m_expectedProfileVersion },
                m_group{ src.m_group },
                m_roleId{ src.m_roleId },
                m_roleName{ src.m_roleName }
            {

                customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
                expectedProfileVersion = m_expectedProfileVersion ? m_expectedProfileVersion.operator->() : nullptr;
                group = (PlayFabGroupsEntityKey*)&m_group;
                roleId = m_roleId.empty() ? nullptr : m_roleId.data();
                roleName = m_roleName.empty() ? nullptr : m_roleName.data();
            }

            ~UpdateGroupRoleRequest() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
                JsonUtils:: ObjectGetMember(input, "ExpectedProfileVersion", m_expectedProfileVersion, expectedProfileVersion);
                JsonUtils:: ObjectGetMember(input, "Group", m_group, group);
                JsonUtils:: ObjectGetMember(input, "RoleId", m_roleId, roleId);
                JsonUtils:: ObjectGetMember(input, "RoleName", m_roleName, roleName);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsUpdateGroupRoleRequest>(*this);
            }

        private:
            AssociativeArray<PlayFabStringDictionaryEntry, String> m_customTags;
            StdExtra::optional<int32_t> m_expectedProfileVersion;
            EntityKey m_group;
            String m_roleId;
            String m_roleName;
        };

        struct UpdateGroupRoleResponse : public PlayFabGroupsUpdateGroupRoleResponse, public BaseResult
        {
            UpdateGroupRoleResponse() : PlayFabGroupsUpdateGroupRoleResponse{}
            {
            }

            UpdateGroupRoleResponse(const UpdateGroupRoleResponse& src) :
                PlayFabGroupsUpdateGroupRoleResponse{ src },
                m_operationReason{ src.m_operationReason },
                m_setResult{ src.m_setResult }
            {

                operationReason = m_operationReason.empty() ? nullptr : m_operationReason.data();
                setResult = m_setResult ? m_setResult.operator->() : nullptr;
            }

            ~UpdateGroupRoleResponse() = default;

            void FromJson(const JsonValue& input) override
            {
                UNREFERENCED_PARAMETER(input);
                JsonUtils:: ObjectGetMember(input, "OperationReason", m_operationReason, operationReason);
                JsonUtils:: ObjectGetMember(input, "ProfileVersion", profileVersion);
                JsonUtils:: ObjectGetMember(input, "SetResult", m_setResult, setResult);
            }

            JsonValue ToJson() const override
            { 
                return JsonUtils::ToJson<PlayFabGroupsUpdateGroupRoleResponse>(*this);
            }

        private:
            String m_operationReason;

            StdExtra::optional<PlayFabGroupsOperationTypes> m_setResult;
        };

    }

    // EnumRange definitions used for Enum (de)serialization 
    template<> struct EnumRange<PlayFabGroupsOperationTypes>
    {
        static constexpr PlayFabGroupsOperationTypes maxValue = PlayFabGroupsOperationTypes::None;
    };

}

#endif
