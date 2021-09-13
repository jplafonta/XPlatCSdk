#include "stdafx.h"
#include "TradingDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace Trading
{

JsonValue AcceptTradeRequest::ToJson() const
{
    return AcceptTradeRequest::ToJson(this->Model());
}

JsonValue AcceptTradeRequest::ToJson(const PFTradingAcceptTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "AcceptedInventoryInstanceIds", input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

void TradeInfo::FromJson(const JsonValue& input)
{
    CStringVector acceptedInventoryInstanceIds{};
    JsonUtils::ObjectGetMember(input, "AcceptedInventoryInstanceIds", acceptedInventoryInstanceIds);
    this->SetAcceptedInventoryInstanceIds(std::move(acceptedInventoryInstanceIds));

    String acceptedPlayerId{};
    JsonUtils::ObjectGetMember(input, "AcceptedPlayerId", acceptedPlayerId);
    this->SetAcceptedPlayerId(std::move(acceptedPlayerId));

    CStringVector allowedPlayerIds{};
    JsonUtils::ObjectGetMember(input, "AllowedPlayerIds", allowedPlayerIds);
    this->SetAllowedPlayerIds(std::move(allowedPlayerIds));

    StdExtra::optional<time_t> cancelledAt{};
    JsonUtils::ObjectGetMemberTime(input, "CancelledAt", cancelledAt);
    this->SetCancelledAt(std::move(cancelledAt));

    StdExtra::optional<time_t> filledAt{};
    JsonUtils::ObjectGetMemberTime(input, "FilledAt", filledAt);
    this->SetFilledAt(std::move(filledAt));

    StdExtra::optional<time_t> invalidatedAt{};
    JsonUtils::ObjectGetMemberTime(input, "InvalidatedAt", invalidatedAt);
    this->SetInvalidatedAt(std::move(invalidatedAt));

    CStringVector offeredCatalogItemIds{};
    JsonUtils::ObjectGetMember(input, "OfferedCatalogItemIds", offeredCatalogItemIds);
    this->SetOfferedCatalogItemIds(std::move(offeredCatalogItemIds));

    CStringVector offeredInventoryInstanceIds{};
    JsonUtils::ObjectGetMember(input, "OfferedInventoryInstanceIds", offeredInventoryInstanceIds);
    this->SetOfferedInventoryInstanceIds(std::move(offeredInventoryInstanceIds));

    String offeringPlayerId{};
    JsonUtils::ObjectGetMember(input, "OfferingPlayerId", offeringPlayerId);
    this->SetOfferingPlayerId(std::move(offeringPlayerId));

    StdExtra::optional<time_t> openedAt{};
    JsonUtils::ObjectGetMemberTime(input, "OpenedAt", openedAt);
    this->SetOpenedAt(std::move(openedAt));

    CStringVector requestedCatalogItemIds{};
    JsonUtils::ObjectGetMember(input, "RequestedCatalogItemIds", requestedCatalogItemIds);
    this->SetRequestedCatalogItemIds(std::move(requestedCatalogItemIds));

    StdExtra::optional<PFTradingTradeStatus> status{};
    JsonUtils::ObjectGetMember(input, "Status", status);
    this->SetStatus(std::move(status));

    String tradeId{};
    JsonUtils::ObjectGetMember(input, "TradeId", tradeId);
    this->SetTradeId(std::move(tradeId));
}

size_t TradeInfo::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTradingTradeInfo const*> TradeInfo::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<TradeInfo>(&this->Model());
}

size_t TradeInfo::RequiredBufferSize(const PFTradingTradeInfo& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(char*) + sizeof(char*) * model.acceptedInventoryInstanceIdsCount);
    for (size_t i = 0; i < model.acceptedInventoryInstanceIdsCount; ++i)
    {
        requiredSize += (std::strlen(model.acceptedInventoryInstanceIds[i]) + 1);
    }
    if (model.acceptedPlayerId)
    {
        requiredSize += (std::strlen(model.acceptedPlayerId) + 1);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.allowedPlayerIdsCount);
    for (size_t i = 0; i < model.allowedPlayerIdsCount; ++i)
    {
        requiredSize += (std::strlen(model.allowedPlayerIds[i]) + 1);
    }
    if (model.cancelledAt)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.filledAt)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    if (model.invalidatedAt)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.offeredCatalogItemIdsCount);
    for (size_t i = 0; i < model.offeredCatalogItemIdsCount; ++i)
    {
        requiredSize += (std::strlen(model.offeredCatalogItemIds[i]) + 1);
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.offeredInventoryInstanceIdsCount);
    for (size_t i = 0; i < model.offeredInventoryInstanceIdsCount; ++i)
    {
        requiredSize += (std::strlen(model.offeredInventoryInstanceIds[i]) + 1);
    }
    if (model.offeringPlayerId)
    {
        requiredSize += (std::strlen(model.offeringPlayerId) + 1);
    }
    if (model.openedAt)
    {
        requiredSize += (alignof(time_t) + sizeof(time_t));
    }
    requiredSize += (alignof(char*) + sizeof(char*) * model.requestedCatalogItemIdsCount);
    for (size_t i = 0; i < model.requestedCatalogItemIdsCount; ++i)
    {
        requiredSize += (std::strlen(model.requestedCatalogItemIds[i]) + 1);
    }
    if (model.status)
    {
        requiredSize += (alignof(PFTradingTradeStatus) + sizeof(PFTradingTradeStatus));
    }
    if (model.tradeId)
    {
        requiredSize += (std::strlen(model.tradeId) + 1);
    }
    return requiredSize;
}

