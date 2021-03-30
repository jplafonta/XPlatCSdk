#include <stdafx.h>

#if defined(ENABLE_PLAYFABSERVER_API)

#include <Server/ServerApi.h>
#include <playfab/PlayFabSettings.h>

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace ServerModels;

    PlayFabServerInstanceAPI::PlayFabServerInstanceAPI() :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabServerInstanceAPI::PlayFabServerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings) :
        m_settings(apiSettings),
        m_context(MakeShared<PlayFabAuthenticationContext>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabServerInstanceAPI::PlayFabServerInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    PlayFabServerInstanceAPI::PlayFabServerInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    SharedPtr<PlayFabApiSettings> PlayFabServerInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabServerInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabServerInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabServer instance APIs

    void PlayFabServerInstanceAPI::AddCharacterVirtualCurrency(
        AddCharacterVirtualCurrencyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ModifyCharacterVirtualCurrencyResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/AddCharacterVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::AddFriend(
        AddFriendRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/AddFriend",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::AddGenericID(
        AddGenericIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/AddGenericID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::AddPlayerTag(
        AddPlayerTagRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddPlayerTagResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddPlayerTagResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/AddPlayerTag",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::AddSharedGroupMembers(
        AddSharedGroupMembersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddSharedGroupMembersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddSharedGroupMembersResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/AddSharedGroupMembers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::AddUserVirtualCurrency(
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
            "/Server/AddUserVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::AuthenticateSessionTicket(
        AuthenticateSessionTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AuthenticateSessionTicketResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AuthenticateSessionTicketResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/AuthenticateSessionTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::AwardSteamAchievement(
        AwardSteamAchievementRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AwardSteamAchievementResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AwardSteamAchievementResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/AwardSteamAchievement",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::BanUsers(
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
            "/Server/BanUsers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::ConsumeItem(
        ConsumeItemRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ConsumeItemResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ConsumeItemResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/ConsumeItem",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::CreateSharedGroup(
        CreateSharedGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateSharedGroupResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CreateSharedGroupResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/CreateSharedGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::DeleteCharacterFromUser(
        DeleteCharacterFromUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<DeleteCharacterFromUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            DeleteCharacterFromUserResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/DeleteCharacterFromUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::DeletePlayer(
        DeletePlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<DeletePlayerResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            DeletePlayerResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/DeletePlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::DeletePushNotificationTemplate(
        DeletePushNotificationTemplateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<DeletePushNotificationTemplateResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            DeletePushNotificationTemplateResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/DeletePushNotificationTemplate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::DeleteSharedGroup(
        DeleteSharedGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/DeleteSharedGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::DeregisterGame(
        DeregisterGameRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<DeregisterGameResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            DeregisterGameResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/DeregisterGame",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::EvaluateRandomResultTable(
        EvaluateRandomResultTableRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EvaluateRandomResultTableResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EvaluateRandomResultTableResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/EvaluateRandomResultTable",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::ExecuteCloudScript(
        ExecuteCloudScriptServerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ExecuteCloudScriptResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ExecuteCloudScriptResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/ExecuteCloudScript",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetAllSegments(
        GetAllSegmentsRequest& request,
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
            "/Server/GetAllSegments",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetAllUsersCharacters(
        ListUsersCharactersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListUsersCharactersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ListUsersCharactersResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetAllUsersCharacters",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetCatalogItems(
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
            "/Server/GetCatalogItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetCharacterData(
        GetCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCharacterDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetCharacterData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetCharacterInternalData(
        GetCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCharacterDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetCharacterInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetCharacterInventory(
        GetCharacterInventoryRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterInventoryResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCharacterInventoryResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetCharacterInventory",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetCharacterLeaderboard(
        GetCharacterLeaderboardRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterLeaderboardResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCharacterLeaderboardResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetCharacterLeaderboard",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetCharacterReadOnlyData(
        GetCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCharacterDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetCharacterReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetCharacterStatistics(
        GetCharacterStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetCharacterStatisticsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetCharacterStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetContentDownloadUrl(
        GetContentDownloadUrlRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetContentDownloadUrlResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetContentDownloadUrlResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetContentDownloadUrl",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetFriendLeaderboard(
        GetFriendLeaderboardRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetLeaderboardResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetFriendLeaderboard",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetFriendsList(
        GetFriendsListRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetFriendsListResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetFriendsListResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetFriendsList",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetLeaderboard(
        GetLeaderboardRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetLeaderboardResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetLeaderboard",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetLeaderboardAroundCharacter(
        GetLeaderboardAroundCharacterRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardAroundCharacterResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetLeaderboardAroundCharacterResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetLeaderboardAroundCharacter",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetLeaderboardAroundUser(
        GetLeaderboardAroundUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardAroundUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetLeaderboardAroundUserResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetLeaderboardAroundUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetLeaderboardForUserCharacters(
        GetLeaderboardForUsersCharactersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardForUsersCharactersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetLeaderboardForUsersCharactersResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetLeaderboardForUserCharacters",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayerCombinedInfo(
        GetPlayerCombinedInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerCombinedInfoResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerCombinedInfoResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayerCombinedInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayerProfile(
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
            "/Server/GetPlayerProfile",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayerSegments(
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
            "/Server/GetPlayerSegments",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayersInSegment(
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
            "/Server/GetPlayersInSegment",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayerStatistics(
        GetPlayerStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerStatisticsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayerStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayerStatisticVersions(
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
            "/Server/GetPlayerStatisticVersions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayerTags(
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
            "/Server/GetPlayerTags",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayFabIDsFromFacebookIDs(
        GetPlayFabIDsFromFacebookIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromFacebookIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayFabIDsFromFacebookIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayFabIDsFromFacebookInstantGamesIds(
        GetPlayFabIDsFromFacebookInstantGamesIdsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromFacebookInstantGamesIdsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromFacebookInstantGamesIdsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayFabIDsFromFacebookInstantGamesIds",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayFabIDsFromGenericIDs(
        GetPlayFabIDsFromGenericIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromGenericIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromGenericIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayFabIDsFromGenericIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayFabIDsFromNintendoSwitchDeviceIds(
        GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromNintendoSwitchDeviceIdsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayFabIDsFromNintendoSwitchDeviceIds",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayFabIDsFromPSNAccountIDs(
        GetPlayFabIDsFromPSNAccountIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromPSNAccountIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromPSNAccountIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayFabIDsFromPSNAccountIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayFabIDsFromSteamIDs(
        GetPlayFabIDsFromSteamIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromSteamIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayFabIDsFromSteamIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPlayFabIDsFromXboxLiveIDs(
        GetPlayFabIDsFromXboxLiveIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromXboxLiveIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromXboxLiveIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetPlayFabIDsFromXboxLiveIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetPublisherData(
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
            "/Server/GetPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetRandomResultTables(
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
            "/Server/GetRandomResultTables",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetServerCustomIDsFromPlayFabIDs(
        GetServerCustomIDsFromPlayFabIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetServerCustomIDsFromPlayFabIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetServerCustomIDsFromPlayFabIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetServerCustomIDsFromPlayFabIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetSharedGroupData(
        GetSharedGroupDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetSharedGroupDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetSharedGroupDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetSharedGroupData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetStoreItems(
        GetStoreItemsServerRequest& request,
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
            "/Server/GetStoreItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetTime(
        GetTimeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTimeResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTimeResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetTime",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetTitleData(
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
            "/Server/GetTitleData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetTitleInternalData(
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
            "/Server/GetTitleInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetTitleNews(
        GetTitleNewsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleNewsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitleNewsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetTitleNews",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserAccountInfo(
        GetUserAccountInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserAccountInfoResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetUserAccountInfoResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GetUserAccountInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserBans(
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
            "/Server/GetUserBans",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserData(
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
            "/Server/GetUserData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserInternalData(
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
            "/Server/GetUserInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserInventory(
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
            "/Server/GetUserInventory",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserPublisherData(
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
            "/Server/GetUserPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserPublisherInternalData(
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
            "/Server/GetUserPublisherInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserPublisherReadOnlyData(
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
            "/Server/GetUserPublisherReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GetUserReadOnlyData(
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
            "/Server/GetUserReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GrantCharacterToUser(
        GrantCharacterToUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GrantCharacterToUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GrantCharacterToUserResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GrantCharacterToUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GrantItemsToCharacter(
        GrantItemsToCharacterRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GrantItemsToCharacterResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GrantItemsToCharacterResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GrantItemsToCharacter",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GrantItemsToUser(
        GrantItemsToUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GrantItemsToUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GrantItemsToUserResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/GrantItemsToUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::GrantItemsToUsers(
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
            "/Server/GrantItemsToUsers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::LinkPSNAccount(
        LinkPSNAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkPSNAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkPSNAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/LinkPSNAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::LinkServerCustomId(
        LinkServerCustomIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkServerCustomIdResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkServerCustomIdResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/LinkServerCustomId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::LinkXboxAccount(
        LinkXboxAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkXboxAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkXboxAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/LinkXboxAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::LoginWithServerCustomId(
        LoginWithServerCustomIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ServerLoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ServerLoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/LoginWithServerCustomId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::LoginWithSteamId(
        LoginWithSteamIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ServerLoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ServerLoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/LoginWithSteamId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::LoginWithXbox(
        LoginWithXboxRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ServerLoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ServerLoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/LoginWithXbox",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::LoginWithXboxId(
        LoginWithXboxIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ServerLoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ServerLoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/LoginWithXboxId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::ModifyItemUses(
        ModifyItemUsesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyItemUsesResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ModifyItemUsesResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/ModifyItemUses",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::MoveItemToCharacterFromCharacter(
        MoveItemToCharacterFromCharacterRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<MoveItemToCharacterFromCharacterResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            MoveItemToCharacterFromCharacterResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/MoveItemToCharacterFromCharacter",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::MoveItemToCharacterFromUser(
        MoveItemToCharacterFromUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<MoveItemToCharacterFromUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            MoveItemToCharacterFromUserResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/MoveItemToCharacterFromUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::MoveItemToUserFromCharacter(
        MoveItemToUserFromCharacterRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<MoveItemToUserFromCharacterResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            MoveItemToUserFromCharacterResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/MoveItemToUserFromCharacter",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::NotifyMatchmakerPlayerLeft(
        NotifyMatchmakerPlayerLeftRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<NotifyMatchmakerPlayerLeftResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            NotifyMatchmakerPlayerLeftResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/NotifyMatchmakerPlayerLeft",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RedeemCoupon(
        RedeemCouponRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RedeemCouponResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RedeemCouponResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RedeemCoupon",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RedeemMatchmakerTicket(
        RedeemMatchmakerTicketRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RedeemMatchmakerTicketResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RedeemMatchmakerTicketResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RedeemMatchmakerTicket",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RefreshGameServerInstanceHeartbeat(
        RefreshGameServerInstanceHeartbeatRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RefreshGameServerInstanceHeartbeatResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RefreshGameServerInstanceHeartbeatResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RefreshGameServerInstanceHeartbeat",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RegisterGame(
        RegisterGameRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RegisterGameResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RegisterGameResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RegisterGame",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RemoveFriend(
        RemoveFriendRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RemoveFriend",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RemoveGenericID(
        RemoveGenericIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RemoveGenericID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RemovePlayerTag(
        RemovePlayerTagRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RemovePlayerTagResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RemovePlayerTagResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RemovePlayerTag",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RemoveSharedGroupMembers(
        RemoveSharedGroupMembersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RemoveSharedGroupMembersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RemoveSharedGroupMembersResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RemoveSharedGroupMembers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::ReportPlayer(
        ReportPlayerServerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ReportPlayerServerResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ReportPlayerServerResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/ReportPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RevokeAllBansForUser(
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
            "/Server/RevokeAllBansForUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RevokeBans(
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
            "/Server/RevokeBans",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RevokeInventoryItem(
        RevokeInventoryItemRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RevokeInventoryResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RevokeInventoryResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/RevokeInventoryItem",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::RevokeInventoryItems(
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
            "/Server/RevokeInventoryItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SavePushNotificationTemplate(
        SavePushNotificationTemplateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SavePushNotificationTemplateResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SavePushNotificationTemplateResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SavePushNotificationTemplate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SendCustomAccountRecoveryEmail(
        SendCustomAccountRecoveryEmailRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SendCustomAccountRecoveryEmailResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SendCustomAccountRecoveryEmailResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SendCustomAccountRecoveryEmail",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SendEmailFromTemplate(
        SendEmailFromTemplateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SendEmailFromTemplateResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SendEmailFromTemplateResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SendEmailFromTemplate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SendPushNotification(
        SendPushNotificationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SendPushNotificationResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SendPushNotificationResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SendPushNotification",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SendPushNotificationFromTemplate(
        SendPushNotificationFromTemplateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SendPushNotificationResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SendPushNotificationResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SendPushNotificationFromTemplate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetFriendTags(
        SetFriendTagsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetFriendTags",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetGameServerInstanceData(
        SetGameServerInstanceDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetGameServerInstanceDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetGameServerInstanceDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetGameServerInstanceData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetGameServerInstanceState(
        SetGameServerInstanceStateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetGameServerInstanceStateResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetGameServerInstanceStateResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetGameServerInstanceState",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetGameServerInstanceTags(
        SetGameServerInstanceTagsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetGameServerInstanceTagsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetGameServerInstanceTagsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetGameServerInstanceTags",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetPlayerSecret(
        SetPlayerSecretRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetPlayerSecretResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetPlayerSecretResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetPlayerSecret",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetPublisherData(
        SetPublisherDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetPublisherDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetPublisherDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetTitleData(
        SetTitleDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetTitleDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetTitleDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetTitleData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SetTitleInternalData(
        SetTitleDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetTitleDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetTitleDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SetTitleInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SubtractCharacterVirtualCurrency(
        SubtractCharacterVirtualCurrencyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyCharacterVirtualCurrencyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ModifyCharacterVirtualCurrencyResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/SubtractCharacterVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::SubtractUserVirtualCurrency(
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
            "/Server/SubtractUserVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UnlinkPSNAccount(
        UnlinkPSNAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkPSNAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkPSNAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UnlinkPSNAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UnlinkServerCustomId(
        UnlinkServerCustomIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkServerCustomIdResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkServerCustomIdResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UnlinkServerCustomId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UnlinkXboxAccount(
        UnlinkXboxAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkXboxAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkXboxAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UnlinkXboxAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UnlockContainerInstance(
        UnlockContainerInstanceRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlockContainerItemResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlockContainerItemResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UnlockContainerInstance",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UnlockContainerItem(
        UnlockContainerItemRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlockContainerItemResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlockContainerItemResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UnlockContainerItem",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateAvatarUrl(
        UpdateAvatarUrlRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdateAvatarUrl",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateBans(
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
            "/Server/UpdateBans",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateCharacterData(
        UpdateCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateCharacterDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdateCharacterData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateCharacterInternalData(
        UpdateCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateCharacterDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdateCharacterInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateCharacterReadOnlyData(
        UpdateCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateCharacterDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdateCharacterReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateCharacterStatistics(
        UpdateCharacterStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateCharacterStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateCharacterStatisticsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdateCharacterStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdatePlayerStatistics(
        UpdatePlayerStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdatePlayerStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdatePlayerStatisticsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdatePlayerStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateSharedGroupData(
        UpdateSharedGroupDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateSharedGroupDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UpdateSharedGroupDataResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdateSharedGroupData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateUserData(
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
            "/Server/UpdateUserData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateUserInternalData(
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
            "/Server/UpdateUserInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateUserInventoryItemCustomData(
        UpdateUserInventoryItemDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            EmptyResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/UpdateUserInventoryItemCustomData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateUserPublisherData(
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
            "/Server/UpdateUserPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateUserPublisherInternalData(
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
            "/Server/UpdateUserPublisherInternalData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateUserPublisherReadOnlyData(
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
            "/Server/UpdateUserPublisherReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::UpdateUserReadOnlyData(
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
            "/Server/UpdateUserReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::WriteCharacterEvent(
        WriteServerCharacterEventRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<WriteEventResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            WriteEventResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/WriteCharacterEvent",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::WritePlayerEvent(
        WriteServerPlayerEventRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<WriteEventResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            WriteEventResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/WritePlayerEvent",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabServerInstanceAPI::WriteTitleEvent(
        WriteTitleEventRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<WriteEventResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-SecretKey", m_settings->developerSecretKey.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            WriteEventResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Server/WriteTitleEvent",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    bool PlayFabServerInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
    {
        if (httpResult.serviceResponse.HttpCode == 200)
        {
            result.FromJson(httpResult.serviceResponse.Data);
            JsonUtils::FromJson(httpResult.requestBody, result.Request);
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
