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
        // TODO
        /* if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        } */
    }

    PlayFabMultiplayerInstanceAPI::PlayFabMultiplayerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
        // TODO
        /*if (m_context == nullptr)
        {
            throw PlayFabException(PlayFabExceptionCode::AuthContextRequired, "Context cannot be null, create a PlayFabAuthenticationContext for each player in advance, or get <PlayFabClientInstanceAPI>.authenticationContext");
        }*/
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

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::CancelAllMatchmakingTicketsForPlayer(
        const PlayFabMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/CancelAllMatchmakingTicketsForPlayer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::CancelAllServerBackfillTicketsForPlayer(
        const PlayFabMultiplayerCancelAllServerBackfillTicketsForPlayerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/CancelAllServerBackfillTicketsForPlayer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::CancelMatchmakingTicket(
        const PlayFabMultiplayerCancelMatchmakingTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/CancelMatchmakingTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::CancelServerBackfillTicket(
        const PlayFabMultiplayerCancelServerBackfillTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/CancelServerBackfillTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BuildAliasDetailsResponse> PlayFabMultiplayerInstanceAPI::CreateBuildAlias(
        const PlayFabMultiplayerCreateBuildAliasRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildAlias",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BuildAliasDetailsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateBuildWithCustomContainerResponse> PlayFabMultiplayerInstanceAPI::CreateBuildWithCustomContainer(
        const PlayFabMultiplayerCreateBuildWithCustomContainerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildWithCustomContainer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateBuildWithCustomContainerResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateBuildWithCustomContainerResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateBuildWithManagedContainerResponse> PlayFabMultiplayerInstanceAPI::CreateBuildWithManagedContainer(
        const PlayFabMultiplayerCreateBuildWithManagedContainerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildWithManagedContainer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateBuildWithManagedContainerResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateBuildWithManagedContainerResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateBuildWithProcessBasedServerResponse> PlayFabMultiplayerInstanceAPI::CreateBuildWithProcessBasedServer(
        const PlayFabMultiplayerCreateBuildWithProcessBasedServerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateBuildWithProcessBasedServer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateBuildWithProcessBasedServerResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateBuildWithProcessBasedServerResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateMatchmakingTicketResult> PlayFabMultiplayerInstanceAPI::CreateMatchmakingTicket(
        const PlayFabMultiplayerCreateMatchmakingTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/CreateMatchmakingTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateMatchmakingTicketResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateMatchmakingTicketResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateRemoteUserResponse> PlayFabMultiplayerInstanceAPI::CreateRemoteUser(
        const PlayFabMultiplayerCreateRemoteUserRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateRemoteUser",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateRemoteUserResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateRemoteUserResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateServerBackfillTicketResult> PlayFabMultiplayerInstanceAPI::CreateServerBackfillTicket(
        const PlayFabMultiplayerCreateServerBackfillTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/CreateServerBackfillTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateServerBackfillTicketResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateServerBackfillTicketResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateMatchmakingTicketResult> PlayFabMultiplayerInstanceAPI::CreateServerMatchmakingTicket(
        const PlayFabMultiplayerCreateServerMatchmakingTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/CreateServerMatchmakingTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateMatchmakingTicketResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateMatchmakingTicketResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<CreateTitleMultiplayerServersQuotaChangeResponse> PlayFabMultiplayerInstanceAPI::CreateTitleMultiplayerServersQuotaChange(
        const PlayFabMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/CreateTitleMultiplayerServersQuotaChange",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateTitleMultiplayerServersQuotaChangeResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateTitleMultiplayerServersQuotaChangeResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::DeleteAsset(
        const PlayFabMultiplayerDeleteAssetRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteAsset",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::DeleteBuild(
        const PlayFabMultiplayerDeleteBuildRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteBuild",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::DeleteBuildAlias(
        const PlayFabMultiplayerDeleteBuildAliasRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteBuildAlias",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::DeleteBuildRegion(
        const PlayFabMultiplayerDeleteBuildRegionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteBuildRegion",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::DeleteCertificate(
        const PlayFabMultiplayerDeleteCertificateRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteCertificate",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::DeleteContainerImageRepository(
        const PlayFabMultiplayerDeleteContainerImageRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteContainerImageRepository",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::DeleteRemoteUser(
        const PlayFabMultiplayerDeleteRemoteUserRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/DeleteRemoteUser",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<EnableMultiplayerServersForTitleResponse> PlayFabMultiplayerInstanceAPI::EnableMultiplayerServersForTitle(
        const PlayFabMultiplayerEnableMultiplayerServersForTitleRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/EnableMultiplayerServersForTitle",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<EnableMultiplayerServersForTitleResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                EnableMultiplayerServersForTitleResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetAssetUploadUrlResponse> PlayFabMultiplayerInstanceAPI::GetAssetUploadUrl(
        const PlayFabMultiplayerGetAssetUploadUrlRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetAssetUploadUrl",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetAssetUploadUrlResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetAssetUploadUrlResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetBuildResponse> PlayFabMultiplayerInstanceAPI::GetBuild(
        const PlayFabMultiplayerGetBuildRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetBuild",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetBuildResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetBuildResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BuildAliasDetailsResponse> PlayFabMultiplayerInstanceAPI::GetBuildAlias(
        const PlayFabMultiplayerGetBuildAliasRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetBuildAlias",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BuildAliasDetailsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetContainerRegistryCredentialsResponse> PlayFabMultiplayerInstanceAPI::GetContainerRegistryCredentials(
        const PlayFabMultiplayerGetContainerRegistryCredentialsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetContainerRegistryCredentials",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetContainerRegistryCredentialsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetContainerRegistryCredentialsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetMatchResult> PlayFabMultiplayerInstanceAPI::GetMatch(
        const PlayFabMultiplayerGetMatchRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/GetMatch",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetMatchResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetMatchResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetMatchmakingTicketResult> PlayFabMultiplayerInstanceAPI::GetMatchmakingTicket(
        const PlayFabMultiplayerGetMatchmakingTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/GetMatchmakingTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetMatchmakingTicketResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetMatchmakingTicketResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetMultiplayerServerDetailsResponse> PlayFabMultiplayerInstanceAPI::GetMultiplayerServerDetails(
        const PlayFabMultiplayerGetMultiplayerServerDetailsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetMultiplayerServerDetails",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetMultiplayerServerDetailsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetMultiplayerServerDetailsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetMultiplayerServerLogsResponse> PlayFabMultiplayerInstanceAPI::GetMultiplayerServerLogs(
        const PlayFabMultiplayerGetMultiplayerServerLogsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetMultiplayerServerLogs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetMultiplayerServerLogsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetMultiplayerServerLogsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetMultiplayerServerLogsResponse> PlayFabMultiplayerInstanceAPI::GetMultiplayerSessionLogsBySessionId(
        const PlayFabMultiplayerGetMultiplayerSessionLogsBySessionIdRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetMultiplayerSessionLogsBySessionId",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetMultiplayerServerLogsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetMultiplayerServerLogsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetQueueStatisticsResult> PlayFabMultiplayerInstanceAPI::GetQueueStatistics(
        const PlayFabMultiplayerGetQueueStatisticsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/GetQueueStatistics",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetQueueStatisticsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetQueueStatisticsResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetRemoteLoginEndpointResponse> PlayFabMultiplayerInstanceAPI::GetRemoteLoginEndpoint(
        const PlayFabMultiplayerGetRemoteLoginEndpointRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetRemoteLoginEndpoint",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetRemoteLoginEndpointResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetRemoteLoginEndpointResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetServerBackfillTicketResult> PlayFabMultiplayerInstanceAPI::GetServerBackfillTicket(
        const PlayFabMultiplayerGetServerBackfillTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/GetServerBackfillTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetServerBackfillTicketResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetServerBackfillTicketResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetTitleEnabledForMultiplayerServersStatusResponse> PlayFabMultiplayerInstanceAPI::GetTitleEnabledForMultiplayerServersStatus(
        const PlayFabMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetTitleEnabledForMultiplayerServersStatus",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTitleEnabledForMultiplayerServersStatusResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTitleEnabledForMultiplayerServersStatusResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetTitleMultiplayerServersQuotaChangeResponse> PlayFabMultiplayerInstanceAPI::GetTitleMultiplayerServersQuotaChange(
        const PlayFabMultiplayerGetTitleMultiplayerServersQuotaChangeRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetTitleMultiplayerServersQuotaChange",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTitleMultiplayerServersQuotaChangeResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTitleMultiplayerServersQuotaChangeResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<GetTitleMultiplayerServersQuotasResponse> PlayFabMultiplayerInstanceAPI::GetTitleMultiplayerServersQuotas(
        const PlayFabMultiplayerGetTitleMultiplayerServersQuotasRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/GetTitleMultiplayerServersQuotas",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTitleMultiplayerServersQuotasResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTitleMultiplayerServersQuotasResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::JoinMatchmakingTicket(
        const PlayFabMultiplayerJoinMatchmakingTicketRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/JoinMatchmakingTicket",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListMultiplayerServersResponse> PlayFabMultiplayerInstanceAPI::ListArchivedMultiplayerServers(
        const PlayFabMultiplayerListMultiplayerServersRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListArchivedMultiplayerServers",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListMultiplayerServersResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListMultiplayerServersResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListAssetSummariesResponse> PlayFabMultiplayerInstanceAPI::ListAssetSummaries(
        const PlayFabMultiplayerListAssetSummariesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListAssetSummaries",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListAssetSummariesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListAssetSummariesResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListBuildAliasesResponse> PlayFabMultiplayerInstanceAPI::ListBuildAliases(
        const PlayFabMultiplayerListBuildAliasesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListBuildAliases",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListBuildAliasesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListBuildAliasesResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListBuildSummariesResponse> PlayFabMultiplayerInstanceAPI::ListBuildSummariesV2(
        const PlayFabMultiplayerListBuildSummariesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListBuildSummariesV2",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListBuildSummariesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListBuildSummariesResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListCertificateSummariesResponse> PlayFabMultiplayerInstanceAPI::ListCertificateSummaries(
        const PlayFabMultiplayerListCertificateSummariesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListCertificateSummaries",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListCertificateSummariesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListCertificateSummariesResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListContainerImagesResponse> PlayFabMultiplayerInstanceAPI::ListContainerImages(
        const PlayFabMultiplayerListContainerImagesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListContainerImages",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListContainerImagesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListContainerImagesResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListContainerImageTagsResponse> PlayFabMultiplayerInstanceAPI::ListContainerImageTags(
        const PlayFabMultiplayerListContainerImageTagsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListContainerImageTags",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListContainerImageTagsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListContainerImageTagsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListMatchmakingTicketsForPlayerResult> PlayFabMultiplayerInstanceAPI::ListMatchmakingTicketsForPlayer(
        const PlayFabMultiplayerListMatchmakingTicketsForPlayerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/ListMatchmakingTicketsForPlayer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListMatchmakingTicketsForPlayerResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListMatchmakingTicketsForPlayerResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListMultiplayerServersResponse> PlayFabMultiplayerInstanceAPI::ListMultiplayerServers(
        const PlayFabMultiplayerListMultiplayerServersRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListMultiplayerServers",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListMultiplayerServersResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListMultiplayerServersResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListPartyQosServersResponse> PlayFabMultiplayerInstanceAPI::ListPartyQosServers(
        const PlayFabMultiplayerListPartyQosServersRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListPartyQosServers",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListPartyQosServersResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListPartyQosServersResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListQosServersForTitleResponse> PlayFabMultiplayerInstanceAPI::ListQosServersForTitle(
        const PlayFabMultiplayerListQosServersForTitleRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListQosServersForTitle",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListQosServersForTitleResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListQosServersForTitleResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListServerBackfillTicketsForPlayerResult> PlayFabMultiplayerInstanceAPI::ListServerBackfillTicketsForPlayer(
        const PlayFabMultiplayerListServerBackfillTicketsForPlayerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/Match/ListServerBackfillTicketsForPlayer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListServerBackfillTicketsForPlayerResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListServerBackfillTicketsForPlayerResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListTitleMultiplayerServersQuotaChangesResponse> PlayFabMultiplayerInstanceAPI::ListTitleMultiplayerServersQuotaChanges(
        const PlayFabMultiplayerListTitleMultiplayerServersQuotaChangesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListTitleMultiplayerServersQuotaChanges",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListTitleMultiplayerServersQuotaChangesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListTitleMultiplayerServersQuotaChangesResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<ListVirtualMachineSummariesResponse> PlayFabMultiplayerInstanceAPI::ListVirtualMachineSummaries(
        const PlayFabMultiplayerListVirtualMachineSummariesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ListVirtualMachineSummaries",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListVirtualMachineSummariesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListVirtualMachineSummariesResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<RequestMultiplayerServerResponse> PlayFabMultiplayerInstanceAPI::RequestMultiplayerServer(
        const PlayFabMultiplayerRequestMultiplayerServerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/RequestMultiplayerServer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<RequestMultiplayerServerResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                RequestMultiplayerServerResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<RolloverContainerRegistryCredentialsResponse> PlayFabMultiplayerInstanceAPI::RolloverContainerRegistryCredentials(
        const PlayFabMultiplayerRolloverContainerRegistryCredentialsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/RolloverContainerRegistryCredentials",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<RolloverContainerRegistryCredentialsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                RolloverContainerRegistryCredentialsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::ShutdownMultiplayerServer(
        const PlayFabMultiplayerShutdownMultiplayerServerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/ShutdownMultiplayerServer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::UntagContainerImage(
        const PlayFabMultiplayerUntagContainerImageRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/UntagContainerImage",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BuildAliasDetailsResponse> PlayFabMultiplayerInstanceAPI::UpdateBuildAlias(
        const PlayFabMultiplayerUpdateBuildAliasRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildAlias",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BuildAliasDetailsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BuildAliasDetailsResponse resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::UpdateBuildName(
        const PlayFabMultiplayerUpdateBuildNameRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildName",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::UpdateBuildRegion(
        const PlayFabMultiplayerUpdateBuildRegionRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildRegion",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::UpdateBuildRegions(
        const PlayFabMultiplayerUpdateBuildRegionsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/UpdateBuildRegions",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabMultiplayerInstanceAPI::UploadCertificate(
        const PlayFabMultiplayerUploadCertificateRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-EntityToken", m_context->entityToken.data());

        return m_httpClient.MakePostRequest(
            "/MultiplayerServer/UploadCertificate",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<BaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                BaseResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /**/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
