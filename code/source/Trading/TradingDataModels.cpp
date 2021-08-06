#include "stdafx.h"
#include "TradingDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace TradingModels
{

AcceptTradeRequest::AcceptTradeRequest() :
    PFTradingAcceptTradeRequest{}
{
}

AcceptTradeRequest::AcceptTradeRequest(const AcceptTradeRequest& src) :
    PFTradingAcceptTradeRequest{ src },
    m_acceptedInventoryInstanceIds{ src.m_acceptedInventoryInstanceIds },
    m_offeringPlayerId{ src.m_offeringPlayerId },
    m_tradeId{ src.m_tradeId }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

AcceptTradeRequest::AcceptTradeRequest(AcceptTradeRequest&& src) :
    PFTradingAcceptTradeRequest{ src },
    m_acceptedInventoryInstanceIds{ std::move(src.m_acceptedInventoryInstanceIds) },
    m_offeringPlayerId{ std::move(src.m_offeringPlayerId) },
    m_tradeId{ std::move(src.m_tradeId) }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

AcceptTradeRequest::AcceptTradeRequest(const PFTradingAcceptTradeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AcceptTradeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AcceptedInventoryInstanceIds", m_acceptedInventoryInstanceIds, acceptedInventoryInstanceIds, acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue AcceptTradeRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTradingAcceptTradeRequest>(*this);
}

TradeInfo::TradeInfo() :
    PFTradingTradeInfo{}
{
}

TradeInfo::TradeInfo(const TradeInfo& src) :
    PFTradingTradeInfo{ src },
    m_acceptedInventoryInstanceIds{ src.m_acceptedInventoryInstanceIds },
    m_acceptedPlayerId{ src.m_acceptedPlayerId },
    m_allowedPlayerIds{ src.m_allowedPlayerIds },
    m_cancelledAt{ src.m_cancelledAt },
    m_filledAt{ src.m_filledAt },
    m_invalidatedAt{ src.m_invalidatedAt },
    m_offeredCatalogItemIds{ src.m_offeredCatalogItemIds },
    m_offeredInventoryInstanceIds{ src.m_offeredInventoryInstanceIds },
    m_offeringPlayerId{ src.m_offeringPlayerId },
    m_openedAt{ src.m_openedAt },
    m_requestedCatalogItemIds{ src.m_requestedCatalogItemIds },
    m_status{ src.m_status },
    m_tradeId{ src.m_tradeId }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    acceptedPlayerId = m_acceptedPlayerId.empty() ? nullptr : m_acceptedPlayerId.data();
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    cancelledAt = m_cancelledAt ? m_cancelledAt.operator->() : nullptr;
    filledAt = m_filledAt ? m_filledAt.operator->() : nullptr;
    invalidatedAt = m_invalidatedAt ? m_invalidatedAt.operator->() : nullptr;
    offeredCatalogItemIds = m_offeredCatalogItemIds.Empty() ? nullptr : m_offeredCatalogItemIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    openedAt = m_openedAt ? m_openedAt.operator->() : nullptr;
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
    status = m_status ? m_status.operator->() : nullptr;
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

TradeInfo::TradeInfo(TradeInfo&& src) :
    PFTradingTradeInfo{ src },
    m_acceptedInventoryInstanceIds{ std::move(src.m_acceptedInventoryInstanceIds) },
    m_acceptedPlayerId{ std::move(src.m_acceptedPlayerId) },
    m_allowedPlayerIds{ std::move(src.m_allowedPlayerIds) },
    m_cancelledAt{ std::move(src.m_cancelledAt) },
    m_filledAt{ std::move(src.m_filledAt) },
    m_invalidatedAt{ std::move(src.m_invalidatedAt) },
    m_offeredCatalogItemIds{ std::move(src.m_offeredCatalogItemIds) },
    m_offeredInventoryInstanceIds{ std::move(src.m_offeredInventoryInstanceIds) },
    m_offeringPlayerId{ std::move(src.m_offeringPlayerId) },
    m_openedAt{ std::move(src.m_openedAt) },
    m_requestedCatalogItemIds{ std::move(src.m_requestedCatalogItemIds) },
    m_status{ std::move(src.m_status) },
    m_tradeId{ std::move(src.m_tradeId) }
{
    acceptedInventoryInstanceIds = m_acceptedInventoryInstanceIds.Empty() ? nullptr : m_acceptedInventoryInstanceIds.Data();
    acceptedPlayerId = m_acceptedPlayerId.empty() ? nullptr : m_acceptedPlayerId.data();
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    cancelledAt = m_cancelledAt ? m_cancelledAt.operator->() : nullptr;
    filledAt = m_filledAt ? m_filledAt.operator->() : nullptr;
    invalidatedAt = m_invalidatedAt ? m_invalidatedAt.operator->() : nullptr;
    offeredCatalogItemIds = m_offeredCatalogItemIds.Empty() ? nullptr : m_offeredCatalogItemIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    openedAt = m_openedAt ? m_openedAt.operator->() : nullptr;
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
    status = m_status ? m_status.operator->() : nullptr;
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

TradeInfo::TradeInfo(const PFTradingTradeInfo& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void TradeInfo::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AcceptedInventoryInstanceIds", m_acceptedInventoryInstanceIds, acceptedInventoryInstanceIds, acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "AcceptedPlayerId", m_acceptedPlayerId, acceptedPlayerId);
    JsonUtils::ObjectGetMember(input, "AllowedPlayerIds", m_allowedPlayerIds, allowedPlayerIds, allowedPlayerIdsCount);
    JsonUtils::ObjectGetMember(input, "CancelledAt", m_cancelledAt, cancelledAt, true);
    JsonUtils::ObjectGetMember(input, "FilledAt", m_filledAt, filledAt, true);
    JsonUtils::ObjectGetMember(input, "InvalidatedAt", m_invalidatedAt, invalidatedAt, true);
    JsonUtils::ObjectGetMember(input, "OfferedCatalogItemIds", m_offeredCatalogItemIds, offeredCatalogItemIds, offeredCatalogItemIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferedInventoryInstanceIds", m_offeredInventoryInstanceIds, offeredInventoryInstanceIds, offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
    JsonUtils::ObjectGetMember(input, "OpenedAt", m_openedAt, openedAt, true);
    JsonUtils::ObjectGetMember(input, "RequestedCatalogItemIds", m_requestedCatalogItemIds, requestedCatalogItemIds, requestedCatalogItemIdsCount);
    JsonUtils::ObjectGetMember(input, "Status", m_status, status);
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue TradeInfo::ToJson() const
{
    return JsonUtils::ToJson<PFTradingTradeInfo>(*this);
}

AcceptTradeResponse::AcceptTradeResponse() :
    PFTradingAcceptTradeResponse{}
{
}

AcceptTradeResponse::AcceptTradeResponse(const AcceptTradeResponse& src) :
    PFTradingAcceptTradeResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

AcceptTradeResponse::AcceptTradeResponse(AcceptTradeResponse&& src) :
    PFTradingAcceptTradeResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

AcceptTradeResponse::AcceptTradeResponse(const PFTradingAcceptTradeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AcceptTradeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue AcceptTradeResponse::ToJson() const
{
    return JsonUtils::ToJson<PFTradingAcceptTradeResponse>(*this);
}

CancelTradeRequest::CancelTradeRequest() :
    PFTradingCancelTradeRequest{}
{
}

CancelTradeRequest::CancelTradeRequest(const CancelTradeRequest& src) :
    PFTradingCancelTradeRequest{ src },
    m_tradeId{ src.m_tradeId }
{
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

CancelTradeRequest::CancelTradeRequest(CancelTradeRequest&& src) :
    PFTradingCancelTradeRequest{ src },
    m_tradeId{ std::move(src.m_tradeId) }
{
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

CancelTradeRequest::CancelTradeRequest(const PFTradingCancelTradeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelTradeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue CancelTradeRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTradingCancelTradeRequest>(*this);
}

size_t CancelTradeRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTradingCancelTradeRequest) };
    serializedSize += (m_tradeId.size() + 1);
    return serializedSize;
}

void CancelTradeRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTradingCancelTradeRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTradingCancelTradeRequest);
    memcpy(stringBuffer, m_tradeId.data(), m_tradeId.size() + 1);
    serializedStruct->tradeId = stringBuffer;
    stringBuffer += m_tradeId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CancelTradeResponse::CancelTradeResponse() :
    PFTradingCancelTradeResponse{}
{
}

CancelTradeResponse::CancelTradeResponse(const CancelTradeResponse& src) :
    PFTradingCancelTradeResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

CancelTradeResponse::CancelTradeResponse(CancelTradeResponse&& src) :
    PFTradingCancelTradeResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

CancelTradeResponse::CancelTradeResponse(const PFTradingCancelTradeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CancelTradeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue CancelTradeResponse::ToJson() const
{
    return JsonUtils::ToJson<PFTradingCancelTradeResponse>(*this);
}

GetPlayerTradesRequest::GetPlayerTradesRequest() :
    PFTradingGetPlayerTradesRequest{}
{
}

GetPlayerTradesRequest::GetPlayerTradesRequest(const GetPlayerTradesRequest& src) :
    PFTradingGetPlayerTradesRequest{ src },
    m_statusFilter{ src.m_statusFilter }
{
    statusFilter = m_statusFilter ? m_statusFilter.operator->() : nullptr;
}

GetPlayerTradesRequest::GetPlayerTradesRequest(GetPlayerTradesRequest&& src) :
    PFTradingGetPlayerTradesRequest{ src },
    m_statusFilter{ std::move(src.m_statusFilter) }
{
    statusFilter = m_statusFilter ? m_statusFilter.operator->() : nullptr;
}

GetPlayerTradesRequest::GetPlayerTradesRequest(const PFTradingGetPlayerTradesRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTradesRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "StatusFilter", m_statusFilter, statusFilter);
}

JsonValue GetPlayerTradesRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTradingGetPlayerTradesRequest>(*this);
}

GetPlayerTradesResponse::GetPlayerTradesResponse() :
    PFTradingGetPlayerTradesResponse{}
{
}

GetPlayerTradesResponse::GetPlayerTradesResponse(const GetPlayerTradesResponse& src) :
    PFTradingGetPlayerTradesResponse{ src },
    m_acceptedTrades{ src.m_acceptedTrades },
    m_openedTrades{ src.m_openedTrades }
{
    acceptedTrades = m_acceptedTrades.Empty() ? nullptr : m_acceptedTrades.Data();
    openedTrades = m_openedTrades.Empty() ? nullptr : m_openedTrades.Data();
}

GetPlayerTradesResponse::GetPlayerTradesResponse(GetPlayerTradesResponse&& src) :
    PFTradingGetPlayerTradesResponse{ src },
    m_acceptedTrades{ std::move(src.m_acceptedTrades) },
    m_openedTrades{ std::move(src.m_openedTrades) }
{
    acceptedTrades = m_acceptedTrades.Empty() ? nullptr : m_acceptedTrades.Data();
    openedTrades = m_openedTrades.Empty() ? nullptr : m_openedTrades.Data();
}

GetPlayerTradesResponse::GetPlayerTradesResponse(const PFTradingGetPlayerTradesResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerTradesResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AcceptedTrades", m_acceptedTrades, acceptedTrades, acceptedTradesCount);
    JsonUtils::ObjectGetMember(input, "OpenedTrades", m_openedTrades, openedTrades, openedTradesCount);
}

JsonValue GetPlayerTradesResponse::ToJson() const
{
    return JsonUtils::ToJson<PFTradingGetPlayerTradesResponse>(*this);
}

GetTradeStatusRequest::GetTradeStatusRequest() :
    PFTradingGetTradeStatusRequest{}
{
}

GetTradeStatusRequest::GetTradeStatusRequest(const GetTradeStatusRequest& src) :
    PFTradingGetTradeStatusRequest{ src },
    m_offeringPlayerId{ src.m_offeringPlayerId },
    m_tradeId{ src.m_tradeId }
{
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

GetTradeStatusRequest::GetTradeStatusRequest(GetTradeStatusRequest&& src) :
    PFTradingGetTradeStatusRequest{ src },
    m_offeringPlayerId{ std::move(src.m_offeringPlayerId) },
    m_tradeId{ std::move(src.m_tradeId) }
{
    offeringPlayerId = m_offeringPlayerId.empty() ? nullptr : m_offeringPlayerId.data();
    tradeId = m_tradeId.empty() ? nullptr : m_tradeId.data();
}

GetTradeStatusRequest::GetTradeStatusRequest(const PFTradingGetTradeStatusRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTradeStatusRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OfferingPlayerId", m_offeringPlayerId, offeringPlayerId);
    JsonUtils::ObjectGetMember(input, "TradeId", m_tradeId, tradeId);
}

JsonValue GetTradeStatusRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTradingGetTradeStatusRequest>(*this);
}

size_t GetTradeStatusRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFTradingGetTradeStatusRequest) };
    serializedSize += (m_offeringPlayerId.size() + 1);
    serializedSize += (m_tradeId.size() + 1);
    return serializedSize;
}

void GetTradeStatusRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFTradingGetTradeStatusRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFTradingGetTradeStatusRequest);
    memcpy(stringBuffer, m_offeringPlayerId.data(), m_offeringPlayerId.size() + 1);
    serializedStruct->offeringPlayerId = stringBuffer;
    stringBuffer += m_offeringPlayerId.size() + 1;
    memcpy(stringBuffer, m_tradeId.data(), m_tradeId.size() + 1);
    serializedStruct->tradeId = stringBuffer;
    stringBuffer += m_tradeId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTradeStatusResponse::GetTradeStatusResponse() :
    PFTradingGetTradeStatusResponse{}
{
}

GetTradeStatusResponse::GetTradeStatusResponse(const GetTradeStatusResponse& src) :
    PFTradingGetTradeStatusResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

GetTradeStatusResponse::GetTradeStatusResponse(GetTradeStatusResponse&& src) :
    PFTradingGetTradeStatusResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

GetTradeStatusResponse::GetTradeStatusResponse(const PFTradingGetTradeStatusResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTradeStatusResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue GetTradeStatusResponse::ToJson() const
{
    return JsonUtils::ToJson<PFTradingGetTradeStatusResponse>(*this);
}

OpenTradeRequest::OpenTradeRequest() :
    PFTradingOpenTradeRequest{}
{
}

OpenTradeRequest::OpenTradeRequest(const OpenTradeRequest& src) :
    PFTradingOpenTradeRequest{ src },
    m_allowedPlayerIds{ src.m_allowedPlayerIds },
    m_offeredInventoryInstanceIds{ src.m_offeredInventoryInstanceIds },
    m_requestedCatalogItemIds{ src.m_requestedCatalogItemIds }
{
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
}

OpenTradeRequest::OpenTradeRequest(OpenTradeRequest&& src) :
    PFTradingOpenTradeRequest{ src },
    m_allowedPlayerIds{ std::move(src.m_allowedPlayerIds) },
    m_offeredInventoryInstanceIds{ std::move(src.m_offeredInventoryInstanceIds) },
    m_requestedCatalogItemIds{ std::move(src.m_requestedCatalogItemIds) }
{
    allowedPlayerIds = m_allowedPlayerIds.Empty() ? nullptr : m_allowedPlayerIds.Data();
    offeredInventoryInstanceIds = m_offeredInventoryInstanceIds.Empty() ? nullptr : m_offeredInventoryInstanceIds.Data();
    requestedCatalogItemIds = m_requestedCatalogItemIds.Empty() ? nullptr : m_requestedCatalogItemIds.Data();
}

OpenTradeRequest::OpenTradeRequest(const PFTradingOpenTradeRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenTradeRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AllowedPlayerIds", m_allowedPlayerIds, allowedPlayerIds, allowedPlayerIdsCount);
    JsonUtils::ObjectGetMember(input, "OfferedInventoryInstanceIds", m_offeredInventoryInstanceIds, offeredInventoryInstanceIds, offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectGetMember(input, "RequestedCatalogItemIds", m_requestedCatalogItemIds, requestedCatalogItemIds, requestedCatalogItemIdsCount);
}

JsonValue OpenTradeRequest::ToJson() const
{
    return JsonUtils::ToJson<PFTradingOpenTradeRequest>(*this);
}

OpenTradeResponse::OpenTradeResponse() :
    PFTradingOpenTradeResponse{}
{
}

OpenTradeResponse::OpenTradeResponse(const OpenTradeResponse& src) :
    PFTradingOpenTradeResponse{ src },
    m_trade{ src.m_trade }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

OpenTradeResponse::OpenTradeResponse(OpenTradeResponse&& src) :
    PFTradingOpenTradeResponse{ src },
    m_trade{ std::move(src.m_trade) }
{
    trade = m_trade ? m_trade.operator->() : nullptr;
}

OpenTradeResponse::OpenTradeResponse(const PFTradingOpenTradeResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenTradeResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Trade", m_trade, trade);
}

JsonValue OpenTradeResponse::ToJson() const
{
    return JsonUtils::ToJson<PFTradingOpenTradeResponse>(*this);
}

} // namespace TradingModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFTradingAcceptTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AcceptedInventoryInstanceIds", input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingTradeInfo& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AcceptedInventoryInstanceIds", input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "AcceptedPlayerId", input.acceptedPlayerId);
    JsonUtils::ObjectAddMember(output, "AllowedPlayerIds", input.allowedPlayerIds, input.allowedPlayerIdsCount);
    JsonUtils::ObjectAddMember(output, "CancelledAt", input.cancelledAt, true);
    JsonUtils::ObjectAddMember(output, "FilledAt", input.filledAt, true);
    JsonUtils::ObjectAddMember(output, "InvalidatedAt", input.invalidatedAt, true);
    JsonUtils::ObjectAddMember(output, "OfferedCatalogItemIds", input.offeredCatalogItemIds, input.offeredCatalogItemIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferedInventoryInstanceIds", input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "OpenedAt", input.openedAt, true);
    JsonUtils::ObjectAddMember(output, "RequestedCatalogItemIds", input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
    JsonUtils::ObjectAddMember(output, "Status", input.status);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingAcceptTradeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingCancelTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingCancelTradeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingGetPlayerTradesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatusFilter", input.statusFilter);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingGetPlayerTradesResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AcceptedTrades", input.acceptedTrades, input.acceptedTradesCount);
    JsonUtils::ObjectAddMember(output, "OpenedTrades", input.openedTrades, input.openedTradesCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingGetTradeStatusRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingGetTradeStatusResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingOpenTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AllowedPlayerIds", input.allowedPlayerIds, input.allowedPlayerIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferedInventoryInstanceIds", input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "RequestedCatalogItemIds", input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFTradingOpenTradeResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Trade", input.trade);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
