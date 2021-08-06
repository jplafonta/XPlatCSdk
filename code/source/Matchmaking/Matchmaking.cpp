#include "stdafx.h"
#include "Matchmaking.h"

namespace PlayFab
{

using namespace MatchmakingModels;

MatchmakingAPI::MatchmakingAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<AuthTokens const> tokens) :
    m_httpClient{ std::move(httpClient) },
    m_tokens{ std::move(tokens) }
{
}

AsyncOp<GetMatchmakerGameInfoResult> MatchmakingAPI::AdminGetMatchmakerGameInfo(
    const PFMatchmakingGetMatchmakerGameInfoRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GetMatchmakerGameInfo" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetMatchmakerGameInfoResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchmakerGameInfoResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchmakerGameInfoResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetMatchmakerGameModesResult> MatchmakingAPI::AdminGetMatchmakerGameModes(
    const PFMatchmakingGetMatchmakerGameModesRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/GetMatchmakerGameModes" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetMatchmakerGameModesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchmakerGameModesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchmakerGameModesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::AdminModifyMatchmakerGameModes(
    const PFMatchmakingModifyMatchmakerGameModesRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Admin/ModifyMatchmakerGameModes" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CurrentGamesResult> MatchmakingAPI::ClientGetCurrentGames(
    const PFMatchmakingCurrentGamesRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetCurrentGames" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CurrentGamesResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CurrentGamesResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CurrentGamesResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GameServerRegionsResult> MatchmakingAPI::ClientGetGameServerRegions(
    const PFMatchmakingGameServerRegionsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/GetGameServerRegions" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GameServerRegionsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GameServerRegionsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GameServerRegionsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<MatchmakeResult> MatchmakingAPI::ClientMatchmake(
    const PFMatchmakingMatchmakeRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/Matchmake" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<MatchmakeResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            MatchmakeResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<MatchmakeResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<StartGameResult> MatchmakingAPI::ClientStartGame(
    const PFMatchmakingClientStartGameRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Client/StartGame" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto sessionTicket{ m_tokens->SessionTicket() };
    if (sessionTicket.empty())
    {
        return E_PF_NOSESSIONTICKET;
    }
    headers.emplace("X-Authorization", std::move(sessionTicket));

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<StartGameResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            StartGameResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<StartGameResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<AuthUserResponse> MatchmakingAPI::AuthUser(
    const PFMatchmakingAuthUserRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Matchmaker/AuthUser" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<AuthUserResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            AuthUserResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<AuthUserResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::PlayerJoined(
    const PFMatchmakingPlayerJoinedRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Matchmaker/PlayerJoined" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::PlayerLeft(
    const PFMatchmakingPlayerLeftRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Matchmaker/PlayerLeft" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<StartGameResponse> MatchmakingAPI::StartGame(
    const PFMatchmakingMatchmakerStartGameRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Matchmaker/StartGame" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<StartGameResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            StartGameResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<StartGameResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<UserInfoResponse> MatchmakingAPI::UserInfo(
    const PFMatchmakingUserInfoRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Matchmaker/UserInfo" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<UserInfoResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            UserInfoResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<UserInfoResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::ServerDeregisterGame(
    const PFMatchmakingDeregisterGameRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/DeregisterGame" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<NotifyMatchmakerPlayerLeftResult> MatchmakingAPI::ServerNotifyMatchmakerPlayerLeft(
    const PFMatchmakingNotifyMatchmakerPlayerLeftRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/NotifyMatchmakerPlayerLeft" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<NotifyMatchmakerPlayerLeftResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            NotifyMatchmakerPlayerLeftResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<NotifyMatchmakerPlayerLeftResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<RedeemMatchmakerTicketResult> MatchmakingAPI::ServerRedeemMatchmakerTicket(
    const PFMatchmakingRedeemMatchmakerTicketRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/RedeemMatchmakerTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RedeemMatchmakerTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RedeemMatchmakerTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RedeemMatchmakerTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::ServerRefreshGameServerInstanceHeartbeat(
    const PFMatchmakingRefreshGameServerInstanceHeartbeatRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/RefreshGameServerInstanceHeartbeat" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<RegisterGameResponse> MatchmakingAPI::ServerRegisterGame(
    const PFMatchmakingRegisterGameRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/RegisterGame" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<RegisterGameResponse>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RegisterGameResponse resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<RegisterGameResponse>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::ServerSetGameServerInstanceData(
    const PFMatchmakingSetGameServerInstanceDataRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/SetGameServerInstanceData" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::ServerSetGameServerInstanceState(
    const PFMatchmakingSetGameServerInstanceStateRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/SetGameServerInstanceState" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::ServerSetGameServerInstanceTags(
    const PFMatchmakingSetGameServerInstanceTagsRequest& request,
    SharedPtr<String const> secretKey,
    SharedPtr<HttpClient const> httpClient,
    const TaskQueue& queue
)
{
    const char* path{ "/Server/SetGameServerInstanceTags" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    if (secretKey == nullptr || secretKey->empty())
    {
        return E_PF_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *secretKey);

    auto requestOp = httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::CancelAllMatchmakingTicketsForPlayer(
    const PFMatchmakingCancelAllMatchmakingTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/CancelAllMatchmakingTicketsForPlayer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::CancelAllServerBackfillTicketsForPlayer(
    const PFMatchmakingCancelAllServerBackfillTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/CancelAllServerBackfillTicketsForPlayer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::CancelMatchmakingTicket(
    const PFMatchmakingCancelMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/CancelMatchmakingTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::CancelServerBackfillTicket(
    const PFMatchmakingCancelServerBackfillTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/CancelServerBackfillTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateMatchmakingTicketResult> MatchmakingAPI::CreateMatchmakingTicket(
    const PFMatchmakingCreateMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/CreateMatchmakingTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateMatchmakingTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateMatchmakingTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateMatchmakingTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateServerBackfillTicketResult> MatchmakingAPI::CreateServerBackfillTicket(
    const PFMatchmakingCreateServerBackfillTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/CreateServerBackfillTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateServerBackfillTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateServerBackfillTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateServerBackfillTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<CreateMatchmakingTicketResult> MatchmakingAPI::CreateServerMatchmakingTicket(
    const PFMatchmakingCreateServerMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/CreateServerMatchmakingTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<CreateMatchmakingTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            CreateMatchmakingTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<CreateMatchmakingTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetMatchResult> MatchmakingAPI::GetMatch(
    const PFMatchmakingGetMatchRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/GetMatch" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetMatchResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetMatchmakingTicketResult> MatchmakingAPI::GetMatchmakingTicket(
    const PFMatchmakingGetMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/GetMatchmakingTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetMatchmakingTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetMatchmakingTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetMatchmakingTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetQueueStatisticsResult> MatchmakingAPI::GetQueueStatistics(
    const PFMatchmakingGetQueueStatisticsRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/GetQueueStatistics" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetQueueStatisticsResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetQueueStatisticsResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetQueueStatisticsResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<GetServerBackfillTicketResult> MatchmakingAPI::GetServerBackfillTicket(
    const PFMatchmakingGetServerBackfillTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/GetServerBackfillTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<GetServerBackfillTicketResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            GetServerBackfillTicketResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<GetServerBackfillTicketResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<void> MatchmakingAPI::JoinMatchmakingTicket(
    const PFMatchmakingJoinMatchmakingTicketRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/JoinMatchmakingTicket" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<void>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            return S_OK;
        }
        else
        {
            return Result<void>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListMatchmakingTicketsForPlayerResult> MatchmakingAPI::ListMatchmakingTicketsForPlayer(
    const PFMatchmakingListMatchmakingTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/ListMatchmakingTicketsForPlayer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListMatchmakingTicketsForPlayerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListMatchmakingTicketsForPlayerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListMatchmakingTicketsForPlayerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<ListServerBackfillTicketsForPlayerResult> MatchmakingAPI::ListServerBackfillTicketsForPlayer(
    const PFMatchmakingListServerBackfillTicketsForPlayerRequest& request,
    const TaskQueue& queue
) const
{
    const char* path{ "/Match/ListServerBackfillTicketsForPlayer" };
    JsonValue requestBody{ JsonUtils::ToJson(request) };
    UnorderedMap<String, String> headers;
    auto& entityToken{ m_tokens->EntityToken() };
    if (!entityToken.token)
    {
        return E_PF_NOENTITYTOKEN;
    }
    headers.emplace("X-EntityToken", entityToken.token);

    auto requestOp = m_httpClient->MakePostRequest(
        path,
        headers,
        requestBody,
        queue
    );

    return requestOp.Then([](Result<ServiceResponse> result) -> Result<ListServerBackfillTicketsForPlayerResult>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ListServerBackfillTicketsForPlayerResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return resultModel;
        }
        else
        {
            return Result<ListServerBackfillTicketsForPlayerResult>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}


}
