#include "stdafx.h"
#include "ServerAuthApi.h"
#include "AuthContext.h"

namespace PlayFab
{

using namespace ServerModels;

ServerAuthAPI::ServerAuthAPI() :
    m_settings{ MakeShared<PlayFabApiSettings>() },
    m_httpClient{ m_settings }
{
}

AsyncOp<SharedPtr<AuthContext>> ServerAuthAPI::LoginWithServerCustomId(
    const PlayFabServerLoginWithServerCustomIdRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    return m_httpClient.MakePostRequest(
        "/Server/LoginWithServerCustomId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ServerAuthAPI::LoginWithSteamId(
    const PlayFabServerLoginWithSteamIdRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    return m_httpClient.MakePostRequest(
        "/Server/LoginWithSteamId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ServerAuthAPI::LoginWithXbox(
    const PlayFabServerLoginWithXboxRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    return m_httpClient.MakePostRequest(
        "/Server/LoginWithXbox",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ServerAuthAPI::LoginWithXboxId(
    const PlayFabServerLoginWithXboxIdRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    return m_httpClient.MakePostRequest(
        "/Server/LoginWithXboxId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}

}