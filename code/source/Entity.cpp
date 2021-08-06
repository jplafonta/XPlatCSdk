#include "stdafx.h"
#include "Entity.h"

#define AS_STRING(charPtr) (charPtr ? String{ charPtr } : String{})

namespace PlayFab
{

Entity::Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::LoginResult& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ MakeShared<AuthTokens>(result) },
    QoSAPI{ m_httpClient, m_authTokens },
    scheduledTaskAPI{ m_httpClient, m_authTokens },
    titleDataManagementAPI{ m_httpClient, m_authTokens },
    playStreamAPI{ m_httpClient, m_authTokens },
    gameServerAPI{ m_httpClient, m_authTokens },
    playerItemManagementAPI{ m_httpClient, m_authTokens },
    accountManagementAPI{ m_httpClient, m_authTokens },
    authenticationAPI{ m_httpClient, m_authTokens },
    playerDataManagementAPI{ m_httpClient, m_authTokens },
    segmentsAPI{ m_httpClient, m_authTokens },
    contentAPI{ m_httpClient, m_authTokens },
    cloudScriptAPI{ m_httpClient, m_authTokens },
    matchmakingAPI{ m_httpClient, m_authTokens },
    characterAPI{ m_httpClient, m_authTokens },
    groupsAPI{ m_httpClient, m_authTokens },
    tradingAPI{ m_httpClient, m_authTokens },
    friendsAPI{ m_httpClient, m_authTokens },
    platformSpecificAPI{ m_httpClient, m_authTokens },
    advertisingAPI{ m_httpClient, m_authTokens },
    analyticsAPI{ m_httpClient, m_authTokens },
    dataAPI{ m_httpClient, m_authTokens },
    experimentationAPI{ m_httpClient, m_authTokens },
    localizationAPI{ m_httpClient, m_authTokens },
    multiplayerServerAPI{ m_httpClient, m_authTokens },
    m_loginContext{ std::move(loginContext) },
    m_playFabId{ result.playFabId },
    m_entityId{ AS_STRING(result.entityToken->entity->id) },
    m_entityType{ AS_STRING(result.entityToken->entity->type) },
    m_playerCombinedInfo{ result.infoResultPayload.has_value() ? MakeUnique<GetPlayerCombinedInfoResultPayload>(*result.infoResultPayload) : nullptr },
    m_lastLoginTime{ result.lastLoginTime },
    m_userSettings{ result.settingsForUser },
    m_treatmentAssignment{ result.treatmentAssignment.has_value() ? MakeUnique<PlayFab::TreatmentAssignment>(*result.treatmentAssignment) : nullptr }
{
}

Entity::Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::ServerLoginResult& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ MakeShared<AuthTokens>(result) },
    QoSAPI{ m_httpClient, m_authTokens },
    scheduledTaskAPI{ m_httpClient, m_authTokens },
    titleDataManagementAPI{ m_httpClient, m_authTokens },
    playStreamAPI{ m_httpClient, m_authTokens },
    gameServerAPI{ m_httpClient, m_authTokens },
    playerItemManagementAPI{ m_httpClient, m_authTokens },
    accountManagementAPI{ m_httpClient, m_authTokens },
    authenticationAPI{ m_httpClient, m_authTokens },
    playerDataManagementAPI{ m_httpClient, m_authTokens },
    segmentsAPI{ m_httpClient, m_authTokens },
    contentAPI{ m_httpClient, m_authTokens },
    cloudScriptAPI{ m_httpClient, m_authTokens },
    matchmakingAPI{ m_httpClient, m_authTokens },
    characterAPI{ m_httpClient, m_authTokens },
    groupsAPI{ m_httpClient, m_authTokens },
    tradingAPI{ m_httpClient, m_authTokens },
    friendsAPI{ m_httpClient, m_authTokens },
    platformSpecificAPI{ m_httpClient, m_authTokens },
    advertisingAPI{ m_httpClient, m_authTokens },
    analyticsAPI{ m_httpClient, m_authTokens },
    dataAPI{ m_httpClient, m_authTokens },
    experimentationAPI{ m_httpClient, m_authTokens },
    localizationAPI{ m_httpClient, m_authTokens },
    multiplayerServerAPI{ m_httpClient, m_authTokens },
    m_loginContext{ std::move(loginContext) },
    m_playFabId{ result.playFabId },
    m_entityId{ AS_STRING(result.entityToken->entity->id) },
    m_entityType{ AS_STRING(result.entityToken->entity->type) },
    m_playerCombinedInfo{ result.infoResultPayload.has_value() ? MakeUnique<GetPlayerCombinedInfoResultPayload>(*result.infoResultPayload) : nullptr },
    m_lastLoginTime{ result.lastLoginTime },
    m_userSettings{ result.settingsForUser },
    m_treatmentAssignment{ result.treatmentAssignment.has_value() ? MakeUnique<PlayFab::TreatmentAssignment>(*result.treatmentAssignment) : nullptr }
{
}

