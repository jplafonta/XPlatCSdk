#include <stdafx.h>

#if !defined(DISABLE_PLAYFABCLIENT_API)

#include <Client/ClientApi.h>
#include <playfab/PlayFabSettings.h>

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (disable: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)

namespace PlayFab
{
    using namespace ClientModels;

    PlayFabClientInstanceAPI::PlayFabClientInstanceAPI() :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(MakeShared<PlayFabAuthenticationContext>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabClientInstanceAPI::PlayFabClientInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings) :
        m_settings(apiSettings),
        m_context(MakeShared<PlayFabAuthenticationContext>()),
        m_httpClient(m_settings)
    {
    }

    PlayFabClientInstanceAPI::PlayFabClientInstanceAPI(const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(MakeShared<PlayFabApiSettings>()),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    PlayFabClientInstanceAPI::PlayFabClientInstanceAPI(const SharedPtr<PlayFabApiSettings>& apiSettings, const SharedPtr<PlayFabAuthenticationContext>& authenticationContext) :
        m_settings(apiSettings),
        m_context(authenticationContext),
        m_httpClient(m_settings)
    {
    }

    SharedPtr<PlayFabApiSettings> PlayFabClientInstanceAPI::GetSettings() const
    {
        return this->m_settings;
    }

    SharedPtr<PlayFabAuthenticationContext> PlayFabClientInstanceAPI::GetAuthenticationContext() const
    {
        return this->m_context;
    }

    void PlayFabClientInstanceAPI::ForgetAllCredentials()
    {
        if (this->m_context != nullptr)
        {
            this->m_context->ForgetAllCredentials();
        }
    }

    // PlayFabClient instance APIs

    void PlayFabClientInstanceAPI::AcceptTrade(
        AcceptTradeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AcceptTradeResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AcceptTradeResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/AcceptTrade",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AddFriend(
        AddFriendRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddFriendResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddFriendResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/AddFriend",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AddGenericID(
        AddGenericIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddGenericIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddGenericIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/AddGenericID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AddOrUpdateContactEmail(
        AddOrUpdateContactEmailRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddOrUpdateContactEmailResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddOrUpdateContactEmailResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/AddOrUpdateContactEmail",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AddSharedGroupMembers(
        AddSharedGroupMembersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddSharedGroupMembersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/AddSharedGroupMembers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AddUsernamePassword(
        AddUsernamePasswordRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AddUsernamePasswordResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AddUsernamePasswordResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/AddUsernamePassword",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AddUserVirtualCurrency(
        AddUserVirtualCurrencyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/AddUserVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AndroidDevicePushNotificationRegistration(
        AndroidDevicePushNotificationRegistrationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AndroidDevicePushNotificationRegistrationResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AndroidDevicePushNotificationRegistrationResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/AndroidDevicePushNotificationRegistration",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::AttributeInstall(
        AttributeInstallRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<AttributeInstallResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            AttributeInstallResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                context->advertisingIdType += "_Successful";
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/AttributeInstall",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::CancelTrade(
        CancelTradeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CancelTradeResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CancelTradeResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/CancelTrade",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ConfirmPurchase(
        ConfirmPurchaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ConfirmPurchaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ConfirmPurchaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ConfirmPurchase",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ConsumeItem(
        ConsumeItemRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ConsumeItemResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/ConsumeItem",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ConsumeMicrosoftStoreEntitlements(
        ConsumeMicrosoftStoreEntitlementsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ConsumeMicrosoftStoreEntitlementsResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ConsumeMicrosoftStoreEntitlementsResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ConsumeMicrosoftStoreEntitlements",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ConsumePS5Entitlements(
        ConsumePS5EntitlementsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ConsumePS5EntitlementsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ConsumePS5EntitlementsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ConsumePS5Entitlements",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ConsumePSNEntitlements(
        ConsumePSNEntitlementsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ConsumePSNEntitlementsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ConsumePSNEntitlementsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ConsumePSNEntitlements",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ConsumeXboxEntitlements(
        ConsumeXboxEntitlementsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ConsumeXboxEntitlementsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ConsumeXboxEntitlementsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ConsumeXboxEntitlements",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::CreateSharedGroup(
        CreateSharedGroupRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CreateSharedGroupResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/CreateSharedGroup",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ExecuteCloudScript(
        ExecuteCloudScriptRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ExecuteCloudScriptResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/ExecuteCloudScript",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetAccountInfo(
        GetAccountInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetAccountInfoResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetAccountInfoResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetAccountInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetAdPlacements(
        GetAdPlacementsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetAdPlacementsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetAdPlacementsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetAdPlacements",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetAllUsersCharacters(
        ListUsersCharactersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ListUsersCharactersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetAllUsersCharacters",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetCatalogItems(
        GetCatalogItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCatalogItemsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetCatalogItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetCharacterData(
        GetCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetCharacterData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetCharacterInventory(
        GetCharacterInventoryRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterInventoryResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetCharacterInventory",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetCharacterLeaderboard(
        GetCharacterLeaderboardRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterLeaderboardResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetCharacterLeaderboard",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetCharacterReadOnlyData(
        GetCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetCharacterReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetCharacterStatistics(
        GetCharacterStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetCharacterStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetCharacterStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetContentDownloadUrl(
        GetContentDownloadUrlRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetContentDownloadUrlResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetContentDownloadUrl",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetCurrentGames(
        CurrentGamesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<CurrentGamesResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            CurrentGamesResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetCurrentGames",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetFriendLeaderboard(
        GetFriendLeaderboardRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetFriendLeaderboard",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetFriendLeaderboardAroundPlayer(
        GetFriendLeaderboardAroundPlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetFriendLeaderboardAroundPlayerResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetFriendLeaderboardAroundPlayerResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetFriendLeaderboardAroundPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetFriendsList(
        GetFriendsListRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetFriendsListResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetFriendsList",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetGameServerRegions(
        GameServerRegionsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GameServerRegionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GameServerRegionsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetGameServerRegions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetLeaderboard(
        GetLeaderboardRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetLeaderboard",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetLeaderboardAroundCharacter(
        GetLeaderboardAroundCharacterRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardAroundCharacterResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetLeaderboardAroundCharacter",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetLeaderboardAroundPlayer(
        GetLeaderboardAroundPlayerRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardAroundPlayerResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetLeaderboardAroundPlayerResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetLeaderboardAroundPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetLeaderboardForUserCharacters(
        GetLeaderboardForUsersCharactersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetLeaderboardForUsersCharactersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetLeaderboardForUserCharacters",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPaymentToken(
        GetPaymentTokenRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPaymentTokenResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPaymentTokenResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPaymentToken",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPhotonAuthenticationToken(
        GetPhotonAuthenticationTokenRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPhotonAuthenticationTokenResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPhotonAuthenticationTokenResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPhotonAuthenticationToken",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayerCombinedInfo(
        GetPlayerCombinedInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerCombinedInfoResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayerCombinedInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayerProfile(
        GetPlayerProfileRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerProfileResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayerProfile",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayerSegments(
        GetPlayerSegmentsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerSegmentsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayerSegments",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayerStatistics(
        GetPlayerStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayerStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayerStatisticVersions(
        GetPlayerStatisticVersionsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerStatisticVersionsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayerStatisticVersions",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayerTags(
        GetPlayerTagsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerTagsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayerTags",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayerTrades(
        GetPlayerTradesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayerTradesResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayerTradesResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPlayerTrades",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromFacebookIDs(
        GetPlayFabIDsFromFacebookIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromFacebookIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayFabIDsFromFacebookIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromFacebookInstantGamesIds(
        GetPlayFabIDsFromFacebookInstantGamesIdsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromFacebookInstantGamesIdsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayFabIDsFromFacebookInstantGamesIds",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromGameCenterIDs(
        GetPlayFabIDsFromGameCenterIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromGameCenterIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromGameCenterIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromGameCenterIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromGenericIDs(
        GetPlayFabIDsFromGenericIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromGenericIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayFabIDsFromGenericIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromGoogleIDs(
        GetPlayFabIDsFromGoogleIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromGoogleIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromGoogleIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromGoogleIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromKongregateIDs(
        GetPlayFabIDsFromKongregateIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromKongregateIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromKongregateIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromKongregateIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromNintendoSwitchDeviceIds(
        GetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayFabIDsFromNintendoSwitchDeviceIds",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromPSNAccountIDs(
        GetPlayFabIDsFromPSNAccountIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromPSNAccountIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayFabIDsFromPSNAccountIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromSteamIDs(
        GetPlayFabIDsFromSteamIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromSteamIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayFabIDsFromSteamIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromTwitchIDs(
        GetPlayFabIDsFromTwitchIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromTwitchIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPlayFabIDsFromTwitchIDsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromTwitchIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPlayFabIDsFromXboxLiveIDs(
        GetPlayFabIDsFromXboxLiveIDsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPlayFabIDsFromXboxLiveIDsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPlayFabIDsFromXboxLiveIDs",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPublisherData(
        GetPublisherDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPublisherDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetPurchase(
        GetPurchaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetPurchaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetPurchaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetPurchase",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetSharedGroupData(
        GetSharedGroupDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetSharedGroupDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetSharedGroupData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetStoreItems(
        GetStoreItemsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetStoreItemsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetStoreItems",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetTime(
        GetTimeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTimeResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetTime",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetTitleData(
        GetTitleDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetTitleData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetTitleNews(
        GetTitleNewsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitleNewsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetTitleNews",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetTitlePublicKey(
        GetTitlePublicKeyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTitlePublicKeyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTitlePublicKeyResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetTitlePublicKey",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetTradeStatus(
        GetTradeStatusRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetTradeStatusResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetTradeStatusResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetTradeStatus",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetUserData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetUserData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetUserInventory(
        GetUserInventoryRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserInventoryResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetUserInventory",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetUserPublisherData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetUserPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetUserPublisherReadOnlyData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetUserPublisherReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetUserReadOnlyData(
        GetUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GetUserReadOnlyData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GetWindowsHelloChallenge(
        GetWindowsHelloChallengeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GetWindowsHelloChallengeResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            GetWindowsHelloChallengeResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/GetWindowsHelloChallenge",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::GrantCharacterToUser(
        GrantCharacterToUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<GrantCharacterToUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/GrantCharacterToUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkAndroidDeviceID(
        LinkAndroidDeviceIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkAndroidDeviceIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkAndroidDeviceIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkAndroidDeviceID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkApple(
        LinkAppleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/LinkApple",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkCustomID(
        LinkCustomIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkCustomIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkCustomIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkCustomID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkFacebookAccount(
        LinkFacebookAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkFacebookAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkFacebookAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkFacebookAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkFacebookInstantGamesId(
        LinkFacebookInstantGamesIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkFacebookInstantGamesIdResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkFacebookInstantGamesIdResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkFacebookInstantGamesId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkGameCenterAccount(
        LinkGameCenterAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkGameCenterAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkGameCenterAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkGameCenterAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkGoogleAccount(
        LinkGoogleAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkGoogleAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkGoogleAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkGoogleAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkIOSDeviceID(
        LinkIOSDeviceIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkIOSDeviceIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkIOSDeviceIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkIOSDeviceID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkKongregate(
        LinkKongregateAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkKongregateAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkKongregateAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkKongregate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkNintendoServiceAccount(
        LinkNintendoServiceAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/LinkNintendoServiceAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkNintendoSwitchDeviceId(
        LinkNintendoSwitchDeviceIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkNintendoSwitchDeviceIdResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkNintendoSwitchDeviceIdResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkNintendoSwitchDeviceId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkOpenIdConnect(
        LinkOpenIdConnectRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/LinkOpenIdConnect",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkPSNAccount(
        LinkPSNAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkPSNAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/LinkPSNAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkSteamAccount(
        LinkSteamAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkSteamAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkSteamAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkSteamAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkTwitch(
        LinkTwitchAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkTwitchAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkTwitchAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkTwitch",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkWindowsHello(
        LinkWindowsHelloAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkWindowsHelloAccountResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LinkWindowsHelloAccountResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LinkWindowsHello",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LinkXboxAccount(
        LinkXboxAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LinkXboxAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/LinkXboxAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithAndroidDeviceID(
        LoginWithAndroidDeviceIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithAndroidDeviceID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithApple(
        LoginWithAppleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithApple",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithCustomID(
        LoginWithCustomIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithCustomID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithEmailAddress(
        LoginWithEmailAddressRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithEmailAddress",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithFacebook(
        LoginWithFacebookRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithFacebook",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithFacebookInstantGamesId(
        LoginWithFacebookInstantGamesIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithFacebookInstantGamesId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithGameCenter(
        LoginWithGameCenterRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithGameCenter",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithGoogleAccount(
        LoginWithGoogleAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithGoogleAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithIOSDeviceID(
        LoginWithIOSDeviceIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithIOSDeviceID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithKongregate(
        LoginWithKongregateRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithKongregate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithNintendoServiceAccount(
        LoginWithNintendoServiceAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithNintendoServiceAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithNintendoSwitchDeviceId(
        LoginWithNintendoSwitchDeviceIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithNintendoSwitchDeviceId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithOpenIdConnect(
        LoginWithOpenIdConnectRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithOpenIdConnect",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithPlayFab(
        LoginWithPlayFabRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithPlayFab",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithPSN(
        LoginWithPSNRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithPSN",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithSteam(
        LoginWithSteamRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithSteam",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithTwitch(
        LoginWithTwitchRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithTwitch",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithWindowsHello(
        LoginWithWindowsHelloRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithWindowsHello",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::LoginWithXbox(
        LoginWithXboxRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/LoginWithXbox",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::Matchmake(
        MatchmakeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<MatchmakeResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            MatchmakeResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/Matchmake",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::OpenTrade(
        OpenTradeRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<OpenTradeResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            OpenTradeResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/OpenTrade",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::PayForPurchase(
        PayForPurchaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<PayForPurchaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            PayForPurchaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/PayForPurchase",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::PurchaseItem(
        PurchaseItemRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<PurchaseItemResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            PurchaseItemResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/PurchaseItem",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RedeemCoupon(
        RedeemCouponRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RedeemCouponResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/RedeemCoupon",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RefreshPSNAuthToken(
        RefreshPSNAuthTokenRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/RefreshPSNAuthToken",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RegisterForIOSPushNotification(
        RegisterForIOSPushNotificationRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RegisterForIOSPushNotificationResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RegisterForIOSPushNotificationResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RegisterForIOSPushNotification",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RegisterPlayFabUser(
        RegisterPlayFabUserRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RegisterPlayFabUserResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RegisterPlayFabUserResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RegisterPlayFabUser",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RegisterWithWindowsHello(
        RegisterWithWindowsHelloRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<LoginResult> callback,
        const ErrorCallback errorCallback
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            LoginResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RegisterWithWindowsHello",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RemoveContactEmail(
        RemoveContactEmailRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RemoveContactEmailResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RemoveContactEmailResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RemoveContactEmail",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RemoveFriend(
        RemoveFriendRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RemoveFriendResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RemoveFriendResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RemoveFriend",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RemoveGenericID(
        RemoveGenericIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RemoveGenericIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RemoveGenericIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RemoveGenericID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RemoveSharedGroupMembers(
        RemoveSharedGroupMembersRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RemoveSharedGroupMembersResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/RemoveSharedGroupMembers",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ReportAdActivity(
        ReportAdActivityRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ReportAdActivityResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ReportAdActivityResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ReportAdActivity",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ReportDeviceInfo(
        DeviceInfoRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/ReportDeviceInfo",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ReportPlayer(
        ReportPlayerClientRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ReportPlayerClientResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ReportPlayerClientResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ReportPlayer",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RestoreIOSPurchases(
        RestoreIOSPurchasesRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RestoreIOSPurchasesResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RestoreIOSPurchasesResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RestoreIOSPurchases",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::RewardAdActivity(
        RewardAdActivityRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<RewardAdActivityResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            RewardAdActivityResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/RewardAdActivity",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::SendAccountRecoveryEmail(
        SendAccountRecoveryEmailRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SendAccountRecoveryEmailResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SendAccountRecoveryEmailResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/SendAccountRecoveryEmail",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::SetFriendTags(
        SetFriendTagsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetFriendTagsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            SetFriendTagsResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/SetFriendTags",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::SetPlayerSecret(
        SetPlayerSecretRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<SetPlayerSecretResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/SetPlayerSecret",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::StartGame(
        StartGameRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<StartGameResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            StartGameResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/StartGame",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::StartPurchase(
        StartPurchaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<StartPurchaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            StartPurchaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/StartPurchase",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::SubtractUserVirtualCurrency(
        SubtractUserVirtualCurrencyRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ModifyUserVirtualCurrencyResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/SubtractUserVirtualCurrency",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkAndroidDeviceID(
        UnlinkAndroidDeviceIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkAndroidDeviceIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkAndroidDeviceIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkAndroidDeviceID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkApple(
        UnlinkAppleRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UnlinkApple",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkCustomID(
        UnlinkCustomIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkCustomIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkCustomIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkCustomID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkFacebookAccount(
        UnlinkFacebookAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkFacebookAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkFacebookAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkFacebookAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkFacebookInstantGamesId(
        UnlinkFacebookInstantGamesIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkFacebookInstantGamesIdResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkFacebookInstantGamesIdResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkFacebookInstantGamesId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkGameCenterAccount(
        UnlinkGameCenterAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkGameCenterAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkGameCenterAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkGameCenterAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkGoogleAccount(
        UnlinkGoogleAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkGoogleAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkGoogleAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkGoogleAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkIOSDeviceID(
        UnlinkIOSDeviceIDRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkIOSDeviceIDResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkIOSDeviceIDResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkIOSDeviceID",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkKongregate(
        UnlinkKongregateAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkKongregateAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkKongregateAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkKongregate",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkNintendoServiceAccount(
        UnlinkNintendoServiceAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UnlinkNintendoServiceAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkNintendoSwitchDeviceId(
        UnlinkNintendoSwitchDeviceIdRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkNintendoSwitchDeviceIdResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkNintendoSwitchDeviceIdResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkNintendoSwitchDeviceId",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkOpenIdConnect(
        UnlinkOpenIdConnectRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UnlinkOpenIdConnect",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkPSNAccount(
        UnlinkPSNAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkPSNAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UnlinkPSNAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkSteamAccount(
        UnlinkSteamAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkSteamAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkSteamAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkSteamAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkTwitch(
        UnlinkTwitchAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkTwitchAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkTwitchAccountResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkTwitch",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkWindowsHello(
        UnlinkWindowsHelloAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkWindowsHelloAccountResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            UnlinkWindowsHelloAccountResponse outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/UnlinkWindowsHello",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlinkXboxAccount(
        UnlinkXboxAccountRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlinkXboxAccountResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UnlinkXboxAccount",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlockContainerInstance(
        UnlockContainerInstanceRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlockContainerItemResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UnlockContainerInstance",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UnlockContainerItem(
        UnlockContainerItemRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UnlockContainerItemResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UnlockContainerItem",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdateAvatarUrl(
        UpdateAvatarUrlRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<EmptyResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdateAvatarUrl",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdateCharacterData(
        UpdateCharacterDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateCharacterDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdateCharacterData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdateCharacterStatistics(
        UpdateCharacterStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateCharacterStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdateCharacterStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdatePlayerStatistics(
        UpdatePlayerStatisticsRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdatePlayerStatisticsResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdatePlayerStatistics",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdateSharedGroupData(
        UpdateSharedGroupDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateSharedGroupDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdateSharedGroupData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdateUserData(
        UpdateUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdateUserData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdateUserPublisherData(
        UpdateUserDataRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserDataResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdateUserPublisherData",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::UpdateUserTitleDisplayName(
        UpdateUserTitleDisplayNameRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<UpdateUserTitleDisplayNameResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/UpdateUserTitleDisplayName",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ValidateAmazonIAPReceipt(
        ValidateAmazonReceiptRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ValidateAmazonReceiptResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ValidateAmazonReceiptResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ValidateAmazonIAPReceipt",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ValidateGooglePlayPurchase(
        ValidateGooglePlayPurchaseRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ValidateGooglePlayPurchaseResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ValidateGooglePlayPurchaseResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ValidateGooglePlayPurchase",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ValidateIOSReceipt(
        ValidateIOSReceiptRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ValidateIOSReceiptResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ValidateIOSReceiptResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ValidateIOSReceipt",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::ValidateWindowsStoreReceipt(
        ValidateWindowsReceiptRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<ValidateWindowsReceiptResult> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        // TODO bug: There is a lifetime issue with capturing this here since the client owns the object
        auto callComplete = [ this, callback, errorCallback, context{ m_context } ](const HttpResult& httpResult)
        {
            ValidateWindowsReceiptResult outResult;
            if (ParseResult(outResult, httpResult, errorCallback))
            {
                if (callback)
                {
                    callback(outResult);
                }
            }
        };

        m_httpClient.MakePostRequest(
            "/Client/ValidateWindowsStoreReceipt",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::WriteCharacterEvent(
        WriteClientCharacterEventRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<WriteEventResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/WriteCharacterEvent",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::WritePlayerEvent(
        WriteClientPlayerEventRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<WriteEventResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/WritePlayerEvent",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    void PlayFabClientInstanceAPI::WriteTitleEvent(
        WriteTitleEventRequest& request,
        const TaskQueue& queue,
        const ProcessApiCallback<WriteEventResponse> callback,
        const ErrorCallback errorCallback
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

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
            "/Client/WriteTitleEvent",
            headers,
            request.ToJson(),
            queue,
            callComplete
        );
    }

    // Private PlayFabClientInstanceAPI specific
    bool PlayFabClientInstanceAPI::IsClientLoggedIn()
    {
        return !this->m_context->clientSessionTicket.empty();
    }

    void PlayFabClientInstanceAPI::MultiStepClientLogin(SharedPtr<PlayFabAuthenticationContext> context, bool needsAttribution)
    {
        if (needsAttribution && !context->disableAdvertising && context->advertisingIdType.length() > 0 && context->advertisingIdValue.length() > 0)
        {
            AttributeInstallRequest request;
            if (context->advertisingIdType == PlayFabSettings::AD_TYPE_IDFA)
            {
                request.idfa = context->advertisingIdValue.data();
                AttributeInstall(request, nullptr, nullptr);
            }
            else if (context->advertisingIdType == PlayFabSettings::AD_TYPE_ANDROID_ID)
            {
                request.adid = context->advertisingIdValue.data();
                AttributeInstall(request, nullptr, nullptr);
            }
        }
    }

    bool PlayFabClientInstanceAPI::ParseResult(BaseResult& result, const HttpResult& httpResult, const ErrorCallback& errorHandler)
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
