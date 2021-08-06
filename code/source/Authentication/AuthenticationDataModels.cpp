#include "stdafx.h"
#include "AuthenticationDataModels.h"
#include "JsonUtils.h"

namespace PlayFab
{
namespace AuthenticationModels
{

OpenIdIssuerInformation::OpenIdIssuerInformation() :
    PFAuthenticationOpenIdIssuerInformation{}
{
}

OpenIdIssuerInformation::OpenIdIssuerInformation(const OpenIdIssuerInformation& src) :
    PFAuthenticationOpenIdIssuerInformation{ src },
    m_authorizationUrl{ src.m_authorizationUrl },
    m_issuer{ src.m_issuer },
    m_jsonWebKeySet{ src.m_jsonWebKeySet },
    m_tokenUrl{ src.m_tokenUrl }
{
    authorizationUrl = m_authorizationUrl.empty() ? nullptr : m_authorizationUrl.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    jsonWebKeySet.stringValue = m_jsonWebKeySet.StringValue();
    tokenUrl = m_tokenUrl.empty() ? nullptr : m_tokenUrl.data();
}

OpenIdIssuerInformation::OpenIdIssuerInformation(OpenIdIssuerInformation&& src) :
    PFAuthenticationOpenIdIssuerInformation{ src },
    m_authorizationUrl{ std::move(src.m_authorizationUrl) },
    m_issuer{ std::move(src.m_issuer) },
    m_jsonWebKeySet{ std::move(src.m_jsonWebKeySet) },
    m_tokenUrl{ std::move(src.m_tokenUrl) }
{
    authorizationUrl = m_authorizationUrl.empty() ? nullptr : m_authorizationUrl.data();
    issuer = m_issuer.empty() ? nullptr : m_issuer.data();
    jsonWebKeySet.stringValue = m_jsonWebKeySet.StringValue();
    tokenUrl = m_tokenUrl.empty() ? nullptr : m_tokenUrl.data();
}

OpenIdIssuerInformation::OpenIdIssuerInformation(const PFAuthenticationOpenIdIssuerInformation& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenIdIssuerInformation::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthorizationUrl", m_authorizationUrl, authorizationUrl);
    JsonUtils::ObjectGetMember(input, "Issuer", m_issuer, issuer);
    JsonUtils::ObjectGetMember(input, "JsonWebKeySet", m_jsonWebKeySet, jsonWebKeySet);
    JsonUtils::ObjectGetMember(input, "TokenUrl", m_tokenUrl, tokenUrl);
}

JsonValue OpenIdIssuerInformation::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationOpenIdIssuerInformation>(*this);
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest() :
    PFAuthenticationCreateOpenIdConnectionRequest{}
{
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest(const CreateOpenIdConnectionRequest& src) :
    PFAuthenticationCreateOpenIdConnectionRequest{ src },
    m_clientId{ src.m_clientId },
    m_clientSecret{ src.m_clientSecret },
    m_connectionId{ src.m_connectionId },
    m_ignoreNonce{ src.m_ignoreNonce },
    m_issuerDiscoveryUrl{ src.m_issuerDiscoveryUrl },
    m_issuerInformation{ src.m_issuerInformation }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    ignoreNonce = m_ignoreNonce ? m_ignoreNonce.operator->() : nullptr;
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest(CreateOpenIdConnectionRequest&& src) :
    PFAuthenticationCreateOpenIdConnectionRequest{ src },
    m_clientId{ std::move(src.m_clientId) },
    m_clientSecret{ std::move(src.m_clientSecret) },
    m_connectionId{ std::move(src.m_connectionId) },
    m_ignoreNonce{ std::move(src.m_ignoreNonce) },
    m_issuerDiscoveryUrl{ std::move(src.m_issuerDiscoveryUrl) },
    m_issuerInformation{ std::move(src.m_issuerInformation) }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    ignoreNonce = m_ignoreNonce ? m_ignoreNonce.operator->() : nullptr;
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

CreateOpenIdConnectionRequest::CreateOpenIdConnectionRequest(const PFAuthenticationCreateOpenIdConnectionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreateOpenIdConnectionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ClientId", m_clientId, clientId);
    JsonUtils::ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "IgnoreNonce", m_ignoreNonce, ignoreNonce);
    JsonUtils::ObjectGetMember(input, "IssuerDiscoveryUrl", m_issuerDiscoveryUrl, issuerDiscoveryUrl);
    JsonUtils::ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
}

JsonValue CreateOpenIdConnectionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationCreateOpenIdConnectionRequest>(*this);
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest() :
    PFAuthenticationCreatePlayerSharedSecretRequest{}
{
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest(const CreatePlayerSharedSecretRequest& src) :
    PFAuthenticationCreatePlayerSharedSecretRequest{ src },
    m_friendlyName{ src.m_friendlyName }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest(CreatePlayerSharedSecretRequest&& src) :
    PFAuthenticationCreatePlayerSharedSecretRequest{ src },
    m_friendlyName{ std::move(src.m_friendlyName) }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
}

CreatePlayerSharedSecretRequest::CreatePlayerSharedSecretRequest(const PFAuthenticationCreatePlayerSharedSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerSharedSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
}

JsonValue CreatePlayerSharedSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationCreatePlayerSharedSecretRequest>(*this);
}

size_t CreatePlayerSharedSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationCreatePlayerSharedSecretRequest) };
    serializedSize += (m_friendlyName.size() + 1);
    return serializedSize;
}

void CreatePlayerSharedSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationCreatePlayerSharedSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationCreatePlayerSharedSecretRequest);
    memcpy(stringBuffer, m_friendlyName.data(), m_friendlyName.size() + 1);
    serializedStruct->friendlyName = stringBuffer;
    stringBuffer += m_friendlyName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult() :
    PFAuthenticationCreatePlayerSharedSecretResult{}
{
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult(const CreatePlayerSharedSecretResult& src) :
    PFAuthenticationCreatePlayerSharedSecretResult{ src },
    m_secretKey{ src.m_secretKey }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult(CreatePlayerSharedSecretResult&& src) :
    PFAuthenticationCreatePlayerSharedSecretResult{ src },
    m_secretKey{ std::move(src.m_secretKey) }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

CreatePlayerSharedSecretResult::CreatePlayerSharedSecretResult(const PFAuthenticationCreatePlayerSharedSecretResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void CreatePlayerSharedSecretResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue CreatePlayerSharedSecretResult::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationCreatePlayerSharedSecretResult>(*this);
}

size_t CreatePlayerSharedSecretResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationCreatePlayerSharedSecretResult) };
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void CreatePlayerSharedSecretResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationCreatePlayerSharedSecretResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationCreatePlayerSharedSecretResult);
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest() :
    PFAuthenticationDeleteOpenIdConnectionRequest{}
{
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest(const DeleteOpenIdConnectionRequest& src) :
    PFAuthenticationDeleteOpenIdConnectionRequest{ src },
    m_connectionId{ src.m_connectionId }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest(DeleteOpenIdConnectionRequest&& src) :
    PFAuthenticationDeleteOpenIdConnectionRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
}

DeleteOpenIdConnectionRequest::DeleteOpenIdConnectionRequest(const PFAuthenticationDeleteOpenIdConnectionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeleteOpenIdConnectionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
}

JsonValue DeleteOpenIdConnectionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationDeleteOpenIdConnectionRequest>(*this);
}

size_t DeleteOpenIdConnectionRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationDeleteOpenIdConnectionRequest) };
    serializedSize += (m_connectionId.size() + 1);
    return serializedSize;
}

void DeleteOpenIdConnectionRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationDeleteOpenIdConnectionRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationDeleteOpenIdConnectionRequest);
    memcpy(stringBuffer, m_connectionId.data(), m_connectionId.size() + 1);
    serializedStruct->connectionId = stringBuffer;
    stringBuffer += m_connectionId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest() :
    PFAuthenticationDeletePlayerSharedSecretRequest{}
{
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest(const DeletePlayerSharedSecretRequest& src) :
    PFAuthenticationDeletePlayerSharedSecretRequest{ src },
    m_secretKey{ src.m_secretKey }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest(DeletePlayerSharedSecretRequest&& src) :
    PFAuthenticationDeletePlayerSharedSecretRequest{ src },
    m_secretKey{ std::move(src.m_secretKey) }
{
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

DeletePlayerSharedSecretRequest::DeletePlayerSharedSecretRequest(const PFAuthenticationDeletePlayerSharedSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void DeletePlayerSharedSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue DeletePlayerSharedSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationDeletePlayerSharedSecretRequest>(*this);
}

size_t DeletePlayerSharedSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationDeletePlayerSharedSecretRequest) };
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void DeletePlayerSharedSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationDeletePlayerSharedSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationDeletePlayerSharedSecretRequest);
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

SharedSecret::SharedSecret() :
    PFAuthenticationSharedSecret{}
{
}

SharedSecret::SharedSecret(const SharedSecret& src) :
    PFAuthenticationSharedSecret{ src },
    m_friendlyName{ src.m_friendlyName },
    m_secretKey{ src.m_secretKey }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

SharedSecret::SharedSecret(SharedSecret&& src) :
    PFAuthenticationSharedSecret{ src },
    m_friendlyName{ std::move(src.m_friendlyName) },
    m_secretKey{ std::move(src.m_secretKey) }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

SharedSecret::SharedSecret(const PFAuthenticationSharedSecret& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void SharedSecret::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Disabled", disabled);
    JsonUtils::ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue SharedSecret::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationSharedSecret>(*this);
}

size_t SharedSecret::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationSharedSecret) };
    serializedSize += (m_friendlyName.size() + 1);
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void SharedSecret::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationSharedSecret{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationSharedSecret);
    memcpy(stringBuffer, m_friendlyName.data(), m_friendlyName.size() + 1);
    serializedStruct->friendlyName = stringBuffer;
    stringBuffer += m_friendlyName.size() + 1;
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult() :
    PFAuthenticationGetPlayerSharedSecretsResult{}
{
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult(const GetPlayerSharedSecretsResult& src) :
    PFAuthenticationGetPlayerSharedSecretsResult{ src },
    m_sharedSecrets{ src.m_sharedSecrets }
{
    sharedSecrets = m_sharedSecrets.Empty() ? nullptr : m_sharedSecrets.Data();
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult(GetPlayerSharedSecretsResult&& src) :
    PFAuthenticationGetPlayerSharedSecretsResult{ src },
    m_sharedSecrets{ std::move(src.m_sharedSecrets) }
{
    sharedSecrets = m_sharedSecrets.Empty() ? nullptr : m_sharedSecrets.Data();
}

GetPlayerSharedSecretsResult::GetPlayerSharedSecretsResult(const PFAuthenticationGetPlayerSharedSecretsResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPlayerSharedSecretsResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SharedSecrets", m_sharedSecrets, sharedSecrets, sharedSecretsCount);
}

JsonValue GetPlayerSharedSecretsResult::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetPlayerSharedSecretsResult>(*this);
}

GetPolicyRequest::GetPolicyRequest() :
    PFAuthenticationGetPolicyRequest{}
{
}

GetPolicyRequest::GetPolicyRequest(const GetPolicyRequest& src) :
    PFAuthenticationGetPolicyRequest{ src },
    m_policyName{ src.m_policyName }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
}

