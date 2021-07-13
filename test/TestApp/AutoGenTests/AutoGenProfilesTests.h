#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/ProfilesDataModels.h"

namespace PlayFabUnit
{

class AutoGenProfilesTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestProfilesGetGlobalPolicy(TestContext& testContext); 
    void TestProfilesGetProfile(TestContext& testContext); 
    void TestProfilesGetProfiles(TestContext& testContext); 
    void TestProfilesGetTitlePlayersFromMasterPlayerAccountIds(TestContext& testContext); 
    void TestProfilesSetGlobalPolicy(TestContext& testContext); 
    void TestProfilesSetProfileLanguage(TestContext& testContext); 
    void TestProfilesSetProfilePolicy(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabProfilesGetGlobalPolicyRequest( PlayFab::ProfilesModels::GetGlobalPolicyRequest* request, const char* testName );
    static void FillPlayFabProfilesGetGlobalPolicyRequest( PlayFab::ProfilesModels::GetGlobalPolicyRequest* request );
    static HRESULT LogPlayFabProfilesGetGlobalPolicyResponse( PlayFabProfilesGetGlobalPolicyResponse* result );
    static HRESULT ValidatePlayFabProfilesGetGlobalPolicyResponse( PlayFabProfilesGetGlobalPolicyResponse* result );
    static void LogPlayFabProfilesGetEntityProfileRequest( PlayFab::ProfilesModels::GetEntityProfileRequest* request, const char* testName );
    static void FillPlayFabProfilesGetEntityProfileRequest( PlayFab::ProfilesModels::GetEntityProfileRequest* request );
    static HRESULT LogPlayFabProfilesGetEntityProfileResponse( PlayFabProfilesGetEntityProfileResponse* result );
    static HRESULT ValidatePlayFabProfilesGetEntityProfileResponse( PlayFabProfilesGetEntityProfileResponse* result );
    static void LogPlayFabProfilesGetEntityProfilesRequest( PlayFab::ProfilesModels::GetEntityProfilesRequest* request, const char* testName );
    static void FillPlayFabProfilesGetEntityProfilesRequest( PlayFab::ProfilesModels::GetEntityProfilesRequest* request );
    static HRESULT LogPlayFabProfilesGetEntityProfilesResponse( PlayFabProfilesGetEntityProfilesResponse* result );
    static HRESULT ValidatePlayFabProfilesGetEntityProfilesResponse( PlayFabProfilesGetEntityProfilesResponse* result );
    static void LogPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest( PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request, const char* testName );
    static void FillPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest( PlayFab::ProfilesModels::GetTitlePlayersFromMasterPlayerAccountIdsRequest* request );
    static HRESULT LogPlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse( PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse* result );
    static HRESULT ValidatePlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse( PlayFabProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse* result );
    static void LogPlayFabProfilesSetGlobalPolicyRequest( PlayFab::ProfilesModels::SetGlobalPolicyRequest* request, const char* testName );
    static void FillPlayFabProfilesSetGlobalPolicyRequest( PlayFab::ProfilesModels::SetGlobalPolicyRequest* request );
    static void LogPlayFabProfilesSetProfileLanguageRequest( PlayFab::ProfilesModels::SetProfileLanguageRequest* request, const char* testName );
    static void FillPlayFabProfilesSetProfileLanguageRequest( PlayFab::ProfilesModels::SetProfileLanguageRequest* request );
    static HRESULT LogPlayFabProfilesSetProfileLanguageResponse( PlayFabProfilesSetProfileLanguageResponse* result );
    static HRESULT ValidatePlayFabProfilesSetProfileLanguageResponse( PlayFabProfilesSetProfileLanguageResponse* result );
    static void LogPlayFabProfilesSetEntityProfilePolicyRequest( PlayFab::ProfilesModels::SetEntityProfilePolicyRequest* request, const char* testName );
    static void FillPlayFabProfilesSetEntityProfilePolicyRequest( PlayFab::ProfilesModels::SetEntityProfilePolicyRequest* request );
    static HRESULT LogPlayFabProfilesSetEntityProfilePolicyResponse( PlayFabProfilesSetEntityProfilePolicyResponse* result );
    static HRESULT ValidatePlayFabProfilesSetEntityProfilePolicyResponse( PlayFabProfilesSetEntityProfilePolicyResponse* result );


public:
    PlayFabStateHandle stateHandle{ nullptr };
    PlayFabEntityHandle entityHandle{ nullptr };
    PlayFabGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
