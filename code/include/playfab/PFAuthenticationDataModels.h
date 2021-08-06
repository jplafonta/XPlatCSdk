// Copyright (c) Microsoft Corporation
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#if !defined(__cplusplus)
#error C++11 required
#endif

#pragma once

#include <playfab/PFSharedDataModels.h>

#if HC_PLATFORM == HC_PLATFORM_GDK
#include <XUser.h>
#endif

extern "C"
{

#pragma push_macro("IN")
#undef IN

/// <summary>
/// Conditionals enum.
/// </summary>
enum class PFAuthenticationConditionals : uint32_t
{
    Any,
    True,
    False
};

/// <summary>
/// IdentifiedDeviceType enum.
/// </summary>
enum class PFAuthenticationIdentifiedDeviceType : uint32_t
{
    Unknown,
    XboxOne,
    Scarlett
};

/// <summary>
/// PFAuthenticationOpenIdIssuerInformation data model.
/// </summary>
typedef struct PFAuthenticationOpenIdIssuerInformation
{
    /// <summary>
    /// Authorization endpoint URL to direct users to for signin.
    /// </summary>
    const char* authorizationUrl;

    /// <summary>
    /// The URL of the issuer of the tokens. This must match the exact URL of the issuer field in tokens.
    /// </summary>
    const char* issuer;

    /// <summary>
    /// JSON Web Key Set for validating the signature of tokens.
    /// </summary>
    PFJsonObject jsonWebKeySet;

    /// <summary>
    /// Token endpoint URL for code verification.
    /// </summary>
    const char* tokenUrl;

} PFAuthenticationOpenIdIssuerInformation;

/// <summary>
/// PFAuthenticationCreateOpenIdConnectionRequest data model.
/// </summary>
typedef struct PFAuthenticationCreateOpenIdConnectionRequest
{
    /// <summary>
    /// The client ID given by the ID provider.
    /// </summary>
    const char* clientId;

    /// <summary>
    /// The client secret given by the ID provider.
    /// </summary>
    const char* clientSecret;

    /// <summary>
    /// A name for the connection that identifies it within the title.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) Ignore 'nonce' claim in identity tokens.
    /// </summary>
    bool const* ignoreNonce;

    /// <summary>
    /// (Optional) The discovery document URL to read issuer information from. This must be the absolute
    /// URL to the JSON OpenId Configuration document and must be accessible from the internet. If you
    /// don't know it, try your issuer URL followed by "/.well-known/openid-configuration". For example,
    /// if the issuer is https://example.com, try https://example.com/.well-known/openid-configuration.
    /// </summary>
    const char* issuerDiscoveryUrl;

    /// <summary>
    /// (Optional) Manually specified information for an OpenID Connect issuer.
    /// </summary>
    PFAuthenticationOpenIdIssuerInformation const* issuerInformation;

} PFAuthenticationCreateOpenIdConnectionRequest;

/// <summary>
/// PFAuthenticationCreatePlayerSharedSecretRequest data model. Player Shared Secret Keys are used for
/// the call to Client/GetTitlePublicKey, which exchanges the shared secret for an RSA CSP blob to be
/// used to encrypt the payload of account creation requests when that API requires a signature header.
/// </summary>
typedef struct PFAuthenticationCreatePlayerSharedSecretRequest
{
    /// <summary>
    /// (Optional) Friendly name for this key.
    /// </summary>
    const char* friendlyName;

} PFAuthenticationCreatePlayerSharedSecretRequest;

/// <summary>
/// PFAuthenticationCreatePlayerSharedSecretResult data model.
/// </summary>
typedef struct PFAuthenticationCreatePlayerSharedSecretResult
{
    /// <summary>
    /// (Optional) The player shared secret to use when calling Client/GetTitlePublicKey.
    /// </summary>
    const char* secretKey;

} PFAuthenticationCreatePlayerSharedSecretResult;

/// <summary>
/// PFAuthenticationDeleteOpenIdConnectionRequest data model.
/// </summary>
typedef struct PFAuthenticationDeleteOpenIdConnectionRequest
{
    /// <summary>
    /// Unique name of the connection.
    /// </summary>
    const char* connectionId;

} PFAuthenticationDeleteOpenIdConnectionRequest;

/// <summary>
/// PFAuthenticationDeletePlayerSharedSecretRequest data model. Player Shared Secret Keys are used for
/// the call to Client/GetTitlePublicKey, which exchanges the shared secret for an RSA CSP blob to be
/// used to encrypt the payload of account creation requests when that API requires a signature header.
/// </summary>
typedef struct PFAuthenticationDeletePlayerSharedSecretRequest
{
    /// <summary>
    /// (Optional) The shared secret key to delete.
    /// </summary>
    const char* secretKey;

} PFAuthenticationDeletePlayerSharedSecretRequest;

/// <summary>
/// PFAuthenticationSharedSecret data model.
/// </summary>
typedef struct PFAuthenticationSharedSecret
{
    /// <summary>
    /// Flag to indicate if this key is disabled.
    /// </summary>
    bool disabled;

    /// <summary>
    /// (Optional) Friendly name for this key.
    /// </summary>
    const char* friendlyName;

    /// <summary>
    /// (Optional) The player shared secret to use when calling Client/GetTitlePublicKey.
    /// </summary>
    const char* secretKey;

} PFAuthenticationSharedSecret;

/// <summary>
/// PFAuthenticationGetPlayerSharedSecretsResult data model.
/// </summary>
typedef struct PFAuthenticationGetPlayerSharedSecretsResult
{
    /// <summary>
    /// (Optional) The player shared secret to use when calling Client/GetTitlePublicKey.
    /// </summary>
    PFAuthenticationSharedSecret const* const* sharedSecrets;

    /// <summary>
    /// Count of sharedSecrets
    /// </summary>
    uint32_t sharedSecretsCount;

} PFAuthenticationGetPlayerSharedSecretsResult;

/// <summary>
/// PFAuthenticationGetPolicyRequest data model. Views the requested policy. Today, the only supported
/// policy is 'ApiPolicy'.
/// </summary>
typedef struct PFAuthenticationGetPolicyRequest
{
    /// <summary>
    /// (Optional) The name of the policy to read. Only supported name is 'ApiPolicy'.
    /// </summary>
    const char* policyName;

} PFAuthenticationGetPolicyRequest;

/// <summary>
/// PFAuthenticationApiCondition data model.
/// </summary>
typedef struct PFAuthenticationApiCondition
{
    /// <summary>
    /// (Optional) Require that API calls contain an RSA encrypted payload or signed headers.
    /// </summary>
    PFAuthenticationConditionals const* hasSignatureOrEncryption;

} PFAuthenticationApiCondition;

/// <summary>
/// PFAuthenticationPermissionStatement data model.
/// </summary>
typedef struct PFAuthenticationPermissionStatement
{
    /// <summary>
    /// The action this statement effects. The only supported action is 'Execute'.
    /// </summary>
    const char* action;

    /// <summary>
    /// (Optional) Additional conditions to be applied for API Resources.
    /// </summary>
    PFAuthenticationApiCondition const* apiConditions;

    /// <summary>
    /// (Optional) A comment about the statement. Intended solely for bookkeeping and debugging.
    /// </summary>
    const char* comment;

    /// <summary>
    /// The effect this statement will have. It could be either Allow or Deny.
    /// </summary>
    PFEffectType effect;

    /// <summary>
    /// The principal this statement will effect. The only supported principal is '*'.
    /// </summary>
    const char* principal;

    /// <summary>
    /// The resource this statements effects. The only supported resources look like 'pfrn:api--*' for
    /// all apis, or 'pfrn:api--/Client/ConfirmPurchase' for specific apis.
    /// </summary>
    const char* resource;

} PFAuthenticationPermissionStatement;

/// <summary>
/// PFAuthenticationGetPolicyResponse data model.
/// </summary>
typedef struct PFAuthenticationGetPolicyResponse
{
    /// <summary>
    /// (Optional) The name of the policy read.
    /// </summary>
    const char* policyName;

    /// <summary>
    /// Policy version.
    /// </summary>
    int32_t policyVersion;

    /// <summary>
    /// (Optional) The statements in the requested policy.
    /// </summary>
    PFAuthenticationPermissionStatement const* const* statements;

    /// <summary>
    /// Count of statements
    /// </summary>
    uint32_t statementsCount;

} PFAuthenticationGetPolicyResponse;

/// <summary>
/// PFAuthenticationOpenIdConnection data model.
/// </summary>
typedef struct PFAuthenticationOpenIdConnection
{
    /// <summary>
    /// (Optional) The client ID given by the ID provider.
    /// </summary>
    const char* clientId;

    /// <summary>
    /// (Optional) The client secret given by the ID provider.
    /// </summary>
    const char* clientSecret;

    /// <summary>
    /// (Optional) A name for the connection to identify it within the title.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// Shows if data about the connection will be loaded from the issuer's discovery document.
    /// </summary>
    bool discoverConfiguration;

    /// <summary>
    /// (Optional) Information for an OpenID Connect provider.
    /// </summary>
    PFAuthenticationOpenIdIssuerInformation const* issuerInformation;

} PFAuthenticationOpenIdConnection;

/// <summary>
/// PFAuthenticationListOpenIdConnectionResponse data model.
/// </summary>
typedef struct PFAuthenticationListOpenIdConnectionResponse
{
    /// <summary>
    /// (Optional) The list of Open ID Connections.
    /// </summary>
    PFAuthenticationOpenIdConnection const* const* connections;

    /// <summary>
    /// Count of connections
    /// </summary>
    uint32_t connectionsCount;

} PFAuthenticationListOpenIdConnectionResponse;

/// <summary>
/// PFAuthenticationAdminSetPlayerSecretRequest data model. APIs that require signatures require that
/// the player have a configured Player Secret Key that is used to sign all requests. Players that don't
/// have a secret will be blocked from making API calls until it is configured. To create a signature
/// header add a SHA256 hashed string containing UTF8 encoded JSON body as it will be sent to the server,
/// the current time in UTC formatted to ISO 8601, and the players secret formatted as 'body.date.secret'.
/// Place the resulting hash into the header X-PlayFab-Signature, along with a header X-PlayFab-Timestamp
/// of the same UTC timestamp used in the signature.
/// </summary>
typedef struct PFAuthenticationAdminSetPlayerSecretRequest
{
    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PFAuthenticationAdminSetPlayerSecretRequest;

/// <summary>
/// PFAuthenticationUpdateOpenIdConnectionRequest data model.
/// </summary>
typedef struct PFAuthenticationUpdateOpenIdConnectionRequest
{
    /// <summary>
    /// (Optional) The client ID given by the ID provider.
    /// </summary>
    const char* clientId;

    /// <summary>
    /// (Optional) The client secret given by the ID provider.
    /// </summary>
    const char* clientSecret;

    /// <summary>
    /// A name for the connection that identifies it within the title.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) The issuer URL or discovery document URL to read issuer information from.
    /// </summary>
    const char* issuerDiscoveryUrl;

    /// <summary>
    /// (Optional) Manually specified information for an OpenID Connect issuer.
    /// </summary>
    PFAuthenticationOpenIdIssuerInformation const* issuerInformation;

} PFAuthenticationUpdateOpenIdConnectionRequest;

/// <summary>
/// PFAuthenticationUpdatePlayerSharedSecretRequest data model. Player Shared Secret Keys are used for
/// the call to Client/GetTitlePublicKey, which exchanges the shared secret for an RSA CSP blob to be
/// used to encrypt the payload of account creation requests when that API requires a signature header.
/// </summary>
typedef struct PFAuthenticationUpdatePlayerSharedSecretRequest
{
    /// <summary>
    /// Disable or Enable this key.
    /// </summary>
    bool disabled;

    /// <summary>
    /// (Optional) Friendly name for this key.
    /// </summary>
    const char* friendlyName;

    /// <summary>
    /// (Optional) The shared secret key to update.
    /// </summary>
    const char* secretKey;

} PFAuthenticationUpdatePlayerSharedSecretRequest;

/// <summary>
/// PFAuthenticationUpdatePolicyRequest data model. Updates permissions for your title. Policies affect
/// what is allowed to happen on your title. Your policy is a collection of statements that, together,
/// govern particular area for your title. Today, the only allowed policy is called 'ApiPolicy' and it
/// governs what API calls are allowed. To verify that you have the latest version always download the
/// current policy from GetPolicy before uploading a new policy. PlayFab updates the base policy periodically
/// and will automatically apply it to the uploaded policy. Overwriting the combined policy blindly may
/// result in unexpected API errors.
/// </summary>
typedef struct PFAuthenticationUpdatePolicyRequest
{
    /// <summary>
    /// Whether to overwrite or append to the existing policy.
    /// </summary>
    bool overwritePolicy;

    /// <summary>
    /// The name of the policy being updated. Only supported name is 'ApiPolicy'.
    /// </summary>
    const char* policyName;

    /// <summary>
    /// Version of the policy to update. Must be the latest (as returned by GetPolicy).
    /// </summary>
    int32_t policyVersion;

    /// <summary>
    /// The new statements to include in the policy.
    /// </summary>
    PFAuthenticationPermissionStatement const* const* statements;

    /// <summary>
    /// Count of statements
    /// </summary>
    uint32_t statementsCount;

} PFAuthenticationUpdatePolicyRequest;

/// <summary>
/// PFAuthenticationUpdatePolicyResponse data model.
/// </summary>
typedef struct PFAuthenticationUpdatePolicyResponse
{
    /// <summary>
    /// (Optional) The name of the policy that was updated.
    /// </summary>
    const char* policyName;

    /// <summary>
    /// (Optional) The statements included in the new version of the policy.
    /// </summary>
    PFAuthenticationPermissionStatement const* const* statements;

    /// <summary>
    /// Count of statements
    /// </summary>
    uint32_t statementsCount;

} PFAuthenticationUpdatePolicyResponse;

/// <summary>
/// PFAuthenticationGetPhotonAuthenticationTokenRequest data model.
/// </summary>
typedef struct PFAuthenticationGetPhotonAuthenticationTokenRequest
{
    /// <summary>
    /// The Photon applicationId for the game you wish to log into.
    /// </summary>
    const char* photonApplicationId;

} PFAuthenticationGetPhotonAuthenticationTokenRequest;

/// <summary>
/// PFAuthenticationGetPhotonAuthenticationTokenResult data model.
/// </summary>
typedef struct PFAuthenticationGetPhotonAuthenticationTokenResult
{
    /// <summary>
    /// (Optional) The Photon authentication token for this game-session.
    /// </summary>
    const char* photonCustomAuthenticationToken;

} PFAuthenticationGetPhotonAuthenticationTokenResult;

/// <summary>
/// PFAuthenticationGetTitlePublicKeyRequest data model. An RSA CSP blob to be used to encrypt the payload
/// of account creation requests when that API requires a signature header. For example if Client/LoginWithCustomId
/// requires signature headers but the player does not have an account yet follow these steps: 1) Call
/// Client/GetTitlePublicKey with one of the title's shared secrets. 2) Convert the Base64 encoded CSP
/// blob to a byte array and create an RSA signing object. 3) Encrypt the UTF8 encoded JSON body of the
/// registration request and place the Base64 encoded result into the EncryptedRequest and with the TitleId
/// field, all other fields can be left empty when performing the API request. 4) Client receives authentication
/// token as normal. Future requests to LoginWithCustomId will require the X-PlayFab-Signature header.
/// </summary>
typedef struct PFAuthenticationGetTitlePublicKeyRequest
{
    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// The shared secret key for this title.
    /// </summary>
    const char* titleSharedSecret;

} PFAuthenticationGetTitlePublicKeyRequest;

/// <summary>
/// PFAuthenticationGetTitlePublicKeyResult data model.
/// </summary>
typedef struct PFAuthenticationGetTitlePublicKeyResult
{
    /// <summary>
    /// (Optional) Base64 encoded RSA CSP byte array blob containing the title's public RSA key.
    /// </summary>
    const char* rSAPublicKey;

} PFAuthenticationGetTitlePublicKeyResult;

/// <summary>
/// PFAuthenticationLoginWithAndroidDeviceIDRequest data model. On Android devices, the recommendation
/// is to use the Settings.Secure.ANDROID_ID as the AndroidDeviceId, as described in this blog post (http://android-developers.blogspot.com/2011/03/identifying-app-installations.html).
/// More information on this identifier can be found in the Android documentation (http://developer.android.com/reference/android/provider/Settings.Secure.html).
/// If this is the first time a user has signed in with the Android device and CreateAccount is set to
/// true, a new PlayFab account will be created and linked to the Android device ID. In this case, no
/// email or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is
/// linked to the Android device, an error indicating this will be returned, so that the title can guide
/// the user through creation of a PlayFab account. Please note that while multiple devices of this type
/// can be linked to a single user account, only the one most recently used to login (or most recently
/// linked) will be reflected in the user's account information. We will be updating to show all linked
/// devices in a future release.
/// </summary>
typedef struct PFAuthenticationLoginWithAndroidDeviceIDRequest
{
    /// <summary>
    /// (Optional) Specific model of the user's device.
    /// </summary>
    const char* androidDevice;

    /// <summary>
    /// (Optional) Android device identifier for the user's device.
    /// </summary>
    const char* androidDeviceId;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Specific Operating System version for the user's device.
    /// </summary>
    const char* OS;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithAndroidDeviceIDRequest;

/// <summary>
/// PFAuthenticationEntityTokenResponse data model.
/// </summary>
typedef struct PFAuthenticationEntityTokenResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PFEntityKey const* entity;

    /// <summary>
    /// (Optional) The token used to set X-EntityToken for all entity based API calls.
    /// </summary>
    const char* entityToken;

    /// <summary>
    /// (Optional) The time the token will expire, if it is an expiring token, in UTC.
    /// </summary>
    time_t const* tokenExpiration;

} PFAuthenticationEntityTokenResponse;

/// <summary>
/// PFAuthenticationUserSettings data model.
/// </summary>
typedef struct PFAuthenticationUserSettings
{
    /// <summary>
    /// Boolean for whether this player is eligible for gathering device info.
    /// </summary>
    bool gatherDeviceInfo;

    /// <summary>
    /// Boolean for whether this player should report OnFocus play-time tracking.
    /// </summary>
    bool gatherFocusInfo;

    /// <summary>
    /// Boolean for whether this player is eligible for ad tracking.
    /// </summary>
    bool needsAttribution;

} PFAuthenticationUserSettings;

/// <summary>
/// PFAuthenticationLoginWithAppleRequest data model.
/// </summary>
typedef struct PFAuthenticationLoginWithAppleRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// The JSON Web token (JWT) returned by Apple after login. Represented as the identityToken field
    /// in the authorization credential payload.
    /// </summary>
    const char* identityToken;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithAppleRequest;

/// <summary>
/// PFAuthenticationLoginWithCustomIDRequest data model. It is highly recommended that developers ensure
/// that it is extremely unlikely that a customer could generate an ID which is already in use by another
/// customer. If this is the first time a user has signed in with the Custom ID and CreateAccount is set
/// to true, a new PlayFab account will be created and linked to the Custom ID. In this case, no email
/// or username will be associated with the PlayFab account. Otherwise, if no PlayFab account is linked
/// to the Custom ID, an error indicating this will be returned, so that the title can guide the user
/// through creation of a PlayFab account.
/// </summary>
typedef struct PFAuthenticationLoginWithCustomIDRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) Custom unique identifier for the user, generated by the title.
    /// </summary>
    const char* customId;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithCustomIDRequest;

/// <summary>
/// PFAuthenticationLoginWithEmailAddressRequest data model. Email address and password lengths are provided
/// for information purposes. The server will validate that data passed in conforms to the field definition
/// and report errors appropriately. It is recommended that developers not perform this validation locally,
/// so that future updates do not require client updates.
/// </summary>
typedef struct PFAuthenticationLoginWithEmailAddressRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Email address for the account.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Password for the PlayFab account (6-100 characters).
    /// </summary>
    const char* password;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithEmailAddressRequest;

/// <summary>
/// PFAuthenticationLoginWithFacebookRequest data model. Facebook sign-in is accomplished using the Facebook
/// User Access Token. More information on the Token can be found in the Facebook developer documentation
/// (https://developers.facebook.com/docs/facebook-login/access-tokens/). In Unity, for example, the Token
/// is available as AccessToken in the Facebook SDK ScriptableObject FB. If this is the first time a user
/// has signed in with the Facebook account and CreateAccount is set to true, a new PlayFab account will
/// be created and linked to the provided account's Facebook ID. In this case, no email or username will
/// be associated with the PlayFab account. Otherwise, if no PlayFab account is linked to the Facebook
/// account, an error indicating this will be returned, so that the title can guide the user through creation
/// of a PlayFab account. Note that titles should never re-use the same Facebook applications between
/// PlayFab Title IDs, as Facebook provides unique user IDs per application and doing so can result in
/// issues with the Facebook ID for the user in their PlayFab account information. If you must re-use
/// an application in a new PlayFab Title ID, please be sure to first unlink all accounts from Facebook,
/// or delete all users in the first Title ID.
/// </summary>
typedef struct PFAuthenticationLoginWithFacebookRequest
{
    /// <summary>
    /// Unique identifier from Facebook for the user.
    /// </summary>
    const char* accessToken;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithFacebookRequest;

/// <summary>
/// PFAuthenticationLoginWithFacebookInstantGamesIdRequest data model.
/// </summary>
typedef struct PFAuthenticationLoginWithFacebookInstantGamesIdRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// Facebook Instant Games signature for the user.
    /// </summary>
    const char* facebookInstantGamesSignature;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithFacebookInstantGamesIdRequest;

/// <summary>
/// PFAuthenticationLoginWithGameCenterRequest data model. The Game Center player identifier (https://developer.apple.com/library/ios/documentation/Accounts/Reference/ACAccountClassRef/index.html#//apple_ref/occ/instp/ACAccount/identifier)
/// is a generated string which is stored on the local device. As with device identifiers, care must be
/// taken to never expose a player's Game Center identifier to end users, as that could result in a user's
/// account being compromised. If this is the first time a user has signed in with Game Center and CreateAccount
/// is set to true, a new PlayFab account will be created and linked to the Game Center identifier. In
/// this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab
/// account is linked to the Game Center account, an error indicating this will be returned, so that the
/// title can guide the user through creation of a PlayFab account.
/// </summary>
typedef struct PFAuthenticationLoginWithGameCenterRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Unique Game Center player id.
    /// </summary>
    const char* playerId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) The URL for the public encryption key that will be used to verify the signature.
    /// </summary>
    const char* publicKeyUrl;

    /// <summary>
    /// (Optional) A random value used to compute the hash and keep it randomized.
    /// </summary>
    const char* salt;

    /// <summary>
    /// (Optional) The verification signature of the authentication payload.
    /// </summary>
    const char* signature;

    /// <summary>
    /// (Optional) The integer representation of date and time that the signature was created on. PlayFab
    /// will reject authentication signatures not within 10 minutes of the server's current time.
    /// </summary>
    const char* timestamp;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithGameCenterRequest;

/// <summary>
/// PFAuthenticationLoginWithGoogleAccountRequest data model. Google sign-in is accomplished by obtaining
/// a Google OAuth 2.0 credential using the Google sign-in for Android APIs on the device and passing
/// it to this API. If this is the first time a user has signed in with the Google account and CreateAccount
/// is set to true, a new PlayFab account will be created and linked to the Google account. Otherwise,
/// if no PlayFab account is linked to the Google account, an error indicating this will be returned,
/// so that the title can guide the user through creation of a PlayFab account. The current (recommended)
/// method for obtaining a Google account credential in an Android application is to call GoogleSignInAccount.getServerAuthCode()
/// and send the auth code as the ServerAuthCode parameter of this API. Before doing this, you must create
/// an OAuth 2.0 web application client ID in the Google API Console and configure its client ID and secret
/// in the PlayFab Game Manager Google Add-on for your title. This method does not require prompting of
/// the user for additional Google account permissions, resulting in a user experience with the least
/// possible friction. For more information about obtaining the server auth code, see https://developers.google.com/identity/sign-in/android/offline-access.
/// The previous (deprecated) method was to obtain an OAuth access token by calling GetAccessToken() on
/// the client and passing it as the AccessToken parameter to this API. for the with the Google OAuth
/// 2.0 Access Token. More information on this change can be found in the Google developer documentation
/// (https://android-developers.googleblog.com/2016/01/play-games-permissions-are-changing-in.html).
/// </summary>
typedef struct PFAuthenticationLoginWithGoogleAccountRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) OAuth 2.0 server authentication code obtained on the client by calling the getServerAuthCode()
    /// (https://developers.google.com/identity/sign-in/android/offline-access) Google client API.
    /// </summary>
    const char* serverAuthCode;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithGoogleAccountRequest;