Entity::Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::RegisterPlayFabUserResult& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ MakeShared<AuthTokens>(result) },
    QoSAPI{ m_httpClient, m_authTokens },
    scheduledTaskAPI{ m_httpClient, m_authTokens },
    titleDataManagementAPI{ m_httpClient, m_authTokens },
    playStreamAPI{ m_httpClient, m_authTokens },
    gameServerAPI{ m_httpClient, m_authTokens },
    playerItemManagementAPI{ m_httpClient, m_authTokens },
    accountManagementAPI{ m_httpClient, m_authTokens },
    authenticationAPI{ m_httpClient, m_authTokens },
    playerDataManagementAPI{ m_httpClient, m_authTokens },
    segmentsAPI{ m_httpClient, m_authTokens },
    contentAPI{ m_httpClient, m_authTokens },
    cloudScriptAPI{ m_httpClient, m_authTokens },
    matchmakingAPI{ m_httpClient, m_authTokens },
    characterAPI{ m_httpClient, m_authTokens },
    groupsAPI{ m_httpClient, m_authTokens },
    tradingAPI{ m_httpClient, m_authTokens },
    friendsAPI{ m_httpClient, m_authTokens },
    platformSpecificAPI{ m_httpClient, m_authTokens },
    advertisingAPI{ m_httpClient, m_authTokens },
    analyticsAPI{ m_httpClient, m_authTokens },
    dataAPI{ m_httpClient, m_authTokens },
    experimentationAPI{ m_httpClient, m_authTokens },
    localizationAPI{ m_httpClient, m_authTokens },
    multiplayerServerAPI{ m_httpClient, m_authTokens },
    m_loginContext{ std::move(loginContext) },
    m_playFabId{ result.playFabId },
    m_entityId{ AS_STRING(result.entityToken->entity->id) },
    m_entityType{ AS_STRING(result.entityToken->entity->type) },
    m_userSettings{ result.settingsForUser }
{
}

Entity::Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::GetEntityTokenResponse& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ MakeShared<AuthTokens>(result) },
    QoSAPI{ m_httpClient, m_authTokens },
    scheduledTaskAPI{ m_httpClient, m_authTokens },
    titleDataManagementAPI{ m_httpClient, m_authTokens },
    playStreamAPI{ m_httpClient, m_authTokens },
    gameServerAPI{ m_httpClient, m_authTokens },
    playerItemManagementAPI{ m_httpClient, m_authTokens },
    accountManagementAPI{ m_httpClient, m_authTokens },
    authenticationAPI{ m_httpClient, m_authTokens },
    playerDataManagementAPI{ m_httpClient, m_authTokens },
    segmentsAPI{ m_httpClient, m_authTokens },
    contentAPI{ m_httpClient, m_authTokens },
    cloudScriptAPI{ m_httpClient, m_authTokens },
    matchmakingAPI{ m_httpClient, m_authTokens },
    characterAPI{ m_httpClient, m_authTokens },
    groupsAPI{ m_httpClient, m_authTokens },
    tradingAPI{ m_httpClient, m_authTokens },
    friendsAPI{ m_httpClient, m_authTokens },
    platformSpecificAPI{ m_httpClient, m_authTokens },
    advertisingAPI{ m_httpClient, m_authTokens },
    analyticsAPI{ m_httpClient, m_authTokens },
    dataAPI{ m_httpClient, m_authTokens },
    experimentationAPI{ m_httpClient, m_authTokens },
    localizationAPI{ m_httpClient, m_authTokens },
    multiplayerServerAPI{ m_httpClient, m_authTokens },
    m_loginContext{ std::move(loginContext) },
    m_entityId{ AS_STRING(result.entity->id) },
    m_entityType{ AS_STRING(result.entity->type) }
{
}

