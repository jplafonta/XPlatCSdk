#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenDataTests.h"
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

void AutoGenDataTests::LogPlayFabDataAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataAbortFileUploadsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
        ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPlayFabDataAbortFileUploadsResponse( PlayFabDataAbortFileUploadsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataAbortFileUploadsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogPlayFabDataDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataDeleteFilesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
        ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPlayFabDataDeleteFilesResponse( PlayFabDataDeleteFilesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataDeleteFilesResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogPlayFabDataFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataFinalizeFileUploadsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
        ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPlayFabDataFinalizeFileUploadsResponse( PlayFabDataFinalizeFileUploadsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataFinalizeFileUploadsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PlayFabDataGetFileMetadataDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
        ss << "  result->metadata[" << i << "]:" << result->metadata[i]; Log(ss); // PlayFabDataGetFileMetadataDictionaryEntry
    } 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogPlayFabDataGetFilesRequest( PlayFab::DataModels::GetFilesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataGetFilesRequest struct:
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

HRESULT AutoGenDataTests::LogPlayFabDataGetFilesResponse( PlayFabDataGetFilesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataGetFilesResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PlayFabDataGetFileMetadataDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
        ss << "  result->metadata[" << i << "]:" << result->metadata[i]; Log(ss); // PlayFabDataGetFileMetadataDictionaryEntry
    } 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogPlayFabDataGetObjectsRequest( PlayFab::DataModels::GetObjectsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataGetObjectsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  escapeObject " << request->escapeObject; Log(ss); // Class: bool 

}

HRESULT AutoGenDataTests::LogPlayFabDataGetObjectsResponse( PlayFabDataGetObjectsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataGetObjectsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  objectsCount " << result->objectsCount; Log(ss);

    // PlayFabDataObjectResultDictionaryEntry
    for( uint32_t i=0; i<result->objectsCount; i++ )
    {
        ss << "  result->objects[" << i << "]:" << result->objects[i]; Log(ss); // PlayFabDataObjectResultDictionaryEntry
    } 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogPlayFabDataInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataInitiateFileUploadsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
        ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPlayFabDataInitiateFileUploadsResponse( PlayFabDataInitiateFileUploadsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataInitiateFileUploadsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  uploadDetailsCount " << result->uploadDetailsCount; Log(ss);

    // PlayFabDataInitiateFileUploadMetadata
    for( uint32_t i=0; i<result->uploadDetailsCount; i++ )
    {
        if( result->uploadDetails[i]->fileName ) { ss << "  uploadDetails["<<i<<"]->fileName " << result->uploadDetails[i]->fileName; Log(ss); } else { ss << "  uploadDetails["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( result->uploadDetails[i]->uploadUrl ) { ss << "  uploadDetails["<<i<<"]->uploadUrl " << result->uploadDetails[i]->uploadUrl; Log(ss); } else { ss << "  uploadDetails["<<i<<"]->uploadUrl = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenDataTests::LogPlayFabDataSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataSetObjectsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    ss << "  expectedProfileVersion " << request->expectedProfileVersion; Log(ss); // Class: int32_t     
    ss << "  objectsCount " << request->objectsCount; Log(ss);

    // PlayFabDataSetObject
    for( uint32_t i=0; i<request->objectsCount; i++ )
    {
        if( request->objects[i]->dataObject.stringValue ) { ss << "  objects["<<i<<"]->dataObject " << request->objects[i]->dataObject.stringValue; Log(ss); } else { ss << "  objects[i]->dataObject = nullptr"; Log(ss); } // Class: PlayFabJsonObject 
        ss << "  objects["<<i<<"]->deleteObject " << request->objects[i]->deleteObject; Log(ss); // Class: bool 
        if( request->objects[i]->escapedDataObject ) { ss << "  objects["<<i<<"]->escapedDataObject " << request->objects[i]->escapedDataObject; Log(ss); } else { ss << "  objects["<<i<<"]->escapedDataObject = nullptr"; Log(ss); } // Class: const char* 
        if( request->objects[i]->objectName ) { ss << "  objects["<<i<<"]->objectName " << request->objects[i]->objectName; Log(ss); } else { ss << "  objects["<<i<<"]->objectName = nullptr"; Log(ss); } // Class: const char* 
    } 

}

HRESULT AutoGenDataTests::LogPlayFabDataSetObjectsResponse( PlayFabDataSetObjectsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataSetObjectsResponse
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  setResultsCount " << result->setResultsCount; Log(ss);

    // PlayFabDataSetObjectInfo
    for( uint32_t i=0; i<result->setResultsCount; i++ )
    {
        if( result->setResults[i]->objectName ) { ss << "  setResults["<<i<<"]->objectName " << result->setResults[i]->objectName; Log(ss); } else { ss << "  setResults["<<i<<"]->objectName = nullptr"; Log(ss); } // Class: const char* 
        if( result->setResults[i]->operationReason ) { ss << "  setResults["<<i<<"]->operationReason " << result->setResults[i]->operationReason; Log(ss); } else { ss << "  setResults["<<i<<"]->operationReason = nullptr"; Log(ss); } // Class: const char* 
        ss << "  setResults["<<i<<"]->setResult " << result->setResults[i]->setResult; Log(ss); // Class: PlayFabDataOperationTypes 
    } 
    return S_OK;
}

 

}
