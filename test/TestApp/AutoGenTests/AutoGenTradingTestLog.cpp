#include "TestAppPch.h"
#include "TestContext.h"
#include "TestApp.h"
#include "AutoGenTradingTests.h"
#include "XAsyncHelper.h"

uint32_t g_TradingTestIndex = 1;

namespace PlayFabUnit
{

 

void AutoGenTradingTests::LogAcceptTradeRequest( PlayFab::TradingModels::AcceptTradeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_TradingTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabTradingAcceptTradeRequest struct:
    // request->acceptedInventoryInstanceIds: const char* const*
    // request->acceptedInventoryInstanceIdsCount: uint32_t    
    ss << "  acceptedInventoryInstanceIdsCount " << request->acceptedInventoryInstanceIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->acceptedInventoryInstanceIdsCount; i++ )
    {
            ss << "  request->acceptedInventoryInstanceIds[" << i << "]:" << request->acceptedInventoryInstanceIds[i]; Log(ss); // const char*
    } 
    if( request->offeringPlayerId ) { ss << "  offeringPlayerId " << request->offeringPlayerId; Log(ss); } else { ss << "  offeringPlayerId = nullptr"; Log(ss); } // Class: const char* 
    if( request->tradeId ) { ss << "  tradeId " << request->tradeId; Log(ss); } else { ss << "  tradeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenTradingTests::LogPFTradingAcceptTradeResponse(PFTradingAcceptTradeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabTradingAcceptTradeResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PFTradingTradeInfo 
    return S_OK;
}

void AutoGenTradingTests::LogCancelTradeRequest( PlayFab::TradingModels::CancelTradeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_TradingTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabTradingCancelTradeRequest struct:
    // request->tradeId: const char*
    if( request->tradeId ) { ss << "  tradeId " << request->tradeId; Log(ss); } else { ss << "  tradeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenTradingTests::LogPFTradingCancelTradeResponse(PFTradingCancelTradeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabTradingCancelTradeResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PFTradingTradeInfo 
    return S_OK;
}

void AutoGenTradingTests::LogGetPlayerTradesRequest( PlayFab::TradingModels::GetPlayerTradesRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_TradingTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabTradingGetPlayerTradesRequest struct:
    // request->statusFilter: PFTradingTradeStatus const*
    ss << "  statusFilter " << request->statusFilter; Log(ss); // Class: PFTradingTradeStatus 

}

HRESULT AutoGenTradingTests::LogPFTradingGetPlayerTradesResponse(PFTradingGetPlayerTradesResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabTradingGetPlayerTradesResponse    
    ss << "  acceptedTradesCount " << result->acceptedTradesCount; Log(ss);

    // PFTradingTradeInfo
    for( uint32_t i=0; i<result->acceptedTradesCount; i++ )
    {
            ss << "  result->acceptedTrades[" << i << "]:" << result->acceptedTrades[i]; Log(ss); // PFTradingTradeInfo
    }     
    ss << "  openedTradesCount " << result->openedTradesCount; Log(ss);

    // PFTradingTradeInfo
    for( uint32_t i=0; i<result->openedTradesCount; i++ )
    {
            ss << "  result->openedTrades[" << i << "]:" << result->openedTrades[i]; Log(ss); // PFTradingTradeInfo
    } 
    return S_OK;
}

void AutoGenTradingTests::LogGetTradeStatusRequest( PlayFab::TradingModels::GetTradeStatusRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_TradingTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabTradingGetTradeStatusRequest struct:
    // request->offeringPlayerId: const char*
    if( request->offeringPlayerId ) { ss << "  offeringPlayerId " << request->offeringPlayerId; Log(ss); } else { ss << "  offeringPlayerId = nullptr"; Log(ss); } // Class: const char* 
    if( request->tradeId ) { ss << "  tradeId " << request->tradeId; Log(ss); } else { ss << "  tradeId = nullptr"; Log(ss); } // Class: const char* 

}

HRESULT AutoGenTradingTests::LogPFTradingGetTradeStatusResponse(PFTradingGetTradeStatusResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabTradingGetTradeStatusResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PFTradingTradeInfo 
    return S_OK;
}

void AutoGenTradingTests::LogOpenTradeRequest( PlayFab::TradingModels::OpenTradeRequest* request, const char* testName )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return;
    }

    std::stringstream ss;
    ss << "----------"; Log(ss);
    ss << "Test #" << g_TradingTestIndex++ << ": " << testName << ".  Last Known Status: "; Log(ss);
    ss << "Request:"; Log(ss);


    // PlayFabTradingOpenTradeRequest struct:
    // request->allowedPlayerIds: const char* const*
    // request->allowedPlayerIdsCount: uint32_t    
    ss << "  allowedPlayerIdsCount " << request->allowedPlayerIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->allowedPlayerIdsCount; i++ )
    {
            ss << "  request->allowedPlayerIds[" << i << "]:" << request->allowedPlayerIds[i]; Log(ss); // const char*
    }     
    ss << "  offeredInventoryInstanceIdsCount " << request->offeredInventoryInstanceIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->offeredInventoryInstanceIdsCount; i++ )
    {
            ss << "  request->offeredInventoryInstanceIds[" << i << "]:" << request->offeredInventoryInstanceIds[i]; Log(ss); // const char*
    }     
    ss << "  requestedCatalogItemIdsCount " << request->requestedCatalogItemIdsCount; Log(ss);

    // const char*
    for( uint32_t i=0; i<request->requestedCatalogItemIdsCount; i++ )
    {
            ss << "  request->requestedCatalogItemIds[" << i << "]:" << request->requestedCatalogItemIds[i]; Log(ss); // const char*
    } 

}

HRESULT AutoGenTradingTests::LogPFTradingOpenTradeResponse(PFTradingOpenTradeResponse* result )
{
    if( !TestApp::ShouldTrace(PFTestTraceLevel::Information) )
    {
        return S_OK;
    }

    std::stringstream ss;
    ss << "Response:"; Log(ss);

    // Found PlayFabTradingOpenTradeResponse
    ss << "  trade " << result->trade; Log(ss); // Class: PFTradingTradeInfo 
    return S_OK;
}

 

}