/// <summary>
/// PFAuthenticationLoginWithIOSDeviceIDRequest data model. On iOS devices, the identifierForVendor (https://developer.apple.com/library/ios/documentation/UIKit/Reference/UIDevice_Class/index.html#//apple_ref/occ/instp/UIDevice/identifierForVendor)
/// must be used as the DeviceId, as the UIDevice uniqueIdentifier has been deprecated as of iOS 5, and
/// use of the advertisingIdentifier for this purpose will result in failure of Apple's certification
/// process. If this is the first time a user has signed in with the iOS device and CreateAccount is set
/// to true, a new PlayFab account will be created and linked to the vendor-specific iOS device ID. In
/// this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab
/// account is linked to the iOS device, an error indicating this will be returned, so that the title
/// can guide the user through creation of a PlayFab account. Please note that while multiple devices
/// of this type can be linked to a single user account, only the one most recently used to login (or
/// most recently linked) will be reflected in the user's account information. We will be updating to
/// show all linked devices in a future release.
/// </summary>
typedef struct PFAuthenticationLoginWithIOSDeviceIDRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Vendor-specific iOS identifier for the user's device.
    /// </summary>
    const char* deviceId;

    /// <summary>
    /// (Optional) Specific model of the user's device.
    /// </summary>
    const char* deviceModel;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Specific Operating System version for the user's device.
    /// </summary>
    const char* OS;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithIOSDeviceIDRequest;

