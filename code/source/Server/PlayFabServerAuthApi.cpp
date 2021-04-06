#include "stdafx.h"
#include <playfab/PlayFabServerAuthApi.h>
#include "ServerAuthApi.h"
#include "AuthAsyncProvider.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::ServerModels;

HRESULT PlayFabServerLoginWithServerCustomId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ServerAuthAPI, PlayFabServerLoginWithServerCustomIdRequest>>(
        async,
        stateHandle->state->ServerAuth,
        &ServerAuthAPI::LoginWithServerCustomId,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLoginWithSteamId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithSteamIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ServerAuthAPI, PlayFabServerLoginWithSteamIdRequest>>(
        async,
        stateHandle->state->ServerAuth,
        &ServerAuthAPI::LoginWithSteamId,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLoginWithXbox(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ServerAuthAPI, PlayFabServerLoginWithXboxRequest>>(
        async,
        stateHandle->state->ServerAuth,
        &ServerAuthAPI::LoginWithXbox,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabServerLoginWithXboxId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabServerLoginWithXboxIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ServerAuthAPI, PlayFabServerLoginWithXboxIdRequest>>(
        async,
        stateHandle->state->ServerAuth,
        &ServerAuthAPI::LoginWithXboxId,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

