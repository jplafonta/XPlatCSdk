#include "stdafx.h"
#include <playfab/PlayFabClientAuthApi.h>
#include "ClientAuthApi.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"

using namespace PlayFab;
using namespace PlayFab::ClientModels;

HRESULT PlayFabClientLoginWithAndroidDeviceIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithAndroidDeviceID, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithAppleAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithApple, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithCustomIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithCustomID, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithEmailAddressAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithEmailAddressRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithEmailAddress, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithFacebookAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithFacebook, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithFacebookInstantGamesIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithFacebookInstantGamesId, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithGameCenterAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGameCenterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithGameCenter, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithGoogleAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithGoogleAccount, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithIOSDeviceIDAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithIOSDeviceID, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithKongregateAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithKongregateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithKongregate, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithNintendoServiceAccountAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithNintendoServiceAccount, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithNintendoSwitchDeviceIdAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithNintendoSwitchDeviceId, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithOpenIdConnectAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithOpenIdConnect, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithPlayFabAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPlayFabRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithPlayFab, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithPSNAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithPSNRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithPSN, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithSteamAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithSteamRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithSteam, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithTwitchAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithTwitchRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithTwitch, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientLoginWithXboxAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::LoginWithXbox, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PlayFabClientRegisterPlayFabUserAsync(
    _In_ PlayFabStateHandle stateHandle,
    _In_ const PlayFabClientRegisterPlayFabUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&ClientAuthAPI::RegisterPlayFabUser, &stateHandle->state->clientAuthAPI, *request, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

