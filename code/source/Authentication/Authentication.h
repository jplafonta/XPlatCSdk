#pragma once

#include "AuthenticationDataModels.h"
#include "AuthTokens.h"
#include "HttpClient.h"
#include "TaskQueue.h"

namespace PlayFab
{

class Entity;

class AuthenticationAPI
{
public:
    AuthenticationAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens);
    AuthenticationAPI(const AuthenticationAPI& source) = delete;
    AuthenticationAPI& operator=(const AuthenticationAPI& source) = delete;
    ~AuthenticationAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminCreateOpenIdConnection(const PFAuthenticationCreateOpenIdConnectionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::CreatePlayerSharedSecretResult> AdminCreatePlayerSharedSecret(const PFAuthenticationCreatePlayerSharedSecretRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteOpenIdConnection(const PFAuthenticationDeleteOpenIdConnectionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminDeletePlayerSharedSecret(const PFAuthenticationDeletePlayerSharedSecretRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::GetPlayerSharedSecretsResult> AdminGetPlayerSharedSecrets(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::GetPolicyResponse> AdminGetPolicy(const PFAuthenticationGetPolicyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::ListOpenIdConnectionResponse> AdminListOpenIdConnection(SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminSetPlayerSecret(const PFAuthenticationAdminSetPlayerSecretRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateOpenIdConnection(const PFAuthenticationUpdateOpenIdConnectionRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdatePlayerSharedSecret(const PFAuthenticationUpdatePlayerSharedSecretRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::UpdatePolicyResponse> AdminUpdatePolicy(const PFAuthenticationUpdatePolicyRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<AuthenticationModels::GetPhotonAuthenticationTokenResult> ClientGetPhotonAuthenticationToken(const PFAuthenticationGetPhotonAuthenticationTokenRequest& request, const TaskQueue& queue) const;
    static AsyncOp<AuthenticationModels::GetTitlePublicKeyResult> ClientGetTitlePublicKey(const PFAuthenticationGetTitlePublicKeyRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithAndroidDeviceID(const PFAuthenticationLoginWithAndroidDeviceIDRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithApple(const PFAuthenticationLoginWithAppleRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithCustomID(const PFAuthenticationLoginWithCustomIDRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithEmailAddress(const PFAuthenticationLoginWithEmailAddressRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithFacebook(const PFAuthenticationLoginWithFacebookRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithFacebookInstantGamesId(const PFAuthenticationLoginWithFacebookInstantGamesIdRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithGameCenter(const PFAuthenticationLoginWithGameCenterRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithGoogleAccount(const PFAuthenticationLoginWithGoogleAccountRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithIOSDeviceID(const PFAuthenticationLoginWithIOSDeviceIDRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithKongregate(const PFAuthenticationLoginWithKongregateRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithNintendoServiceAccount(const PFAuthenticationLoginWithNintendoServiceAccountRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithNintendoSwitchDeviceId(const PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithOpenIdConnect(const PFAuthenticationLoginWithOpenIdConnectRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithPlayFab(const PFAuthenticationLoginWithPlayFabRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithPSN(const PFAuthenticationLoginWithPSNRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithSteam(const PFAuthenticationLoginWithSteamRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithTwitch(const PFAuthenticationLoginWithTwitchRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ClientLoginWithXbox(const PFAuthenticationClientLoginWithXboxRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
#if HC_PLATFORM == HC_PLATFORM_GDK
    static AsyncOp<SharedPtr<Entity>> LoginWithXUser(const PFAuthenticationLoginWithXUserRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
#endif
    static AsyncOp<SharedPtr<Entity>> ClientRegisterPlayFabUser(const PFAuthenticationRegisterPlayFabUserRequest& request, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<void> ClientSetPlayerSecret(const PFAuthenticationClientSetPlayerSecretRequest& request, const TaskQueue& queue) const;
    static AsyncOp<AuthenticationModels::AuthenticateSessionTicketResult> ServerAuthenticateSessionTicket(const PFAuthenticationAuthenticateSessionTicketRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ServerLoginWithServerCustomId(const PFAuthenticationLoginWithServerCustomIdRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ServerLoginWithSteamId(const PFAuthenticationLoginWithSteamIdRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ServerLoginWithXbox(const PFAuthenticationServerLoginWithXboxRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> ServerLoginWithXboxId(const PFAuthenticationLoginWithXboxIdRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<void> ServerSetPlayerSecret(const PFAuthenticationServerSetPlayerSecretRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> GetEntityToken(const PFAuthenticationGetEntityTokenRequest& request, SharedPtr<String const> secretKey, SharedPtr<HttpClient const> httpClient, const TaskQueue& queue);
    AsyncOp<AuthenticationModels::ValidateEntityTokenResponse> ValidateEntityToken(const PFAuthenticationValidateEntityTokenRequest& request, const TaskQueue& queue) const;

private:
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens const> m_tokens;
};

}
