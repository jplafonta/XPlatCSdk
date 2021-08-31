#include "stdafx.h"
#include <playfab/PFQoS.h>
#include "QoS.h"
#include "ApiAsyncProviders.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::QoS;

HRESULT PFQoSGetMeasurmentsAsync(
    _In_ PFEntityHandle entityHandle,
    _In_ uint32_t pingIterations,
    _In_ uint32_t timeoutMs,
    _Inout_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(entityHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&QoSAPI::GetMeasurements, entityHandle->entity->QoSAPI().get(), entityHandle->entity, pingIterations, timeoutMs, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFQoSGetMeasurementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFQoSMeasurements** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFQoSMeasurements*)(std::dynamic_pointer_cast<Measurements>((*resultHandle)->result).get());

    return S_OK;
}