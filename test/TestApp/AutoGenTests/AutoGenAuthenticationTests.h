#pragma once

#include "TestCase.h"
#include <playfab/PFGlobal.h>
#include <playfab/PFEntity.h>
#include "../../../code/source/Authentication/AuthenticationDataModels.h"

namespace PlayFabUnit
{

class AutoGenAuthenticationTests : public PlayFabApiTestCase
{
private: 
    static void Log(std::stringstream& ss);
    static HRESULT LogHR(HRESULT hr);


    void TestAuthenticationAdminCreateOpenIdConnection(TestContext& testContext); 
    void TestAuthenticationAdminCreatePlayerSharedSecret(TestContext& testContext); 
    void TestAuthenticationAdminDeleteOpenIdConnection(TestContext& testContext); 
    void TestAuthenticationAdminDeletePlayerSharedSecret(TestContext& testContext); 
    void TestAuthenticationAdminGetPlayerSharedSecrets(TestContext& testContext); 
    void TestAuthenticationAdminGetPolicy(TestContext& testContext); 
    void TestAuthenticationAdminListOpenIdConnection(TestContext& testContext); 
    void TestAuthenticationAdminSetPlayerSecret(TestContext& testContext); 
    void TestAuthenticationAdminUpdateOpenIdConnection(TestContext& testContext); 
    void TestAuthenticationAdminUpdatePlayerSharedSecret(TestContext& testContext); 
    void TestAuthenticationAdminUpdatePolicy(TestContext& testContext); 
    void TestAuthenticationClientGetPhotonAuthenticationToken(TestContext& testContext); 
    void TestAuthenticationClientGetTitlePublicKey(TestContext& testContext); 
    void TestAuthenticationClientLoginWithAndroidDeviceID(TestContext& testContext); 
    void TestAuthenticationClientLoginWithApple(TestContext& testContext); 
    void TestAuthenticationClientLoginWithCustomID(TestContext& testContext); 
    void TestAuthenticationClientLoginWithEmailAddress(TestContext& testContext); 
    void TestAuthenticationClientLoginWithFacebook(TestContext& testContext); 
    void TestAuthenticationClientLoginWithFacebookInstantGamesId(TestContext& testContext); 
    void TestAuthenticationClientLoginWithGameCenter(TestContext& testContext); 
    void TestAuthenticationClientLoginWithGoogleAccount(TestContext& testContext); 
    void TestAuthenticationClientLoginWithIOSDeviceID(TestContext& testContext); 
    void TestAuthenticationClientLoginWithKongregate(TestContext& testContext); 
    void TestAuthenticationClientLoginWithNintendoServiceAccount(TestContext& testContext); 
    void TestAuthenticationClientLoginWithNintendoSwitchDeviceId(TestContext& testContext); 
    void TestAuthenticationClientLoginWithOpenIdConnect(TestContext& testContext); 
    void TestAuthenticationClientLoginWithPlayFab(TestContext& testContext); 
    void TestAuthenticationClientLoginWithPSN(TestContext& testContext); 
    void TestAuthenticationClientLoginWithSteam(TestContext& testContext); 
    void TestAuthenticationClientLoginWithTwitch(TestContext& testContext); 
    void TestAuthenticationClientLoginWithXbox(TestContext& testContext); 
    void TestAuthenticationClientRegisterPlayFabUser(TestContext& testContext); 
    void TestAuthenticationClientSetPlayerSecret(TestContext& testContext); 
    void TestAuthenticationServerAuthenticateSessionTicket(TestContext& testContext); 
    void TestAuthenticationServerLoginWithServerCustomId(TestContext& testContext); 
    void TestAuthenticationServerLoginWithSteamId(TestContext& testContext); 
    void TestAuthenticationServerLoginWithXbox(TestContext& testContext); 
    void TestAuthenticationServerLoginWithXboxId(TestContext& testContext); 
    void TestAuthenticationServerSetPlayerSecret(TestContext& testContext); 
    void TestAuthenticationGetEntityToken(TestContext& testContext); 
    void TestAuthenticationValidateEntityToken(TestContext& testContext); 


protected:
    void AddTests();


