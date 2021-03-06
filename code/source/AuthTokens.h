#pragma once

#include <playfab/PFEntity.h>
#include <Authentication/AuthenticationDataModels.h>

namespace PlayFab
{

class EntityToken : public PFEntityToken
{
public:
    EntityToken(const AuthenticationModels::EntityTokenResponse& tokenResponse);
    EntityToken(const AuthenticationModels::GetEntityTokenResponse& tokenResponse);
    EntityToken(const EntityToken& src);
    EntityToken(EntityToken&& src);
    ~EntityToken() = default;

private:
    String m_token;
    StdExtra::optional<time_t> m_expiration;
};

// Auth tokens needed by to make PlayFab service calls
class AuthTokens
{
public:
    AuthTokens(const AuthenticationModels::LoginResult& loginResult);
    AuthTokens(const AuthenticationModels::ServerLoginResult& loginResult);
    AuthTokens(const AuthenticationModels::RegisterPlayFabUserResult& registerUserResult);
    AuthTokens(const AuthenticationModels::GetEntityTokenResponse& getEntityTokenResponse);

    PlayFab::EntityToken const& EntityToken() const;
    String const& SessionTicket() const;

    void Refresh(const AuthenticationModels::LoginResult& loginResult);
    void Refresh(const AuthenticationModels::ServerLoginResult& loginResult);
    void Refresh(const AuthenticationModels::RegisterPlayFabUserResult& registerUserResult); // Needed? is Registering a User twice valid?
    void Refresh(const AuthenticationModels::GetEntityTokenResponse& getEntityTokenResponse);

private:
    // Most recent entity token. Mutex not required to read.
    std::atomic<PlayFab::EntityToken const*> m_entityToken;
    // All entity tokens. Storing old entity tokens as well so we don't invalidate pointers returned to titles.
    List<PlayFab::EntityToken> m_entityTokens;
    String m_sessionTicket;
    std::mutex m_mutex;
};

}
