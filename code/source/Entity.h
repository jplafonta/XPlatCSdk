#pragma once

#include <AuthTokens.h>
#include <CallbackManager.h>
#include <Client/ClientDataModels.h>
#include <Authentication/AuthenticationDataModels.h>
#include <Events/Manager/EventManagerApi.h>
#include <QoS/QoSApi.h>
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

// Context needed to re-authenticate an Entity with PlayFab prior to token-expiration
struct LoginContext
{
    String path;
    JsonValue requestBody;
    SharedPtr<String const> secretKey;
};

// An entity authenticated with PlayFab via one of the various login methods. For more detail on PlayFab entities see the service
// documentation here: https://docs.microsoft.com/en-us/gaming/playfab/features/data/entities/quickstart.
class Entity : public std::enable_shared_from_this<Entity>
{
public:
    Entity(SharedPtr<HttpClient const> httpClient, LoginContext&& loginContext, const LoginResult& loginResult);
    Entity(SharedPtr<HttpClient const> httpClient, LoginContext&& loginContext, const ClientModels::RegisterPlayFabUserResult& registerUserResult);
    Entity(SharedPtr<HttpClient const> httpClient, LoginContext&& loginContext, const AuthenticationModels::GetEntityTokenResponse& getEntityTokenResponse);

    Entity(const Entity&) = delete;
    Entity& operator=(const Entity&) = delete;
    ~Entity() = default;

private:
    // The order of members is important here. These fields are needed to initialize APIs so make sure they get initialized first.
    SharedPtr<HttpClient const> m_httpClient;
    SharedPtr<AuthTokens> m_authTokens;

public:
    // Make an arbitrary PlayFab service call. If the result is a token expiration error, a silent re-authenitcation attempt will be made using the
    // cached login context. If that login is successful, the cached AuthTokens will be updated and the original service call will be retried.
    // If the re-authentication attempt is unsuccessful for any reason, the error will be passed along to the client and they will need to
    // manually go through the login flow again.
    template<typename CallT>
    auto MakePlayFabCallWithAuthRetry(const TaskQueue& queue, CallT call) -> typename std::result_of_t<CallT(const TaskQueue&)>;

    // Non-generated implementation for /Authentication/GetEntityToken API call. When GetEntityToken is called by an existing Entity, the service
    // call will be authenticated with either the EntityToken or the ClientSessionTicket. If the Entity Token requested if for the calling Entity
    // (aka just refreshing our token), the AuthTokens will be updated and a SharedPtr to 'this' will be returned. If the token requested is for another
    // entity, a new Entity object will be created and returned.
    AsyncOp<SharedPtr<Entity>> GetEntityToken(const PlayFabAuthenticationGetEntityTokenRequest& request, const TaskQueue& queue);

    // TokenRefreshedCallbacks exist to support PlayFab Party & PlayFab Lobby interfaces which require titles to provide and manually update a raw 
    // entity token. Whenever the Entity token is silently refreshed (ex. during MakePlayFabCallWithAuthRetry) these callbacks will be invoked.
    using TokenRefreshedCallback = std::function<void(const EntityToken&)>;

    CallbackManager<TokenRefreshedCallback> TokenRefreshedCallbacks;

    // Getter methods to retreive Entity properties. All data only guaranteed to be accurate at the time of login. Lifetime of returned data is tied
    // to Entity object.
    String const& PlayFabId() const;
    String const& EntityId() const;
    String const& EntityType() const;
    PlayFab::EntityToken const& EntityToken() const;
    GetPlayerCombinedInfoResultPayload const* PlayerCombinedInfo() const;
    time_t const* LastLoginTime() const;
    UserSettings const* UserSettings() const;
    TreatmentAssignment const* TreatmentAssignment() const;

    // Non-generated APIs
    EventManager::EventManagerAPI eventManagerAPI;
    QoS::QoSAPI const QoSAPI;

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
    AsyncOp<void> RefreshLogin(const TaskQueue& queue);

    LoginContext const m_loginContext;

