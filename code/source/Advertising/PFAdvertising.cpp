#include "stdafx.h"
#include <playfab/PFAdvertising.h>
#include "Advertising.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::AdvertisingModels;

HRESULT PFAdvertisingClientAttributeInstallAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFAdvertisingAttributeInstallRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdvertisingAPI::ClientAttributeInstall, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAdvertisingClientGetAdPlacementsAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFAdvertisingGetAdPlacementsRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdvertisingAPI::ClientGetAdPlacements, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAdvertisingClientGetAdPlacementsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAdvertisingGetAdPlacementsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAdvertisingGetAdPlacementsResult*)(std::dynamic_pointer_cast<GetAdPlacementsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAdvertisingClientReportAdActivityAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFAdvertisingReportAdActivityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdvertisingAPI::ClientReportAdActivity, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAdvertisingClientRewardAdActivityAsync(
    _In_ PFTitlePlayerHandle contextHandle,
    _In_ const PFAdvertisingRewardAdActivityRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AdvertisingAPI::ClientRewardAdActivity, contextHandle->titlePlayer, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAdvertisingClientRewardAdActivityGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAdvertisingRewardAdActivityResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAdvertisingRewardAdActivityResult*)(std::dynamic_pointer_cast<RewardAdActivityResult>((*resultHandle)->result).get());

    return S_OK;
}

