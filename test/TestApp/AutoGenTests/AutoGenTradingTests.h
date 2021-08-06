#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Trading/TradingDataModels.h"

namespace PlayFabUnit
{

class AutoGenTradingTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestTradingClientAcceptTrade(TestContext& testContext); 
    void TestTradingClientCancelTrade(TestContext& testContext); 
    void TestTradingClientGetPlayerTrades(TestContext& testContext); 
    void TestTradingClientGetTradeStatus(TestContext& testContext); 
    void TestTradingClientOpenTrade(TestContext& testContext); 


protected:
    void AddTests();


    static void LogAcceptTradeRequest( PlayFab::TradingModels::AcceptTradeRequest* request, const char* testName );
    static void FillAcceptTradeRequest( PlayFab::TradingModels::AcceptTradeRequest* request );
    static HRESULT LogPFTradingAcceptTradeResponse( PFTradingAcceptTradeResponse* result );
    static HRESULT ValidatePFTradingAcceptTradeResponse( PFTradingAcceptTradeResponse* result );
    static void LogCancelTradeRequest( PlayFab::TradingModels::CancelTradeRequest* request, const char* testName );
    static void FillCancelTradeRequest( PlayFab::TradingModels::CancelTradeRequest* request );
    static HRESULT LogPFTradingCancelTradeResponse( PFTradingCancelTradeResponse* result );
    static HRESULT ValidatePFTradingCancelTradeResponse( PFTradingCancelTradeResponse* result );
    static void LogGetPlayerTradesRequest( PlayFab::TradingModels::GetPlayerTradesRequest* request, const char* testName );
    static void FillGetPlayerTradesRequest( PlayFab::TradingModels::GetPlayerTradesRequest* request );
    static HRESULT LogPFTradingGetPlayerTradesResponse( PFTradingGetPlayerTradesResponse* result );
    static HRESULT ValidatePFTradingGetPlayerTradesResponse( PFTradingGetPlayerTradesResponse* result );
    static void LogGetTradeStatusRequest( PlayFab::TradingModels::GetTradeStatusRequest* request, const char* testName );
    static void FillGetTradeStatusRequest( PlayFab::TradingModels::GetTradeStatusRequest* request );
    static HRESULT LogPFTradingGetTradeStatusResponse( PFTradingGetTradeStatusResponse* result );
    static HRESULT ValidatePFTradingGetTradeStatusResponse( PFTradingGetTradeStatusResponse* result );
    static void LogOpenTradeRequest( PlayFab::TradingModels::OpenTradeRequest* request, const char* testName );
    static void FillOpenTradeRequest( PlayFab::TradingModels::OpenTradeRequest* request );
    static HRESULT LogPFTradingOpenTradeResponse( PFTradingOpenTradeResponse* result );
    static HRESULT ValidatePFTradingOpenTradeResponse( PFTradingOpenTradeResponse* result );

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