GetPolicyRequest::GetPolicyRequest(GetPolicyRequest&& src) :
    PFAuthenticationGetPolicyRequest{ src },
    m_policyName{ std::move(src.m_policyName) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
}

GetPolicyRequest::GetPolicyRequest(const PFAuthenticationGetPolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
}

JsonValue GetPolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetPolicyRequest>(*this);
}

size_t GetPolicyRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationGetPolicyRequest) };
    serializedSize += (m_policyName.size() + 1);
    return serializedSize;
}

void GetPolicyRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationGetPolicyRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationGetPolicyRequest);
    memcpy(stringBuffer, m_policyName.data(), m_policyName.size() + 1);
    serializedStruct->policyName = stringBuffer;
    stringBuffer += m_policyName.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

ApiCondition::ApiCondition() :
    PFAuthenticationApiCondition{}
{
}

ApiCondition::ApiCondition(const ApiCondition& src) :
    PFAuthenticationApiCondition{ src },
    m_hasSignatureOrEncryption{ src.m_hasSignatureOrEncryption }
{
    hasSignatureOrEncryption = m_hasSignatureOrEncryption ? m_hasSignatureOrEncryption.operator->() : nullptr;
}

ApiCondition::ApiCondition(ApiCondition&& src) :
    PFAuthenticationApiCondition{ src },
    m_hasSignatureOrEncryption{ std::move(src.m_hasSignatureOrEncryption) }
{
    hasSignatureOrEncryption = m_hasSignatureOrEncryption ? m_hasSignatureOrEncryption.operator->() : nullptr;
}

ApiCondition::ApiCondition(const PFAuthenticationApiCondition& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ApiCondition::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "HasSignatureOrEncryption", m_hasSignatureOrEncryption, hasSignatureOrEncryption);
}

JsonValue ApiCondition::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationApiCondition>(*this);
}

PermissionStatement::PermissionStatement() :
    PFAuthenticationPermissionStatement{}
{
}

PermissionStatement::PermissionStatement(const PermissionStatement& src) :
    PFAuthenticationPermissionStatement{ src },
    m_action{ src.m_action },
    m_apiConditions{ src.m_apiConditions },
    m_comment{ src.m_comment },
    m_principal{ src.m_principal },
    m_resource{ src.m_resource }
{
    action = m_action.empty() ? nullptr : m_action.data();
    apiConditions = m_apiConditions ? m_apiConditions.operator->() : nullptr;
    comment = m_comment.empty() ? nullptr : m_comment.data();
    principal = m_principal.empty() ? nullptr : m_principal.data();
    resource = m_resource.empty() ? nullptr : m_resource.data();
}

PermissionStatement::PermissionStatement(PermissionStatement&& src) :
    PFAuthenticationPermissionStatement{ src },
    m_action{ std::move(src.m_action) },
    m_apiConditions{ std::move(src.m_apiConditions) },
    m_comment{ std::move(src.m_comment) },
    m_principal{ std::move(src.m_principal) },
    m_resource{ std::move(src.m_resource) }
{
    action = m_action.empty() ? nullptr : m_action.data();
    apiConditions = m_apiConditions ? m_apiConditions.operator->() : nullptr;
    comment = m_comment.empty() ? nullptr : m_comment.data();
    principal = m_principal.empty() ? nullptr : m_principal.data();
    resource = m_resource.empty() ? nullptr : m_resource.data();
}

PermissionStatement::PermissionStatement(const PFAuthenticationPermissionStatement& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void PermissionStatement::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Action", m_action, action);
    JsonUtils::ObjectGetMember(input, "ApiConditions", m_apiConditions, apiConditions);
    JsonUtils::ObjectGetMember(input, "Comment", m_comment, comment);
    JsonUtils::ObjectGetMember(input, "Effect", effect);
    JsonUtils::ObjectGetMember(input, "Principal", m_principal, principal);
    JsonUtils::ObjectGetMember(input, "Resource", m_resource, resource);
}

JsonValue PermissionStatement::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationPermissionStatement>(*this);
}

GetPolicyResponse::GetPolicyResponse() :
    PFAuthenticationGetPolicyResponse{}
{
}

GetPolicyResponse::GetPolicyResponse(const GetPolicyResponse& src) :
    PFAuthenticationGetPolicyResponse{ src },
    m_policyName{ src.m_policyName },
    m_statements{ src.m_statements }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

GetPolicyResponse::GetPolicyResponse(GetPolicyResponse&& src) :
    PFAuthenticationGetPolicyResponse{ src },
    m_policyName{ std::move(src.m_policyName) },
    m_statements{ std::move(src.m_statements) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

GetPolicyResponse::GetPolicyResponse(const PFAuthenticationGetPolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
    JsonUtils::ObjectGetMember(input, "PolicyVersion", policyVersion);
    JsonUtils::ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
}

JsonValue GetPolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetPolicyResponse>(*this);
}

OpenIdConnection::OpenIdConnection() :
    PFAuthenticationOpenIdConnection{}
{
}

OpenIdConnection::OpenIdConnection(const OpenIdConnection& src) :
    PFAuthenticationOpenIdConnection{ src },
    m_clientId{ src.m_clientId },
    m_clientSecret{ src.m_clientSecret },
    m_connectionId{ src.m_connectionId },
    m_issuerInformation{ src.m_issuerInformation }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

OpenIdConnection::OpenIdConnection(OpenIdConnection&& src) :
    PFAuthenticationOpenIdConnection{ src },
    m_clientId{ std::move(src.m_clientId) },
    m_clientSecret{ std::move(src.m_clientSecret) },
    m_connectionId{ std::move(src.m_connectionId) },
    m_issuerInformation{ std::move(src.m_issuerInformation) }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

OpenIdConnection::OpenIdConnection(const PFAuthenticationOpenIdConnection& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void OpenIdConnection::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ClientId", m_clientId, clientId);
    JsonUtils::ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "DiscoverConfiguration", discoverConfiguration);
    JsonUtils::ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
}

JsonValue OpenIdConnection::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationOpenIdConnection>(*this);
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse() :
    PFAuthenticationListOpenIdConnectionResponse{}
{
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse(const ListOpenIdConnectionResponse& src) :
    PFAuthenticationListOpenIdConnectionResponse{ src },
    m_connections{ src.m_connections }
{
    connections = m_connections.Empty() ? nullptr : m_connections.Data();
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse(ListOpenIdConnectionResponse&& src) :
    PFAuthenticationListOpenIdConnectionResponse{ src },
    m_connections{ std::move(src.m_connections) }
{
    connections = m_connections.Empty() ? nullptr : m_connections.Data();
}

ListOpenIdConnectionResponse::ListOpenIdConnectionResponse(const PFAuthenticationListOpenIdConnectionResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ListOpenIdConnectionResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Connections", m_connections, connections, connectionsCount);
}

JsonValue ListOpenIdConnectionResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationListOpenIdConnectionResponse>(*this);
}

AdminSetPlayerSecretRequest::AdminSetPlayerSecretRequest() :
    PFAuthenticationAdminSetPlayerSecretRequest{}
{
}

AdminSetPlayerSecretRequest::AdminSetPlayerSecretRequest(const AdminSetPlayerSecretRequest& src) :
    PFAuthenticationAdminSetPlayerSecretRequest{ src },
    m_playerSecret{ src.m_playerSecret },
    m_playFabId{ src.m_playFabId }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminSetPlayerSecretRequest::AdminSetPlayerSecretRequest(AdminSetPlayerSecretRequest&& src) :
    PFAuthenticationAdminSetPlayerSecretRequest{ src },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

AdminSetPlayerSecretRequest::AdminSetPlayerSecretRequest(const PFAuthenticationAdminSetPlayerSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AdminSetPlayerSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue AdminSetPlayerSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationAdminSetPlayerSecretRequest>(*this);
}

size_t AdminSetPlayerSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationAdminSetPlayerSecretRequest) };
    serializedSize += (m_playerSecret.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void AdminSetPlayerSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationAdminSetPlayerSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationAdminSetPlayerSecretRequest);
    memcpy(stringBuffer, m_playerSecret.data(), m_playerSecret.size() + 1);
    serializedStruct->playerSecret = stringBuffer;
    stringBuffer += m_playerSecret.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest() :
    PFAuthenticationUpdateOpenIdConnectionRequest{}
{
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest(const UpdateOpenIdConnectionRequest& src) :
    PFAuthenticationUpdateOpenIdConnectionRequest{ src },
    m_clientId{ src.m_clientId },
    m_clientSecret{ src.m_clientSecret },
    m_connectionId{ src.m_connectionId },
    m_issuerDiscoveryUrl{ src.m_issuerDiscoveryUrl },
    m_issuerInformation{ src.m_issuerInformation }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest(UpdateOpenIdConnectionRequest&& src) :
    PFAuthenticationUpdateOpenIdConnectionRequest{ src },
    m_clientId{ std::move(src.m_clientId) },
    m_clientSecret{ std::move(src.m_clientSecret) },
    m_connectionId{ std::move(src.m_connectionId) },
    m_issuerDiscoveryUrl{ std::move(src.m_issuerDiscoveryUrl) },
    m_issuerInformation{ std::move(src.m_issuerInformation) }
{
    clientId = m_clientId.empty() ? nullptr : m_clientId.data();
    clientSecret = m_clientSecret.empty() ? nullptr : m_clientSecret.data();
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    issuerDiscoveryUrl = m_issuerDiscoveryUrl.empty() ? nullptr : m_issuerDiscoveryUrl.data();
    issuerInformation = m_issuerInformation ? m_issuerInformation.operator->() : nullptr;
}

UpdateOpenIdConnectionRequest::UpdateOpenIdConnectionRequest(const PFAuthenticationUpdateOpenIdConnectionRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdateOpenIdConnectionRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ClientId", m_clientId, clientId);
    JsonUtils::ObjectGetMember(input, "ClientSecret", m_clientSecret, clientSecret);
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "IssuerDiscoveryUrl", m_issuerDiscoveryUrl, issuerDiscoveryUrl);
    JsonUtils::ObjectGetMember(input, "IssuerInformation", m_issuerInformation, issuerInformation);
}

JsonValue UpdateOpenIdConnectionRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationUpdateOpenIdConnectionRequest>(*this);
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest() :
    PFAuthenticationUpdatePlayerSharedSecretRequest{}
{
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest(const UpdatePlayerSharedSecretRequest& src) :
    PFAuthenticationUpdatePlayerSharedSecretRequest{ src },
    m_friendlyName{ src.m_friendlyName },
    m_secretKey{ src.m_secretKey }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest(UpdatePlayerSharedSecretRequest&& src) :
    PFAuthenticationUpdatePlayerSharedSecretRequest{ src },
    m_friendlyName{ std::move(src.m_friendlyName) },
    m_secretKey{ std::move(src.m_secretKey) }
{
    friendlyName = m_friendlyName.empty() ? nullptr : m_friendlyName.data();
    secretKey = m_secretKey.empty() ? nullptr : m_secretKey.data();
}

UpdatePlayerSharedSecretRequest::UpdatePlayerSharedSecretRequest(const PFAuthenticationUpdatePlayerSharedSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePlayerSharedSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Disabled", disabled);
    JsonUtils::ObjectGetMember(input, "FriendlyName", m_friendlyName, friendlyName);
    JsonUtils::ObjectGetMember(input, "SecretKey", m_secretKey, secretKey);
}

JsonValue UpdatePlayerSharedSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationUpdatePlayerSharedSecretRequest>(*this);
}

size_t UpdatePlayerSharedSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationUpdatePlayerSharedSecretRequest) };
    serializedSize += (m_friendlyName.size() + 1);
    serializedSize += (m_secretKey.size() + 1);
    return serializedSize;
}

void UpdatePlayerSharedSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationUpdatePlayerSharedSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationUpdatePlayerSharedSecretRequest);
    memcpy(stringBuffer, m_friendlyName.data(), m_friendlyName.size() + 1);
    serializedStruct->friendlyName = stringBuffer;
    stringBuffer += m_friendlyName.size() + 1;
    memcpy(stringBuffer, m_secretKey.data(), m_secretKey.size() + 1);
    serializedStruct->secretKey = stringBuffer;
    stringBuffer += m_secretKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

UpdatePolicyRequest::UpdatePolicyRequest() :
    PFAuthenticationUpdatePolicyRequest{}
{
}

UpdatePolicyRequest::UpdatePolicyRequest(const UpdatePolicyRequest& src) :
    PFAuthenticationUpdatePolicyRequest{ src },
    m_policyName{ src.m_policyName },
    m_statements{ src.m_statements }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyRequest::UpdatePolicyRequest(UpdatePolicyRequest&& src) :
    PFAuthenticationUpdatePolicyRequest{ src },
    m_policyName{ std::move(src.m_policyName) },
    m_statements{ std::move(src.m_statements) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyRequest::UpdatePolicyRequest(const PFAuthenticationUpdatePolicyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePolicyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "OverwritePolicy", overwritePolicy);
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
    JsonUtils::ObjectGetMember(input, "PolicyVersion", policyVersion);
    JsonUtils::ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
}

JsonValue UpdatePolicyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationUpdatePolicyRequest>(*this);
}

UpdatePolicyResponse::UpdatePolicyResponse() :
    PFAuthenticationUpdatePolicyResponse{}
{
}

UpdatePolicyResponse::UpdatePolicyResponse(const UpdatePolicyResponse& src) :
    PFAuthenticationUpdatePolicyResponse{ src },
    m_policyName{ src.m_policyName },
    m_statements{ src.m_statements }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyResponse::UpdatePolicyResponse(UpdatePolicyResponse&& src) :
    PFAuthenticationUpdatePolicyResponse{ src },
    m_policyName{ std::move(src.m_policyName) },
    m_statements{ std::move(src.m_statements) }
{
    policyName = m_policyName.empty() ? nullptr : m_policyName.data();
    statements = m_statements.Empty() ? nullptr : m_statements.Data();
}

UpdatePolicyResponse::UpdatePolicyResponse(const PFAuthenticationUpdatePolicyResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UpdatePolicyResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PolicyName", m_policyName, policyName);
    JsonUtils::ObjectGetMember(input, "Statements", m_statements, statements, statementsCount);
}

JsonValue UpdatePolicyResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationUpdatePolicyResponse>(*this);
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest() :
    PFAuthenticationGetPhotonAuthenticationTokenRequest{}
{
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest(const GetPhotonAuthenticationTokenRequest& src) :
    PFAuthenticationGetPhotonAuthenticationTokenRequest{ src },
    m_photonApplicationId{ src.m_photonApplicationId }
{
    photonApplicationId = m_photonApplicationId.empty() ? nullptr : m_photonApplicationId.data();
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest(GetPhotonAuthenticationTokenRequest&& src) :
    PFAuthenticationGetPhotonAuthenticationTokenRequest{ src },
    m_photonApplicationId{ std::move(src.m_photonApplicationId) }
{
    photonApplicationId = m_photonApplicationId.empty() ? nullptr : m_photonApplicationId.data();
}

GetPhotonAuthenticationTokenRequest::GetPhotonAuthenticationTokenRequest(const PFAuthenticationGetPhotonAuthenticationTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPhotonAuthenticationTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PhotonApplicationId", m_photonApplicationId, photonApplicationId);
}

JsonValue GetPhotonAuthenticationTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetPhotonAuthenticationTokenRequest>(*this);
}

size_t GetPhotonAuthenticationTokenRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationGetPhotonAuthenticationTokenRequest) };
    serializedSize += (m_photonApplicationId.size() + 1);
    return serializedSize;
}

void GetPhotonAuthenticationTokenRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationGetPhotonAuthenticationTokenRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationGetPhotonAuthenticationTokenRequest);
    memcpy(stringBuffer, m_photonApplicationId.data(), m_photonApplicationId.size() + 1);
    serializedStruct->photonApplicationId = stringBuffer;
    stringBuffer += m_photonApplicationId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult() :
    PFAuthenticationGetPhotonAuthenticationTokenResult{}
{
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult(const GetPhotonAuthenticationTokenResult& src) :
    PFAuthenticationGetPhotonAuthenticationTokenResult{ src },
    m_photonCustomAuthenticationToken{ src.m_photonCustomAuthenticationToken }
{
    photonCustomAuthenticationToken = m_photonCustomAuthenticationToken.empty() ? nullptr : m_photonCustomAuthenticationToken.data();
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult(GetPhotonAuthenticationTokenResult&& src) :
    PFAuthenticationGetPhotonAuthenticationTokenResult{ src },
    m_photonCustomAuthenticationToken{ std::move(src.m_photonCustomAuthenticationToken) }
{
    photonCustomAuthenticationToken = m_photonCustomAuthenticationToken.empty() ? nullptr : m_photonCustomAuthenticationToken.data();
}

GetPhotonAuthenticationTokenResult::GetPhotonAuthenticationTokenResult(const PFAuthenticationGetPhotonAuthenticationTokenResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetPhotonAuthenticationTokenResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PhotonCustomAuthenticationToken", m_photonCustomAuthenticationToken, photonCustomAuthenticationToken);
}

JsonValue GetPhotonAuthenticationTokenResult::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetPhotonAuthenticationTokenResult>(*this);
}

size_t GetPhotonAuthenticationTokenResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationGetPhotonAuthenticationTokenResult) };
    serializedSize += (m_photonCustomAuthenticationToken.size() + 1);
    return serializedSize;
}

void GetPhotonAuthenticationTokenResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationGetPhotonAuthenticationTokenResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationGetPhotonAuthenticationTokenResult);
    memcpy(stringBuffer, m_photonCustomAuthenticationToken.data(), m_photonCustomAuthenticationToken.size() + 1);
    serializedStruct->photonCustomAuthenticationToken = stringBuffer;
    stringBuffer += m_photonCustomAuthenticationToken.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest() :
    PFAuthenticationGetTitlePublicKeyRequest{}
{
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest(const GetTitlePublicKeyRequest& src) :
    PFAuthenticationGetTitlePublicKeyRequest{ src },
    m_titleId{ src.m_titleId },
    m_titleSharedSecret{ src.m_titleSharedSecret }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titleSharedSecret = m_titleSharedSecret.empty() ? nullptr : m_titleSharedSecret.data();
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest(GetTitlePublicKeyRequest&& src) :
    PFAuthenticationGetTitlePublicKeyRequest{ src },
    m_titleId{ std::move(src.m_titleId) },
    m_titleSharedSecret{ std::move(src.m_titleSharedSecret) }
{
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    titleSharedSecret = m_titleSharedSecret.empty() ? nullptr : m_titleSharedSecret.data();
}

GetTitlePublicKeyRequest::GetTitlePublicKeyRequest(const PFAuthenticationGetTitlePublicKeyRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitlePublicKeyRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "TitleSharedSecret", m_titleSharedSecret, titleSharedSecret);
}

JsonValue GetTitlePublicKeyRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetTitlePublicKeyRequest>(*this);
}

size_t GetTitlePublicKeyRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationGetTitlePublicKeyRequest) };
    serializedSize += (m_titleId.size() + 1);
    serializedSize += (m_titleSharedSecret.size() + 1);
    return serializedSize;
}

void GetTitlePublicKeyRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationGetTitlePublicKeyRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationGetTitlePublicKeyRequest);
    memcpy(stringBuffer, m_titleId.data(), m_titleId.size() + 1);
    serializedStruct->titleId = stringBuffer;
    stringBuffer += m_titleId.size() + 1;
    memcpy(stringBuffer, m_titleSharedSecret.data(), m_titleSharedSecret.size() + 1);
    serializedStruct->titleSharedSecret = stringBuffer;
    stringBuffer += m_titleSharedSecret.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult() :
    PFAuthenticationGetTitlePublicKeyResult{}
{
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult(const GetTitlePublicKeyResult& src) :
    PFAuthenticationGetTitlePublicKeyResult{ src },
    m_rSAPublicKey{ src.m_rSAPublicKey }
{
    rSAPublicKey = m_rSAPublicKey.empty() ? nullptr : m_rSAPublicKey.data();
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult(GetTitlePublicKeyResult&& src) :
    PFAuthenticationGetTitlePublicKeyResult{ src },
    m_rSAPublicKey{ std::move(src.m_rSAPublicKey) }
{
    rSAPublicKey = m_rSAPublicKey.empty() ? nullptr : m_rSAPublicKey.data();
}

GetTitlePublicKeyResult::GetTitlePublicKeyResult(const PFAuthenticationGetTitlePublicKeyResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetTitlePublicKeyResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "RSAPublicKey", m_rSAPublicKey, rSAPublicKey);
}

JsonValue GetTitlePublicKeyResult::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetTitlePublicKeyResult>(*this);
}