    // Entity attributes
    String const m_playFabId; // Master_Player_Entity Id for the Player that logged in
    String m_entityId; // Entity Id for the entity
    String m_entityType; // Entity Type for the entity

    UniquePtr<GetPlayerCombinedInfoResultPayload> m_playerCombinedInfo;
    StdExtra::optional<time_t const> m_lastLoginTime;
    StdExtra::optional<PlayFab::UserSettings const> m_userSettings;
    UniquePtr<PlayFab::TreatmentAssignment> m_treatmentAssignment;
};

}

struct PlayFabEntity
{
    PlayFabEntity(PlayFab::SharedPtr<PlayFab::Entity> entity_) : entity{ entity_ } {}
    PlayFabEntity(const PlayFabEntity&) = default;
    ~PlayFabEntity() = default;

    PlayFab::SharedPtr<PlayFab::Entity> entity;
};

namespace PlayFab
{

//------------------------------------------------------------------------------
// Template implementations
//------------------------------------------------------------------------------

template<typename CallT>
auto Entity::MakePlayFabCallWithAuthRetry(const TaskQueue& queue, CallT call) -> typename std::result_of_t<CallT(const TaskQueue&)>
{
    using AsyncOpT = typename std::result_of_t<CallT(const TaskQueue&)>;
    using ResultT = typename Detail::UnwrapAsyncT<typename std::result_of_t<CallT(const TaskQueue&)>>;

    class Operation
    {
    public:
        static AsyncOpT Begin(SharedPtr<Entity> entity, const TaskQueue& queue, CallT&& call)
        {
            UniquePtr<Operation> operation{ new (Allocator<Operation>{}.allocate(1)) Operation(std::move(entity), queue, std::move(call)) };

            operation->m_call(operation->m_queue).Finally(std::bind(&Operation::HandleCallResult, operation.get(), std::placeholders::_1));
            auto asyncContext{ operation->m_asyncContext };

            // Release operation and reclaim upon completion
            operation.release();

            return asyncContext;
        }

    private:
        Operation(SharedPtr<Entity> entity, const TaskQueue& queue, CallT&& call) :
            m_entity{ std::move(entity) },
            m_queue{ queue.DeriveWorkerQueue() },
            m_call{ std::move(call) },
            m_asyncContext{ MakeShared<AsyncOpContext<ResultT>>() },
            m_attemptRefreshLogin{ true }
        {
        }

        void HandleCallResult(Result<ResultT>&& result)
        {
            if (m_attemptRefreshLogin)
            {
                // Only try to refresh login once. If the call still fails after that, bail with returned error
                m_attemptRefreshLogin = false;

                if (result.hr == HTTP_E_STATUS_DENIED || /* REST error code (401) */
                    result.hr == E_PLAYFAB_INTERNAL_EXPIREDAUTHTOKEN || /* PlayFab error code for EntityToken expired */
                    result.hr == E_PLAYFAB_NOTAUTHENTICATED /* PlayFab error code for SessionTicket expired */)
                {
                    m_entity->RefreshLogin(m_queue).Finally([this](Result<void> result)
                    {
                        if (Failed(result))
                        {
                            this->Complete(Result<ResultT>{ result.hr });
                        }
                        else
                        {
                            m_call(m_queue).Finally(std::bind(&Operation::HandleCallResult, this, std::placeholders::_1));
                        }
                    });

                    return;
                }
            }

            // Conditions for retry not met, pass along result
            this->Complete(std::move(result));
        }

        void Complete(Result<ResultT>&& result)
        {
            // Reclaim operation, it will be release after completing AsyncOpContext
            UniquePtr<Operation> reclaim{ this };
            m_asyncContext->Complete(std::move(result));
        }

        SharedPtr<Entity> m_entity;
        TaskQueue m_queue;
        CallT m_call;
        SharedPtr<AsyncOpContext<ResultT>> m_asyncContext;
        bool m_attemptRefreshLogin;
    };

    return Operation::Begin(shared_from_this(), queue, std::move(call));
}

}