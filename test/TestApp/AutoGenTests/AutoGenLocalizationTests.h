#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Localization/LocalizationDataModels.h"

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


    static void LogGetLanguageListRequest( PlayFab::LocalizationModels::GetLanguageListRequest* request, const char* testName );
    static void FillGetLanguageListRequest( PlayFab::LocalizationModels::GetLanguageListRequest* request );
    static HRESULT LogPFLocalizationGetLanguageListResponse( PFLocalizationGetLanguageListResponse* result );
    static HRESULT ValidatePFLocalizationGetLanguageListResponse( PFLocalizationGetLanguageListResponse* result );

public:
    PFStateHandle stateHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
