#include "stdafx.h"
#include <playfab/PFAuthentication.h>
#include "Authentication.h"
#include "ApiAsyncProviders.h"
#include "GlobalState.h"
#include "Entity.h"

using namespace PlayFab;
using namespace PlayFab::AuthenticationModels;

HRESULT PFAuthenticationAdminCreateOpenIdConnectionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationCreateOpenIdConnectionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminCreateOpenIdConnection, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminCreatePlayerSharedSecretAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationCreatePlayerSharedSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminCreatePlayerSharedSecret, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminCreatePlayerSharedSecretGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAuthenticationAdminCreatePlayerSharedSecretGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAuthenticationCreatePlayerSharedSecretResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAuthenticationCreatePlayerSharedSecretResult*>(buffer);

    return S_OK;
}

HRESULT PFAuthenticationAdminDeleteOpenIdConnectionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationDeleteOpenIdConnectionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminDeleteOpenIdConnection, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminDeletePlayerSharedSecretAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationDeletePlayerSharedSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminDeletePlayerSharedSecret, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminGetPlayerSharedSecretsAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminGetPlayerSharedSecrets, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminGetPlayerSharedSecretsGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAuthenticationGetPlayerSharedSecretsResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAuthenticationGetPlayerSharedSecretsResult*)(std::dynamic_pointer_cast<GetPlayerSharedSecretsResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAuthenticationAdminGetPolicyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationGetPolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminGetPolicy, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminGetPolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAuthenticationGetPolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAuthenticationGetPolicyResponse*)(std::dynamic_pointer_cast<GetPolicyResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAuthenticationAdminListOpenIdConnectionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminListOpenIdConnection, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminListOpenIdConnectionGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAuthenticationListOpenIdConnectionResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAuthenticationListOpenIdConnectionResponse*)(std::dynamic_pointer_cast<ListOpenIdConnectionResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAuthenticationAdminSetPlayerSecretAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationAdminSetPlayerSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminSetPlayerSecret, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminUpdateOpenIdConnectionAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationUpdateOpenIdConnectionRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminUpdateOpenIdConnection, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminUpdatePlayerSharedSecretAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationUpdatePlayerSharedSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminUpdatePlayerSharedSecret, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminUpdatePolicyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationUpdatePolicyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::AdminUpdatePolicy, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationAdminUpdatePolicyGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAuthenticationUpdatePolicyResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAuthenticationUpdatePolicyResponse*)(std::dynamic_pointer_cast<UpdatePolicyResponse>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAuthenticationClientGetPhotonAuthenticationTokenAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAuthenticationGetPhotonAuthenticationTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AuthenticationAPI::ClientGetPhotonAuthenticationToken, &contextHandle->entity->authenticationAPI, GetPhotonAuthenticationTokenRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientGetPhotonAuthenticationTokenGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAuthenticationClientGetPhotonAuthenticationTokenGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAuthenticationGetPhotonAuthenticationTokenResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAuthenticationGetPhotonAuthenticationTokenResult*>(buffer);

    return S_OK;
}

HRESULT PFAuthenticationClientGetTitlePublicKeyAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationGetTitlePublicKeyRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientGetTitlePublicKey, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientGetTitlePublicKeyGetResultSize(
    _In_ XAsyncBlock* async,
    _Out_ size_t* bufferSize
) noexcept
{
    return XAsyncGetResultSize(async, bufferSize);
}

HRESULT PFAuthenticationClientGetTitlePublicKeyGetResult(
    _In_ XAsyncBlock* async,
    _In_ size_t bufferSize,
    _Out_writes_bytes_to_(bufferSize, *bufferUsed) void* buffer,
    _Outptr_ PFAuthenticationGetTitlePublicKeyResult** result,
    _Out_opt_ size_t* bufferUsed
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, bufferSize, buffer, bufferUsed));
    *result = static_cast<PFAuthenticationGetTitlePublicKeyResult*>(buffer);

    return S_OK;
}

HRESULT PFAuthenticationClientLoginWithAndroidDeviceIDAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithAndroidDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithAndroidDeviceID, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFEntityHandle* entityHandle
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFEntityHandle), entityHandle, nullptr);
}

