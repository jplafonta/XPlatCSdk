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

AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithAndroidDeviceID(
    const PlayFabClientLoginWithAndroidDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithAndroidDeviceID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithApple(
    const PlayFabClientLoginWithAppleRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithApple",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithCustomID(
    const PlayFabClientLoginWithCustomIDRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithCustomID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithEmailAddress(
    const PlayFabClientLoginWithEmailAddressRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithEmailAddress",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithFacebook(
    const PlayFabClientLoginWithFacebookRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithFacebook",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithFacebookInstantGamesId(
    const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithFacebookInstantGamesId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithGameCenter(
    const PlayFabClientLoginWithGameCenterRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithGameCenter",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithGoogleAccount(
    const PlayFabClientLoginWithGoogleAccountRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithGoogleAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithIOSDeviceID(
    const PlayFabClientLoginWithIOSDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithIOSDeviceID",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithKongregate(
    const PlayFabClientLoginWithKongregateRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithKongregate",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithNintendoServiceAccount(
    const PlayFabClientLoginWithNintendoServiceAccountRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithNintendoServiceAccount",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithNintendoSwitchDeviceId(
    const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithNintendoSwitchDeviceId",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithOpenIdConnect(
    const PlayFabClientLoginWithOpenIdConnectRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithOpenIdConnect",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithPlayFab(
    const PlayFabClientLoginWithPlayFabRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithPlayFab",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithPSN(
    const PlayFabClientLoginWithPSNRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithPSN",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithSteam(
    const PlayFabClientLoginWithSteamRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithSteam",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithTwitch(
    const PlayFabClientLoginWithTwitchRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithTwitch",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithWindowsHello(
    const PlayFabClientLoginWithWindowsHelloRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithWindowsHello",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::LoginWithXbox(
    const PlayFabClientLoginWithXboxRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/LoginWithXbox",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::RegisterPlayFabUser(
    const PlayFabClientRegisterPlayFabUserRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/RegisterPlayFabUser",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            RegisterPlayFabUserResult resultModel;
            resultModel.FromJson(serviceResponse.Data);
            return MakeShared<AuthContext>(std::move(resultModel));
        }
        else
        {
            return ServiceErrorToHR(serviceResponse.ErrorCode);
        }
    });
}
AsyncOp<SharedPtr<AuthContext>> ClientAuthAPI::RegisterWithWindowsHello(
    const PlayFabClientRegisterWithWindowsHelloRequest& request,
    const TaskQueue& queue
) const
{
    // TODO find a cleaner way to configure the titleId
    m_settings->titleId = request.titleId;
    UnorderedMap<String, String> headers;

    return m_httpClient.MakePostRequest(
        "/Client/RegisterWithWindowsHello",
        headers,
        JsonUtils::ToJson(request),
        queue
    ).Then([](Result<ServiceResponse> result) -> Result<SharedPtr<AuthContext>>
    {
        RETURN_IF_FAILED(result.hr);

        auto& serviceResponse = result.Payload();
        if (serviceResponse.HttpCode == 200)
        {
            LoginResult resultModel;
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