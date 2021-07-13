#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenAuthenticationTests.h"
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

void AutoGenAuthenticationTests::LogPlayFabAuthenticationValidateEntityTokenRequest( PlayFab::AuthenticationModels::ValidateEntityTokenRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabAuthenticationValidateEntityTokenRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->entityToken ) { ss << "  entityToken " << request->entityToken; Log(ss); } else { ss << "  entityToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenAuthenticationTests::LogPlayFabAuthenticationValidateEntityTokenResponse( PlayFabAuthenticationValidateEntityTokenResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabAuthenticationValidateEntityTokenResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  identifiedDeviceType " << result->identifiedDeviceType; Log(ss); // Class: PlayFabAuthenticationIdentifiedDeviceType 
    ss << "  identityProvider " << result->identityProvider; Log(ss); // Class: PlayFabLoginIdentityProvider 
    ss << "  lineage " << result->lineage; Log(ss); // Class: PlayFabAuthenticationEntityLineage 
    return S_OK;
}

 

}
