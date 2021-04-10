#include "stdafx.h"
#include <playfab/PlayFabEventsApi.h>
#include "EventsApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::EventsModels;

HRESULT PlayFabEventsWriteEventsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabEventsWriteEventsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&EventsAPI::WriteEvents, &contextHandle->entity->eventsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabEventsWriteEventsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabEventsWriteEventsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabEventsWriteEventsResponse*)(std::dynamic_pointer_cast<WriteEventsResponse>((*resultHandle)->model).get());

    return S_OK;
}

HRESULT PlayFabEventsWriteTelemetryEventsAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabEventsWriteEventsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&EventsAPI::WriteTelemetryEvents, &contextHandle->entity->eventsAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabEventsWriteTelemetryEventsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabEventsWriteEventsResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabEventsWriteEventsResponse*)(std::dynamic_pointer_cast<WriteEventsResponse>((*resultHandle)->model).get());

    return S_OK;
}