size_t GetTitlePublicKeyResult::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationGetTitlePublicKeyResult) };
    serializedSize += (m_rSAPublicKey.size() + 1);
    return serializedSize;
}

void GetTitlePublicKeyResult::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationGetTitlePublicKeyResult{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationGetTitlePublicKeyResult);
    memcpy(stringBuffer, m_rSAPublicKey.data(), m_rSAPublicKey.size() + 1);
    serializedStruct->rSAPublicKey = stringBuffer;
    stringBuffer += m_rSAPublicKey.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest() :
    PFAuthenticationLoginWithAndroidDeviceIDRequest{}
{
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest(const LoginWithAndroidDeviceIDRequest& src) :
    PFAuthenticationLoginWithAndroidDeviceIDRequest{ src },
    m_androidDevice{ src.m_androidDevice },
    m_androidDeviceId{ src.m_androidDeviceId },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_OS{ src.m_OS },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest(LoginWithAndroidDeviceIDRequest&& src) :
    PFAuthenticationLoginWithAndroidDeviceIDRequest{ src },
    m_androidDevice{ std::move(src.m_androidDevice) },
    m_androidDeviceId{ std::move(src.m_androidDeviceId) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_OS{ std::move(src.m_OS) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    androidDevice = m_androidDevice.empty() ? nullptr : m_androidDevice.data();
    androidDeviceId = m_androidDeviceId.empty() ? nullptr : m_androidDeviceId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAndroidDeviceIDRequest::LoginWithAndroidDeviceIDRequest(const PFAuthenticationLoginWithAndroidDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithAndroidDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AndroidDevice", m_androidDevice, androidDevice);
    JsonUtils::ObjectGetMember(input, "AndroidDeviceId", m_androidDeviceId, androidDeviceId);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithAndroidDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithAndroidDeviceIDRequest>(*this);
}

EntityTokenResponse::EntityTokenResponse() :
    PFAuthenticationEntityTokenResponse{}
{
}

EntityTokenResponse::EntityTokenResponse(const EntityTokenResponse& src) :
    PFAuthenticationEntityTokenResponse{ src },
    m_entity{ src.m_entity },
    m_entityToken{ src.m_entityToken },
    m_tokenExpiration{ src.m_tokenExpiration }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
    tokenExpiration = m_tokenExpiration ? m_tokenExpiration.operator->() : nullptr;
}

EntityTokenResponse::EntityTokenResponse(EntityTokenResponse&& src) :
    PFAuthenticationEntityTokenResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_entityToken{ std::move(src.m_entityToken) },
    m_tokenExpiration{ std::move(src.m_tokenExpiration) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
    tokenExpiration = m_tokenExpiration ? m_tokenExpiration.operator->() : nullptr;
}

EntityTokenResponse::EntityTokenResponse(const PFAuthenticationEntityTokenResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void EntityTokenResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
    JsonUtils::ObjectGetMember(input, "TokenExpiration", m_tokenExpiration, tokenExpiration, true);
}

JsonValue EntityTokenResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationEntityTokenResponse>(*this);
}

UserSettings::UserSettings() :
    PFAuthenticationUserSettings{}
{
}


UserSettings::UserSettings(const PFAuthenticationUserSettings& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void UserSettings::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "GatherDeviceInfo", gatherDeviceInfo);
    JsonUtils::ObjectGetMember(input, "GatherFocusInfo", gatherFocusInfo);
    JsonUtils::ObjectGetMember(input, "NeedsAttribution", needsAttribution);
}

JsonValue UserSettings::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationUserSettings>(*this);
}

size_t UserSettings::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationUserSettings) };
    return serializedSize;
}

void UserSettings::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationUserSettings{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationUserSettings);
    UNREFERENCED_PARAMETER(serializedStruct);
    assert(stringBuffer - bufferSize == buffer);
}

LoginResult::LoginResult()
{
}

LoginResult::LoginResult(const LoginResult& src) :
    entityToken{ src.entityToken },
    infoResultPayload{ src.infoResultPayload },
    lastLoginTime{ src.lastLoginTime },
    newlyCreated{ src.newlyCreated },
    playFabId{ src.playFabId },
    sessionTicket{ src.sessionTicket },
    settingsForUser{ src.settingsForUser },
    treatmentAssignment{ src.treatmentAssignment }
{
}

LoginResult::LoginResult(LoginResult&& src) :
    entityToken{ std::move(src.entityToken) },
    infoResultPayload{ std::move(src.infoResultPayload) },
    lastLoginTime{ std::move(src.lastLoginTime) },
    newlyCreated{ std::move(src.newlyCreated) },
    playFabId{ std::move(src.playFabId) },
    sessionTicket{ std::move(src.sessionTicket) },
    settingsForUser{ std::move(src.settingsForUser) },
    treatmentAssignment{ std::move(src.treatmentAssignment) }
{
}

void LoginResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EntityToken", entityToken);
    JsonUtils::ObjectGetMember(input, "InfoResultPayload", infoResultPayload);
    JsonUtils::ObjectGetMember(input, "LastLoginTime", lastLoginTime, true);
    JsonUtils::ObjectGetMember(input, "NewlyCreated", newlyCreated);
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    JsonUtils::ObjectGetMember(input, "SessionTicket", sessionTicket);
    JsonUtils::ObjectGetMember(input, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectGetMember(input, "TreatmentAssignment", treatmentAssignment);
}

JsonValue LoginResult::ToJson() const
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EntityToken", entityToken);
    JsonUtils::ObjectAddMember(output, "InfoResultPayload", infoResultPayload);
    JsonUtils::ObjectAddMember(output, "LastLoginTime", lastLoginTime, true);
    JsonUtils::ObjectAddMember(output, "NewlyCreated", newlyCreated);
    JsonUtils::ObjectAddMember(output, "PlayFabId", playFabId);
    JsonUtils::ObjectAddMember(output, "SessionTicket", sessionTicket);
    JsonUtils::ObjectAddMember(output, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectAddMember(output, "TreatmentAssignment", treatmentAssignment);
    return output;
}

LoginWithAppleRequest::LoginWithAppleRequest() :
    PFAuthenticationLoginWithAppleRequest{}
{
}

