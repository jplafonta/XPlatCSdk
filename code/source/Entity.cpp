#include "stdafx.h"
#include "Entity.h"

#define AS_STRING(charPtr) (charPtr ? String{ charPtr } : String{})

namespace PlayFab
{

Entity::Entity(SharedPtr<HttpClient const> httpClient, LoginContext&& loginContext, const LoginResult& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ MakeShared<AuthTokens>(result) },
    eventManagerAPI{ m_httpClient, m_authTokens },
    QoSAPI{ m_httpClient, m_authTokens },
    clientAPI{ m_httpClient, m_authTokens },
    authenticationAPI{ m_httpClient, m_authTokens },
    cloudScriptAPI{ m_httpClient, m_authTokens },
    dataAPI{ m_httpClient, m_authTokens },
    eventsAPI{ m_httpClient, m_authTokens },
    experimentationAPI{ m_httpClient, m_authTokens },
    insightsAPI{ m_httpClient, m_authTokens },
    groupsAPI{ m_httpClient, m_authTokens },
    localizationAPI{ m_httpClient, m_authTokens },
    multiplayerAPI{ m_httpClient, m_authTokens },
    profilesAPI{ m_httpClient, m_authTokens },
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

Entity::Entity(SharedPtr<HttpClient const> httpClient, LoginContext&& loginContext, const ClientModels::RegisterPlayFabUserResult& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ MakeShared<AuthTokens>(result) },
    eventManagerAPI{ m_httpClient, m_authTokens },
    QoSAPI{ m_httpClient, m_authTokens },
    clientAPI{ m_httpClient, m_authTokens },
    authenticationAPI{ m_httpClient, m_authTokens },
    cloudScriptAPI{ m_httpClient, m_authTokens },
    dataAPI{ m_httpClient, m_authTokens },
    eventsAPI{ m_httpClient, m_authTokens },
    experimentationAPI{ m_httpClient, m_authTokens },
    insightsAPI{ m_httpClient, m_authTokens },
    groupsAPI{ m_httpClient, m_authTokens },
    localizationAPI{ m_httpClient, m_authTokens },
    multiplayerAPI{ m_httpClient, m_authTokens },
    profilesAPI{ m_httpClient, m_authTokens },
    m_loginContext{ std::move(loginContext) },
    m_playFabId{ result.playFabId },
    m_entityId{ AS_STRING(result.entityToken->entity->id) },
    m_entityType{ AS_STRING(result.entityToken->entity->type) },
    m_userSettings{ result.settingsForUser }
{
}

Entity::Entity(SharedPtr<HttpClient const> httpClient, LoginContext&& loginContext, const AuthenticationModels::GetEntityTokenResponse& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ MakeShared<AuthTokens>(result) },
    eventManagerAPI{ m_httpClient, m_authTokens },
    QoSAPI{ m_httpClient, m_authTokens },
    clientAPI{ m_httpClient, m_authTokens },
    authenticationAPI{ m_httpClient, m_authTokens },
    cloudScriptAPI{ m_httpClient, m_authTokens },
    dataAPI{ m_httpClient, m_authTokens },
    eventsAPI{ m_httpClient, m_authTokens },
    experimentationAPI{ m_httpClient, m_authTokens },
    insightsAPI{ m_httpClient, m_authTokens },
    groupsAPI{ m_httpClient, m_authTokens },
    localizationAPI{ m_httpClient, m_authTokens },
    multiplayerAPI{ m_httpClient, m_authTokens },
    profilesAPI{ m_httpClient, m_authTokens },
    m_loginContext{ std::move(loginContext) },
    m_entityId{ AS_STRING(result.entity->id) },
    m_entityType{ AS_STRING(result.entity->type) }
{
}

AsyncOp<SharedPtr<Entity>> Entity::GetEntityToken(
    const PlayFabAuthenticationGetEntityTokenRequest& request,
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
                return MakeShared<Entity>(sharedThis->m_httpClient, LoginContext{} /* TODO */, std::move(resultModel));
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

UserSettings const* Entity::UserSettings() const
{
    return m_userSettings.has_value() ? m_userSettings.operator->() : nullptr;
}

TreatmentAssignment const* Entity::TreatmentAssignment() const
{
    return m_treatmentAssignment.get();
}

AsyncOp<void> Entity::RefreshLogin(const TaskQueue& queue)
{
    UnorderedMap<String, String> headers;
    if (m_loginContext.secretKey)
    {
        headers.emplace("X-SecretKey", *m_loginContext.secretKey);
    }

    return m_httpClient->MakePostRequest(
        m_loginContext.path.data(),
        headers,
        m_loginContext.requestBody,
        queue
    ).Then([sharedThis = shared_from_this(), this](Result<ServiceResponse> result)->Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
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

}