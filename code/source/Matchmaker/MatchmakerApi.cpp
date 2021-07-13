#include "stdafx.h"
#include "MatchmakerApi.h"

namespace PlayFab
{

using namespace MatchmakerModels;

MatchmakerAPI::MatchmakerAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey) :
    m_httpClient{ std::move(httpClient) },
    m_secretKey{ std::move(secretKey) }
{
}

AsyncOp<MatchmakerModels::AuthUserResponse> MatchmakerAPI::AuthUser(
    const PlayFabMatchmakerAuthUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Matchmaker/AuthUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<AuthUserResponse>
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

AsyncOp<void> MatchmakerAPI::PlayerJoined(
    const PlayFabMatchmakerPlayerJoinedRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Matchmaker/PlayerJoined",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<void> MatchmakerAPI::PlayerLeft(
    const PlayFabMatchmakerPlayerLeftRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Matchmaker/PlayerLeft",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<void>
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

AsyncOp<MatchmakerModels::StartGameResponse> MatchmakerAPI::StartGame(
    const PlayFabMatchmakerStartGameRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Matchmaker/StartGame",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<StartGameResponse>
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

AsyncOp<MatchmakerModels::UserInfoResponse> MatchmakerAPI::UserInfo(
    const PlayFabMatchmakerUserInfoRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Matchmaker/UserInfo",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<UserInfoResponse>
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

}
