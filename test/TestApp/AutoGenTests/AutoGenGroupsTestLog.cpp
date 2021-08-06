#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenGroupsTests.h"
#include "XAsyncHelper.h"

uint32_t g_GroupsTestIndex = 1;

namespace PlayFabUnit
{

void AutoGenGroupsTests::LogPrerequisiteCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request, const char* prereqName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }
    
    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Prerequisite: " << prereqName; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsCreateGroupRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPrerequisitePFGroupsCreateGroupResponse( PFGroupsCreateGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsCreateGroupResponse
    if( result->adminRoleId ) { ss << "  adminRoleId " << result->adminRoleId; Log(ss); } else { ss << "  adminRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  created " << result->created; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    if( result->groupName ) { ss << "  groupName " << result->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( result->memberRoleId ) { ss << "  memberRoleId " << result->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  rolesCount " << result->rolesCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->rolesCount; i++ )
    {
            ss << "  result->roles[" << i << "]:" << result->roles[i].key << "=" << result->roles[i].value; Log(ss);
            
    } 
    return S_OK;
}
void AutoGenGroupsTests::LogPrerequisiteGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request, const char* prereqName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }
    
    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Prerequisite: " << prereqName; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsGetGroupRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPrerequisitePFGroupsGetGroupResponse( PFGroupsGetGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsGetGroupResponse
    if( result->adminRoleId ) { ss << "  adminRoleId " << result->adminRoleId; Log(ss); } else { ss << "  adminRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  created " << result->created; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    if( result->groupName ) { ss << "  groupName " << result->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( result->memberRoleId ) { ss << "  memberRoleId " << result->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  rolesCount " << result->rolesCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->rolesCount; i++ )
    {
            ss << "  result->roles[" << i << "]:" << result->roles[i].key << "=" << result->roles[i].value; Log(ss);
            
    } 
    return S_OK;
}
void AutoGenGroupsTests::LogPrerequisiteApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request, const char* prereqName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }
    
    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Prerequisite: " << prereqName; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsApplyToGroupRequest struct:
    // request->autoAcceptOutstandingInvite: bool const*
    ss << "  autoAcceptOutstandingInvite " << request->autoAcceptOutstandingInvite; Log(ss); // Class: bool     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPrerequisitePFGroupsApplyToGroupResponse( PFGroupsApplyToGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsApplyToGroupResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFGroupsEntityWithLineage 
    ss << "  expires " << result->expires; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    return S_OK;
}
void AutoGenGroupsTests::LogPrerequisiteInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request, const char* prereqName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }
    
    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Prerequisite: " << prereqName; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsInviteToGroupRequest struct:
    // request->autoAcceptOutstandingApplication: bool const*
    ss << "  autoAcceptOutstandingApplication " << request->autoAcceptOutstandingApplication; Log(ss); // Class: bool     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPrerequisitePFGroupsInviteToGroupResponse( PFGroupsInviteToGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsInviteToGroupResponse
    ss << "  expires " << result->expires; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    ss << "  invitedByEntity " << result->invitedByEntity; Log(ss); // Class: PFGroupsEntityWithLineage 
    ss << "  invitedEntity " << result->invitedEntity; Log(ss); // Class: PFGroupsEntityWithLineage 
    if( result->roleId ) { ss << "  roleId " << result->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}
void AutoGenGroupsTests::LogPrerequisiteBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request, const char* prereqName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }
    
    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Prerequisite: " << prereqName; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsBlockEntityRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

 

