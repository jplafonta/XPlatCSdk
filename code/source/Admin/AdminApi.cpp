#include "stdafx.h"

#if defined(ENABLE_PLAYFABADMIN_API)

#include "AdminApi.h"
#include "PlayFabSettings.h"

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace AdminModels;

    PlayFabAdminInstanceAPI::PlayFabAdminInstanceAPI() :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabAdminInstanceAPI::PlayFabAdminInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings) :
        m_settings(apiSettings),
        m_context(MakeShared<PlayFabAuthenticationContext>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabAdminInstanceAPI::PlayFabAdminInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    PlayFabAdminInstanceAPI::PlayFabAdminInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    SharedPtr<PlayFabApiSettings> PlayFabAdminInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabAdminInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabAdminInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabAdmin instance APIs

    void PlayFabAdminInstanceAPI::AbortTaskInstance(
        AbortTaskInstanceRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/AbortTaskInstance",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::AddLocalizedNews(
        AddLocalizedNewsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/AddLocalizedNews",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::AddNews(
        AddNewsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddNewsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddNewsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/AddNews",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::AddPlayerTag(
        AddPlayerTagRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/AddPlayerTag",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::AddServerBuild(
        AddServerBuildRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddServerBuildResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddServerBuildResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/AddServerBuild",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::AddUserVirtualCurrency(
        AddUserVirtualCurrencyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ModifyUserVirtualCurrencyResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/AddUserVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::AddVirtualCurrencyTypes(
        AddVirtualCurrencyTypesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/AddVirtualCurrencyTypes",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::BanUsers(
        BanUsersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BanUsersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            BanUsersResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/BanUsers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CheckLimitedEditionItemAvailability(
        CheckLimitedEditionItemAvailabilityRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CheckLimitedEditionItemAvailabilityResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CheckLimitedEditionItemAvailabilityResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/CheckLimitedEditionItemAvailability",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CreateActionsOnPlayersInSegmentTask(
        CreateActionsOnPlayerSegmentTaskRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateTaskResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateTaskResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/CreateActionsOnPlayersInSegmentTask",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CreateCloudScriptTask(
        CreateCloudScriptTaskRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateTaskResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateTaskResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/CreateCloudScriptTask",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CreateInsightsScheduledScalingTask(
        CreateInsightsScheduledScalingTaskRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateTaskResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateTaskResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/CreateInsightsScheduledScalingTask",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CreateOpenIdConnection(
        CreateOpenIdConnectionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/CreateOpenIdConnection",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CreatePlayerSharedSecret(
        CreatePlayerSharedSecretRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreatePlayerSharedSecretResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreatePlayerSharedSecretResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/CreatePlayerSharedSecret",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CreatePlayerStatisticDefinition(
        CreatePlayerStatisticDefinitionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreatePlayerStatisticDefinitionResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreatePlayerStatisticDefinitionResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/CreatePlayerStatisticDefinition",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::CreateSegment(
        CreateSegmentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateSegmentResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateSegmentResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/CreateSegment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteContent(
        DeleteContentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeleteContent",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteMasterPlayerAccount(
        DeleteMasterPlayerAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<DeleteMasterPlayerAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            DeleteMasterPlayerAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/DeleteMasterPlayerAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteOpenIdConnection(
        DeleteOpenIdConnectionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeleteOpenIdConnection",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeletePlayer(
        DeletePlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeletePlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeletePlayerSharedSecret(
        DeletePlayerSharedSecretRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeletePlayerSharedSecret",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteSegment(
        DeleteSegmentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<DeleteSegmentsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            DeleteSegmentsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/DeleteSegment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteStore(
        DeleteStoreRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeleteStore",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteTask(
        DeleteTaskRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeleteTask",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteTitle(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeleteTitle",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::DeleteTitleDataOverride(
        DeleteTitleDataOverrideRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/DeleteTitleDataOverride",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ExportMasterPlayerData(
        ExportMasterPlayerDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ExportMasterPlayerDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ExportMasterPlayerDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/ExportMasterPlayerData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetActionsOnPlayersInSegmentTaskInstance(
        GetTaskInstanceRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetActionsOnPlayersInSegmentTaskInstanceResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetActionsOnPlayersInSegmentTaskInstanceResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetActionsOnPlayersInSegmentTaskInstance",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetAllSegments(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetAllSegmentsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetAllSegmentsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetAllSegments",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetCatalogItems(
        GetCatalogItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCatalogItemsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCatalogItemsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetCatalogItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetCloudScriptRevision(
        GetCloudScriptRevisionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCloudScriptRevisionResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCloudScriptRevisionResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetCloudScriptRevision",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetCloudScriptTaskInstance(
        GetTaskInstanceRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCloudScriptTaskInstanceResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCloudScriptTaskInstanceResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetCloudScriptTaskInstance",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetCloudScriptVersions(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCloudScriptVersionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCloudScriptVersionsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetCloudScriptVersions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetContentList(
        GetContentListRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetContentListResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetContentListResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetContentList",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetContentUploadUrl(
        GetContentUploadUrlRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetContentUploadUrlResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetContentUploadUrlResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetContentUploadUrl",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetDataReport(
        GetDataReportRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetDataReportResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetDataReportResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetDataReport",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetMatchmakerGameInfo(
        GetMatchmakerGameInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetMatchmakerGameInfoResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetMatchmakerGameInfoResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetMatchmakerGameInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetMatchmakerGameModes(
        GetMatchmakerGameModesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetMatchmakerGameModesResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetMatchmakerGameModesResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetMatchmakerGameModes",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayedTitleList(
        GetPlayedTitleListRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayedTitleListResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayedTitleListResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayedTitleList",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayerIdFromAuthToken(
        GetPlayerIdFromAuthTokenRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerIdFromAuthTokenResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerIdFromAuthTokenResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayerIdFromAuthToken",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayerProfile(
        GetPlayerProfileRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerProfileResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerProfileResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayerProfile",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayerSegments(
        GetPlayersSegmentsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerSegmentsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerSegmentsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayerSegments",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayerSharedSecrets(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerSharedSecretsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerSharedSecretsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayerSharedSecrets",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayersInSegment(
        GetPlayersInSegmentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayersInSegmentResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayersInSegmentResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayersInSegment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayerStatisticDefinitions(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerStatisticDefinitionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerStatisticDefinitionsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayerStatisticDefinitions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayerStatisticVersions(
        GetPlayerStatisticVersionsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerStatisticVersionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerStatisticVersionsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayerStatisticVersions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPlayerTags(
        GetPlayerTagsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerTagsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerTagsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPlayerTags",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPolicy(
        GetPolicyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPolicyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPolicyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPolicy",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetPublisherData(
        GetPublisherDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPublisherDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPublisherDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetRandomResultTables(
        GetRandomResultTablesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetRandomResultTablesResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetRandomResultTablesResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetRandomResultTables",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetSegments(
        GetSegmentsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetSegmentsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetSegmentsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetSegments",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetServerBuildInfo(
        GetServerBuildInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetServerBuildInfoResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetServerBuildInfoResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetServerBuildInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetServerBuildUploadUrl(
        GetServerBuildUploadURLRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetServerBuildUploadURLResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetServerBuildUploadURLResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetServerBuildUploadUrl",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetStoreItems(
        GetStoreItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetStoreItemsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetStoreItemsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetStoreItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetTaskInstances(
        GetTaskInstancesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTaskInstancesResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTaskInstancesResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetTaskInstances",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetTasks(
        GetTasksRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTasksResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTasksResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetTasks",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetTitleData(
        GetTitleDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitleDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetTitleData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetTitleInternalData(
        GetTitleDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitleDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetTitleInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserAccountInfo(
        LookupUserAccountInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LookupUserAccountInfoResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LookupUserAccountInfoResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserAccountInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserBans(
        GetUserBansRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserBansResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserBansResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserBans",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserInternalData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserInventory(
        GetUserInventoryRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserInventoryResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserInventoryResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserInventory",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserPublisherData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserPublisherInternalData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserPublisherInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserPublisherReadOnlyData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserPublisherReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GetUserReadOnlyData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GetUserReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::GrantItemsToUsers(
        GrantItemsToUsersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GrantItemsToUsersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GrantItemsToUsersResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/GrantItemsToUsers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::IncrementLimitedEditionItemAvailability(
        IncrementLimitedEditionItemAvailabilityRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/IncrementLimitedEditionItemAvailability",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::IncrementPlayerStatisticVersion(
        IncrementPlayerStatisticVersionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<IncrementPlayerStatisticVersionResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            IncrementPlayerStatisticVersionResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/IncrementPlayerStatisticVersion",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ListOpenIdConnection(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListOpenIdConnectionResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListOpenIdConnectionResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/ListOpenIdConnection",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ListServerBuilds(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListBuildsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListBuildsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/ListServerBuilds",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ListVirtualCurrencyTypes(
        BaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListVirtualCurrencyTypesResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListVirtualCurrencyTypesResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/ListVirtualCurrencyTypes",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ModifyMatchmakerGameModes(
        ModifyMatchmakerGameModesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/ModifyMatchmakerGameModes",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ModifyServerBuild(
        ModifyServerBuildRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyServerBuildResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ModifyServerBuildResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/ModifyServerBuild",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RefundPurchase(
        RefundPurchaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RefundPurchaseResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RefundPurchaseResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/RefundPurchase",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RemovePlayerTag(
        RemovePlayerTagRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/RemovePlayerTag",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RemoveServerBuild(
        RemoveServerBuildRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/RemoveServerBuild",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RemoveVirtualCurrencyTypes(
        RemoveVirtualCurrencyTypesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/RemoveVirtualCurrencyTypes",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ResetCharacterStatistics(
        ResetCharacterStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/ResetCharacterStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ResetPassword(
        ResetPasswordRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/ResetPassword",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ResetUserStatistics(
        ResetUserStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/ResetUserStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::ResolvePurchaseDispute(
        ResolvePurchaseDisputeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ResolvePurchaseDisputeResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ResolvePurchaseDisputeResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/ResolvePurchaseDispute",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RevokeAllBansForUser(
        RevokeAllBansForUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RevokeAllBansForUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RevokeAllBansForUserResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/RevokeAllBansForUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RevokeBans(
        RevokeBansRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RevokeBansResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RevokeBansResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/RevokeBans",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RevokeInventoryItem(
        RevokeInventoryItemRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/RevokeInventoryItem",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RevokeInventoryItems(
        RevokeInventoryItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RevokeInventoryItemsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RevokeInventoryItemsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/RevokeInventoryItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::RunTask(
        RunTaskRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RunTaskResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RunTaskResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/RunTask",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SendAccountRecoveryEmail(
        SendAccountRecoveryEmailRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SendAccountRecoveryEmail",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetCatalogItems(
        UpdateCatalogItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetCatalogItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetPlayerSecret(
        SetPlayerSecretRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetPlayerSecret",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetPublishedRevision(
        SetPublishedRevisionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetPublishedRevision",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetPublisherData(
        SetPublisherDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetStoreItems(
        UpdateStoreItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetStoreItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetTitleData(
        SetTitleDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetTitleData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetTitleDataAndOverrides(
        SetTitleDataAndOverridesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetTitleDataAndOverrides",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetTitleInternalData(
        SetTitleDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/SetTitleInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SetupPushNotification(
        SetupPushNotificationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetupPushNotificationResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetupPushNotificationResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/SetupPushNotification",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::SubtractUserVirtualCurrency(
        SubtractUserVirtualCurrencyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ModifyUserVirtualCurrencyResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/SubtractUserVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateBans(
        UpdateBansRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateBansResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateBansResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateBans",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateCatalogItems(
        UpdateCatalogItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/UpdateCatalogItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateCloudScript(
        UpdateCloudScriptRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateCloudScriptResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateCloudScriptResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateCloudScript",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateOpenIdConnection(
        UpdateOpenIdConnectionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/UpdateOpenIdConnection",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdatePlayerSharedSecret(
        UpdatePlayerSharedSecretRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/UpdatePlayerSharedSecret",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdatePlayerStatisticDefinition(
        UpdatePlayerStatisticDefinitionRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdatePlayerStatisticDefinitionResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdatePlayerStatisticDefinitionResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdatePlayerStatisticDefinition",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdatePolicy(
        UpdatePolicyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdatePolicyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdatePolicyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdatePolicy",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateRandomResultTables(
        UpdateRandomResultTablesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/UpdateRandomResultTables",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateSegment(
        UpdateSegmentRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateSegmentResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateSegmentResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateSegment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateStoreItems(
        UpdateStoreItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/UpdateStoreItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateTask(
        UpdateTaskRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<BaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

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
            "/Admin/UpdateTask",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateUserData(
        UpdateUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateUserData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateUserInternalData(
        UpdateUserInternalDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateUserInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateUserPublisherData(
        UpdateUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateUserPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateUserPublisherInternalData(
        UpdateUserInternalDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateUserPublisherInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateUserPublisherReadOnlyData(
        UpdateUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateUserPublisherReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateUserReadOnlyData(
        UpdateUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateUserDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateUserReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabAdminInstanceAPI::UpdateUserTitleDisplayName(
        UpdateUserTitleDisplayNameRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserTitleDisplayNameResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateUserTitleDisplayNameResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Admin/UpdateUserTitleDisplayName",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabAdminInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
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