HRESULT TradeInfo::Copy(const PFTradingTradeInfo& input, PFTradingTradeInfo& output, ModelBuffer& buffer)
{
    output = input;
    output.acceptedInventoryInstanceIds = buffer.CopyToArray(input.acceptedInventoryInstanceIds, input.acceptedInventoryInstanceIdsCount);
    output.acceptedPlayerId = buffer.CopyTo(input.acceptedPlayerId);
    output.allowedPlayerIds = buffer.CopyToArray(input.allowedPlayerIds, input.allowedPlayerIdsCount);
    output.cancelledAt = buffer.CopyTo(input.cancelledAt);
    output.filledAt = buffer.CopyTo(input.filledAt);
    output.invalidatedAt = buffer.CopyTo(input.invalidatedAt);
    output.offeredCatalogItemIds = buffer.CopyToArray(input.offeredCatalogItemIds, input.offeredCatalogItemIdsCount);
    output.offeredInventoryInstanceIds = buffer.CopyToArray(input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
    output.offeringPlayerId = buffer.CopyTo(input.offeringPlayerId);
    output.openedAt = buffer.CopyTo(input.openedAt);
    output.requestedCatalogItemIds = buffer.CopyToArray(input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
    output.status = buffer.CopyTo(input.status);
    output.tradeId = buffer.CopyTo(input.tradeId);
    return S_OK;
}

void AcceptTradeResponse::FromJson(const JsonValue& input)
{
    StdExtra::optional<TradeInfo> trade{};
    JsonUtils::ObjectGetMember(input, "Trade", trade);
    if (trade)
    {
        this->SetTrade(std::move(*trade));
    }
}

size_t AcceptTradeResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTradingAcceptTradeResponse const*> AcceptTradeResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<AcceptTradeResponse>(&this->Model());
}

size_t AcceptTradeResponse::RequiredBufferSize(const PFTradingAcceptTradeResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.trade)
    {
        requiredSize += TradeInfo::RequiredBufferSize(*model.trade);
    }
    return requiredSize;
}

HRESULT AcceptTradeResponse::Copy(const PFTradingAcceptTradeResponse& input, PFTradingAcceptTradeResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.trade = buffer.CopyTo<TradeInfo>(input.trade);
    return S_OK;
}

JsonValue CancelTradeRequest::ToJson() const
{
    return CancelTradeRequest::ToJson(this->Model());
}

JsonValue CancelTradeRequest::ToJson(const PFTradingCancelTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

void CancelTradeResponse::FromJson(const JsonValue& input)
{
    StdExtra::optional<TradeInfo> trade{};
    JsonUtils::ObjectGetMember(input, "Trade", trade);
    if (trade)
    {
        this->SetTrade(std::move(*trade));
    }
}

size_t CancelTradeResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTradingCancelTradeResponse const*> CancelTradeResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<CancelTradeResponse>(&this->Model());
}

size_t CancelTradeResponse::RequiredBufferSize(const PFTradingCancelTradeResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.trade)
    {
        requiredSize += TradeInfo::RequiredBufferSize(*model.trade);
    }
    return requiredSize;
}

HRESULT CancelTradeResponse::Copy(const PFTradingCancelTradeResponse& input, PFTradingCancelTradeResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.trade = buffer.CopyTo<TradeInfo>(input.trade);
    return S_OK;
}

JsonValue GetPlayerTradesRequest::ToJson() const
{
    return GetPlayerTradesRequest::ToJson(this->Model());
}

JsonValue GetPlayerTradesRequest::ToJson(const PFTradingGetPlayerTradesRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "StatusFilter", input.statusFilter);
    return output;
}

void GetPlayerTradesResponse::FromJson(const JsonValue& input)
{
    ModelVector<TradeInfo> acceptedTrades{};
    JsonUtils::ObjectGetMember<TradeInfo>(input, "AcceptedTrades", acceptedTrades);
    this->SetAcceptedTrades(std::move(acceptedTrades));

    ModelVector<TradeInfo> openedTrades{};
    JsonUtils::ObjectGetMember<TradeInfo>(input, "OpenedTrades", openedTrades);
    this->SetOpenedTrades(std::move(openedTrades));
}

