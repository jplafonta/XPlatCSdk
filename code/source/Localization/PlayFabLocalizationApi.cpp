#include "stdafx.h"
#include <playfab/PlayFabLocalizationApi.h>
#include "LocalizationApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::LocalizationModels;

HRESULT PlayFabLocalizationGetLanguageListAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabLocalizationGetLanguageListRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request); 

    auto provider = MakeProvider(async, std::bind(&LocalizationAPI::GetLanguageList, &contextHandle->entity->localizationAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabLocalizationGetLanguageListGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabLocalizationGetLanguageListResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabLocalizationGetLanguageListResponse*)(std::dynamic_pointer_cast<GetLanguageListResponse>((*resultHandle)->model).get());

    return S_OK;
}

