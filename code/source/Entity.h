#pragma once

#include <AuthTokens.h>
#include <CallbackManager.h>
#include <Authentication/AuthenticationDataModels.h>
#include <QoS/QoS.h>
#include <ScheduledTask/ScheduledTask.h>
#include <TitleDataManagement/TitleDataManagement.h>
#include <PlayStream/PlayStream.h>
#include <GameServer/GameServer.h>
#include <PlayerItemManagement/PlayerItemManagement.h>
#include <AccountManagement/AccountManagement.h>
#include <Authentication/Authentication.h>
#include <PlayerDataManagement/PlayerDataManagement.h>
#include <Segments/Segments.h>
#include <Content/Content.h>
#include <CloudScript/CloudScript.h>
#include <Matchmaking/Matchmaking.h>
#include <Character/Character.h>
#include <Groups/Groups.h>
#include <Trading/Trading.h>
#include <Friends/Friends.h>
#include <PlatformSpecific/PlatformSpecific.h>
#include <Advertising/Advertising.h>
#include <Analytics/Analytics.h>
#include <Data/Data.h>
#include <Experimentation/Experimentation.h>
#include <Localization/Localization.h>
#include <MultiplayerServer/MultiplayerServer.h>

namespace PlayFab
{

// Context needed to re-authenticate an Entity with PlayFab prior to token-expiration.
// By default, the original login request will just replayed without modification. For behavior specific to a login API, derive
// from this class and override methods as necessary.
class LoginContext
{
public:
    LoginContext(const char* requestPath);
    LoginContext(const char* requestPath, JsonValue&& requestBody);
    LoginContext(const char* requestPath, JsonValue&& requestBody, UnorderedMap<String, String> requestHeaders);

    virtual const char* RequestPath() const;
    virtual AsyncOp<JsonValue> GetRequestBody(const TaskQueue& queue) const;
    virtual const UnorderedMap<String, String>& RequestHeaders() const;

private:
    String m_path;
    JsonValue m_requestBody;
    UnorderedMap<String, String> m_requestHeaders;
};

// An entity authenticated with PlayFab via one of the various login methods. For more detail on PlayFab entities see the service
// documentation here: https://docs.microsoft.com/en-us/gaming/playfab/features/data/entities/quickstart.
class Entity : public std::enable_shared_from_this<Entity>
{
public:
    Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::LoginResult& loginResult);
    Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::ServerLoginResult& loginResult);
    Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::RegisterPlayFabUserResult& registerUserResult);
    Entity(SharedPtr<HttpClient const> httpClient, SharedPtr<LoginContext const> loginContext, const AuthenticationModels::GetEntityTokenResponse& getEntityTokenResponse);

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
    AsyncOp<SharedPtr<Entity>> GetEntityToken(const PFAuthenticationGetEntityTokenRequest& request, const TaskQueue& queue);

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
    AuthenticationModels::UserSettings const* UserSettings() const;
    TreatmentAssignment const* TreatmentAssignment() const;

    // Non-generated API
    QoS::QoSAPI const QoSAPI;

    ScheduledTaskAPI const scheduledTaskAPI;
    TitleDataManagementAPI const titleDataManagementAPI;
    PlayStreamAPI const playStreamAPI;
    GameServerAPI const gameServerAPI;
    PlayerItemManagementAPI const playerItemManagementAPI;
    AccountManagementAPI const accountManagementAPI;
    AuthenticationAPI const authenticationAPI;
    PlayerDataManagementAPI const playerDataManagementAPI;
    SegmentsAPI const segmentsAPI;
    ContentAPI const contentAPI;
    CloudScriptAPI const cloudScriptAPI;
    MatchmakingAPI const matchmakingAPI;
    CharacterAPI const characterAPI;
    GroupsAPI const groupsAPI;
    TradingAPI const tradingAPI;
    FriendsAPI const friendsAPI;
    PlatformSpecificAPI const platformSpecificAPI;
    AdvertisingAPI const advertisingAPI;
    AnalyticsAPI const analyticsAPI;
    DataAPI const dataAPI;
    ExperimentationAPI const experimentationAPI;
    LocalizationAPI const localizationAPI;
    MultiplayerServerAPI const multiplayerServerAPI;

private:
    AsyncOp<void> RefreshLogin(const TaskQueue& queue);

    SharedPtr<LoginContext const> m_loginContext;

    // Entity attributes
    String const m_playFabId; // Master_Player_Entity Id for the Player that logged in
    String m_entityId; // Entity Id for the entity
    String m_entityType; // Entity Type for the entity

    UniquePtr<GetPlayerCombinedInfoResultPayload> m_playerCombinedInfo;
    StdExtra::optional<time_t const> m_lastLoginTime;
    StdExtra::optional<AuthenticationModels::UserSettings const> m_userSettings;
    UniquePtr<PlayFab::TreatmentAssignment> m_treatmentAssignment;
};

}

struct PFEntity
{
    PFEntity(PlayFab::SharedPtr<PlayFab::Entity> entity_) : entity{ entity_ } {}
    PFEntity(const PFEntity&) = default;
    ~PFEntity() = default;

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
                    result.hr == E_PF_INTERNAL_EXPIREDAUTHTOKEN || /* PlayFab error code for EntityToken expired */
                    result.hr == E_PF_NOTAUTHENTICATED /* PlayFab error code for SessionTicket expired */)
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