HRESULT PFAuthenticationClientLoginWithAppleAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithAppleRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithApple, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithCustomIDAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithCustomIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithCustomID, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithEmailAddressAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithEmailAddressRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithEmailAddress, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithFacebookAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithFacebookRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithFacebook, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithFacebookInstantGamesIdAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithFacebookInstantGamesIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithFacebookInstantGamesId, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithGameCenterAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithGameCenterRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithGameCenter, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithGoogleAccountAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithGoogleAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithGoogleAccount, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithIOSDeviceIDAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithIOSDeviceIDRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithIOSDeviceID, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithKongregateAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithKongregateRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithKongregate, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithNintendoServiceAccountAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithNintendoServiceAccountRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithNintendoServiceAccount, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithNintendoSwitchDeviceIdAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithNintendoSwitchDeviceId, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithOpenIdConnectAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithOpenIdConnectRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithOpenIdConnect, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithPlayFabAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithPlayFabRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithPlayFab, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithPSNAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithPSNRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithPSN, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithSteamAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithSteamRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithSteam, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithTwitchAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithTwitchRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithTwitch, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientLoginWithXboxAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationClientLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientLoginWithXbox, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

#if HC_PLATFORM == HC_PLATFORM_GDK
HRESULT PFAuthenticationLoginWithXUserAsync(
    _In_ PFStateHandle stateHandle,
    _In_ const PFAuthenticationLoginWithXUserRequest* request,
    _Inout_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(stateHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::LoginWithXUser, *request, stateHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}
#endif

HRESULT PFAuthenticationClientRegisterPlayFabUserAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationRegisterPlayFabUserRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ClientRegisterPlayFabUser, *request, contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationClientRegisterPlayFabUserGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFEntityHandle* entityHandle
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFEntityHandle), entityHandle, nullptr);
}

HRESULT PFAuthenticationClientSetPlayerSecretAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAuthenticationClientSetPlayerSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AuthenticationAPI::ClientSetPlayerSecret, &contextHandle->entity->authenticationAPI, ClientSetPlayerSecretRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationServerAuthenticateSessionTicketAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationAuthenticateSessionTicketRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ServerAuthenticateSessionTicket, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationServerAuthenticateSessionTicketGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAuthenticationAuthenticateSessionTicketResult** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAuthenticationAuthenticateSessionTicketResult*)(std::dynamic_pointer_cast<AuthenticateSessionTicketResult>((*resultHandle)->result).get());

    return S_OK;
}

HRESULT PFAuthenticationServerLoginWithServerCustomIdAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithServerCustomIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ServerLoginWithServerCustomId, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationServerLoginGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFEntityHandle* entityHandle
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFEntityHandle), entityHandle, nullptr);
}            

HRESULT PFAuthenticationServerLoginWithSteamIdAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithSteamIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ServerLoginWithSteamId, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationServerLoginWithXboxAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationServerLoginWithXboxRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ServerLoginWithXbox, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationServerLoginWithXboxIdAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationLoginWithXboxIdRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ServerLoginWithXboxId, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationServerSetPlayerSecretAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationServerSetPlayerSecretRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::ServerSetPlayerSecret, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationGetEntityTokenAsync(
    _In_ PFStateHandle contextHandle,
    _In_ const PFAuthenticationGetEntityTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeAuthProvider(async, __FUNCTION__, std::bind(&AuthenticationAPI::GetEntityToken, *request, contextHandle->state->SecretKey(), contextHandle->state->HttpClient(), std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationGetEntityTokenGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFEntityHandle* entityHandle
) noexcept
{
    return XAsyncGetResult(async, nullptr, sizeof(PFEntityHandle), entityHandle, nullptr);
}

HRESULT PFAuthenticationValidateEntityTokenAsync(
    _In_ PFEntityHandle contextHandle,
    _In_ const PFAuthenticationValidateEntityTokenRequest* request,
    _In_ XAsyncBlock* async
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(contextHandle);
    RETURN_HR_INVALIDARG_IF_NULL(request);

    auto provider = MakeEntityProvider(async, __FUNCTION__, contextHandle->entity, std::bind(&AuthenticationAPI::ValidateEntityToken, &contextHandle->entity->authenticationAPI, ValidateEntityTokenRequest{ *request }, std::placeholders::_1));
    return Provider::Run(UniquePtr<Provider>(provider.release()));
}

HRESULT PFAuthenticationValidateEntityTokenGetResult(
    _In_ XAsyncBlock* async,
    _Out_ PFResultHandle* resultHandle,
    _Outptr_ PFAuthenticationValidateEntityTokenResponse** result
) noexcept
{
    RETURN_HR_INVALIDARG_IF_NULL(result);

    RETURN_IF_FAILED(XAsyncGetResult(async, nullptr, sizeof(PFResultHandle), resultHandle, nullptr));
    *result = (PFAuthenticationValidateEntityTokenResponse*)(std::dynamic_pointer_cast<ValidateEntityTokenResponse>((*resultHandle)->result).get());

    return S_OK;
}

