#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMultiplayerServerTests.h"
#include "XAsyncHelper.h"

uint32_t g_MultiplayerServerTestIndex = 1;

namespace PlayFabUnit
{

void AutoGenMultiplayerServerTests::LogCreateBuildAliasRequest( PlayFab::MultiplayerServerModels::CreateBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerCreateBuildAliasRequest struct:
    // request->aliasName: const char*
    if( request->aliasName ) { ss << "  aliasName " << request->aliasName; Log(ss); } else { ss << "  aliasName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildSelectionCriteriaCount " << request->buildSelectionCriteriaCount; Log(ss);

    // PFMultiplayerServerBuildSelectionCriterion
    for( uint32_t i=0; i<request->buildSelectionCriteriaCount; i++ )
    {
            ss << "  request->buildSelectionCriteria[" << i << "]:" << request->buildSelectionCriteria[i]; Log(ss); // PFMultiplayerServerBuildSelectionCriterion
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerBuildAliasDetailsResponse(PFMultiplayerServerBuildAliasDetailsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerBuildAliasDetailsResponse
    if( result->aliasId ) { ss << "  aliasId " << result->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char* 
    if( result->aliasName ) { ss << "  aliasName " << result->aliasName; Log(ss); } else { ss << "  aliasName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildSelectionCriteriaCount " << result->buildSelectionCriteriaCount; Log(ss);

    // PFMultiplayerServerBuildSelectionCriterion
    for( uint32_t i=0; i<result->buildSelectionCriteriaCount; i++ )
    {
            ss << "  result->buildSelectionCriteria[" << i << "]:" << result->buildSelectionCriteria[i]; Log(ss); // PFMultiplayerServerBuildSelectionCriterion
    } 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogCreateBuildWithCustomContainerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithCustomContainerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerCreateBuildWithCustomContainerRequest struct:
    // request->areAssetsReadonly: bool const*
    ss << "  areAssetsReadonly " << request->areAssetsReadonly; Log(ss); // Class: bool 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << request->containerFlavor; Log(ss); // Class: PFMultiplayerServerContainerFlavor 
    ss << "  containerImageReference " << request->containerImageReference; Log(ss); // Class: PFMultiplayerServerContainerImageReference 
    if( request->containerRunCommand ) { ss << "  containerRunCommand " << request->containerRunCommand; Log(ss); } else { ss << "  containerRunCommand = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  gameAssetReferencesCount " << request->gameAssetReferencesCount; Log(ss);

    // PFMultiplayerServerAssetReferenceParams
    for( uint32_t i=0; i<request->gameAssetReferencesCount; i++ )
    {
            ss << "  request->gameAssetReferences[" << i << "]:" << request->gameAssetReferences[i]; Log(ss); // PFMultiplayerServerAssetReferenceParams
    }     
    ss << "  gameCertificateReferencesCount " << request->gameCertificateReferencesCount; Log(ss);

    // PFMultiplayerServerGameCertificateReferenceParams
    for( uint32_t i=0; i<request->gameCertificateReferencesCount; i++ )
    {
            ss << "  request->gameCertificateReferences[" << i << "]:" << request->gameCertificateReferences[i]; Log(ss); // PFMultiplayerServerGameCertificateReferenceParams
    } 
    ss << "  linuxInstrumentationConfiguration " << request->linuxInstrumentationConfiguration; Log(ss); // Class: PFMultiplayerServerLinuxInstrumentationConfiguration     
    ss << "  metadataCount " << request->metadataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->metadataCount; i++ )
    {
            ss << "  request->metadata[" << i << "]:" << request->metadata[i].key << "=" << request->metadata[i].value; Log(ss);
            
    } 
    ss << "  multiplayerServerCountPerVm " << request->multiplayerServerCountPerVm; Log(ss); // Class: int32_t     
    ss << "  portsCount " << request->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<request->portsCount; i++ )
    {
            ss << "  request->ports[" << i << "]:" << request->ports[i]; Log(ss); // PFPort
    }     
    ss << "  regionConfigurationsCount " << request->regionConfigurationsCount; Log(ss);

    // PFMultiplayerServerBuildRegionParams
    for( uint32_t i=0; i<request->regionConfigurationsCount; i++ )
    {
            ss << "  request->regionConfigurations[" << i << "]:" << request->regionConfigurations[i]; Log(ss); // PFMultiplayerServerBuildRegionParams
    } 
    ss << "  useStreamingForAssetDownloads " << request->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << request->vmSize; Log(ss); // Class: PFMultiplayerServerAzureVmSize 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerCreateBuildWithCustomContainerResponse(PFMultiplayerServerCreateBuildWithCustomContainerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerCreateBuildWithCustomContainerResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PFMultiplayerServerContainerFlavor 
    if( result->containerRunCommand ) { ss << "  containerRunCommand " << result->containerRunCommand; Log(ss); } else { ss << "  containerRunCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t 
    ss << "  customGameContainerImage " << result->customGameContainerImage; Log(ss); // Class: PFMultiplayerServerContainerImageReference     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PFMultiplayerServerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
            ss << "  result->gameAssetReferences[" << i << "]:" << result->gameAssetReferences[i]; Log(ss); // PFMultiplayerServerAssetReference
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PFMultiplayerServerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
            ss << "  result->gameCertificateReferences[" << i << "]:" << result->gameCertificateReferences[i]; Log(ss); // PFMultiplayerServerGameCertificateReference
    } 
    ss << "  linuxInstrumentationConfiguration " << result->linuxInstrumentationConfiguration; Log(ss); // Class: PFMultiplayerServerLinuxInstrumentationConfiguration     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
            ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
            
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
            ss << "  result->ports[" << i << "]:" << result->ports[i]; Log(ss); // PFPort
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PFMultiplayerServerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
            ss << "  result->regionConfigurations[" << i << "]:" << result->regionConfigurations[i]; Log(ss); // PFMultiplayerServerBuildRegion
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PFMultiplayerServerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogCreateBuildWithManagedContainerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithManagedContainerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerCreateBuildWithManagedContainerRequest struct:
    // request->areAssetsReadonly: bool const*
    ss << "  areAssetsReadonly " << request->areAssetsReadonly; Log(ss); // Class: bool 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << request->containerFlavor; Log(ss); // Class: PFMultiplayerServerContainerFlavor     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  gameAssetReferencesCount " << request->gameAssetReferencesCount; Log(ss);

    // PFMultiplayerServerAssetReferenceParams
    for( uint32_t i=0; i<request->gameAssetReferencesCount; i++ )
    {
            ss << "  request->gameAssetReferences[" << i << "]:" << request->gameAssetReferences[i]; Log(ss); // PFMultiplayerServerAssetReferenceParams
    }     
    ss << "  gameCertificateReferencesCount " << request->gameCertificateReferencesCount; Log(ss);

    // PFMultiplayerServerGameCertificateReferenceParams
    for( uint32_t i=0; i<request->gameCertificateReferencesCount; i++ )
    {
            ss << "  request->gameCertificateReferences[" << i << "]:" << request->gameCertificateReferences[i]; Log(ss); // PFMultiplayerServerGameCertificateReferenceParams
    } 
    if( request->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << request->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << request->instrumentationConfiguration; Log(ss); // Class: PFMultiplayerServerInstrumentationConfiguration     
    ss << "  metadataCount " << request->metadataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->metadataCount; i++ )
    {
            ss << "  request->metadata[" << i << "]:" << request->metadata[i].key << "=" << request->metadata[i].value; Log(ss);
            
    } 
    ss << "  multiplayerServerCountPerVm " << request->multiplayerServerCountPerVm; Log(ss); // Class: int32_t     
    ss << "  portsCount " << request->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<request->portsCount; i++ )
    {
            ss << "  request->ports[" << i << "]:" << request->ports[i]; Log(ss); // PFPort
    }     
    ss << "  regionConfigurationsCount " << request->regionConfigurationsCount; Log(ss);

    // PFMultiplayerServerBuildRegionParams
    for( uint32_t i=0; i<request->regionConfigurationsCount; i++ )
    {
            ss << "  request->regionConfigurations[" << i << "]:" << request->regionConfigurations[i]; Log(ss); // PFMultiplayerServerBuildRegionParams
    } 
    if( request->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << request->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << request->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << request->vmSize; Log(ss); // Class: PFMultiplayerServerAzureVmSize 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerCreateBuildWithManagedContainerResponse(PFMultiplayerServerCreateBuildWithManagedContainerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerCreateBuildWithManagedContainerResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PFMultiplayerServerContainerFlavor 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PFMultiplayerServerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
            ss << "  result->gameAssetReferences[" << i << "]:" << result->gameAssetReferences[i]; Log(ss); // PFMultiplayerServerAssetReference
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PFMultiplayerServerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
            ss << "  result->gameCertificateReferences[" << i << "]:" << result->gameCertificateReferences[i]; Log(ss); // PFMultiplayerServerGameCertificateReference
    } 
    if( result->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << result->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << result->instrumentationConfiguration; Log(ss); // Class: PFMultiplayerServerInstrumentationConfiguration     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
            ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
            
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
            ss << "  result->ports[" << i << "]:" << result->ports[i]; Log(ss); // PFPort
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PFMultiplayerServerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
            ss << "  result->regionConfigurations[" << i << "]:" << result->regionConfigurations[i]; Log(ss); // PFMultiplayerServerBuildRegion
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    if( result->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << result->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PFMultiplayerServerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogCreateBuildWithProcessBasedServerRequest( PlayFab::MultiplayerServerModels::CreateBuildWithProcessBasedServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerCreateBuildWithProcessBasedServerRequest struct:
    // request->areAssetsReadonly: bool const*
    ss << "  areAssetsReadonly " << request->areAssetsReadonly; Log(ss); // Class: bool 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  gameAssetReferencesCount " << request->gameAssetReferencesCount; Log(ss);

    // PFMultiplayerServerAssetReferenceParams
    for( uint32_t i=0; i<request->gameAssetReferencesCount; i++ )
    {
            ss << "  request->gameAssetReferences[" << i << "]:" << request->gameAssetReferences[i]; Log(ss); // PFMultiplayerServerAssetReferenceParams
    }     
    ss << "  gameCertificateReferencesCount " << request->gameCertificateReferencesCount; Log(ss);

    // PFMultiplayerServerGameCertificateReferenceParams
    for( uint32_t i=0; i<request->gameCertificateReferencesCount; i++ )
    {
            ss << "  request->gameCertificateReferences[" << i << "]:" << request->gameCertificateReferences[i]; Log(ss); // PFMultiplayerServerGameCertificateReferenceParams
    } 
    if( request->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << request->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << request->instrumentationConfiguration; Log(ss); // Class: PFMultiplayerServerInstrumentationConfiguration 
    ss << "  isOSPreview " << request->isOSPreview; Log(ss); // Class: bool     
    ss << "  metadataCount " << request->metadataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->metadataCount; i++ )
    {
            ss << "  request->metadata[" << i << "]:" << request->metadata[i].key << "=" << request->metadata[i].value; Log(ss);
            
    } 
    ss << "  multiplayerServerCountPerVm " << request->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( request->osPlatform ) { ss << "  osPlatform " << request->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << request->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<request->portsCount; i++ )
    {
            ss << "  request->ports[" << i << "]:" << request->ports[i]; Log(ss); // PFPort
    }     
    ss << "  regionConfigurationsCount " << request->regionConfigurationsCount; Log(ss);

    // PFMultiplayerServerBuildRegionParams
    for( uint32_t i=0; i<request->regionConfigurationsCount; i++ )
    {
            ss << "  request->regionConfigurations[" << i << "]:" << request->regionConfigurations[i]; Log(ss); // PFMultiplayerServerBuildRegionParams
    } 
    if( request->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << request->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << request->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << request->vmSize; Log(ss); // Class: PFMultiplayerServerAzureVmSize 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerCreateBuildWithProcessBasedServerResponse(PFMultiplayerServerCreateBuildWithProcessBasedServerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerCreateBuildWithProcessBasedServerResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PFMultiplayerServerContainerFlavor 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PFMultiplayerServerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
            ss << "  result->gameAssetReferences[" << i << "]:" << result->gameAssetReferences[i]; Log(ss); // PFMultiplayerServerAssetReference
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PFMultiplayerServerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
            ss << "  result->gameCertificateReferences[" << i << "]:" << result->gameCertificateReferences[i]; Log(ss); // PFMultiplayerServerGameCertificateReference
    } 
    if( result->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << result->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << result->instrumentationConfiguration; Log(ss); // Class: PFMultiplayerServerInstrumentationConfiguration 
    ss << "  isOSPreview " << result->isOSPreview; Log(ss); // Class: bool     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
            ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
            
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
            ss << "  result->ports[" << i << "]:" << result->ports[i]; Log(ss); // PFPort
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PFMultiplayerServerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
            ss << "  result->regionConfigurations[" << i << "]:" << result->regionConfigurations[i]; Log(ss); // PFMultiplayerServerBuildRegion
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    if( result->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << result->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PFMultiplayerServerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogCreateRemoteUserRequest( PlayFab::MultiplayerServerModels::CreateRemoteUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerCreateRemoteUserRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  expirationTime " << request->expirationTime; Log(ss); // Class: time_t 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    if( request->vmId ) { ss << "  vmId " << request->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerCreateRemoteUserResponse(PFMultiplayerServerCreateRemoteUserResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerCreateRemoteUserResponse
    ss << "  expirationTime " << result->expirationTime; Log(ss); // Class: time_t 
    if( result->password ) { ss << "  password " << result->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogCreateTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerServerModels::CreateTitleMultiplayerServersQuotaChangeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerCreateTitleMultiplayerServersQuotaChangeRequest struct:
    // request->changeDescription: const char*
    if( request->changeDescription ) { ss << "  changeDescription " << request->changeDescription; Log(ss); } else { ss << "  changeDescription = nullptr"; Log(ss); } // Class: const char*     
    ss << "  changesCount " << request->changesCount; Log(ss);

    // PFMultiplayerServerCoreCapacityChange
    for( uint32_t i=0; i<request->changesCount; i++ )
    {
            ss << "  request->changes[" << i << "]:" << request->changes[i]; Log(ss); // PFMultiplayerServerCoreCapacityChange
    } 
    if( request->contactEmail ) { ss << "  contactEmail " << request->contactEmail; Log(ss); } else { ss << "  contactEmail = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->notes ) { ss << "  notes " << request->notes; Log(ss); } else { ss << "  notes = nullptr"; Log(ss); } // Class: const char* 
    ss << "  startDate " << request->startDate; Log(ss); // Class: time_t 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse(PFMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerCreateTitleMultiplayerServersQuotaChangeResponse
    if( result->requestId ) { ss << "  requestId " << result->requestId; Log(ss); } else { ss << "  requestId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  wasApproved " << result->wasApproved; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogDeleteAssetRequest( PlayFab::MultiplayerServerModels::DeleteAssetRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerDeleteAssetRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->fileName ) { ss << "  fileName " << request->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogDeleteBuildRequest( PlayFab::MultiplayerServerModels::DeleteBuildRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerDeleteBuildRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenMultiplayerServerTests::LogDeleteBuildAliasRequest( PlayFab::MultiplayerServerModels::DeleteBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerDeleteBuildAliasRequest struct:
    // request->aliasId: const char*
    if( request->aliasId ) { ss << "  aliasId " << request->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenMultiplayerServerTests::LogDeleteBuildRegionRequest( PlayFab::MultiplayerServerModels::DeleteBuildRegionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerDeleteBuildRegionRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogDeleteCertificateRequest( PlayFab::MultiplayerServerModels::DeleteCertificateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerDeleteCertificateRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogDeleteContainerImageRequest( PlayFab::MultiplayerServerModels::DeleteContainerImageRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerDeleteContainerImageRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->imageName ) { ss << "  imageName " << request->imageName; Log(ss); } else { ss << "  imageName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogDeleteRemoteUserRequest( PlayFab::MultiplayerServerModels::DeleteRemoteUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerDeleteRemoteUserRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    if( request->vmId ) { ss << "  vmId " << request->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogEnableMultiplayerServersForTitleRequest( PlayFab::MultiplayerServerModels::EnableMultiplayerServersForTitleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerEnableMultiplayerServersForTitleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerEnableMultiplayerServersForTitleResponse(PFMultiplayerServerEnableMultiplayerServersForTitleResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerEnableMultiplayerServersForTitleResponse
    ss << "  status " << result->status; Log(ss); // Class: PFMultiplayerServerTitleMultiplayerServerEnabledStatus 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetAssetDownloadUrlRequest( PlayFab::MultiplayerServerModels::GetAssetDownloadUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetAssetDownloadUrlRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->fileName ) { ss << "  fileName " << request->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetAssetDownloadUrlResponse(PFMultiplayerServerGetAssetDownloadUrlResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetAssetDownloadUrlResponse
    if( result->assetDownloadUrl ) { ss << "  assetDownloadUrl " << result->assetDownloadUrl; Log(ss); } else { ss << "  assetDownloadUrl = nullptr"; Log(ss); } // Class: const char* 
    if( result->fileName ) { ss << "  fileName " << result->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetAssetUploadUrlRequest( PlayFab::MultiplayerServerModels::GetAssetUploadUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetAssetUploadUrlRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->fileName ) { ss << "  fileName " << request->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetAssetUploadUrlResponse(PFMultiplayerServerGetAssetUploadUrlResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetAssetUploadUrlResponse
    if( result->assetUploadUrl ) { ss << "  assetUploadUrl " << result->assetUploadUrl; Log(ss); } else { ss << "  assetUploadUrl = nullptr"; Log(ss); } // Class: const char* 
    if( result->fileName ) { ss << "  fileName " << result->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetBuildRequest( PlayFab::MultiplayerServerModels::GetBuildRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetBuildRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetBuildResponse(PFMultiplayerServerGetBuildResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetBuildResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildStatus ) { ss << "  buildStatus " << result->buildStatus; Log(ss); } else { ss << "  buildStatus = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PFMultiplayerServerContainerFlavor 
    if( result->containerRunCommand ) { ss << "  containerRunCommand " << result->containerRunCommand; Log(ss); } else { ss << "  containerRunCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t 
    ss << "  customGameContainerImage " << result->customGameContainerImage; Log(ss); // Class: PFMultiplayerServerContainerImageReference     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PFMultiplayerServerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
            ss << "  result->gameAssetReferences[" << i << "]:" << result->gameAssetReferences[i]; Log(ss); // PFMultiplayerServerAssetReference
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PFMultiplayerServerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
            ss << "  result->gameCertificateReferences[" << i << "]:" << result->gameCertificateReferences[i]; Log(ss); // PFMultiplayerServerGameCertificateReference
    } 
    ss << "  instrumentationConfiguration " << result->instrumentationConfiguration; Log(ss); // Class: PFMultiplayerServerInstrumentationConfiguration     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
            ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
            
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
            ss << "  result->ports[" << i << "]:" << result->ports[i]; Log(ss); // PFPort
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PFMultiplayerServerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
            ss << "  result->regionConfigurations[" << i << "]:" << result->regionConfigurations[i]; Log(ss); // PFMultiplayerServerBuildRegion
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    if( result->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << result->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PFMultiplayerServerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetBuildAliasRequest( PlayFab::MultiplayerServerModels::GetBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetBuildAliasRequest struct:
    // request->aliasId: const char*
    if( request->aliasId ) { ss << "  aliasId " << request->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenMultiplayerServerTests::LogGetContainerRegistryCredentialsRequest( PlayFab::MultiplayerServerModels::GetContainerRegistryCredentialsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetContainerRegistryCredentialsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetContainerRegistryCredentialsResponse(PFMultiplayerServerGetContainerRegistryCredentialsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetContainerRegistryCredentialsResponse
    if( result->dnsName ) { ss << "  dnsName " << result->dnsName; Log(ss); } else { ss << "  dnsName = nullptr"; Log(ss); } // Class: const char* 
    if( result->password ) { ss << "  password " << result->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetMultiplayerServerDetailsRequest( PlayFab::MultiplayerServerModels::GetMultiplayerServerDetailsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetMultiplayerServerDetailsRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->sessionId ) { ss << "  sessionId " << request->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetMultiplayerServerDetailsResponse(PFMultiplayerServerGetMultiplayerServerDetailsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetMultiplayerServerDetailsResponse
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  connectedPlayersCount " << result->connectedPlayersCount; Log(ss);

    // PFMultiplayerServerConnectedPlayer
    for( uint32_t i=0; i<result->connectedPlayersCount; i++ )
    {
            ss << "  result->connectedPlayers[" << i << "]:" << result->connectedPlayers[i]; Log(ss); // PFMultiplayerServerConnectedPlayer
    } 
    if( result->fQDN ) { ss << "  fQDN " << result->fQDN; Log(ss); } else { ss << "  fQDN = nullptr"; Log(ss); } // Class: const char* 
    if( result->iPV4Address ) { ss << "  iPV4Address " << result->iPV4Address; Log(ss); } else { ss << "  iPV4Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  lastStateTransitionTime " << result->lastStateTransitionTime; Log(ss); // Class: time_t     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
            ss << "  result->ports[" << i << "]:" << result->ports[i]; Log(ss); // PFPort
    } 
    if( result->region ) { ss << "  region " << result->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverId ) { ss << "  serverId " << result->serverId; Log(ss); } else { ss << "  serverId = nullptr"; Log(ss); } // Class: const char* 
    if( result->sessionId ) { ss << "  sessionId " << result->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 
    if( result->state ) { ss << "  state " << result->state; Log(ss); } else { ss << "  state = nullptr"; Log(ss); } // Class: const char* 
    if( result->vmId ) { ss << "  vmId " << result->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetMultiplayerServerLogsRequest( PlayFab::MultiplayerServerModels::GetMultiplayerServerLogsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetMultiplayerServerLogsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->serverId ) { ss << "  serverId " << request->serverId; Log(ss); } else { ss << "  serverId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetMultiplayerServerLogsResponse(PFMultiplayerServerGetMultiplayerServerLogsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetMultiplayerServerLogsResponse
    if( result->logDownloadUrl ) { ss << "  logDownloadUrl " << result->logDownloadUrl; Log(ss); } else { ss << "  logDownloadUrl = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetMultiplayerSessionLogsBySessionIdRequest( PlayFab::MultiplayerServerModels::GetMultiplayerSessionLogsBySessionIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetMultiplayerSessionLogsBySessionIdRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->sessionId ) { ss << "  sessionId " << request->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogGetRemoteLoginEndpointRequest( PlayFab::MultiplayerServerModels::GetRemoteLoginEndpointRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetRemoteLoginEndpointRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->vmId ) { ss << "  vmId " << request->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetRemoteLoginEndpointResponse(PFMultiplayerServerGetRemoteLoginEndpointResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetRemoteLoginEndpointResponse
    if( result->iPV4Address ) { ss << "  iPV4Address " << result->iPV4Address; Log(ss); } else { ss << "  iPV4Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  port " << result->port; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetTitleEnabledForMultiplayerServersStatusRequest( PlayFab::MultiplayerServerModels::GetTitleEnabledForMultiplayerServersStatusRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetTitleEnabledForMultiplayerServersStatusRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse(PFMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetTitleEnabledForMultiplayerServersStatusResponse
    ss << "  status " << result->status; Log(ss); // Class: PFMultiplayerServerTitleMultiplayerServerEnabledStatus 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotaChangeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetTitleMultiplayerServersQuotaChangeRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->requestId ) { ss << "  requestId " << request->requestId; Log(ss); } else { ss << "  requestId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse(PFMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetTitleMultiplayerServersQuotaChangeResponse
    ss << "  change " << result->change; Log(ss); // Class: PFMultiplayerServerQuotaChange 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogGetTitleMultiplayerServersQuotasRequest( PlayFab::MultiplayerServerModels::GetTitleMultiplayerServersQuotasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerGetTitleMultiplayerServersQuotasRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerGetTitleMultiplayerServersQuotasResponse(PFMultiplayerServerGetTitleMultiplayerServersQuotasResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerGetTitleMultiplayerServersQuotasResponse
    ss << "  quotas " << result->quotas; Log(ss); // Class: PFMultiplayerServerTitleMultiplayerServersQuotas 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListMultiplayerServersRequest( PlayFab::MultiplayerServerModels::ListMultiplayerServersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListMultiplayerServersRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListMultiplayerServersResponse(PFMultiplayerServerListMultiplayerServersResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListMultiplayerServersResponse    
    ss << "  multiplayerServerSummariesCount " << result->multiplayerServerSummariesCount; Log(ss);

    // PFMultiplayerServerMultiplayerServerSummary
    for( uint32_t i=0; i<result->multiplayerServerSummariesCount; i++ )
    {
            ss << "  result->multiplayerServerSummaries[" << i << "]:" << result->multiplayerServerSummaries[i]; Log(ss); // PFMultiplayerServerMultiplayerServerSummary
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListAssetSummariesRequest( PlayFab::MultiplayerServerModels::ListAssetSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListAssetSummariesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListAssetSummariesResponse(PFMultiplayerServerListAssetSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListAssetSummariesResponse    
    ss << "  assetSummariesCount " << result->assetSummariesCount; Log(ss);

    // PFMultiplayerServerAssetSummary
    for( uint32_t i=0; i<result->assetSummariesCount; i++ )
    {
            ss << "  result->assetSummaries[" << i << "]:" << result->assetSummaries[i]; Log(ss); // PFMultiplayerServerAssetSummary
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListBuildAliasesRequest( PlayFab::MultiplayerServerModels::ListBuildAliasesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListBuildAliasesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListBuildAliasesResponse(PFMultiplayerServerListBuildAliasesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListBuildAliasesResponse    
    ss << "  buildAliasesCount " << result->buildAliasesCount; Log(ss);

    // PFMultiplayerServerBuildAliasDetailsResponse
    for( uint32_t i=0; i<result->buildAliasesCount; i++ )
    {
            ss << "  result->buildAliases[" << i << "]:" << result->buildAliases[i]; Log(ss); // PFMultiplayerServerBuildAliasDetailsResponse
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListBuildSummariesRequest( PlayFab::MultiplayerServerModels::ListBuildSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListBuildSummariesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListBuildSummariesResponse(PFMultiplayerServerListBuildSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListBuildSummariesResponse    
    ss << "  buildSummariesCount " << result->buildSummariesCount; Log(ss);

    // PFMultiplayerServerBuildSummary
    for( uint32_t i=0; i<result->buildSummariesCount; i++ )
    {
            ss << "  result->buildSummaries[" << i << "]:" << result->buildSummaries[i]; Log(ss); // PFMultiplayerServerBuildSummary
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListCertificateSummariesRequest( PlayFab::MultiplayerServerModels::ListCertificateSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListCertificateSummariesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListCertificateSummariesResponse(PFMultiplayerServerListCertificateSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListCertificateSummariesResponse    
    ss << "  certificateSummariesCount " << result->certificateSummariesCount; Log(ss);

    // PFMultiplayerServerCertificateSummary
    for( uint32_t i=0; i<result->certificateSummariesCount; i++ )
    {
            ss << "  result->certificateSummaries[" << i << "]:" << result->certificateSummaries[i]; Log(ss); // PFMultiplayerServerCertificateSummary
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListContainerImagesRequest( PlayFab::MultiplayerServerModels::ListContainerImagesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListContainerImagesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListContainerImagesResponse(PFMultiplayerServerListContainerImagesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListContainerImagesResponse    
    ss << "  imagesCount " << result->imagesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->imagesCount; i++ )
    {
            ss << "  result->images[" << i << "]:" << result->images[i]; Log(ss); // const char*
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListContainerImageTagsRequest( PlayFab::MultiplayerServerModels::ListContainerImageTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListContainerImageTagsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->imageName ) { ss << "  imageName " << request->imageName; Log(ss); } else { ss << "  imageName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListContainerImageTagsResponse(PFMultiplayerServerListContainerImageTagsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListContainerImageTagsResponse    
    ss << "  tagsCount " << result->tagsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->tagsCount; i++ )
    {
            ss << "  result->tags[" << i << "]:" << result->tags[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListPartyQosServersRequest( PlayFab::MultiplayerServerModels::ListPartyQosServersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListPartyQosServersRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListPartyQosServersResponse(PFMultiplayerServerListPartyQosServersResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListPartyQosServersResponse
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t     
    ss << "  qosServersCount " << result->qosServersCount; Log(ss);

    // PFMultiplayerServerQosServer
    for( uint32_t i=0; i<result->qosServersCount; i++ )
    {
            ss << "  result->qosServers[" << i << "]:" << result->qosServers[i]; Log(ss); // PFMultiplayerServerQosServer
    } 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListQosServersForTitleRequest( PlayFab::MultiplayerServerModels::ListQosServersForTitleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListQosServersForTitleRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  includeAllRegions " << request->includeAllRegions; Log(ss); // Class: bool 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListQosServersForTitleResponse(PFMultiplayerServerListQosServersForTitleResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListQosServersForTitleResponse
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t     
    ss << "  qosServersCount " << result->qosServersCount; Log(ss);

    // PFMultiplayerServerQosServer
    for( uint32_t i=0; i<result->qosServersCount; i++ )
    {
            ss << "  result->qosServers[" << i << "]:" << result->qosServers[i]; Log(ss); // PFMultiplayerServerQosServer
    } 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListTitleMultiplayerServersQuotaChangesRequest( PlayFab::MultiplayerServerModels::ListTitleMultiplayerServersQuotaChangesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListTitleMultiplayerServersQuotaChangesRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse(PFMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListTitleMultiplayerServersQuotaChangesResponse    
    ss << "  changesCount " << result->changesCount; Log(ss);

    // PFMultiplayerServerQuotaChange
    for( uint32_t i=0; i<result->changesCount; i++ )
    {
            ss << "  result->changes[" << i << "]:" << result->changes[i]; Log(ss); // PFMultiplayerServerQuotaChange
    } 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogListVirtualMachineSummariesRequest( PlayFab::MultiplayerServerModels::ListVirtualMachineSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerListVirtualMachineSummariesRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerListVirtualMachineSummariesResponse(PFMultiplayerServerListVirtualMachineSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerListVirtualMachineSummariesResponse
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  virtualMachinesCount " << result->virtualMachinesCount; Log(ss);

    // PFMultiplayerServerVirtualMachineSummary
    for( uint32_t i=0; i<result->virtualMachinesCount; i++ )
    {
            ss << "  result->virtualMachines[" << i << "]:" << result->virtualMachines[i]; Log(ss); // PFMultiplayerServerVirtualMachineSummary
    } 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogRequestMultiplayerServerRequest( PlayFab::MultiplayerServerModels::RequestMultiplayerServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerRequestMultiplayerServerRequest struct:
    // request->buildAliasParams: PFMultiplayerServerBuildAliasParams const*
    ss << "  buildAliasParams " << request->buildAliasParams; Log(ss); // Class: PFMultiplayerServerBuildAliasParams 
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    }     
    ss << "  initialPlayersCount " << request->initialPlayersCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->initialPlayersCount; i++ )
    {
            ss << "  request->initialPlayers[" << i << "]:" << request->initialPlayers[i]; Log(ss); // const char*
    }     
    ss << "  preferredRegionsCount " << request->preferredRegionsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->preferredRegionsCount; i++ )
    {
            ss << "  request->preferredRegions[" << i << "]:" << request->preferredRegions[i]; Log(ss); // const char*
    } 
    if( request->sessionCookie ) { ss << "  sessionCookie " << request->sessionCookie; Log(ss); } else { ss << "  sessionCookie = nullptr"; Log(ss); } // Class: const char* 
    if( request->sessionId ) { ss << "  sessionId " << request->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerRequestMultiplayerServerResponse(PFMultiplayerServerRequestMultiplayerServerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerRequestMultiplayerServerResponse
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  connectedPlayersCount " << result->connectedPlayersCount; Log(ss);

    // PFMultiplayerServerConnectedPlayer
    for( uint32_t i=0; i<result->connectedPlayersCount; i++ )
    {
            ss << "  result->connectedPlayers[" << i << "]:" << result->connectedPlayers[i]; Log(ss); // PFMultiplayerServerConnectedPlayer
    } 
    if( result->fQDN ) { ss << "  fQDN " << result->fQDN; Log(ss); } else { ss << "  fQDN = nullptr"; Log(ss); } // Class: const char* 
    if( result->iPV4Address ) { ss << "  iPV4Address " << result->iPV4Address; Log(ss); } else { ss << "  iPV4Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  lastStateTransitionTime " << result->lastStateTransitionTime; Log(ss); // Class: time_t     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PFPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
            ss << "  result->ports[" << i << "]:" << result->ports[i]; Log(ss); // PFPort
    } 
    if( result->region ) { ss << "  region " << result->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverId ) { ss << "  serverId " << result->serverId; Log(ss); } else { ss << "  serverId = nullptr"; Log(ss); } // Class: const char* 
    if( result->sessionId ) { ss << "  sessionId " << result->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 
    if( result->state ) { ss << "  state " << result->state; Log(ss); } else { ss << "  state = nullptr"; Log(ss); } // Class: const char* 
    if( result->vmId ) { ss << "  vmId " << result->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogRolloverContainerRegistryCredentialsRequest( PlayFab::MultiplayerServerModels::RolloverContainerRegistryCredentialsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerRolloverContainerRegistryCredentialsRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

HRESULT AutoGenMultiplayerServerTests::LogPFMultiplayerServerRolloverContainerRegistryCredentialsResponse(PFMultiplayerServerRolloverContainerRegistryCredentialsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerServerRolloverContainerRegistryCredentialsResponse
    if( result->dnsName ) { ss << "  dnsName " << result->dnsName; Log(ss); } else { ss << "  dnsName = nullptr"; Log(ss); } // Class: const char* 
    if( result->password ) { ss << "  password " << result->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerServerTests::LogShutdownMultiplayerServerRequest( PlayFab::MultiplayerServerModels::ShutdownMultiplayerServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerShutdownMultiplayerServerRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->sessionId ) { ss << "  sessionId " << request->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogUntagContainerImageRequest( PlayFab::MultiplayerServerModels::UntagContainerImageRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerUntagContainerImageRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    if( request->imageName ) { ss << "  imageName " << request->imageName; Log(ss); } else { ss << "  imageName = nullptr"; Log(ss); } // Class: const char* 
    if( request->tag ) { ss << "  tag " << request->tag; Log(ss); } else { ss << "  tag = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerServerTests::LogUpdateBuildAliasRequest( PlayFab::MultiplayerServerModels::UpdateBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerUpdateBuildAliasRequest struct:
    // request->aliasId: const char*
    if( request->aliasId ) { ss << "  aliasId " << request->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char* 
    if( request->aliasName ) { ss << "  aliasName " << request->aliasName; Log(ss); } else { ss << "  aliasName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildSelectionCriteriaCount " << request->buildSelectionCriteriaCount; Log(ss);

    // PFMultiplayerServerBuildSelectionCriterion
    for( uint32_t i=0; i<request->buildSelectionCriteriaCount; i++ )
    {
            ss << "  request->buildSelectionCriteria[" << i << "]:" << request->buildSelectionCriteria[i]; Log(ss); // PFMultiplayerServerBuildSelectionCriterion
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenMultiplayerServerTests::LogUpdateBuildNameRequest( PlayFab::MultiplayerServerModels::UpdateBuildNameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerUpdateBuildNameRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenMultiplayerServerTests::LogUpdateBuildRegionRequest( PlayFab::MultiplayerServerModels::UpdateBuildRegionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerUpdateBuildRegionRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  buildRegion " << request->buildRegion; Log(ss); // Class: PFMultiplayerServerBuildRegionParams     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenMultiplayerServerTests::LogUpdateBuildRegionsRequest( PlayFab::MultiplayerServerModels::UpdateBuildRegionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerUpdateBuildRegionsRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildRegionsCount " << request->buildRegionsCount; Log(ss);

    // PFMultiplayerServerBuildRegionParams
    for( uint32_t i=0; i<request->buildRegionsCount; i++ )
    {
            ss << "  request->buildRegions[" << i << "]:" << request->buildRegions[i]; Log(ss); // PFMultiplayerServerBuildRegionParams
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 

}

void AutoGenMultiplayerServerTests::LogUploadCertificateRequest( PlayFab::MultiplayerServerModels::UploadCertificateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_MultiplayerServerTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerServerUploadCertificateRequest struct:
    // request->customTags: struct PFStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PFStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
            ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
            
    } 
    ss << "  gameCertificate " << request->gameCertificate; Log(ss); // Class: PFMultiplayerServerCertificate 

}

 

}