/// <summary>
/// PFAuthenticationLoginWithKongregateRequest data model. More details regarding Kongregate and their
/// game authentication system can be found at http://developers.kongregate.com/docs/virtual-goods/authentication.
/// Developers must provide the Kongregate user ID and auth token that are generated using the Kongregate
/// client library. PlayFab will combine these identifiers with the title's unique Kongregate app ID to
/// log the player into the Kongregate system. If CreateAccount is set to true and there is not already
/// a user matched to this Kongregate ID, then PlayFab will create a new account for this user and link
/// the ID. In this case, no email or username will be associated with the PlayFab account. If there is
/// already a different PlayFab user linked with this account, then an error will be returned.
/// </summary>
typedef struct PFAuthenticationLoginWithKongregateRequest
{
    /// <summary>
    /// (Optional) Token issued by Kongregate's client API for the user.
    /// </summary>
    const char* authTicket;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Numeric user ID assigned by Kongregate.
    /// </summary>
    const char* kongregateId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithKongregateRequest;

/// <summary>
/// PFAuthenticationLoginWithNintendoServiceAccountRequest data model.
/// </summary>
typedef struct PFAuthenticationLoginWithNintendoServiceAccountRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// The JSON Web token (JWT) returned by Nintendo after login.
    /// </summary>
    const char* identityToken;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithNintendoServiceAccountRequest;

/// <summary>
/// PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest data model.
/// </summary>
typedef struct PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Nintendo Switch unique identifier for the user's device.
    /// </summary>
    const char* nintendoSwitchDeviceId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest;

/// <summary>
/// PFAuthenticationLoginWithOpenIdConnectRequest data model.
/// </summary>
typedef struct PFAuthenticationLoginWithOpenIdConnectRequest
{
    /// <summary>
    /// A name that identifies which configured OpenID Connect provider relationship to use. Maximum
    /// 100 characters.
    /// </summary>
    const char* connectionId;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// The JSON Web token (JWT) returned by the identity provider after login. Represented as the id_token
    /// field in the identity provider's response.
    /// </summary>
    const char* idToken;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithOpenIdConnectRequest;

/// <summary>
/// PFAuthenticationLoginWithPlayFabRequest data model. Username and password lengths are provided for
/// information purposes. The server will validate that data passed in conforms to the field definition
/// and report errors appropriately. It is recommended that developers not perform this validation locally,
/// so that future updates to the username or password do not require client updates.
/// </summary>
typedef struct PFAuthenticationLoginWithPlayFabRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Password for the PlayFab account (6-100 characters).
    /// </summary>
    const char* password;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// PlayFab username for the account.
    /// </summary>
    const char* username;

} PFAuthenticationLoginWithPlayFabRequest;

/// <summary>
/// PFAuthenticationLoginWithPSNRequest data model. If this is the first time a user has signed in with
/// the PlayStation Network account and CreateAccount is set to true, a new PlayFab account will be created
/// and linked to the PSN account. In this case, no email or username will be associated with the PlayFab
/// account. Otherwise, if no PlayFab account is linked to the PSN account, an error indicating this will
/// be returned, so that the title can guide the user through creation of a PlayFab account.
/// </summary>
typedef struct PFAuthenticationLoginWithPSNRequest
{
    /// <summary>
    /// (Optional) Auth code provided by the PSN OAuth provider.
    /// </summary>
    const char* authCode;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Id of the PSN issuer environment. If null, defaults to production environment.
    /// </summary>
    int32_t const* issuerId;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) Redirect URI supplied to PSN when requesting an auth code.
    /// </summary>
    const char* redirectUri;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithPSNRequest;

/// <summary>
/// PFAuthenticationLoginWithSteamRequest data model. Steam sign-in is accomplished with the Steam Session
/// Ticket. More information on the Ticket can be found in the Steamworks SDK, here: https://partner.steamgames.com/documentation/auth
/// (requires sign-in). NOTE: For Steam authentication to work, the title must be configured with the
/// Steam Application ID and Web API Key in the PlayFab Game Manager (under Steam in the Add-ons Marketplace).
/// You can obtain a Web API Key from the Permissions page of any Group associated with your App ID in
/// the Steamworks site. If this is the first time a user has signed in with the Steam account and CreateAccount
/// is set to true, a new PlayFab account will be created and linked to the provided account's Steam ID.
/// In this case, no email or username will be associated with the PlayFab account. Otherwise, if no PlayFab
/// account is linked to the Steam account, an error indicating this will be returned, so that the title
/// can guide the user through creation of a PlayFab account.
/// </summary>
typedef struct PFAuthenticationLoginWithSteamRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) Authentication token for the user, returned as a byte array from Steam, and converted
    /// to a string (for example, the byte 0x08 should become "08").
    /// </summary>
    const char* steamTicket;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithSteamRequest;

