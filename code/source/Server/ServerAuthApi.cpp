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

void ServerAuthAPI::LoginWithServerCustomId(
    const PlayFabServerLoginWithServerCustomIdRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Server/LoginWithServerCustomId",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ServerAuthAPI::LoginWithSteamId(
    const PlayFabServerLoginWithSteamIdRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Server/LoginWithSteamId",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ServerAuthAPI::LoginWithXbox(
    const PlayFabServerLoginWithXboxRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Server/LoginWithXbox",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ServerAuthAPI::LoginWithXboxId(
    const PlayFabServerLoginWithXboxIdRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    UnorderedMap<String, String> headers;
    headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            ServerLoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Server/LoginWithXboxId",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}

}