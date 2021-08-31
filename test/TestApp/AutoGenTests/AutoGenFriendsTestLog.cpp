#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenFriendsTests.h"
#include "XAsyncHelper.h"

uint32_t g_FriendsTestIndex = 1;

namespace PlayFabUnit
{

void AutoGenFriendsTests::LogClientAddFriendRequest( PlayFab::FriendsModels::ClientAddFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenFriendsTests::LogPFFriendsAddFriendResult(PFFriendsAddFriendResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabFriendsAddFriendResult
    ss << "  created " << result->created; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenFriendsTests::LogClientGetFriendsListRequest( PlayFab::FriendsModels::ClientGetFriendsListRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

HRESULT AutoGenFriendsTests::LogPFFriendsGetFriendsListResult(PFFriendsGetFriendsListResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabFriendsGetFriendsListResult    
    ss << "  friendsCount " << result->friendsCount; Log(ss);

    // PFFriendsFriendInfo
    for( uint32_t i=0; i<result->friendsCount; i++ )
    {
            ss << "  result->friends[" << i << "]:" << result->friends[i]; Log(ss); // PFFriendsFriendInfo
    } 
    return S_OK;
}

void AutoGenFriendsTests::LogClientRemoveFriendRequest( PlayFab::FriendsModels::ClientRemoveFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenFriendsTests::LogClientSetFriendTagsRequest( PlayFab::FriendsModels::ClientSetFriendTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenFriendsTests::LogServerAddFriendRequest( PlayFab::FriendsModels::ServerAddFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenFriendsTests::LogServerGetFriendsListRequest( PlayFab::FriendsModels::ServerGetFriendsListRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenFriendsTests::LogServerRemoveFriendRequest( PlayFab::FriendsModels::ServerRemoveFriendRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

void AutoGenFriendsTests::LogServerSetFriendTagsRequest( PlayFab::FriendsModels::ServerSetFriendTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_FriendsTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


}

 

}