/// <summary>
/// PFAuthenticationLoginWithTwitchRequest data model. More details regarding Twitch and their authentication
/// system can be found at https://github.com/justintv/Twitch-API/blob/master/authentication.md. Developers
/// must provide the Twitch access token that is generated using one of the Twitch authentication flows.
/// PlayFab will use the title's unique Twitch Client ID to authenticate the token and log in to the PlayFab
/// system. If CreateAccount is set to true and there is not already a user matched to the Twitch username
/// that generated the token, then PlayFab will create a new account for this user and link the ID. In
/// this case, no email or username will be associated with the PlayFab account. If there is already a
/// different PlayFab user linked with this account, then an error will be returned.
/// </summary>
typedef struct PFAuthenticationLoginWithTwitchRequest
{
    /// <summary>
    /// (Optional) Token issued by Twitch's API for the user.
    /// </summary>
    const char* accessToken;

    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

} PFAuthenticationLoginWithTwitchRequest;

/// <summary>
/// PFAuthenticationClientLoginWithXboxRequest data model. If this is the first time a user has signed
/// in with the Xbox Live account and CreateAccount is set to true, a new PlayFab account will be created
/// and linked to the Xbox Live account. In this case, no email or username will be associated with the
/// PlayFab account. Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating
/// this will be returned, so that the title can guide the user through creation of a PlayFab account.
/// </summary>
typedef struct PFAuthenticationClientLoginWithXboxRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// "").
    /// </summary>
    const char* xboxToken;

} PFAuthenticationClientLoginWithXboxRequest;