AsyncOp<SharedPtr<Entity>> Entity::GetEntityToken(
    const PFAuthenticationGetEntityTokenRequest& request,
    const TaskQueue& queue
)
{
    UnorderedMap<String, String> headers;

    auto& entityToken{ m_authTokens->EntityToken() };
    auto sessionTicket{ m_authTokens->SessionTicket() };

    if (entityToken.token)
    {
        headers.emplace("X-EntityToken", entityToken.token);
    }
    else if (!sessionTicket.empty())
    {
        headers.emplace("X-Authorization", std::move(sessionTicket));
    }
    else
    {
        // Entity should always have at least one non-empty AuthToken
        assert(false);
        return E_UNEXPECTED;
    }

    return m_httpClient->MakePostRequest(
        "/Authentication/GetEntityToken",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ sharedThis{ shared_from_this() } ](Result<ServiceResponse> result) mutable -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AuthenticationModels::GetEntityTokenResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);

            if (sharedThis->m_entityId == AS_STRING(resultModel.entity->id))
            {
                // If we requested an EntityToken for ourselves, update m_authTokens and return "this"
                assert(sharedThis->m_entityType == AS_STRING(resultModel.entity->type));
                sharedThis->m_authTokens->Refresh(resultModel);
                return Result<SharedPtr<Entity>>{ std::move(sharedThis) };
            }
            else
            {
                // Otherwise create and return a new Entity object
                return MakeShared<Entity>(sharedThis->m_httpClient, MakeShared<LoginContext>("/Authentication/GetEntityToken"), std::move(resultModel));
            }
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

String const& Entity::PlayFabId() const
{
    return m_playFabId;
}

String const& Entity::EntityId() const
{
    return m_entityId;
}

String const& Entity::EntityType() const
{
    return m_entityType;
}

PlayFab::EntityToken const& Entity::EntityToken() const
{
    return m_authTokens->EntityToken();
}

GetPlayerCombinedInfoResultPayload const* Entity::PlayerCombinedInfo() const
{
    return m_playerCombinedInfo.get();
}

time_t const* Entity::LastLoginTime() const
{
    return m_lastLoginTime.has_value() ? m_lastLoginTime.operator->() : nullptr;
}

AuthenticationModels::UserSettings const* Entity::UserSettings() const
{
    return m_userSettings.has_value() ? m_userSettings.operator->() : nullptr;
}

TreatmentAssignment const* Entity::TreatmentAssignment() const
{
    return m_treatmentAssignment.get();
}

AsyncOp<void> Entity::RefreshLogin(const TaskQueue& queue)
{
    SharedPtr<Entity> sharedThis{ shared_from_this() };

    return m_loginContext->GetRequestBody(queue.DeriveWorkerQueue()).Then([sharedThis, this, queue = TaskQueue{ queue }](Result<JsonValue> requestBodyResult) -> AsyncOp<ServiceResponse>
    {
        RETURN_IF_FAILED(requestBodyResult.hr);

        return m_httpClient->MakePostRequest(
            m_loginContext->RequestPath(),
            m_loginContext->RequestHeaders(),
            requestBodyResult.Payload(),
            queue
        );

    }).Then([sharedThis, this](Result<ServiceResponse> result)->Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AuthenticationModels::LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            m_authTokens->Refresh(resultModel);
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
        return S_OK;
    });
}

LoginContext::LoginContext(const char* requestPath)
    : m_path{ requestPath }
{
}

LoginContext::LoginContext(const char* requestPath, JsonValue&& requestBody)
    : m_path{ requestPath },
    m_requestBody{ std::move(requestBody) }
{
}

LoginContext::LoginContext(const char* requestPath, JsonValue&& requestBody, UnorderedMap<String, String> requestHeaders)
    : m_path{ requestPath },
    m_requestBody{ std::move(requestBody) },
    m_requestHeaders{ std::move(requestHeaders) }
{
}

const char* LoginContext::RequestPath() const
{
    return m_path.data();
}

AsyncOp<JsonValue> LoginContext::GetRequestBody(const TaskQueue& queue) const
{
    UNREFERENCED_PARAMETER(queue); // No async work to be done in base LoginContext
    JsonValue requestBodyCopy;
    JsonUtils::FromJson(m_requestBody, requestBodyCopy);
    return Result<JsonValue>{ std::move(requestBodyCopy) };
}

const UnorderedMap<String, String>& LoginContext::RequestHeaders() const
{
    return m_requestHeaders;
}

}
