#pragma once

#include <playfab/PlayFabGlobal.h>
#include "HttpClient.h"
#include <Admin/AdminApi.h>
#include <Client/ClientAuthApi.h>
#include <Matchmaker/MatchmakerApi.h>
#include <Server/ServerAuthApi.h>
#include <Server/ServerApi.h>
#include <Authentication/AuthenticationAuthApi.h>

namespace PlayFab
{

class GlobalState
{
public:
    GlobalState(String&& titleId, _In_opt_z_ const char* secretKey, _In_opt_ XTaskQueueHandle backgroundQueue);
    virtual ~GlobalState() = default;

private:
    // The order of members is important here. These fields are needed to initialize APIs so make sure they get initialized first.
    SharedPtr<HttpClient> m_httpClient;
    SharedPtr<String> m_secretKey;
    TaskQueue m_backgroundQueue;

public:
    SharedPtr<HttpClient const> HttpClient() const;

    // Auth APIs (require either secret key or no authorization). Used to get an authenticated Entity object.
    ClientAuthAPI const clientAuthAPI;
    ServerAuthAPI const serverAuthAPI;
    AuthenticationAuthAPI const authenticationAuthAPI;

    // APIs that use secret key authorization (no Entity AuthTokens required)
    AdminAPI const adminAPI;
    MatchmakerAPI const matchmakerAPI;
    ServerAPI const serverAPI;
};

}

struct PlayFabGlobalState
{
    PlayFab::SharedPtr<PlayFab::GlobalState> state;

    static HRESULT Create(
        _In_z_ const char* titleId,
        _In_opt_z_ const char* secretKey,
        _In_opt_ XTaskQueueHandle backgroundQueue,
        _Outptr_ PlayFabStateHandle* stateHandle
    );

    HRESULT CleanupAsync(XAsyncBlock* async);

private:
    PlayFabGlobalState(_In_z_ const char* titleId, _In_opt_z_ const char* secretKey, _In_opt_ XTaskQueueHandle backgroundQueue);
};