#if HC_PLATFORM == HC_PLATFORM_GDK
/// <summary>
/// PFAuthenticationLoginWithXUserRequest data model. If this is the first time a user has signed in with
/// the Xbox Live account and CreateAccount is set to true, a new PlayFab account will be created and
/// linked to the Xbox Live account. In this case, no email or username will be associated with the PlayFab
/// account. Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating
/// this will be returned, so that the title can guide the user through creation of a PlayFab account.
/// Request object for PFAuthenticationLoginWithXUserAsync.
/// </summary>
typedef struct PFAuthenticationLoginWithXUserRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// XUserHandle returned from XUserAddAsync or XUserAddByIdWithUiAsync.
    /// </summary>
    XUserHandle userHandle;

} PFAuthenticationLoginWithXUserRequest;
#endif

/// <summary>
/// PFAuthenticationRegisterPlayFabUserRequest data model.
/// </summary>
typedef struct PFAuthenticationRegisterPlayFabUserRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) An optional parameter for setting the display name for this title (3-25 characters).
    /// </summary>
    const char* displayName;

    /// <summary>
    /// (Optional) User email address attached to their account.
    /// </summary>
    const char* email;

    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Password for the PlayFab account (6-100 characters).
    /// </summary>
    const char* password;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) An optional parameter that specifies whether both the username and email parameters
    /// are required. If true, both parameters are required; if false, the user must supply either the
    /// username or email parameter. The default value is true.
    /// </summary>
    bool const* requireBothUsernameAndEmail;

    /// <summary>
    /// Unique identifier for the title, found in the Settings > Game Properties section of the PlayFab
    /// developer site when a title has been selected.
    /// </summary>
    const char* titleId;

    /// <summary>
    /// (Optional) PlayFab username for the account (3-20 characters).
    /// </summary>
    const char* username;

} PFAuthenticationRegisterPlayFabUserRequest;

