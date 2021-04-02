#include "stdafx.h"

#if !defined(DISABLE_PLAYFABENTITY_API)

#include "MultiplayerApi.h"
#include "PlayFabSettings.h"

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace MultiplayerModels;

    PlayFabMultiplayerInstanceAPI::PlayFabMultiplayerInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    PlayFabMultiplayerInstanceAPI::PlayFabMultiplayerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }
    }

    SharedPtr<PlayFabApiSettings> PlayFabMultiplayerInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabMultiplayerInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabMultiplayerInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabMultiplayer instance APIs

    void PlayFabMultiplayerInstanceAPI::CancelAllMatchmakingTicketsForPlayer(
        CancelAllMatchmakingTicketsForPlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/CancelAllMatchmakingTicketsForPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CancelAllServerBackfillTicketsForPlayer(
        CancelAllServerBackfillTicketsForPlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/CancelAllServerBackfillTicketsForPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CancelMatchmakingTicket(
        CancelMatchmakingTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/CancelMatchmakingTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CancelServerBackfillTicket(
        CancelServerBackfillTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/CancelServerBackfillTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateBuildAlias(
        CreateBuildAliasRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BuildAliasDetailsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BuildAliasDetailsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildAlias",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateBuildWithCustomContainer(
        CreateBuildWithCustomContainerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateBuildWithCustomContainerResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateBuildWithCustomContainerResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildWithCustomContainer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateBuildWithManagedContainer(
        CreateBuildWithManagedContainerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateBuildWithManagedContainerResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateBuildWithManagedContainerResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildWithManagedContainer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateBuildWithProcessBasedServer(
        CreateBuildWithProcessBasedServerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateBuildWithProcessBasedServerResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateBuildWithProcessBasedServerResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildWithProcessBasedServer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateMatchmakingTicket(
        CreateMatchmakingTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateMatchmakingTicketResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateMatchmakingTicketResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/CreateMatchmakingTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateRemoteUser(
        CreateRemoteUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateRemoteUserResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateRemoteUserResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateRemoteUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateServerBackfillTicket(
        CreateServerBackfillTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateServerBackfillTicketResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateServerBackfillTicketResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/CreateServerBackfillTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateServerMatchmakingTicket(
        CreateServerMatchmakingTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateMatchmakingTicketResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateMatchmakingTicketResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/CreateServerMatchmakingTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::CreateTitleMultiplayerServersQuotaChange(
        CreateTitleMultiplayerServersQuotaChangeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateTitleMultiplayerServersQuotaChangeResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateTitleMultiplayerServersQuotaChangeResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateTitleMultiplayerServersQuotaChange",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::DeleteAsset(
        DeleteAssetRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteAsset",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::DeleteBuild(
        DeleteBuildRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteBuild",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::DeleteBuildAlias(
        DeleteBuildAliasRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteBuildAlias",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::DeleteBuildRegion(
        DeleteBuildRegionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteBuildRegion",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::DeleteCertificate(
        DeleteCertificateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteCertificate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::DeleteContainerImageRepository(
        DeleteContainerImageRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteContainerImageRepository",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::DeleteRemoteUser(
        DeleteRemoteUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteRemoteUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::EnableMultiplayerServersForTitle(
        EnableMultiplayerServersForTitleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EnableMultiplayerServersForTitleResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EnableMultiplayerServersForTitleResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/EnableMultiplayerServersForTitle",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetAssetUploadUrl(
        GetAssetUploadUrlRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetAssetUploadUrlResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetAssetUploadUrlResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetAssetUploadUrl",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetBuild(
        GetBuildRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetBuildResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetBuildResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetBuild",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetBuildAlias(
        GetBuildAliasRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BuildAliasDetailsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BuildAliasDetailsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetBuildAlias",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetContainerRegistryCredentials(
        GetContainerRegistryCredentialsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetContainerRegistryCredentialsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetContainerRegistryCredentialsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetContainerRegistryCredentials",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetMatch(
        GetMatchRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetMatchResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetMatchResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/GetMatch",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetMatchmakingTicket(
        GetMatchmakingTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetMatchmakingTicketResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetMatchmakingTicketResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/GetMatchmakingTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetMultiplayerServerDetails(
        GetMultiplayerServerDetailsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetMultiplayerServerDetailsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetMultiplayerServerDetailsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetMultiplayerServerDetails",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetMultiplayerServerLogs(
        GetMultiplayerServerLogsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetMultiplayerServerLogsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetMultiplayerServerLogsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetMultiplayerServerLogs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetMultiplayerSessionLogsBySessionId(
        GetMultiplayerSessionLogsBySessionIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetMultiplayerServerLogsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetMultiplayerServerLogsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetMultiplayerSessionLogsBySessionId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetQueueStatistics(
        GetQueueStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetQueueStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetQueueStatisticsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/GetQueueStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetRemoteLoginEndpoint(
        GetRemoteLoginEndpointRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetRemoteLoginEndpointResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetRemoteLoginEndpointResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetRemoteLoginEndpoint",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetServerBackfillTicket(
        GetServerBackfillTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetServerBackfillTicketResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetServerBackfillTicketResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/GetServerBackfillTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetTitleEnabledForMultiplayerServersStatus(
        GetTitleEnabledForMultiplayerServersStatusRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleEnabledForMultiplayerServersStatusResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitleEnabledForMultiplayerServersStatusResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetTitleEnabledForMultiplayerServersStatus",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetTitleMultiplayerServersQuotaChange(
        GetTitleMultiplayerServersQuotaChangeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleMultiplayerServersQuotaChangeResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitleMultiplayerServersQuotaChangeResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetTitleMultiplayerServersQuotaChange",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::GetTitleMultiplayerServersQuotas(
        GetTitleMultiplayerServersQuotasRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleMultiplayerServersQuotasResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitleMultiplayerServersQuotasResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetTitleMultiplayerServersQuotas",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::JoinMatchmakingTicket(
        JoinMatchmakingTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/JoinMatchmakingTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListArchivedMultiplayerServers(
        ListMultiplayerServersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListMultiplayerServersResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListMultiplayerServersResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListArchivedMultiplayerServers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListAssetSummaries(
        ListAssetSummariesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListAssetSummariesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListAssetSummariesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListAssetSummaries",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListBuildAliases(
        MultiplayerEmptyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListBuildAliasesForTitleResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListBuildAliasesForTitleResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListBuildAliases",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListBuildSummariesV2(
        ListBuildSummariesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListBuildSummariesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListBuildSummariesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListBuildSummariesV2",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListCertificateSummaries(
        ListCertificateSummariesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListCertificateSummariesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListCertificateSummariesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListCertificateSummaries",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListContainerImages(
        ListContainerImagesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListContainerImagesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListContainerImagesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListContainerImages",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListContainerImageTags(
        ListContainerImageTagsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListContainerImageTagsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListContainerImageTagsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListContainerImageTags",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListMatchmakingTicketsForPlayer(
        ListMatchmakingTicketsForPlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListMatchmakingTicketsForPlayerResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListMatchmakingTicketsForPlayerResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/ListMatchmakingTicketsForPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListMultiplayerServers(
        ListMultiplayerServersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListMultiplayerServersResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListMultiplayerServersResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListMultiplayerServers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListPartyQosServers(
        ListPartyQosServersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListPartyQosServersResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListPartyQosServersResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListPartyQosServers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListQosServersForTitle(
        ListQosServersForTitleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListQosServersForTitleResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListQosServersForTitleResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListQosServersForTitle",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListServerBackfillTicketsForPlayer(
        ListServerBackfillTicketsForPlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListServerBackfillTicketsForPlayerResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListServerBackfillTicketsForPlayerResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Match/ListServerBackfillTicketsForPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListTitleMultiplayerServersQuotaChanges(
        ListTitleMultiplayerServersQuotaChangesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListTitleMultiplayerServersQuotaChangesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListTitleMultiplayerServersQuotaChangesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListTitleMultiplayerServersQuotaChanges",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ListVirtualMachineSummaries(
        ListVirtualMachineSummariesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListVirtualMachineSummariesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListVirtualMachineSummariesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListVirtualMachineSummaries",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::RequestMultiplayerServer(
        RequestMultiplayerServerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RequestMultiplayerServerResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RequestMultiplayerServerResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/RequestMultiplayerServer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::RolloverContainerRegistryCredentials(
        RolloverContainerRegistryCredentialsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RolloverContainerRegistryCredentialsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RolloverContainerRegistryCredentialsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/RolloverContainerRegistryCredentials",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::ShutdownMultiplayerServer(
        ShutdownMultiplayerServerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/ShutdownMultiplayerServer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::UntagContainerImage(
        UntagContainerImageRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/UntagContainerImage",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::UpdateBuildAlias(
        UpdateBuildAliasRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BuildAliasDetailsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BuildAliasDetailsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildAlias",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::UpdateBuildName(
        UpdateBuildNameRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildName",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::UpdateBuildRegion(
        UpdateBuildRegionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildRegion",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::UpdateBuildRegions(
        UpdateBuildRegionsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildRegions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabMultiplayerInstanceAPI::UploadCertificate(
        UploadCertificateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/MultiplayerServer/UploadCertificate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabMultiplayerInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
    {
        if (httpResult.serviceResponse.HttpCode == 200)
        {
            result.FromJson(httpResult.serviceResponse.Data);
            return true;
        }
        else // Process the error case
        {
            if (PlayFabSettings::globalErrorHandler != nullptr)
            {
                PlayFabSettings::globalErrorHandler(httpResult.serviceResponse);
            }
            if (errorHandler)
            {
                errorHandler(httpResult.serviceResponse);
            }
            return false;
        }
    }
}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
