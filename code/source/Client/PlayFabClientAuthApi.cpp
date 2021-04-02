#include "stdafx.h"
#include <playfab/PlayFabClientAuthApi.h>
#include "ClientAuthApi.h"
#include "AuthAsyncProvider.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::ClientModels;

HRESULT PlayFabClientLoginWithAndroidDeviceID(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithAndroidDeviceIDRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithAndroidDeviceID,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithApple(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithAppleRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithApple,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithCustomID(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithCustomIDRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithCustomID,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithEmailAddress(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithEmailAddressRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithEmailAddressRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithEmailAddress,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithFacebook(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithFacebookRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithFacebook,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithFacebookInstantGamesId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithFacebookInstantGamesIdRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithFacebookInstantGamesId,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithGameCenter(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGameCenterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithGameCenterRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithGameCenter,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithGoogleAccount(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithGoogleAccountRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithGoogleAccount,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithIOSDeviceID(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithIOSDeviceIDRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithIOSDeviceID,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithKongregate(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithKongregateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithKongregateRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithKongregate,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithNintendoServiceAccount(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithNintendoServiceAccountRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithNintendoServiceAccount,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithNintendoSwitchDeviceId(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithNintendoSwitchDeviceIdRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithNintendoSwitchDeviceId,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithOpenIdConnect(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithOpenIdConnectRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithOpenIdConnect,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithPlayFab(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPlayFabRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithPlayFabRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithPlayFab,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithPSN(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPSNRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithPSNRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithPSN,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithSteam(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithSteamRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithSteamRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithSteam,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithTwitch(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithTwitchRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithTwitchRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithTwitch,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithWindowsHello(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithWindowsHelloRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithWindowsHelloRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithWindowsHello,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithXbox(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientLoginWithXboxRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::LoginWithXbox,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRegisterPlayFabUser(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientRegisterPlayFabUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientRegisterPlayFabUserRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::RegisterPlayFabUser,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRegisterWithWindowsHello(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientRegisterWithWindowsHelloRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeUnique<AuthCallProvider<ClientAuthAPI, PlayFabClientRegisterWithWindowsHelloRequest>>(
        async,
        stateHandle->state->ClientAuth,
        &ClientAuthAPI::RegisterWithWindowsHello,
        *request
    );
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

