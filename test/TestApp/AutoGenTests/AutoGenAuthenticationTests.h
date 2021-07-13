#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/AuthenticationDataModels.h"

namespace PlayFabUnit
{

class AutoGenAuthenticationTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestAuthenticationValidateEntityToken(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabAuthenticationValidateEntityTokenRequest( PlayFab::AuthenticationModels::ValidateEntityTokenRequest* request, const char* testName );
    static void FillPlayFabAuthenticationValidateEntityTokenRequest( PlayFab::AuthenticationModels::ValidateEntityTokenRequest* request );
    static HRESULT LogPlayFabAuthenticationValidateEntityTokenResponse( PlayFabAuthenticationValidateEntityTokenResponse* result );
    static HRESULT ValidatePlayFabAuthenticationValidateEntityTokenResponse( PlayFabAuthenticationValidateEntityTokenResponse* result );


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