/// <summary>
/// PFAuthenticationClientSetPlayerSecretRequest data model. APIs that require signatures require that
/// the player have a configured Player Secret Key that is used to sign all requests. Players that don't
/// have a secret will be blocked from making API calls until it is configured. To create a signature
/// header add a SHA256 hashed string containing UTF8 encoded JSON body as it will be sent to the server,
/// the current time in UTC formatted to ISO 8601, and the players secret formatted as 'body.date.secret'.
/// Place the resulting hash into the header X-PlayFab-Signature, along with a header X-PlayFab-Timestamp
/// of the same UTC timestamp used in the signature.
/// </summary>
typedef struct PFAuthenticationClientSetPlayerSecretRequest
{
    /// <summary>
    /// (Optional) Base64 encoded body that is encrypted with the Title's public RSA key (Enterprise
    /// Only).
    /// </summary>
    const char* encryptedRequest;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

} PFAuthenticationClientSetPlayerSecretRequest;

/// <summary>
/// PFAuthenticationAuthenticateSessionTicketRequest data model. Note that data returned may be Personally
/// Identifying Information (PII), such as email address, and so care should be taken in how this data
/// is stored and managed. Since this call will always return the relevant information for users who have
/// accessed the title, the recommendation is to not store this data locally.
/// </summary>
typedef struct PFAuthenticationAuthenticateSessionTicketRequest
{
    /// <summary>
    /// Session ticket as issued by a PlayFab client login API.
    /// </summary>
    const char* sessionTicket;

} PFAuthenticationAuthenticateSessionTicketRequest;

