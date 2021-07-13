#include "stdafx.h"
#include <playfab/PlayFabAuthenticationApi.h>
#include "AuthenticationApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::AuthenticationModels;

HRESULT PlayFabAuthenticationValidateEntityTokenAsync(
    _In_ PlayFabEntityHandle contextHandle,
    _In_ const PlayFabAuthenticationValidateEntityTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AuthenticationAPI::ValidateEntityToken, &contextHandle->entity->authenticationAPI, ValidateEntityTokenRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabAuthenticationValidateEntityTokenGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PlayFabResultHandle* resultHandle,
    _Outptr_ PlayFabAuthenticationValidateEntityTokenResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PlayFabResultHandle), resultHandle, nullptr));
    *result = (PlayFabAuthenticationValidateEntityTokenResponse*)(std::dynamic_pointer_cast<ValidateEntityTokenResponse>((*resultHandle)->result).get());

    return S_OK;
}

