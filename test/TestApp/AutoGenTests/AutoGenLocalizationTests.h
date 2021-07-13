#pragma once

#include "TestCase.h"
#include <playfab/PlayFabGlobal.h>
#include <playfab/PlayFabEntity.h>
#include <playfab/PlayFabClientDataModels.h>
#include "../../../code/source/Client/LocalizationDataModels.h"

namespace PlayFabUnit
{

class AutoGenLocalizationTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);
    void TestLocalizationGetLanguageList(TestContext& testContext); 


protected:
    void AddTests();

    static void LogPlayFabLocalizationGetLanguageListRequest( PlayFab::LocalizationModels::GetLanguageListRequest* request, const char* testName );
    static void FillPlayFabLocalizationGetLanguageListRequest( PlayFab::LocalizationModels::GetLanguageListRequest* request );
    static HRESULT LogPlayFabLocalizationGetLanguageListResponse( PlayFabLocalizationGetLanguageListResponse* result );
    static HRESULT ValidatePlayFabLocalizationGetLanguageListResponse( PlayFabLocalizationGetLanguageListResponse* result );


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
