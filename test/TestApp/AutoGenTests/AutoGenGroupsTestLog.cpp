#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenGroupsTests.h"
#include "XAsyncHelper.h"
#include <playfab/PlayFabClientAuthApi.h>
#include <playfab/PlayFabClientApi.h>
#include <playfab/PlayFabProfilesApi.h>
#include <playfab/PlayFabAdminApi.h>
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include <playfab/PlayFabClientDataModels.h>

uint32_t g_testIndex = 1;

namespace PlayFabUnit
{

void AutoGenGroupsTests::LogPlayFabGroupsAcceptGroupApplicationRequest( PlayFab::GroupsModels::AcceptGroupApplicationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsAcceptGroupApplicationRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

void AutoGenGroupsTests::LogPlayFabGroupsAcceptGroupInvitationRequest( PlayFab::GroupsModels::AcceptGroupInvitationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsAcceptGroupInvitationRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

void AutoGenGroupsTests::LogPlayFabGroupsAddMembersRequest( PlayFab::GroupsModels::AddMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsAddMembersRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PlayFabEntityKey
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
        ss << "  request->members[" << i << "]:" << request->members[i]; Log(ss); // PlayFabEntityKey
    } 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogPlayFabGroupsApplyToGroupRequest( PlayFab::GroupsModels::ApplyToGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsApplyToGroupRequest struct:
    // request->autoAcceptOutstandingInvite: bool const*
    ss << "  autoAcceptOutstandingInvite " << request->autoAcceptOutstandingInvite; Log(ss); // Class: bool     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsApplyToGroupResponse( PlayFabGroupsApplyToGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsApplyToGroupResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
    ss << "  expires " << result->expires; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PlayFabEntityKey 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsBlockEntityRequest( PlayFab::GroupsModels::BlockEntityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsBlockEntityRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

void AutoGenGroupsTests::LogPlayFabGroupsChangeMemberRoleRequest( PlayFab::GroupsModels::ChangeMemberRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsChangeMemberRoleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->destinationRoleId ) { ss << "  destinationRoleId " << request->destinationRoleId; Log(ss); } else { ss << "  destinationRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PlayFabEntityKey
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
        ss << "  request->members[" << i << "]:" << request->members[i]; Log(ss); // PlayFabEntityKey
    } 
    if( request->originRoleId ) { ss << "  originRoleId " << request->originRoleId; Log(ss); } else { ss << "  originRoleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogPlayFabGroupsCreateGroupRequest( PlayFab::GroupsModels::CreateGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsCreateGroupRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsCreateGroupResponse( PlayFabGroupsCreateGroupResponse* result )
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
    ss << "  group " << result->group; Log(ss); // Class: PlayFabEntityKey 
    if( result->groupName ) { ss << "  groupName " << result->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( result->memberRoleId ) { ss << "  memberRoleId " << result->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  rolesCount " << result->rolesCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->rolesCount; i++ )
    {
        ss << "  result->roles[" << i << "]:" << result->roles[i].key << "=" << result->roles[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsCreateGroupRoleRequest( PlayFab::GroupsModels::CreateGroupRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsCreateGroupRoleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    if( request->roleName ) { ss << "  roleName " << request->roleName; Log(ss); } else { ss << "  roleName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsCreateGroupRoleResponse( PlayFabGroupsCreateGroupRoleResponse* result )
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

void AutoGenGroupsTests::LogPlayFabGroupsDeleteGroupRequest( PlayFab::GroupsModels::DeleteGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsDeleteGroupRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

void AutoGenGroupsTests::LogPlayFabGroupsDeleteRoleRequest( PlayFab::GroupsModels::DeleteRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsDeleteRoleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogPlayFabGroupsGetGroupRequest( PlayFab::GroupsModels::GetGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsGetGroupRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsGetGroupResponse( PlayFabGroupsGetGroupResponse* result )
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
    ss << "  group " << result->group; Log(ss); // Class: PlayFabEntityKey 
    if( result->groupName ) { ss << "  groupName " << result->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( result->memberRoleId ) { ss << "  memberRoleId " << result->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  rolesCount " << result->rolesCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->rolesCount; i++ )
    {
        ss << "  result->roles[" << i << "]:" << result->roles[i].key << "=" << result->roles[i].value; Log(ss);
        
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsInviteToGroupRequest( PlayFab::GroupsModels::InviteToGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsInviteToGroupRequest struct:
    // request->autoAcceptOutstandingApplication: bool const*
    ss << "  autoAcceptOutstandingApplication " << request->autoAcceptOutstandingApplication; Log(ss); // Class: bool     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsInviteToGroupResponse( PlayFabGroupsInviteToGroupResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsInviteToGroupResponse
    ss << "  expires " << result->expires; Log(ss); // Class: time_t 
    ss << "  group " << result->group; Log(ss); // Class: PlayFabEntityKey 
    ss << "  invitedByEntity " << result->invitedByEntity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
    ss << "  invitedEntity " << result->invitedEntity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
    if( result->roleId ) { ss << "  roleId " << result->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsIsMemberRequest( PlayFab::GroupsModels::IsMemberRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsIsMemberRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsIsMemberResponse( PlayFabGroupsIsMemberResponse* result )
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

void AutoGenGroupsTests::LogPlayFabGroupsListGroupApplicationsRequest( PlayFab::GroupsModels::ListGroupApplicationsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupApplicationsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsListGroupApplicationsResponse( PlayFabGroupsListGroupApplicationsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupApplicationsResponse    
    ss << "  applicationsCount " << result->applicationsCount; Log(ss);

    // PlayFabGroupsGroupApplication
    for( uint32_t i=0; i<result->applicationsCount; i++ )
    {
        ss << "  applications["<<i<<"]->entity " << result->applications[i]->entity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        ss << "  applications["<<i<<"]->expires " << result->applications[i]->expires; Log(ss); // Class: time_t 
        ss << "  applications["<<i<<"]->group " << result->applications[i]->group; Log(ss); // Class: PlayFabEntityKey 
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsListGroupBlocksRequest( PlayFab::GroupsModels::ListGroupBlocksRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupBlocksRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsListGroupBlocksResponse( PlayFabGroupsListGroupBlocksResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupBlocksResponse    
    ss << "  blockedEntitiesCount " << result->blockedEntitiesCount; Log(ss);

    // PlayFabGroupsGroupBlock
    for( uint32_t i=0; i<result->blockedEntitiesCount; i++ )
    {
        ss << "  blockedEntities["<<i<<"]->entity " << result->blockedEntities[i]->entity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        ss << "  blockedEntities["<<i<<"]->group " << result->blockedEntities[i]->group; Log(ss); // Class: PlayFabEntityKey 
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsListGroupInvitationsRequest( PlayFab::GroupsModels::ListGroupInvitationsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupInvitationsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsListGroupInvitationsResponse( PlayFabGroupsListGroupInvitationsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupInvitationsResponse    
    ss << "  invitationsCount " << result->invitationsCount; Log(ss);

    // PlayFabGroupsGroupInvitation
    for( uint32_t i=0; i<result->invitationsCount; i++ )
    {
        ss << "  invitations["<<i<<"]->expires " << result->invitations[i]->expires; Log(ss); // Class: time_t 
        ss << "  invitations["<<i<<"]->group " << result->invitations[i]->group; Log(ss); // Class: PlayFabEntityKey 
        ss << "  invitations["<<i<<"]->invitedByEntity " << result->invitations[i]->invitedByEntity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        ss << "  invitations["<<i<<"]->invitedEntity " << result->invitations[i]->invitedEntity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        if( result->invitations[i]->roleId ) { ss << "  invitations["<<i<<"]->roleId " << result->invitations[i]->roleId; Log(ss); } else { ss << "  invitations["<<i<<"]->roleId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsListGroupMembersRequest( PlayFab::GroupsModels::ListGroupMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListGroupMembersRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsListGroupMembersResponse( PlayFabGroupsListGroupMembersResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListGroupMembersResponse    
    ss << "  membersCount " << result->membersCount; Log(ss);

    // PlayFabGroupsEntityMemberRole
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
        ss << "  members["<<i<<"]->members " << result->members[i]->members; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        if( result->members[i]->roleId ) { ss << "  members["<<i<<"]->roleId " << result->members[i]->roleId; Log(ss); } else { ss << "  members["<<i<<"]->roleId = nullptr"; Log(ss); } // Class: const char* 
        if( result->members[i]->roleName ) { ss << "  members["<<i<<"]->roleName " << result->members[i]->roleName; Log(ss); } else { ss << "  members["<<i<<"]->roleName = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsListMembershipRequest( PlayFab::GroupsModels::ListMembershipRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListMembershipRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsListMembershipResponse( PlayFabGroupsListMembershipResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListMembershipResponse    
    ss << "  groupsCount " << result->groupsCount; Log(ss);

    // PlayFabGroupsGroupWithRoles
    for( uint32_t i=0; i<result->groupsCount; i++ )
    {
        ss << "  groups["<<i<<"]->group " << result->groups[i]->group; Log(ss); // Class: PlayFabEntityKey 
        if( result->groups[i]->groupName ) { ss << "  groups["<<i<<"]->groupName " << result->groups[i]->groupName; Log(ss); } else { ss << "  groups["<<i<<"]->groupName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  groups["<<i<<"]->profileVersion " << result->groups[i]->profileVersion; Log(ss); // Class: int32_t 
        ss << "  groups["<<i<<"]->roles " << result->groups[i]->roles; Log(ss); // Class: PlayFabGroupsGroupRole 
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsListMembershipOpportunitiesRequest( PlayFab::GroupsModels::ListMembershipOpportunitiesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsListMembershipOpportunitiesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsListMembershipOpportunitiesResponse( PlayFabGroupsListMembershipOpportunitiesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabGroupsListMembershipOpportunitiesResponse    
    ss << "  applicationsCount " << result->applicationsCount; Log(ss);

    // PlayFabGroupsGroupApplication
    for( uint32_t i=0; i<result->applicationsCount; i++ )
    {
        ss << "  applications["<<i<<"]->entity " << result->applications[i]->entity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        ss << "  applications["<<i<<"]->expires " << result->applications[i]->expires; Log(ss); // Class: time_t 
        ss << "  applications["<<i<<"]->group " << result->applications[i]->group; Log(ss); // Class: PlayFabEntityKey 
    }     
    ss << "  invitationsCount " << result->invitationsCount; Log(ss);

    // PlayFabGroupsGroupInvitation
    for( uint32_t i=0; i<result->invitationsCount; i++ )
    {
        ss << "  invitations["<<i<<"]->expires " << result->invitations[i]->expires; Log(ss); // Class: time_t 
        ss << "  invitations["<<i<<"]->group " << result->invitations[i]->group; Log(ss); // Class: PlayFabEntityKey 
        ss << "  invitations["<<i<<"]->invitedByEntity " << result->invitations[i]->invitedByEntity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        ss << "  invitations["<<i<<"]->invitedEntity " << result->invitations[i]->invitedEntity; Log(ss); // Class: PlayFabGroupsEntityWithLineage 
        if( result->invitations[i]->roleId ) { ss << "  invitations["<<i<<"]->roleId " << result->invitations[i]->roleId; Log(ss); } else { ss << "  invitations["<<i<<"]->roleId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsRemoveGroupApplicationRequest( PlayFab::GroupsModels::RemoveGroupApplicationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsRemoveGroupApplicationRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

void AutoGenGroupsTests::LogPlayFabGroupsRemoveGroupInvitationRequest( PlayFab::GroupsModels::RemoveGroupInvitationRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsRemoveGroupInvitationRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

void AutoGenGroupsTests::LogPlayFabGroupsRemoveMembersRequest( PlayFab::GroupsModels::RemoveMembersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsRemoveMembersRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PlayFabEntityKey
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
        ss << "  request->members[" << i << "]:" << request->members[i]; Log(ss); // PlayFabEntityKey
    } 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenGroupsTests::LogPlayFabGroupsUnblockEntityRequest( PlayFab::GroupsModels::UnblockEntityRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsUnblockEntityRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 

}

void AutoGenGroupsTests::LogPlayFabGroupsUpdateGroupRequest( PlayFab::GroupsModels::UpdateGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsUpdateGroupRequest struct:
    // request->adminRoleId: const char*
    if( request->adminRoleId ) { ss << "  adminRoleId " << request->adminRoleId; Log(ss); } else { ss << "  adminRoleId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  expectedProfileVersion " << request->expectedProfileVersion; Log(ss); // Class: int32_t 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 
    if( request->groupName ) { ss << "  groupName " << request->groupName; Log(ss); } else { ss << "  groupName = nullptr"; Log(ss); } // Class: const char* 
    if( request->memberRoleId ) { ss << "  memberRoleId " << request->memberRoleId; Log(ss); } else { ss << "  memberRoleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsUpdateGroupResponse( PlayFabGroupsUpdateGroupResponse* result )
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
    ss << "  setResult " << result->setResult; Log(ss); // Class: PlayFabGroupsOperationTypes 
    return S_OK;
}

void AutoGenGroupsTests::LogPlayFabGroupsUpdateGroupRoleRequest( PlayFab::GroupsModels::UpdateGroupRoleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabGroupsUpdateGroupRoleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  expectedProfileVersion " << request->expectedProfileVersion; Log(ss); // Class: int32_t 
    ss << "  group " << request->group; Log(ss); // Class: PlayFabEntityKey 
    if( request->roleId ) { ss << "  roleId " << request->roleId; Log(ss); } else { ss << "  roleId = nullptr"; Log(ss); } // Class: const char* 
    if( request->roleName ) { ss << "  roleName " << request->roleName; Log(ss); } else { ss << "  roleName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenGroupsTests::LogPlayFabGroupsUpdateGroupRoleResponse( PlayFabGroupsUpdateGroupRoleResponse* result )
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
    ss << "  setResult " << result->setResult; Log(ss); // Class: PlayFabGroupsOperationTypes 
    return S_OK;
}

 

}
