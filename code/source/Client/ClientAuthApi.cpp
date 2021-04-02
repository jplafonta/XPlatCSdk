#include "stdafx.h"
#include "ClientAuthApi.h"
#include "AuthContext.h"

namespace PlayFab
{

using namespace ClientModels;

ClientAuthAPI::ClientAuthAPI() :
    m_settings{ MakeShared<PlayFabApiSettings>() },
    m_httpClient{ m_settings }
{
}

void ClientAuthAPI::LoginWithAndroidDeviceID(
    const PlayFabClientLoginWithAndroidDeviceIDRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithAndroidDeviceID",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithApple(
    const PlayFabClientLoginWithAppleRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithApple",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithCustomID(
    const PlayFabClientLoginWithCustomIDRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithCustomID",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithEmailAddress(
    const PlayFabClientLoginWithEmailAddressRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithEmailAddress",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithFacebook(
    const PlayFabClientLoginWithFacebookRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithFacebook",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithFacebookInstantGamesId(
    const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithFacebookInstantGamesId",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithGameCenter(
    const PlayFabClientLoginWithGameCenterRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithGameCenter",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithGoogleAccount(
    const PlayFabClientLoginWithGoogleAccountRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithGoogleAccount",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithIOSDeviceID(
    const PlayFabClientLoginWithIOSDeviceIDRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithIOSDeviceID",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithKongregate(
    const PlayFabClientLoginWithKongregateRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithKongregate",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithNintendoServiceAccount(
    const PlayFabClientLoginWithNintendoServiceAccountRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithNintendoServiceAccount",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithNintendoSwitchDeviceId(
    const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithNintendoSwitchDeviceId",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithOpenIdConnect(
    const PlayFabClientLoginWithOpenIdConnectRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithOpenIdConnect",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithPlayFab(
    const PlayFabClientLoginWithPlayFabRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithPlayFab",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithPSN(
    const PlayFabClientLoginWithPSNRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithPSN",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithSteam(
    const PlayFabClientLoginWithSteamRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithSteam",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithTwitch(
    const PlayFabClientLoginWithTwitchRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithTwitch",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithWindowsHello(
    const PlayFabClientLoginWithWindowsHelloRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithWindowsHello",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::LoginWithXbox(
    const PlayFabClientLoginWithXboxRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/LoginWithXbox",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::RegisterPlayFabUser(
    const PlayFabClientRegisterPlayFabUserRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            RegisterPlayFabUserResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/RegisterPlayFabUser",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}
void ClientAuthAPI::RegisterWithWindowsHello(
    const PlayFabClientRegisterWithWindowsHelloRequest& request,
    const TaskQueue& queue,
    const ProcessApiCallback<SharedPtr<AuthContext>> callback,
    const ErrorCallback errorCallback
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
    auto callComplete = [ this, callback, errorCallback ](const HttpResult& httpResult)
    {
        if (SUCCEEDED(httpResult.networkErrorCode) && httpResult.serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(httpResult.serviceResponse.Data);
            callback(MakeShared<AuthContext>(resultModel));
        }
        else if (errorCallback)
        {
            errorCallback(httpResult.serviceResponse);
        }
    };

    m_httpClient.MakePostRequest(
        "/Client/RegisterWithWindowsHello",
        headers,
        JsonUtils::ToJson(request),
        queue,
        callComplete
    );
}

}