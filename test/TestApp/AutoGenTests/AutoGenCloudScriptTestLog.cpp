#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenCloudScriptTests.h"
#include "XAsyncHelper.h"

uint32_t g_CloudScriptTestIndex = 1;

namespace PlayFabUnit
{

 

void AutoGenCloudScriptTests::LogGetCloudScriptRevisionRequest( PlayFab::CloudScriptModels::GetCloudScriptRevisionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptGetCloudScriptRevisionRequest struct:
    // request->revision: int32_t const*
    ss << "  revision " << request->revision; Log(ss); // Class: int32_t 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

HRESULT AutoGenCloudScriptTests::LogPFCloudScriptGetCloudScriptRevisionResult(PFCloudScriptGetCloudScriptRevisionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptGetCloudScriptRevisionResult
    ss << "  createdAt " << result->createdAt; Log(ss); // Class: time_t     
    ss << "  filesCount " << result->filesCount; Log(ss);

    // PFCloudScriptCloudScriptFile
    for( uint32_t i=0; i<result->filesCount; i++ )
    {
            ss << "  result->files[" << i << "]:" << result->files[i]; Log(ss); // PFCloudScriptCloudScriptFile
    } 
    ss << "  isPublished " << result->isPublished; Log(ss); // Class: bool 
    ss << "  revision " << result->revision; Log(ss); // Class: int32_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

HRESULT AutoGenCloudScriptTests::LogPFCloudScriptGetCloudScriptVersionsResult(PFCloudScriptGetCloudScriptVersionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptGetCloudScriptVersionsResult    
    ss << "  versionsCount " << result->versionsCount; Log(ss);

    // PFCloudScriptCloudScriptVersionStatus
    for( uint32_t i=0; i<result->versionsCount; i++ )
    {
            ss << "  result->versions[" << i << "]:" << result->versions[i]; Log(ss); // PFCloudScriptCloudScriptVersionStatus
    } 
    return S_OK;
}

void AutoGenCloudScriptTests::LogSetPublishedRevisionRequest( PlayFab::CloudScriptModels::SetPublishedRevisionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptSetPublishedRevisionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  revision " << request->revision; Log(ss); // Class: int32_t 
    ss << "  version " << request->version; Log(ss); // Class: int32_t 

}

void AutoGenCloudScriptTests::LogUpdateCloudScriptRequest( PlayFab::CloudScriptModels::UpdateCloudScriptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptUpdateCloudScriptRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->developerPlayFabId ) { ss << "  developerPlayFabId " << request->developerPlayFabId; Log(ss); } else { ss << "  developerPlayFabId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  filesCount " << request->filesCount; Log(ss);

    // PFCloudScriptCloudScriptFile
    for( uint32_t i=0; i<request->filesCount; i++ )
    {
            ss << "  request->files[" << i << "]:" << request->files[i]; Log(ss); // PFCloudScriptCloudScriptFile
    } 
    ss << "  publish " << request->publish; Log(ss); // Class: bool 

}

HRESULT AutoGenCloudScriptTests::LogPFCloudScriptUpdateCloudScriptResult(PFCloudScriptUpdateCloudScriptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptUpdateCloudScriptResult
    ss << "  revision " << result->revision; Log(ss); // Class: int32_t 
    ss << "  version " << result->version; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenCloudScriptTests::LogExecuteCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteCloudScriptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptExecuteCloudScriptRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionParameter.stringValue ) { ss << "  functionParameter " << request->functionParameter.stringValue; Log(ss); } else { ss << "  functionParameter = nullptr"; Log(ss); } // Class: PFJsonObject 
    ss << "  generatePlayStreamEvent " << request->generatePlayStreamEvent; Log(ss); // Class: bool 
    ss << "  revisionSelection " << request->revisionSelection; Log(ss); // Class: PFCloudScriptCloudScriptRevisionOption 
    ss << "  specificRevision " << request->specificRevision; Log(ss); // Class: int32_t 

}

HRESULT AutoGenCloudScriptTests::LogPFExecuteCloudScriptResult(PFExecuteCloudScriptResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptExecuteCloudScriptResult
    ss << "  aPIRequestsIssued " << result->aPIRequestsIssued; Log(ss); // Class: int32_t 
    ss << "  error " << result->error; Log(ss); // Class: PFScriptExecutionError 
    ss << "  executionTimeSeconds " << result->executionTimeSeconds; Log(ss); // Class: double 
    if( result->functionName ) { ss << "  functionName " << result->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( result->functionResult.stringValue ) { ss << "  functionResult " << result->functionResult.stringValue; Log(ss); } else { ss << "  functionResult = nullptr"; Log(ss); } // Class: PFJsonObject 
    ss << "  functionResultTooLarge " << result->functionResultTooLarge; Log(ss); // Class: bool 
    ss << "  httpRequestsIssued " << result->httpRequestsIssued; Log(ss); // Class: int32_t     
    ss << "  logsCount " << result->logsCount; Log(ss);

    // PFLogStatement
    for( uint32_t i=0; i<result->logsCount; i++ )
    {
            ss << "  result->logs[" << i << "]:" << result->logs[i]; Log(ss); // PFLogStatement
    } 
    ss << "  logsTooLarge " << result->logsTooLarge; Log(ss); // Class: bool 
    ss << "  memoryConsumedBytes " << result->memoryConsumedBytes; Log(ss); // Class: uint32_t 
    ss << "  processorTimeSeconds " << result->processorTimeSeconds; Log(ss); // Class: double 
    ss << "  revision " << result->revision; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenCloudScriptTests::LogExecuteCloudScriptServerRequest( PlayFab::CloudScriptModels::ExecuteCloudScriptServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptExecuteCloudScriptServerRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionParameter.stringValue ) { ss << "  functionParameter " << request->functionParameter.stringValue; Log(ss); } else { ss << "  functionParameter = nullptr"; Log(ss); } // Class: PFJsonObject 
    ss << "  generatePlayStreamEvent " << request->generatePlayStreamEvent; Log(ss); // Class: bool 
    if( request->playFabId ) { ss << "  playFabId " << request->playFabId; Log(ss); } else { ss << "  playFabId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  revisionSelection " << request->revisionSelection; Log(ss); // Class: PFCloudScriptCloudScriptRevisionOption 
    ss << "  specificRevision " << request->specificRevision; Log(ss); // Class: int32_t 

}

void AutoGenCloudScriptTests::LogExecuteEntityCloudScriptRequest( PlayFab::CloudScriptModels::ExecuteEntityCloudScriptRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptExecuteEntityCloudScriptRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionParameter.stringValue ) { ss << "  functionParameter " << request->functionParameter.stringValue; Log(ss); } else { ss << "  functionParameter = nullptr"; Log(ss); } // Class: PFJsonObject 
    ss << "  generatePlayStreamEvent " << request->generatePlayStreamEvent; Log(ss); // Class: bool 
    ss << "  revisionSelection " << request->revisionSelection; Log(ss); // Class: PFCloudScriptCloudScriptRevisionOption 
    ss << "  specificRevision " << request->specificRevision; Log(ss); // Class: int32_t 

}

void AutoGenCloudScriptTests::LogExecuteFunctionRequest( PlayFab::CloudScriptModels::ExecuteFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptExecuteFunctionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionParameter.stringValue ) { ss << "  functionParameter " << request->functionParameter.stringValue; Log(ss); } else { ss << "  functionParameter = nullptr"; Log(ss); } // Class: PFJsonObject 
    ss << "  generatePlayStreamEvent " << request->generatePlayStreamEvent; Log(ss); // Class: bool 

}

HRESULT AutoGenCloudScriptTests::LogPFCloudScriptExecuteFunctionResult(PFCloudScriptExecuteFunctionResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptExecuteFunctionResult
    ss << "  error " << result->error; Log(ss); // Class: PFCloudScriptFunctionExecutionError 
    ss << "  executionTimeMilliseconds " << result->executionTimeMilliseconds; Log(ss); // Class: int32_t 
    if( result->functionName ) { ss << "  functionName " << result->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( result->functionResult.stringValue ) { ss << "  functionResult " << result->functionResult.stringValue; Log(ss); } else { ss << "  functionResult = nullptr"; Log(ss); } // Class: PFJsonObject 
    ss << "  functionResultTooLarge " << result->functionResultTooLarge; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenCloudScriptTests::LogListFunctionsRequest( PlayFab::CloudScriptModels::ListFunctionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptListFunctionsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenCloudScriptTests::LogPFCloudScriptListFunctionsResult(PFCloudScriptListFunctionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptListFunctionsResult    
    ss << "  functionsCount " << result->functionsCount; Log(ss);

    // PFCloudScriptFunctionModel
    for( uint32_t i=0; i<result->functionsCount; i++ )
    {
            ss << "  result->functions[" << i << "]:" << result->functions[i]; Log(ss); // PFCloudScriptFunctionModel
    } 
    return S_OK;
}

HRESULT AutoGenCloudScriptTests::LogPFCloudScriptListHttpFunctionsResult(PFCloudScriptListHttpFunctionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptListHttpFunctionsResult    
    ss << "  functionsCount " << result->functionsCount; Log(ss);

    // PFCloudScriptHttpFunctionModel
    for( uint32_t i=0; i<result->functionsCount; i++ )
    {
            ss << "  result->functions[" << i << "]:" << result->functions[i]; Log(ss); // PFCloudScriptHttpFunctionModel
    } 
    return S_OK;
}

HRESULT AutoGenCloudScriptTests::LogPFCloudScriptListQueuedFunctionsResult(PFCloudScriptListQueuedFunctionsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabCloudScriptListQueuedFunctionsResult    
    ss << "  functionsCount " << result->functionsCount; Log(ss);

    // PFCloudScriptQueuedFunctionModel
    for( uint32_t i=0; i<result->functionsCount; i++ )
    {
            ss << "  result->functions[" << i << "]:" << result->functions[i]; Log(ss); // PFCloudScriptQueuedFunctionModel
    } 
    return S_OK;
}

void AutoGenCloudScriptTests::LogPostFunctionResultForEntityTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForEntityTriggeredActionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForEntityTriggeredActionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PFCloudScriptExecuteFunctionResult 

}

void AutoGenCloudScriptTests::LogPostFunctionResultForFunctionExecutionRequest( PlayFab::CloudScriptModels::PostFunctionResultForFunctionExecutionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForFunctionExecutionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PFCloudScriptExecuteFunctionResult 

}

void AutoGenCloudScriptTests::LogPostFunctionResultForPlayerTriggeredActionRequest( PlayFab::CloudScriptModels::PostFunctionResultForPlayerTriggeredActionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForPlayerTriggeredActionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PFCloudScriptExecuteFunctionResult 
    ss << "  playerProfile " << request->playerProfile; Log(ss); // Class: PFPlayerProfileModel 
    ss << "  playStreamEventEnvelope " << request->playStreamEventEnvelope; Log(ss); // Class: PFCloudScriptPlayStreamEventEnvelopeModel 

}

void AutoGenCloudScriptTests::LogPostFunctionResultForScheduledTaskRequest( PlayFab::CloudScriptModels::PostFunctionResultForScheduledTaskRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptPostFunctionResultForScheduledTaskRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  functionResult " << request->functionResult; Log(ss); // Class: PFCloudScriptExecuteFunctionResult 
    ss << "  scheduledTaskId " << request->scheduledTaskId; Log(ss); // Class: PFNameIdentifier 

}

void AutoGenCloudScriptTests::LogRegisterHttpFunctionRequest( PlayFab::CloudScriptModels::RegisterHttpFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptRegisterHttpFunctionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->functionUrl ) { ss << "  functionUrl " << request->functionUrl; Log(ss); } else { ss << "  functionUrl = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenCloudScriptTests::LogRegisterQueuedFunctionRequest( PlayFab::CloudScriptModels::RegisterQueuedFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptRegisterQueuedFunctionRequest struct:
    // request->connectionString: const char*
    if( request->connectionString ) { ss << "  connectionString " << request->connectionString; Log(ss); } else { ss << "  connectionString = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenCloudScriptTests::LogUnregisterFunctionRequest( PlayFab::CloudScriptModels::UnregisterFunctionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_CloudScriptTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabCloudScriptUnregisterFunctionRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->functionName ) { ss << "  functionName " << request->functionName; Log(ss); } else { ss << "  functionName = nullptr"; Log(ss); } // Class: const char* 

}

 

}