    static void LogCreateOpenIdConnectionRequest( PlayFab::AuthenticationModels::CreateOpenIdConnectionRequest* request, const char* testName );
    static void FillCreateOpenIdConnectionRequest( PlayFab::AuthenticationModels::CreateOpenIdConnectionRequest* request );
    static void LogCreatePlayerSharedSecretRequest( PlayFab::AuthenticationModels::CreatePlayerSharedSecretRequest* request, const char* testName );
    static void FillCreatePlayerSharedSecretRequest( PlayFab::AuthenticationModels::CreatePlayerSharedSecretRequest* request );
    static HRESULT LogPFAuthenticationCreatePlayerSharedSecretResult( PFAuthenticationCreatePlayerSharedSecretResult* result );
    static HRESULT ValidatePFAuthenticationCreatePlayerSharedSecretResult( PFAuthenticationCreatePlayerSharedSecretResult* result );
    static void LogDeleteOpenIdConnectionRequest( PlayFab::AuthenticationModels::DeleteOpenIdConnectionRequest* request, const char* testName );
    static void FillDeleteOpenIdConnectionRequest( PlayFab::AuthenticationModels::DeleteOpenIdConnectionRequest* request );
    static void LogDeletePlayerSharedSecretRequest( PlayFab::AuthenticationModels::DeletePlayerSharedSecretRequest* request, const char* testName );
    static void FillDeletePlayerSharedSecretRequest( PlayFab::AuthenticationModels::DeletePlayerSharedSecretRequest* request );
    static HRESULT LogPFAuthenticationGetPlayerSharedSecretsResult( PFAuthenticationGetPlayerSharedSecretsResult* result );
    static HRESULT ValidatePFAuthenticationGetPlayerSharedSecretsResult( PFAuthenticationGetPlayerSharedSecretsResult* result );
    static void LogGetPolicyRequest( PlayFab::AuthenticationModels::GetPolicyRequest* request, const char* testName );
    static void FillGetPolicyRequest( PlayFab::AuthenticationModels::GetPolicyRequest* request );
    static HRESULT LogPFAuthenticationGetPolicyResponse( PFAuthenticationGetPolicyResponse* result );
    static HRESULT ValidatePFAuthenticationGetPolicyResponse( PFAuthenticationGetPolicyResponse* result );
    static HRESULT LogPFAuthenticationListOpenIdConnectionResponse( PFAuthenticationListOpenIdConnectionResponse* result );
    static HRESULT ValidatePFAuthenticationListOpenIdConnectionResponse( PFAuthenticationListOpenIdConnectionResponse* result );
    static void LogAdminSetPlayerSecretRequest( PlayFab::AuthenticationModels::AdminSetPlayerSecretRequest* request, const char* testName );
    static void FillAdminSetPlayerSecretRequest( PlayFab::AuthenticationModels::AdminSetPlayerSecretRequest* request );
    static void LogUpdateOpenIdConnectionRequest( PlayFab::AuthenticationModels::UpdateOpenIdConnectionRequest* request, const char* testName );
    static void FillUpdateOpenIdConnectionRequest( PlayFab::AuthenticationModels::UpdateOpenIdConnectionRequest* request );
    static void LogUpdatePlayerSharedSecretRequest( PlayFab::AuthenticationModels::UpdatePlayerSharedSecretRequest* request, const char* testName );
    static void FillUpdatePlayerSharedSecretRequest( PlayFab::AuthenticationModels::UpdatePlayerSharedSecretRequest* request );
    static void LogUpdatePolicyRequest( PlayFab::AuthenticationModels::UpdatePolicyRequest* request, const char* testName );
    static void FillUpdatePolicyRequest( PlayFab::AuthenticationModels::UpdatePolicyRequest* request );
    static HRESULT LogPFAuthenticationUpdatePolicyResponse( PFAuthenticationUpdatePolicyResponse* result );
    static HRESULT ValidatePFAuthenticationUpdatePolicyResponse( PFAuthenticationUpdatePolicyResponse* result );
    static void LogGetPhotonAuthenticationTokenRequest( PlayFab::AuthenticationModels::GetPhotonAuthenticationTokenRequest* request, const char* testName );
    static void FillGetPhotonAuthenticationTokenRequest( PlayFab::AuthenticationModels::GetPhotonAuthenticationTokenRequest* request );
    static HRESULT LogPFAuthenticationGetPhotonAuthenticationTokenResult( PFAuthenticationGetPhotonAuthenticationTokenResult* result );
    static HRESULT ValidatePFAuthenticationGetPhotonAuthenticationTokenResult( PFAuthenticationGetPhotonAuthenticationTokenResult* result );
    static void LogGetTitlePublicKeyRequest( PlayFab::AuthenticationModels::GetTitlePublicKeyRequest* request, const char* testName );
    static void FillGetTitlePublicKeyRequest( PlayFab::AuthenticationModels::GetTitlePublicKeyRequest* request );
    static HRESULT LogPFAuthenticationGetTitlePublicKeyResult( PFAuthenticationGetTitlePublicKeyResult* result );
    static HRESULT ValidatePFAuthenticationGetTitlePublicKeyResult( PFAuthenticationGetTitlePublicKeyResult* result );
    static void LogLoginWithAndroidDeviceIDRequest( PlayFab::AuthenticationModels::LoginWithAndroidDeviceIDRequest* request, const char* testName );
    static void FillLoginWithAndroidDeviceIDRequest( PlayFab::AuthenticationModels::LoginWithAndroidDeviceIDRequest* request );
    static HRESULT LogPFAuthenticationLoginResult( PFAuthenticationLoginResult* result );
    static HRESULT ValidatePFAuthenticationLoginResult( PFAuthenticationLoginResult* result );
    static void LogLoginWithAppleRequest( PlayFab::AuthenticationModels::LoginWithAppleRequest* request, const char* testName );
    static void FillLoginWithAppleRequest( PlayFab::AuthenticationModels::LoginWithAppleRequest* request );
    static void LogLoginWithCustomIDRequest( PlayFab::AuthenticationModels::LoginWithCustomIDRequest* request, const char* testName );
    static void FillLoginWithCustomIDRequest( PlayFab::AuthenticationModels::LoginWithCustomIDRequest* request );
    static void LogLoginWithEmailAddressRequest( PlayFab::AuthenticationModels::LoginWithEmailAddressRequest* request, const char* testName );
    static void FillLoginWithEmailAddressRequest( PlayFab::AuthenticationModels::LoginWithEmailAddressRequest* request );
    static void LogLoginWithFacebookRequest( PlayFab::AuthenticationModels::LoginWithFacebookRequest* request, const char* testName );
    static void FillLoginWithFacebookRequest( PlayFab::AuthenticationModels::LoginWithFacebookRequest* request );
    static void LogLoginWithFacebookInstantGamesIdRequest( PlayFab::AuthenticationModels::LoginWithFacebookInstantGamesIdRequest* request, const char* testName );
    static void FillLoginWithFacebookInstantGamesIdRequest( PlayFab::AuthenticationModels::LoginWithFacebookInstantGamesIdRequest* request );
    static void LogLoginWithGameCenterRequest( PlayFab::AuthenticationModels::LoginWithGameCenterRequest* request, const char* testName );
    static void FillLoginWithGameCenterRequest( PlayFab::AuthenticationModels::LoginWithGameCenterRequest* request );
    static void LogLoginWithGoogleAccountRequest( PlayFab::AuthenticationModels::LoginWithGoogleAccountRequest* request, const char* testName );
    static void FillLoginWithGoogleAccountRequest( PlayFab::AuthenticationModels::LoginWithGoogleAccountRequest* request );
    static void LogLoginWithIOSDeviceIDRequest( PlayFab::AuthenticationModels::LoginWithIOSDeviceIDRequest* request, const char* testName );
    static void FillLoginWithIOSDeviceIDRequest( PlayFab::AuthenticationModels::LoginWithIOSDeviceIDRequest* request );
    static void LogLoginWithKongregateRequest( PlayFab::AuthenticationModels::LoginWithKongregateRequest* request, const char* testName );
    static void FillLoginWithKongregateRequest( PlayFab::AuthenticationModels::LoginWithKongregateRequest* request );
    static void LogLoginWithNintendoServiceAccountRequest( PlayFab::AuthenticationModels::LoginWithNintendoServiceAccountRequest* request, const char* testName );
    static void FillLoginWithNintendoServiceAccountRequest( PlayFab::AuthenticationModels::LoginWithNintendoServiceAccountRequest* request );
    static void LogLoginWithNintendoSwitchDeviceIdRequest( PlayFab::AuthenticationModels::LoginWithNintendoSwitchDeviceIdRequest* request, const char* testName );
    static void FillLoginWithNintendoSwitchDeviceIdRequest( PlayFab::AuthenticationModels::LoginWithNintendoSwitchDeviceIdRequest* request );
    static void LogLoginWithOpenIdConnectRequest( PlayFab::AuthenticationModels::LoginWithOpenIdConnectRequest* request, const char* testName );
    static void FillLoginWithOpenIdConnectRequest( PlayFab::AuthenticationModels::LoginWithOpenIdConnectRequest* request );
    static void LogLoginWithPlayFabRequest( PlayFab::AuthenticationModels::LoginWithPlayFabRequest* request, const char* testName );
    static void FillLoginWithPlayFabRequest( PlayFab::AuthenticationModels::LoginWithPlayFabRequest* request );
    static void LogLoginWithPSNRequest( PlayFab::AuthenticationModels::LoginWithPSNRequest* request, const char* testName );
    static void FillLoginWithPSNRequest( PlayFab::AuthenticationModels::LoginWithPSNRequest* request );
    static void LogLoginWithSteamRequest( PlayFab::AuthenticationModels::LoginWithSteamRequest* request, const char* testName );
    static void FillLoginWithSteamRequest( PlayFab::AuthenticationModels::LoginWithSteamRequest* request );
    static void LogLoginWithTwitchRequest( PlayFab::AuthenticationModels::LoginWithTwitchRequest* request, const char* testName );
    static void FillLoginWithTwitchRequest( PlayFab::AuthenticationModels::LoginWithTwitchRequest* request );
    static void LogClientLoginWithXboxRequest( PlayFab::AuthenticationModels::ClientLoginWithXboxRequest* request, const char* testName );
    static void FillClientLoginWithXboxRequest( PlayFab::AuthenticationModels::ClientLoginWithXboxRequest* request );
    static void LogRegisterPlayFabUserRequest( PlayFab::AuthenticationModels::RegisterPlayFabUserRequest* request, const char* testName );
    static void FillRegisterPlayFabUserRequest( PlayFab::AuthenticationModels::RegisterPlayFabUserRequest* request );
    static HRESULT LogPFAuthenticationRegisterPlayFabUserResult( PFAuthenticationRegisterPlayFabUserResult* result );
    static HRESULT ValidatePFAuthenticationRegisterPlayFabUserResult( PFAuthenticationRegisterPlayFabUserResult* result );
    static void LogClientSetPlayerSecretRequest( PlayFab::AuthenticationModels::ClientSetPlayerSecretRequest* request, const char* testName );
    static void FillClientSetPlayerSecretRequest( PlayFab::AuthenticationModels::ClientSetPlayerSecretRequest* request );
    static void LogAuthenticateSessionTicketRequest( PlayFab::AuthenticationModels::AuthenticateSessionTicketRequest* request, const char* testName );
    static void FillAuthenticateSessionTicketRequest( PlayFab::AuthenticationModels::AuthenticateSessionTicketRequest* request );
    static HRESULT LogPFAuthenticationAuthenticateSessionTicketResult( PFAuthenticationAuthenticateSessionTicketResult* result );
    static HRESULT ValidatePFAuthenticationAuthenticateSessionTicketResult( PFAuthenticationAuthenticateSessionTicketResult* result );
    static void LogLoginWithServerCustomIdRequest( PlayFab::AuthenticationModels::LoginWithServerCustomIdRequest* request, const char* testName );
    static void FillLoginWithServerCustomIdRequest( PlayFab::AuthenticationModels::LoginWithServerCustomIdRequest* request );
    static HRESULT LogPFAuthenticationServerLoginResult( PFAuthenticationServerLoginResult* result );
    static HRESULT ValidatePFAuthenticationServerLoginResult( PFAuthenticationServerLoginResult* result );
    static void LogLoginWithSteamIdRequest( PlayFab::AuthenticationModels::LoginWithSteamIdRequest* request, const char* testName );
    static void FillLoginWithSteamIdRequest( PlayFab::AuthenticationModels::LoginWithSteamIdRequest* request );
    static void LogServerLoginWithXboxRequest( PlayFab::AuthenticationModels::ServerLoginWithXboxRequest* request, const char* testName );
    static void FillServerLoginWithXboxRequest( PlayFab::AuthenticationModels::ServerLoginWithXboxRequest* request );
    static void LogLoginWithXboxIdRequest( PlayFab::AuthenticationModels::LoginWithXboxIdRequest* request, const char* testName );
    static void FillLoginWithXboxIdRequest( PlayFab::AuthenticationModels::LoginWithXboxIdRequest* request );
    static void LogServerSetPlayerSecretRequest( PlayFab::AuthenticationModels::ServerSetPlayerSecretRequest* request, const char* testName );
    static void FillServerSetPlayerSecretRequest( PlayFab::AuthenticationModels::ServerSetPlayerSecretRequest* request );
    static void LogGetEntityTokenRequest( PlayFab::AuthenticationModels::GetEntityTokenRequest* request, const char* testName );
    static void FillGetEntityTokenRequest( PlayFab::AuthenticationModels::GetEntityTokenRequest* request );
    static HRESULT LogPFAuthenticationGetEntityTokenResponse( PFAuthenticationGetEntityTokenResponse* result );
    static HRESULT ValidatePFAuthenticationGetEntityTokenResponse( PFAuthenticationGetEntityTokenResponse* result );
    static void LogValidateEntityTokenRequest( PlayFab::AuthenticationModels::ValidateEntityTokenRequest* request, const char* testName );
    static void FillValidateEntityTokenRequest( PlayFab::AuthenticationModels::ValidateEntityTokenRequest* request );
    static HRESULT LogPFAuthenticationValidateEntityTokenResponse( PFAuthenticationValidateEntityTokenResponse* result );
    static HRESULT ValidatePFAuthenticationValidateEntityTokenResponse( PFAuthenticationValidateEntityTokenResponse* result );

public:
    PFStateHandle stateHandle{ nullptr };
    PFEntityHandle entityHandle{ nullptr };
    PFGetPlayerCombinedInfoResultPayload const* playerCombinedInfo{ nullptr };

    void ClassSetUp() override;
    void ClassTearDown() override;
    void SetUp(TestContext& testContext) override;

    void Tick(TestContext&) override {}
};

}