/// <summary>
/// PFAuthenticationAuthenticateSessionTicketResult data model.
/// </summary>
typedef struct PFAuthenticationAuthenticateSessionTicketResult
{
    /// <summary>
    /// (Optional) Indicates if token was expired at request time.
    /// </summary>
    bool const* isSessionTicketExpired;

    /// <summary>
    /// (Optional) Account info for the user whose session ticket was supplied.
    /// </summary>
    PFUserAccountInfo const* userInfo;

} PFAuthenticationAuthenticateSessionTicketResult;

/// <summary>
/// PFAuthenticationLoginWithServerCustomIdRequest data model.
/// </summary>
typedef struct PFAuthenticationLoginWithServerCustomIdRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// (Optional) The backend server identifier for this player.
    /// </summary>
    const char* serverCustomId;

} PFAuthenticationLoginWithServerCustomIdRequest;

/// <summary>
/// PFAuthenticationLoginWithSteamIdRequest data model. If this is the first time a user has signed in
/// with the Steam ID and CreateAccount is set to true, a new PlayFab account will be created and linked
/// to the Steam account. In this case, no email or username will be associated with the PlayFab account.
/// Otherwise, if no PlayFab account is linked to the Steam account, an error indicating this will be
/// returned, so that the title can guide the user through creation of a PlayFab account. Steam users
/// that are not logged into the Steam Client app will only have their Steam username synced, other data,
/// such as currency and country will not be available until they login while the Client is open.
/// </summary>
typedef struct PFAuthenticationLoginWithSteamIdRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Unique Steam identifier for a user.
    /// </summary>
    const char* steamId;

} PFAuthenticationLoginWithSteamIdRequest;

