#include "stdafx.h"
#include <playfab/PFTrading.h>
#include "Trading.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::TradingModels;

HRESULT PFTradingClientAcceptTradeAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTradingAcceptTradeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TradingAPI::ClientAcceptTrade, &contextHandle->entity->tradingAPI, AcceptTradeRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTradingClientAcceptTradeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingAcceptTradeResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTradingAcceptTradeResponse*)(std::dynamic_pointer_cast<AcceptTradeResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTradingClientCancelTradeAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTradingCancelTradeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TradingAPI::ClientCancelTrade, &contextHandle->entity->tradingAPI, CancelTradeRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTradingClientCancelTradeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingCancelTradeResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTradingCancelTradeResponse*)(std::dynamic_pointer_cast<CancelTradeResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTradingClientGetPlayerTradesAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTradingGetPlayerTradesRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TradingAPI::ClientGetPlayerTrades, &contextHandle->entity->tradingAPI, GetPlayerTradesRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTradingClientGetPlayerTradesGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingGetPlayerTradesResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTradingGetPlayerTradesResponse*)(std::dynamic_pointer_cast<GetPlayerTradesResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTradingClientGetTradeStatusAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTradingGetTradeStatusRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TradingAPI::ClientGetTradeStatus, &contextHandle->entity->tradingAPI, GetTradeStatusRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTradingClientGetTradeStatusGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingGetTradeStatusResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTradingGetTradeStatusResponse*)(std::dynamic_pointer_cast<GetTradeStatusResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFTradingClientOpenTradeAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFTradingOpenTradeRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&TradingAPI::ClientOpenTrade, &contextHandle->entity->tradingAPI, OpenTradeRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFTradingClientOpenTradeGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFTradingOpenTradeResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFTradingOpenTradeResponse*)(std::dynamic_pointer_cast<OpenTradeResponse>((*resultHandle)->result).get());

    return S_OK;
}

