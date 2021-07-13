#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenProfilesTests.h"
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

void AutoGenProfilesTests::LogPlayFabProfilesGetGlobalPolicyRequest( PlayFab::ProfilesModels::GetGlobalPolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabProfilesGetGlobalPolicyRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenProfilesTests::LogPlayFabProfilesGetGlobalPolicyResponse( PlayFabProfilesGetGlobalPolicyResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabProfilesGetGlobalPolicyResponse    
    ss << "  permissionsCount " << result->permissionsCount; Log(ss);

    // PlayFabProfilesEntityPermissionStatement
    for( uint32_t i=0; i<result->permissionsCount; i++ )
    {
        if( result->permissions[i]->action ) { ss << "  permissions["<<i<<"]->action " << result->permissions[i]->action; Log(ss); } else { ss << "  permissions["<<i<<"]->action = nullptr"; Log(ss); } // Class: const char* 
        if( result->permissions[i]->comment ) { ss << "  permissions["<<i<<"]->comment " << result->permissions[i]->comment; Log(ss); } else { ss << "  permissions["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        if( result->permissions[i]->condition.stringValue ) { ss << "  permissions["<<i<<"]->condition " << result->permissions[i]->condition.stringValue; Log(ss); } else { ss << "  permissions[i]->condition = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        ss << "  permissions["<<i<<"]->effect " << result->permissions[i]->effect; Log(ss); // Class: PlayFabProfilesEffectType 
        if( result->permissions[i]->principal.stringValue ) { ss << "  permissions["<<i<<"]->principal " << result->permissions[i]->principal.stringValue; Log(ss); } else { ss << "  permissions[i]->principal = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( result->permissions[i]->resource ) { ss << "  permissions["<<i<<"]->resource " << result->permissions[i]->resource; Log(ss); } else { ss << "  permissions["<<i<<"]->resource = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenProfilesTests::LogPlayFabProfilesGetEntityProfileRequest( PlayFab::ProfilesModels::GetEntityProfileRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabProfilesGetEntityProfileRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  dataAsObject " << request->dataAsObject; Log(ss); // Class: bool 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 

}

HRESULT AutoGenProfilesTests::LogPlayFabProfilesGetEntityProfileResponse( PlayFabProfilesGetEntityProfileResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabProfilesGetEntityProfileResponse
    ss << "  profile " << result->profile; Log(ss); // Class: PlayFabProfilesEntityProfileBody 
    return S_OK;
}

void AutoGenProfilesTests::LogPlayFabProfilesGetEntityProfilesRequest( PlayFab::ProfilesModels::GetEntityProfilesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabProfilesGetEntityProfilesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  dataAsObject " << request->dataAsObject; Log(ss); // Class: bool     
    ss << "  entitiesCount " << request->entitiesCount; Log(ss);

    // PlayFabEntityKey
    for( uint32_t i=0; i<request->entitiesCount; i++ )
    {
        ss << "  request->entities[" << i << "]:" << request->entities[i]; Log(ss); // PlayFabEntityKey
    } 

}

HRESULT AutoGenProfilesTests::LogPlayFabProfilesGetEntityProfilesResponse( PlayFabProfilesGetEntityProfilesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabProfilesGetEntityProfilesResponse    
    ss << "  profilesCount " << result->profilesCount; Log(ss);

    // PlayFabProfilesEntityProfileBody
    for( uint32_t i=0; i<result->profilesCount; i++ )
    {
        if( result->profiles[i]->avatarUrl ) { ss << "  profiles["<<i<<"]->avatarUrl " << result->profiles[i]->avatarUrl; Log(ss); } else { ss << "  profiles["<<i<<"]->avatarUrl = nullptr"; Log(ss); } // Class: const char* 
        ss << "  profiles["<<i<<"]->created " << result->profiles[i]->created; Log(ss); // Class: time_t 
        if( result->profiles[i]->displayName ) { ss << "  profiles["<<i<<"]->displayName " << result->profiles[i]->displayName; Log(ss); } else { ss << "  profiles["<<i<<"]->displayName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  profiles["<<i<<"]->entity " << result->profiles[i]->entity; Log(ss); // Class: PlayFabEntityKey 
        if( result->profiles[i]->entityChain ) { ss << "  profiles["<<i<<"]->entityChain " << result->profiles[i]->entityChain; Log(ss); } else { ss << "  profiles["<<i<<"]->entityChain = nullptr"; Log(ss); } // Class: const char* 
        if( result->profiles[i]->experimentVariants ) { ss << "  profiles["<<i<<"]->experimentVariants " << result->profiles[i]->experimentVariants; Log(ss); } else { ss << "  profiles["<<i<<"]->experimentVariants = nullptr"; Log(ss); } // Class: const char* 
        ss << "  profiles["<<i<<"]->files " << result->profiles[i]->files; Log(ss); // Class: PlayFabProfilesEntityProfileFileMetadataDictionaryEntry 
        if( result->profiles[i]->language ) { ss << "  profiles["<<i<<"]->language " << result->profiles[i]->language; Log(ss); } else { ss << "  profiles["<<i<<"]->language = nullptr"; Log(ss); } // Class: const char* 
        if( result->profiles[i]->leaderboardMetadata ) { ss << "  profiles["<<i<<"]->leaderboardMetadata " << result->profiles[i]->leaderboardMetadata; Log(ss); } else { ss << "  profiles["<<i<<"]->leaderboardMetadata = nullptr"; Log(ss); } // Class: const char* 
        ss << "  profiles["<<i<<"]->lineage " << result->profiles[i]->lineage; Log(ss); // Class: PlayFabProfilesEntityLineage 
        ss << "  profiles["<<i<<"]->objects " << result->profiles[i]->objects; Log(ss); // Class: PlayFabProfilesEntityDataObjectDictionaryEntry 
        ss << "  profiles["<<i<<"]->permissions " << result->profiles[i]->permissions; Log(ss); // Class: PlayFabProfilesEntityPermissionStatement 
        ss << "  profiles["<<i<<"]->statistics " << result->profiles[i]->statistics; Log(ss); // Class: PlayFabProfilesEntityStatisticValueDictionaryEntry 
        ss << "  profiles["<<i<<"]->versionNumber " << result->profiles[i]->versionNumber; Log(ss); // Class: int32_t 
    } 
    return S_OK;
}

void AutoGenProfilesTests::LogPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest( PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  masterPlayerAccountIdsCount " << request->masterPlayerAccountIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->masterPlayerAccountIdsCount; i++ )
    {
        ss << "  request->masterPlayerAccountIds[" << i << "]:" << request->masterPlayerAccountIds[i]; Log(ss); // const char*
    } 
    if( request->titleId ) { ss << "  titleId " << request->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenProfilesTests::LogPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse( PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse
    if( result->titleId ) { ss << "  titleId " << result->titleId; Log(ss); } else { ss << "  titleId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  titlePlayerAccountsCount " << result->titlePlayerAccountsCount; Log(ss);

    // PlayFabEntityKeyDictionaryEntry
    for( uint32_t i=0; i<result->titlePlayerAccountsCount; i++ )
    {
        ss << "  result->titlePlayerAccounts[" << i << "]:" << result->titlePlayerAccounts[i]; Log(ss); // PlayFabEntityKeyDictionaryEntry
    } 
    return S_OK;
}

void AutoGenProfilesTests::LogPlayFabProfilesSetGlobalPolicyRequest( PlayFab::ProfilesModels::SetGlobalPolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabProfilesSetGlobalPolicyRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  permissionsCount " << request->permissionsCount; Log(ss);

    // PlayFabProfilesEntityPermissionStatement
    for( uint32_t i=0; i<request->permissionsCount; i++ )
    {
        if( request->permissions[i]->action ) { ss << "  permissions["<<i<<"]->action " << request->permissions[i]->action; Log(ss); } else { ss << "  permissions["<<i<<"]->action = nullptr"; Log(ss); } // Class: const char* 
        if( request->permissions[i]->comment ) { ss << "  permissions["<<i<<"]->comment " << request->permissions[i]->comment; Log(ss); } else { ss << "  permissions["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        if( request->permissions[i]->condition.stringValue ) { ss << "  permissions["<<i<<"]->condition " << request->permissions[i]->condition.stringValue; Log(ss); } else { ss << "  permissions[i]->condition = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        ss << "  permissions["<<i<<"]->effect " << request->permissions[i]->effect; Log(ss); // Class: PlayFabProfilesEffectType 
        if( request->permissions[i]->principal.stringValue ) { ss << "  permissions["<<i<<"]->principal " << request->permissions[i]->principal.stringValue; Log(ss); } else { ss << "  permissions[i]->principal = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( request->permissions[i]->resource ) { ss << "  permissions["<<i<<"]->resource " << request->permissions[i]->resource; Log(ss); } else { ss << "  permissions["<<i<<"]->resource = nullptr"; Log(ss); } // Class: const char* 
    } 

}

void AutoGenProfilesTests::LogPlayFabProfilesSetProfileLanguageRequest( PlayFab::ProfilesModels::SetProfileLanguageRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabProfilesSetProfileLanguageRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  expectedVersion " << request->expectedVersion; Log(ss); // Class: int32_t 
    if( request->language ) { ss << "  language " << request->language; Log(ss); } else { ss << "  language = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenProfilesTests::LogPlayFabProfilesSetProfileLanguageResponse( PlayFabProfilesSetProfileLanguageResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabProfilesSetProfileLanguageResponse
    ss << "  operationResult " << result->operationResult; Log(ss); // Class: PlayFabProfilesOperationTypes 
    ss << "  versionNumber " << result->versionNumber; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenProfilesTests::LogPlayFabProfilesSetEntityProfilePolicyRequest( PlayFab::ProfilesModels::SetEntityProfilePolicyRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabProfilesSetEntityProfilePolicyRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  statementsCount " << request->statementsCount; Log(ss);

    // PlayFabProfilesEntityPermissionStatement
    for( uint32_t i=0; i<request->statementsCount; i++ )
    {
        if( request->statements[i]->action ) { ss << "  statements["<<i<<"]->action " << request->statements[i]->action; Log(ss); } else { ss << "  statements["<<i<<"]->action = nullptr"; Log(ss); } // Class: const char* 
        if( request->statements[i]->comment ) { ss << "  statements["<<i<<"]->comment " << request->statements[i]->comment; Log(ss); } else { ss << "  statements["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        if( request->statements[i]->condition.stringValue ) { ss << "  statements["<<i<<"]->condition " << request->statements[i]->condition.stringValue; Log(ss); } else { ss << "  statements[i]->condition = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        ss << "  statements["<<i<<"]->effect " << request->statements[i]->effect; Log(ss); // Class: PlayFabProfilesEffectType 
        if( request->statements[i]->principal.stringValue ) { ss << "  statements["<<i<<"]->principal " << request->statements[i]->principal.stringValue; Log(ss); } else { ss << "  statements[i]->principal = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( request->statements[i]->resource ) { ss << "  statements["<<i<<"]->resource " << request->statements[i]->resource; Log(ss); } else { ss << "  statements["<<i<<"]->resource = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenProfilesTests::LogPlayFabProfilesSetEntityProfilePolicyResponse( PlayFabProfilesSetEntityProfilePolicyResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabProfilesSetEntityProfilePolicyResponse    
    ss << "  permissionsCount " << result->permissionsCount; Log(ss);

    // PlayFabProfilesEntityPermissionStatement
    for( uint32_t i=0; i<result->permissionsCount; i++ )
    {
        if( result->permissions[i]->action ) { ss << "  permissions["<<i<<"]->action " << result->permissions[i]->action; Log(ss); } else { ss << "  permissions["<<i<<"]->action = nullptr"; Log(ss); } // Class: const char* 
        if( result->permissions[i]->comment ) { ss << "  permissions["<<i<<"]->comment " << result->permissions[i]->comment; Log(ss); } else { ss << "  permissions["<<i<<"]->comment = nullptr"; Log(ss); } // Class: const char* 
        if( result->permissions[i]->condition.stringValue ) { ss << "  permissions["<<i<<"]->condition " << result->permissions[i]->condition.stringValue; Log(ss); } else { ss << "  permissions[i]->condition = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        ss << "  permissions["<<i<<"]->effect " << result->permissions[i]->effect; Log(ss); // Class: PlayFabProfilesEffectType 
        if( result->permissions[i]->principal.stringValue ) { ss << "  permissions["<<i<<"]->principal " << result->permissions[i]->principal.stringValue; Log(ss); } else { ss << "  permissions[i]->principal = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( result->permissions[i]->resource ) { ss << "  permissions["<<i<<"]->resource " << result->permissions[i]->resource; Log(ss); } else { ss << "  permissions["<<i<<"]->resource = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

 

}