void AutoGenGroupsTests::LogSetPublisherDataRequest( PlayFab::SetPublisherDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsSetPublisherDataRequest struct:
    // request->key: const char*
    if( request->key ) { ss << "  key " << request->key; Log(ss); } else { ss << "  key = nullptr"; Log(ss); } // Class: const char* 
    if( request->value ) { ss << "  value " << request->value; Log(ss); } else { ss << "  value = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogAddSharedGroupMembersRequest( PlayFab::GroupsModels::AddSharedGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsAddSharedGroupMembersRequest struct:
    // request->playFabIds: const char* const*
    // request->playFabIdsCount: uint32_t    
    ss << "  playFabIdsCount " << request->playFabIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->playFabIdsCount; i++ )
    {
            ss << "  request->playFabIds[" << i << "]:" << request->playFabIds[i]; Log(ss); // const char*
    } 
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogCreateSharedGroupRequest( PlayFab::GroupsModels::CreateSharedGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsCreateSharedGroupRequest struct:
    // request->sharedGroupId: const char*
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsCreateSharedGroupResult(PFGroupsCreateSharedGroupResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsCreateSharedGroupResult
    if( result->sharedGroupId ) { ss << "  sharedGroupId " << result->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenGroupsTests::LogGetSharedGroupDataRequest( PlayFab::GroupsModels::GetSharedGroupDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsGetSharedGroupDataRequest struct:
    // request->getMembers: bool const*
    ss << "  getMembers " << request->getMembers; Log(ss); // Class: bool     
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
            ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsGetSharedGroupDataResult(PFGroupsGetSharedGroupDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsGetSharedGroupDataResult    
    ss << "  dataCount " << result->dataCount; Log(ss);

    // PFGroupsSharedGroupDataRecordDictionaryEntry
    for( uint32_t i=0; i<result->dataCount; i++ )
    {
            ss << "  result->data[" << i << "]:" << result->data[i].key << "=" << result->data[i].value; Log(ss);
            
    }     
    ss << "  membersCount " << result->membersCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
            ss << "  result->members[" << i << "]:" << result->members[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogRemoveSharedGroupMembersRequest( PlayFab::GroupsModels::RemoveSharedGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsRemoveSharedGroupMembersRequest struct:
    // request->playFabIds: const char* const*
    // request->playFabIdsCount: uint32_t    
    ss << "  playFabIdsCount " << request->playFabIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->playFabIdsCount; i++ )
    {
            ss << "  request->playFabIds[" << i << "]:" << request->playFabIds[i]; Log(ss); // const char*
    } 
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogUpdateSharedGroupDataRequest( PlayFab::GroupsModels::UpdateSharedGroupDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsUpdateSharedGroupDataRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  dataCount " << request->dataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->dataCount; i++ )
    {
            ss << "  request->data[" << i << "]:" << request->data[i].key << "=" << request->data[i].value; Log(ss);
            
    }     
    ss << "  keysToRemoveCount " << request->keysToRemoveCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysToRemoveCount; i++ )
    {
            ss << "  request->keysToRemove[" << i << "]:" << request->keysToRemove[i]; Log(ss); // const char*
    } 
    ss << "  permission " << request->permission; Log(ss); // Class: PFUserDataPermission 
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogDeleteSharedGroupRequest( PlayFab::GroupsModels::DeleteSharedGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsDeleteSharedGroupRequest struct:
    // request->sharedGroupId: const char*
    if( request->sharedGroupId ) { ss << "  sharedGroupId " << request->sharedGroupId; Log(ss); } else { ss << "  sharedGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsAcceptGroupApplicationRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

void AutoGenGroupsTests::LogAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsAcceptGroupInvitationRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

void AutoGenGroupsTests::LogAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsAddMembersRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PFEntityKey
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
            ss << "  request->members[" << i << "]:" << request->members[i]; Log(ss); // PFEntityKey
    } 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsApplyToGroupRequest struct:
    // request->autoAcceptOutstandingInvite: bool const*
    ss << "  autoAcceptOutstandingInvite " << request->autoAcceptOutstandingInvite; Log(ss); // Class: bool     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPFGroupsApplyToGroupResponse(PFGroupsApplyToGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsApplyToGroupResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFGroupsEntityWithLineage 
    ss << "  expires " << result->expires; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    return S_OK;
}

void AutoGenGroupsTests::LogBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsBlockEntityRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

void AutoGenGroupsTests::LogChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsChangeMemberRoleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->destinationRoleId ) { ss << "  destinationRoleId " << request->destinationRoleId; Log(ss); } else { ss << "  destinationRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PFEntityKey
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
            ss << "  request->members[" << i << "]:" << request->members[i]; Log(ss); // PFEntityKey
    } 
    if( request->originRoleId ) { ss << "  originRoleId " << request->originRoleId; Log(ss); } else { ss << "  originRoleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsCreateGroupRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsCreateGroupResponse(PFGroupsCreateGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsCreateGroupResponse
    if( result->adminRoleId ) { ss << "  adminRoleId " << result->adminRoleId; Log(ss); } else { ss << "  adminRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  created " << result->created; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    if( result->groupName ) { ss << "  groupName " << result->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( result->memberRoleId ) { ss << "  memberRoleId " << result->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  rolesCount " << result->rolesCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->rolesCount; i++ )
    {
            ss << "  result->roles[" << i << "]:" << result->roles[i].key << "=" << result->roles[i].value; Log(ss);
            
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsCreateGroupRoleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    if( request->roleName ) { ss << "  roleName " << request->roleName; Log(ss); } else { ss << "  roleName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsCreateGroupRoleResponse(PFGroupsCreateGroupRoleResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsCreateGroupRoleResponse
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    if( result->roleId ) { ss << "  roleId " << result->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    if( result->roleName ) { ss << "  roleName " << result->roleName; Log(ss); } else { ss << "  roleName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenGroupsTests::LogDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsDeleteGroupRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

void AutoGenGroupsTests::LogDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsDeleteRoleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsGetGroupRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsGetGroupResponse(PFGroupsGetGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsGetGroupResponse
    if( result->adminRoleId ) { ss << "  adminRoleId " << result->adminRoleId; Log(ss); } else { ss << "  adminRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  created " << result->created; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    if( result->groupName ) { ss << "  groupName " << result->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( result->memberRoleId ) { ss << "  memberRoleId " << result->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  rolesCount " << result->rolesCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->rolesCount; i++ )
    {
            ss << "  result->roles[" << i << "]:" << result->roles[i].key << "=" << result->roles[i].value; Log(ss);
            
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsInviteToGroupRequest struct:
    // request->autoAcceptOutstandingApplication: bool const*
    ss << "  autoAcceptOutstandingApplication " << request->autoAcceptOutstandingApplication; Log(ss); // Class: bool     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsInviteToGroupResponse(PFGroupsInviteToGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsInviteToGroupResponse
    ss << "  expires " << result->expires; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PFEntityKey 
    ss << "  invitedByEntity " << result->invitedByEntity; Log(ss); // Class: PFGroupsEntityWithLineage 
    ss << "  invitedEntity " << result->invitedEntity; Log(ss); // Class: PFGroupsEntityWithLineage 
    if( result->roleId ) { ss << "  roleId " << result->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenGroupsTests::LogIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsIsMemberRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsIsMemberResponse(PFGroupsIsMemberResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsIsMemberResponse
    ss << "  isMember " << result->isMember; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenGroupsTests::LogListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupApplicationsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPFGroupsListGroupApplicationsResponse(PFGroupsListGroupApplicationsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupApplicationsResponse    
    ss << "  applicationsCount " << result->applicationsCount; Log(ss);

    // PFGroupsGroupApplication
    for( uint32_t i=0; i<result->applicationsCount; i++ )
    {
            ss << "  result->applications[" << i << "]:" << result->applications[i]; Log(ss); // PFGroupsGroupApplication
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupBlocksRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPFGroupsListGroupBlocksResponse(PFGroupsListGroupBlocksResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupBlocksResponse    
    ss << "  blockedEntitiesCount " << result->blockedEntitiesCount; Log(ss);

    // PFGroupsGroupBlock
    for( uint32_t i=0; i<result->blockedEntitiesCount; i++ )
    {
            ss << "  result->blockedEntities[" << i << "]:" << result->blockedEntities[i]; Log(ss); // PFGroupsGroupBlock
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupInvitationsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPFGroupsListGroupInvitationsResponse(PFGroupsListGroupInvitationsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupInvitationsResponse    
    ss << "  invitationsCount " << result->invitationsCount; Log(ss);

    // PFGroupsGroupInvitation
    for( uint32_t i=0; i<result->invitationsCount; i++ )
    {
            ss << "  result->invitations[" << i << "]:" << result->invitations[i]; Log(ss); // PFGroupsGroupInvitation
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupMembersRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPFGroupsListGroupMembersResponse(PFGroupsListGroupMembersResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupMembersResponse    
    ss << "  membersCount " << result->membersCount; Log(ss);

    // PFGroupsEntityMemberRole
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
            ss << "  result->members[" << i << "]:" << result->members[i]; Log(ss); // PFGroupsEntityMemberRole
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingWithData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListMembershipRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPFGroupsListMembershipResponse(PFGroupsListMembershipResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListMembershipResponse    
    ss << "  groupsCount " << result->groupsCount; Log(ss);

    // PFGroupsGroupWithRoles
    for( uint32_t i=0; i<result->groupsCount; i++ )
    {
            ss << "  result->groups[" << i << "]:" << result->groups[i]; Log(ss); // PFGroupsGroupWithRoles
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: PassingButNoData"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListMembershipOpportunitiesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 

}

HRESULT AutoGenGroupsTests::LogPFGroupsListMembershipOpportunitiesResponse(PFGroupsListMembershipOpportunitiesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListMembershipOpportunitiesResponse    
    ss << "  applicationsCount " << result->applicationsCount; Log(ss);

    // PFGroupsGroupApplication
    for( uint32_t i=0; i<result->applicationsCount; i++ )
    {
            ss << "  result->applications[" << i << "]:" << result->applications[i]; Log(ss); // PFGroupsGroupApplication
    }     
    ss << "  invitationsCount " << result->invitationsCount; Log(ss);

    // PFGroupsGroupInvitation
    for( uint32_t i=0; i<result->invitationsCount; i++ )
    {
            ss << "  result->invitations[" << i << "]:" << result->invitations[i]; Log(ss); // PFGroupsGroupInvitation
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsRemoveGroupApplicationRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

void AutoGenGroupsTests::LogRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsRemoveGroupInvitationRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

void AutoGenGroupsTests::LogRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsRemoveMembersRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PFEntityKey
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
            ss << "  request->members[" << i << "]:" << request->members[i]; Log(ss); // PFEntityKey
    } 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsUnblockEntityRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 

}

void AutoGenGroupsTests::LogUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsUpdateGroupRequest struct:
    // request->adminRoleId: const char*
    if( request->adminRoleId ) { ss << "  adminRoleId " << request->adminRoleId; Log(ss); } else { ss << "  adminRoleId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  expectedProfileVersion " << request->expectedProfileVersion; Log(ss); // Class: int32_t 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( request->memberRoleId ) { ss << "  memberRoleId " << request->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsUpdateGroupResponse(PFGroupsUpdateGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsUpdateGroupResponse
    if( result->operationReason ) { ss << "  operationReason " << result->operationReason; Log(ss); } else { ss << "  operationReason = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    ss << "  setResult " << result->setResult; Log(ss); // Class: PFOperationTypes 
    return S_OK;
}

void AutoGenGroupsTests::LogUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_GroupsTestIndex++ << ": " << testName << ".  Last Known Status: Failing"; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsUpdateGroupRoleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  expectedProfileVersion " << request->expectedProfileVersion; Log(ss); // Class: int32_t 
    ss << "  group " << request->group; Log(ss); // Class: PFEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    if( request->roleName ) { ss << "  roleName " << request->roleName; Log(ss); } else { ss << "  roleName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPFGroupsUpdateGroupRoleResponse(PFGroupsUpdateGroupRoleResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsUpdateGroupRoleResponse
    if( result->operationReason ) { ss << "  operationReason " << result->operationReason; Log(ss); } else { ss << "  operationReason = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    ss << "  setResult " << result->setResult; Log(ss); // Class: PFOperationTypes 
    return S_OK;
}

 

}
