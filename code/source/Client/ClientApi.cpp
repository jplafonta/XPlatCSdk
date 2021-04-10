#include "stdafx.h"

#if !defined(DISABLE_PLAYFABCLIENT_API)

#include "ClientApi.h"
#include "PlayFabSettings.h"

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

    AsyncOp<AcceptTradeResponse> PlayFabClientInstanceAPI::AcceptTrade(
        const PlayFabClientAcceptTradeRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AcceptTrade",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<AcceptTradeResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                AcceptTradeResponse resultModel;
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

    AsyncOp<AddFriendResult> PlayFabClientInstanceAPI::AddFriend(
        const PlayFabClientAddFriendRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AddFriend",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<AddFriendResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                AddFriendResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::AddGenericID(
        const PlayFabClientAddGenericIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AddGenericID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::AddOrUpdateContactEmail(
        const PlayFabClientAddOrUpdateContactEmailRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AddOrUpdateContactEmail",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::AddSharedGroupMembers(
        const PlayFabClientAddSharedGroupMembersRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AddSharedGroupMembers",
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

    AsyncOp<AddUsernamePasswordResult> PlayFabClientInstanceAPI::AddUsernamePassword(
        const PlayFabClientAddUsernamePasswordRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AddUsernamePassword",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<AddUsernamePasswordResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                AddUsernamePasswordResult resultModel;
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

    AsyncOp<ModifyUserVirtualCurrencyResult> PlayFabClientInstanceAPI::AddUserVirtualCurrency(
        const PlayFabClientAddUserVirtualCurrencyRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AddUserVirtualCurrency",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ModifyUserVirtualCurrencyResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::AndroidDevicePushNotificationRegistration(
        const PlayFabClientAndroidDevicePushNotificationRegistrationRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AndroidDevicePushNotificationRegistration",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::AttributeInstall(
        const PlayFabClientAttributeInstallRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/AttributeInstall",
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

    AsyncOp<CancelTradeResponse> PlayFabClientInstanceAPI::CancelTrade(
        const PlayFabClientCancelTradeRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/CancelTrade",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CancelTradeResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CancelTradeResponse resultModel;
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

    AsyncOp<ConfirmPurchaseResult> PlayFabClientInstanceAPI::ConfirmPurchase(
        const PlayFabClientConfirmPurchaseRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ConfirmPurchase",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ConfirmPurchaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ConfirmPurchaseResult resultModel;
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

    AsyncOp<ConsumeItemResult> PlayFabClientInstanceAPI::ConsumeItem(
        const PlayFabClientConsumeItemRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ConsumeItem",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ConsumeItemResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ConsumeItemResult resultModel;
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

    AsyncOp<ConsumeMicrosoftStoreEntitlementsResponse> PlayFabClientInstanceAPI::ConsumeMicrosoftStoreEntitlements(
        const PlayFabClientConsumeMicrosoftStoreEntitlementsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ConsumeMicrosoftStoreEntitlements",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ConsumeMicrosoftStoreEntitlementsResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ConsumeMicrosoftStoreEntitlementsResponse resultModel;
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

    AsyncOp<ConsumePS5EntitlementsResult> PlayFabClientInstanceAPI::ConsumePS5Entitlements(
        const PlayFabClientConsumePS5EntitlementsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ConsumePS5Entitlements",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ConsumePS5EntitlementsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ConsumePS5EntitlementsResult resultModel;
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

    AsyncOp<ConsumePSNEntitlementsResult> PlayFabClientInstanceAPI::ConsumePSNEntitlements(
        const PlayFabClientConsumePSNEntitlementsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ConsumePSNEntitlements",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ConsumePSNEntitlementsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ConsumePSNEntitlementsResult resultModel;
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

    AsyncOp<ConsumeXboxEntitlementsResult> PlayFabClientInstanceAPI::ConsumeXboxEntitlements(
        const PlayFabClientConsumeXboxEntitlementsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ConsumeXboxEntitlements",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ConsumeXboxEntitlementsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ConsumeXboxEntitlementsResult resultModel;
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

    AsyncOp<CreateSharedGroupResult> PlayFabClientInstanceAPI::CreateSharedGroup(
        const PlayFabClientCreateSharedGroupRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/CreateSharedGroup",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CreateSharedGroupResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CreateSharedGroupResult resultModel;
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

    AsyncOp<ExecuteCloudScriptResult> PlayFabClientInstanceAPI::ExecuteCloudScript(
        const PlayFabClientExecuteCloudScriptRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ExecuteCloudScript",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ExecuteCloudScriptResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ExecuteCloudScriptResult resultModel;
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

    AsyncOp<GetAccountInfoResult> PlayFabClientInstanceAPI::GetAccountInfo(
        const PlayFabClientGetAccountInfoRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetAccountInfo",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetAccountInfoResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetAccountInfoResult resultModel;
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

    AsyncOp<GetAdPlacementsResult> PlayFabClientInstanceAPI::GetAdPlacements(
        const PlayFabClientGetAdPlacementsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetAdPlacements",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetAdPlacementsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetAdPlacementsResult resultModel;
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

    AsyncOp<ListUsersCharactersResult> PlayFabClientInstanceAPI::GetAllUsersCharacters(
        const PlayFabClientListUsersCharactersRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetAllUsersCharacters",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ListUsersCharactersResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ListUsersCharactersResult resultModel;
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

    AsyncOp<GetCatalogItemsResult> PlayFabClientInstanceAPI::GetCatalogItems(
        const PlayFabClientGetCatalogItemsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetCatalogItems",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetCatalogItemsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetCatalogItemsResult resultModel;
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

    AsyncOp<GetCharacterDataResult> PlayFabClientInstanceAPI::GetCharacterData(
        const PlayFabClientGetCharacterDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetCharacterData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetCharacterDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetCharacterDataResult resultModel;
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

    AsyncOp<GetCharacterInventoryResult> PlayFabClientInstanceAPI::GetCharacterInventory(
        const PlayFabClientGetCharacterInventoryRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetCharacterInventory",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetCharacterInventoryResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetCharacterInventoryResult resultModel;
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

    AsyncOp<GetCharacterLeaderboardResult> PlayFabClientInstanceAPI::GetCharacterLeaderboard(
        const PlayFabClientGetCharacterLeaderboardRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetCharacterLeaderboard",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetCharacterLeaderboardResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetCharacterLeaderboardResult resultModel;
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

    AsyncOp<GetCharacterDataResult> PlayFabClientInstanceAPI::GetCharacterReadOnlyData(
        const PlayFabClientGetCharacterDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetCharacterReadOnlyData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetCharacterDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetCharacterDataResult resultModel;
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

    AsyncOp<GetCharacterStatisticsResult> PlayFabClientInstanceAPI::GetCharacterStatistics(
        const PlayFabClientGetCharacterStatisticsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetCharacterStatistics",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetCharacterStatisticsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetCharacterStatisticsResult resultModel;
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

    AsyncOp<GetContentDownloadUrlResult> PlayFabClientInstanceAPI::GetContentDownloadUrl(
        const PlayFabClientGetContentDownloadUrlRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetContentDownloadUrl",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetContentDownloadUrlResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetContentDownloadUrlResult resultModel;
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

    AsyncOp<CurrentGamesResult> PlayFabClientInstanceAPI::GetCurrentGames(
        const PlayFabClientCurrentGamesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetCurrentGames",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<CurrentGamesResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                CurrentGamesResult resultModel;
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

    AsyncOp<GetLeaderboardResult> PlayFabClientInstanceAPI::GetFriendLeaderboard(
        const PlayFabClientGetFriendLeaderboardRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetFriendLeaderboard",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetLeaderboardResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetLeaderboardResult resultModel;
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

    AsyncOp<GetFriendLeaderboardAroundPlayerResult> PlayFabClientInstanceAPI::GetFriendLeaderboardAroundPlayer(
        const PlayFabClientGetFriendLeaderboardAroundPlayerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetFriendLeaderboardAroundPlayer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetFriendLeaderboardAroundPlayerResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetFriendLeaderboardAroundPlayerResult resultModel;
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

    AsyncOp<GetFriendsListResult> PlayFabClientInstanceAPI::GetFriendsList(
        const PlayFabClientGetFriendsListRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetFriendsList",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetFriendsListResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetFriendsListResult resultModel;
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

    AsyncOp<GameServerRegionsResult> PlayFabClientInstanceAPI::GetGameServerRegions(
        const PlayFabClientGameServerRegionsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetGameServerRegions",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GameServerRegionsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GameServerRegionsResult resultModel;
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

    AsyncOp<GetLeaderboardResult> PlayFabClientInstanceAPI::GetLeaderboard(
        const PlayFabClientGetLeaderboardRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetLeaderboard",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetLeaderboardResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetLeaderboardResult resultModel;
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

    AsyncOp<GetLeaderboardAroundCharacterResult> PlayFabClientInstanceAPI::GetLeaderboardAroundCharacter(
        const PlayFabClientGetLeaderboardAroundCharacterRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetLeaderboardAroundCharacter",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetLeaderboardAroundCharacterResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetLeaderboardAroundCharacterResult resultModel;
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

    AsyncOp<GetLeaderboardAroundPlayerResult> PlayFabClientInstanceAPI::GetLeaderboardAroundPlayer(
        const PlayFabClientGetLeaderboardAroundPlayerRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetLeaderboardAroundPlayer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetLeaderboardAroundPlayerResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetLeaderboardAroundPlayerResult resultModel;
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

    AsyncOp<GetLeaderboardForUsersCharactersResult> PlayFabClientInstanceAPI::GetLeaderboardForUserCharacters(
        const PlayFabClientGetLeaderboardForUsersCharactersRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetLeaderboardForUserCharacters",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetLeaderboardForUsersCharactersResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetLeaderboardForUsersCharactersResult resultModel;
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

    AsyncOp<GetPaymentTokenResult> PlayFabClientInstanceAPI::GetPaymentToken(
        const PlayFabClientGetPaymentTokenRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPaymentToken",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPaymentTokenResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPaymentTokenResult resultModel;
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

    AsyncOp<GetPhotonAuthenticationTokenResult> PlayFabClientInstanceAPI::GetPhotonAuthenticationToken(
        const PlayFabClientGetPhotonAuthenticationTokenRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPhotonAuthenticationToken",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPhotonAuthenticationTokenResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPhotonAuthenticationTokenResult resultModel;
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

    AsyncOp<GetPlayerCombinedInfoResult> PlayFabClientInstanceAPI::GetPlayerCombinedInfo(
        const PlayFabClientGetPlayerCombinedInfoRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayerCombinedInfo",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayerCombinedInfoResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayerCombinedInfoResult resultModel;
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

    AsyncOp<GetPlayerProfileResult> PlayFabClientInstanceAPI::GetPlayerProfile(
        const PlayFabClientGetPlayerProfileRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayerProfile",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayerProfileResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayerProfileResult resultModel;
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

    AsyncOp<GetPlayerSegmentsResult> PlayFabClientInstanceAPI::GetPlayerSegments(
        const BaseRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayerSegments",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayerSegmentsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayerSegmentsResult resultModel;
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

    AsyncOp<GetPlayerStatisticsResult> PlayFabClientInstanceAPI::GetPlayerStatistics(
        const PlayFabClientGetPlayerStatisticsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayerStatistics",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayerStatisticsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayerStatisticsResult resultModel;
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

    AsyncOp<GetPlayerStatisticVersionsResult> PlayFabClientInstanceAPI::GetPlayerStatisticVersions(
        const PlayFabClientGetPlayerStatisticVersionsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayerStatisticVersions",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayerStatisticVersionsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayerStatisticVersionsResult resultModel;
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

    AsyncOp<GetPlayerTagsResult> PlayFabClientInstanceAPI::GetPlayerTags(
        const PlayFabClientGetPlayerTagsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayerTags",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayerTagsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayerTagsResult resultModel;
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

    AsyncOp<GetPlayerTradesResponse> PlayFabClientInstanceAPI::GetPlayerTrades(
        const PlayFabClientGetPlayerTradesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayerTrades",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayerTradesResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayerTradesResponse resultModel;
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

    AsyncOp<GetPlayFabIDsFromFacebookIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromFacebookIDs(
        const PlayFabClientGetPlayFabIDsFromFacebookIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromFacebookIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromFacebookIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromFacebookIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromFacebookInstantGamesIdsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromFacebookInstantGamesIds(
        const PlayFabClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromFacebookInstantGamesIds",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromFacebookInstantGamesIdsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromFacebookInstantGamesIdsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromGameCenterIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromGameCenterIDs(
        const PlayFabClientGetPlayFabIDsFromGameCenterIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromGameCenterIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromGameCenterIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromGameCenterIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromGenericIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromGenericIDs(
        const PlayFabClientGetPlayFabIDsFromGenericIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromGenericIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromGenericIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromGenericIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromGoogleIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromGoogleIDs(
        const PlayFabClientGetPlayFabIDsFromGoogleIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromGoogleIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromGoogleIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromGoogleIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromKongregateIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromKongregateIDs(
        const PlayFabClientGetPlayFabIDsFromKongregateIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromKongregateIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromKongregateIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromKongregateIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromNintendoSwitchDeviceIds(
        const PlayFabClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromNintendoSwitchDeviceIds",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromNintendoSwitchDeviceIdsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromNintendoSwitchDeviceIdsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromPSNAccountIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromPSNAccountIDs(
        const PlayFabClientGetPlayFabIDsFromPSNAccountIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromPSNAccountIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromPSNAccountIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromPSNAccountIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromSteamIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromSteamIDs(
        const PlayFabClientGetPlayFabIDsFromSteamIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromSteamIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromSteamIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromSteamIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromTwitchIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromTwitchIDs(
        const PlayFabClientGetPlayFabIDsFromTwitchIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromTwitchIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromTwitchIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromTwitchIDsResult resultModel;
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

    AsyncOp<GetPlayFabIDsFromXboxLiveIDsResult> PlayFabClientInstanceAPI::GetPlayFabIDsFromXboxLiveIDs(
        const PlayFabClientGetPlayFabIDsFromXboxLiveIDsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPlayFabIDsFromXboxLiveIDs",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPlayFabIDsFromXboxLiveIDsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPlayFabIDsFromXboxLiveIDsResult resultModel;
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

    AsyncOp<GetPublisherDataResult> PlayFabClientInstanceAPI::GetPublisherData(
        const PlayFabClientGetPublisherDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPublisherData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPublisherDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPublisherDataResult resultModel;
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

    AsyncOp<GetPurchaseResult> PlayFabClientInstanceAPI::GetPurchase(
        const PlayFabClientGetPurchaseRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetPurchase",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetPurchaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetPurchaseResult resultModel;
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

    AsyncOp<GetSharedGroupDataResult> PlayFabClientInstanceAPI::GetSharedGroupData(
        const PlayFabClientGetSharedGroupDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetSharedGroupData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetSharedGroupDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetSharedGroupDataResult resultModel;
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

    AsyncOp<GetStoreItemsResult> PlayFabClientInstanceAPI::GetStoreItems(
        const PlayFabClientGetStoreItemsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetStoreItems",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetStoreItemsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetStoreItemsResult resultModel;
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

    AsyncOp<GetTimeResult> PlayFabClientInstanceAPI::GetTime(
        const BaseRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetTime",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTimeResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTimeResult resultModel;
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

    AsyncOp<GetTitleDataResult> PlayFabClientInstanceAPI::GetTitleData(
        const PlayFabClientGetTitleDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetTitleData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTitleDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTitleDataResult resultModel;
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

    AsyncOp<GetTitleNewsResult> PlayFabClientInstanceAPI::GetTitleNews(
        const PlayFabClientGetTitleNewsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetTitleNews",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTitleNewsResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTitleNewsResult resultModel;
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

    AsyncOp<GetTitlePublicKeyResult> PlayFabClientInstanceAPI::GetTitlePublicKey(
        const PlayFabClientGetTitlePublicKeyRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/GetTitlePublicKey",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTitlePublicKeyResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTitlePublicKeyResult resultModel;
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

    AsyncOp<GetTradeStatusResponse> PlayFabClientInstanceAPI::GetTradeStatus(
        const PlayFabClientGetTradeStatusRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetTradeStatus",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetTradeStatusResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetTradeStatusResponse resultModel;
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

    AsyncOp<GetUserDataResult> PlayFabClientInstanceAPI::GetUserData(
        const PlayFabClientGetUserDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetUserData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetUserDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetUserDataResult resultModel;
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

    AsyncOp<GetUserInventoryResult> PlayFabClientInstanceAPI::GetUserInventory(
        const PlayFabClientGetUserInventoryRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetUserInventory",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetUserInventoryResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetUserInventoryResult resultModel;
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

    AsyncOp<GetUserDataResult> PlayFabClientInstanceAPI::GetUserPublisherData(
        const PlayFabClientGetUserDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetUserPublisherData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetUserDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetUserDataResult resultModel;
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

    AsyncOp<GetUserDataResult> PlayFabClientInstanceAPI::GetUserPublisherReadOnlyData(
        const PlayFabClientGetUserDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetUserPublisherReadOnlyData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetUserDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetUserDataResult resultModel;
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

    AsyncOp<GetUserDataResult> PlayFabClientInstanceAPI::GetUserReadOnlyData(
        const PlayFabClientGetUserDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GetUserReadOnlyData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetUserDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetUserDataResult resultModel;
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

    AsyncOp<GetWindowsHelloChallengeResponse> PlayFabClientInstanceAPI::GetWindowsHelloChallenge(
        const PlayFabClientGetWindowsHelloChallengeRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/GetWindowsHelloChallenge",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GetWindowsHelloChallengeResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GetWindowsHelloChallengeResponse resultModel;
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

    AsyncOp<GrantCharacterToUserResult> PlayFabClientInstanceAPI::GrantCharacterToUser(
        const PlayFabClientGrantCharacterToUserRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/GrantCharacterToUser",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<GrantCharacterToUserResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                GrantCharacterToUserResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkAndroidDeviceID(
        const PlayFabClientLinkAndroidDeviceIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkAndroidDeviceID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkApple(
        const PlayFabClientLinkAppleRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkApple",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkCustomID(
        const PlayFabClientLinkCustomIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkCustomID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkFacebookAccount(
        const PlayFabClientLinkFacebookAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkFacebookAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkFacebookInstantGamesId(
        const PlayFabClientLinkFacebookInstantGamesIdRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkFacebookInstantGamesId",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkGameCenterAccount(
        const PlayFabClientLinkGameCenterAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkGameCenterAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkGoogleAccount(
        const PlayFabClientLinkGoogleAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkGoogleAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkIOSDeviceID(
        const PlayFabClientLinkIOSDeviceIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkIOSDeviceID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkKongregate(
        const PlayFabClientLinkKongregateAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkKongregate",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkNintendoServiceAccount(
        const PlayFabClientLinkNintendoServiceAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkNintendoServiceAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkNintendoSwitchDeviceId(
        const PlayFabClientLinkNintendoSwitchDeviceIdRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkNintendoSwitchDeviceId",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkOpenIdConnect(
        const PlayFabClientLinkOpenIdConnectRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkOpenIdConnect",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkPSNAccount(
        const PlayFabClientLinkPSNAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkPSNAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkSteamAccount(
        const PlayFabClientLinkSteamAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkSteamAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkTwitch(
        const PlayFabClientLinkTwitchAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkTwitch",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkWindowsHello(
        const PlayFabClientLinkWindowsHelloAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkWindowsHello",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::LinkXboxAccount(
        const PlayFabClientLinkXboxAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/LinkXboxAccount",
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

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithAndroidDeviceID(
        const PlayFabClientLoginWithAndroidDeviceIDRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithAndroidDeviceID",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithApple(
        const PlayFabClientLoginWithAppleRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithApple",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithCustomID(
        const PlayFabClientLoginWithCustomIDRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithCustomID",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithEmailAddress(
        const PlayFabClientLoginWithEmailAddressRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithEmailAddress",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithFacebook(
        const PlayFabClientLoginWithFacebookRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithFacebook",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithFacebookInstantGamesId(
        const PlayFabClientLoginWithFacebookInstantGamesIdRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithFacebookInstantGamesId",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithGameCenter(
        const PlayFabClientLoginWithGameCenterRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithGameCenter",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithGoogleAccount(
        const PlayFabClientLoginWithGoogleAccountRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithGoogleAccount",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithIOSDeviceID(
        const PlayFabClientLoginWithIOSDeviceIDRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithIOSDeviceID",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithKongregate(
        const PlayFabClientLoginWithKongregateRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithKongregate",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithNintendoServiceAccount(
        const PlayFabClientLoginWithNintendoServiceAccountRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithNintendoServiceAccount",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithNintendoSwitchDeviceId(
        const PlayFabClientLoginWithNintendoSwitchDeviceIdRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithNintendoSwitchDeviceId",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithOpenIdConnect(
        const PlayFabClientLoginWithOpenIdConnectRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithOpenIdConnect",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithPlayFab(
        const PlayFabClientLoginWithPlayFabRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithPlayFab",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithPSN(
        const PlayFabClientLoginWithPSNRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithPSN",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithSteam(
        const PlayFabClientLoginWithSteamRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithSteam",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithTwitch(
        const PlayFabClientLoginWithTwitchRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithTwitch",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithWindowsHello(
        const PlayFabClientLoginWithWindowsHelloRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithWindowsHello",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::LoginWithXbox(
        const PlayFabClientLoginWithXboxRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/LoginWithXbox",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<MatchmakeResult> PlayFabClientInstanceAPI::Matchmake(
        const PlayFabClientMatchmakeRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/Matchmake",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<MatchmakeResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                MatchmakeResult resultModel;
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

    AsyncOp<OpenTradeResponse> PlayFabClientInstanceAPI::OpenTrade(
        const PlayFabClientOpenTradeRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/OpenTrade",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<OpenTradeResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                OpenTradeResponse resultModel;
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

    AsyncOp<PayForPurchaseResult> PlayFabClientInstanceAPI::PayForPurchase(
        const PlayFabClientPayForPurchaseRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/PayForPurchase",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<PayForPurchaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                PayForPurchaseResult resultModel;
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

    AsyncOp<PurchaseItemResult> PlayFabClientInstanceAPI::PurchaseItem(
        const PlayFabClientPurchaseItemRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/PurchaseItem",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<PurchaseItemResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                PurchaseItemResult resultModel;
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

    AsyncOp<RedeemCouponResult> PlayFabClientInstanceAPI::RedeemCoupon(
        const PlayFabClientRedeemCouponRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RedeemCoupon",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<RedeemCouponResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                RedeemCouponResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::RefreshPSNAuthToken(
        const PlayFabClientRefreshPSNAuthTokenRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RefreshPSNAuthToken",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::RegisterForIOSPushNotification(
        const PlayFabClientRegisterForIOSPushNotificationRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RegisterForIOSPushNotification",
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

    AsyncOp<RegisterPlayFabUserResult> PlayFabClientInstanceAPI::RegisterPlayFabUser(
        const PlayFabClientRegisterPlayFabUserRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/RegisterPlayFabUser",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<RegisterPlayFabUserResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                RegisterPlayFabUserResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<LoginResult> PlayFabClientInstanceAPI::RegisterWithWindowsHello(
        const PlayFabClientRegisterWithWindowsHelloRequest& request,
        const TaskQueue& queue
    )
    {
        m_settings->titleId = request.titleId;
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/RegisterWithWindowsHello",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<LoginResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                LoginResult resultModel;
                resultModel.FromJson(serviceResponse.Data);
                /*                outResult.authenticationContext = std::make_shared<PlayFabAuthenticationContext>();
                outResult.authenticationContext->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                context->HandlePlayFabLogin(outResult.playFabId, outResult.sessionTicket, outResult.entityToken->entity->id, outResult.entityToken->entity->type, outResult.entityToken->entityToken);
                MultiStepClientLogin(context, outResult.settingsForUser->needsAttribution);
*/

                return resultModel;
            }
            else
            {
                return ServiceErrorToHR(serviceResponse.ErrorCode);
            }
        });
    }

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::RemoveContactEmail(
        const PlayFabClientRemoveContactEmailRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RemoveContactEmail",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::RemoveFriend(
        const PlayFabClientRemoveFriendRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RemoveFriend",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::RemoveGenericID(
        const PlayFabClientRemoveGenericIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RemoveGenericID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::RemoveSharedGroupMembers(
        const PlayFabClientRemoveSharedGroupMembersRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RemoveSharedGroupMembers",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::ReportAdActivity(
        const PlayFabClientReportAdActivityRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ReportAdActivity",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::ReportDeviceInfo(
        const PlayFabClientDeviceInfoRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ReportDeviceInfo",
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

    AsyncOp<ReportPlayerClientResult> PlayFabClientInstanceAPI::ReportPlayer(
        const PlayFabClientReportPlayerClientRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ReportPlayer",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ReportPlayerClientResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ReportPlayerClientResult resultModel;
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

    AsyncOp<RestoreIOSPurchasesResult> PlayFabClientInstanceAPI::RestoreIOSPurchases(
        const PlayFabClientRestoreIOSPurchasesRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RestoreIOSPurchases",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<RestoreIOSPurchasesResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                RestoreIOSPurchasesResult resultModel;
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

    AsyncOp<RewardAdActivityResult> PlayFabClientInstanceAPI::RewardAdActivity(
        const PlayFabClientRewardAdActivityRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/RewardAdActivity",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<RewardAdActivityResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                RewardAdActivityResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::SendAccountRecoveryEmail(
        const PlayFabClientSendAccountRecoveryEmailRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;

        return m_httpClient.MakePostRequest(
            "/Client/SendAccountRecoveryEmail",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::SetFriendTags(
        const PlayFabClientSetFriendTagsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/SetFriendTags",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::SetPlayerSecret(
        const PlayFabClientSetPlayerSecretRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/SetPlayerSecret",
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

    AsyncOp<StartGameResult> PlayFabClientInstanceAPI::StartGame(
        const PlayFabClientStartGameRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/StartGame",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<StartGameResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                StartGameResult resultModel;
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

    AsyncOp<StartPurchaseResult> PlayFabClientInstanceAPI::StartPurchase(
        const PlayFabClientStartPurchaseRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/StartPurchase",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<StartPurchaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                StartPurchaseResult resultModel;
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

    AsyncOp<ModifyUserVirtualCurrencyResult> PlayFabClientInstanceAPI::SubtractUserVirtualCurrency(
        const PlayFabClientSubtractUserVirtualCurrencyRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/SubtractUserVirtualCurrency",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ModifyUserVirtualCurrencyResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ModifyUserVirtualCurrencyResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkAndroidDeviceID(
        const PlayFabClientUnlinkAndroidDeviceIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkAndroidDeviceID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkApple(
        const PlayFabClientUnlinkAppleRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkApple",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkCustomID(
        const PlayFabClientUnlinkCustomIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkCustomID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkFacebookAccount(
        const PlayFabClientUnlinkFacebookAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkFacebookAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkFacebookInstantGamesId(
        const PlayFabClientUnlinkFacebookInstantGamesIdRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkFacebookInstantGamesId",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkGameCenterAccount(
        const PlayFabClientUnlinkGameCenterAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkGameCenterAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkGoogleAccount(
        const PlayFabClientUnlinkGoogleAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkGoogleAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkIOSDeviceID(
        const PlayFabClientUnlinkIOSDeviceIDRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkIOSDeviceID",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkKongregate(
        const PlayFabClientUnlinkKongregateAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkKongregate",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkNintendoServiceAccount(
        const PlayFabClientUnlinkNintendoServiceAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkNintendoServiceAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkNintendoSwitchDeviceId(
        const PlayFabClientUnlinkNintendoSwitchDeviceIdRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkNintendoSwitchDeviceId",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkOpenIdConnect(
        const PlayFabClientUnlinkOpenIdConnectRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkOpenIdConnect",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkPSNAccount(
        const PlayFabClientUnlinkPSNAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkPSNAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkSteamAccount(
        const PlayFabClientUnlinkSteamAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkSteamAccount",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkTwitch(
        const PlayFabClientUnlinkTwitchAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkTwitch",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkWindowsHello(
        const PlayFabClientUnlinkWindowsHelloAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkWindowsHello",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UnlinkXboxAccount(
        const PlayFabClientUnlinkXboxAccountRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlinkXboxAccount",
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

    AsyncOp<UnlockContainerItemResult> PlayFabClientInstanceAPI::UnlockContainerInstance(
        const PlayFabClientUnlockContainerInstanceRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlockContainerInstance",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                UnlockContainerItemResult resultModel;
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

    AsyncOp<UnlockContainerItemResult> PlayFabClientInstanceAPI::UnlockContainerItem(
        const PlayFabClientUnlockContainerItemRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UnlockContainerItem",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<UnlockContainerItemResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                UnlockContainerItemResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UpdateAvatarUrl(
        const PlayFabClientUpdateAvatarUrlRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdateAvatarUrl",
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

    AsyncOp<UpdateCharacterDataResult> PlayFabClientInstanceAPI::UpdateCharacterData(
        const PlayFabClientUpdateCharacterDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdateCharacterData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<UpdateCharacterDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                UpdateCharacterDataResult resultModel;
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UpdateCharacterStatistics(
        const PlayFabClientUpdateCharacterStatisticsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdateCharacterStatistics",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UpdatePlayerStatistics(
        const PlayFabClientUpdatePlayerStatisticsRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdatePlayerStatistics",
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

    AsyncOp<BaseResult> PlayFabClientInstanceAPI::UpdateSharedGroupData(
        const PlayFabClientUpdateSharedGroupDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdateSharedGroupData",
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

    AsyncOp<UpdateUserDataResult> PlayFabClientInstanceAPI::UpdateUserData(
        const PlayFabClientUpdateUserDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdateUserData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                UpdateUserDataResult resultModel;
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

    AsyncOp<UpdateUserDataResult> PlayFabClientInstanceAPI::UpdateUserPublisherData(
        const PlayFabClientUpdateUserDataRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdateUserPublisherData",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<UpdateUserDataResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                UpdateUserDataResult resultModel;
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

    AsyncOp<UpdateUserTitleDisplayNameResult> PlayFabClientInstanceAPI::UpdateUserTitleDisplayName(
        const PlayFabClientUpdateUserTitleDisplayNameRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/UpdateUserTitleDisplayName",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<UpdateUserTitleDisplayNameResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                UpdateUserTitleDisplayNameResult resultModel;
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

    AsyncOp<ValidateAmazonReceiptResult> PlayFabClientInstanceAPI::ValidateAmazonIAPReceipt(
        const PlayFabClientValidateAmazonReceiptRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ValidateAmazonIAPReceipt",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ValidateAmazonReceiptResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ValidateAmazonReceiptResult resultModel;
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

    AsyncOp<ValidateGooglePlayPurchaseResult> PlayFabClientInstanceAPI::ValidateGooglePlayPurchase(
        const PlayFabClientValidateGooglePlayPurchaseRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ValidateGooglePlayPurchase",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ValidateGooglePlayPurchaseResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ValidateGooglePlayPurchaseResult resultModel;
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

    AsyncOp<ValidateIOSReceiptResult> PlayFabClientInstanceAPI::ValidateIOSReceipt(
        const PlayFabClientValidateIOSReceiptRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ValidateIOSReceipt",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ValidateIOSReceiptResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ValidateIOSReceiptResult resultModel;
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

    AsyncOp<ValidateWindowsReceiptResult> PlayFabClientInstanceAPI::ValidateWindowsStoreReceipt(
        const PlayFabClientValidateWindowsReceiptRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/ValidateWindowsStoreReceipt",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<ValidateWindowsReceiptResult>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                ValidateWindowsReceiptResult resultModel;
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

    AsyncOp<WriteEventResponse> PlayFabClientInstanceAPI::WriteCharacterEvent(
        const PlayFabClientWriteClientCharacterEventRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/WriteCharacterEvent",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<WriteEventResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                WriteEventResponse resultModel;
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

    AsyncOp<WriteEventResponse> PlayFabClientInstanceAPI::WritePlayerEvent(
        const PlayFabClientWriteClientPlayerEventRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/WritePlayerEvent",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<WriteEventResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                WriteEventResponse resultModel;
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

    AsyncOp<WriteEventResponse> PlayFabClientInstanceAPI::WriteTitleEvent(
        const PlayFabClientWriteTitleEventRequest& request,
        const TaskQueue& queue
    )
    {
        UnorderedMap<String, String> headers;
        headers.emplace("X-Authorization", m_context->clientSessionTicket.data());

        return m_httpClient.MakePostRequest(
            "/Client/WriteTitleEvent",
            headers,
            JsonUtils::ToJson(request),
            queue
        ).Then([ this ](Result<ServiceResponse> result) -> Result<WriteEventResponse>
        {
            // TODO bug: There is a lifetime issue with capturing this here since the client owns the object

            RETURN_IF_FAILED(result.hr);

            auto& serviceResponse = result.Payload();
            if (serviceResponse.HttpCode == 200)
            {
                WriteEventResponse resultModel;
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
                AttributeInstall(request, nullptr);
            }
            else if (context->advertisingIdType == PlayFabSettings::AD_TYPE_ANDROID_ID)
            {
                request.adid = context->advertisingIdValue.data();
                AttributeInstall(request, nullptr);
            }
        }
    }

}

#endif

#if defined(PLAYFAB_PLATFORM_WINDOWS)
#pragma warning (default: 4100) // formal parameters are part of a public interface
#endif // defined(PLAYFAB_PLATFORM_WINDOWS)
