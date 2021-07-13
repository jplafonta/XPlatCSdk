#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenExperimentationTests.h"
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

void AutoGenExperimentationTests::LogPlayFabExperimentationCreateExclusionGroupRequest( PlayFab::ExperimentationModels::CreateExclusionGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationCreateExclusionGroupRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenExperimentationTests::LogPlayFabExperimentationCreateExclusionGroupResult( PlayFabExperimentationCreateExclusionGroupResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabExperimentationCreateExclusionGroupResult
    if( result->exclusionGroupId ) { ss << "  exclusionGroupId " << result->exclusionGroupId; Log(ss); } else { ss << "  exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenExperimentationTests::LogPlayFabExperimentationCreateExperimentRequest( PlayFab::ExperimentationModels::CreateExperimentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationCreateExperimentRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    ss << "  endDate " << request->endDate; Log(ss); // Class: time_t 
    if( request->exclusionGroupId ) { ss << "  exclusionGroupId " << request->exclusionGroupId; Log(ss); } else { ss << "  exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  exclusionGroupTrafficAllocation " << request->exclusionGroupTrafficAllocation; Log(ss); // Class: uint32_t 
    ss << "  experimentType " << request->experimentType; Log(ss); // Class: PlayFabExperimentationExperimentType 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 
    if( request->segmentId ) { ss << "  segmentId " << request->segmentId; Log(ss); } else { ss << "  segmentId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  startDate " << request->startDate; Log(ss); // Class: time_t     
    ss << "  titlePlayerAccountTestIdsCount " << request->titlePlayerAccountTestIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->titlePlayerAccountTestIdsCount; i++ )
    {
        ss << "  request->titlePlayerAccountTestIds[" << i << "]:" << request->titlePlayerAccountTestIds[i]; Log(ss); // const char*
    }     
    ss << "  variantsCount " << request->variantsCount; Log(ss);

    // PlayFabExperimentationVariant
    for( uint32_t i=0; i<request->variantsCount; i++ )
    {
        if( request->variants[i]->description ) { ss << "  variants["<<i<<"]->description " << request->variants[i]->description; Log(ss); } else { ss << "  variants["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        if( request->variants[i]->id ) { ss << "  variants["<<i<<"]->id " << request->variants[i]->id; Log(ss); } else { ss << "  variants["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        ss << "  variants["<<i<<"]->isControl " << request->variants[i]->isControl; Log(ss); // Class: bool 
        if( request->variants[i]->name ) { ss << "  variants["<<i<<"]->name " << request->variants[i]->name; Log(ss); } else { ss << "  variants["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        if( request->variants[i]->titleDataOverrideLabel ) { ss << "  variants["<<i<<"]->titleDataOverrideLabel " << request->variants[i]->titleDataOverrideLabel; Log(ss); } else { ss << "  variants["<<i<<"]->titleDataOverrideLabel = nullptr"; Log(ss); } // Class: const char* 
        ss << "  variants["<<i<<"]->trafficPercentage " << request->variants[i]->trafficPercentage; Log(ss); // Class: uint32_t 
        ss << "  variants["<<i<<"]->variables " << request->variants[i]->variables; Log(ss); // Class: PlayFabVariable 
    } 

}

HRESULT AutoGenExperimentationTests::LogPlayFabExperimentationCreateExperimentResult( PlayFabExperimentationCreateExperimentResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabExperimentationCreateExperimentResult
    if( result->experimentId ) { ss << "  experimentId " << result->experimentId; Log(ss); } else { ss << "  experimentId = nullptr"; Log(ss); } // Class: const char* 
    return S_OK;
}

void AutoGenExperimentationTests::LogPlayFabExperimentationDeleteExclusionGroupRequest( PlayFab::ExperimentationModels::DeleteExclusionGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationDeleteExclusionGroupRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->exclusionGroupId ) { ss << "  exclusionGroupId " << request->exclusionGroupId; Log(ss); } else { ss << "  exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenExperimentationTests::LogPlayFabExperimentationDeleteExperimentRequest( PlayFab::ExperimentationModels::DeleteExperimentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationDeleteExperimentRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->experimentId ) { ss << "  experimentId " << request->experimentId; Log(ss); } else { ss << "  experimentId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenExperimentationTests::LogPlayFabExperimentationGetExclusionGroupsRequest( PlayFab::ExperimentationModels::GetExclusionGroupsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationGetExclusionGroupsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenExperimentationTests::LogPlayFabExperimentationGetExclusionGroupsResult( PlayFabExperimentationGetExclusionGroupsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabExperimentationGetExclusionGroupsResult    
    ss << "  exclusionGroupsCount " << result->exclusionGroupsCount; Log(ss);

    // PlayFabExperimentationExperimentExclusionGroup
    for( uint32_t i=0; i<result->exclusionGroupsCount; i++ )
    {
        if( result->exclusionGroups[i]->description ) { ss << "  exclusionGroups["<<i<<"]->description " << result->exclusionGroups[i]->description; Log(ss); } else { ss << "  exclusionGroups["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        if( result->exclusionGroups[i]->exclusionGroupId ) { ss << "  exclusionGroups["<<i<<"]->exclusionGroupId " << result->exclusionGroups[i]->exclusionGroupId; Log(ss); } else { ss << "  exclusionGroups["<<i<<"]->exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 
        if( result->exclusionGroups[i]->name ) { ss << "  exclusionGroups["<<i<<"]->name " << result->exclusionGroups[i]->name; Log(ss); } else { ss << "  exclusionGroups["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
    } 
    return S_OK;
}

void AutoGenExperimentationTests::LogPlayFabExperimentationGetExclusionGroupTrafficRequest( PlayFab::ExperimentationModels::GetExclusionGroupTrafficRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationGetExclusionGroupTrafficRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->exclusionGroupId ) { ss << "  exclusionGroupId " << request->exclusionGroupId; Log(ss); } else { ss << "  exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenExperimentationTests::LogPlayFabExperimentationGetExclusionGroupTrafficResult( PlayFabExperimentationGetExclusionGroupTrafficResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabExperimentationGetExclusionGroupTrafficResult    
    ss << "  trafficAllocationsCount " << result->trafficAllocationsCount; Log(ss);

    // PlayFabExperimentationExclusionGroupTrafficAllocation
    for( uint32_t i=0; i<result->trafficAllocationsCount; i++ )
    {
        if( result->trafficAllocations[i]->experimentId ) { ss << "  trafficAllocations["<<i<<"]->experimentId " << result->trafficAllocations[i]->experimentId; Log(ss); } else { ss << "  trafficAllocations["<<i<<"]->experimentId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  trafficAllocations["<<i<<"]->trafficAllocation " << result->trafficAllocations[i]->trafficAllocation; Log(ss); // Class: uint32_t 
    } 
    return S_OK;
}

void AutoGenExperimentationTests::LogPlayFabExperimentationGetExperimentsRequest( PlayFab::ExperimentationModels::GetExperimentsRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationGetExperimentsRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 

}

HRESULT AutoGenExperimentationTests::LogPlayFabExperimentationGetExperimentsResult( PlayFabExperimentationGetExperimentsResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabExperimentationGetExperimentsResult    
    ss << "  experimentsCount " << result->experimentsCount; Log(ss);

    // PlayFabExperimentationExperiment
    for( uint32_t i=0; i<result->experimentsCount; i++ )
    {
        if( result->experiments[i]->description ) { ss << "  experiments["<<i<<"]->description " << result->experiments[i]->description; Log(ss); } else { ss << "  experiments["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        ss << "  experiments["<<i<<"]->endDate " << result->experiments[i]->endDate; Log(ss); // Class: time_t 
        if( result->experiments[i]->exclusionGroupId ) { ss << "  experiments["<<i<<"]->exclusionGroupId " << result->experiments[i]->exclusionGroupId; Log(ss); } else { ss << "  experiments["<<i<<"]->exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  experiments["<<i<<"]->exclusionGroupTrafficAllocation " << result->experiments[i]->exclusionGroupTrafficAllocation; Log(ss); // Class: uint32_t 
        ss << "  experiments["<<i<<"]->experimentType " << result->experiments[i]->experimentType; Log(ss); // Class: PlayFabExperimentationExperimentType 
        if( result->experiments[i]->id ) { ss << "  experiments["<<i<<"]->id " << result->experiments[i]->id; Log(ss); } else { ss << "  experiments["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        if( result->experiments[i]->name ) { ss << "  experiments["<<i<<"]->name " << result->experiments[i]->name; Log(ss); } else { ss << "  experiments["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        if( result->experiments[i]->segmentId ) { ss << "  experiments["<<i<<"]->segmentId " << result->experiments[i]->segmentId; Log(ss); } else { ss << "  experiments["<<i<<"]->segmentId = nullptr"; Log(ss); } // Class: const char* 
        ss << "  experiments["<<i<<"]->startDate " << result->experiments[i]->startDate; Log(ss); // Class: time_t 
        ss << "  experiments["<<i<<"]->state " << result->experiments[i]->state; Log(ss); // Class: PlayFabExperimentationExperimentState 
        if( result->experiments[i]->titlePlayerAccountTestIds ) { ss << "  experiments["<<i<<"]->titlePlayerAccountTestIds " << result->experiments[i]->titlePlayerAccountTestIds; Log(ss); } else { ss << "  experiments["<<i<<"]->titlePlayerAccountTestIds = nullptr"; Log(ss); } // Class: const char* 
        ss << "  experiments["<<i<<"]->variants " << result->experiments[i]->variants; Log(ss); // Class: PlayFabExperimentationVariant 
    } 
    return S_OK;
}

void AutoGenExperimentationTests::LogPlayFabExperimentationGetLatestScorecardRequest( PlayFab::ExperimentationModels::GetLatestScorecardRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationGetLatestScorecardRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->experimentId ) { ss << "  experimentId " << request->experimentId; Log(ss); } else { ss << "  experimentId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenExperimentationTests::LogPlayFabExperimentationGetLatestScorecardResult( PlayFabExperimentationGetLatestScorecardResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabExperimentationGetLatestScorecardResult
    ss << "  scorecard " << result->scorecard; Log(ss); // Class: PlayFabExperimentationScorecard 
    return S_OK;
}

void AutoGenExperimentationTests::LogPlayFabExperimentationGetTreatmentAssignmentRequest( PlayFab::ExperimentationModels::GetTreatmentAssignmentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationGetTreatmentAssignmentRequest struct:
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

HRESULT AutoGenExperimentationTests::LogPlayFabExperimentationGetTreatmentAssignmentResult( PlayFabExperimentationGetTreatmentAssignmentResult* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabExperimentationGetTreatmentAssignmentResult
    ss << "  treatmentAssignment " << result->treatmentAssignment; Log(ss); // Class: PlayFabTreatmentAssignment 
    return S_OK;
}

void AutoGenExperimentationTests::LogPlayFabExperimentationStartExperimentRequest( PlayFab::ExperimentationModels::StartExperimentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationStartExperimentRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->experimentId ) { ss << "  experimentId " << request->experimentId; Log(ss); } else { ss << "  experimentId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenExperimentationTests::LogPlayFabExperimentationStopExperimentRequest( PlayFab::ExperimentationModels::StopExperimentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationStopExperimentRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->experimentId ) { ss << "  experimentId " << request->experimentId; Log(ss); } else { ss << "  experimentId = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenExperimentationTests::LogPlayFabExperimentationUpdateExclusionGroupRequest( PlayFab::ExperimentationModels::UpdateExclusionGroupRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationUpdateExclusionGroupRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    if( request->exclusionGroupId ) { ss << "  exclusionGroupId " << request->exclusionGroupId; Log(ss); } else { ss << "  exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 

}

void AutoGenExperimentationTests::LogPlayFabExperimentationUpdateExperimentRequest( PlayFab::ExperimentationModels::UpdateExperimentRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_testIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabExperimentationUpdateExperimentRequest struct:
    // request->customTags: struct PlayFabStringDictionaryEntry const*
    // request->customTagsCount: uint32_t    
    ss << "  customTagsCount " << request->customTagsCount; Log(ss);

    // PlayFabStringDictionaryEntry
    for( uint32_t i=0; i<request->customTagsCount; i++ )
    {
        ss << "  request->customTags[" << i << "]:" << request->customTags[i].key << "=" << request->customTags[i].value; Log(ss);
        
    } 
    if( request->description ) { ss << "  description " << request->description; Log(ss); } else { ss << "  description = nullptr"; Log(ss); } // Class: const char* 
    ss << "  endDate " << request->endDate; Log(ss); // Class: time_t 
    if( request->exclusionGroupId ) { ss << "  exclusionGroupId " << request->exclusionGroupId; Log(ss); } else { ss << "  exclusionGroupId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  exclusionGroupTrafficAllocation " << request->exclusionGroupTrafficAllocation; Log(ss); // Class: uint32_t 
    ss << "  experimentType " << request->experimentType; Log(ss); // Class: PlayFabExperimentationExperimentType 
    if( request->id ) { ss << "  id " << request->id; Log(ss); } else { ss << "  id = nullptr"; Log(ss); } // Class: const char* 
    if( request->name ) { ss << "  name " << request->name; Log(ss); } else { ss << "  name = nullptr"; Log(ss); } // Class: const char* 
    if( request->segmentId ) { ss << "  segmentId " << request->segmentId; Log(ss); } else { ss << "  segmentId = nullptr"; Log(ss); } // Class: const char* 
    ss << "  startDate " << request->startDate; Log(ss); // Class: time_t     
    ss << "  titlePlayerAccountTestIdsCount " << request->titlePlayerAccountTestIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->titlePlayerAccountTestIdsCount; i++ )
    {
        ss << "  request->titlePlayerAccountTestIds[" << i << "]:" << request->titlePlayerAccountTestIds[i]; Log(ss); // const char*
    }     
    ss << "  variantsCount " << request->variantsCount; Log(ss);

    // PlayFabExperimentationVariant
    for( uint32_t i=0; i<request->variantsCount; i++ )
    {
        if( request->variants[i]->description ) { ss << "  variants["<<i<<"]->description " << request->variants[i]->description; Log(ss); } else { ss << "  variants["<<i<<"]->description = nullptr"; Log(ss); } // Class: const char* 
        if( request->variants[i]->id ) { ss << "  variants["<<i<<"]->id " << request->variants[i]->id; Log(ss); } else { ss << "  variants["<<i<<"]->id = nullptr"; Log(ss); } // Class: const char* 
        ss << "  variants["<<i<<"]->isControl " << request->variants[i]->isControl; Log(ss); // Class: bool 
        if( request->variants[i]->name ) { ss << "  variants["<<i<<"]->name " << request->variants[i]->name; Log(ss); } else { ss << "  variants["<<i<<"]->name = nullptr"; Log(ss); } // Class: const char* 
        if( request->variants[i]->titleDataOverrideLabel ) { ss << "  variants["<<i<<"]->titleDataOverrideLabel " << request->variants[i]->titleDataOverrideLabel; Log(ss); } else { ss << "  variants["<<i<<"]->titleDataOverrideLabel = nullptr"; Log(ss); } // Class: const char* 
        ss << "  variants["<<i<<"]->trafficPercentage " << request->variants[i]->trafficPercentage; Log(ss); // Class: uint32_t 
        ss << "  variants["<<i<<"]->variables " << request->variants[i]->variables; Log(ss); // Class: PlayFabVariable 
    } 

}

 

}
