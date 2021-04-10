#pragma once

#include <Client/ClientDataModels.h>
#include <Server/ServerDataModels.h>
#include <Authentication/AuthenticationDataModels.h>
#include <Client/ClientApi.h>
#include <Authentication/AuthenticationApi.h>
#include <CloudScript/CloudScriptApi.h>
#include <Data/DataApi.h>
#include <Events/EventsApi.h>
#include <Experimentation/ExperimentationApi.h>
#include <Insights/InsightsApi.h>
#include <Groups/GroupsApi.h>
#include <Localization/LocalizationApi.h>
#include <Multiplayer/MultiplayerApi.h>
#include <Profiles/ProfilesApi.h>

namespace PlayFab
{

// Auth tokens needed by to make PlayFab service calls
struct AuthTokens
{
    String SessionTicket;
    String EntityToken;
};

// An entity authenticated with PlayFab via one of the various login methods. For more detail on PlayFab entities see the service
// documentation here: https://docs.microsoft.com/en-us/gaming/playfab/features/data/entities/quickstart.
class Entity : public std::enable_shared_from_this<Entity>
{
public:
    Entity(SharedPtr<HttpClient const> httpClient, const ClientModels::LoginResult& loginResult);
    Entity(SharedPtr<HttpClient const> httpClient, const ClientModels::RegisterPlayFabUserResult& registerUserResult);
    Entity(SharedPtr<HttpClient const> httpClient, const ServerModels::ServerLoginResult& loginResult);
    Entity(SharedPtr<HttpClient const> httpClient, const AuthenticationModels::GetEntityTokenResponse& getEntityTokenResponse);

    Entity(const Entity&) = delete;
    Entity& operator=(const Entity&) = delete;
    ~Entity() = default;

private:
    // The order of members is important here - HttpClient and AuthTokens are needed to initialize the APIs, so make sure that they get initialized first
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens> m_authTokens;

public:
    // Non-generated implementation for /Authentication/GetEntityToken API call. When GetEntityToken is called by an existing Entity, the service
    // call will be authenticated with either the EntityToken or the ClientSessionTicket. The existing Entity object will be updated with the returned EntityToken
    // if the call succeeds.
    AsyncOp<void> GetEntityToken(const PlayFabAuthenticationGetEntityTokenRequest& request, const TaskQueue& queue);

    ClientAPI const clientAPI;
    AuthenticationAPI const authenticationAPI;
    CloudScriptAPI const cloudScriptAPI;
    DataAPI const dataAPI;
    EventsAPI const eventsAPI;
    ExperimentationAPI const experimentationAPI;
    InsightsAPI const insightsAPI;
    GroupsAPI const groupsAPI;
    LocalizationAPI const localizationAPI;
    MultiplayerAPI const multiplayerAPI;
    ProfilesAPI const profilesAPI;

private:
    // DisableAdvertising is provided for completeness, but changing it is not suggested
    // Disabling this may prevent your advertising-related PlayFab marketplace partners from working correctly
    bool m_disableAdvertising; 
    String const m_playFabId; // Master_Player_Entity Id for the Player that logged in
    String m_advertisingIdType; // Set this to the appropriate AD_TYPE_X constant below
    String m_advertisingIdValue; // Set this to corresponding device value
    String m_entityId; // Entity Id for the active entity
    String m_entityType; // Entity Type for the active entity
};

}

struct PlayFabEntity
{
    PlayFabEntity(PlayFab::SharedPtr<PlayFab::Entity> entity_) : entity{ entity_ } {}
    PlayFabEntity(const PlayFabEntity&) = default;
    ~PlayFabEntity() = default;

    PlayFab::SharedPtr<PlayFab::Entity> entity;
};
