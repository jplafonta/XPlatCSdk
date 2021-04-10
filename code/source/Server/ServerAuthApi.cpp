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
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/LoginWithServerCustomId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
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
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/LoginWithSteamId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
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
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/LoginWithXbox",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
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
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", *m_secretKey);

    return m_httpClient->MakePostRequest(
        "/Server/LoginWithXboxId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}


}