#pragma once

#include "TradingDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class TradingAPI
{
public:
    TradingAPI() = delete;
    TradingAPI(const TradingAPI& source) = delete;
    TradingAPI& operator=(const TradingAPI& source) = delete;
    ~TradingAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<TradingModels::AcceptTradeResponse> ClientAcceptTrade(SharedPtr<TitlePlayer> entity, const PFTradingAcceptTradeRequest& request, const TaskQueue& queue);
    static AsyncOp<TradingModels::CancelTradeResponse> ClientCancelTrade(SharedPtr<TitlePlayer> entity, const PFTradingCancelTradeRequest& request, const TaskQueue& queue);
    static AsyncOp<TradingModels::GetPlayerTradesResponse> ClientGetPlayerTrades(SharedPtr<TitlePlayer> entity, const PFTradingGetPlayerTradesRequest& request, const TaskQueue& queue);
    static AsyncOp<TradingModels::GetTradeStatusResponse> ClientGetTradeStatus(SharedPtr<TitlePlayer> entity, const PFTradingGetTradeStatusRequest& request, const TaskQueue& queue);
    static AsyncOp<TradingModels::OpenTradeResponse> ClientOpenTrade(SharedPtr<TitlePlayer> entity, const PFTradingOpenTradeRequest& request, const TaskQueue& queue);
};

}
