#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenCloudScriptTests.h"
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

void AutoGenCloudScriptTests::LogPlayFabCloudScriptExecuteEntityCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptExecuteEntityCloudScriptRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionParameter.stringValue ) { ss << "  functionParameter " << request->functionParameter.stringValue; Log(ss); } else { ss << "  functionParameter = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    ss << "  generatePlayStreamEvent " << request->generatePlayStreamEvent; Log(ss); // Class: bool 
    ss << "  revisionSelection " << request->revisionSelection; Log(ss); // Class: PlayFabCloudScriptCloudScriptRevisionOption 
    ss << "  specificRevision " << request->specificRevision; Log(ss); // Class: int32_t 

}

HRESULT AutoGenCloudScriptTests::LogPlayFabCloudScriptExecuteCloudScriptResult( PlayFabCloudScriptExecuteCloudScriptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptExecuteCloudScriptResult
    ss << "  aPIRequestsIssued " << result->aPIRequestsIssued; Log(ss); // Class: int32_t 
    ss << "  error " << result->error; Log(ss); // Class: PlayFabCloudScriptScriptExecutionError 
    ss << "  executionTimeSeconds " << result->executionTimeSeconds; Log(ss); // Class: double 
    if( result->functionName ) { ss << "  functionName " << result->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( result->functionResult.stringValue ) { ss << "  functionResult " << result->functionResult.stringValue; Log(ss); } else { ss << "  functionResult = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    ss << "  functionResultTooLarge " << result->functionResultTooLarge; Log(ss); // Class: bool 
    ss << "  httpRequestsIssued " << result->httpRequestsIssued; Log(ss); // Class: int32_t     
    ss << "  logsCount " << result->logsCount; Log(ss);

    // PlayFabCloudScriptLogStatement
    for( uint32_t i=0; i<result->logsCount; i++ )
    {
        if( result->logs[i]->data.stringValue ) { ss << "  logs["<<i<<"]->data " << result->logs[i]->data.stringValue; Log(ss); } else { ss << "  logs[i]->data = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        if( result->logs[i]->level ) { ss << "  logs["<<i<<"]->level " << result->logs[i]->level; Log(ss); } else { ss << "  logs["<<i<<"]->level = nullptr"; Log(ss); } // Class: const char* 
        if( result->logs[i]->message ) { ss << "  logs["<<i<<"]->message " << result->logs[i]->message; Log(ss); } else { ss << "  logs["<<i<<"]->message = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  logsTooLarge " << result->logsTooLarge; Log(ss); // Class: bool 
    ss << "  memoryConsumedBytes " << result->memoryConsumedBytes; Log(ss); // Class: uint32_t 
    ss << "  processorTimeSeconds " << result->processorTimeSeconds; Log(ss); // Class: double 
    ss << "  revision " << result->revision; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptExecuteFunctionRequest( PlayFab::CloudScriptModels::ExecuteFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptExecuteFunctionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionParameter.stringValue ) { ss << "  functionParameter " << request->functionParameter.stringValue; Log(ss); } else { ss << "  functionParameter = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    ss << "  generatePlayStreamEvent " << request->generatePlayStreamEvent; Log(ss); // Class: bool 

}

HRESULT AutoGenCloudScriptTests::LogPlayFabCloudScriptExecuteFunctionResult( PlayFabCloudScriptExecuteFunctionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptExecuteFunctionResult
    ss << "  error " << result->error; Log(ss); // Class: PlayFabCloudScriptFunctionExecutionError 
    ss << "  executionTimeMilliseconds " << result->executionTimeMilliseconds; Log(ss); // Class: int32_t 
    if( result->functionName ) { ss << "  functionName " << result->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( result->functionResult.stringValue ) { ss << "  functionResult " << result->functionResult.stringValue; Log(ss); } else { ss << "  functionResult = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
    ss << "  functionResultTooLarge " << result->functionResultTooLarge; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptListFunctionsRequest( PlayFab::CloudScriptModels::ListFunctionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptListFunctionsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenCloudScriptTests::LogPlayFabCloudScriptListFunctionsResult( PlayFabCloudScriptListFunctionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptListFunctionsResult    
    ss << "  functionsCount " << result->functionsCount; Log(ss);

    // PlayFabCloudScriptFunctionModel
    for( uint32_t i=0; i<result->functionsCount; i++ )
    {
        if( result->functions[i]->functionAddress ) { ss << "  functions["<<i<<"]->functionAddress " << result->functions[i]->functionAddress; Log(ss); } else { ss << "  functions["<<i<<"]->functionAddress = nullptr"; Log(ss); } // Class: const char* 
        if( result->functions[i]->functionName ) { ss << "  functions["<<i<<"]->functionName " << result->functions[i]->functionName; Log(ss); } else { ss << "  functions["<<i<<"]->functionName = nullptr"; Log(ss); } // Class: const char* 
        if( result->functions[i]->triggerType ) { ss << "  functions["<<i<<"]->triggerType " << result->functions[i]->triggerType; Log(ss); } else { ss << "  functions["<<i<<"]->triggerType = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

HRESULT AutoGenCloudScriptTests::LogPlayFabCloudScriptListHttpFunctionsResult( PlayFabCloudScriptListHttpFunctionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptListHttpFunctionsResult    
    ss << "  functionsCount " << result->functionsCount; Log(ss);

    // PlayFabCloudScriptHttpFunctionModel
    for( uint32_t i=0; i<result->functionsCount; i++ )
    {
        if( result->functions[i]->functionName ) { ss << "  functions["<<i<<"]->functionName " << result->functions[i]->functionName; Log(ss); } else { ss << "  functions["<<i<<"]->functionName = nullptr"; Log(ss); } // Class: const char* 
        if( result->functions[i]->functionUrl ) { ss << "  functions["<<i<<"]->functionUrl " << result->functions[i]->functionUrl; Log(ss); } else { ss << "  functions["<<i<<"]->functionUrl = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

HRESULT AutoGenCloudScriptTests::LogPlayFabCloudScriptListQueuedFunctionsResult( PlayFabCloudScriptListQueuedFunctionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptListQueuedFunctionsResult    
    ss << "  functionsCount " << result->functionsCount; Log(ss);

    // PlayFabCloudScriptQueuedFunctionModel
    for( uint32_t i=0; i<result->functionsCount; i++ )
    {
        if( result->functions[i]->connectionString ) { ss << "  functions["<<i<<"]->connectionString " << result->functions[i]->connectionString; Log(ss); } else { ss << "  functions["<<i<<"]->connectionString = nullptr"; Log(ss); } // Class: const char* 
        if( result->functions[i]->functionName ) { ss << "  functions["<<i<<"]->functionName " << result->functions[i]->functionName; Log(ss); } else { ss << "  functions["<<i<<"]->functionName = nullptr"; Log(ss); } // Class: const char* 
        if( result->functions[i]->queueName ) { ss << "  functions["<<i<<"]->queueName " << result->functions[i]->queueName; Log(ss); } else { ss << "  functions["<<i<<"]->queueName = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PlayFabCloudScriptExecuteFunctionResult 

}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest( PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PlayFabCloudScriptExecuteFunctionResult 

}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PlayFabCloudScriptExecuteFunctionResult 
    ss << "  playerProfile " << request->playerProfile; Log(ss); // Class: PlayFabPlayerProfileModel 
    ss << "  playStreamEventEnvelope " << request->playStreamEventEnvelope; Log(ss); // Class: PlayFabCloudScriptPlayStreamEventEnvelopeModel 

}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptPostFunctionResultForScheduledTaskRequest( PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PlayFabCloudScriptExecuteFunctionResult 
    ss << "  scheduledTaskId " << request->scheduledTaskId; Log(ss); // Class: PlayFabCloudScriptNameIdentifier 

}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptRegisterHttpFunctionRequest( PlayFab::CloudScriptModels::RegisterHttpFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptRegisterHttpFunctionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionUrl ) { ss << "  functionUrl " << request->functionUrl; Log(ss); } else { ss << "  functionUrl = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptRegisterQueuedFunctionRequest( PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptRegisterQueuedFunctionRequest struct:
    // request->connectionString: const char*
    if( request->connectionString ) { ss << "  connectionString " << request->connectionString; Log(ss); } else { ss << "  connectionString = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenCloudScriptTests::LogPlayFabCloudScriptUnregisterFunctionRequest( PlayFab::CloudScriptModels::UnregisterFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptUnregisterFunctionRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 

}

 

}
