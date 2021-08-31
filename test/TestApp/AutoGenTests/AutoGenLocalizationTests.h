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

    struct LocalizationTestData
    {
        ~LocalizationTestData()
        {

        }

    };

    static LocalizationTestData testData;

public:
    PFStateHandle stateHandle{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };
    PFTitlePlayerHandle titlePlayerHandle2{ nullptr };
    PFEntityHandle entityHandle2{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo2{ nullptr };
    PFEntityHandle titleEntityHandle{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
