#include "stdafx.h"
#include <playfab/PlayFabServerAuthApi.h>
#include "ServerAuthApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::ServerModels;

HRESULT PlayFabServerLoginWithServerCustomIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, std::bind(&ServerAuthAPI::LoginWithServerCustomId, &stateHandle->state->serverAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLoginWithSteamIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithSteamIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, std::bind(&ServerAuthAPI::LoginWithSteamId, &stateHandle->state->serverAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLoginWithXboxAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, std::bind(&ServerAuthAPI::LoginWithXbox, &stateHandle->state->serverAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLoginWithXboxIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithXboxIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, std::bind(&ServerAuthAPI::LoginWithXboxId, &stateHandle->state->serverAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

