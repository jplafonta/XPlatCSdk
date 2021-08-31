#include "stdafx.h"
#include <playfab/PFLocalization.h>
#include "Localization.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::LocalizationModels;

HRESULT PFLocalizationGetLanguageListAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFLocalizationGetLanguageListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&LocalizationAPI::GetLanguageList, contextHandle->entity, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFLocalizationGetLanguageListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFLocalizationGetLanguageListResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFLocalizationGetLanguageListResponse*)(std::dynamic_pointer_cast<GetLanguageListResponse>((*resultHandle)->result).get());

    return S_OK;
}

