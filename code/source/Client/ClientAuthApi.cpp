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
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithAndroidDeviceID", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithApple(
    const PlayFabClientLoginWithAppleRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithApple", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithCustomID(
    const PlayFabClientLoginWithCustomIDRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithCustomID", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithEmailAddress(
    const PlayFabClientLoginWithEmailAddressRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithEmailAddress", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithFacebook(
    const PlayFabClientLoginWithFacebookRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithFacebook", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithFacebookInstantGamesId(
    const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithFacebookInstantGamesId", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithGameCenter(
    const PlayFabClientLoginWithGameCenterRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithGameCenter", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithGoogleAccount(
    const PlayFabClientLoginWithGoogleAccountRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithGoogleAccount", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithIOSDeviceID(
    const PlayFabClientLoginWithIOSDeviceIDRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithIOSDeviceID", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithKongregate(
    const PlayFabClientLoginWithKongregateRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithKongregate", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithNintendoServiceAccount(
    const PlayFabClientLoginWithNintendoServiceAccountRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithNintendoServiceAccount", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithNintendoSwitchDeviceId(
    const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithNintendoSwitchDeviceId", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithOpenIdConnect(
    const PlayFabClientLoginWithOpenIdConnectRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithOpenIdConnect", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithPlayFab(
    const PlayFabClientLoginWithPlayFabRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithPlayFab", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithPSN(
    const PlayFabClientLoginWithPSNRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithPSN", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithSteam(
    const PlayFabClientLoginWithSteamRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithSteam", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithTwitch(
    const PlayFabClientLoginWithTwitchRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithTwitch", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::LoginWithXbox(
    const PlayFabClientLoginWithXboxRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/LoginWithXbox", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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

AsyncOp<SharedPtr<Entity>> ClientAuthAPI::RegisterPlayFabUser(
    const PlayFabClientRegisterPlayFabUserRequest& request,
    const TaskQueue& queue
) const
{
    // Remember LoginContext so we can refresh tokens
    LoginContext loginContext{ "/Client/RegisterPlayFabUser", JsonUtils::ToJson(request), nullptr };

    UnorderedMap<String, String> headers;
    // No auth header required for this API

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
            RegisterPlayFabUserResult resultModel;
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