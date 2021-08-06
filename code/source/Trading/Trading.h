#pragma once

#include "TradingDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class TradingAPI
{
public:
    TradingAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    TradingAPI(const TradingAPI& source) = delete;
    TradingAPI& operator=(const TradingAPI& source) = delete;
    ~TradingAPI() = default;

    // ------------ Generated API calls
    AsyncOp<TradingModels::AcceptTradeResponse> ClientAcceptTrade(const PFTradingAcceptTradeRequest& request, const TaskQueue& queue) const;
    AsyncOp<TradingModels::CancelTradeResponse> ClientCancelTrade(const PFTradingCancelTradeRequest& request, const TaskQueue& queue) const;
    AsyncOp<TradingModels::GetPlayerTradesResponse> ClientGetPlayerTrades(const PFTradingGetPlayerTradesRequest& request, const TaskQueue& queue) const;
    AsyncOp<TradingModels::GetTradeStatusResponse> ClientGetTradeStatus(const PFTradingGetTradeStatusRequest& request, const TaskQueue& queue) const;
    AsyncOp<TradingModels::OpenTradeResponse> ClientOpenTrade(const PFTradingOpenTradeRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
