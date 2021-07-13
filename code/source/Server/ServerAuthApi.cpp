#include "stdafx.h"
#include "ServerAuthApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace ServerModels;

ServerAuthAPI::ServerAuthAPI(SharedPtr<HttpClient const> httpClient, SharedPtr<String const> secretKey) :
    m_httpClient{ std::move(httpClient) },
    m_secretKey{ std::move(secretKey) }
{
}

AsyncOp<SharedPtr<Entity>> ServerAuthAPI::LoginWithServerCustomId(
    const PlayFabServerLoginWithServerCustomIdRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Server/LoginWithServerCustomId", JsonUtils::ToJson(request), m_secretKey };

    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    auto requestOp = m_httpClient->MakePostRequest(
        loginContext.path.data(),
        headers,
        loginContext.requestBody,
        queue
    );

    return requestOp.Then([ httpClient{ m_httpClient }, loginContext{ std::move(loginContext) }](Result<ServiceResponse> result) mutable -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(loginContext), std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ServerAuthAPI::LoginWithSteamId(
    const PlayFabServerLoginWithSteamIdRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Server/LoginWithSteamId", JsonUtils::ToJson(request), m_secretKey };

    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    auto requestOp = m_httpClient->MakePostRequest(
        loginContext.path.data(),
        headers,
        loginContext.requestBody,
        queue
    );

    return requestOp.Then([ httpClient{ m_httpClient }, loginContext{ std::move(loginContext) }](Result<ServiceResponse> result) mutable -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(loginContext), std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ServerAuthAPI::LoginWithXbox(
    const PlayFabServerLoginWithXboxRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Server/LoginWithXbox", JsonUtils::ToJson(request), m_secretKey };

    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    auto requestOp = m_httpClient->MakePostRequest(
        loginContext.path.data(),
        headers,
        loginContext.requestBody,
        queue
    );

    return requestOp.Then([ httpClient{ m_httpClient }, loginContext{ std::move(loginContext) }](Result<ServiceResponse> result) mutable -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(loginContext), std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ServerAuthAPI::LoginWithXboxId(
    const PlayFabServerLoginWithXboxIdRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Server/LoginWithXboxId", JsonUtils::ToJson(request), m_secretKey };

    UnorderedMap<String, String> headers;
    if (m_secretKey == nullptr || m_secretKey->empty())
    {
        return E_PLAYFAB_NOSECRETKEY;
    }
    headers.emplace("X-SecretKey", *m_secretKey);

    auto requestOp = m_httpClient->MakePostRequest(
        loginContext.path.data(),
        headers,
        loginContext.requestBody,
        queue
    );

    return requestOp.Then([ httpClient{ m_httpClient }, loginContext{ std::move(loginContext) }](Result<ServiceResponse> result) mutable -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(loginContext), std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}


}