LoginWithAppleRequest::LoginWithAppleRequest(const LoginWithAppleRequest& src) :
    PFAuthenticationLoginWithAppleRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_identityToken{ src.m_identityToken },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAppleRequest::LoginWithAppleRequest(LoginWithAppleRequest&& src) :
    PFAuthenticationLoginWithAppleRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_identityToken{ std::move(src.m_identityToken) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithAppleRequest::LoginWithAppleRequest(const PFAuthenticationLoginWithAppleRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithAppleRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithAppleRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithAppleRequest>(*this);
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest() :
    PFAuthenticationLoginWithCustomIDRequest{}
{
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest(const LoginWithCustomIDRequest& src) :
    PFAuthenticationLoginWithCustomIDRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customId{ src.m_customId },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest(LoginWithCustomIDRequest&& src) :
    PFAuthenticationLoginWithCustomIDRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customId{ std::move(src.m_customId) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customId = m_customId.empty() ? nullptr : m_customId.data();
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithCustomIDRequest::LoginWithCustomIDRequest(const PFAuthenticationLoginWithCustomIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithCustomIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomId", m_customId, customId);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithCustomIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithCustomIDRequest>(*this);
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest() :
    PFAuthenticationLoginWithEmailAddressRequest{}
{
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest(const LoginWithEmailAddressRequest& src) :
    PFAuthenticationLoginWithEmailAddressRequest{ src },
    m_customTags{ src.m_customTags },
    m_email{ src.m_email },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_password{ src.m_password },
    m_titleId{ src.m_titleId }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest(LoginWithEmailAddressRequest&& src) :
    PFAuthenticationLoginWithEmailAddressRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_email{ std::move(src.m_email) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_password{ std::move(src.m_password) },
    m_titleId{ std::move(src.m_titleId) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    email = m_email.empty() ? nullptr : m_email.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithEmailAddressRequest::LoginWithEmailAddressRequest(const PFAuthenticationLoginWithEmailAddressRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithEmailAddressRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithEmailAddressRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithEmailAddressRequest>(*this);
}

LoginWithFacebookRequest::LoginWithFacebookRequest() :
    PFAuthenticationLoginWithFacebookRequest{}
{
}

LoginWithFacebookRequest::LoginWithFacebookRequest(const LoginWithFacebookRequest& src) :
    PFAuthenticationLoginWithFacebookRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookRequest::LoginWithFacebookRequest(LoginWithFacebookRequest&& src) :
    PFAuthenticationLoginWithFacebookRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookRequest::LoginWithFacebookRequest(const PFAuthenticationLoginWithFacebookRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithFacebookRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithFacebookRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithFacebookRequest>(*this);
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest() :
    PFAuthenticationLoginWithFacebookInstantGamesIdRequest{}
{
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest(const LoginWithFacebookInstantGamesIdRequest& src) :
    PFAuthenticationLoginWithFacebookInstantGamesIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_facebookInstantGamesSignature{ src.m_facebookInstantGamesSignature },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest(LoginWithFacebookInstantGamesIdRequest&& src) :
    PFAuthenticationLoginWithFacebookInstantGamesIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_facebookInstantGamesSignature{ std::move(src.m_facebookInstantGamesSignature) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    facebookInstantGamesSignature = m_facebookInstantGamesSignature.empty() ? nullptr : m_facebookInstantGamesSignature.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithFacebookInstantGamesIdRequest::LoginWithFacebookInstantGamesIdRequest(const PFAuthenticationLoginWithFacebookInstantGamesIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithFacebookInstantGamesIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "FacebookInstantGamesSignature", m_facebookInstantGamesSignature, facebookInstantGamesSignature);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithFacebookInstantGamesIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithFacebookInstantGamesIdRequest>(*this);
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest() :
    PFAuthenticationLoginWithGameCenterRequest{}
{
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest(const LoginWithGameCenterRequest& src) :
    PFAuthenticationLoginWithGameCenterRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerId{ src.m_playerId },
    m_playerSecret{ src.m_playerSecret },
    m_publicKeyUrl{ src.m_publicKeyUrl },
    m_salt{ src.m_salt },
    m_signature{ src.m_signature },
    m_timestamp{ src.m_timestamp },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest(LoginWithGameCenterRequest&& src) :
    PFAuthenticationLoginWithGameCenterRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerId{ std::move(src.m_playerId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_publicKeyUrl{ std::move(src.m_publicKeyUrl) },
    m_salt{ std::move(src.m_salt) },
    m_signature{ std::move(src.m_signature) },
    m_timestamp{ std::move(src.m_timestamp) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerId = m_playerId.empty() ? nullptr : m_playerId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    publicKeyUrl = m_publicKeyUrl.empty() ? nullptr : m_publicKeyUrl.data();
    salt = m_salt.empty() ? nullptr : m_salt.data();
    signature = m_signature.empty() ? nullptr : m_signature.data();
    timestamp = m_timestamp.empty() ? nullptr : m_timestamp.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGameCenterRequest::LoginWithGameCenterRequest(const PFAuthenticationLoginWithGameCenterRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithGameCenterRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerId", m_playerId, playerId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "PublicKeyUrl", m_publicKeyUrl, publicKeyUrl);
    JsonUtils::ObjectGetMember(input, "Salt", m_salt, salt);
    JsonUtils::ObjectGetMember(input, "Signature", m_signature, signature);
    JsonUtils::ObjectGetMember(input, "Timestamp", m_timestamp, timestamp);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithGameCenterRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithGameCenterRequest>(*this);
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest() :
    PFAuthenticationLoginWithGoogleAccountRequest{}
{
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest(const LoginWithGoogleAccountRequest& src) :
    PFAuthenticationLoginWithGoogleAccountRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_serverAuthCode{ src.m_serverAuthCode },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest(LoginWithGoogleAccountRequest&& src) :
    PFAuthenticationLoginWithGoogleAccountRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_serverAuthCode{ std::move(src.m_serverAuthCode) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverAuthCode = m_serverAuthCode.empty() ? nullptr : m_serverAuthCode.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithGoogleAccountRequest::LoginWithGoogleAccountRequest(const PFAuthenticationLoginWithGoogleAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithGoogleAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "ServerAuthCode", m_serverAuthCode, serverAuthCode);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithGoogleAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithGoogleAccountRequest>(*this);
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest() :
    PFAuthenticationLoginWithIOSDeviceIDRequest{}
{
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest(const LoginWithIOSDeviceIDRequest& src) :
    PFAuthenticationLoginWithIOSDeviceIDRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_deviceId{ src.m_deviceId },
    m_deviceModel{ src.m_deviceModel },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_OS{ src.m_OS },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest(LoginWithIOSDeviceIDRequest&& src) :
    PFAuthenticationLoginWithIOSDeviceIDRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_deviceId{ std::move(src.m_deviceId) },
    m_deviceModel{ std::move(src.m_deviceModel) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_OS{ std::move(src.m_OS) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    deviceId = m_deviceId.empty() ? nullptr : m_deviceId.data();
    deviceModel = m_deviceModel.empty() ? nullptr : m_deviceModel.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    OS = m_OS.empty() ? nullptr : m_OS.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithIOSDeviceIDRequest::LoginWithIOSDeviceIDRequest(const PFAuthenticationLoginWithIOSDeviceIDRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithIOSDeviceIDRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DeviceId", m_deviceId, deviceId);
    JsonUtils::ObjectGetMember(input, "DeviceModel", m_deviceModel, deviceModel);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "OS", m_OS, OS);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithIOSDeviceIDRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithIOSDeviceIDRequest>(*this);
}

LoginWithKongregateRequest::LoginWithKongregateRequest() :
    PFAuthenticationLoginWithKongregateRequest{}
{
}

LoginWithKongregateRequest::LoginWithKongregateRequest(const LoginWithKongregateRequest& src) :
    PFAuthenticationLoginWithKongregateRequest{ src },
    m_authTicket{ src.m_authTicket },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_kongregateId{ src.m_kongregateId },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithKongregateRequest::LoginWithKongregateRequest(LoginWithKongregateRequest&& src) :
    PFAuthenticationLoginWithKongregateRequest{ src },
    m_authTicket{ std::move(src.m_authTicket) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_kongregateId{ std::move(src.m_kongregateId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    authTicket = m_authTicket.empty() ? nullptr : m_authTicket.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    kongregateId = m_kongregateId.empty() ? nullptr : m_kongregateId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithKongregateRequest::LoginWithKongregateRequest(const PFAuthenticationLoginWithKongregateRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithKongregateRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthTicket", m_authTicket, authTicket);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "KongregateId", m_kongregateId, kongregateId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithKongregateRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithKongregateRequest>(*this);
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest() :
    PFAuthenticationLoginWithNintendoServiceAccountRequest{}
{
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest(const LoginWithNintendoServiceAccountRequest& src) :
    PFAuthenticationLoginWithNintendoServiceAccountRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_identityToken{ src.m_identityToken },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest(LoginWithNintendoServiceAccountRequest&& src) :
    PFAuthenticationLoginWithNintendoServiceAccountRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_identityToken{ std::move(src.m_identityToken) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    identityToken = m_identityToken.empty() ? nullptr : m_identityToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoServiceAccountRequest::LoginWithNintendoServiceAccountRequest(const PFAuthenticationLoginWithNintendoServiceAccountRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithNintendoServiceAccountRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "IdentityToken", m_identityToken, identityToken);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithNintendoServiceAccountRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithNintendoServiceAccountRequest>(*this);
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest() :
    PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest{}
{
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest(const LoginWithNintendoSwitchDeviceIdRequest& src) :
    PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_nintendoSwitchDeviceId{ src.m_nintendoSwitchDeviceId },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest(LoginWithNintendoSwitchDeviceIdRequest&& src) :
    PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_nintendoSwitchDeviceId{ std::move(src.m_nintendoSwitchDeviceId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    nintendoSwitchDeviceId = m_nintendoSwitchDeviceId.empty() ? nullptr : m_nintendoSwitchDeviceId.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithNintendoSwitchDeviceIdRequest::LoginWithNintendoSwitchDeviceIdRequest(const PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithNintendoSwitchDeviceIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "NintendoSwitchDeviceId", m_nintendoSwitchDeviceId, nintendoSwitchDeviceId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithNintendoSwitchDeviceIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest>(*this);
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest() :
    PFAuthenticationLoginWithOpenIdConnectRequest{}
{
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest(const LoginWithOpenIdConnectRequest& src) :
    PFAuthenticationLoginWithOpenIdConnectRequest{ src },
    m_connectionId{ src.m_connectionId },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_idToken{ src.m_idToken },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest(LoginWithOpenIdConnectRequest&& src) :
    PFAuthenticationLoginWithOpenIdConnectRequest{ src },
    m_connectionId{ std::move(src.m_connectionId) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_idToken{ std::move(src.m_idToken) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    connectionId = m_connectionId.empty() ? nullptr : m_connectionId.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    idToken = m_idToken.empty() ? nullptr : m_idToken.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithOpenIdConnectRequest::LoginWithOpenIdConnectRequest(const PFAuthenticationLoginWithOpenIdConnectRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithOpenIdConnectRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "ConnectionId", m_connectionId, connectionId);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "IdToken", m_idToken, idToken);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithOpenIdConnectRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithOpenIdConnectRequest>(*this);
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest() :
    PFAuthenticationLoginWithPlayFabRequest{}
{
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest(const LoginWithPlayFabRequest& src) :
    PFAuthenticationLoginWithPlayFabRequest{ src },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_password{ src.m_password },
    m_titleId{ src.m_titleId },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest(LoginWithPlayFabRequest&& src) :
    PFAuthenticationLoginWithPlayFabRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_password{ std::move(src.m_password) },
    m_titleId{ std::move(src.m_titleId) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

LoginWithPlayFabRequest::LoginWithPlayFabRequest(const PFAuthenticationLoginWithPlayFabRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithPlayFabRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue LoginWithPlayFabRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithPlayFabRequest>(*this);
}

LoginWithPSNRequest::LoginWithPSNRequest() :
    PFAuthenticationLoginWithPSNRequest{}
{
}

LoginWithPSNRequest::LoginWithPSNRequest(const LoginWithPSNRequest& src) :
    PFAuthenticationLoginWithPSNRequest{ src },
    m_authCode{ src.m_authCode },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_issuerId{ src.m_issuerId },
    m_playerSecret{ src.m_playerSecret },
    m_redirectUri{ src.m_redirectUri },
    m_titleId{ src.m_titleId }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithPSNRequest::LoginWithPSNRequest(LoginWithPSNRequest&& src) :
    PFAuthenticationLoginWithPSNRequest{ src },
    m_authCode{ std::move(src.m_authCode) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_issuerId{ std::move(src.m_issuerId) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_redirectUri{ std::move(src.m_redirectUri) },
    m_titleId{ std::move(src.m_titleId) }
{
    authCode = m_authCode.empty() ? nullptr : m_authCode.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    issuerId = m_issuerId ? m_issuerId.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    redirectUri = m_redirectUri.empty() ? nullptr : m_redirectUri.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithPSNRequest::LoginWithPSNRequest(const PFAuthenticationLoginWithPSNRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithPSNRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AuthCode", m_authCode, authCode);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "IssuerId", m_issuerId, issuerId);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "RedirectUri", m_redirectUri, redirectUri);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithPSNRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithPSNRequest>(*this);
}

LoginWithSteamRequest::LoginWithSteamRequest() :
    PFAuthenticationLoginWithSteamRequest{}
{
}

LoginWithSteamRequest::LoginWithSteamRequest(const LoginWithSteamRequest& src) :
    PFAuthenticationLoginWithSteamRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_steamTicket{ src.m_steamTicket },
    m_titleId{ src.m_titleId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithSteamRequest::LoginWithSteamRequest(LoginWithSteamRequest&& src) :
    PFAuthenticationLoginWithSteamRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_steamTicket{ std::move(src.m_steamTicket) },
    m_titleId{ std::move(src.m_titleId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    steamTicket = m_steamTicket.empty() ? nullptr : m_steamTicket.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithSteamRequest::LoginWithSteamRequest(const PFAuthenticationLoginWithSteamRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithSteamRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "SteamTicket", m_steamTicket, steamTicket);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithSteamRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithSteamRequest>(*this);
}

LoginWithTwitchRequest::LoginWithTwitchRequest() :
    PFAuthenticationLoginWithTwitchRequest{}
{
}

LoginWithTwitchRequest::LoginWithTwitchRequest(const LoginWithTwitchRequest& src) :
    PFAuthenticationLoginWithTwitchRequest{ src },
    m_accessToken{ src.m_accessToken },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithTwitchRequest::LoginWithTwitchRequest(LoginWithTwitchRequest&& src) :
    PFAuthenticationLoginWithTwitchRequest{ src },
    m_accessToken{ std::move(src.m_accessToken) },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) }
{
    accessToken = m_accessToken.empty() ? nullptr : m_accessToken.data();
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
}

LoginWithTwitchRequest::LoginWithTwitchRequest(const PFAuthenticationLoginWithTwitchRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithTwitchRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "AccessToken", m_accessToken, accessToken);
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
}

JsonValue LoginWithTwitchRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithTwitchRequest>(*this);
}

ClientLoginWithXboxRequest::ClientLoginWithXboxRequest() :
    PFAuthenticationClientLoginWithXboxRequest{}
{
}

ClientLoginWithXboxRequest::ClientLoginWithXboxRequest(const ClientLoginWithXboxRequest& src) :
    PFAuthenticationClientLoginWithXboxRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_titleId{ src.m_titleId },
    m_xboxToken{ src.m_xboxToken }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ClientLoginWithXboxRequest::ClientLoginWithXboxRequest(ClientLoginWithXboxRequest&& src) :
    PFAuthenticationClientLoginWithXboxRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_titleId{ std::move(src.m_titleId) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ClientLoginWithXboxRequest::ClientLoginWithXboxRequest(const PFAuthenticationClientLoginWithXboxRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientLoginWithXboxRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ClientLoginWithXboxRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationClientLoginWithXboxRequest>(*this);
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest() :
    PFAuthenticationRegisterPlayFabUserRequest{}
{
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest(const RegisterPlayFabUserRequest& src) :
    PFAuthenticationRegisterPlayFabUserRequest{ src },
    m_customTags{ src.m_customTags },
    m_displayName{ src.m_displayName },
    m_email{ src.m_email },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_password{ src.m_password },
    m_playerSecret{ src.m_playerSecret },
    m_requireBothUsernameAndEmail{ src.m_requireBothUsernameAndEmail },
    m_titleId{ src.m_titleId },
    m_username{ src.m_username }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    email = m_email.empty() ? nullptr : m_email.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    requireBothUsernameAndEmail = m_requireBothUsernameAndEmail ? m_requireBothUsernameAndEmail.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest(RegisterPlayFabUserRequest&& src) :
    PFAuthenticationRegisterPlayFabUserRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_displayName{ std::move(src.m_displayName) },
    m_email{ std::move(src.m_email) },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_password{ std::move(src.m_password) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_requireBothUsernameAndEmail{ std::move(src.m_requireBothUsernameAndEmail) },
    m_titleId{ std::move(src.m_titleId) },
    m_username{ std::move(src.m_username) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    displayName = m_displayName.empty() ? nullptr : m_displayName.data();
    email = m_email.empty() ? nullptr : m_email.data();
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    password = m_password.empty() ? nullptr : m_password.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    requireBothUsernameAndEmail = m_requireBothUsernameAndEmail ? m_requireBothUsernameAndEmail.operator->() : nullptr;
    titleId = m_titleId.empty() ? nullptr : m_titleId.data();
    username = m_username.empty() ? nullptr : m_username.data();
}

RegisterPlayFabUserRequest::RegisterPlayFabUserRequest(const PFAuthenticationRegisterPlayFabUserRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void RegisterPlayFabUserRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "DisplayName", m_displayName, displayName);
    JsonUtils::ObjectGetMember(input, "Email", m_email, email);
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Password", m_password, password);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "RequireBothUsernameAndEmail", m_requireBothUsernameAndEmail, requireBothUsernameAndEmail);
    JsonUtils::ObjectGetMember(input, "TitleId", m_titleId, titleId);
    JsonUtils::ObjectGetMember(input, "Username", m_username, username);
}

JsonValue RegisterPlayFabUserRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationRegisterPlayFabUserRequest>(*this);
}

RegisterPlayFabUserResult::RegisterPlayFabUserResult()
{
}

RegisterPlayFabUserResult::RegisterPlayFabUserResult(const RegisterPlayFabUserResult& src) :
    entityToken{ src.entityToken },
    playFabId{ src.playFabId },
    sessionTicket{ src.sessionTicket },
    settingsForUser{ src.settingsForUser },
    username{ src.username }
{
}

RegisterPlayFabUserResult::RegisterPlayFabUserResult(RegisterPlayFabUserResult&& src) :
    entityToken{ std::move(src.entityToken) },
    playFabId{ std::move(src.playFabId) },
    sessionTicket{ std::move(src.sessionTicket) },
    settingsForUser{ std::move(src.settingsForUser) },
    username{ std::move(src.username) }
{
}

void RegisterPlayFabUserResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EntityToken", entityToken);
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    JsonUtils::ObjectGetMember(input, "SessionTicket", sessionTicket);
    JsonUtils::ObjectGetMember(input, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectGetMember(input, "Username", username);
}

JsonValue RegisterPlayFabUserResult::ToJson() const
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EntityToken", entityToken);
    JsonUtils::ObjectAddMember(output, "PlayFabId", playFabId);
    JsonUtils::ObjectAddMember(output, "SessionTicket", sessionTicket);
    JsonUtils::ObjectAddMember(output, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectAddMember(output, "Username", username);
    return output;
}

ClientSetPlayerSecretRequest::ClientSetPlayerSecretRequest() :
    PFAuthenticationClientSetPlayerSecretRequest{}
{
}

ClientSetPlayerSecretRequest::ClientSetPlayerSecretRequest(const ClientSetPlayerSecretRequest& src) :
    PFAuthenticationClientSetPlayerSecretRequest{ src },
    m_encryptedRequest{ src.m_encryptedRequest },
    m_playerSecret{ src.m_playerSecret }
{
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
}

ClientSetPlayerSecretRequest::ClientSetPlayerSecretRequest(ClientSetPlayerSecretRequest&& src) :
    PFAuthenticationClientSetPlayerSecretRequest{ src },
    m_encryptedRequest{ std::move(src.m_encryptedRequest) },
    m_playerSecret{ std::move(src.m_playerSecret) }
{
    encryptedRequest = m_encryptedRequest.empty() ? nullptr : m_encryptedRequest.data();
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
}

ClientSetPlayerSecretRequest::ClientSetPlayerSecretRequest(const PFAuthenticationClientSetPlayerSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ClientSetPlayerSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EncryptedRequest", m_encryptedRequest, encryptedRequest);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
}

JsonValue ClientSetPlayerSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationClientSetPlayerSecretRequest>(*this);
}

size_t ClientSetPlayerSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationClientSetPlayerSecretRequest) };
    serializedSize += (m_encryptedRequest.size() + 1);
    serializedSize += (m_playerSecret.size() + 1);
    return serializedSize;
}

void ClientSetPlayerSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationClientSetPlayerSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationClientSetPlayerSecretRequest);
    memcpy(stringBuffer, m_encryptedRequest.data(), m_encryptedRequest.size() + 1);
    serializedStruct->encryptedRequest = stringBuffer;
    stringBuffer += m_encryptedRequest.size() + 1;
    memcpy(stringBuffer, m_playerSecret.data(), m_playerSecret.size() + 1);
    serializedStruct->playerSecret = stringBuffer;
    stringBuffer += m_playerSecret.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest() :
    PFAuthenticationAuthenticateSessionTicketRequest{}
{
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest(const AuthenticateSessionTicketRequest& src) :
    PFAuthenticationAuthenticateSessionTicketRequest{ src },
    m_sessionTicket{ src.m_sessionTicket }
{
    sessionTicket = m_sessionTicket.empty() ? nullptr : m_sessionTicket.data();
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest(AuthenticateSessionTicketRequest&& src) :
    PFAuthenticationAuthenticateSessionTicketRequest{ src },
    m_sessionTicket{ std::move(src.m_sessionTicket) }
{
    sessionTicket = m_sessionTicket.empty() ? nullptr : m_sessionTicket.data();
}

AuthenticateSessionTicketRequest::AuthenticateSessionTicketRequest(const PFAuthenticationAuthenticateSessionTicketRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AuthenticateSessionTicketRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "SessionTicket", m_sessionTicket, sessionTicket);
}

JsonValue AuthenticateSessionTicketRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationAuthenticateSessionTicketRequest>(*this);
}

size_t AuthenticateSessionTicketRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationAuthenticateSessionTicketRequest) };
    serializedSize += (m_sessionTicket.size() + 1);
    return serializedSize;
}

void AuthenticateSessionTicketRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationAuthenticateSessionTicketRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationAuthenticateSessionTicketRequest);
    memcpy(stringBuffer, m_sessionTicket.data(), m_sessionTicket.size() + 1);
    serializedStruct->sessionTicket = stringBuffer;
    stringBuffer += m_sessionTicket.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult() :
    PFAuthenticationAuthenticateSessionTicketResult{}
{
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult(const AuthenticateSessionTicketResult& src) :
    PFAuthenticationAuthenticateSessionTicketResult{ src },
    m_isSessionTicketExpired{ src.m_isSessionTicketExpired },
    m_userInfo{ src.m_userInfo }
{
    isSessionTicketExpired = m_isSessionTicketExpired ? m_isSessionTicketExpired.operator->() : nullptr;
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult(AuthenticateSessionTicketResult&& src) :
    PFAuthenticationAuthenticateSessionTicketResult{ src },
    m_isSessionTicketExpired{ std::move(src.m_isSessionTicketExpired) },
    m_userInfo{ std::move(src.m_userInfo) }
{
    isSessionTicketExpired = m_isSessionTicketExpired ? m_isSessionTicketExpired.operator->() : nullptr;
    userInfo = m_userInfo ? m_userInfo.operator->() : nullptr;
}

AuthenticateSessionTicketResult::AuthenticateSessionTicketResult(const PFAuthenticationAuthenticateSessionTicketResult& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void AuthenticateSessionTicketResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "IsSessionTicketExpired", m_isSessionTicketExpired, isSessionTicketExpired);
    JsonUtils::ObjectGetMember(input, "UserInfo", m_userInfo, userInfo);
}

JsonValue AuthenticateSessionTicketResult::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationAuthenticateSessionTicketResult>(*this);
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest() :
    PFAuthenticationLoginWithServerCustomIdRequest{}
{
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest(const LoginWithServerCustomIdRequest& src) :
    PFAuthenticationLoginWithServerCustomIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_playerSecret{ src.m_playerSecret },
    m_serverCustomId{ src.m_serverCustomId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest(LoginWithServerCustomIdRequest&& src) :
    PFAuthenticationLoginWithServerCustomIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_serverCustomId{ std::move(src.m_serverCustomId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    serverCustomId = m_serverCustomId.empty() ? nullptr : m_serverCustomId.data();
}

LoginWithServerCustomIdRequest::LoginWithServerCustomIdRequest(const PFAuthenticationLoginWithServerCustomIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithServerCustomIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "ServerCustomId", m_serverCustomId, serverCustomId);
}

JsonValue LoginWithServerCustomIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithServerCustomIdRequest>(*this);
}

ServerLoginResult::ServerLoginResult()
{
}

ServerLoginResult::ServerLoginResult(const ServerLoginResult& src) :
    entityToken{ src.entityToken },
    infoResultPayload{ src.infoResultPayload },
    lastLoginTime{ src.lastLoginTime },
    newlyCreated{ src.newlyCreated },
    playFabId{ src.playFabId },
    sessionTicket{ src.sessionTicket },
    settingsForUser{ src.settingsForUser },
    treatmentAssignment{ src.treatmentAssignment }
{
}

ServerLoginResult::ServerLoginResult(ServerLoginResult&& src) :
    entityToken{ std::move(src.entityToken) },
    infoResultPayload{ std::move(src.infoResultPayload) },
    lastLoginTime{ std::move(src.lastLoginTime) },
    newlyCreated{ std::move(src.newlyCreated) },
    playFabId{ std::move(src.playFabId) },
    sessionTicket{ std::move(src.sessionTicket) },
    settingsForUser{ std::move(src.settingsForUser) },
    treatmentAssignment{ std::move(src.treatmentAssignment) }
{
}

void ServerLoginResult::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "EntityToken", entityToken);
    JsonUtils::ObjectGetMember(input, "InfoResultPayload", infoResultPayload);
    JsonUtils::ObjectGetMember(input, "LastLoginTime", lastLoginTime, true);
    JsonUtils::ObjectGetMember(input, "NewlyCreated", newlyCreated);
    JsonUtils::ObjectGetMember(input, "PlayFabId", playFabId);
    JsonUtils::ObjectGetMember(input, "SessionTicket", sessionTicket);
    JsonUtils::ObjectGetMember(input, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectGetMember(input, "TreatmentAssignment", treatmentAssignment);
}

JsonValue ServerLoginResult::ToJson() const
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EntityToken", entityToken);
    JsonUtils::ObjectAddMember(output, "InfoResultPayload", infoResultPayload);
    JsonUtils::ObjectAddMember(output, "LastLoginTime", lastLoginTime, true);
    JsonUtils::ObjectAddMember(output, "NewlyCreated", newlyCreated);
    JsonUtils::ObjectAddMember(output, "PlayFabId", playFabId);
    JsonUtils::ObjectAddMember(output, "SessionTicket", sessionTicket);
    JsonUtils::ObjectAddMember(output, "SettingsForUser", settingsForUser);
    JsonUtils::ObjectAddMember(output, "TreatmentAssignment", treatmentAssignment);
    return output;
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest() :
    PFAuthenticationLoginWithSteamIdRequest{}
{
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest(const LoginWithSteamIdRequest& src) :
    PFAuthenticationLoginWithSteamIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_steamId{ src.m_steamId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest(LoginWithSteamIdRequest&& src) :
    PFAuthenticationLoginWithSteamIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_steamId{ std::move(src.m_steamId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    steamId = m_steamId.empty() ? nullptr : m_steamId.data();
}

LoginWithSteamIdRequest::LoginWithSteamIdRequest(const PFAuthenticationLoginWithSteamIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithSteamIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "SteamId", m_steamId, steamId);
}

JsonValue LoginWithSteamIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithSteamIdRequest>(*this);
}

ServerLoginWithXboxRequest::ServerLoginWithXboxRequest() :
    PFAuthenticationServerLoginWithXboxRequest{}
{
}

ServerLoginWithXboxRequest::ServerLoginWithXboxRequest(const ServerLoginWithXboxRequest& src) :
    PFAuthenticationServerLoginWithXboxRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_xboxToken{ src.m_xboxToken }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ServerLoginWithXboxRequest::ServerLoginWithXboxRequest(ServerLoginWithXboxRequest&& src) :
    PFAuthenticationServerLoginWithXboxRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_xboxToken{ std::move(src.m_xboxToken) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    xboxToken = m_xboxToken.empty() ? nullptr : m_xboxToken.data();
}

ServerLoginWithXboxRequest::ServerLoginWithXboxRequest(const PFAuthenticationServerLoginWithXboxRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerLoginWithXboxRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "XboxToken", m_xboxToken, xboxToken);
}

JsonValue ServerLoginWithXboxRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationServerLoginWithXboxRequest>(*this);
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest() :
    PFAuthenticationLoginWithXboxIdRequest{}
{
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest(const LoginWithXboxIdRequest& src) :
    PFAuthenticationLoginWithXboxIdRequest{ src },
    m_createAccount{ src.m_createAccount },
    m_customTags{ src.m_customTags },
    m_infoRequestParameters{ src.m_infoRequestParameters },
    m_sandbox{ src.m_sandbox },
    m_xboxId{ src.m_xboxId }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxId = m_xboxId.empty() ? nullptr : m_xboxId.data();
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest(LoginWithXboxIdRequest&& src) :
    PFAuthenticationLoginWithXboxIdRequest{ src },
    m_createAccount{ std::move(src.m_createAccount) },
    m_customTags{ std::move(src.m_customTags) },
    m_infoRequestParameters{ std::move(src.m_infoRequestParameters) },
    m_sandbox{ std::move(src.m_sandbox) },
    m_xboxId{ std::move(src.m_xboxId) }
{
    createAccount = m_createAccount ? m_createAccount.operator->() : nullptr;
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    infoRequestParameters = m_infoRequestParameters ? m_infoRequestParameters.operator->() : nullptr;
    sandbox = m_sandbox.empty() ? nullptr : m_sandbox.data();
    xboxId = m_xboxId.empty() ? nullptr : m_xboxId.data();
}

LoginWithXboxIdRequest::LoginWithXboxIdRequest(const PFAuthenticationLoginWithXboxIdRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void LoginWithXboxIdRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CreateAccount", m_createAccount, createAccount);
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "InfoRequestParameters", m_infoRequestParameters, infoRequestParameters);
    JsonUtils::ObjectGetMember(input, "Sandbox", m_sandbox, sandbox);
    JsonUtils::ObjectGetMember(input, "XboxId", m_xboxId, xboxId);
}

JsonValue LoginWithXboxIdRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationLoginWithXboxIdRequest>(*this);
}

ServerSetPlayerSecretRequest::ServerSetPlayerSecretRequest() :
    PFAuthenticationServerSetPlayerSecretRequest{}
{
}

ServerSetPlayerSecretRequest::ServerSetPlayerSecretRequest(const ServerSetPlayerSecretRequest& src) :
    PFAuthenticationServerSetPlayerSecretRequest{ src },
    m_playerSecret{ src.m_playerSecret },
    m_playFabId{ src.m_playFabId }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerSetPlayerSecretRequest::ServerSetPlayerSecretRequest(ServerSetPlayerSecretRequest&& src) :
    PFAuthenticationServerSetPlayerSecretRequest{ src },
    m_playerSecret{ std::move(src.m_playerSecret) },
    m_playFabId{ std::move(src.m_playFabId) }
{
    playerSecret = m_playerSecret.empty() ? nullptr : m_playerSecret.data();
    playFabId = m_playFabId.empty() ? nullptr : m_playFabId.data();
}

ServerSetPlayerSecretRequest::ServerSetPlayerSecretRequest(const PFAuthenticationServerSetPlayerSecretRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ServerSetPlayerSecretRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "PlayerSecret", m_playerSecret, playerSecret);
    JsonUtils::ObjectGetMember(input, "PlayFabId", m_playFabId, playFabId);
}

JsonValue ServerSetPlayerSecretRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationServerSetPlayerSecretRequest>(*this);
}

size_t ServerSetPlayerSecretRequest::SerializedSize() const
{
    size_t serializedSize{ sizeof(PFAuthenticationServerSetPlayerSecretRequest) };
    serializedSize += (m_playerSecret.size() + 1);
    serializedSize += (m_playFabId.size() + 1);
    return serializedSize;
}

void ServerSetPlayerSecretRequest::Serialize(void* buffer, size_t bufferSize) const
{
    auto serializedStruct = new (buffer) PFAuthenticationServerSetPlayerSecretRequest{ *this };
    char* stringBuffer = static_cast<char*>(buffer) + sizeof(PFAuthenticationServerSetPlayerSecretRequest);
    memcpy(stringBuffer, m_playerSecret.data(), m_playerSecret.size() + 1);
    serializedStruct->playerSecret = stringBuffer;
    stringBuffer += m_playerSecret.size() + 1;
    memcpy(stringBuffer, m_playFabId.data(), m_playFabId.size() + 1);
    serializedStruct->playFabId = stringBuffer;
    stringBuffer += m_playFabId.size() + 1;
    assert(stringBuffer - bufferSize == buffer);
}

GetEntityTokenRequest::GetEntityTokenRequest() :
    PFAuthenticationGetEntityTokenRequest{}
{
}

GetEntityTokenRequest::GetEntityTokenRequest(const GetEntityTokenRequest& src) :
    PFAuthenticationGetEntityTokenRequest{ src },
    m_customTags{ src.m_customTags },
    m_entity{ src.m_entity }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityTokenRequest::GetEntityTokenRequest(GetEntityTokenRequest&& src) :
    PFAuthenticationGetEntityTokenRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entity{ std::move(src.m_entity) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entity = m_entity ? m_entity.operator->() : nullptr;
}

GetEntityTokenRequest::GetEntityTokenRequest(const PFAuthenticationGetEntityTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void GetEntityTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
}

JsonValue GetEntityTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationGetEntityTokenRequest>(*this);
}

GetEntityTokenResponse::GetEntityTokenResponse()
{
}

GetEntityTokenResponse::GetEntityTokenResponse(const GetEntityTokenResponse& src) :
    entity{ src.entity },
    entityToken{ src.entityToken },
    tokenExpiration{ src.tokenExpiration }
{
}

GetEntityTokenResponse::GetEntityTokenResponse(GetEntityTokenResponse&& src) :
    entity{ std::move(src.entity) },
    entityToken{ std::move(src.entityToken) },
    tokenExpiration{ std::move(src.tokenExpiration) }
{
}

void GetEntityTokenResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", entity);
    JsonUtils::ObjectGetMember(input, "EntityToken", entityToken);
    JsonUtils::ObjectGetMember(input, "TokenExpiration", tokenExpiration, true);
}

JsonValue GetEntityTokenResponse::ToJson() const
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", entity);
    JsonUtils::ObjectAddMember(output, "EntityToken", entityToken);
    JsonUtils::ObjectAddMember(output, "TokenExpiration", tokenExpiration, true);
    return output;
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest() :
    PFAuthenticationValidateEntityTokenRequest{}
{
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest(const ValidateEntityTokenRequest& src) :
    PFAuthenticationValidateEntityTokenRequest{ src },
    m_customTags{ src.m_customTags },
    m_entityToken{ src.m_entityToken }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest(ValidateEntityTokenRequest&& src) :
    PFAuthenticationValidateEntityTokenRequest{ src },
    m_customTags{ std::move(src.m_customTags) },
    m_entityToken{ std::move(src.m_entityToken) }
{
    customTags = m_customTags.Empty() ? nullptr : m_customTags.Data();
    entityToken = m_entityToken.empty() ? nullptr : m_entityToken.data();
}

ValidateEntityTokenRequest::ValidateEntityTokenRequest(const PFAuthenticationValidateEntityTokenRequest& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateEntityTokenRequest::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "CustomTags", m_customTags, customTags, customTagsCount);
    JsonUtils::ObjectGetMember(input, "EntityToken", m_entityToken, entityToken);
}

JsonValue ValidateEntityTokenRequest::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationValidateEntityTokenRequest>(*this);
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse() :
    PFAuthenticationValidateEntityTokenResponse{}
{
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse(const ValidateEntityTokenResponse& src) :
    PFAuthenticationValidateEntityTokenResponse{ src },
    m_entity{ src.m_entity },
    m_identifiedDeviceType{ src.m_identifiedDeviceType },
    m_identityProvider{ src.m_identityProvider },
    m_lineage{ src.m_lineage }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    identifiedDeviceType = m_identifiedDeviceType ? m_identifiedDeviceType.operator->() : nullptr;
    identityProvider = m_identityProvider ? m_identityProvider.operator->() : nullptr;
    lineage = m_lineage ? m_lineage.operator->() : nullptr;
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse(ValidateEntityTokenResponse&& src) :
    PFAuthenticationValidateEntityTokenResponse{ src },
    m_entity{ std::move(src.m_entity) },
    m_identifiedDeviceType{ std::move(src.m_identifiedDeviceType) },
    m_identityProvider{ std::move(src.m_identityProvider) },
    m_lineage{ std::move(src.m_lineage) }
{
    entity = m_entity ? m_entity.operator->() : nullptr;
    identifiedDeviceType = m_identifiedDeviceType ? m_identifiedDeviceType.operator->() : nullptr;
    identityProvider = m_identityProvider ? m_identityProvider.operator->() : nullptr;
    lineage = m_lineage ? m_lineage.operator->() : nullptr;
}

ValidateEntityTokenResponse::ValidateEntityTokenResponse(const PFAuthenticationValidateEntityTokenResponse& src)
{
    FromJson(JsonUtils::ToJson(src));
}

void ValidateEntityTokenResponse::FromJson(const JsonValue& input)
{
    JsonUtils::ObjectGetMember(input, "Entity", m_entity, entity);
    JsonUtils::ObjectGetMember(input, "IdentifiedDeviceType", m_identifiedDeviceType, identifiedDeviceType);
    JsonUtils::ObjectGetMember(input, "IdentityProvider", m_identityProvider, identityProvider);
    JsonUtils::ObjectGetMember(input, "Lineage", m_lineage, lineage);
}

JsonValue ValidateEntityTokenResponse::ToJson() const
{
    return JsonUtils::ToJson<PFAuthenticationValidateEntityTokenResponse>(*this);
}

} // namespace AuthenticationModels

namespace JsonUtils
{
// Serialization methods for public models

template<>
inline JsonValue ToJson<>(const PFAuthenticationOpenIdIssuerInformation& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthorizationUrl", input.authorizationUrl);
    JsonUtils::ObjectAddMember(output, "Issuer", input.issuer);
    JsonUtils::ObjectAddMember(output, "JsonWebKeySet", input.jsonWebKeySet);
    JsonUtils::ObjectAddMember(output, "TokenUrl", input.tokenUrl);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationCreateOpenIdConnectionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ClientId", input.clientId);
    JsonUtils::ObjectAddMember(output, "ClientSecret", input.clientSecret);
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "IgnoreNonce", input.ignoreNonce);
    JsonUtils::ObjectAddMember(output, "IssuerDiscoveryUrl", input.issuerDiscoveryUrl);
    JsonUtils::ObjectAddMember(output, "IssuerInformation", input.issuerInformation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationCreatePlayerSharedSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationCreatePlayerSharedSecretResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationDeleteOpenIdConnectionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationDeletePlayerSharedSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationSharedSecret& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Disabled", input.disabled);
    JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetPlayerSharedSecretsResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SharedSecrets", input.sharedSecrets, input.sharedSecretsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetPolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationApiCondition& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "HasSignatureOrEncryption", input.hasSignatureOrEncryption);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationPermissionStatement& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Action", input.action);
    JsonUtils::ObjectAddMember(output, "ApiConditions", input.apiConditions);
    JsonUtils::ObjectAddMember(output, "Comment", input.comment);
    JsonUtils::ObjectAddMember(output, "Effect", input.effect);
    JsonUtils::ObjectAddMember(output, "Principal", input.principal);
    JsonUtils::ObjectAddMember(output, "Resource", input.resource);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetPolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    JsonUtils::ObjectAddMember(output, "PolicyVersion", input.policyVersion);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationOpenIdConnection& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ClientId", input.clientId);
    JsonUtils::ObjectAddMember(output, "ClientSecret", input.clientSecret);
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "DiscoverConfiguration", input.discoverConfiguration);
    JsonUtils::ObjectAddMember(output, "IssuerInformation", input.issuerInformation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationListOpenIdConnectionResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Connections", input.connections, input.connectionsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationAdminSetPlayerSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationUpdateOpenIdConnectionRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ClientId", input.clientId);
    JsonUtils::ObjectAddMember(output, "ClientSecret", input.clientSecret);
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "IssuerDiscoveryUrl", input.issuerDiscoveryUrl);
    JsonUtils::ObjectAddMember(output, "IssuerInformation", input.issuerInformation);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationUpdatePlayerSharedSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Disabled", input.disabled);
    JsonUtils::ObjectAddMember(output, "FriendlyName", input.friendlyName);
    JsonUtils::ObjectAddMember(output, "SecretKey", input.secretKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationUpdatePolicyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "OverwritePolicy", input.overwritePolicy);
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    JsonUtils::ObjectAddMember(output, "PolicyVersion", input.policyVersion);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationUpdatePolicyResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PolicyName", input.policyName);
    JsonUtils::ObjectAddMember(output, "Statements", input.statements, input.statementsCount);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetPhotonAuthenticationTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PhotonApplicationId", input.photonApplicationId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetPhotonAuthenticationTokenResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PhotonCustomAuthenticationToken", input.photonCustomAuthenticationToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetTitlePublicKeyRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "TitleSharedSecret", input.titleSharedSecret);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetTitlePublicKeyResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "RSAPublicKey", input.rSAPublicKey);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithAndroidDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AndroidDevice", input.androidDevice);
    JsonUtils::ObjectAddMember(output, "AndroidDeviceId", input.androidDeviceId);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationEntityTokenResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
    JsonUtils::ObjectAddMember(output, "TokenExpiration", input.tokenExpiration, true);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationUserSettings& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "GatherDeviceInfo", input.gatherDeviceInfo);
    JsonUtils::ObjectAddMember(output, "GatherFocusInfo", input.gatherFocusInfo);
    JsonUtils::ObjectAddMember(output, "NeedsAttribution", input.needsAttribution);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithAppleRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithCustomIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomId", input.customId);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithEmailAddressRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithFacebookRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithFacebookInstantGamesIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "FacebookInstantGamesSignature", input.facebookInstantGamesSignature);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithGameCenterRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerId", input.playerId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "PublicKeyUrl", input.publicKeyUrl);
    JsonUtils::ObjectAddMember(output, "Salt", input.salt);
    JsonUtils::ObjectAddMember(output, "Signature", input.signature);
    JsonUtils::ObjectAddMember(output, "Timestamp", input.timestamp);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithGoogleAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "ServerAuthCode", input.serverAuthCode);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithIOSDeviceIDRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DeviceId", input.deviceId);
    JsonUtils::ObjectAddMember(output, "DeviceModel", input.deviceModel);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "OS", input.OS);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithKongregateRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthTicket", input.authTicket);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "KongregateId", input.kongregateId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithNintendoServiceAccountRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "IdentityToken", input.identityToken);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithNintendoSwitchDeviceIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "NintendoSwitchDeviceId", input.nintendoSwitchDeviceId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithOpenIdConnectRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "ConnectionId", input.connectionId);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "IdToken", input.idToken);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithPlayFabRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithPSNRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AuthCode", input.authCode);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "IssuerId", input.issuerId);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "RedirectUri", input.redirectUri);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithSteamRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "SteamTicket", input.steamTicket);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithTwitchRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "AccessToken", input.accessToken);
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationClientLoginWithXboxRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationRegisterPlayFabUserRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "DisplayName", input.displayName);
    JsonUtils::ObjectAddMember(output, "Email", input.email);
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Password", input.password);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "RequireBothUsernameAndEmail", input.requireBothUsernameAndEmail);
    JsonUtils::ObjectAddMember(output, "TitleId", input.titleId);
    JsonUtils::ObjectAddMember(output, "Username", input.username);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationClientSetPlayerSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "EncryptedRequest", input.encryptedRequest);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationAuthenticateSessionTicketRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "SessionTicket", input.sessionTicket);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationAuthenticateSessionTicketResult& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "IsSessionTicketExpired", input.isSessionTicketExpired);
    JsonUtils::ObjectAddMember(output, "UserInfo", input.userInfo);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithServerCustomIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "ServerCustomId", input.serverCustomId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithSteamIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "SteamId", input.steamId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationServerLoginWithXboxRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "XboxToken", input.xboxToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationLoginWithXboxIdRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CreateAccount", input.createAccount);
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "InfoRequestParameters", input.infoRequestParameters);
    JsonUtils::ObjectAddMember(output, "Sandbox", input.sandbox);
    JsonUtils::ObjectAddMember(output, "XboxId", input.xboxId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationServerSetPlayerSecretRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "PlayerSecret", input.playerSecret);
    JsonUtils::ObjectAddMember(output, "PlayFabId", input.playFabId);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationGetEntityTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationValidateEntityTokenRequest& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "CustomTags", input.customTags, input.customTagsCount);
    JsonUtils::ObjectAddMember(output, "EntityToken", input.entityToken);
    return output;
}

template<>
inline JsonValue ToJson<>(const PFAuthenticationValidateEntityTokenResponse& input)
{
    JsonValue output{ rapidjson::kObjectType };
    JsonUtils::ObjectAddMember(output, "Entity", input.entity);
    JsonUtils::ObjectAddMember(output, "IdentifiedDeviceType", input.identifiedDeviceType);
    JsonUtils::ObjectAddMember(output, "IdentityProvider", input.identityProvider);
    JsonUtils::ObjectAddMember(output, "Lineage", input.lineage);
    return output;
}

} // namespace JsonUtils

} // namespace PlayFab
