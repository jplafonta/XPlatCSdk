#include "stdafx.h"
#include "ClientAuthApi.h"
#include "Entity.h"

namespace PlayFab
{

using namespace ClientModels;

ClientAuthAPI::ClientAuthAPI(SharedPtr<HttpClient const> httpClient) :
    m_httpClient{ std::move(httpClient) }
{
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithAndroidDeviceID(
    const PlayFabClientLoginWithAndroidDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithAndroidDeviceID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithApple(
    const PlayFabClientLoginWithAppleRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithApple",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithCustomID(
    const PlayFabClientLoginWithCustomIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithCustomID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithEmailAddress(
    const PlayFabClientLoginWithEmailAddressRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithEmailAddress",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithFacebook(
    const PlayFabClientLoginWithFacebookRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithFacebook",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithFacebookInstantGamesId(
    const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithFacebookInstantGamesId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithGameCenter(
    const PlayFabClientLoginWithGameCenterRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithGameCenter",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithGoogleAccount(
    const PlayFabClientLoginWithGoogleAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithGoogleAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithIOSDeviceID(
    const PlayFabClientLoginWithIOSDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithIOSDeviceID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithKongregate(
    const PlayFabClientLoginWithKongregateRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithKongregate",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithNintendoServiceAccount(
    const PlayFabClientLoginWithNintendoServiceAccountRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithNintendoServiceAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithNintendoSwitchDeviceId(
    const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithNintendoSwitchDeviceId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithOpenIdConnect(
    const PlayFabClientLoginWithOpenIdConnectRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithOpenIdConnect",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithPlayFab(
    const PlayFabClientLoginWithPlayFabRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithPlayFab",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithPSN(
    const PlayFabClientLoginWithPSNRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithPSN",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithSteam(
    const PlayFabClientLoginWithSteamRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithSteam",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithTwitch(
    const PlayFabClientLoginWithTwitchRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithTwitch",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithWindowsHello(
    const PlayFabClientLoginWithWindowsHelloRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithWindowsHello",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithXbox(
    const PlayFabClientLoginWithXboxRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/LoginWithXbox",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::RegisterPlayFabUser(
    const PlayFabClientRegisterPlayFabUserRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/RegisterPlayFabUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            RegisterPlayFabUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<Entity>(httpClient, std::move(resultModel));
        }
        else
        {
            return Result<SharedPtr<Entity>>{ ServiceErrorToHR(serviceResponse.ErrorCode), std::move(serviceResponse.ErrorMessage) };
        }
    });
}

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::RegisterWithWindowsHello(
    const PlayFabClientRegisterWithWindowsHelloRequest& request,
    const TaskQueue& queue
) const
{
    UnorderedMap<String, String> headers;
    //No auth header required for this API

    return m_httpClient->MakePostRequest(
        "/Client/RegisterWithWindowsHello",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([ httpClient{ m_httpClient } ](Result<ServiceResponse> result) -> Result<SharedPtr<Entity>>
    {
        RETURN_IF_FAILED(result.hr);

        auto serviceResponse = result.ExtractPayload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
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