/// <summary>
/// PFAuthenticationServerLoginWithXboxRequest data model. If this is the first time a user has signed
/// in with the Xbox Live account and CreateAccount is set to true, a new PlayFab account will be created
/// and linked to the Xbox Live account. In this case, no email or username will be associated with the
/// PlayFab account. Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating
/// this will be returned, so that the title can guide the user through creation of a PlayFab account.
/// </summary>
typedef struct PFAuthenticationServerLoginWithXboxRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// Token provided by the Xbox Live SDK/XDK method GetTokenAndSignatureAsync("POST", "https://playfabapi.com/",
    /// "").
    /// </summary>
    const char* xboxToken;

} PFAuthenticationServerLoginWithXboxRequest;

/// <summary>
/// PFAuthenticationLoginWithXboxIdRequest data model. If this is the first time a user has signed in
/// with the Xbox ID and CreateAccount is set to true, a new PlayFab account will be created and linked
/// to the Xbox Live account. In this case, no email or username will be associated with the PlayFab account.
/// Otherwise, if no PlayFab account is linked to the Xbox Live account, an error indicating this will
/// be returned, so that the title can guide the user through creation of a PlayFab account.
/// </summary>
typedef struct PFAuthenticationLoginWithXboxIdRequest
{
    /// <summary>
    /// (Optional) Automatically create a PlayFab account if one is not currently linked to this ID.
    /// </summary>
    bool const* createAccount;

    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) Flags for which pieces of info to return for the user.
    /// </summary>
    PFGetPlayerCombinedInfoRequestParams const* infoRequestParameters;

    /// <summary>
    /// The id of Xbox Live sandbox.
    /// </summary>
    const char* sandbox;

    /// <summary>
    /// Unique Xbox identifier for a user.
    /// </summary>
    const char* xboxId;

} PFAuthenticationLoginWithXboxIdRequest;

/// <summary>
/// PFAuthenticationServerSetPlayerSecretRequest data model. APIs that require signatures require that
/// the player have a configured Player Secret Key that is used to sign all requests. Players that don't
/// have a secret will be blocked from making API calls until it is configured. To create a signature
/// header add a SHA256 hashed string containing UTF8 encoded JSON body as it will be sent to the server,
/// the current time in UTC formatted to ISO 8601, and the players secret formatted as 'body.date.secret'.
/// Place the resulting hash into the header X-PlayFab-Signature, along with a header X-PlayFab-Timestamp
/// of the same UTC timestamp used in the signature.
/// </summary>
typedef struct PFAuthenticationServerSetPlayerSecretRequest
{
    /// <summary>
    /// (Optional) Player secret that is used to verify API request signatures (Enterprise Only).
    /// </summary>
    const char* playerSecret;

    /// <summary>
    /// Unique PlayFab assigned ID of the user on whom the operation will be performed.
    /// </summary>
    const char* playFabId;

} PFAuthenticationServerSetPlayerSecretRequest;

/// <summary>
/// PFAuthenticationGetEntityTokenRequest data model. This API must be called with X-SecretKey, X-Authentication
/// or X-EntityToken headers. An optional EntityKey may be included to attempt to set the resulting EntityToken
/// to a specific entity, however the entity must be a relation of the caller, such as the master_player_account
/// of a character. If sending X-EntityToken the account will be marked as freshly logged in and will
/// issue a new token. If using X-Authentication or X-EntityToken the header must still be valid and cannot
/// be expired or revoked.
/// </summary>
typedef struct PFAuthenticationGetEntityTokenRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// (Optional) The entity to perform this action on.
    /// </summary>
    PFEntityKey const* entity;

} PFAuthenticationGetEntityTokenRequest;

/// <summary>
/// PFAuthenticationValidateEntityTokenRequest data model. Given an entity token, validates that it hasn't
/// expired or been revoked and will return details of the owner.
/// </summary>
typedef struct PFAuthenticationValidateEntityTokenRequest
{
    /// <summary>
    /// (Optional) The optional custom tags associated with the request (e.g. build number, external
    /// trace identifiers, etc.).
    /// </summary>
    struct PFStringDictionaryEntry const* customTags;

    /// <summary>
    /// Count of customTags
    /// </summary>
    uint32_t customTagsCount;

    /// <summary>
    /// Client EntityToken.
    /// </summary>
    const char* entityToken;

} PFAuthenticationValidateEntityTokenRequest;

/// <summary>
/// PFAuthenticationValidateEntityTokenResponse data model.
/// </summary>
typedef struct PFAuthenticationValidateEntityTokenResponse
{
    /// <summary>
    /// (Optional) The entity id and type.
    /// </summary>
    PFEntityKey const* entity;

    /// <summary>
    /// (Optional) The authenticated device for this entity, for the given login.
    /// </summary>
    PFAuthenticationIdentifiedDeviceType const* identifiedDeviceType;

    /// <summary>
    /// (Optional) The identity provider for this entity, for the given login.
    /// </summary>
    PFLoginIdentityProvider const* identityProvider;

    /// <summary>
    /// (Optional) The lineage of this profile.
    /// </summary>
    PFEntityLineage const* lineage;

} PFAuthenticationValidateEntityTokenResponse;

#pragma pop_macro("IN")

}
