#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenMultiplayerTests.h"
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

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest( PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest( PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCancelMatchmakingTicketRequest( PlayFab::MultiplayerModels::CancelMatchmakingTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCancelMatchmakingTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    if( request->ticketId ) { ss << "  ticketId " << request->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCancelServerBackfillTicketRequest( PlayFab::MultiplayerModels::CancelServerBackfillTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCancelServerBackfillTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    if( request->ticketId ) { ss << "  ticketId " << request->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateBuildAliasRequest( PlayFab::MultiplayerModels::CreateBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateBuildAliasRequest struct:
    // request->aliasName: const char*
    if( request->aliasName ) { ss << "  aliasName " << request->aliasName; Log(ss); } else { ss << "  aliasName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildSelectionCriteriaCount " << request->buildSelectionCriteriaCount; Log(ss);

    // PlayFabMultiplayerBuildSelectionCriterion
    for( uint32_t i=0; i<request->buildSelectionCriteriaCount; i++ )
    {
        ss << "  buildSelectionCriteria["<<i<<"]->buildWeightDistribution " << request->buildSelectionCriteria[i]->buildWeightDistribution; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerBuildAliasDetailsResponse( PlayFabMultiplayerBuildAliasDetailsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerBuildAliasDetailsResponse
    if( result->aliasId ) { ss << "  aliasId " << result->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char* 
    if( result->aliasName ) { ss << "  aliasName " << result->aliasName; Log(ss); } else { ss << "  aliasName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildSelectionCriteriaCount " << result->buildSelectionCriteriaCount; Log(ss);

    // PlayFabMultiplayerBuildSelectionCriterion
    for( uint32_t i=0; i<result->buildSelectionCriteriaCount; i++ )
    {
        ss << "  buildSelectionCriteria["<<i<<"]->buildWeightDistribution " << result->buildSelectionCriteria[i]->buildWeightDistribution; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    } 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateBuildWithCustomContainerRequest( PlayFab::MultiplayerModels::CreateBuildWithCustomContainerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateBuildWithCustomContainerRequest struct:
    // request->areAssetsReadonly: bool const*
    ss << "  areAssetsReadonly " << request->areAssetsReadonly; Log(ss); // Class: bool 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << request->containerFlavor; Log(ss); // Class: PlayFabMultiplayerContainerFlavor 
    ss << "  containerImageReference " << request->containerImageReference; Log(ss); // Class: PlayFabMultiplayerContainerImageReference 
    if( request->containerRunCommand ) { ss << "  containerRunCommand " << request->containerRunCommand; Log(ss); } else { ss << "  containerRunCommand = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  gameAssetReferencesCount " << request->gameAssetReferencesCount; Log(ss);

    // PlayFabMultiplayerAssetReferenceParams
    for( uint32_t i=0; i<request->gameAssetReferencesCount; i++ )
    {
        if( request->gameAssetReferences[i]->fileName ) { ss << "  gameAssetReferences["<<i<<"]->fileName " << request->gameAssetReferences[i]->fileName; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( request->gameAssetReferences[i]->mountPath ) { ss << "  gameAssetReferences["<<i<<"]->mountPath " << request->gameAssetReferences[i]->mountPath; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->mountPath = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  gameCertificateReferencesCount " << request->gameCertificateReferencesCount; Log(ss);

    // PlayFabMultiplayerGameCertificateReferenceParams
    for( uint32_t i=0; i<request->gameCertificateReferencesCount; i++ )
    {
        if( request->gameCertificateReferences[i]->gsdkAlias ) { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias " << request->gameCertificateReferences[i]->gsdkAlias; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias = nullptr"; Log(ss); } // Class: const char* 
        if( request->gameCertificateReferences[i]->name ) { ss << "  gameCertificateReferences["<<i<<"]->name " << request->gameCertificateReferences[i]->name; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  linuxInstrumentationConfiguration " << request->linuxInstrumentationConfiguration; Log(ss); // Class: PlayFabMultiplayerLinuxInstrumentationConfiguration     
    ss << "  metadataCount " << request->metadataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->metadataCount; i++ )
    {
        ss << "  request->metadata[" << i << "]:" << request->metadata[i].key << "=" << request->metadata[i].value; Log(ss);
        
    } 
    ss << "  multiplayerServerCountPerVm " << request->multiplayerServerCountPerVm; Log(ss); // Class: int32_t     
    ss << "  portsCount " << request->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<request->portsCount; i++ )
    {
        if( request->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << request->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << request->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << request->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    }     
    ss << "  regionConfigurationsCount " << request->regionConfigurationsCount; Log(ss);

    // PlayFabMultiplayerBuildRegionParams
    for( uint32_t i=0; i<request->regionConfigurationsCount; i++ )
    {
        ss << "  regionConfigurations["<<i<<"]->dynamicStandbySettings " << request->regionConfigurations[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->maxServers " << request->regionConfigurations[i]->maxServers; Log(ss); // Class: int32_t 
        if( request->regionConfigurations[i]->region ) { ss << "  regionConfigurations["<<i<<"]->region " << request->regionConfigurations[i]->region; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  regionConfigurations["<<i<<"]->scheduledStandbySettings " << request->regionConfigurations[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->standbyServers " << request->regionConfigurations[i]->standbyServers; Log(ss); // Class: int32_t 
    } 
    ss << "  useStreamingForAssetDownloads " << request->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << request->vmSize; Log(ss); // Class: PlayFabMultiplayerAzureVmSize 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateBuildWithCustomContainerResponse( PlayFabMultiplayerCreateBuildWithCustomContainerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerCreateBuildWithCustomContainerResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PlayFabMultiplayerContainerFlavor 
    if( result->containerRunCommand ) { ss << "  containerRunCommand " << result->containerRunCommand; Log(ss); } else { ss << "  containerRunCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t 
    ss << "  customGameContainerImage " << result->customGameContainerImage; Log(ss); // Class: PlayFabMultiplayerContainerImageReference     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PlayFabMultiplayerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
        if( result->gameAssetReferences[i]->fileName ) { ss << "  gameAssetReferences["<<i<<"]->fileName " << result->gameAssetReferences[i]->fileName; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameAssetReferences[i]->mountPath ) { ss << "  gameAssetReferences["<<i<<"]->mountPath " << result->gameAssetReferences[i]->mountPath; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->mountPath = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PlayFabMultiplayerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
        if( result->gameCertificateReferences[i]->gsdkAlias ) { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias " << result->gameCertificateReferences[i]->gsdkAlias; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameCertificateReferences[i]->name ) { ss << "  gameCertificateReferences["<<i<<"]->name " << result->gameCertificateReferences[i]->name; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  linuxInstrumentationConfiguration " << result->linuxInstrumentationConfiguration; Log(ss); // Class: PlayFabMultiplayerLinuxInstrumentationConfiguration     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
        ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
        
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
        if( result->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << result->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << result->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << result->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PlayFabMultiplayerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
        ss << "  regionConfigurations["<<i<<"]->currentServerStats " << result->regionConfigurations[i]->currentServerStats; Log(ss); // Class: PlayFabMultiplayerCurrentServerStats 
        ss << "  regionConfigurations["<<i<<"]->dynamicStandbySettings " << result->regionConfigurations[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->maxServers " << result->regionConfigurations[i]->maxServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->region ) { ss << "  regionConfigurations["<<i<<"]->region " << result->regionConfigurations[i]->region; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  regionConfigurations["<<i<<"]->scheduledStandbySettings " << result->regionConfigurations[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->standbyServers " << result->regionConfigurations[i]->standbyServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->status ) { ss << "  regionConfigurations["<<i<<"]->status " << result->regionConfigurations[i]->status; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->status = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PlayFabMultiplayerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateBuildWithManagedContainerRequest( PlayFab::MultiplayerModels::CreateBuildWithManagedContainerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateBuildWithManagedContainerRequest struct:
    // request->areAssetsReadonly: bool const*
    ss << "  areAssetsReadonly " << request->areAssetsReadonly; Log(ss); // Class: bool 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << request->containerFlavor; Log(ss); // Class: PlayFabMultiplayerContainerFlavor     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  gameAssetReferencesCount " << request->gameAssetReferencesCount; Log(ss);

    // PlayFabMultiplayerAssetReferenceParams
    for( uint32_t i=0; i<request->gameAssetReferencesCount; i++ )
    {
        if( request->gameAssetReferences[i]->fileName ) { ss << "  gameAssetReferences["<<i<<"]->fileName " << request->gameAssetReferences[i]->fileName; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( request->gameAssetReferences[i]->mountPath ) { ss << "  gameAssetReferences["<<i<<"]->mountPath " << request->gameAssetReferences[i]->mountPath; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->mountPath = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  gameCertificateReferencesCount " << request->gameCertificateReferencesCount; Log(ss);

    // PlayFabMultiplayerGameCertificateReferenceParams
    for( uint32_t i=0; i<request->gameCertificateReferencesCount; i++ )
    {
        if( request->gameCertificateReferences[i]->gsdkAlias ) { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias " << request->gameCertificateReferences[i]->gsdkAlias; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias = nullptr"; Log(ss); } // Class: const char* 
        if( request->gameCertificateReferences[i]->name ) { ss << "  gameCertificateReferences["<<i<<"]->name " << request->gameCertificateReferences[i]->name; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( request->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << request->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << request->instrumentationConfiguration; Log(ss); // Class: PlayFabMultiplayerInstrumentationConfiguration     
    ss << "  metadataCount " << request->metadataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->metadataCount; i++ )
    {
        ss << "  request->metadata[" << i << "]:" << request->metadata[i].key << "=" << request->metadata[i].value; Log(ss);
        
    } 
    ss << "  multiplayerServerCountPerVm " << request->multiplayerServerCountPerVm; Log(ss); // Class: int32_t     
    ss << "  portsCount " << request->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<request->portsCount; i++ )
    {
        if( request->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << request->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << request->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << request->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    }     
    ss << "  regionConfigurationsCount " << request->regionConfigurationsCount; Log(ss);

    // PlayFabMultiplayerBuildRegionParams
    for( uint32_t i=0; i<request->regionConfigurationsCount; i++ )
    {
        ss << "  regionConfigurations["<<i<<"]->dynamicStandbySettings " << request->regionConfigurations[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->maxServers " << request->regionConfigurations[i]->maxServers; Log(ss); // Class: int32_t 
        if( request->regionConfigurations[i]->region ) { ss << "  regionConfigurations["<<i<<"]->region " << request->regionConfigurations[i]->region; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  regionConfigurations["<<i<<"]->scheduledStandbySettings " << request->regionConfigurations[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->standbyServers " << request->regionConfigurations[i]->standbyServers; Log(ss); // Class: int32_t 
    } 
    if( request->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << request->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << request->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << request->vmSize; Log(ss); // Class: PlayFabMultiplayerAzureVmSize 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateBuildWithManagedContainerResponse( PlayFabMultiplayerCreateBuildWithManagedContainerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerCreateBuildWithManagedContainerResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PlayFabMultiplayerContainerFlavor 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PlayFabMultiplayerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
        if( result->gameAssetReferences[i]->fileName ) { ss << "  gameAssetReferences["<<i<<"]->fileName " << result->gameAssetReferences[i]->fileName; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameAssetReferences[i]->mountPath ) { ss << "  gameAssetReferences["<<i<<"]->mountPath " << result->gameAssetReferences[i]->mountPath; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->mountPath = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PlayFabMultiplayerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
        if( result->gameCertificateReferences[i]->gsdkAlias ) { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias " << result->gameCertificateReferences[i]->gsdkAlias; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameCertificateReferences[i]->name ) { ss << "  gameCertificateReferences["<<i<<"]->name " << result->gameCertificateReferences[i]->name; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << result->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << result->instrumentationConfiguration; Log(ss); // Class: PlayFabMultiplayerInstrumentationConfiguration     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
        ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
        
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
        if( result->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << result->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << result->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << result->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PlayFabMultiplayerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
        ss << "  regionConfigurations["<<i<<"]->currentServerStats " << result->regionConfigurations[i]->currentServerStats; Log(ss); // Class: PlayFabMultiplayerCurrentServerStats 
        ss << "  regionConfigurations["<<i<<"]->dynamicStandbySettings " << result->regionConfigurations[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->maxServers " << result->regionConfigurations[i]->maxServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->region ) { ss << "  regionConfigurations["<<i<<"]->region " << result->regionConfigurations[i]->region; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  regionConfigurations["<<i<<"]->scheduledStandbySettings " << result->regionConfigurations[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->standbyServers " << result->regionConfigurations[i]->standbyServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->status ) { ss << "  regionConfigurations["<<i<<"]->status " << result->regionConfigurations[i]->status; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->status = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    if( result->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << result->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PlayFabMultiplayerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateBuildWithProcessBasedServerRequest( PlayFab::MultiplayerModels::CreateBuildWithProcessBasedServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest struct:
    // request->areAssetsReadonly: bool const*
    ss << "  areAssetsReadonly " << request->areAssetsReadonly; Log(ss); // Class: bool 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    }     
    ss << "  gameAssetReferencesCount " << request->gameAssetReferencesCount; Log(ss);

    // PlayFabMultiplayerAssetReferenceParams
    for( uint32_t i=0; i<request->gameAssetReferencesCount; i++ )
    {
        if( request->gameAssetReferences[i]->fileName ) { ss << "  gameAssetReferences["<<i<<"]->fileName " << request->gameAssetReferences[i]->fileName; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( request->gameAssetReferences[i]->mountPath ) { ss << "  gameAssetReferences["<<i<<"]->mountPath " << request->gameAssetReferences[i]->mountPath; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->mountPath = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  gameCertificateReferencesCount " << request->gameCertificateReferencesCount; Log(ss);

    // PlayFabMultiplayerGameCertificateReferenceParams
    for( uint32_t i=0; i<request->gameCertificateReferencesCount; i++ )
    {
        if( request->gameCertificateReferences[i]->gsdkAlias ) { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias " << request->gameCertificateReferences[i]->gsdkAlias; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias = nullptr"; Log(ss); } // Class: const char* 
        if( request->gameCertificateReferences[i]->name ) { ss << "  gameCertificateReferences["<<i<<"]->name " << request->gameCertificateReferences[i]->name; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( request->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << request->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << request->instrumentationConfiguration; Log(ss); // Class: PlayFabMultiplayerInstrumentationConfiguration 
    ss << "  isOSPreview " << request->isOSPreview; Log(ss); // Class: bool     
    ss << "  metadataCount " << request->metadataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->metadataCount; i++ )
    {
        ss << "  request->metadata[" << i << "]:" << request->metadata[i].key << "=" << request->metadata[i].value; Log(ss);
        
    } 
    ss << "  multiplayerServerCountPerVm " << request->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( request->osPlatform ) { ss << "  osPlatform " << request->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << request->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<request->portsCount; i++ )
    {
        if( request->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << request->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << request->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << request->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    }     
    ss << "  regionConfigurationsCount " << request->regionConfigurationsCount; Log(ss);

    // PlayFabMultiplayerBuildRegionParams
    for( uint32_t i=0; i<request->regionConfigurationsCount; i++ )
    {
        ss << "  regionConfigurations["<<i<<"]->dynamicStandbySettings " << request->regionConfigurations[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->maxServers " << request->regionConfigurations[i]->maxServers; Log(ss); // Class: int32_t 
        if( request->regionConfigurations[i]->region ) { ss << "  regionConfigurations["<<i<<"]->region " << request->regionConfigurations[i]->region; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  regionConfigurations["<<i<<"]->scheduledStandbySettings " << request->regionConfigurations[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->standbyServers " << request->regionConfigurations[i]->standbyServers; Log(ss); // Class: int32_t 
    } 
    if( request->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << request->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << request->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << request->vmSize; Log(ss); // Class: PlayFabMultiplayerAzureVmSize 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateBuildWithProcessBasedServerResponse( PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerCreateBuildWithProcessBasedServerResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PlayFabMultiplayerContainerFlavor 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PlayFabMultiplayerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
        if( result->gameAssetReferences[i]->fileName ) { ss << "  gameAssetReferences["<<i<<"]->fileName " << result->gameAssetReferences[i]->fileName; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameAssetReferences[i]->mountPath ) { ss << "  gameAssetReferences["<<i<<"]->mountPath " << result->gameAssetReferences[i]->mountPath; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->mountPath = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PlayFabMultiplayerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
        if( result->gameCertificateReferences[i]->gsdkAlias ) { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias " << result->gameCertificateReferences[i]->gsdkAlias; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameCertificateReferences[i]->name ) { ss << "  gameCertificateReferences["<<i<<"]->name " << result->gameCertificateReferences[i]->name; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->gameWorkingDirectory ) { ss << "  gameWorkingDirectory " << result->gameWorkingDirectory; Log(ss); } else { ss << "  gameWorkingDirectory = nullptr"; Log(ss); } // Class: const char* 
    ss << "  instrumentationConfiguration " << result->instrumentationConfiguration; Log(ss); // Class: PlayFabMultiplayerInstrumentationConfiguration 
    ss << "  isOSPreview " << result->isOSPreview; Log(ss); // Class: bool     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
        ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
        
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
        if( result->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << result->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << result->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << result->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PlayFabMultiplayerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
        ss << "  regionConfigurations["<<i<<"]->currentServerStats " << result->regionConfigurations[i]->currentServerStats; Log(ss); // Class: PlayFabMultiplayerCurrentServerStats 
        ss << "  regionConfigurations["<<i<<"]->dynamicStandbySettings " << result->regionConfigurations[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->maxServers " << result->regionConfigurations[i]->maxServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->region ) { ss << "  regionConfigurations["<<i<<"]->region " << result->regionConfigurations[i]->region; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  regionConfigurations["<<i<<"]->scheduledStandbySettings " << result->regionConfigurations[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->standbyServers " << result->regionConfigurations[i]->standbyServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->status ) { ss << "  regionConfigurations["<<i<<"]->status " << result->regionConfigurations[i]->status; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->status = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    if( result->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << result->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PlayFabMultiplayerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateMatchmakingTicketRequest( PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateMatchmakingTicketRequest struct:
    // request->creator: PlayFabMultiplayerMatchmakingPlayer const*
    ss << "  creator " << request->creator; Log(ss); // Class: PlayFabMultiplayerMatchmakingPlayer     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  giveUpAfterSeconds " << request->giveUpAfterSeconds; Log(ss); // Class: int32_t     
    ss << "  membersToMatchWithCount " << request->membersToMatchWithCount; Log(ss);

    // PlayFabEntityKey
    for( uint32_t i=0; i<request->membersToMatchWithCount; i++ )
    {
        ss << "  request->membersToMatchWith[" << i << "]:" << request->membersToMatchWith[i]; Log(ss); // PlayFabEntityKey
    } 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateMatchmakingTicketResult( PlayFabMultiplayerCreateMatchmakingTicketResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerCreateMatchmakingTicketResult
    if( result->ticketId ) { ss << "  ticketId " << result->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateRemoteUserRequest( PlayFab::MultiplayerModels::CreateRemoteUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateRemoteUserRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  expirationTime " << request->expirationTime; Log(ss); // Class: time_t 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    if( request->vmId ) { ss << "  vmId " << request->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateRemoteUserResponse( PlayFabMultiplayerCreateRemoteUserResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerCreateRemoteUserResponse
    ss << "  expirationTime " << result->expirationTime; Log(ss); // Class: time_t 
    if( result->password ) { ss << "  password " << result->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateServerBackfillTicketRequest( PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateServerBackfillTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  giveUpAfterSeconds " << request->giveUpAfterSeconds; Log(ss); // Class: int32_t     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
        ss << "  members["<<i<<"]->attributes " << request->members[i]->attributes; Log(ss); // Class: PlayFabMultiplayerMatchmakingPlayerAttributes 
        ss << "  members["<<i<<"]->entity " << request->members[i]->entity; Log(ss); // Class: PlayFabEntityKey 
        if( request->members[i]->teamId ) { ss << "  members["<<i<<"]->teamId " << request->members[i]->teamId; Log(ss); } else { ss << "  members["<<i<<"]->teamId = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  serverDetails " << request->serverDetails; Log(ss); // Class: PlayFabMultiplayerServerDetails 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateServerBackfillTicketResult( PlayFabMultiplayerCreateServerBackfillTicketResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerCreateServerBackfillTicketResult
    if( result->ticketId ) { ss << "  ticketId " << result->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateServerMatchmakingTicketRequest( PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateServerMatchmakingTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  giveUpAfterSeconds " << request->giveUpAfterSeconds; Log(ss); // Class: int32_t     
    ss << "  membersCount " << request->membersCount; Log(ss);

    // PlayFabMultiplayerMatchmakingPlayer
    for( uint32_t i=0; i<request->membersCount; i++ )
    {
        ss << "  members["<<i<<"]->attributes " << request->members[i]->attributes; Log(ss); // Class: PlayFabMultiplayerMatchmakingPlayerAttributes 
        ss << "  members["<<i<<"]->entity " << request->members[i]->entity; Log(ss); // Class: PlayFabEntityKey 
    } 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerModels::CreateTitleMultiplayerServersQuotaChangeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest struct:
    // request->changeDescription: const char*
    if( request->changeDescription ) { ss << "  changeDescription " << request->changeDescription; Log(ss); } else { ss << "  changeDescription = nullptr"; Log(ss); } // Class: const char*     
    ss << "  changesCount " << request->changesCount; Log(ss);

    // PlayFabMultiplayerCoreCapacityChange
    for( uint32_t i=0; i<request->changesCount; i++ )
    {
        ss << "  changes["<<i<<"]->newCoreLimit " << request->changes[i]->newCoreLimit; Log(ss); // Class: int32_t 
        if( request->changes[i]->region ) { ss << "  changes["<<i<<"]->region " << request->changes[i]->region; Log(ss); } else { ss << "  changes["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  changes["<<i<<"]->vmFamily " << request->changes[i]->vmFamily; Log(ss); // Class: PlayFabMultiplayerAzureVmFamily 
    } 
    if( request->contactEmail ) { ss << "  contactEmail " << request->contactEmail; Log(ss); } else { ss << "  contactEmail = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->notes ) { ss << "  notes " << request->notes; Log(ss); } else { ss << "  notes = nullptr"; Log(ss); } // Class: const char* 
    ss << "  startDate " << request->startDate; Log(ss); // Class: time_t 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse( PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse
    if( result->requestId ) { ss << "  requestId " << result->requestId; Log(ss); } else { ss << "  requestId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  wasApproved " << result->wasApproved; Log(ss); // Class: bool 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerDeleteAssetRequest( PlayFab::MultiplayerModels::DeleteAssetRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerDeleteAssetRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->fileName ) { ss << "  fileName " << request->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerDeleteBuildRequest( PlayFab::MultiplayerModels::DeleteBuildRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerDeleteBuildRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerDeleteBuildAliasRequest( PlayFab::MultiplayerModels::DeleteBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerDeleteBuildAliasRequest struct:
    // request->aliasId: const char*
    if( request->aliasId ) { ss << "  aliasId " << request->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerDeleteBuildRegionRequest( PlayFab::MultiplayerModels::DeleteBuildRegionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerDeleteBuildRegionRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerDeleteCertificateRequest( PlayFab::MultiplayerModels::DeleteCertificateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerDeleteCertificateRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerDeleteContainerImageRequest( PlayFab::MultiplayerModels::DeleteContainerImageRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerDeleteContainerImageRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->imageName ) { ss << "  imageName " << request->imageName; Log(ss); } else { ss << "  imageName = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerDeleteRemoteUserRequest( PlayFab::MultiplayerModels::DeleteRemoteUserRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerDeleteRemoteUserRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->username ) { ss << "  username " << request->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    if( request->vmId ) { ss << "  vmId " << request->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerEnableMultiplayerServersForTitleRequest( PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerEnableMultiplayerServersForTitleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerEnableMultiplayerServersForTitleResponse( PlayFabMultiplayerEnableMultiplayerServersForTitleResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerEnableMultiplayerServersForTitleResponse
    ss << "  status " << result->status; Log(ss); // Class: PlayFabMultiplayerTitleMultiplayerServerEnabledStatus 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetAssetDownloadUrlRequest( PlayFab::MultiplayerModels::GetAssetDownloadUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetAssetDownloadUrlRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->fileName ) { ss << "  fileName " << request->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetAssetDownloadUrlResponse( PlayFabMultiplayerGetAssetDownloadUrlResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetAssetDownloadUrlResponse
    if( result->assetDownloadUrl ) { ss << "  assetDownloadUrl " << result->assetDownloadUrl; Log(ss); } else { ss << "  assetDownloadUrl = nullptr"; Log(ss); } // Class: const char* 
    if( result->fileName ) { ss << "  fileName " << result->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetAssetUploadUrlRequest( PlayFab::MultiplayerModels::GetAssetUploadUrlRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetAssetUploadUrlRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->fileName ) { ss << "  fileName " << request->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetAssetUploadUrlResponse( PlayFabMultiplayerGetAssetUploadUrlResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetAssetUploadUrlResponse
    if( result->assetUploadUrl ) { ss << "  assetUploadUrl " << result->assetUploadUrl; Log(ss); } else { ss << "  assetUploadUrl = nullptr"; Log(ss); } // Class: const char* 
    if( result->fileName ) { ss << "  fileName " << result->fileName; Log(ss); } else { ss << "  fileName = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetBuildRequest( PlayFab::MultiplayerModels::GetBuildRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetBuildRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetBuildResponse( PlayFabMultiplayerGetBuildResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetBuildResponse
    ss << "  areAssetsReadonly " << result->areAssetsReadonly; Log(ss); // Class: bool 
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildName ) { ss << "  buildName " << result->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char* 
    if( result->buildStatus ) { ss << "  buildStatus " << result->buildStatus; Log(ss); } else { ss << "  buildStatus = nullptr"; Log(ss); } // Class: const char* 
    ss << "  containerFlavor " << result->containerFlavor; Log(ss); // Class: PlayFabMultiplayerContainerFlavor 
    if( result->containerRunCommand ) { ss << "  containerRunCommand " << result->containerRunCommand; Log(ss); } else { ss << "  containerRunCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  creationTime " << result->creationTime; Log(ss); // Class: time_t 
    ss << "  customGameContainerImage " << result->customGameContainerImage; Log(ss); // Class: PlayFabMultiplayerContainerImageReference     
    ss << "  gameAssetReferencesCount " << result->gameAssetReferencesCount; Log(ss);

    // PlayFabMultiplayerAssetReference
    for( uint32_t i=0; i<result->gameAssetReferencesCount; i++ )
    {
        if( result->gameAssetReferences[i]->fileName ) { ss << "  gameAssetReferences["<<i<<"]->fileName " << result->gameAssetReferences[i]->fileName; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameAssetReferences[i]->mountPath ) { ss << "  gameAssetReferences["<<i<<"]->mountPath " << result->gameAssetReferences[i]->mountPath; Log(ss); } else { ss << "  gameAssetReferences["<<i<<"]->mountPath = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  gameCertificateReferencesCount " << result->gameCertificateReferencesCount; Log(ss);

    // PlayFabMultiplayerGameCertificateReference
    for( uint32_t i=0; i<result->gameCertificateReferencesCount; i++ )
    {
        if( result->gameCertificateReferences[i]->gsdkAlias ) { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias " << result->gameCertificateReferences[i]->gsdkAlias; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->gsdkAlias = nullptr"; Log(ss); } // Class: const char* 
        if( result->gameCertificateReferences[i]->name ) { ss << "  gameCertificateReferences["<<i<<"]->name " << result->gameCertificateReferences[i]->name; Log(ss); } else { ss << "  gameCertificateReferences["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  instrumentationConfiguration " << result->instrumentationConfiguration; Log(ss); // Class: PlayFabMultiplayerInstrumentationConfiguration     
    ss << "  metadataCount " << result->metadataCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<result->metadataCount; i++ )
    {
        ss << "  result->metadata[" << i << "]:" << result->metadata[i].key << "=" << result->metadata[i].value; Log(ss);
        
    } 
    ss << "  multiplayerServerCountPerVm " << result->multiplayerServerCountPerVm; Log(ss); // Class: int32_t 
    if( result->osPlatform ) { ss << "  osPlatform " << result->osPlatform; Log(ss); } else { ss << "  osPlatform = nullptr"; Log(ss); } // Class: const char*     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
        if( result->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << result->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << result->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << result->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    }     
    ss << "  regionConfigurationsCount " << result->regionConfigurationsCount; Log(ss);

    // PlayFabMultiplayerBuildRegion
    for( uint32_t i=0; i<result->regionConfigurationsCount; i++ )
    {
        ss << "  regionConfigurations["<<i<<"]->currentServerStats " << result->regionConfigurations[i]->currentServerStats; Log(ss); // Class: PlayFabMultiplayerCurrentServerStats 
        ss << "  regionConfigurations["<<i<<"]->dynamicStandbySettings " << result->regionConfigurations[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->maxServers " << result->regionConfigurations[i]->maxServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->region ) { ss << "  regionConfigurations["<<i<<"]->region " << result->regionConfigurations[i]->region; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  regionConfigurations["<<i<<"]->scheduledStandbySettings " << result->regionConfigurations[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  regionConfigurations["<<i<<"]->standbyServers " << result->regionConfigurations[i]->standbyServers; Log(ss); // Class: int32_t 
        if( result->regionConfigurations[i]->status ) { ss << "  regionConfigurations["<<i<<"]->status " << result->regionConfigurations[i]->status; Log(ss); } else { ss << "  regionConfigurations["<<i<<"]->status = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->serverType ) { ss << "  serverType " << result->serverType; Log(ss); } else { ss << "  serverType = nullptr"; Log(ss); } // Class: const char* 
    if( result->startMultiplayerServerCommand ) { ss << "  startMultiplayerServerCommand " << result->startMultiplayerServerCommand; Log(ss); } else { ss << "  startMultiplayerServerCommand = nullptr"; Log(ss); } // Class: const char* 
    ss << "  useStreamingForAssetDownloads " << result->useStreamingForAssetDownloads; Log(ss); // Class: bool 
    ss << "  vmSize " << result->vmSize; Log(ss); // Class: PlayFabMultiplayerAzureVmSize 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetBuildAliasRequest( PlayFab::MultiplayerModels::GetBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetBuildAliasRequest struct:
    // request->aliasId: const char*
    if( request->aliasId ) { ss << "  aliasId " << request->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetContainerRegistryCredentialsRequest( PlayFab::MultiplayerModels::GetContainerRegistryCredentialsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetContainerRegistryCredentialsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetContainerRegistryCredentialsResponse( PlayFabMultiplayerGetContainerRegistryCredentialsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetContainerRegistryCredentialsResponse
    if( result->dnsName ) { ss << "  dnsName " << result->dnsName; Log(ss); } else { ss << "  dnsName = nullptr"; Log(ss); } // Class: const char* 
    if( result->password ) { ss << "  password " << result->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMatchRequest( PlayFab::MultiplayerModels::GetMatchRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetMatchRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  escapeObject " << request->escapeObject; Log(ss); // Class: bool 
    if( request->matchId ) { ss << "  matchId " << request->matchId; Log(ss); } else { ss << "  matchId = nullptr"; Log(ss); } // Class: const char* 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  returnMemberAttributes " << request->returnMemberAttributes; Log(ss); // Class: bool 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMatchResult( PlayFabMultiplayerGetMatchResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetMatchResult
    if( result->matchId ) { ss << "  matchId " << result->matchId; Log(ss); } else { ss << "  matchId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  membersCount " << result->membersCount; Log(ss);

    // PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
        ss << "  members["<<i<<"]->attributes " << result->members[i]->attributes; Log(ss); // Class: PlayFabMultiplayerMatchmakingPlayerAttributes 
        ss << "  members["<<i<<"]->entity " << result->members[i]->entity; Log(ss); // Class: PlayFabEntityKey 
        if( result->members[i]->teamId ) { ss << "  members["<<i<<"]->teamId " << result->members[i]->teamId; Log(ss); } else { ss << "  members["<<i<<"]->teamId = nullptr"; Log(ss); } // Class: const char* 
    }     
    ss << "  regionPreferencesCount " << result->regionPreferencesCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->regionPreferencesCount; i++ )
    {
        ss << "  result->regionPreferences[" << i << "]:" << result->regionPreferences[i]; Log(ss); // const char*
    } 
    ss << "  serverDetails " << result->serverDetails; Log(ss); // Class: PlayFabMultiplayerServerDetails 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMatchmakingTicketRequest( PlayFab::MultiplayerModels::GetMatchmakingTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetMatchmakingTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  escapeObject " << request->escapeObject; Log(ss); // Class: bool 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    if( request->ticketId ) { ss << "  ticketId " << request->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMatchmakingTicketResult( PlayFabMultiplayerGetMatchmakingTicketResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetMatchmakingTicketResult
    if( result->cancellationReasonString ) { ss << "  cancellationReasonString " << result->cancellationReasonString; Log(ss); } else { ss << "  cancellationReasonString = nullptr"; Log(ss); } // Class: const char* 
    ss << "  created " << result->created; Log(ss); // Class: time_t 
    ss << "  creator " << result->creator; Log(ss); // Class: PlayFabEntityKey 
    ss << "  giveUpAfterSeconds " << result->giveUpAfterSeconds; Log(ss); // Class: int32_t 
    if( result->matchId ) { ss << "  matchId " << result->matchId; Log(ss); } else { ss << "  matchId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  membersCount " << result->membersCount; Log(ss);

    // PlayFabMultiplayerMatchmakingPlayer
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
        ss << "  members["<<i<<"]->attributes " << result->members[i]->attributes; Log(ss); // Class: PlayFabMultiplayerMatchmakingPlayerAttributes 
        ss << "  members["<<i<<"]->entity " << result->members[i]->entity; Log(ss); // Class: PlayFabEntityKey 
    }     
    ss << "  membersToMatchWithCount " << result->membersToMatchWithCount; Log(ss);

    // PlayFabEntityKey
    for( uint32_t i=0; i<result->membersToMatchWithCount; i++ )
    {
        ss << "  result->membersToMatchWith[" << i << "]:" << result->membersToMatchWith[i]; Log(ss); // PlayFabEntityKey
    } 
    if( result->queueName ) { ss << "  queueName " << result->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    if( result->status ) { ss << "  status " << result->status; Log(ss); } else { ss << "  status = nullptr"; Log(ss); } // Class: const char* 
    if( result->ticketId ) { ss << "  ticketId " << result->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMultiplayerServerDetailsRequest( PlayFab::MultiplayerModels::GetMultiplayerServerDetailsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetMultiplayerServerDetailsRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->sessionId ) { ss << "  sessionId " << request->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMultiplayerServerDetailsResponse( PlayFabMultiplayerGetMultiplayerServerDetailsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetMultiplayerServerDetailsResponse
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  connectedPlayersCount " << result->connectedPlayersCount; Log(ss);

    // PlayFabMultiplayerConnectedPlayer
    for( uint32_t i=0; i<result->connectedPlayersCount; i++ )
    {
        if( result->connectedPlayers[i]->playerId ) { ss << "  connectedPlayers["<<i<<"]->playerId " << result->connectedPlayers[i]->playerId; Log(ss); } else { ss << "  connectedPlayers["<<i<<"]->playerId = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->fQDN ) { ss << "  fQDN " << result->fQDN; Log(ss); } else { ss << "  fQDN = nullptr"; Log(ss); } // Class: const char* 
    if( result->iPV4Address ) { ss << "  iPV4Address " << result->iPV4Address; Log(ss); } else { ss << "  iPV4Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  lastStateTransitionTime " << result->lastStateTransitionTime; Log(ss); // Class: time_t     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
        if( result->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << result->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << result->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << result->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    } 
    if( result->region ) { ss << "  region " << result->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverId ) { ss << "  serverId " << result->serverId; Log(ss); } else { ss << "  serverId = nullptr"; Log(ss); } // Class: const char* 
    if( result->sessionId ) { ss << "  sessionId " << result->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 
    if( result->state ) { ss << "  state " << result->state; Log(ss); } else { ss << "  state = nullptr"; Log(ss); } // Class: const char* 
    if( result->vmId ) { ss << "  vmId " << result->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMultiplayerServerLogsRequest( PlayFab::MultiplayerModels::GetMultiplayerServerLogsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetMultiplayerServerLogsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->serverId ) { ss << "  serverId " << request->serverId; Log(ss); } else { ss << "  serverId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMultiplayerServerLogsResponse( PlayFabMultiplayerGetMultiplayerServerLogsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetMultiplayerServerLogsResponse
    if( result->logDownloadUrl ) { ss << "  logDownloadUrl " << result->logDownloadUrl; Log(ss); } else { ss << "  logDownloadUrl = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest( PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->sessionId ) { ss << "  sessionId " << request->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetQueueStatisticsRequest( PlayFab::MultiplayerModels::GetQueueStatisticsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetQueueStatisticsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetQueueStatisticsResult( PlayFabMultiplayerGetQueueStatisticsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetQueueStatisticsResult
    ss << "  numberOfPlayersMatching " << result->numberOfPlayersMatching; Log(ss); // Class: uint32_t 
    ss << "  timeToMatchStatisticsInSeconds " << result->timeToMatchStatisticsInSeconds; Log(ss); // Class: PlayFabMultiplayerStatistics 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetRemoteLoginEndpointRequest( PlayFab::MultiplayerModels::GetRemoteLoginEndpointRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetRemoteLoginEndpointRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->vmId ) { ss << "  vmId " << request->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetRemoteLoginEndpointResponse( PlayFabMultiplayerGetRemoteLoginEndpointResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetRemoteLoginEndpointResponse
    if( result->iPV4Address ) { ss << "  iPV4Address " << result->iPV4Address; Log(ss); } else { ss << "  iPV4Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  port " << result->port; Log(ss); // Class: int32_t 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetServerBackfillTicketRequest( PlayFab::MultiplayerModels::GetServerBackfillTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetServerBackfillTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  escapeObject " << request->escapeObject; Log(ss); // Class: bool 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    if( request->ticketId ) { ss << "  ticketId " << request->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetServerBackfillTicketResult( PlayFabMultiplayerGetServerBackfillTicketResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetServerBackfillTicketResult
    if( result->cancellationReasonString ) { ss << "  cancellationReasonString " << result->cancellationReasonString; Log(ss); } else { ss << "  cancellationReasonString = nullptr"; Log(ss); } // Class: const char* 
    ss << "  created " << result->created; Log(ss); // Class: time_t 
    ss << "  giveUpAfterSeconds " << result->giveUpAfterSeconds; Log(ss); // Class: int32_t 
    if( result->matchId ) { ss << "  matchId " << result->matchId; Log(ss); } else { ss << "  matchId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  membersCount " << result->membersCount; Log(ss);

    // PlayFabMultiplayerMatchmakingPlayerWithTeamAssignment
    for( uint32_t i=0; i<result->membersCount; i++ )
    {
        ss << "  members["<<i<<"]->attributes " << result->members[i]->attributes; Log(ss); // Class: PlayFabMultiplayerMatchmakingPlayerAttributes 
        ss << "  members["<<i<<"]->entity " << result->members[i]->entity; Log(ss); // Class: PlayFabEntityKey 
        if( result->members[i]->teamId ) { ss << "  members["<<i<<"]->teamId " << result->members[i]->teamId; Log(ss); } else { ss << "  members["<<i<<"]->teamId = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->queueName ) { ss << "  queueName " << result->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    ss << "  serverDetails " << result->serverDetails; Log(ss); // Class: PlayFabMultiplayerServerDetails 
    if( result->status ) { ss << "  status " << result->status; Log(ss); } else { ss << "  status = nullptr"; Log(ss); } // Class: const char* 
    if( result->ticketId ) { ss << "  ticketId " << result->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest( PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse( PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse
    ss << "  status " << result->status; Log(ss); // Class: PlayFabMultiplayerTitleMultiplayerServerEnabledStatus 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest( PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotaChangeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->requestId ) { ss << "  requestId " << request->requestId; Log(ss); } else { ss << "  requestId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse( PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeResponse
    ss << "  change " << result->change; Log(ss); // Class: PlayFabMultiplayerQuotaChange 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest( PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse( PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerGetTitleMultiplayerServersQuotasResponse
    ss << "  quotas " << result->quotas; Log(ss); // Class: PlayFabMultiplayerTitleMultiplayerServersQuotas 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerJoinMatchmakingTicketRequest( PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerJoinMatchmakingTicketRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  member " << request->member; Log(ss); // Class: PlayFabMultiplayerMatchmakingPlayer 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 
    if( request->ticketId ) { ss << "  ticketId " << request->ticketId; Log(ss); } else { ss << "  ticketId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListMultiplayerServersRequest( PlayFab::MultiplayerModels::ListMultiplayerServersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListMultiplayerServersRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListMultiplayerServersResponse( PlayFabMultiplayerListMultiplayerServersResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListMultiplayerServersResponse    
    ss << "  multiplayerServerSummariesCount " << result->multiplayerServerSummariesCount; Log(ss);

    // PlayFabMultiplayerMultiplayerServerSummary
    for( uint32_t i=0; i<result->multiplayerServerSummariesCount; i++ )
    {
        ss << "  multiplayerServerSummaries["<<i<<"]->connectedPlayers " << result->multiplayerServerSummaries[i]->connectedPlayers; Log(ss); // Class: PlayFabMultiplayerConnectedPlayer 
        ss << "  multiplayerServerSummaries["<<i<<"]->lastStateTransitionTime " << result->multiplayerServerSummaries[i]->lastStateTransitionTime; Log(ss); // Class: time_t 
        if( result->multiplayerServerSummaries[i]->region ) { ss << "  multiplayerServerSummaries["<<i<<"]->region " << result->multiplayerServerSummaries[i]->region; Log(ss); } else { ss << "  multiplayerServerSummaries["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        if( result->multiplayerServerSummaries[i]->serverId ) { ss << "  multiplayerServerSummaries["<<i<<"]->serverId " << result->multiplayerServerSummaries[i]->serverId; Log(ss); } else { ss << "  multiplayerServerSummaries["<<i<<"]->serverId = nullptr"; Log(ss); } // Class: const char* 
        if( result->multiplayerServerSummaries[i]->sessionId ) { ss << "  multiplayerServerSummaries["<<i<<"]->sessionId " << result->multiplayerServerSummaries[i]->sessionId; Log(ss); } else { ss << "  multiplayerServerSummaries["<<i<<"]->sessionId = nullptr"; Log(ss); } // Class: const char* 
        if( result->multiplayerServerSummaries[i]->state ) { ss << "  multiplayerServerSummaries["<<i<<"]->state " << result->multiplayerServerSummaries[i]->state; Log(ss); } else { ss << "  multiplayerServerSummaries["<<i<<"]->state = nullptr"; Log(ss); } // Class: const char* 
        if( result->multiplayerServerSummaries[i]->vmId ) { ss << "  multiplayerServerSummaries["<<i<<"]->vmId " << result->multiplayerServerSummaries[i]->vmId; Log(ss); } else { ss << "  multiplayerServerSummaries["<<i<<"]->vmId = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListAssetSummariesRequest( PlayFab::MultiplayerModels::ListAssetSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListAssetSummariesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListAssetSummariesResponse( PlayFabMultiplayerListAssetSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListAssetSummariesResponse    
    ss << "  assetSummariesCount " << result->assetSummariesCount; Log(ss);

    // PlayFabMultiplayerAssetSummary
    for( uint32_t i=0; i<result->assetSummariesCount; i++ )
    {
        if( result->assetSummaries[i]->fileName ) { ss << "  assetSummaries["<<i<<"]->fileName " << result->assetSummaries[i]->fileName; Log(ss); } else { ss << "  assetSummaries["<<i<<"]->fileName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  assetSummaries["<<i<<"]->metadata " << result->assetSummaries[i]->metadata; Log(ss); // Class: PlayFabStringDictionaryEntry 
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListBuildAliasesRequest( PlayFab::MultiplayerModels::ListBuildAliasesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListBuildAliasesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListBuildAliasesResponse( PlayFabMultiplayerListBuildAliasesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListBuildAliasesResponse    
    ss << "  buildAliasesCount " << result->buildAliasesCount; Log(ss);

    // PlayFabMultiplayerBuildAliasDetailsResponse
    for( uint32_t i=0; i<result->buildAliasesCount; i++ )
    {
        if( result->buildAliases[i]->aliasId ) { ss << "  buildAliases["<<i<<"]->aliasId " << result->buildAliases[i]->aliasId; Log(ss); } else { ss << "  buildAliases["<<i<<"]->aliasId = nullptr"; Log(ss); } // Class: const char* 
        if( result->buildAliases[i]->aliasName ) { ss << "  buildAliases["<<i<<"]->aliasName " << result->buildAliases[i]->aliasName; Log(ss); } else { ss << "  buildAliases["<<i<<"]->aliasName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  buildAliases["<<i<<"]->buildSelectionCriteria " << result->buildAliases[i]->buildSelectionCriteria; Log(ss); // Class: PlayFabMultiplayerBuildSelectionCriterion 
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListBuildSummariesRequest( PlayFab::MultiplayerModels::ListBuildSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListBuildSummariesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListBuildSummariesResponse( PlayFabMultiplayerListBuildSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListBuildSummariesResponse    
    ss << "  buildSummariesCount " << result->buildSummariesCount; Log(ss);

    // PlayFabMultiplayerBuildSummary
    for( uint32_t i=0; i<result->buildSummariesCount; i++ )
    {
        if( result->buildSummaries[i]->buildId ) { ss << "  buildSummaries["<<i<<"]->buildId " << result->buildSummaries[i]->buildId; Log(ss); } else { ss << "  buildSummaries["<<i<<"]->buildId = nullptr"; Log(ss); } // Class: const char* 
        if( result->buildSummaries[i]->buildName ) { ss << "  buildSummaries["<<i<<"]->buildName " << result->buildSummaries[i]->buildName; Log(ss); } else { ss << "  buildSummaries["<<i<<"]->buildName = nullptr"; Log(ss); } // Class: const char* 
        ss << "  buildSummaries["<<i<<"]->creationTime " << result->buildSummaries[i]->creationTime; Log(ss); // Class: time_t 
        ss << "  buildSummaries["<<i<<"]->metadata " << result->buildSummaries[i]->metadata; Log(ss); // Class: PlayFabStringDictionaryEntry 
        ss << "  buildSummaries["<<i<<"]->regionConfigurations " << result->buildSummaries[i]->regionConfigurations; Log(ss); // Class: PlayFabMultiplayerBuildRegion 
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListCertificateSummariesRequest( PlayFab::MultiplayerModels::ListCertificateSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListCertificateSummariesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListCertificateSummariesResponse( PlayFabMultiplayerListCertificateSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListCertificateSummariesResponse    
    ss << "  certificateSummariesCount " << result->certificateSummariesCount; Log(ss);

    // PlayFabMultiplayerCertificateSummary
    for( uint32_t i=0; i<result->certificateSummariesCount; i++ )
    {
        if( result->certificateSummaries[i]->name ) { ss << "  certificateSummaries["<<i<<"]->name " << result->certificateSummaries[i]->name; Log(ss); } else { ss << "  certificateSummaries["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        if( result->certificateSummaries[i]->thumbprint ) { ss << "  certificateSummaries["<<i<<"]->thumbprint " << result->certificateSummaries[i]->thumbprint; Log(ss); } else { ss << "  certificateSummaries["<<i<<"]->thumbprint = nullptr"; Log(ss); } // Class: const char* 
    } 
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListContainerImagesRequest( PlayFab::MultiplayerModels::ListContainerImagesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListContainerImagesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListContainerImagesResponse( PlayFabMultiplayerListContainerImagesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListContainerImagesResponse    
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

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListContainerImageTagsRequest( PlayFab::MultiplayerModels::ListContainerImageTagsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListContainerImageTagsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->imageName ) { ss << "  imageName " << request->imageName; Log(ss); } else { ss << "  imageName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListContainerImageTagsResponse( PlayFabMultiplayerListContainerImageTagsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListContainerImageTagsResponse    
    ss << "  tagsCount " << result->tagsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->tagsCount; i++ )
    {
        ss << "  result->tags[" << i << "]:" << result->tags[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListMatchmakingTicketsForPlayerRequest( PlayFab::MultiplayerModels::ListMatchmakingTicketsForPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListMatchmakingTicketsForPlayerResult( PlayFabMultiplayerListMatchmakingTicketsForPlayerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListMatchmakingTicketsForPlayerResult    
    ss << "  ticketIdsCount " << result->ticketIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->ticketIdsCount; i++ )
    {
        ss << "  result->ticketIds[" << i << "]:" << result->ticketIds[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListPartyQosServersRequest( PlayFab::MultiplayerModels::ListPartyQosServersRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListPartyQosServersRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListPartyQosServersResponse( PlayFabMultiplayerListPartyQosServersResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListPartyQosServersResponse
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t     
    ss << "  qosServersCount " << result->qosServersCount; Log(ss);

    // PlayFabMultiplayerQosServer
    for( uint32_t i=0; i<result->qosServersCount; i++ )
    {
        if( result->qosServers[i]->region ) { ss << "  qosServers["<<i<<"]->region " << result->qosServers[i]->region; Log(ss); } else { ss << "  qosServers["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        if( result->qosServers[i]->serverUrl ) { ss << "  qosServers["<<i<<"]->serverUrl " << result->qosServers[i]->serverUrl; Log(ss); } else { ss << "  qosServers["<<i<<"]->serverUrl = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListQosServersForTitleRequest( PlayFab::MultiplayerModels::ListQosServersForTitleRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListQosServersForTitleRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  includeAllRegions " << request->includeAllRegions; Log(ss); // Class: bool 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListQosServersForTitleResponse( PlayFabMultiplayerListQosServersForTitleResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListQosServersForTitleResponse
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t     
    ss << "  qosServersCount " << result->qosServersCount; Log(ss);

    // PlayFabMultiplayerQosServer
    for( uint32_t i=0; i<result->qosServersCount; i++ )
    {
        if( result->qosServers[i]->region ) { ss << "  qosServers["<<i<<"]->region " << result->qosServers[i]->region; Log(ss); } else { ss << "  qosServers["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        if( result->qosServers[i]->serverUrl ) { ss << "  qosServers["<<i<<"]->serverUrl " << result->qosServers[i]->serverUrl; Log(ss); } else { ss << "  qosServers["<<i<<"]->serverUrl = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListServerBackfillTicketsForPlayerRequest( PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  entity " << request->entity; Log(ss); // Class: PlayFabEntityKey 
    if( request->queueName ) { ss << "  queueName " << request->queueName; Log(ss); } else { ss << "  queueName = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListServerBackfillTicketsForPlayerResult( PlayFabMultiplayerListServerBackfillTicketsForPlayerResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListServerBackfillTicketsForPlayerResult    
    ss << "  ticketIdsCount " << result->ticketIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<result->ticketIdsCount; i++ )
    {
        ss << "  result->ticketIds[" << i << "]:" << result->ticketIds[i]; Log(ss); // const char*
    } 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest( PlayFab::MultiplayerModels::ListTitleMultiplayerServersQuotaChangesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse( PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesResponse    
    ss << "  changesCount " << result->changesCount; Log(ss);

    // PlayFabMultiplayerQuotaChange
    for( uint32_t i=0; i<result->changesCount; i++ )
    {
        if( result->changes[i]->changeDescription ) { ss << "  changes["<<i<<"]->changeDescription " << result->changes[i]->changeDescription; Log(ss); } else { ss << "  changes["<<i<<"]->changeDescription = nullptr"; Log(ss); } // Class: const char* 
        ss << "  changes["<<i<<"]->changes " << result->changes[i]->changes; Log(ss); // Class: PlayFabMultiplayerCoreCapacityChange 
        ss << "  changes["<<i<<"]->isPendingReview " << result->changes[i]->isPendingReview; Log(ss); // Class: bool 
        if( result->changes[i]->notes ) { ss << "  changes["<<i<<"]->notes " << result->changes[i]->notes; Log(ss); } else { ss << "  changes["<<i<<"]->notes = nullptr"; Log(ss); } // Class: const char* 
        if( result->changes[i]->requestId ) { ss << "  changes["<<i<<"]->requestId " << result->changes[i]->requestId; Log(ss); } else { ss << "  changes["<<i<<"]->requestId = nullptr"; Log(ss); } // Class: const char* 
        if( result->changes[i]->reviewComments ) { ss << "  changes["<<i<<"]->reviewComments " << result->changes[i]->reviewComments; Log(ss); } else { ss << "  changes["<<i<<"]->reviewComments = nullptr"; Log(ss); } // Class: const char* 
        ss << "  changes["<<i<<"]->wasApproved " << result->changes[i]->wasApproved; Log(ss); // Class: bool 
    } 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerListVirtualMachineSummariesRequest( PlayFab::MultiplayerModels::ListVirtualMachineSummariesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerListVirtualMachineSummariesRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  pageSize " << request->pageSize; Log(ss); // Class: int32_t 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->skipToken ) { ss << "  skipToken " << request->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerListVirtualMachineSummariesResponse( PlayFabMultiplayerListVirtualMachineSummariesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerListVirtualMachineSummariesResponse
    ss << "  pageSize " << result->pageSize; Log(ss); // Class: int32_t 
    if( result->skipToken ) { ss << "  skipToken " << result->skipToken; Log(ss); } else { ss << "  skipToken = nullptr"; Log(ss); } // Class: const char*     
    ss << "  virtualMachinesCount " << result->virtualMachinesCount; Log(ss);

    // PlayFabMultiplayerVirtualMachineSummary
    for( uint32_t i=0; i<result->virtualMachinesCount; i++ )
    {
        if( result->virtualMachines[i]->healthStatus ) { ss << "  virtualMachines["<<i<<"]->healthStatus " << result->virtualMachines[i]->healthStatus; Log(ss); } else { ss << "  virtualMachines["<<i<<"]->healthStatus = nullptr"; Log(ss); } // Class: const char* 
        if( result->virtualMachines[i]->state ) { ss << "  virtualMachines["<<i<<"]->state " << result->virtualMachines[i]->state; Log(ss); } else { ss << "  virtualMachines["<<i<<"]->state = nullptr"; Log(ss); } // Class: const char* 
        if( result->virtualMachines[i]->vmId ) { ss << "  virtualMachines["<<i<<"]->vmId " << result->virtualMachines[i]->vmId; Log(ss); } else { ss << "  virtualMachines["<<i<<"]->vmId = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerRequestMultiplayerServerRequest( PlayFab::MultiplayerModels::RequestMultiplayerServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerRequestMultiplayerServerRequest struct:
    // request->buildAliasParams: PlayFabMultiplayerBuildAliasParams const*
    ss << "  buildAliasParams " << request->buildAliasParams; Log(ss); // Class: PlayFabMultiplayerBuildAliasParams 
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
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

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerRequestMultiplayerServerResponse( PlayFabMultiplayerRequestMultiplayerServerResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerRequestMultiplayerServerResponse
    if( result->buildId ) { ss << "  buildId " << result->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  connectedPlayersCount " << result->connectedPlayersCount; Log(ss);

    // PlayFabMultiplayerConnectedPlayer
    for( uint32_t i=0; i<result->connectedPlayersCount; i++ )
    {
        if( result->connectedPlayers[i]->playerId ) { ss << "  connectedPlayers["<<i<<"]->playerId " << result->connectedPlayers[i]->playerId; Log(ss); } else { ss << "  connectedPlayers["<<i<<"]->playerId = nullptr"; Log(ss); } // Class: const char* 
    } 
    if( result->fQDN ) { ss << "  fQDN " << result->fQDN; Log(ss); } else { ss << "  fQDN = nullptr"; Log(ss); } // Class: const char* 
    if( result->iPV4Address ) { ss << "  iPV4Address " << result->iPV4Address; Log(ss); } else { ss << "  iPV4Address = nullptr"; Log(ss); } // Class: const char* 
    ss << "  lastStateTransitionTime " << result->lastStateTransitionTime; Log(ss); // Class: time_t     
    ss << "  portsCount " << result->portsCount; Log(ss);

    // PlayFabMultiplayerPort
    for( uint32_t i=0; i<result->portsCount; i++ )
    {
        if( result->ports[i]->name ) { ss << "  ports["<<i<<"]->name " << result->ports[i]->name; Log(ss); } else { ss << "  ports["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        ss << "  ports["<<i<<"]->num " << result->ports[i]->num; Log(ss); // Class: int32_t 
        ss << "  ports["<<i<<"]->protocol " << result->ports[i]->protocol; Log(ss); // Class: PlayFabMultiplayerProtocolType 
    } 
    if( result->region ) { ss << "  region " << result->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( result->serverId ) { ss << "  serverId " << result->serverId; Log(ss); } else { ss << "  serverId = nullptr"; Log(ss); } // Class: const char* 
    if( result->sessionId ) { ss << "  sessionId " << result->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 
    if( result->state ) { ss << "  state " << result->state; Log(ss); } else { ss << "  state = nullptr"; Log(ss); } // Class: const char* 
    if( result->vmId ) { ss << "  vmId " << result->vmId; Log(ss); } else { ss << "  vmId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerRolloverContainerRegistryCredentialsRequest( PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenMultiplayerTests::LogPlayFabMultiplayerRolloverContainerRegistryCredentialsResponse( PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabMultiplayerRolloverContainerRegistryCredentialsResponse
    if( result->dnsName ) { ss << "  dnsName " << result->dnsName; Log(ss); } else { ss << "  dnsName = nullptr"; Log(ss); } // Class: const char* 
    if( result->password ) { ss << "  password " << result->password; Log(ss); } else { ss << "  password = nullptr"; Log(ss); } // Class: const char* 
    if( result->username ) { ss << "  username " << result->username; Log(ss); } else { ss << "  username = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerShutdownMultiplayerServerRequest( PlayFab::MultiplayerModels::ShutdownMultiplayerServerRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerShutdownMultiplayerServerRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->region ) { ss << "  region " << request->region; Log(ss); } else { ss << "  region = nullptr"; Log(ss); } // Class: const char* 
    if( request->sessionId ) { ss << "  sessionId " << request->sessionId; Log(ss); } else { ss << "  sessionId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerUntagContainerImageRequest( PlayFab::MultiplayerModels::UntagContainerImageRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerUntagContainerImageRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->imageName ) { ss << "  imageName " << request->imageName; Log(ss); } else { ss << "  imageName = nullptr"; Log(ss); } // Class: const char* 
    if( request->tag ) { ss << "  tag " << request->tag; Log(ss); } else { ss << "  tag = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerUpdateBuildAliasRequest( PlayFab::MultiplayerModels::UpdateBuildAliasRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerUpdateBuildAliasRequest struct:
    // request->aliasId: const char*
    if( request->aliasId ) { ss << "  aliasId " << request->aliasId; Log(ss); } else { ss << "  aliasId = nullptr"; Log(ss); } // Class: const char* 
    if( request->aliasName ) { ss << "  aliasName " << request->aliasName; Log(ss); } else { ss << "  aliasName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildSelectionCriteriaCount " << request->buildSelectionCriteriaCount; Log(ss);

    // PlayFabMultiplayerBuildSelectionCriterion
    for( uint32_t i=0; i<request->buildSelectionCriteriaCount; i++ )
    {
        ss << "  buildSelectionCriteria["<<i<<"]->buildWeightDistribution " << request->buildSelectionCriteria[i]->buildWeightDistribution; Log(ss); // Class: PlayFabUint32DictionaryEntry 
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerUpdateBuildNameRequest( PlayFab::MultiplayerModels::UpdateBuildNameRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerUpdateBuildNameRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    if( request->buildName ) { ss << "  buildName " << request->buildName; Log(ss); } else { ss << "  buildName = nullptr"; Log(ss); } // Class: const char*     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerUpdateBuildRegionRequest( PlayFab::MultiplayerModels::UpdateBuildRegionRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerUpdateBuildRegionRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  buildRegion " << request->buildRegion; Log(ss); // Class: PlayFabMultiplayerBuildRegionParams     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerUpdateBuildRegionsRequest( PlayFab::MultiplayerModels::UpdateBuildRegionsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerUpdateBuildRegionsRequest struct:
    // request->buildId: const char*
    if( request->buildId ) { ss << "  buildId " << request->buildId; Log(ss); } else { ss << "  buildId = nullptr"; Log(ss); } // Class: const char*     
    ss << "  buildRegionsCount " << request->buildRegionsCount; Log(ss);

    // PlayFabMultiplayerBuildRegionParams
    for( uint32_t i=0; i<request->buildRegionsCount; i++ )
    {
        ss << "  buildRegions["<<i<<"]->dynamicStandbySettings " << request->buildRegions[i]->dynamicStandbySettings; Log(ss); // Class: PlayFabMultiplayerDynamicStandbySettings 
        ss << "  buildRegions["<<i<<"]->maxServers " << request->buildRegions[i]->maxServers; Log(ss); // Class: int32_t 
        if( request->buildRegions[i]->region ) { ss << "  buildRegions["<<i<<"]->region " << request->buildRegions[i]->region; Log(ss); } else { ss << "  buildRegions["<<i<<"]->region = nullptr"; Log(ss); } // Class: const char* 
        ss << "  buildRegions["<<i<<"]->scheduledStandbySettings " << request->buildRegions[i]->scheduledStandbySettings; Log(ss); // Class: PlayFabMultiplayerScheduledStandbySettings 
        ss << "  buildRegions["<<i<<"]->standbyServers " << request->buildRegions[i]->standbyServers; Log(ss); // Class: int32_t 
    }     
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

void AutoGenMultiplayerTests::LogPlayFabMultiplayerUploadCertificateRequest( PlayFab::MultiplayerModels::UploadCertificateRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabMultiplayerUploadCertificateRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    ss << "  gameCertificate " << request->gameCertificate; Log(ss); // Class: PlayFabMultiplayerCertificate 

}

 

}
