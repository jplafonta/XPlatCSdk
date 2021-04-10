#include "stdafx.h"
#include <playfab/PlayFabAuthenticationAuthApi.h>
#include "AuthenticationAuthApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::AuthenticationModels;

HRESULT PlayFabAuthenticationGetEntityTokenAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabAuthenticationGetEntityTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, std::bind(&AuthenticationAuthAPI::GetEntityToken, &stateHandle->state->authenticationAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

