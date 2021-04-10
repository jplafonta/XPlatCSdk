#include "stdafx.h"
#include "Entity.h"

namespace PlayFab
{

Entity::Entity(SharedPtr<HttpClient const> httpClient, const ClientModels::LoginResult& result) :
    m_httpClient{ std::move(httpClient) },
    m_authTokens{ new (Allocator<AuthTokens>{}.allocate(1)) AuthTokens{ result.sessionTicket, result.entityToken->entityToken } },
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
    m_playFabId{ result.playFabId },
    m_entityId{ result.entityToken->entity->id },
    m_entityType{ result.entityToken->entity->type }
{
}

Entity::Entity(SharedPtr<HttpClient const> httpClient, const ClientModels::RegisterPlayFabUserResult& result) :
    m_authTokens{ new (Allocator<AuthTokens>{}.allocate(1)) AuthTokens{ result.sessionTicket, result.entityToken->entityToken } },
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
    m_playFabId{ result.playFabId },
    m_entityId{ result.entityToken->entity->id },
    m_entityType{ result.entityToken->entity->type }
{
}

Entity::Entity(SharedPtr<HttpClient const> httpClient, const ServerModels::ServerLoginResult& result) :
    m_authTokens{ new (Allocator<AuthTokens>{}.allocate(1)) AuthTokens{ result.sessionTicket, result.entityToken->entityToken } },
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
    m_playFabId{ result.playFabId },
    m_entityId{ result.entityToken->entity->id },
    m_entityType{ result.entityToken->entity->type }
{
}

Entity::Entity(SharedPtr<HttpClient const> httpClient, const AuthenticationModels::GetEntityTokenResponse& result) :
    m_authTokens{ new (Allocator<AuthTokens>{}.allocate(1)) AuthTokens{ "", result.entityToken } },
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
    m_entityId{ result.entity->id },
    m_entityType{ result.entity->type }
{
}

AsyncOp<void> Entity::GetEntityToken(
    const PlayFabAuthenticationGetEntityTokenRequest& request,
    const TaskQueue& queue
)
{
    UnorderedMap<String, String> headers;
    if (!m_authTokens->EntityToken.empty())
    {
        headers.emplace("X-EntityToken", m_authTokens->EntityToken);
    }
    else if (!m_authTokens->SessionTicket.empty())
    {
        headers.emplace("X-Authorization", m_authTokens->SessionTicket);
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
    ).Then([ sharedThis{ shared_from_this() } ](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AuthenticationModels::GetEntityTokenResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            sharedThis->m_authTokens->EntityToken = resultModel.entityToken;
            sharedThis->m_entityId = resultModel.entity->id;
            sharedThis->m_entityType = resultModel.entity->type;
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

}
