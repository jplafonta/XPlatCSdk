#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Advertising/AdvertisingDataModels.h"

namespace PlayFabUnit
{

class AutoGenAdvertisingTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);

    void TestAdvertisingClientAttributeInstall(TestContext& testContext);

    void TestAdvertisingClientGetAdPlacements(TestContext& testContext);

    void TestAdvertisingClientReportAdActivity(TestContext& testContext);

    void TestAdvertisingClientRewardAdActivity(TestContext& testContext);


protected:
    void AddTests();

    static void LogAttributeInstallRequest( PlayFab::AdvertisingModels::AttributeInstallRequest* request, const char* testName );
    static void FillAttributeInstallRequest( PlayFab::AdvertisingModels::AttributeInstallRequest* request );

    static void LogGetAdPlacementsRequest( PlayFab::AdvertisingModels::GetAdPlacementsRequest* request, const char* testName );
    static void FillGetAdPlacementsRequest( PlayFab::AdvertisingModels::GetAdPlacementsRequest* request );
    static HRESULT LogPFAdvertisingGetAdPlacementsResult( PFAdvertisingGetAdPlacementsResult* result );
    static HRESULT ValidatePFAdvertisingGetAdPlacementsResult( PFAdvertisingGetAdPlacementsResult* result );

    static void LogReportAdActivityRequest( PlayFab::AdvertisingModels::ReportAdActivityRequest* request, const char* testName );
    static void FillReportAdActivityRequest( PlayFab::AdvertisingModels::ReportAdActivityRequest* request );

    static void LogRewardAdActivityRequest( PlayFab::AdvertisingModels::RewardAdActivityRequest* request, const char* testName );
    static void FillRewardAdActivityRequest( PlayFab::AdvertisingModels::RewardAdActivityRequest* request );
    static HRESULT LogPFAdvertisingRewardAdActivityResult( PFAdvertisingRewardAdActivityResult* result );
    static HRESULT ValidatePFAdvertisingRewardAdActivityResult( PFAdvertisingRewardAdActivityResult* result );

    struct AdvertisingTestData
    {
        ~AdvertisingTestData()
        {

        }

    };

    static AdvertisingTestData testData;

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
