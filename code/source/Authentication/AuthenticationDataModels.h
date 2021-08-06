#pragma once

#include <playfab/PFAuthenticationDataModels.h>
#include <Shared/SharedDataModels.h>
#include "BaseModel.h"

namespace PlayFab
{
namespace AuthenticationModels
{

// Authentication Classes
struct OpenIdIssuerInformation : public PFAuthenticationOpenIdIssuerInformation, public BaseModel
{
    OpenIdIssuerInformation();
    OpenIdIssuerInformation(const OpenIdIssuerInformation& src);
    OpenIdIssuerInformation(OpenIdIssuerInformation&& src);
    OpenIdIssuerInformation(const PFAuthenticationOpenIdIssuerInformation& src);
    OpenIdIssuerInformation& operator=(const OpenIdIssuerInformation&) = delete;
    ~OpenIdIssuerInformation() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authorizationUrl;
    String m_issuer;
    JsonObject m_jsonWebKeySet;
    String m_tokenUrl;
};

struct CreateOpenIdConnectionRequest : public PFAuthenticationCreateOpenIdConnectionRequest, public BaseModel
{
    CreateOpenIdConnectionRequest();
    CreateOpenIdConnectionRequest(const CreateOpenIdConnectionRequest& src);
    CreateOpenIdConnectionRequest(CreateOpenIdConnectionRequest&& src);
    CreateOpenIdConnectionRequest(const PFAuthenticationCreateOpenIdConnectionRequest& src);
    CreateOpenIdConnectionRequest& operator=(const CreateOpenIdConnectionRequest&) = delete;
    ~CreateOpenIdConnectionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_clientId;
    String m_clientSecret;
    String m_connectionId;
    StdExtra::optional<bool> m_ignoreNonce;
    String m_issuerDiscoveryUrl;
    StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
};

struct CreatePlayerSharedSecretRequest : public PFAuthenticationCreatePlayerSharedSecretRequest, public SerializableModel
{
    CreatePlayerSharedSecretRequest();
    CreatePlayerSharedSecretRequest(const CreatePlayerSharedSecretRequest& src);
    CreatePlayerSharedSecretRequest(CreatePlayerSharedSecretRequest&& src);
    CreatePlayerSharedSecretRequest(const PFAuthenticationCreatePlayerSharedSecretRequest& src);
    CreatePlayerSharedSecretRequest& operator=(const CreatePlayerSharedSecretRequest&) = delete;
    ~CreatePlayerSharedSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendlyName;
};

struct CreatePlayerSharedSecretResult : public PFAuthenticationCreatePlayerSharedSecretResult, public SerializableModel, public ApiResult
{
    CreatePlayerSharedSecretResult();
    CreatePlayerSharedSecretResult(const CreatePlayerSharedSecretResult& src);
    CreatePlayerSharedSecretResult(CreatePlayerSharedSecretResult&& src);
    CreatePlayerSharedSecretResult(const PFAuthenticationCreatePlayerSharedSecretResult& src);
    CreatePlayerSharedSecretResult& operator=(const CreatePlayerSharedSecretResult&) = delete;
    ~CreatePlayerSharedSecretResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_secretKey;
};

struct DeleteOpenIdConnectionRequest : public PFAuthenticationDeleteOpenIdConnectionRequest, public SerializableModel
{
    DeleteOpenIdConnectionRequest();
    DeleteOpenIdConnectionRequest(const DeleteOpenIdConnectionRequest& src);
    DeleteOpenIdConnectionRequest(DeleteOpenIdConnectionRequest&& src);
    DeleteOpenIdConnectionRequest(const PFAuthenticationDeleteOpenIdConnectionRequest& src);
    DeleteOpenIdConnectionRequest& operator=(const DeleteOpenIdConnectionRequest&) = delete;
    ~DeleteOpenIdConnectionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_connectionId;
};

struct DeletePlayerSharedSecretRequest : public PFAuthenticationDeletePlayerSharedSecretRequest, public SerializableModel
{
    DeletePlayerSharedSecretRequest();
    DeletePlayerSharedSecretRequest(const DeletePlayerSharedSecretRequest& src);
    DeletePlayerSharedSecretRequest(DeletePlayerSharedSecretRequest&& src);
    DeletePlayerSharedSecretRequest(const PFAuthenticationDeletePlayerSharedSecretRequest& src);
    DeletePlayerSharedSecretRequest& operator=(const DeletePlayerSharedSecretRequest&) = delete;
    ~DeletePlayerSharedSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_secretKey;
};

struct SharedSecret : public PFAuthenticationSharedSecret, public SerializableModel
{
    SharedSecret();
    SharedSecret(const SharedSecret& src);
    SharedSecret(SharedSecret&& src);
    SharedSecret(const PFAuthenticationSharedSecret& src);
    SharedSecret& operator=(const SharedSecret&) = delete;
    ~SharedSecret() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendlyName;
    String m_secretKey;
};

struct GetPlayerSharedSecretsResult : public PFAuthenticationGetPlayerSharedSecretsResult, public BaseModel, public ApiResult
{
    GetPlayerSharedSecretsResult();
    GetPlayerSharedSecretsResult(const GetPlayerSharedSecretsResult& src);
    GetPlayerSharedSecretsResult(GetPlayerSharedSecretsResult&& src);
    GetPlayerSharedSecretsResult(const PFAuthenticationGetPlayerSharedSecretsResult& src);
    GetPlayerSharedSecretsResult& operator=(const GetPlayerSharedSecretsResult&) = delete;
    ~GetPlayerSharedSecretsResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAuthenticationSharedSecret, SharedSecret> m_sharedSecrets;
};

struct GetPolicyRequest : public PFAuthenticationGetPolicyRequest, public SerializableModel
{
    GetPolicyRequest();
    GetPolicyRequest(const GetPolicyRequest& src);
    GetPolicyRequest(GetPolicyRequest&& src);
    GetPolicyRequest(const PFAuthenticationGetPolicyRequest& src);
    GetPolicyRequest& operator=(const GetPolicyRequest&) = delete;
    ~GetPolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_policyName;
};

struct ApiCondition : public PFAuthenticationApiCondition, public BaseModel
{
    ApiCondition();
    ApiCondition(const ApiCondition& src);
    ApiCondition(ApiCondition&& src);
    ApiCondition(const PFAuthenticationApiCondition& src);
    ApiCondition& operator=(const ApiCondition&) = delete;
    ~ApiCondition() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<PFAuthenticationConditionals> m_hasSignatureOrEncryption;
};

struct PermissionStatement : public PFAuthenticationPermissionStatement, public BaseModel
{
    PermissionStatement();
    PermissionStatement(const PermissionStatement& src);
    PermissionStatement(PermissionStatement&& src);
    PermissionStatement(const PFAuthenticationPermissionStatement& src);
    PermissionStatement& operator=(const PermissionStatement&) = delete;
    ~PermissionStatement() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_action;
    StdExtra::optional<ApiCondition> m_apiConditions;
    String m_comment;
    String m_principal;
    String m_resource;
};

struct GetPolicyResponse : public PFAuthenticationGetPolicyResponse, public BaseModel, public ApiResult
{
    GetPolicyResponse();
    GetPolicyResponse(const GetPolicyResponse& src);
    GetPolicyResponse(GetPolicyResponse&& src);
    GetPolicyResponse(const PFAuthenticationGetPolicyResponse& src);
    GetPolicyResponse& operator=(const GetPolicyResponse&) = delete;
    ~GetPolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_policyName;
    PointerArrayModel<PFAuthenticationPermissionStatement, PermissionStatement> m_statements;
};

struct OpenIdConnection : public PFAuthenticationOpenIdConnection, public BaseModel
{
    OpenIdConnection();
    OpenIdConnection(const OpenIdConnection& src);
    OpenIdConnection(OpenIdConnection&& src);
    OpenIdConnection(const PFAuthenticationOpenIdConnection& src);
    OpenIdConnection& operator=(const OpenIdConnection&) = delete;
    ~OpenIdConnection() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_clientId;
    String m_clientSecret;
    String m_connectionId;
    StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
};

struct ListOpenIdConnectionResponse : public PFAuthenticationListOpenIdConnectionResponse, public BaseModel, public ApiResult
{
    ListOpenIdConnectionResponse();
    ListOpenIdConnectionResponse(const ListOpenIdConnectionResponse& src);
    ListOpenIdConnectionResponse(ListOpenIdConnectionResponse&& src);
    ListOpenIdConnectionResponse(const PFAuthenticationListOpenIdConnectionResponse& src);
    ListOpenIdConnectionResponse& operator=(const ListOpenIdConnectionResponse&) = delete;
    ~ListOpenIdConnectionResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    PointerArrayModel<PFAuthenticationOpenIdConnection, OpenIdConnection> m_connections;
};

struct AdminSetPlayerSecretRequest : public PFAuthenticationAdminSetPlayerSecretRequest, public SerializableModel
{
    AdminSetPlayerSecretRequest();
    AdminSetPlayerSecretRequest(const AdminSetPlayerSecretRequest& src);
    AdminSetPlayerSecretRequest(AdminSetPlayerSecretRequest&& src);
    AdminSetPlayerSecretRequest(const PFAuthenticationAdminSetPlayerSecretRequest& src);
    AdminSetPlayerSecretRequest& operator=(const AdminSetPlayerSecretRequest&) = delete;
    ~AdminSetPlayerSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playerSecret;
    String m_playFabId;
};

struct UpdateOpenIdConnectionRequest : public PFAuthenticationUpdateOpenIdConnectionRequest, public BaseModel
{
    UpdateOpenIdConnectionRequest();
    UpdateOpenIdConnectionRequest(const UpdateOpenIdConnectionRequest& src);
    UpdateOpenIdConnectionRequest(UpdateOpenIdConnectionRequest&& src);
    UpdateOpenIdConnectionRequest(const PFAuthenticationUpdateOpenIdConnectionRequest& src);
    UpdateOpenIdConnectionRequest& operator=(const UpdateOpenIdConnectionRequest&) = delete;
    ~UpdateOpenIdConnectionRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_clientId;
    String m_clientSecret;
    String m_connectionId;
    String m_issuerDiscoveryUrl;
    StdExtra::optional<OpenIdIssuerInformation> m_issuerInformation;
};

struct UpdatePlayerSharedSecretRequest : public PFAuthenticationUpdatePlayerSharedSecretRequest, public SerializableModel
{
    UpdatePlayerSharedSecretRequest();
    UpdatePlayerSharedSecretRequest(const UpdatePlayerSharedSecretRequest& src);
    UpdatePlayerSharedSecretRequest(UpdatePlayerSharedSecretRequest&& src);
    UpdatePlayerSharedSecretRequest(const PFAuthenticationUpdatePlayerSharedSecretRequest& src);
    UpdatePlayerSharedSecretRequest& operator=(const UpdatePlayerSharedSecretRequest&) = delete;
    ~UpdatePlayerSharedSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_friendlyName;
    String m_secretKey;
};

struct UpdatePolicyRequest : public PFAuthenticationUpdatePolicyRequest, public BaseModel
{
    UpdatePolicyRequest();
    UpdatePolicyRequest(const UpdatePolicyRequest& src);
    UpdatePolicyRequest(UpdatePolicyRequest&& src);
    UpdatePolicyRequest(const PFAuthenticationUpdatePolicyRequest& src);
    UpdatePolicyRequest& operator=(const UpdatePolicyRequest&) = delete;
    ~UpdatePolicyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_policyName;
    PointerArrayModel<PFAuthenticationPermissionStatement, PermissionStatement> m_statements;
};

struct UpdatePolicyResponse : public PFAuthenticationUpdatePolicyResponse, public BaseModel, public ApiResult
{
    UpdatePolicyResponse();
    UpdatePolicyResponse(const UpdatePolicyResponse& src);
    UpdatePolicyResponse(UpdatePolicyResponse&& src);
    UpdatePolicyResponse(const PFAuthenticationUpdatePolicyResponse& src);
    UpdatePolicyResponse& operator=(const UpdatePolicyResponse&) = delete;
    ~UpdatePolicyResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_policyName;
    PointerArrayModel<PFAuthenticationPermissionStatement, PermissionStatement> m_statements;
};

struct GetPhotonAuthenticationTokenRequest : public PFAuthenticationGetPhotonAuthenticationTokenRequest, public SerializableModel
{
    GetPhotonAuthenticationTokenRequest();
    GetPhotonAuthenticationTokenRequest(const GetPhotonAuthenticationTokenRequest& src);
    GetPhotonAuthenticationTokenRequest(GetPhotonAuthenticationTokenRequest&& src);
    GetPhotonAuthenticationTokenRequest(const PFAuthenticationGetPhotonAuthenticationTokenRequest& src);
    GetPhotonAuthenticationTokenRequest& operator=(const GetPhotonAuthenticationTokenRequest&) = delete;
    ~GetPhotonAuthenticationTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_photonApplicationId;
};

struct GetPhotonAuthenticationTokenResult : public PFAuthenticationGetPhotonAuthenticationTokenResult, public SerializableModel, public ApiResult
{
    GetPhotonAuthenticationTokenResult();
    GetPhotonAuthenticationTokenResult(const GetPhotonAuthenticationTokenResult& src);
    GetPhotonAuthenticationTokenResult(GetPhotonAuthenticationTokenResult&& src);
    GetPhotonAuthenticationTokenResult(const PFAuthenticationGetPhotonAuthenticationTokenResult& src);
    GetPhotonAuthenticationTokenResult& operator=(const GetPhotonAuthenticationTokenResult&) = delete;
    ~GetPhotonAuthenticationTokenResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_photonCustomAuthenticationToken;
};

struct GetTitlePublicKeyRequest : public PFAuthenticationGetTitlePublicKeyRequest, public SerializableModel
{
    GetTitlePublicKeyRequest();
    GetTitlePublicKeyRequest(const GetTitlePublicKeyRequest& src);
    GetTitlePublicKeyRequest(GetTitlePublicKeyRequest&& src);
    GetTitlePublicKeyRequest(const PFAuthenticationGetTitlePublicKeyRequest& src);
    GetTitlePublicKeyRequest& operator=(const GetTitlePublicKeyRequest&) = delete;
    ~GetTitlePublicKeyRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_titleId;
    String m_titleSharedSecret;
};

struct GetTitlePublicKeyResult : public PFAuthenticationGetTitlePublicKeyResult, public SerializableModel, public ApiResult
{
    GetTitlePublicKeyResult();
    GetTitlePublicKeyResult(const GetTitlePublicKeyResult& src);
    GetTitlePublicKeyResult(GetTitlePublicKeyResult&& src);
    GetTitlePublicKeyResult(const PFAuthenticationGetTitlePublicKeyResult& src);
    GetTitlePublicKeyResult& operator=(const GetTitlePublicKeyResult&) = delete;
    ~GetTitlePublicKeyResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_rSAPublicKey;
};

struct LoginWithAndroidDeviceIDRequest : public PFAuthenticationLoginWithAndroidDeviceIDRequest, public BaseModel
{
    LoginWithAndroidDeviceIDRequest();
    LoginWithAndroidDeviceIDRequest(const LoginWithAndroidDeviceIDRequest& src);
    LoginWithAndroidDeviceIDRequest(LoginWithAndroidDeviceIDRequest&& src);
    LoginWithAndroidDeviceIDRequest(const PFAuthenticationLoginWithAndroidDeviceIDRequest& src);
    LoginWithAndroidDeviceIDRequest& operator=(const LoginWithAndroidDeviceIDRequest&) = delete;
    ~LoginWithAndroidDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_androidDevice;
    String m_androidDeviceId;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_OS;
    String m_playerSecret;
    String m_titleId;
};

struct EntityTokenResponse : public PFAuthenticationEntityTokenResponse, public BaseModel, public ApiResult
{
    EntityTokenResponse();
    EntityTokenResponse(const EntityTokenResponse& src);
    EntityTokenResponse(EntityTokenResponse&& src);
    EntityTokenResponse(const PFAuthenticationEntityTokenResponse& src);
    EntityTokenResponse& operator=(const EntityTokenResponse&) = delete;
    ~EntityTokenResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    String m_entityToken;
    StdExtra::optional<time_t> m_tokenExpiration;
};

struct UserSettings : public PFAuthenticationUserSettings, public SerializableModel
{
    UserSettings();
    UserSettings(const UserSettings&) = default;
    UserSettings(UserSettings&&) = default;
    UserSettings(const PFAuthenticationUserSettings& src);
    UserSettings& operator=(const UserSettings&) = delete;
    ~UserSettings() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
};

struct LoginResult : public BaseModel, public ApiResult
{
    LoginResult();
    LoginResult(const LoginResult& src);
    LoginResult(LoginResult&& src);
    LoginResult& operator=(const LoginResult&) = delete;
    ~LoginResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

public:
    StdExtra::optional<EntityTokenResponse> entityToken;
    StdExtra::optional<GetPlayerCombinedInfoResultPayload> infoResultPayload;
    StdExtra::optional<time_t> lastLoginTime;
    bool newlyCreated;
    String playFabId;
    String sessionTicket;
    StdExtra::optional<UserSettings> settingsForUser;
    StdExtra::optional<TreatmentAssignment> treatmentAssignment;
};

struct LoginWithAppleRequest : public PFAuthenticationLoginWithAppleRequest, public BaseModel
{
    LoginWithAppleRequest();
    LoginWithAppleRequest(const LoginWithAppleRequest& src);
    LoginWithAppleRequest(LoginWithAppleRequest&& src);
    LoginWithAppleRequest(const PFAuthenticationLoginWithAppleRequest& src);
    LoginWithAppleRequest& operator=(const LoginWithAppleRequest&) = delete;
    ~LoginWithAppleRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_identityToken;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithCustomIDRequest : public PFAuthenticationLoginWithCustomIDRequest, public BaseModel
{
    LoginWithCustomIDRequest();
    LoginWithCustomIDRequest(const LoginWithCustomIDRequest& src);
    LoginWithCustomIDRequest(LoginWithCustomIDRequest&& src);
    LoginWithCustomIDRequest(const PFAuthenticationLoginWithCustomIDRequest& src);
    LoginWithCustomIDRequest& operator=(const LoginWithCustomIDRequest&) = delete;
    ~LoginWithCustomIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    String m_customId;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithEmailAddressRequest : public PFAuthenticationLoginWithEmailAddressRequest, public BaseModel
{
    LoginWithEmailAddressRequest();
    LoginWithEmailAddressRequest(const LoginWithEmailAddressRequest& src);
    LoginWithEmailAddressRequest(LoginWithEmailAddressRequest&& src);
    LoginWithEmailAddressRequest(const PFAuthenticationLoginWithEmailAddressRequest& src);
    LoginWithEmailAddressRequest& operator=(const LoginWithEmailAddressRequest&) = delete;
    ~LoginWithEmailAddressRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_email;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_password;
    String m_titleId;
};

struct LoginWithFacebookRequest : public PFAuthenticationLoginWithFacebookRequest, public BaseModel
{
    LoginWithFacebookRequest();
    LoginWithFacebookRequest(const LoginWithFacebookRequest& src);
    LoginWithFacebookRequest(LoginWithFacebookRequest&& src);
    LoginWithFacebookRequest(const PFAuthenticationLoginWithFacebookRequest& src);
    LoginWithFacebookRequest& operator=(const LoginWithFacebookRequest&) = delete;
    ~LoginWithFacebookRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithFacebookInstantGamesIdRequest : public PFAuthenticationLoginWithFacebookInstantGamesIdRequest, public BaseModel
{
    LoginWithFacebookInstantGamesIdRequest();
    LoginWithFacebookInstantGamesIdRequest(const LoginWithFacebookInstantGamesIdRequest& src);
    LoginWithFacebookInstantGamesIdRequest(LoginWithFacebookInstantGamesIdRequest&& src);
    LoginWithFacebookInstantGamesIdRequest(const PFAuthenticationLoginWithFacebookInstantGamesIdRequest& src);
    LoginWithFacebookInstantGamesIdRequest& operator=(const LoginWithFacebookInstantGamesIdRequest&) = delete;
    ~LoginWithFacebookInstantGamesIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_facebookInstantGamesSignature;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithGameCenterRequest : public PFAuthenticationLoginWithGameCenterRequest, public BaseModel
{
    LoginWithGameCenterRequest();
    LoginWithGameCenterRequest(const LoginWithGameCenterRequest& src);
    LoginWithGameCenterRequest(LoginWithGameCenterRequest&& src);
    LoginWithGameCenterRequest(const PFAuthenticationLoginWithGameCenterRequest& src);
    LoginWithGameCenterRequest& operator=(const LoginWithGameCenterRequest&) = delete;
    ~LoginWithGameCenterRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerId;
    String m_playerSecret;
    String m_publicKeyUrl;
    String m_salt;
    String m_signature;
    String m_timestamp;
    String m_titleId;
};

struct LoginWithGoogleAccountRequest : public PFAuthenticationLoginWithGoogleAccountRequest, public BaseModel
{
    LoginWithGoogleAccountRequest();
    LoginWithGoogleAccountRequest(const LoginWithGoogleAccountRequest& src);
    LoginWithGoogleAccountRequest(LoginWithGoogleAccountRequest&& src);
    LoginWithGoogleAccountRequest(const PFAuthenticationLoginWithGoogleAccountRequest& src);
    LoginWithGoogleAccountRequest& operator=(const LoginWithGoogleAccountRequest&) = delete;
    ~LoginWithGoogleAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_serverAuthCode;
    String m_titleId;
};

struct LoginWithIOSDeviceIDRequest : public PFAuthenticationLoginWithIOSDeviceIDRequest, public BaseModel
{
    LoginWithIOSDeviceIDRequest();
    LoginWithIOSDeviceIDRequest(const LoginWithIOSDeviceIDRequest& src);
    LoginWithIOSDeviceIDRequest(LoginWithIOSDeviceIDRequest&& src);
    LoginWithIOSDeviceIDRequest(const PFAuthenticationLoginWithIOSDeviceIDRequest& src);
    LoginWithIOSDeviceIDRequest& operator=(const LoginWithIOSDeviceIDRequest&) = delete;
    ~LoginWithIOSDeviceIDRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_deviceId;
    String m_deviceModel;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_OS;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithKongregateRequest : public PFAuthenticationLoginWithKongregateRequest, public BaseModel
{
    LoginWithKongregateRequest();
    LoginWithKongregateRequest(const LoginWithKongregateRequest& src);
    LoginWithKongregateRequest(LoginWithKongregateRequest&& src);
    LoginWithKongregateRequest(const PFAuthenticationLoginWithKongregateRequest& src);
    LoginWithKongregateRequest& operator=(const LoginWithKongregateRequest&) = delete;
    ~LoginWithKongregateRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authTicket;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_kongregateId;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithNintendoServiceAccountRequest : public PFAuthenticationLoginWithNintendoServiceAccountRequest, public BaseModel
{
    LoginWithNintendoServiceAccountRequest();
    LoginWithNintendoServiceAccountRequest(const LoginWithNintendoServiceAccountRequest& src);
    LoginWithNintendoServiceAccountRequest(LoginWithNintendoServiceAccountRequest&& src);
    LoginWithNintendoServiceAccountRequest(const PFAuthenticationLoginWithNintendoServiceAccountRequest& src);
    LoginWithNintendoServiceAccountRequest& operator=(const LoginWithNintendoServiceAccountRequest&) = delete;
    ~LoginWithNintendoServiceAccountRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_identityToken;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithNintendoSwitchDeviceIdRequest : public PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest, public BaseModel
{
    LoginWithNintendoSwitchDeviceIdRequest();
    LoginWithNintendoSwitchDeviceIdRequest(const LoginWithNintendoSwitchDeviceIdRequest& src);
    LoginWithNintendoSwitchDeviceIdRequest(LoginWithNintendoSwitchDeviceIdRequest&& src);
    LoginWithNintendoSwitchDeviceIdRequest(const PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest& src);
    LoginWithNintendoSwitchDeviceIdRequest& operator=(const LoginWithNintendoSwitchDeviceIdRequest&) = delete;
    ~LoginWithNintendoSwitchDeviceIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_nintendoSwitchDeviceId;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithOpenIdConnectRequest : public PFAuthenticationLoginWithOpenIdConnectRequest, public BaseModel
{
    LoginWithOpenIdConnectRequest();
    LoginWithOpenIdConnectRequest(const LoginWithOpenIdConnectRequest& src);
    LoginWithOpenIdConnectRequest(LoginWithOpenIdConnectRequest&& src);
    LoginWithOpenIdConnectRequest(const PFAuthenticationLoginWithOpenIdConnectRequest& src);
    LoginWithOpenIdConnectRequest& operator=(const LoginWithOpenIdConnectRequest&) = delete;
    ~LoginWithOpenIdConnectRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_connectionId;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    String m_idToken;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct LoginWithPlayFabRequest : public PFAuthenticationLoginWithPlayFabRequest, public BaseModel
{
    LoginWithPlayFabRequest();
    LoginWithPlayFabRequest(const LoginWithPlayFabRequest& src);
    LoginWithPlayFabRequest(LoginWithPlayFabRequest&& src);
    LoginWithPlayFabRequest(const PFAuthenticationLoginWithPlayFabRequest& src);
    LoginWithPlayFabRequest& operator=(const LoginWithPlayFabRequest&) = delete;
    ~LoginWithPlayFabRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_password;
    String m_titleId;
    String m_username;
};

struct LoginWithPSNRequest : public PFAuthenticationLoginWithPSNRequest, public BaseModel
{
    LoginWithPSNRequest();
    LoginWithPSNRequest(const LoginWithPSNRequest& src);
    LoginWithPSNRequest(LoginWithPSNRequest&& src);
    LoginWithPSNRequest(const PFAuthenticationLoginWithPSNRequest& src);
    LoginWithPSNRequest& operator=(const LoginWithPSNRequest&) = delete;
    ~LoginWithPSNRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_authCode;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    StdExtra::optional<int32_t> m_issuerId;
    String m_playerSecret;
    String m_redirectUri;
    String m_titleId;
};

struct LoginWithSteamRequest : public PFAuthenticationLoginWithSteamRequest, public BaseModel
{
    LoginWithSteamRequest();
    LoginWithSteamRequest(const LoginWithSteamRequest& src);
    LoginWithSteamRequest(LoginWithSteamRequest&& src);
    LoginWithSteamRequest(const PFAuthenticationLoginWithSteamRequest& src);
    LoginWithSteamRequest& operator=(const LoginWithSteamRequest&) = delete;
    ~LoginWithSteamRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_steamTicket;
    String m_titleId;
};

struct LoginWithTwitchRequest : public PFAuthenticationLoginWithTwitchRequest, public BaseModel
{
    LoginWithTwitchRequest();
    LoginWithTwitchRequest(const LoginWithTwitchRequest& src);
    LoginWithTwitchRequest(LoginWithTwitchRequest&& src);
    LoginWithTwitchRequest(const PFAuthenticationLoginWithTwitchRequest& src);
    LoginWithTwitchRequest& operator=(const LoginWithTwitchRequest&) = delete;
    ~LoginWithTwitchRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    String m_accessToken;
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
};

struct ClientLoginWithXboxRequest : public PFAuthenticationClientLoginWithXboxRequest, public BaseModel
{
    ClientLoginWithXboxRequest();
    ClientLoginWithXboxRequest(const ClientLoginWithXboxRequest& src);
    ClientLoginWithXboxRequest(ClientLoginWithXboxRequest&& src);
    ClientLoginWithXboxRequest(const PFAuthenticationClientLoginWithXboxRequest& src);
    ClientLoginWithXboxRequest& operator=(const ClientLoginWithXboxRequest&) = delete;
    ~ClientLoginWithXboxRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_titleId;
    String m_xboxToken;
};

struct RegisterPlayFabUserRequest : public PFAuthenticationRegisterPlayFabUserRequest, public BaseModel
{
    RegisterPlayFabUserRequest();
    RegisterPlayFabUserRequest(const RegisterPlayFabUserRequest& src);
    RegisterPlayFabUserRequest(RegisterPlayFabUserRequest&& src);
    RegisterPlayFabUserRequest(const PFAuthenticationRegisterPlayFabUserRequest& src);
    RegisterPlayFabUserRequest& operator=(const RegisterPlayFabUserRequest&) = delete;
    ~RegisterPlayFabUserRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_displayName;
    String m_email;
    String m_encryptedRequest;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_password;
    String m_playerSecret;
    StdExtra::optional<bool> m_requireBothUsernameAndEmail;
    String m_titleId;
    String m_username;
};

struct RegisterPlayFabUserResult : public BaseModel, public ApiResult
{
    RegisterPlayFabUserResult();
    RegisterPlayFabUserResult(const RegisterPlayFabUserResult& src);
    RegisterPlayFabUserResult(RegisterPlayFabUserResult&& src);
    RegisterPlayFabUserResult& operator=(const RegisterPlayFabUserResult&) = delete;
    ~RegisterPlayFabUserResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

public:
    StdExtra::optional<EntityTokenResponse> entityToken;
    String playFabId;
    String sessionTicket;
    StdExtra::optional<UserSettings> settingsForUser;
    String username;
};

struct ClientSetPlayerSecretRequest : public PFAuthenticationClientSetPlayerSecretRequest, public SerializableModel
{
    ClientSetPlayerSecretRequest();
    ClientSetPlayerSecretRequest(const ClientSetPlayerSecretRequest& src);
    ClientSetPlayerSecretRequest(ClientSetPlayerSecretRequest&& src);
    ClientSetPlayerSecretRequest(const PFAuthenticationClientSetPlayerSecretRequest& src);
    ClientSetPlayerSecretRequest& operator=(const ClientSetPlayerSecretRequest&) = delete;
    ~ClientSetPlayerSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_encryptedRequest;
    String m_playerSecret;
};

struct AuthenticateSessionTicketRequest : public PFAuthenticationAuthenticateSessionTicketRequest, public SerializableModel
{
    AuthenticateSessionTicketRequest();
    AuthenticateSessionTicketRequest(const AuthenticateSessionTicketRequest& src);
    AuthenticateSessionTicketRequest(AuthenticateSessionTicketRequest&& src);
    AuthenticateSessionTicketRequest(const PFAuthenticationAuthenticateSessionTicketRequest& src);
    AuthenticateSessionTicketRequest& operator=(const AuthenticateSessionTicketRequest&) = delete;
    ~AuthenticateSessionTicketRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_sessionTicket;
};

struct AuthenticateSessionTicketResult : public PFAuthenticationAuthenticateSessionTicketResult, public BaseModel, public ApiResult
{
    AuthenticateSessionTicketResult();
    AuthenticateSessionTicketResult(const AuthenticateSessionTicketResult& src);
    AuthenticateSessionTicketResult(AuthenticateSessionTicketResult&& src);
    AuthenticateSessionTicketResult(const PFAuthenticationAuthenticateSessionTicketResult& src);
    AuthenticateSessionTicketResult& operator=(const AuthenticateSessionTicketResult&) = delete;
    ~AuthenticateSessionTicketResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_isSessionTicketExpired;
    StdExtra::optional<UserAccountInfo> m_userInfo;
};

struct LoginWithServerCustomIdRequest : public PFAuthenticationLoginWithServerCustomIdRequest, public BaseModel
{
    LoginWithServerCustomIdRequest();
    LoginWithServerCustomIdRequest(const LoginWithServerCustomIdRequest& src);
    LoginWithServerCustomIdRequest(LoginWithServerCustomIdRequest&& src);
    LoginWithServerCustomIdRequest(const PFAuthenticationLoginWithServerCustomIdRequest& src);
    LoginWithServerCustomIdRequest& operator=(const LoginWithServerCustomIdRequest&) = delete;
    ~LoginWithServerCustomIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_playerSecret;
    String m_serverCustomId;
};

struct ServerLoginResult : public BaseModel, public ApiResult
{
    ServerLoginResult();
    ServerLoginResult(const ServerLoginResult& src);
    ServerLoginResult(ServerLoginResult&& src);
    ServerLoginResult& operator=(const ServerLoginResult&) = delete;
    ~ServerLoginResult() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

public:
    StdExtra::optional<EntityTokenResponse> entityToken;
    StdExtra::optional<GetPlayerCombinedInfoResultPayload> infoResultPayload;
    StdExtra::optional<time_t> lastLoginTime;
    bool newlyCreated;
    String playFabId;
    String sessionTicket;
    StdExtra::optional<UserSettings> settingsForUser;
    StdExtra::optional<TreatmentAssignment> treatmentAssignment;
};

struct LoginWithSteamIdRequest : public PFAuthenticationLoginWithSteamIdRequest, public BaseModel
{
    LoginWithSteamIdRequest();
    LoginWithSteamIdRequest(const LoginWithSteamIdRequest& src);
    LoginWithSteamIdRequest(LoginWithSteamIdRequest&& src);
    LoginWithSteamIdRequest(const PFAuthenticationLoginWithSteamIdRequest& src);
    LoginWithSteamIdRequest& operator=(const LoginWithSteamIdRequest&) = delete;
    ~LoginWithSteamIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_steamId;
};

struct ServerLoginWithXboxRequest : public PFAuthenticationServerLoginWithXboxRequest, public BaseModel
{
    ServerLoginWithXboxRequest();
    ServerLoginWithXboxRequest(const ServerLoginWithXboxRequest& src);
    ServerLoginWithXboxRequest(ServerLoginWithXboxRequest&& src);
    ServerLoginWithXboxRequest(const PFAuthenticationServerLoginWithXboxRequest& src);
    ServerLoginWithXboxRequest& operator=(const ServerLoginWithXboxRequest&) = delete;
    ~ServerLoginWithXboxRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_xboxToken;
};

struct LoginWithXboxIdRequest : public PFAuthenticationLoginWithXboxIdRequest, public BaseModel
{
    LoginWithXboxIdRequest();
    LoginWithXboxIdRequest(const LoginWithXboxIdRequest& src);
    LoginWithXboxIdRequest(LoginWithXboxIdRequest&& src);
    LoginWithXboxIdRequest(const PFAuthenticationLoginWithXboxIdRequest& src);
    LoginWithXboxIdRequest& operator=(const LoginWithXboxIdRequest&) = delete;
    ~LoginWithXboxIdRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<bool> m_createAccount;
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<GetPlayerCombinedInfoRequestParams> m_infoRequestParameters;
    String m_sandbox;
    String m_xboxId;
};

struct ServerSetPlayerSecretRequest : public PFAuthenticationServerSetPlayerSecretRequest, public SerializableModel
{
    ServerSetPlayerSecretRequest();
    ServerSetPlayerSecretRequest(const ServerSetPlayerSecretRequest& src);
    ServerSetPlayerSecretRequest(ServerSetPlayerSecretRequest&& src);
    ServerSetPlayerSecretRequest(const PFAuthenticationServerSetPlayerSecretRequest& src);
    ServerSetPlayerSecretRequest& operator=(const ServerSetPlayerSecretRequest&) = delete;
    ~ServerSetPlayerSecretRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

    size_t SerializedSize() const override;
    void Serialize(void* buffer, size_t bufferSize) const override;

private:
    String m_playerSecret;
    String m_playFabId;
};

struct GetEntityTokenRequest : public PFAuthenticationGetEntityTokenRequest, public BaseModel
{
    GetEntityTokenRequest();
    GetEntityTokenRequest(const GetEntityTokenRequest& src);
    GetEntityTokenRequest(GetEntityTokenRequest&& src);
    GetEntityTokenRequest(const PFAuthenticationGetEntityTokenRequest& src);
    GetEntityTokenRequest& operator=(const GetEntityTokenRequest&) = delete;
    ~GetEntityTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    StdExtra::optional<EntityKey> m_entity;
};

struct GetEntityTokenResponse : public BaseModel, public ApiResult
{
    GetEntityTokenResponse();
    GetEntityTokenResponse(const GetEntityTokenResponse& src);
    GetEntityTokenResponse(GetEntityTokenResponse&& src);
    GetEntityTokenResponse& operator=(const GetEntityTokenResponse&) = delete;
    ~GetEntityTokenResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

public:
    StdExtra::optional<EntityKey> entity;
    String entityToken;
    StdExtra::optional<time_t> tokenExpiration;
};

struct ValidateEntityTokenRequest : public PFAuthenticationValidateEntityTokenRequest, public BaseModel
{
    ValidateEntityTokenRequest();
    ValidateEntityTokenRequest(const ValidateEntityTokenRequest& src);
    ValidateEntityTokenRequest(ValidateEntityTokenRequest&& src);
    ValidateEntityTokenRequest(const PFAuthenticationValidateEntityTokenRequest& src);
    ValidateEntityTokenRequest& operator=(const ValidateEntityTokenRequest&) = delete;
    ~ValidateEntityTokenRequest() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    AssociativeArrayModel<PFStringDictionaryEntry, String> m_customTags;
    String m_entityToken;
};

struct ValidateEntityTokenResponse : public PFAuthenticationValidateEntityTokenResponse, public BaseModel, public ApiResult
{
    ValidateEntityTokenResponse();
    ValidateEntityTokenResponse(const ValidateEntityTokenResponse& src);
    ValidateEntityTokenResponse(ValidateEntityTokenResponse&& src);
    ValidateEntityTokenResponse(const PFAuthenticationValidateEntityTokenResponse& src);
    ValidateEntityTokenResponse& operator=(const ValidateEntityTokenResponse&) = delete;
    ~ValidateEntityTokenResponse() = default;

    void FromJson(const JsonValue& input) override;
    JsonValue ToJson() const override;

private:
    StdExtra::optional<EntityKey> m_entity;
    StdExtra::optional<PFAuthenticationIdentifiedDeviceType> m_identifiedDeviceType;
    StdExtra::optional<PFLoginIdentityProvider> m_identityProvider;
    StdExtra::optional<EntityLineage> m_lineage;
};

} // namespace AuthenticationModels

namespace JsonUtils
{
// Serialization methods for public models

template<> inline JsonValue ToJson<>(const PFAuthenticationOpenIdIssuerInformation& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationCreateOpenIdConnectionRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationCreatePlayerSharedSecretRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationCreatePlayerSharedSecretResult& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationDeleteOpenIdConnectionRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationDeletePlayerSharedSecretRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationSharedSecret& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetPlayerSharedSecretsResult& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetPolicyRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationApiCondition& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationPermissionStatement& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetPolicyResponse& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationOpenIdConnection& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationListOpenIdConnectionResponse& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationAdminSetPlayerSecretRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationUpdateOpenIdConnectionRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationUpdatePlayerSharedSecretRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationUpdatePolicyRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationUpdatePolicyResponse& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetPhotonAuthenticationTokenRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetPhotonAuthenticationTokenResult& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetTitlePublicKeyRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetTitlePublicKeyResult& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithAndroidDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationEntityTokenResponse& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationUserSettings& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithAppleRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithCustomIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithEmailAddressRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithFacebookRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithFacebookInstantGamesIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithGameCenterRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithGoogleAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithIOSDeviceIDRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithKongregateRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithNintendoServiceAccountRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithOpenIdConnectRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithPlayFabRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithPSNRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithSteamRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithTwitchRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationClientLoginWithXboxRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationRegisterPlayFabUserRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationClientSetPlayerSecretRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationAuthenticateSessionTicketRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationAuthenticateSessionTicketResult& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithServerCustomIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithSteamIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationServerLoginWithXboxRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationLoginWithXboxIdRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationServerSetPlayerSecretRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationGetEntityTokenRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationValidateEntityTokenRequest& input);
template<> inline JsonValue ToJson<>(const PFAuthenticationValidateEntityTokenResponse& input);
} // namespace JsonUtils

// EnumRange definitions used for Enum (de)serialization
} // namespace PlayFab