size_t GetPlayerTradesResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTradingGetPlayerTradesResponse const*> GetPlayerTradesResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetPlayerTradesResponse>(&this->Model());
}

size_t GetPlayerTradesResponse::RequiredBufferSize(const PFTradingGetPlayerTradesResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    requiredSize += (alignof(PFTradingTradeInfo*) + sizeof(PFTradingTradeInfo*) * model.acceptedTradesCount);
    for (size_t i = 0; i < model.acceptedTradesCount; ++i)
    {
        requiredSize += TradeInfo::RequiredBufferSize(*model.acceptedTrades[i]);
    }
    requiredSize += (alignof(PFTradingTradeInfo*) + sizeof(PFTradingTradeInfo*) * model.openedTradesCount);
    for (size_t i = 0; i < model.openedTradesCount; ++i)
    {
        requiredSize += TradeInfo::RequiredBufferSize(*model.openedTrades[i]);
    }
    return requiredSize;
}

HRESULT GetPlayerTradesResponse::Copy(const PFTradingGetPlayerTradesResponse& input, PFTradingGetPlayerTradesResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.acceptedTrades = buffer.CopyToArray<TradeInfo>(input.acceptedTrades, input.acceptedTradesCount);
    output.openedTrades = buffer.CopyToArray<TradeInfo>(input.openedTrades, input.openedTradesCount);
    return S_OK;
}

JsonValue GetTradeStatusRequest::ToJson() const
{
    return GetTradeStatusRequest::ToJson(this->Model());
}

JsonValue GetTradeStatusRequest::ToJson(const PFTradingGetTradeStatusRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OfferingPlayerId", input.offeringPlayerId);
    JsonUtils::ObjectAddMember(output, "TradeId", input.tradeId);
    return output;
}

void GetTradeStatusResponse::FromJson(const JsonValue& input)
{
    StdExtra::optional<TradeInfo> trade{};
    JsonUtils::ObjectGetMember(input, "Trade", trade);
    if (trade)
    {
        this->SetTrade(std::move(*trade));
    }
}

size_t GetTradeStatusResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTradingGetTradeStatusResponse const*> GetTradeStatusResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<GetTradeStatusResponse>(&this->Model());
}

size_t GetTradeStatusResponse::RequiredBufferSize(const PFTradingGetTradeStatusResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.trade)
    {
        requiredSize += TradeInfo::RequiredBufferSize(*model.trade);
    }
    return requiredSize;
}

HRESULT GetTradeStatusResponse::Copy(const PFTradingGetTradeStatusResponse& input, PFTradingGetTradeStatusResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.trade = buffer.CopyTo<TradeInfo>(input.trade);
    return S_OK;
}

JsonValue OpenTradeRequest::ToJson() const
{
    return OpenTradeRequest::ToJson(this->Model());
}

JsonValue OpenTradeRequest::ToJson(const PFTradingOpenTradeRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMemberArray(output, "AllowedPlayerIds", input.allowedPlayerIds, input.allowedPlayerIdsCount);
    JsonUtils::ObjectAddMemberArray(output, "OfferedInventoryInstanceIds", input.offeredInventoryInstanceIds, input.offeredInventoryInstanceIdsCount);
    JsonUtils::ObjectAddMemberArray(output, "RequestedCatalogItemIds", input.requestedCatalogItemIds, input.requestedCatalogItemIdsCount);
    return output;
}

void OpenTradeResponse::FromJson(const JsonValue& input)
{
    StdExtra::optional<TradeInfo> trade{};
    JsonUtils::ObjectGetMember(input, "Trade", trade);
    if (trade)
    {
        this->SetTrade(std::move(*trade));
    }
}

size_t OpenTradeResponse::RequiredBufferSize() const
{
    return RequiredBufferSize(this->Model());
}

Result<PFTradingOpenTradeResponse const*> OpenTradeResponse::Copy(ModelBuffer& buffer) const
{
    return buffer.CopyTo<OpenTradeResponse>(&this->Model());
}

size_t OpenTradeResponse::RequiredBufferSize(const PFTradingOpenTradeResponse& model)
{
    size_t requiredSize{ alignof(ModelType) + sizeof(ModelType) };
    if (model.trade)
    {
        requiredSize += TradeInfo::RequiredBufferSize(*model.trade);
    }
    return requiredSize;
}

HRESULT OpenTradeResponse::Copy(const PFTradingOpenTradeResponse& input, PFTradingOpenTradeResponse& output, ModelBuffer& buffer)
{
    output = input;
    output.trade = buffer.CopyTo<TradeInfo>(input.trade);
    return S_OK;
}

} // namespace Trading
} // namespace PlayFab
