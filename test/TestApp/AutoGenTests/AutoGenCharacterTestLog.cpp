#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenCharacterTests.h"
#include "XAsyncHelper.h"

uint32_t g_CharacterTestIndex = 1;

namespace PlayFabUnit
{

void AutoGenCharacterTests::LogResetCharacterStatisticsRequest( PlayFab::CharacterModels::ResetCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCharacterResetCharacterStatisticsRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenCharacterTests::LogListUsersCharactersRequest( PlayFab::CharacterModels::ListUsersCharactersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCharacterListUsersCharactersRequest struct:
    // request->playFabId: const char*
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenCharacterTests::LogPFCharacterListUsersCharactersResult(PFCharacterListUsersCharactersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCharacterListUsersCharactersResult    
    ss << "  charactersCount " << result->charactersCount; Log(ss);

    // PFCharacterResult
    for( uint32_t i=0; i<result->charactersCount; i++ )
    {
            ss << "  result->characters[" << i << "]:" << result->characters[i]; Log(ss); // PFCharacterResult
    } 
    return S_OK;
}

void AutoGenCharacterTests::LogGetCharacterDataRequest( PlayFab::CharacterModels::GetCharacterDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCharacterGetCharacterDataRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  ifChangedFromDataVersion " << request->ifChangedFromDataVersion; Log(ss); // Class: uint32_t     
    ss << "  keysCount " << request->keysCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->keysCount; i++ )
    {
            ss << "  request->keys[" << i << "]:" << request->keys[i]; Log(ss); // const char*
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenCharacterTests::LogPFCharacterClientGetCharacterDataResult(PFCharacterClientGetCharacterDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenCharacterTests::LogGetCharacterLeaderboardRequest( PlayFab::CharacterModels::GetCharacterLeaderboardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCharacterGetCharacterLeaderboardRequest struct:
    // request->characterType: const char*
    if( request->characterType ) { ss << "  characterType " << request->characterType; Log(ss); } else { ss << "  characterType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  maxResultsCount " << request->maxResultsCount; Log(ss); // Class: int32_t 
    ss << "  startPosition " << request->startPosition; Log(ss); // Class: int32_t 
    if( request->statisticName ) { ss << "  statisticName " << request->statisticName; Log(ss); } else { ss << "  statisticName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenCharacterTests::LogPFCharacterGetCharacterLeaderboardResult(PFCharacterGetCharacterLeaderboardResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCharacterGetCharacterLeaderboardResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PFCharacterCharacterLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
            ss << "  result->leaderboard[" << i << "]:" << result->leaderboard[i]; Log(ss); // PFCharacterCharacterLeaderboardEntry
    } 
    return S_OK;
}

void AutoGenCharacterTests::LogClientGetCharacterStatisticsRequest( PlayFab::CharacterModels::ClientGetCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenCharacterTests::LogPFCharacterClientGetCharacterStatisticsResult(PFCharacterClientGetCharacterStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenCharacterTests::LogClientGetLeaderboardAroundCharacterRequest( PlayFab::CharacterModels::ClientGetLeaderboardAroundCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenCharacterTests::LogPFCharacterGetLeaderboardAroundCharacterResult(PFCharacterGetLeaderboardAroundCharacterResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCharacterGetLeaderboardAroundCharacterResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PFCharacterCharacterLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
            ss << "  result->leaderboard[" << i << "]:" << result->leaderboard[i]; Log(ss); // PFCharacterCharacterLeaderboardEntry
    } 
    return S_OK;
}

void AutoGenCharacterTests::LogClientGetLeaderboardForUsersCharactersRequest( PlayFab::CharacterModels::ClientGetLeaderboardForUsersCharactersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenCharacterTests::LogPFCharacterGetLeaderboardForUsersCharactersResult(PFCharacterGetLeaderboardForUsersCharactersResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCharacterGetLeaderboardForUsersCharactersResult    
    ss << "  leaderboardCount " << result->leaderboardCount; Log(ss);

    // PFCharacterCharacterLeaderboardEntry
    for( uint32_t i=0; i<result->leaderboardCount; i++ )
    {
            ss << "  result->leaderboard[" << i << "]:" << result->leaderboard[i]; Log(ss); // PFCharacterCharacterLeaderboardEntry
    } 
    return S_OK;
}

void AutoGenCharacterTests::LogClientGrantCharacterToUserRequest( PlayFab::CharacterModels::ClientGrantCharacterToUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenCharacterTests::LogPFCharacterClientGrantCharacterToUserResult(PFCharacterClientGrantCharacterToUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenCharacterTests::LogClientUpdateCharacterDataRequest( PlayFab::CharacterModels::ClientUpdateCharacterDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenCharacterTests::LogPFCharacterUpdateCharacterDataResult(PFCharacterUpdateCharacterDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCharacterUpdateCharacterDataResult
    ss << "  dataVersion " << result->dataVersion; Log(ss); // Class: uint32_t 
    return S_OK;
}

void AutoGenCharacterTests::LogClientUpdateCharacterStatisticsRequest( PlayFab::CharacterModels::ClientUpdateCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenCharacterTests::LogDeleteCharacterFromUserRequest( PlayFab::CharacterModels::DeleteCharacterFromUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCharacterDeleteCharacterFromUserRequest struct:
    // request->characterId: const char*
    if( request->characterId ) { ss << "  characterId " << request->characterId; Log(ss); } else { ss << "  characterId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  saveCharacterInventory " << request->saveCharacterInventory; Log(ss); // Class: bool 

}

HRESULT AutoGenCharacterTests::LogPFCharacterServerGetCharacterDataResult(PFCharacterServerGetCharacterDataResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenCharacterTests::LogServerGetCharacterStatisticsRequest( PlayFab::CharacterModels::ServerGetCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenCharacterTests::LogPFCharacterServerGetCharacterStatisticsResult(PFCharacterServerGetCharacterStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenCharacterTests::LogServerGetLeaderboardAroundCharacterRequest( PlayFab::CharacterModels::ServerGetLeaderboardAroundCharacterRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenCharacterTests::LogServerGetLeaderboardForUsersCharactersRequest( PlayFab::CharacterModels::ServerGetLeaderboardForUsersCharactersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenCharacterTests::LogServerGrantCharacterToUserRequest( PlayFab::CharacterModels::ServerGrantCharacterToUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenCharacterTests::LogPFCharacterServerGrantCharacterToUserResult(PFCharacterServerGrantCharacterToUserResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    return S_OK;
}

void AutoGenCharacterTests::LogServerUpdateCharacterDataRequest( PlayFab::CharacterModels::ServerUpdateCharacterDataRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenCharacterTests::LogServerUpdateCharacterStatisticsRequest( PlayFab::CharacterModels::ServerUpdateCharacterStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CharacterTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

 

}
