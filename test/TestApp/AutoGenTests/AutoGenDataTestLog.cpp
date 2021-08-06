#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenDataTests.h"
#include "XAsyncHelper.h"

uint32_t g_DataTestIndex = 1;

namespace PlayFabUnit
{

 

void AutoGenDataTests::LogAbortFileUploadsRequest( PlayFab::DataModels::AbortFileUploadsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_DataTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataAbortFileUploadsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
            ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPFDataAbortFileUploadsResponse(PFDataAbortFileUploadsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataAbortFileUploadsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFEntityKey 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogDeleteFilesRequest( PlayFab::DataModels::DeleteFilesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_DataTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataDeleteFilesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
            ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPFDataDeleteFilesResponse(PFDataDeleteFilesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataDeleteFilesResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFEntityKey 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogFinalizeFileUploadsRequest( PlayFab::DataModels::FinalizeFileUploadsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_DataTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataFinalizeFileUploadsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
            ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPFDataFinalizeFileUploadsResponse(PFDataFinalizeFileUploadsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataFinalizeFileUploadsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFEntityKey     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PFDataGetFileMetadataDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
            ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
            
    } 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogGetFilesRequest( PlayFab::DataModels::GetFilesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_DataTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataGetFilesRequest struct:
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

HRESULT AutoGenDataTests::LogPFDataGetFilesResponse(PFDataGetFilesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataGetFilesResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFEntityKey     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PFDataGetFileMetadataDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
            ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
            
    } 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogGetObjectsRequest( PlayFab::DataModels::GetObjectsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_DataTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataGetObjectsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  escapeObject " << request->escapeObject; Log(ss); // Class: bool 

}

HRESULT AutoGenDataTests::LogPFDataGetObjectsResponse(PFDataGetObjectsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataGetObjectsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFEntityKey     
    ss << "  objectsCount " << result->objectsCount; Log(ss);

    // PFDataObjectResultDictionaryEntry
    for( uint32_t i=0; i<result->objectsCount; i++ )
    {
            ss << "  result->objects[" << i << "]:" << result->objects[i].key << "=" << result->objects[i].value; Log(ss);
            
    } 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenDataTests::LogInitiateFileUploadsRequest( PlayFab::DataModels::InitiateFileUploadsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_DataTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataInitiateFileUploadsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey     
    ss << "  fileNamesCount " << request->fileNamesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->fileNamesCount; i++ )
    {
            ss << "  request->fileNames[" << i << "]:" << request->fileNames[i]; Log(ss); // const char*
    } 
    ss << "  profileVersion " << request->profileVersion; Log(ss); // Class: int32_t 

}

HRESULT AutoGenDataTests::LogPFDataInitiateFileUploadsResponse(PFDataInitiateFileUploadsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabDataInitiateFileUploadsResponse
    ss << "  entity " << result->entity; Log(ss); // Class: PFEntityKey 
    ss << "  profileVersion " << result->profileVersion; Log(ss); // Class: int32_t     
    ss << "  uploadDetailsCount " << result->uploadDetailsCount; Log(ss);

    // PFDataInitiateFileUploadMetadata
    for( uint32_t i=0; i<result->uploadDetailsCount; i++ )
    {
            ss << "  result->uploadDetails[" << i << "]:" << result->uploadDetails[i]; Log(ss); // PFDataInitiateFileUploadMetadata
    } 
    return S_OK;
}

void AutoGenDataTests::LogSetObjectsRequest( PlayFab::DataModels::SetObjectsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_DataTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabDataSetObjectsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PFEntityKey 
    ss << "  expectedProfileVersion " << request->expectedProfileVersion; Log(ss); // Class: int32_t     
    ss << "  objectsCount " << request->objectsCount; Log(ss);

    // PFDataSetObject
    for( uint32_t i=0; i<request->objectsCount; i++ )
    {
            ss << "  request->objects[" << i << "]:" << request->objects[i]; Log(ss); // PFDataSetObject
    } 

}

HRESULT AutoGenDataTests::LogPFDataSetObjectsResponse(PFDataSetObjectsResponse* result )
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

    // PFDataSetObjectInfo
    for( uint32_t i=0; i<result->setResultsCount; i++ )
    {
            ss << "  result->setResults[" << i << "]:" << result->setResults[i]; Log(ss); // PFDataSetObjectInfo
    } 
    return S_OK;
}

 

}
