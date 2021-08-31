#pragma once

#include "AuthenticationDataModels.h"
#include "TitlePlayer.h"
#include "GlobalState.h"

namespace PlayFab
{

class AuthenticationAPI
{
public:
    AuthenticationAPI() = delete;
    AuthenticationAPI(const AuthenticationAPI& source) = delete;
    AuthenticationAPI& operator=(const AuthenticationAPI& source) = delete;
    ~AuthenticationAPI() = default;

    // ------------ Generated API calls
    static AsyncOp<void> AdminCreateOpenIdConnection(SharedPtr<GlobalState const> state, const PFAuthenticationCreateOpenIdConnectionRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::CreatePlayerSharedSecretResult> AdminCreatePlayerSharedSecret(SharedPtr<GlobalState const> state, const PFAuthenticationCreatePlayerSharedSecretRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminDeleteOpenIdConnection(SharedPtr<GlobalState const> state, const PFAuthenticationDeleteOpenIdConnectionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminDeletePlayerSharedSecret(SharedPtr<GlobalState const> state, const PFAuthenticationDeletePlayerSharedSecretRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::GetPlayerSharedSecretsResult> AdminGetPlayerSharedSecrets(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::GetPolicyResponse> AdminGetPolicy(SharedPtr<GlobalState const> state, const PFAuthenticationGetPolicyRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::ListOpenIdConnectionResponse> AdminListOpenIdConnection(SharedPtr<GlobalState const> state, const TaskQueue& queue);
    static AsyncOp<void> AdminSetPlayerSecret(SharedPtr<GlobalState const> state, const PFAuthenticationAdminSetPlayerSecretRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdateOpenIdConnection(SharedPtr<GlobalState const> state, const PFAuthenticationUpdateOpenIdConnectionRequest& request, const TaskQueue& queue);
    static AsyncOp<void> AdminUpdatePlayerSharedSecret(SharedPtr<GlobalState const> state, const PFAuthenticationUpdatePlayerSharedSecretRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::UpdatePolicyResponse> AdminUpdatePolicy(SharedPtr<GlobalState const> state, const PFAuthenticationUpdatePolicyRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::GetPhotonAuthenticationTokenResult> ClientGetPhotonAuthenticationToken(SharedPtr<TitlePlayer> entity, const PFAuthenticationGetPhotonAuthenticationTokenRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::GetTitlePublicKeyResult> ClientGetTitlePublicKey(SharedPtr<GlobalState const> state, const PFAuthenticationGetTitlePublicKeyRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithAndroidDeviceID(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithAndroidDeviceIDRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithApple(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithAppleRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithCustomID(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithCustomIDRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithEmailAddress(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithEmailAddressRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithFacebook(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithFacebookRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithFacebookInstantGamesId(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithFacebookInstantGamesIdRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithGameCenter(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithGameCenterRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithGoogleAccount(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithGoogleAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithIOSDeviceID(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithIOSDeviceIDRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithKongregate(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithKongregateRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithNintendoServiceAccount(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithNintendoServiceAccountRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithNintendoSwitchDeviceId(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithOpenIdConnect(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithOpenIdConnectRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithPlayFab(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithPlayFabRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithPSN(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithPSNRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithSteam(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithSteamRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithTwitch(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithTwitchRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ClientLoginWithXbox(SharedPtr<GlobalState const> state, const PFAuthenticationClientLoginWithXboxRequest& request, const TaskQueue& queue);
#if HC_PLATFORM == HC_PLATFORM_GDK
    static AsyncOp<SharedPtr<TitlePlayer>> LoginWithXUser(SharedPtr<GlobalState> state, const PFAuthenticationLoginWithXUserRequest& request, const TaskQueue& queue);
#endif
    static AsyncOp<SharedPtr<TitlePlayer>> ClientRegisterPlayFabUser(SharedPtr<GlobalState const> state, const PFAuthenticationRegisterPlayFabUserRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ClientSetPlayerSecret(SharedPtr<TitlePlayer> entity, const PFAuthenticationClientSetPlayerSecretRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::AuthenticateSessionTicketResult> ServerAuthenticateSessionTicket(SharedPtr<GlobalState const> state, const PFAuthenticationAuthenticateSessionTicketRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ServerLoginWithServerCustomId(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithServerCustomIdRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ServerLoginWithSteamId(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithSteamIdRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ServerLoginWithXbox(SharedPtr<GlobalState const> state, const PFAuthenticationServerLoginWithXboxRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<TitlePlayer>> ServerLoginWithXboxId(SharedPtr<GlobalState const> state, const PFAuthenticationLoginWithXboxIdRequest& request, const TaskQueue& queue);
    static AsyncOp<void> ServerSetPlayerSecret(SharedPtr<GlobalState const> state, const PFAuthenticationServerSetPlayerSecretRequest& request, const TaskQueue& queue);
    static AsyncOp<SharedPtr<Entity>> GetEntityToken(SharedPtr<GlobalState const> state, const PFAuthenticationGetEntityTokenRequest& request, const TaskQueue& queue);
    static AsyncOp<AuthenticationModels::ValidateEntityTokenResponse> ValidateEntityToken(SharedPtr<Entity> entity, const PFAuthenticationValidateEntityTokenRequest& request, const TaskQueue& queue);
};

}
