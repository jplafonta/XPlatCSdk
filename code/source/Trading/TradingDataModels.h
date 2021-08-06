#pragma once

#include <playfab/PFTradingDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace TradingModels
{

// Trading Classes
struct AcceptTradeRequest : public PFTradingAcceptTradeRequest, public BaseModel
{
    AcceptTradeRequest();
    AcceptTradeRequest(const AcceptTradeRequest& src);
    AcceptTradeRequest(AcceptTradeRequest&& src);
    AcceptTradeRequest(const PFTradingAcceptTradeRequest& src);
    AcceptTradeRequest& operator=(const AcceptTradeRequest&) = delete;
    ~AcceptTradeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_acceptedInventoryInstanceIds;
    String m_offeringPlayerId;
    String m_tradeId;
};

struct TradeInfo : public PFTradingTradeInfo, public BaseModel
{
    TradeInfo();
    TradeInfo(const TradeInfo& src);
    TradeInfo(TradeInfo&& src);
    TradeInfo(const PFTradingTradeInfo& src);
    TradeInfo& operator=(const TradeInfo&) = delete;
    ~TradeInfo() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_acceptedInventoryInstanceIds;
    String m_acceptedPlayerId;
    PointerArrayModel<char, String> m_allowedPlayerIds;
    StdExtra::optional<time_t> m_cancelledAt;
    StdExtra::optional<time_t> m_filledAt;
    StdExtra::optional<time_t> m_invalidatedAt;
    PointerArrayModel<char, String> m_offeredCatalogItemIds;
    PointerArrayModel<char, String> m_offeredInventoryInstanceIds;
    String m_offeringPlayerId;
    StdExtra::optional<time_t> m_openedAt;
    PointerArrayModel<char, String> m_requestedCatalogItemIds;
    StdExtra::optional<PFTradingTradeStatus> m_status;
    String m_tradeId;
};

struct AcceptTradeResponse : public PFTradingAcceptTradeResponse, public BaseModel, public ApiResult
{
    AcceptTradeResponse();
    AcceptTradeResponse(const AcceptTradeResponse& src);
    AcceptTradeResponse(AcceptTradeResponse&& src);
    AcceptTradeResponse(const PFTradingAcceptTradeResponse& src);
    AcceptTradeResponse& operator=(const AcceptTradeResponse&) = delete;
    ~AcceptTradeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

struct CancelTradeRequest : public PFTradingCancelTradeRequest, public SerializableModel
{
    CancelTradeRequest();
    CancelTradeRequest(const CancelTradeRequest& src);
    CancelTradeRequest(CancelTradeRequest&& src);
    CancelTradeRequest(const PFTradingCancelTradeRequest& src);
    CancelTradeRequest& operator=(const CancelTradeRequest&) = delete;
    ~CancelTradeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_tradeId;
};

struct CancelTradeResponse : public PFTradingCancelTradeResponse, public BaseModel, public ApiResult
{
    CancelTradeResponse();
    CancelTradeResponse(const CancelTradeResponse& src);
    CancelTradeResponse(CancelTradeResponse&& src);
    CancelTradeResponse(const PFTradingCancelTradeResponse& src);
    CancelTradeResponse& operator=(const CancelTradeResponse&) = delete;
    ~CancelTradeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

struct GetPlayerTradesRequest : public PFTradingGetPlayerTradesRequest, public BaseModel
{
    GetPlayerTradesRequest();
    GetPlayerTradesRequest(const GetPlayerTradesRequest& src);
    GetPlayerTradesRequest(GetPlayerTradesRequest&& src);
    GetPlayerTradesRequest(const PFTradingGetPlayerTradesRequest& src);
    GetPlayerTradesRequest& operator=(const GetPlayerTradesRequest&) = delete;
    ~GetPlayerTradesRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFTradingTradeStatus> m_statusFilter;
};

struct GetPlayerTradesResponse : public PFTradingGetPlayerTradesResponse, public BaseModel, public ApiResult
{
    GetPlayerTradesResponse();
    GetPlayerTradesResponse(const GetPlayerTradesResponse& src);
    GetPlayerTradesResponse(GetPlayerTradesResponse&& src);
    GetPlayerTradesResponse(const PFTradingGetPlayerTradesResponse& src);
    GetPlayerTradesResponse& operator=(const GetPlayerTradesResponse&) = delete;
    ~GetPlayerTradesResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFTradingTradeInfo, TradeInfo> m_acceptedTrades;
    PointerArrayModel<PFTradingTradeInfo, TradeInfo> m_openedTrades;
};

struct GetTradeStatusRequest : public PFTradingGetTradeStatusRequest, public SerializableModel
{
    GetTradeStatusRequest();
    GetTradeStatusRequest(const GetTradeStatusRequest& src);
    GetTradeStatusRequest(GetTradeStatusRequest&& src);
    GetTradeStatusRequest(const PFTradingGetTradeStatusRequest& src);
    GetTradeStatusRequest& operator=(const GetTradeStatusRequest&) = delete;
    ~GetTradeStatusRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_offeringPlayerId;
    String m_tradeId;
};

struct GetTradeStatusResponse : public PFTradingGetTradeStatusResponse, public BaseModel, public ApiResult
{
    GetTradeStatusResponse();
    GetTradeStatusResponse(const GetTradeStatusResponse& src);
    GetTradeStatusResponse(GetTradeStatusResponse&& src);
    GetTradeStatusResponse(const PFTradingGetTradeStatusResponse& src);
    GetTradeStatusResponse& operator=(const GetTradeStatusResponse&) = delete;
    ~GetTradeStatusResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

struct OpenTradeRequest : public PFTradingOpenTradeRequest, public BaseModel
{
    OpenTradeRequest();
    OpenTradeRequest(const OpenTradeRequest& src);
    OpenTradeRequest(OpenTradeRequest&& src);
    OpenTradeRequest(const PFTradingOpenTradeRequest& src);
    OpenTradeRequest& operator=(const OpenTradeRequest&) = delete;
    ~OpenTradeRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<char, String> m_allowedPlayerIds;
    PointerArrayModel<char, String> m_offeredInventoryInstanceIds;
    PointerArrayModel<char, String> m_requestedCatalogItemIds;
};

struct OpenTradeResponse : public PFTradingOpenTradeResponse, public BaseModel, public ApiResult
{
    OpenTradeResponse();
    OpenTradeResponse(const OpenTradeResponse& src);
    OpenTradeResponse(OpenTradeResponse&& src);
    OpenTradeResponse(const PFTradingOpenTradeResponse& src);
    OpenTradeResponse& operator=(const OpenTradeResponse&) = delete;
    ~OpenTradeResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<TradeInfo> m_trade;
};

} // namespace TradingModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFTradingAcceptTradeRequest& input);
template<> inline JsonValue ToJson<>(const PFTradingTradeInfo& input);
template<> inline JsonValue ToJson<>(const PFTradingAcceptTradeResponse& input);
template<> inline JsonValue ToJson<>(const PFTradingCancelTradeRequest& input);
template<> inline JsonValue ToJson<>(const PFTradingCancelTradeResponse& input);
template<> inline JsonValue ToJson<>(const PFTradingGetPlayerTradesRequest& input);
template<> inline JsonValue ToJson<>(const PFTradingGetPlayerTradesResponse& input);
template<> inline JsonValue ToJson<>(const PFTradingGetTradeStatusRequest& input);
template<> inline JsonValue ToJson<>(const PFTradingGetTradeStatusResponse& input);
template<> inline JsonValue ToJson<>(const PFTradingOpenTradeRequest& input);
template<> inline JsonValue ToJson<>(const PFTradingOpenTradeResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
