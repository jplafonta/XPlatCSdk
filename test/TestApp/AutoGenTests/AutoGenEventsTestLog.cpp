#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenEventsTests.h"
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

void AutoGenEventsTests::LogPlayFabEventsWriteEventsRequest( PlayFab::EventsModels::WriteEventsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabEventsWriteEventsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  eventsCount " << request->eventsCount; Log(ss);

    // PlayFabEventsEventContents
    for( uint32_t i=0; i<request->eventsCount; i++ )
    {
        ss << "  events["<<i<<"]->customTags " << request->events[i]->customTags; Log(ss); // Class: PlayFabStringDictionaryEntry 
        ss << "  events["<<i<<"]->entity " << request->events[i]->entity; Log(ss); // Class: PlayFabEntityKey 
        if( request->events[i]->eventNamespace ) { ss << "  events["<<i<<"]->eventNamespace " << request->events[i]->eventNamespace; Log(ss); } else { ss << "  events["<<i<<"]->eventNamespace = nullptr"; Log(ss); } // Class: const char* 
        if( request->events[i]->name ) { ss << "  events["<<i<<"]->name " << request->events[i]->name; Log(ss); } else { ss << "  events["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        if( request->events[i]->originalId ) { ss << "  events["<<i<<"]->originalId " << request->events[i]->originalId; Log(ss); } else { ss << "  events["<<i<<"]->originalId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  events["<<i<<"]->originalTimestamp " << request->events[i]->originalTimestamp; Log(ss); // Class: time_t 
        if( request->events[i]->payload.stringValue ) { ss << "  events["<<i<<"]->payload " << request->events[i]->payload.stringValue; Log(ss); } else { ss << "  events[i]->payload = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( request->events[i]->payloadJSON ) { ss << "  events["<<i<<"]->payloadJSON " << request->events[i]->payloadJSON; Log(ss); } else { ss << "  events["<<i<<"]->payloadJSON = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenEventsTests::LogPlayFabEventsWriteEventsResponse( PlayFabEventsWriteEventsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabEventsWriteEventsResponse    
    ss << "  assignedEventIdsCount " << result->assignedEventIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->assignedEventIdsCount; i++ )
    {
        ss << "  result->assignedEventIds[" << i << "]:" << result->assignedEventIds[i]; Log(ss); // const char*
    } 
    return S_OK;
}

 

}
